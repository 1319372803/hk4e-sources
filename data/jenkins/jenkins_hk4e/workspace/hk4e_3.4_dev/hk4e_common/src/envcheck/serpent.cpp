// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/serpent.cpp

// Line 13: range 000000000CF66B49-000000000CF66D54
void __cdecl hexConvert(const char *s, unsigned __int8 *b)
{
  unsigned __int64 v2; // rcx
  char v3; // si
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  char v6; // si
  unsigned __int64 v7; // rcx
  unsigned __int8 *v8; // rcx
  unsigned __int8 e; // [rsp+1Bh] [rbp-15h]
  int i; // [rsp+1Ch] [rbp-14h]
  int j; // [rsp+20h] [rbp-10h]
  int j_0; // [rsp+24h] [rbp-Ch]

  for ( i = 0; i <= 31; i += 2 )
  {
    e = 0;
    for ( j = 0; j <= 15; ++j )
    {
      v2 = (unsigned __int64)&s[i];
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0
        && ((i + (unsigned __int8)s) & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&s[i]);
      }
      v3 = *(_BYTE *)v2;
      v4 = (unsigned __int64)&a0123456789abcd_0[j];
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)"0123456789abcdef") & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&a0123456789abcd_0[j]);
      }
      if ( v3 == *(_BYTE *)v4 )
      {
        e = 16 * j;
        break;
      }
    }
    for ( j_0 = 0; j_0 <= 15; ++j_0 )
    {
      v5 = (unsigned __int64)&s[i + 1];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((i + 1 + (unsigned __int8)s) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&s[i + 1]);
      }
      v6 = *(_BYTE *)v5;
      v7 = (unsigned __int64)&a0123456789abcd_0[j_0];
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
        && ((j_0 + (unsigned __int8)"0123456789abcdef") & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&a0123456789abcd_0[j_0]);
      }
      if ( v6 == *(_BYTE *)v7 )
      {
        e |= j_0;
        break;
      }
    }
    v8 = &b[i / -2 + 15];
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((i / -2 + 15 + (unsigned __int8)b) & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&b[i / -2 + 15]);
    }
    *v8 = e;
  }
};

// Line 35: range 000000000CF66D55-000000000CF66DF0
void __cdecl printHex(const unsigned __int8 *s, int bytelength, const char *message)
{
  unsigned __int8 *v3; // rcx
  int i; // [rsp+2Ch] [rbp-4h]

  puts(message);
  for ( i = 0; i < bytelength; ++i )
  {
    v3 = (unsigned __int8 *)&s[i];
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)s) & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&s[i]);
    }
    printf("%02x", *v3);
  }
  putchar(10);
};

// Line 44: range 000000000CF66DF1-000000000CF66E08
uint32_t __cdecl rotl(WORD_0 x, int p)
{
  return __ROL4__(x, p);
};

// Line 48: range 000000000CF66E09-000000000CF670E9
void __cdecl InitialPermutation(const uint *input, uint *result)
{
  uint v2; // ecx
  uint *v3; // rcx
  uint v4; // esi
  const uint *v5; // rcx
  unsigned int v6; // edx
  uint *v7; // rcx
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // esi
  unsigned __int64 v11; // rcx
  int v12; // edx
  uint *v13; // rcx
  int v14; // esi
  int i; // [rsp+10h] [rbp-10h]
  unsigned int replacer; // [rsp+14h] [rbp-Ch]
  int currentBlockPosition; // [rsp+18h] [rbp-8h]
  uint currentBlockReplacer; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result);
  }
  v2 = *result;
  if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)input & 7) + 3) >= *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input);
  }
  *result = *input & 1 | v2;
  v3 = result + 3;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 3);
  }
  v4 = *v3;
  v5 = input + 3;
  if ( *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)input + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input + 3);
  }
  v6 = *v5 & 0x80000000;
  v7 = result + 3;
  v8 = v6 | v4;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(result + 3);
  }
  *v7 = v8;
  for ( i = 1; i <= 126; ++i )
  {
    replacer = 32 * i % 127;
    currentBlockPosition = i / 32;
    currentBlockReplacer = replacer >> 5;
    v9 = (unsigned __int64)&result[i / 32];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v9);
    v10 = *(_DWORD *)v9;
    v11 = (unsigned __int64)&input[currentBlockReplacer];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * currentBlockReplacer + (_BYTE)input) & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&input[currentBlockReplacer]);
    }
    v12 = ((*(_DWORD *)v11 >> (replacer & 0x1F)) & 1) << (i % 32);
    v13 = &result[currentBlockPosition];
    v14 = v12 | v10;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 4 * currentBlockPosition) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_store4(&result[currentBlockPosition]);
    }
    *v13 = v14;
  }
};

// Line 62: range 000000000CF670EA-000000000CF673CC
void __cdecl FinalPermutation(const uint *input, uint *result)
{
  uint v2; // ecx
  uint *v3; // rcx
  uint v4; // esi
  const uint *v5; // rcx
  unsigned int v6; // edx
  uint *v7; // rcx
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // esi
  unsigned __int64 v11; // rcx
  int v12; // edx
  uint *v13; // rcx
  int v14; // esi
  int i; // [rsp+10h] [rbp-10h]
  unsigned int replacer; // [rsp+14h] [rbp-Ch]
  int currentBlockPosition; // [rsp+18h] [rbp-8h]
  uint currentBlockReplacer; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result);
  }
  v2 = *result;
  if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)input & 7) + 3) >= *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input);
  }
  *result = *input & 1 | v2;
  v3 = result + 3;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 3);
  }
  v4 = *v3;
  v5 = input + 3;
  if ( *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)input + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input + 3);
  }
  v6 = *v5 & 0x80000000;
  v7 = result + 3;
  v8 = v6 | v4;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(result + 3);
  }
  *v7 = v8;
  for ( i = 1; i <= 126; ++i )
  {
    replacer = 4 * i % 127;
    currentBlockPosition = i / 32;
    currentBlockReplacer = replacer >> 5;
    v9 = (unsigned __int64)&result[i / 32];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v9);
    v10 = *(_DWORD *)v9;
    v11 = (unsigned __int64)&input[currentBlockReplacer];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * currentBlockReplacer + (_BYTE)input) & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&input[currentBlockReplacer]);
    }
    v12 = ((*(_DWORD *)v11 >> (replacer & 0x1F)) & 1) << (i % 32);
    v13 = &result[currentBlockPosition];
    v14 = v12 | v10;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 4 * currentBlockPosition) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_store4(&result[currentBlockPosition]);
    }
    *v13 = v14;
  }
};

// Line 75: range 000000000CF673CD-000000000CF676AB
void __cdecl InverseInitialPermutation(const uint *input, uint *result)
{
  uint v2; // ecx
  uint *v3; // rcx
  uint v4; // esi
  const uint *v5; // rcx
  unsigned int v6; // edx
  uint *v7; // rcx
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // esi
  unsigned __int64 v11; // rcx
  int v12; // edx
  uint *v13; // rcx
  int v14; // esi
  int i; // [rsp+10h] [rbp-10h]
  unsigned int position; // [rsp+14h] [rbp-Ch]
  uint currentBlockPosition; // [rsp+18h] [rbp-8h]
  int currentBlockReplacer; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result);
  }
  v2 = *result;
  if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)input & 7) + 3) >= *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input);
  }
  *result = *input & 1 | v2;
  v3 = result + 3;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 3);
  }
  v4 = *v3;
  v5 = input + 3;
  if ( *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)input + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input + 3);
  }
  v6 = *v5 & 0x80000000;
  v7 = result + 3;
  v8 = v6 | v4;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(result + 3);
  }
  *v7 = v8;
  for ( i = 0; i <= 126; ++i )
  {
    position = 32 * i % 127;
    currentBlockPosition = position >> 5;
    currentBlockReplacer = i / 32;
    v9 = (unsigned __int64)&result[position >> 5];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (position >> 5) + (_BYTE)result) & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&result[currentBlockPosition]);
    }
    v10 = *(_DWORD *)v9;
    v11 = (unsigned __int64)&input[currentBlockReplacer];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * currentBlockReplacer + (_BYTE)input) & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&input[currentBlockReplacer]);
    }
    v12 = ((*(_DWORD *)v11 >> (i % 32)) & 1) << (position & 0x1F);
    v13 = &result[currentBlockPosition];
    v14 = v12 | v10;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 4 * currentBlockPosition) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_store4(&result[currentBlockPosition]);
    }
    *v13 = v14;
  }
};

// Line 87: range 000000000CF676AC-000000000CF6798C
void __cdecl InverseFinalPermutation(const uint *input, uint *result)
{
  uint v2; // ecx
  uint *v3; // rcx
  uint v4; // esi
  const uint *v5; // rcx
  unsigned int v6; // edx
  uint *v7; // rcx
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // esi
  unsigned __int64 v11; // rcx
  int v12; // edx
  uint *v13; // rcx
  int v14; // esi
  int i; // [rsp+10h] [rbp-10h]
  unsigned int position; // [rsp+14h] [rbp-Ch]
  uint currentBlockPosition; // [rsp+18h] [rbp-8h]
  int currentBlockReplacer; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result);
  }
  v2 = *result;
  if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)input & 7) + 3) >= *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input);
  }
  *result = *input & 1 | v2;
  v3 = result + 3;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 3);
  }
  v4 = *v3;
  v5 = input + 3;
  if ( *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)input + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(input + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(input + 3);
  }
  v6 = *v5 & 0x80000000;
  v7 = result + 3;
  v8 = v6 | v4;
  if ( *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(result + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(result + 3);
  }
  *v7 = v8;
  for ( i = 0; i <= 126; ++i )
  {
    position = 4 * i % 127;
    currentBlockPosition = position >> 5;
    currentBlockReplacer = i / 32;
    v9 = (unsigned __int64)&result[position >> 5];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (position >> 5) + (_BYTE)result) & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&result[currentBlockPosition]);
    }
    v10 = *(_DWORD *)v9;
    v11 = (unsigned __int64)&input[currentBlockReplacer];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * currentBlockReplacer + (_BYTE)input) & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&input[currentBlockReplacer]);
    }
    v12 = ((*(_DWORD *)v11 >> (i % 32)) & 1) << (position & 0x1F);
    v13 = &result[currentBlockPosition];
    v14 = v12 | v10;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 4 * currentBlockPosition) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_store4(&result[currentBlockPosition]);
    }
    *v13 = v14;
  }
};

// Line 100: range 000000000CF6798D-000000000CF67B40
void __cdecl setBit(uint *x, int p, BIT v)
{
  int v3; // edi
  unsigned __int64 v4; // rcx
  int v5; // esi
  uint *v6; // rcx
  int v7; // esi
  int v8; // edi
  unsigned __int64 v9; // rcx
  int v10; // esi
  uint *v11; // rcx
  int v12; // esi

  if ( v )
  {
    v3 = p / 32;
    v4 = (unsigned __int64)&x[p / 32];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (p / 32) + (_BYTE)x) & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      v3 = v4;
      __asan_report_load4(v4);
    }
    v5 = *(_DWORD *)v4;
    v6 = &x[v3];
    v7 = (1 << (p % 32)) | v5;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v6 = v7;
  }
  else
  {
    v8 = p / 32;
    v9 = (unsigned __int64)&x[p / 32];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (p / 32) + (_BYTE)x) & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v8 = v9;
      __asan_report_load4(v9);
    }
    v10 = *(_DWORD *)v9;
    v11 = &x[v8];
    v12 = ~(1 << (p % 32)) & v10;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v11);
    }
    *v11 = v12;
  }
};

// Line 110: range 000000000CF67B41-000000000CF67BD9
BIT __cdecl getBit(WORD_0 *x, int p)
{
  unsigned __int64 v2; // rcx

  v2 = (unsigned __int64)&x[p / 32];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v2);
  return ((unsigned int)(1 << (p % 32)) & *(_DWORD *)v2) >> (p % 32);
};

// Line 121: range 000000000CF67BDA-000000000CF689F3
void __cdecl key_generation_standard(uint (*subkeysHat)[4], const uchar *key, uchar *output, uint kBytes)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  const uchar *v8; // rcx
  uchar v9; // cl
  char v10; // dl
  char v11; // dl
  unsigned __int64 v12; // rcx
  int v13; // ecx
  char v14; // dl
  unsigned __int64 v15; // rcx
  int v16; // ecx
  char v17; // dl
  char v18; // dl
  int v19; // ecx
  char v20; // dl
  int v21; // ecx
  char v22; // dl
  int v23; // esi
  int v24; // ecx
  char v25; // dl
  int v26; // esi
  int v27; // ecx
  char v28; // dl
  int v29; // esi
  int v30; // ecx
  char v31; // dl
  uint32_t v32; // ecx
  char v33; // dl
  int v34; // esi
  int v35; // ecx
  char v36; // dl
  int v37; // edi
  int v38; // ecx
  unsigned __int64 v39; // rax
  int v40; // edi
  int v41; // ecx
  unsigned __int64 v42; // rax
  int v43; // edi
  int v44; // ecx
  unsigned __int64 v45; // rax
  int v46; // r8d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  char sboxOut; // [rsp+2Bh] [rbp-635h]
  int i_0; // [rsp+2Ch] [rbp-634h]
  int i_1; // [rsp+30h] [rbp-630h]
  int i_2; // [rsp+34h] [rbp-62Ch]
  int i_3; // [rsp+38h] [rbp-628h]
  int i_4; // [rsp+3Ch] [rbp-624h]
  int j; // [rsp+40h] [rbp-620h]
  int l; // [rsp+44h] [rbp-61Ch]
  int i_5; // [rsp+48h] [rbp-618h]
  ulong i; // [rsp+50h] [rbp-610h]
  char v62[1536]; // [rsp+60h] [rbp-600h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1504LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 1504);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 32 12 keysplit:125 96 32 11 tempkey:139 160 528 11 subkeys:124 816 560 12 interkey:126";
  *(_QWORD *)(v4 + 16) = key_generation_standard;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218959118;
  v7[536862724] = -218959118;
  v7[536862741] = -219021312;
  v7[536862742] = -218959118;
  v7[536862743] = -218959118;
  v7[536862744] = -218959118;
  v7[536862745] = 62194;
  v7[536862763] = -202116109;
  v7[536862764] = -202116109;
  v7[536862765] = -202116109;
  v7[536862766] = -202116109;
  if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 687) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 81) & 7) >= *(_BYTE *)(((v4 + 687) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 160, 528LL);
  }
  memset((void *)(v4 + 160), 0, 0x210uLL);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 32 + 95) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  if ( *(char *)(((v4 + 816) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 32 + 127) & 7) >= *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 816, 560LL);
  }
  memset((void *)(v4 + 816), 0, 0x230uLL);
  if ( !output )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stderr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&stderr);
    fwrite("Given output char pointer not initialized/allocated.\n", 1uLL, 0x35uLL, stderr);
    __asan_handle_no_return("Given output char pointer not initialized/allocated.\n");
    exit(1);
  }
  if ( kBytes > 0x1F )
  {
    if ( kBytes != 32 )
    {
      puts("Key Length Error");
      __asan_handle_no_return("Key Length Error");
      exit(1);
    }
    for ( i_1 = 0; i_1 <= 7; ++i_1 )
    {
      v15 = (unsigned __int64)&key[4 * i_1];
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * i_1 + (_BYTE)key) & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&key[4 * i_1]);
      }
      v16 = *(_DWORD *)v15;
      v17 = *(_BYTE *)(((4LL * i_1 + v4 + 32) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((4 * i_1 + v4 - 32 + 64) & 7) + 3) >= v17 )
        __asan_report_store4(4LL * i_1 + v4 + 32);
      *(_DWORD *)&v6[4 * i_1 - 1472] = v16;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_QWORD *)(v4 + 112) = 0LL;
    *(_QWORD *)(v4 + 120) = 0LL;
    for ( i = 0LL; i < kBytes; ++i )
    {
      v8 = &key[i];
      if ( *(_BYTE *)(((unsigned __int64)&key[i] >> 3) + 0x7FFF8000) != 0
        && (char)(((_BYTE)key + i) & 7) >= *(_BYTE *)(((unsigned __int64)&key[i] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&key[i]);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v4 + 96 + i) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((v4 - 32 + 0x80 + i) & 7) >= v10 )
        __asan_report_store1(v4 + 96 + i);
      v6[i - 1408] = v9;
    }
    v11 = *(_BYTE *)(((v4 + 96 + kBytes) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((v4 - 32 + 0x80 + kBytes) & 7) >= v11 )
      __asan_report_store1(v4 + 96 + kBytes);
    v6[kBytes - 1408] = 1;
    for ( i_0 = 0; i_0 <= 7; ++i_0 )
    {
      v12 = v4 + 96 + 4LL * i_0;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 0x80 + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 96 + 4LL * i_0);
      }
      v13 = *(_DWORD *)v12;
      v14 = *(_BYTE *)(((4LL * i_0 + v4 + 32) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((4 * i_0 + v4 - 32 + 64) & 7) + 3) >= v14 )
        __asan_report_store4(4LL * i_0 + v4 + 32);
      *(_DWORD *)&v6[4 * i_0 - 1472] = v13;
    }
    *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
  }
  for ( i_2 = 0; i_2 <= 7; ++i_2 )
  {
    v18 = *(_BYTE *)(((4LL * i_2 + v4 + 32) >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)(((4 * i_2 + v4 - 32 + 64) & 7) + 3) >= v18 )
      __asan_report_load4(4LL * i_2 + v4 + 32);
    v19 = *(_DWORD *)&v6[4 * i_2 - 1472];
    v20 = *(_BYTE *)(((4LL * i_2 + v4 + 816) >> 3) + 0x7FFF8000);
    if ( v20 != 0 && (char)(((4 * i_2 + v4 - 32 + 80) & 7) + 3) >= v20 )
      __asan_report_store4(4LL * i_2 + v4 + 816);
    *(_DWORD *)&v6[4 * i_2 - 688] = v19;
  }
  for ( i_3 = 8; i_3 <= 139; ++i_3 )
  {
    v21 = i_3 - 8;
    v22 = *(_BYTE *)(((4LL * (i_3 - 8) + v4 + 816) >> 3) + 0x7FFF8000);
    if ( v22 != 0 && (char)(((4 * (i_3 - 8) + v4 - 32 + 80) & 7) + 3) >= v22 )
      __asan_report_load4(4LL * (i_3 - 8) + v4 + 816);
    v23 = *(_DWORD *)&v6[4 * v21 - 688];
    v24 = i_3 - 5;
    v25 = *(_BYTE *)(((4LL * (i_3 - 5) + v4 + 816) >> 3) + 0x7FFF8000);
    if ( v25 != 0 && (char)(((4 * (i_3 - 5) + v4 - 32 + 80) & 7) + 3) >= v25 )
      __asan_report_load4(4LL * (i_3 - 5) + v4 + 816);
    v26 = *(_DWORD *)&v6[4 * v24 - 688] ^ v23;
    v27 = i_3 - 3;
    v28 = *(_BYTE *)(((4LL * (i_3 - 3) + v4 + 816) >> 3) + 0x7FFF8000);
    if ( v28 != 0 && (char)(((4 * (i_3 - 3) + v4 - 32 + 80) & 7) + 3) >= v28 )
      __asan_report_load4(4LL * (i_3 - 3) + v4 + 816);
    v29 = *(_DWORD *)&v6[4 * v27 - 688] ^ v26;
    v30 = i_3 - 1;
    v31 = *(_BYTE *)(((4LL * (i_3 - 1) + v4 + 816) >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)(((4 * (i_3 - 1) + v4 - 32 + 80) & 7) + 3) >= v31 )
      __asan_report_load4(4LL * (i_3 - 1) + v4 + 816);
    v32 = rotl(*(_DWORD *)&v6[4 * v30 - 688] ^ v29 ^ (i_3 - 8) ^ 0x9E3779B9, 11);
    v33 = *(_BYTE *)(((4LL * i_3 + v4 + 816) >> 3) + 0x7FFF8000);
    if ( v33 != 0 && (char)(((4 * i_3 + v4 - 32 + 80) & 7) + 3) >= v33 )
      __asan_report_store4(4LL * i_3 + v4 + 816);
    *(_DWORD *)&v6[4 * i_3 - 688] = v32;
  }
  for ( i_4 = 0; i_4 <= 32; ++i_4 )
  {
    for ( j = 0; j <= 31; ++j )
    {
      v34 = (35 - i_4) % 32 % 8;
      v35 = 4 * (i_4 + 2);
      v36 = *(_BYTE *)(((4LL * v35 + v4 + 816) >> 3) + 0x7FFF8000);
      if ( v36 != 0 && (char)(((16 * (i_4 + 2) + v4 - 32 + 80) & 7) + 3) >= v36 )
        __asan_report_load4(4LL * v35 + v4 + 816);
      v37 = (*(_DWORD *)&v6[4 * v35 - 688] >> j) & 1;
      v38 = 4 * i_4 + 9;
      v39 = 4LL * v38 + v4 + 816;
      if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * (4 * i_4 + 9) + v4 - 32 + 80) & 7) + 3) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
      {
        v37 = v39;
        __asan_report_load4(v39);
      }
      v40 = (2 * (unsigned __int8)(*(_DWORD *)&v6[4 * v38 - 688] >> j)) & 2 | v37;
      v41 = 4 * i_4 + 10;
      v42 = 4LL * v41 + v4 + 816;
      if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * (4 * i_4 + 10) + v4 - 32 + 80) & 7) + 3) >= *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
      {
        v40 = v42;
        __asan_report_load4(v42);
      }
      v43 = (4 * (unsigned __int8)(*(_DWORD *)&v6[4 * v41 - 688] >> j)) & 4 | v40;
      v44 = 4 * i_4 + 11;
      v45 = 4LL * v44 + v4 + 816;
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * (4 * i_4 + 11) + v4 - 32 + 80) & 7) + 3) >= *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
      {
        v43 = v45;
        __asan_report_load4(v45);
      }
      v46 = (8 * (unsigned __int8)(*(_DWORD *)&v6[4 * v44 - 688] >> j)) & 8 | v43;
      v47 = (unsigned __int64)&SBox[v34][v46];
      if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) != 0 && (char)((v47 & 7) + 3) >= *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v47);
      sboxOut = SBox[v34][v46];
      for ( l = 0; l <= 3; ++l )
      {
        v48 = 4 * (4LL * i_4 + l) + v4 + 160;
        if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((4 * (4 * i_4 + l) + v4 - 96) & 7) + 3) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v48);
        }
        *(_DWORD *)&v6[16 * i_4 - 1344 + 4 * l] |= ((sboxOut >> l) & 1) << j;
      }
    }
  }
  for ( i_5 = 0; i_5 <= 32; ++i_5 )
    InitialPermutation((const uint *)(16LL * i_5 + v4 + 160), &(*subkeysHat)[4 * i_5]);
  if ( v62 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80AC) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B4) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1504LL, v62);
  }
};

// Line 201: range 000000000CF689F4-000000000CF6976A
void __cdecl key_generation_bitslice(uint (*subkeys)[4], const uchar *key, uchar *output, uint kBytes)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  char *v8; // rdi
  const uchar *v9; // rcx
  uchar v10; // cl
  char v11; // dl
  char v12; // dl
  unsigned __int64 v13; // rcx
  int v14; // ecx
  char v15; // dl
  unsigned __int64 v16; // rcx
  int v17; // ecx
  char v18; // dl
  char v19; // dl
  int v20; // ecx
  char v21; // dl
  int v22; // ecx
  char v23; // dl
  int v24; // esi
  int v25; // ecx
  char v26; // dl
  int v27; // esi
  int v28; // ecx
  char v29; // dl
  int v30; // esi
  int v31; // ecx
  char v32; // dl
  uint32_t v33; // ecx
  char v34; // dl
  int v35; // esi
  int v36; // ecx
  char v37; // dl
  int v38; // edi
  int v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // edi
  int v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // edi
  int v45; // ecx
  unsigned __int64 v46; // rax
  int v47; // r8d
  unsigned __int64 v48; // rax
  uint *v49; // rcx
  char v50; // dl
  uint v51; // edx
  uint *v52; // rcx
  int v53; // esi
  char sboxOut; // [rsp+2Fh] [rbp-3B1h]
  int i_0; // [rsp+30h] [rbp-3B0h]
  int i_1; // [rsp+34h] [rbp-3ACh]
  int i_2; // [rsp+38h] [rbp-3A8h]
  int i_3; // [rsp+3Ch] [rbp-3A4h]
  int i_4; // [rsp+40h] [rbp-3A0h]
  int j; // [rsp+44h] [rbp-39Ch]
  int l; // [rsp+48h] [rbp-398h]
  ulong i; // [rsp+50h] [rbp-390h]
  char v66[896]; // [rsp+60h] [rbp-380h] BYREF

  v4 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(864LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 864);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 32 12 keysplit:204 112 32 11 tempkey:218 176 560 12 interkey:205";
  *(_QWORD *)(v4 + 16) = key_generation_bitslice;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = -219021312;
  v7[536862723] = 62194;
  v7[536862724] = -219021312;
  v7[536862725] = 62194;
  v7[536862743] = -202116109;
  v7[536862744] = -202116109;
  v7[536862745] = -202116109;
  v7[536862746] = -202116109;
  if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 79) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 79) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 48, 32LL);
  }
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  if ( *(char *)(((v4 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 176, 560LL);
  }
  memset((void *)(v4 + 176), 0, 0x230uLL);
  v8 = (char *)(v4 + 736);
  if ( !output )
  {
    __asan_handle_no_return(v8);
    exit(1);
  }
  if ( kBytes > 0x1F )
  {
    if ( kBytes != 32 )
    {
      __asan_handle_no_return(v8);
      exit(1);
    }
    for ( i_1 = 0; i_1 <= 7; ++i_1 )
    {
      v16 = (unsigned __int64)&key[4 * i_1];
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * i_1 + (_BYTE)key) & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&key[4 * i_1]);
      }
      v17 = *(_DWORD *)v16;
      v18 = *(_BYTE *)(((4LL * i_1 + v4 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((4 * i_1 + v4 + 48) & 7) + 3) >= v18 )
        __asan_report_store4(4LL * i_1 + v4 + 48);
      *(_DWORD *)&v6[4 * i_1 - 816] = v17;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 113) & 7) >= *(_BYTE *)(((v4 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 112, 32LL);
    }
    *(_QWORD *)(v4 + 112) = 0LL;
    *(_QWORD *)(v4 + 120) = 0LL;
    *(_QWORD *)(v4 + 128) = 0LL;
    *(_QWORD *)(v4 + 136) = 0LL;
    for ( i = 0LL; i < kBytes; ++i )
    {
      v9 = &key[i];
      if ( *(_BYTE *)(((unsigned __int64)&key[i] >> 3) + 0x7FFF8000) != 0
        && (char)(((_BYTE)key + i) & 7) >= *(_BYTE *)(((unsigned __int64)&key[i] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&key[i]);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v4 + 112 + i) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)((v4 + 112 + i) & 7) >= v11 )
        __asan_report_store1(v4 + 112 + i);
      v6[i - 752] = v10;
    }
    v12 = *(_BYTE *)(((v4 + 112 + kBytes) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)((v4 + 112 + kBytes) & 7) >= v12 )
      __asan_report_store1(v4 + 112 + kBytes);
    v6[kBytes - 752] = 1;
    for ( i_0 = 0; i_0 <= 7; ++i_0 )
    {
      v13 = v4 + 112 + 4LL * i_0;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 112 + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 112 + 4LL * i_0);
      }
      v14 = *(_DWORD *)v13;
      v15 = *(_BYTE *)(((4LL * i_0 + v4 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((4 * i_0 + v4 + 48) & 7) + 3) >= v15 )
        __asan_report_store4(4LL * i_0 + v4 + 48);
      *(_DWORD *)&v6[4 * i_0 - 816] = v14;
    }
    *(_DWORD *)(((v4 + 112) >> 3) + 0x7FFF8000) = -117901064;
  }
  for ( i_2 = 0; i_2 <= 7; ++i_2 )
  {
    v19 = *(_BYTE *)(((4LL * i_2 + v4 + 48) >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)(((4 * i_2 + v4 + 48) & 7) + 3) >= v19 )
      __asan_report_load4(4LL * i_2 + v4 + 48);
    v20 = *(_DWORD *)&v6[4 * i_2 - 816];
    v21 = *(_BYTE *)(((4LL * i_2 + v4 + 176) >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((4 * i_2 + v4 - 80) & 7) + 3) >= v21 )
      __asan_report_store4(4LL * i_2 + v4 + 176);
    *(_DWORD *)&v6[4 * i_2 - 688] = v20;
  }
  for ( i_3 = 8; i_3 <= 139; ++i_3 )
  {
    v22 = i_3 - 8;
    v23 = *(_BYTE *)(((4LL * (i_3 - 8) + v4 + 176) >> 3) + 0x7FFF8000);
    if ( v23 != 0 && (char)(((4 * (i_3 - 8) + v4 - 80) & 7) + 3) >= v23 )
      __asan_report_load4(4LL * (i_3 - 8) + v4 + 176);
    v24 = *(_DWORD *)&v6[4 * v22 - 688];
    v25 = i_3 - 5;
    v26 = *(_BYTE *)(((4LL * (i_3 - 5) + v4 + 176) >> 3) + 0x7FFF8000);
    if ( v26 != 0 && (char)(((4 * (i_3 - 5) + v4 - 80) & 7) + 3) >= v26 )
      __asan_report_load4(4LL * (i_3 - 5) + v4 + 176);
    v27 = *(_DWORD *)&v6[4 * v25 - 688] ^ v24;
    v28 = i_3 - 3;
    v29 = *(_BYTE *)(((4LL * (i_3 - 3) + v4 + 176) >> 3) + 0x7FFF8000);
    if ( v29 != 0 && (char)(((4 * (i_3 - 3) + v4 - 80) & 7) + 3) >= v29 )
      __asan_report_load4(4LL * (i_3 - 3) + v4 + 176);
    v30 = *(_DWORD *)&v6[4 * v28 - 688] ^ v27;
    v31 = i_3 - 1;
    v32 = *(_BYTE *)(((4LL * (i_3 - 1) + v4 + 176) >> 3) + 0x7FFF8000);
    if ( v32 != 0 && (char)(((4 * (i_3 - 1) + v4 - 80) & 7) + 3) >= v32 )
      __asan_report_load4(4LL * (i_3 - 1) + v4 + 176);
    v33 = rotl(*(_DWORD *)&v6[4 * v31 - 688] ^ v30 ^ (i_3 - 8) ^ 0x9E3779B9, 11);
    v34 = *(_BYTE *)(((4LL * i_3 + v4 + 176) >> 3) + 0x7FFF8000);
    if ( v34 != 0 && (char)(((4 * i_3 + v4 - 80) & 7) + 3) >= v34 )
      __asan_report_store4(4LL * i_3 + v4 + 176);
    *(_DWORD *)&v6[4 * i_3 - 688] = v33;
  }
  for ( i_4 = 0; i_4 <= 32; ++i_4 )
  {
    for ( j = 0; j <= 31; ++j )
    {
      v35 = (35 - i_4) % 32 % 8;
      v36 = 4 * (i_4 + 2);
      v37 = *(_BYTE *)(((4LL * v36 + v4 + 176) >> 3) + 0x7FFF8000);
      if ( v37 != 0 && (char)(((16 * (i_4 + 2) + v4 - 80) & 7) + 3) >= v37 )
        __asan_report_load4(4LL * v36 + v4 + 176);
      v38 = (*(_DWORD *)&v6[4 * v36 - 688] >> j) & 1;
      v39 = 4 * i_4 + 9;
      v40 = 4LL * v39 + v4 + 176;
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * (4 * i_4 + 9) + v4 - 80) & 7) + 3) >= *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
      {
        v38 = v40;
        __asan_report_load4(v40);
      }
      v41 = (2 * (unsigned __int8)(*(_DWORD *)&v6[4 * v39 - 688] >> j)) & 2 | v38;
      v42 = 4 * i_4 + 10;
      v43 = 4LL * v42 + v4 + 176;
      if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * (4 * i_4 + 10) + v4 - 80) & 7) + 3) >= *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
      {
        v41 = v43;
        __asan_report_load4(v43);
      }
      v44 = (4 * (unsigned __int8)(*(_DWORD *)&v6[4 * v42 - 688] >> j)) & 4 | v41;
      v45 = 4 * i_4 + 11;
      v46 = 4LL * v45 + v4 + 176;
      if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * (4 * i_4 + 11) + v4 - 80) & 7) + 3) >= *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
      {
        v44 = v46;
        __asan_report_load4(v46);
      }
      v47 = (8 * (unsigned __int8)(*(_DWORD *)&v6[4 * v45 - 688] >> j)) & 8 | v44;
      v48 = (unsigned __int64)&SBox[v35][v47];
      if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0 && (char)((v48 & 7) + 3) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v48);
      sboxOut = SBox[v35][v47];
      for ( l = 0; l <= 3; ++l )
      {
        v49 = &(*subkeys)[4 * i_4];
        v50 = *(_BYTE *)(((unsigned __int64)&v49[l] >> 3) + 0x7FFF8000);
        if ( v50 != 0 && (char)((((_BYTE)v49 + 4 * l) & 7) + 3) >= v50 )
          __asan_report_load4(&v49[l]);
        v51 = v49[l];
        v52 = &(*subkeys)[4 * i_4];
        v53 = v51 | (((sboxOut >> l) & 1) << j);
        LOBYTE(v51) = *(_BYTE *)(((unsigned __int64)&v52[l] >> 3) + 0x7FFF8000);
        if ( (_BYTE)v51 != 0 && (char)((((_BYTE)v52 + 4 * l) & 7) + 3) >= (char)v51 )
          __asan_report_store4(&v52[l]);
        v52[l] = v53;
      }
    }
  }
  if ( v66 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = -168430091;
  }
};

// Line 275: range 000000000CF6976B-000000000CF6A6D7
void __cdecl serpent_encrypt_standard(
        const unsigned __int8 *plaintext,
        const unsigned __int8 *key,
        unsigned __int8 *output,
        unsigned int kBytes)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  __int64 v8; // rsi
  char v9; // dl
  int v10; // ecx
  char v11; // dl
  int v12; // ecx
  char v13; // dl
  int v14; // ecx
  char v15; // dl
  int v16; // r8d
  char v17; // dl
  uint v18; // ecx
  int v19; // r9d
  char v20; // dl
  uint v21; // esi
  int v22; // ecx
  int v23; // r9d
  char v24; // dl
  uint v25; // esi
  int v26; // ecx
  int v27; // r9d
  char v28; // dl
  uint v29; // esi
  int v30; // ecx
  int v31; // r9d
  char v32; // dl
  uint v33; // esi
  int v34; // ecx
  int v35; // r9d
  char v36; // dl
  uint v37; // esi
  int v38; // ecx
  int v39; // r9d
  char v40; // dl
  uint v41; // esi
  int v42; // ecx
  int v43; // r9d
  char v44; // dl
  char v45; // dl
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  char v54; // dl
  __int64 v55; // rcx
  __int64 v56; // rbx
  char b; // [rsp+23h] [rbp-35Dh]
  int i; // [rsp+24h] [rbp-35Ch]
  int j; // [rsp+28h] [rbp-358h]
  int j_0; // [rsp+2Ch] [rbp-354h]
  int a; // [rsp+30h] [rbp-350h]
  int j_1; // [rsp+34h] [rbp-34Ch]
  char v65[832]; // [rsp+40h] [rbp-340h] BYREF

  v4 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(800LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 800);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 16 10 result:290 80 16 5 X:298 112 16 15 finalResult:334 144 528 14 subkeysHat:278";
  *(_QWORD *)(v4 + 16) = serpent_encrypt_standard;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862741] = -202116109;
  v7[536862742] = -202116109;
  v7[536862743] = -202116109;
  v7[536862744] = -202116109;
  if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 144, 528LL);
  }
  memset((void *)(v4 + 144), 0, 0x210uLL);
  key_generation_standard((uint (*)[4])(v4 + 144), key, output, kBytes);
  if ( *(_WORD *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 48, key);
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  v8 = v4 + 48;
  InitialPermutation((const uint *)plaintext, (uint *)(v4 + 48));
  if ( *(_WORD *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 80, v8);
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  for ( i = 0; i <= 31; ++i )
  {
    for ( j = 0; j <= 3; ++j )
    {
      v9 = *(_BYTE *)(((4LL * j + v4 + 48) >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((4 * j + v4 + 48) & 7) + 3) >= v9 )
        __asan_report_load4(4LL * j + v4 + 48);
      v10 = *(_DWORD *)&v6[4 * j - 752];
      v8 = 4LL * i;
      v11 = *(_BYTE *)(((4 * (v8 + j) + v4 + 144) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((4 * (v8 + j) + v4 - 112) & 7) + 3) >= v11 )
        __asan_report_load4(4 * (v8 + j) + v4 + 144);
      v12 = *(_DWORD *)&v6[16 * i - 656 + 4 * j] ^ v10;
      v13 = *(_BYTE *)(((4LL * j + v4 + 80) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v13 != 0;
      if ( v13 != 0 && (char)(((4 * j + v4 + 80) & 7) + 3) >= v13 )
        __asan_report_store4(4LL * j + v4 + 80);
      *(_DWORD *)&v6[4 * j - 720] = v12;
    }
    for ( j_0 = 0; j_0 <= 3; ++j_0 )
    {
      v14 = i % 8;
      v15 = *(_BYTE *)(((4LL * j_0 + v4 + 80) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((4 * j_0 + v4 + 80) & 7) + 3) >= v15 )
        __asan_report_load4(4LL * j_0 + v4 + 80);
      v16 = *(_DWORD *)&v6[4 * j_0 - 720] & 0xF;
      v17 = *(_BYTE *)(((unsigned __int64)&SBox[v14][v16] >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)&SBox[v14][v16] & 7) + 3) >= v17 )
        __asan_report_load4(&SBox[v14][*(_DWORD *)&v6[4 * j_0 - 720] & 0xF]);
      v18 = SBox[v14][v16];
      v19 = (*(_DWORD *)&v6[4 * j_0 - 720] >> 4) & 0xF;
      v20 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][v19] >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)&SBox[i % 8][v19] & 7) + 3) >= v20 )
        __asan_report_load4(&SBox[i % 8][(*(_DWORD *)&v6[4 * j_0 - 720] >> 4) & 0xF]);
      v21 = (16 * SBox[i % 8][v19]) | v18;
      v22 = i % 8;
      v23 = (*(_DWORD *)&v6[4 * j_0 - 720] >> 8) & 0xF;
      v24 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][v23] >> 3) + 0x7FFF8000);
      if ( v24 != 0 && (char)(((unsigned __int8)&SBox[i % 8][v23] & 7) + 3) >= v24 )
        __asan_report_load4(&SBox[i % 8][(*(_DWORD *)&v6[4 * j_0 - 720] >> 8) & 0xF]);
      v25 = (SBox[v22][v23] << 8) | v21;
      v26 = i % 8;
      v27 = (unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4;
      v28 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][(unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4] >> 3)
                     + 0x7FFF8000);
      if ( v28 != 0
        && (char)(((unsigned __int8)&SBox[i % 8][(unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4] & 7) + 3) >= v28 )
      {
        __asan_report_load4(&SBox[i % 8][(unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4]);
      }
      v29 = (SBox[v26][v27] << 12) | v25;
      v30 = i % 8;
      v31 = HIWORD(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF;
      v32 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][v31] >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (char)(((unsigned __int8)&SBox[i % 8][v31] & 7) + 3) >= v32 )
        __asan_report_load4(&SBox[i % 8][HIWORD(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF]);
      v33 = (SBox[v30][v31] << 16) | v29;
      v34 = i % 8;
      v35 = (*(_DWORD *)&v6[4 * j_0 - 720] >> 20) & 0xF;
      v36 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][v35] >> 3) + 0x7FFF8000);
      if ( v36 != 0 && (char)(((unsigned __int8)&SBox[i % 8][v35] & 7) + 3) >= v36 )
        __asan_report_load4(&SBox[i % 8][(*(_DWORD *)&v6[4 * j_0 - 720] >> 20) & 0xF]);
      v37 = (SBox[v34][v35] << 20) | v33;
      v38 = i % 8;
      v39 = HIBYTE(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF;
      v40 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][v39] >> 3) + 0x7FFF8000);
      if ( v40 != 0 && (char)(((unsigned __int8)&SBox[i % 8][v39] & 7) + 3) >= v40 )
        __asan_report_load4(&SBox[i % 8][HIBYTE(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF]);
      v41 = (SBox[v38][v39] << 24) | v37;
      v42 = i % 8;
      v43 = *(_DWORD *)&v6[4 * j_0 - 720] >> 28;
      v44 = *(_BYTE *)(((unsigned __int64)&SBox[i % 8][v43] >> 3) + 0x7FFF8000);
      if ( v44 != 0 && (char)(((unsigned __int8)&SBox[i % 8][v43] & 7) + 3) >= v44 )
        __asan_report_load4(&SBox[i % 8][*(_DWORD *)&v6[4 * j_0 - 720] >> 28]);
      v8 = (SBox[v42][v43] << 28) | v41;
      *(_DWORD *)&v6[4 * j_0 - 720] = v8;
    }
    if ( i > 30 )
    {
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 80);
      v46 = *(_DWORD *)(v4 + 80);
      if ( *(_BYTE *)(((v4 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 656);
      v47 = *(_DWORD *)(v4 + 656) ^ v46;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 48);
      *(_DWORD *)(v4 + 48) = v47;
      if ( *(_BYTE *)(((v4 + 84) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 84) & 7) + 3) >= *(_BYTE *)(((v4 + 84) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 84);
      }
      v48 = *(_DWORD *)(v4 + 84);
      if ( *(_BYTE *)(((v4 + 660) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 108) & 7) + 3) >= *(_BYTE *)(((v4 + 660) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 660);
      }
      v49 = *(_DWORD *)(v4 + 660) ^ v48;
      if ( *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 52) & 7) + 3) >= *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v4 + 52);
      }
      *(_DWORD *)(v4 + 52) = v49;
      if ( *(_BYTE *)(((v4 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 88);
      v50 = *(_DWORD *)(v4 + 88);
      if ( *(_BYTE *)(((v4 + 664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 664);
      v51 = *(_DWORD *)(v4 + 664) ^ v50;
      if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 56);
      *(_DWORD *)(v4 + 56) = v51;
      v8 = (((_BYTE)v4 + 92) & 7u) + 3;
      if ( *(_BYTE *)(((v4 + 92) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 92) & 7) + 3) >= *(_BYTE *)(((v4 + 92) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 92);
      }
      v52 = *(_DWORD *)(v4 + 92);
      if ( *(_BYTE *)(((v4 + 668) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 100) & 7) + 3) >= *(_BYTE *)(((v4 + 668) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 668);
      }
      v53 = *(_DWORD *)(v4 + 668) ^ v52;
      v54 = *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v54 != 0;
      if ( v54 != 0 && (char)(((v4 + 60) & 7) + 3) >= v54 )
        __asan_report_store4(v4 + 60);
      *(_DWORD *)(v4 + 60) = v53;
    }
    else
    {
      for ( a = 0; a <= 127; ++a )
      {
        b = 0;
        for ( j_1 = 0; ; ++j_1 )
        {
          v45 = *(_BYTE *)(((unsigned __int64)&LTTable[a][j_1] >> 3) + 0x7FFF8000);
          if ( v45 != 0 && (char)(((unsigned __int8)&LTTable[a][j_1] & 7) + 3) >= v45 )
            __asan_report_load4(&LTTable[a][j_1]);
          if ( LTTable[a][j_1] == 255 )
            break;
          b ^= getBit((WORD_0 *)(v4 + 80), LTTable[a][j_1]);
        }
        v8 = (unsigned int)a;
        setBit((uint *)(v4 + 48), a, b);
      }
    }
  }
  if ( *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 112, v8);
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  FinalPermutation((const uint *)(v4 + 48), (uint *)(v4 + 112));
  if ( *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 112);
  v55 = *(_QWORD *)(v4 + 112);
  v56 = *(_QWORD *)(v4 + 120);
  if ( ((unsigned __int8)output & 7) >= *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)output + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(output, 16LL);
  }
  *(_QWORD *)output = v55;
  *((_QWORD *)output + 1) = v56;
  if ( v65 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8060) = -168430091;
  }
};

// Line 343: range 000000000CF6A6D8-000000000CF6B87A
void __cdecl serpent_encrypt_bitslice(
        const unsigned __int8 *plaintext,
        const unsigned __int8 *key,
        unsigned __int8 *output,
        unsigned int kBytes)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  unsigned __int64 v8; // rcx
  int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ecx
  char v12; // dl
  unsigned __int64 v13; // rcx
  int v14; // esi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // r8d
  char v19; // dl
  const unsigned __int8 *v20; // rcx
  int v21; // edx
  unsigned __int8 *v22; // rcx
  int v23; // esi
  const unsigned __int8 *v24; // rcx
  int v25; // edx
  unsigned __int8 *v26; // rcx
  int v27; // esi
  const unsigned __int8 *v28; // rcx
  int v29; // edx
  unsigned __int8 *v30; // rcx
  int v31; // esi
  const unsigned __int8 *v32; // rcx
  int v33; // r14d
  uint32_t v34; // r14d
  WORD_0 *v35; // rcx
  uint32_t v36; // eax
  unsigned __int64 v37; // r14
  uint32_t v38; // ecx
  const unsigned __int8 *v39; // rcx
  int v40; // r14d
  WORD_0 *v41; // rcx
  uint32_t v42; // r14d
  uint32_t v43; // eax
  unsigned __int64 v44; // r14
  uint32_t v45; // ecx
  uint32_t v46; // esi
  const unsigned __int8 *v47; // rcx
  int v48; // esi
  const unsigned __int8 *v49; // rcx
  uint32_t v50; // ecx
  WORD_0 *v51; // rcx
  uint32_t v52; // esi
  const unsigned __int8 *v53; // rcx
  int v54; // esi
  const unsigned __int8 *v55; // rcx
  unsigned __int64 v56; // r14
  uint32_t v57; // ecx
  WORD_0 v58; // ecx
  const unsigned __int8 *v59; // rcx
  int v60; // esi
  unsigned __int8 *v61; // rcx
  int v62; // esi
  const unsigned __int8 *v63; // rcx
  int v64; // esi
  unsigned __int8 *v65; // rcx
  int v66; // esi
  const unsigned __int8 *v67; // rcx
  int v68; // esi
  unsigned __int8 *v69; // rcx
  int v70; // esi
  __int64 v71; // rcx
  __int64 v72; // rbx
  int i; // [rsp+28h] [rbp-328h]
  int j; // [rsp+2Ch] [rbp-324h]
  int j_0; // [rsp+30h] [rbp-320h]
  uint v; // [rsp+34h] [rbp-31Ch]
  char v80[784]; // [rsp+40h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 736);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 16 6 uX:358 80 528 11 subkeys:345";
  *(_QWORD *)(v4 + 16) = serpent_encrypt_bitslice;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862739] = -202116109;
  v7[536862740] = -202116109;
  v7[536862741] = -202116109;
  v7[536862742] = -202116109;
  if ( *(char *)(((v4 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 80, 528LL);
  }
  memset((void *)(v4 + 80), 0, 0x210uLL);
  key_generation_bitslice((uint (*)[4])(v4 + 80), key, output, kBytes);
  if ( *(_WORD *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 48, key);
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  for ( i = 0; i <= 31; ++i )
  {
    for ( j = 0; j <= 3; ++j )
    {
      v8 = (unsigned __int64)&plaintext[4 * j];
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * j + (_BYTE)plaintext) & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&plaintext[4 * j]);
      }
      v9 = *(_DWORD *)v8;
      v10 = 4 * (4LL * i + j) + v4 + 80;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v10);
      v11 = *(_DWORD *)&v6[16 * i - 656 + 4 * j] ^ v9;
      v12 = *(_BYTE *)(((4LL * j + v4 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((4 * j + v4 - 32 + 80) & 7) + 3) >= v12 )
        __asan_report_store4(4LL * j + v4 + 48);
      *(_DWORD *)&v6[4 * j - 688] = v11;
      v13 = (unsigned __int64)&plaintext[4 * j];
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * j + (_BYTE)plaintext) & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&plaintext[4 * j]);
      }
      *(_DWORD *)v13 = 0;
    }
    for ( j_0 = 0; j_0 <= 31; ++j_0 )
    {
      v14 = i % 8;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      v15 = (*(_DWORD *)(v4 + 48) >> j_0) & 1;
      if ( *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 84) & 7) + 3) >= *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) )
      {
        v15 = v4 + 52;
        __asan_report_load4(v4 + 52);
      }
      v16 = (2 * (unsigned __int8)(*(_DWORD *)(v4 + 52) >> j_0)) & 2 | v15;
      if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) <= 3 )
      {
        v16 = v4 + 56;
        __asan_report_load4(v4 + 56);
      }
      v17 = (4 * (unsigned __int8)(*(_DWORD *)(v4 + 56) >> j_0)) & 4 | v16;
      if ( *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 92) & 7) + 3) >= *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000) )
      {
        v17 = v4 + 60;
        __asan_report_load4(v4 + 60);
      }
      v18 = (8 * (unsigned __int8)(*(_DWORD *)(v4 + 60) >> j_0)) & 8 | v17;
      v19 = *(_BYTE *)(((unsigned __int64)&SBox[v14][v18] >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)&SBox[v14][v18] & 7) + 3) >= v19 )
        __asan_report_load4(&SBox[v14][(8 * (unsigned __int8)(*(_DWORD *)(v4 + 60) >> j_0)) & 8 | v17]);
      v = SBox[v14][v18];
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      *(_DWORD *)plaintext |= (v & 1) << j_0;
      v20 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v21 = *(_DWORD *)v20;
      v22 = (unsigned __int8 *)(plaintext + 4);
      v23 = v21 | (((v >> 1) & 1) << j_0);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 4);
      }
      *(_DWORD *)v22 = v23;
      v24 = plaintext + 8;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v25 = *(_DWORD *)v24;
      v26 = (unsigned __int8 *)(plaintext + 8);
      v27 = v25 | (((v >> 2) & 1) << j_0);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 8);
      }
      *(_DWORD *)v26 = v27;
      v28 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v29 = *(_DWORD *)v28;
      v30 = (unsigned __int8 *)(plaintext + 12);
      v31 = v29 | (((v >> 3) & 1) << j_0);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 12);
      }
      *(_DWORD *)v30 = v31;
    }
    if ( i > 30 )
    {
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v58 = *(_DWORD *)plaintext;
      if ( *(_BYTE *)(((v4 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 592);
      *(_DWORD *)plaintext = *(_DWORD *)(v4 + 592) ^ v58;
      v59 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v60 = *(_DWORD *)v59;
      if ( *(_BYTE *)(((v4 + 596) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 116) & 7) + 3) >= *(_BYTE *)(((v4 + 596) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 596);
      }
      v61 = (unsigned __int8 *)(plaintext + 4);
      v62 = *(_DWORD *)(v4 + 596) ^ v60;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 4);
      }
      *(_DWORD *)v61 = v62;
      v63 = plaintext + 8;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v64 = *(_DWORD *)v63;
      if ( *(_BYTE *)(((v4 + 600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 600);
      v65 = (unsigned __int8 *)(plaintext + 8);
      v66 = *(_DWORD *)(v4 + 600) ^ v64;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 8);
      }
      *(_DWORD *)v65 = v66;
      v67 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v68 = *(_DWORD *)v67;
      if ( *(_BYTE *)(((v4 + 604) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 124) & 7) + 3) >= *(_BYTE *)(((v4 + 604) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 604);
      }
      v69 = (unsigned __int8 *)(plaintext + 12);
      v70 = *(_DWORD *)(v4 + 604) ^ v68;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 12);
      }
      *(_DWORD *)v69 = v70;
    }
    else
    {
      v32 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v33 = *(_DWORD *)v32;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v34 = rotl(*(_DWORD *)plaintext, 13) ^ v33;
      v35 = (WORD_0 *)(plaintext + 8);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v36 = v34 ^ rotl(*v35, 3);
      v37 = (unsigned __int64)(plaintext + 4);
      v38 = rotl(v36, 1);
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) != 0 && (char)((v37 & 7) + 3) >= *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_store4(v37);
      *(_DWORD *)v37 = v38;
      v39 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v40 = *(_DWORD *)v39;
      v41 = (WORD_0 *)(plaintext + 8);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v42 = rotl(*v41, 3) ^ v40;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v43 = v42 ^ (8 * rotl(*(_DWORD *)plaintext, 13));
      v44 = (unsigned __int64)(plaintext + 12);
      v45 = rotl(v43, 7);
      if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) != 0 && (char)((v44 & 7) + 3) >= *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
        __asan_report_store4(v44);
      *(_DWORD *)v44 = v45;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v46 = rotl(*(_DWORD *)plaintext, 13);
      v47 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v48 = *(_DWORD *)v47 ^ v46;
      v49 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v50 = rotl(v48 ^ *(_DWORD *)v49, 5);
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext);
      }
      *(_DWORD *)plaintext = v50;
      v51 = (WORD_0 *)(plaintext + 8);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v52 = rotl(*v51, 3);
      v53 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v54 = *(_DWORD *)v53 ^ v52;
      v55 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v56 = (unsigned __int64)(plaintext + 8);
      v57 = rotl(v54 ^ (*(_DWORD *)v55 << 7), 22);
      if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) != 0 && (char)((v56 & 7) + 3) >= *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        __asan_report_store4(v56);
      *(_DWORD *)v56 = v57;
    }
  }
  if ( ((unsigned __int8)plaintext & 7) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(plaintext, 16LL);
  }
  v71 = *(_QWORD *)plaintext;
  v72 = *((_QWORD *)plaintext + 1);
  if ( ((unsigned __int8)output & 7) >= *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)output + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(output, 16LL);
  }
  *(_QWORD *)output = v71;
  *((_QWORD *)output + 1) = v72;
  if ( v80 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
};

// Line 410: range 000000000CF6B87B-000000000CF6C7E7
void __cdecl serpent_decrypt_standard(
        const unsigned __int8 *plaintext,
        const unsigned __int8 *key,
        unsigned __int8 *output,
        unsigned int kBytes)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  __int64 v8; // rsi
  char v9; // dl
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  char v18; // dl
  int v19; // ecx
  char v20; // dl
  int v21; // r8d
  char v22; // dl
  uint v23; // ecx
  int v24; // r9d
  char v25; // dl
  uint v26; // esi
  int v27; // ecx
  int v28; // r9d
  char v29; // dl
  uint v30; // esi
  int v31; // ecx
  int v32; // r9d
  char v33; // dl
  uint v34; // esi
  int v35; // ecx
  int v36; // r9d
  char v37; // dl
  uint v38; // esi
  int v39; // ecx
  int v40; // r9d
  char v41; // dl
  uint v42; // esi
  int v43; // ecx
  int v44; // r9d
  char v45; // dl
  uint v46; // esi
  int v47; // ecx
  int v48; // r9d
  char v49; // dl
  char v50; // dl
  int v51; // ecx
  char v52; // dl
  int v53; // ecx
  char v54; // dl
  __int64 v55; // rcx
  __int64 v56; // rbx
  char b; // [rsp+23h] [rbp-35Dh]
  int i; // [rsp+24h] [rbp-35Ch]
  int a; // [rsp+28h] [rbp-358h]
  int j; // [rsp+2Ch] [rbp-354h]
  int j_0; // [rsp+30h] [rbp-350h]
  int j_1; // [rsp+34h] [rbp-34Ch]
  char v65[832]; // [rsp+40h] [rbp-340h] BYREF

  v4 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(800LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 800);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 16 10 result:423 80 16 5 X:431 112 16 15 finalResult:468 144 528 14 subkeysHat:412";
  *(_QWORD *)(v4 + 16) = serpent_decrypt_standard;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862741] = -202116109;
  v7[536862742] = -202116109;
  v7[536862743] = -202116109;
  v7[536862744] = -202116109;
  if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 144, 528LL);
  }
  memset((void *)(v4 + 144), 0, 0x210uLL);
  key_generation_standard((uint (*)[4])(v4 + 144), key, output, kBytes);
  if ( *(_WORD *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 48, key);
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  v8 = v4 + 48;
  InverseFinalPermutation((const uint *)plaintext, (uint *)(v4 + 48));
  if ( *(_WORD *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 80, v8);
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  for ( i = 31; i >= 0; --i )
  {
    if ( i > 30 )
    {
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      v10 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((v4 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 656);
      v11 = *(_DWORD *)(v4 + 656) ^ v10;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80);
      *(_DWORD *)(v4 + 80) = v11;
      if ( *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 52) & 7) + 3) >= *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 52);
      }
      v12 = *(_DWORD *)(v4 + 52);
      if ( *(_BYTE *)(((v4 + 660) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 108) & 7) + 3) >= *(_BYTE *)(((v4 + 660) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 660);
      }
      v13 = *(_DWORD *)(v4 + 660) ^ v12;
      if ( *(_BYTE *)(((v4 + 84) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 84) & 7) + 3) >= *(_BYTE *)(((v4 + 84) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v4 + 84);
      }
      *(_DWORD *)(v4 + 84) = v13;
      if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 56);
      v14 = *(_DWORD *)(v4 + 56);
      if ( *(_BYTE *)(((v4 + 664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 664);
      v15 = *(_DWORD *)(v4 + 664) ^ v14;
      if ( *(_BYTE *)(((v4 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 88);
      *(_DWORD *)(v4 + 88) = v15;
      v8 = (((_BYTE)v4 + 60) & 7u) + 3;
      if ( *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 60) & 7) + 3) >= *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 60);
      }
      v16 = *(_DWORD *)(v4 + 60);
      if ( *(_BYTE *)(((v4 + 668) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 100) & 7) + 3) >= *(_BYTE *)(((v4 + 668) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 668);
      }
      v17 = *(_DWORD *)(v4 + 668) ^ v16;
      v18 = *(_BYTE *)(((v4 + 92) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v18 != 0;
      if ( v18 != 0 && (char)(((v4 + 92) & 7) + 3) >= v18 )
        __asan_report_store4(v4 + 92);
      *(_DWORD *)(v4 + 92) = v17;
    }
    else
    {
      for ( a = 0; a <= 127; ++a )
      {
        b = 0;
        for ( j = 0; ; ++j )
        {
          v9 = *(_BYTE *)(((unsigned __int64)&LTTableInverse[a][j] >> 3) + 0x7FFF8000);
          if ( v9 != 0 && (char)(((unsigned __int8)&LTTableInverse[a][j] & 7) + 3) >= v9 )
            __asan_report_load4(&LTTableInverse[a][j]);
          if ( LTTableInverse[a][j] == 255 )
            break;
          b ^= getBit((WORD_0 *)(v4 + 48), LTTableInverse[a][j]);
        }
        v8 = (unsigned int)a;
        setBit((uint *)(v4 + 80), a, b);
      }
    }
    for ( j_0 = 0; j_0 <= 3; ++j_0 )
    {
      v19 = i % 8;
      v20 = *(_BYTE *)(((4LL * j_0 + v4 + 80) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((4 * j_0 + v4 + 80) & 7) + 3) >= v20 )
        __asan_report_load4(4LL * j_0 + v4 + 80);
      v21 = *(_DWORD *)&v6[4 * j_0 - 720] & 0xF;
      v22 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[v19][v21] >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((unsigned __int8)&SBoxInverse[v19][v21] & 7) + 3) >= v22 )
        __asan_report_load4(&SBoxInverse[v19][*(_DWORD *)&v6[4 * j_0 - 720] & 0xF]);
      v23 = SBoxInverse[v19][v21];
      v24 = (*(_DWORD *)&v6[4 * j_0 - 720] >> 4) & 0xF;
      v25 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][v24] >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)&SBoxInverse[i % 8][v24] & 7) + 3) >= v25 )
        __asan_report_load4(&SBoxInverse[i % 8][(*(_DWORD *)&v6[4 * j_0 - 720] >> 4) & 0xF]);
      v26 = (16 * SBoxInverse[i % 8][v24]) | v23;
      v27 = i % 8;
      v28 = (*(_DWORD *)&v6[4 * j_0 - 720] >> 8) & 0xF;
      v29 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][v28] >> 3) + 0x7FFF8000);
      if ( v29 != 0 && (char)(((unsigned __int8)&SBoxInverse[i % 8][v28] & 7) + 3) >= v29 )
        __asan_report_load4(&SBoxInverse[i % 8][(*(_DWORD *)&v6[4 * j_0 - 720] >> 8) & 0xF]);
      v30 = (SBoxInverse[v27][v28] << 8) | v26;
      v31 = i % 8;
      v32 = (unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4;
      v33 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][(unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4] >> 3)
                     + 0x7FFF8000);
      if ( v33 != 0
        && (char)(((unsigned __int8)&SBoxInverse[i % 8][(unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4] & 7)
                + 3) >= v33 )
      {
        __asan_report_load4(&SBoxInverse[i % 8][(unsigned __int8)HIBYTE(*(_WORD *)&v6[4 * j_0 - 720]) >> 4]);
      }
      v34 = (SBoxInverse[v31][v32] << 12) | v30;
      v35 = i % 8;
      v36 = HIWORD(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF;
      v37 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][v36] >> 3) + 0x7FFF8000);
      if ( v37 != 0 && (char)(((unsigned __int8)&SBoxInverse[i % 8][v36] & 7) + 3) >= v37 )
        __asan_report_load4(&SBoxInverse[i % 8][HIWORD(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF]);
      v38 = (SBoxInverse[v35][v36] << 16) | v34;
      v39 = i % 8;
      v40 = (*(_DWORD *)&v6[4 * j_0 - 720] >> 20) & 0xF;
      v41 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][v40] >> 3) + 0x7FFF8000);
      if ( v41 != 0 && (char)(((unsigned __int8)&SBoxInverse[i % 8][v40] & 7) + 3) >= v41 )
        __asan_report_load4(&SBoxInverse[i % 8][(*(_DWORD *)&v6[4 * j_0 - 720] >> 20) & 0xF]);
      v42 = (SBoxInverse[v39][v40] << 20) | v38;
      v43 = i % 8;
      v44 = HIBYTE(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF;
      v45 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][v44] >> 3) + 0x7FFF8000);
      if ( v45 != 0 && (char)(((unsigned __int8)&SBoxInverse[i % 8][v44] & 7) + 3) >= v45 )
        __asan_report_load4(&SBoxInverse[i % 8][HIBYTE(*(_DWORD *)&v6[4 * j_0 - 720]) & 0xF]);
      v46 = (SBoxInverse[v43][v44] << 24) | v42;
      v47 = i % 8;
      v48 = *(_DWORD *)&v6[4 * j_0 - 720] >> 28;
      v49 = *(_BYTE *)(((unsigned __int64)&SBoxInverse[i % 8][v48] >> 3) + 0x7FFF8000);
      if ( v49 != 0 && (char)(((unsigned __int8)&SBoxInverse[i % 8][v48] & 7) + 3) >= v49 )
        __asan_report_load4(&SBoxInverse[i % 8][*(_DWORD *)&v6[4 * j_0 - 720] >> 28]);
      v8 = (SBoxInverse[v47][v48] << 28) | v46;
      *(_DWORD *)&v6[4 * j_0 - 720] = v8;
    }
    for ( j_1 = 0; j_1 <= 3; ++j_1 )
    {
      v50 = *(_BYTE *)(((4LL * j_1 + v4 + 80) >> 3) + 0x7FFF8000);
      if ( v50 != 0 && (char)(((4 * j_1 + v4 + 80) & 7) + 3) >= v50 )
        __asan_report_load4(4LL * j_1 + v4 + 80);
      v51 = *(_DWORD *)&v6[4 * j_1 - 720];
      v8 = 4LL * i;
      v52 = *(_BYTE *)(((4 * (v8 + j_1) + v4 + 144) >> 3) + 0x7FFF8000);
      if ( v52 != 0 && (char)(((4 * (v8 + j_1) + v4 - 112) & 7) + 3) >= v52 )
        __asan_report_load4(4 * (v8 + j_1) + v4 + 144);
      v53 = *(_DWORD *)&v6[16 * i - 656 + 4 * j_1] ^ v51;
      v54 = *(_BYTE *)(((4LL * j_1 + v4 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v54 != 0;
      if ( v54 != 0 && (char)(((4 * j_1 + v4 + 48) & 7) + 3) >= v54 )
        __asan_report_store4(4LL * j_1 + v4 + 48);
      *(_DWORD *)&v6[4 * j_1 - 752] = v53;
    }
  }
  if ( *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 112, v8);
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  InverseInitialPermutation((const uint *)(v4 + 48), (uint *)(v4 + 112));
  if ( *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 112);
  v55 = *(_QWORD *)(v4 + 112);
  v56 = *(_QWORD *)(v4 + 120);
  if ( ((unsigned __int8)output & 7) >= *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)output + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(output, 16LL);
  }
  *(_QWORD *)output = v55;
  *((_QWORD *)output + 1) = v56;
  if ( v65 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8060) = -168430091;
  }
};

// Line 478: range 000000000CF6C7E8-000000000CF6DA50
void __cdecl serpent_decrypt_bitslice(
        const unsigned __int8 *plaintext,
        const unsigned __int8 *key,
        unsigned __int8 *output,
        unsigned int kBytes)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  WORD_0 *v8; // rcx
  uint32_t v9; // esi
  const unsigned __int8 *v10; // rcx
  int v11; // esi
  const unsigned __int8 *v12; // rcx
  int v13; // edx
  unsigned __int8 *v14; // rcx
  int v15; // esi
  uint32_t v16; // esi
  const unsigned __int8 *v17; // rcx
  int v18; // esi
  const unsigned __int8 *v19; // rcx
  int v20; // ecx
  WORD_0 *v21; // rcx
  unsigned __int64 v22; // r14
  uint32_t v23; // ecx
  WORD_0 *v24; // rcx
  unsigned __int64 v25; // r14
  uint32_t v26; // ecx
  const unsigned __int8 *v27; // rcx
  int v28; // esi
  const unsigned __int8 *v29; // rcx
  int v30; // esi
  unsigned __int8 *v31; // rcx
  int v32; // esi
  const unsigned __int8 *v33; // rcx
  int v34; // esi
  const unsigned __int8 *v35; // rcx
  int v36; // eax
  unsigned __int8 *v37; // rcx
  int v38; // esi
  WORD_0 *v39; // rcx
  unsigned __int64 v40; // r14
  uint32_t v41; // ecx
  uint32_t v42; // ecx
  WORD_0 v43; // ecx
  const unsigned __int8 *v44; // rcx
  int v45; // esi
  unsigned __int8 *v46; // rcx
  int v47; // esi
  const unsigned __int8 *v48; // rcx
  int v49; // esi
  unsigned __int8 *v50; // rcx
  int v51; // esi
  const unsigned __int8 *v52; // rcx
  int v53; // esi
  unsigned __int8 *v54; // rcx
  int v55; // esi
  int v56; // esi
  int v57; // edi
  const unsigned __int8 *v58; // rcx
  int v59; // edi
  const unsigned __int8 *v60; // rcx
  int v61; // edi
  const unsigned __int8 *v62; // rcx
  int v63; // r8d
  unsigned __int64 v64; // rax
  char v65; // dl
  int v66; // esi
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  int v69; // esi
  __int64 v70; // rcx
  __int64 v71; // rbx
  int i; // [rsp+28h] [rbp-328h]
  int j; // [rsp+2Ch] [rbp-324h]
  int j_0; // [rsp+30h] [rbp-320h]
  uint v; // [rsp+34h] [rbp-31Ch]
  char v79[784]; // [rsp+40h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 736);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 16 6 uX:493 80 528 11 subkeys:480";
  *(_QWORD *)(v4 + 16) = serpent_decrypt_bitslice;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862739] = -202116109;
  v7[536862740] = -202116109;
  v7[536862741] = -202116109;
  v7[536862742] = -202116109;
  if ( *(char *)(((v4 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 80, 528LL);
  }
  memset((void *)(v4 + 80), 0, 0x210uLL);
  key_generation_bitslice((uint (*)[4])(v4 + 80), key, output, kBytes);
  if ( *(_WORD *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 48, key);
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  for ( i = 31; i >= 0; --i )
  {
    if ( i > 30 )
    {
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v43 = *(_DWORD *)plaintext;
      if ( *(_BYTE *)(((v4 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 592);
      *(_DWORD *)plaintext = *(_DWORD *)(v4 + 592) ^ v43;
      v44 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v45 = *(_DWORD *)v44;
      if ( *(_BYTE *)(((v4 + 596) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 116) & 7) + 3) >= *(_BYTE *)(((v4 + 596) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 596);
      }
      v46 = (unsigned __int8 *)(plaintext + 4);
      v47 = *(_DWORD *)(v4 + 596) ^ v45;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 4);
      }
      *(_DWORD *)v46 = v47;
      v48 = plaintext + 8;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v49 = *(_DWORD *)v48;
      if ( *(_BYTE *)(((v4 + 600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 600);
      v50 = (unsigned __int8 *)(plaintext + 8);
      v51 = *(_DWORD *)(v4 + 600) ^ v49;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 8);
      }
      *(_DWORD *)v50 = v51;
      v52 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v53 = *(_DWORD *)v52;
      if ( *(_BYTE *)(((v4 + 604) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 124) & 7) + 3) >= *(_BYTE *)(((v4 + 604) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 604);
      }
      v54 = (unsigned __int8 *)(plaintext + 12);
      v55 = *(_DWORD *)(v4 + 604) ^ v53;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 12);
      }
      *(_DWORD *)v54 = v55;
    }
    else
    {
      v8 = (WORD_0 *)(plaintext + 8);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v9 = rotl(*v8, 10);
      v10 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v11 = *(_DWORD *)v10 ^ v9;
      v12 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v13 = *(_DWORD *)v12 << 7;
      v14 = (unsigned __int8 *)(plaintext + 8);
      v15 = v13 ^ v11;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 8);
      }
      *(_DWORD *)v14 = v15;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v16 = rotl(*(_DWORD *)plaintext, 27);
      v17 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v18 = *(_DWORD *)v17 ^ v16;
      v19 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v20 = *(_DWORD *)v19 ^ v18;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext);
      }
      *(_DWORD *)plaintext = v20;
      v21 = (WORD_0 *)(plaintext + 12);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v22 = (unsigned __int64)(plaintext + 12);
      v23 = rotl(*v21, 25);
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && (char)((v22 & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        __asan_report_store4(v22);
      *(_DWORD *)v22 = v23;
      v24 = (WORD_0 *)(plaintext + 4);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v25 = (unsigned __int64)(plaintext + 4);
      v26 = rotl(*v24, 31);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) != 0 && (char)((v25 & 7) + 3) >= *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        __asan_report_store4(v25);
      *(_DWORD *)v25 = v26;
      v27 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 12);
      }
      v28 = *(_DWORD *)v27;
      v29 = plaintext + 8;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v30 = *(_DWORD *)v29 ^ v28;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v31 = (unsigned __int8 *)(plaintext + 12);
      v32 = (8 * *(_DWORD *)plaintext) ^ v30;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 12);
      }
      *(_DWORD *)v31 = v32;
      v33 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 4);
      }
      v34 = *(_DWORD *)plaintext ^ *(_DWORD *)v33;
      v35 = plaintext + 8;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v36 = *(_DWORD *)v35;
      v37 = (unsigned __int8 *)(plaintext + 4);
      v38 = v36 ^ v34;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext + 4);
      }
      *(_DWORD *)v37 = v38;
      v39 = (WORD_0 *)(plaintext + 8);
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext + 8);
      }
      v40 = (unsigned __int64)(plaintext + 8);
      v41 = rotl(*v39, 29);
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) != 0 && (char)((v40 & 7) + 3) >= *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        __asan_report_store4(v40);
      *(_DWORD *)v40 = v41;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v42 = rotl(*(_DWORD *)plaintext, 19);
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(plaintext);
      }
      *(_DWORD *)plaintext = v42;
    }
    for ( j = 0; j <= 31; ++j )
    {
      v56 = i % 8;
      if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)plaintext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(plaintext);
      }
      v57 = (*(_DWORD *)plaintext >> j) & 1;
      v58 = plaintext + 4;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
      {
        v57 = (_DWORD)plaintext + 4;
        __asan_report_load4(plaintext + 4);
      }
      v59 = (2 * (unsigned __int8)(*(_DWORD *)v58 >> j)) & 2 | v57;
      v60 = plaintext + 8;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
      {
        v59 = (_DWORD)plaintext + 8;
        __asan_report_load4(plaintext + 8);
      }
      v61 = (4 * (unsigned __int8)(*(_DWORD *)v60 >> j)) & 4 | v59;
      v62 = plaintext + 12;
      if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
      {
        v61 = (_DWORD)plaintext + 12;
        __asan_report_load4(plaintext + 12);
      }
      v63 = (8 * (unsigned __int8)(*(_DWORD *)v62 >> j)) & 8 | v61;
      v64 = (unsigned __int64)&SBoxInverse[v56][v63];
      if ( *(_BYTE *)((v64 >> 3) + 0x7FFF8000) != 0 && (char)((v64 & 7) + 3) >= *(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v64);
      v = SBoxInverse[v56][v63];
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      *(_DWORD *)(v4 + 48) |= (v & 1) << j;
      if ( *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 84) & 7) + 3) >= *(_BYTE *)(((v4 + 52) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 52);
      }
      *(_DWORD *)(v4 + 52) |= ((v >> 1) & 1) << j;
      if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 56);
      *(_DWORD *)(v4 + 56) |= ((v >> 2) & 1) << j;
      if ( *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 - 32 + 92) & 7) + 3) >= *(_BYTE *)(((v4 + 60) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 60);
      }
      *(_DWORD *)(v4 + 60) |= ((v >> 3) & 1) << j;
    }
    for ( j_0 = 0; j_0 <= 3; ++j_0 )
    {
      v65 = *(_BYTE *)(((4LL * j_0 + v4 + 48) >> 3) + 0x7FFF8000);
      if ( v65 != 0 && (char)(((4 * j_0 + v4 - 32 + 80) & 7) + 3) >= v65 )
        __asan_report_load4(4LL * j_0 + v4 + 48);
      v66 = *(_DWORD *)&v6[4 * j_0 - 688];
      v67 = 4 * (4LL * i + j_0) + v4 + 80;
      if ( *(_BYTE *)((v67 >> 3) + 0x7FFF8000) != 0 && (char)((v67 & 7) + 3) >= *(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v67);
      v68 = (unsigned __int64)&plaintext[4 * j_0];
      v69 = *(_DWORD *)&v6[16 * i - 656 + 4 * j_0] ^ v66;
      if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)plaintext + 4 * j_0) & 7) + 3) >= *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&plaintext[4 * j_0]);
      }
      *(_DWORD *)v68 = v69;
      *(_DWORD *)&v6[4 * j_0 - 688] = 0;
    }
  }
  if ( ((unsigned __int8)plaintext & 7) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(plaintext, 16LL);
  }
  v70 = *(_QWORD *)plaintext;
  v71 = *((_QWORD *)plaintext + 1);
  if ( ((unsigned __int8)output & 7) >= *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)output + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(output + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(output, 16LL);
  }
  *(_QWORD *)output = v70;
  *((_QWORD *)output + 1) = v71;
  if ( v79 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
};
