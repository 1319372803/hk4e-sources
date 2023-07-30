// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-ucs2.c

// Line 73: range 000000000CFC1E90-000000000CFC1E92
size_t __fastcall my_caseup_str_mb2_or_mb4(CHARSET_INFO *cs_0, char *s)
{
  return 0LL;
};

// Line 82: range 000000000CFC1EA0-000000000CFC1EA2
size_t __fastcall my_casedn_str_mb2_or_mb4(CHARSET_INFO *cs_0, char *s)
{
  return 0LL;
};

// Line 92: range 000000000CFC1EB0-000000000CFC1EB2
int __fastcall my_strcasecmp_mb2_or_mb4(CHARSET_INFO *cs_0, const char *s, const char *t)
{
  return 0;
};

// Line 99: range 000000000CFC1EC0-000000000CFC2121
__int64 __fastcall my_strntol_mb2_or_mb4(
        CHARSET_INFO *cs_0,
        const char *nptr,
        size_t l,
        int base,
        char **endptr,
        int *err)
{
  char *v6; // r15
  const uchar *v7; // r12
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  ulong v13; // rdx
  __int64 result; // rax
  unsigned int cutoff; // [rsp+4h] [rbp-74h]
  int overflow; // [rsp+10h] [rbp-68h]
  int negative; // [rsp+14h] [rbp-64h]
  const uchar *save; // [rsp+28h] [rbp-50h]
  ulong wc[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = (char *)nptr;
  v7 = (const uchar *)&nptr[l];
  *err = 0;
  negative = 0;
  while ( 1 )
  {
    v9 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v7);
    if ( v9 <= 0 )
    {
      if ( endptr )
        *endptr = v6;
      *err = v9 == 0 ? 84 : 33;
      return 0LL;
    }
    if ( wc[0] == 32 )
      goto LABEL_8;
    if ( wc[0] <= 0x20 )
      break;
    if ( wc[0] != 43 )
    {
      if ( wc[0] != 45 )
        goto bs;
      negative ^= 1u;
    }
LABEL_8:
    v6 += v9;
  }
  if ( wc[0] == 9 )
    goto LABEL_8;
bs:
  save = (const uchar *)v6;
  v10 = 0;
  overflow = 0;
  cutoff = 0xFFFFFFFF / base;
  while ( 2 )
  {
    v11 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v7);
    if ( v11 > 0 )
    {
      v6 += v11;
      v12 = wc[0];
      v13 = wc[0] - 48;
      if ( wc[0] - 48 > 9 )
      {
        if ( wc[0] - 65 <= 0x19 )
        {
          v13 = wc[0] - 55;
          wc[0] -= 55LL;
          if ( base <= v12 - 55 )
            goto LABEL_21;
LABEL_15:
          if ( v10 > cutoff || v10 == cutoff && 0xFFFFFFFF % base < v13 )
            overflow = 1;
          else
            v10 = v13 + base * v10;
          continue;
        }
        if ( wc[0] - 97 > 0x19 )
          goto LABEL_21;
        v13 = wc[0] - 87;
      }
      wc[0] = v13;
      if ( base <= (int)v13 )
        goto LABEL_21;
      goto LABEL_15;
    }
    break;
  }
  if ( v11 )
  {
LABEL_21:
    if ( endptr )
      *endptr = v6;
    if ( save == (const uchar *)v6 )
    {
      *err = 33;
      return 0LL;
    }
    else if ( negative )
    {
      if ( v10 > 0x80000000 || (result = -(__int64)v10, overflow) )
      {
        *err = 34;
        return 0xFFFFFFFF80000000LL;
      }
    }
    else if ( (v10 & 0x80000000) != 0 || overflow )
    {
      *err = 34;
      return 0x7FFFFFFFLL;
    }
    else
    {
      return v10;
    }
    return result;
  }
  if ( endptr )
    *endptr = v6;
  *err = 84;
  return 0LL;
};

// Line 210: range 000000000CFC2130-000000000CFC2354
ulong __fastcall my_strntoul_mb2_or_mb4(
        CHARSET_INFO *cs_0,
        const char *nptr,
        size_t l,
        int base,
        char **endptr,
        int *err)
{
  char *v6; // r15
  const uchar *v7; // r12
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  ulong v13; // rdx
  ulong result; // rax
  unsigned int cutoff; // [rsp+4h] [rbp-74h]
  int overflow; // [rsp+10h] [rbp-68h]
  int negative; // [rsp+14h] [rbp-64h]
  const uchar *save; // [rsp+28h] [rbp-50h]
  ulong wc[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = (char *)nptr;
  v7 = (const uchar *)&nptr[l];
  *err = 0;
  negative = 0;
  while ( 1 )
  {
    v9 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v7);
    if ( v9 <= 0 )
    {
      if ( endptr )
        *endptr = v6;
      *err = v9 == 0 ? 84 : 33;
      return 0LL;
    }
    if ( wc[0] == 32 )
      goto LABEL_8;
    if ( wc[0] <= 0x20 )
      break;
    if ( wc[0] != 43 )
    {
      if ( wc[0] != 45 )
        goto bs;
      negative ^= 1u;
    }
LABEL_8:
    v6 += v9;
  }
  if ( wc[0] == 9 )
    goto LABEL_8;
bs:
  save = (const uchar *)v6;
  v10 = 0;
  overflow = 0;
  cutoff = 0xFFFFFFFF / base;
  while ( 2 )
  {
    v11 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v7);
    if ( v11 > 0 )
    {
      v6 += v11;
      v12 = wc[0];
      v13 = wc[0] - 48;
      if ( wc[0] - 48 > 9 )
      {
        if ( wc[0] - 65 <= 0x19 )
        {
          v13 = wc[0] - 55;
          wc[0] -= 55LL;
          if ( base <= v12 - 55 )
            goto LABEL_21;
LABEL_15:
          if ( v10 > cutoff || v10 == cutoff && v13 > 0xFFFFFFFF % base )
            overflow = 1;
          else
            v10 = v13 + base * v10;
          continue;
        }
        if ( wc[0] - 97 > 0x19 )
          goto LABEL_21;
        v13 = wc[0] - 87;
      }
      wc[0] = v13;
      if ( base <= (int)v13 )
        goto LABEL_21;
      goto LABEL_15;
    }
    break;
  }
  if ( v11 )
  {
LABEL_21:
    if ( endptr )
      *endptr = v6;
    if ( save == (const uchar *)v6 )
    {
      *err = 33;
      return 0LL;
    }
    else if ( overflow )
    {
      *err = 34;
      return 0xFFFFFFFFLL;
    }
    else
    {
      result = v10;
      if ( negative )
        return -(__int64)v10;
    }
    return result;
  }
  if ( endptr )
    *endptr = v6;
  *err = 84;
  return 0LL;
};

// Line 314: range 000000000CFC2360-000000000CFC25CE
longlong __fastcall my_strntoll_mb2_or_mb4(
        CHARSET_INFO *cs_0,
        const char *nptr,
        size_t l,
        int base,
        char **endptr,
        int *err)
{
  char *v6; // r15
  const uchar *v8; // rbp
  int v9; // eax
  longlong v10; // rbx
  int v11; // eax
  int v12; // eax
  ulong v13; // rdx
  longlong result; // rax
  unsigned __int64 cutoff; // [rsp+8h] [rbp-80h]
  int overflow; // [rsp+20h] [rbp-68h]
  int negative; // [rsp+24h] [rbp-64h]
  const uchar *save; // [rsp+38h] [rbp-50h]
  ulong wc[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = (char *)nptr;
  v8 = (const uchar *)&nptr[l];
  *err = 0;
  negative = 0;
  while ( 1 )
  {
    v9 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v8);
    if ( v9 <= 0 )
    {
      if ( endptr )
        *endptr = v6;
      *err = v9 == 0 ? 84 : 33;
      return 0LL;
    }
    if ( wc[0] == 32 )
      goto LABEL_8;
    if ( wc[0] <= 0x20 )
      break;
    if ( wc[0] != 43 )
    {
      if ( wc[0] != 45 )
        goto bs;
      negative ^= 1u;
    }
LABEL_8:
    v6 += v9;
  }
  if ( wc[0] == 9 )
    goto LABEL_8;
bs:
  save = (const uchar *)v6;
  v10 = 0LL;
  overflow = 0;
  cutoff = 0xFFFFFFFFFFFFFFFFLL / base;
  while ( 2 )
  {
    v11 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v8);
    if ( v11 > 0 )
    {
      v6 += v11;
      v12 = wc[0];
      v13 = wc[0] - 48;
      if ( wc[0] - 48 > 9 )
      {
        if ( wc[0] - 65 <= 0x19 )
        {
          v13 = wc[0] - 55;
          wc[0] -= 55LL;
          if ( base <= v12 - 55 )
            goto LABEL_21;
LABEL_15:
          if ( v10 > cutoff || v10 == cutoff && (unsigned int)(0xFFFFFFFFFFFFFFFFLL % base) < v13 )
            overflow = 1;
          else
            v10 = v13 + base * v10;
          continue;
        }
        if ( wc[0] - 97 > 0x19 )
          goto LABEL_21;
        v13 = wc[0] - 87;
      }
      wc[0] = v13;
      if ( base <= (int)v13 )
        goto LABEL_21;
      goto LABEL_15;
    }
    break;
  }
  if ( v11 )
  {
LABEL_21:
    if ( endptr )
      *endptr = v6;
    if ( save == (const uchar *)v6 )
    {
      *err = 33;
      return 0LL;
    }
    else if ( negative )
    {
      if ( (unsigned __int64)v10 > 0x8000000000000000LL || (result = -v10, overflow) )
      {
        *err = 34;
        return 0x8000000000000000LL;
      }
    }
    else if ( v10 < 0 || overflow )
    {
      *err = 34;
      return 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      return v10;
    }
    return result;
  }
  if ( endptr )
    *endptr = v6;
  *err = 84;
  return 0LL;
};

// Line 425: range 000000000CFC25E0-000000000CFC2814
ulonglong __fastcall my_strntoull_mb2_or_mb4(
        CHARSET_INFO *cs_0,
        const char *nptr,
        size_t l,
        int base,
        char **endptr,
        int *err)
{
  char *v6; // r15
  const uchar *v8; // rbp
  int v9; // eax
  ulonglong v10; // rbx
  int v11; // eax
  int v12; // eax
  ulong v13; // rdx
  ulonglong result; // rax
  unsigned __int64 cutoff; // [rsp+8h] [rbp-80h]
  int overflow; // [rsp+20h] [rbp-68h]
  int negative; // [rsp+24h] [rbp-64h]
  const uchar *save; // [rsp+38h] [rbp-50h]
  ulong wc[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = (char *)nptr;
  v8 = (const uchar *)&nptr[l];
  *err = 0;
  negative = 0;
  while ( 1 )
  {
    v9 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v8);
    if ( v9 <= 0 )
    {
      if ( endptr )
        *endptr = v6;
      *err = v9 == 0 ? 84 : 33;
      return 0LL;
    }
    if ( wc[0] == 32 )
      goto LABEL_8;
    if ( wc[0] <= 0x20 )
      break;
    if ( wc[0] != 43 )
    {
      if ( wc[0] != 45 )
        goto bs;
      negative ^= 1u;
    }
LABEL_8:
    v6 += v9;
  }
  if ( wc[0] == 9 )
    goto LABEL_8;
bs:
  save = (const uchar *)v6;
  v10 = 0LL;
  overflow = 0;
  cutoff = 0xFFFFFFFFFFFFFFFFLL / base;
  while ( 2 )
  {
    v11 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v6, v8);
    if ( v11 > 0 )
    {
      v6 += v11;
      v12 = wc[0];
      v13 = wc[0] - 48;
      if ( wc[0] - 48 > 9 )
      {
        if ( wc[0] - 65 <= 0x19 )
        {
          v13 = wc[0] - 55;
          wc[0] -= 55LL;
          if ( base <= v12 - 55 )
            goto LABEL_21;
LABEL_15:
          if ( v10 > cutoff || v10 == cutoff && v13 > (unsigned int)(0xFFFFFFFFFFFFFFFFLL % base) )
            overflow = 1;
          else
            v10 = v13 + base * v10;
          continue;
        }
        if ( wc[0] - 97 > 0x19 )
          goto LABEL_21;
        v13 = wc[0] - 87;
      }
      wc[0] = v13;
      if ( base <= (int)v13 )
        goto LABEL_21;
      goto LABEL_15;
    }
    break;
  }
  if ( v11 )
  {
LABEL_21:
    if ( endptr )
      *endptr = v6;
    if ( save == (const uchar *)v6 )
    {
      *err = 33;
      return 0LL;
    }
    else if ( overflow )
    {
      *err = 34;
      return -1LL;
    }
    else
    {
      result = v10;
      if ( negative )
        return -(__int64)v10;
    }
    return result;
  }
  if ( endptr )
    *endptr = v6;
  *err = 84;
  return 0LL;
};

// Line 529: range 000000000CFC45E0-000000000CFC46B6
double __fastcall my_strntod_mb2_or_mb4(CHARSET_INFO *cs_0, char *nptr, size_t length, char **endptr, int *err)
{
  char *v5; // r14
  size_t v7; // rbp
  const uchar *v8; // rbp
  char *i; // r15
  int v10; // eax
  double result; // xmm0_8
  ulong wc; // [rsp+28h] [rbp-140h] BYREF
  char buf[256]; // [rsp+30h] [rbp-138h] BYREF

  v5 = nptr;
  v7 = 255LL;
  *err = 0;
  if ( length <= 0xFF )
    v7 = length;
  v8 = (const uchar *)&nptr[v7];
  for ( i = buf; ; *(i - 1) = wc )
  {
    v10 = cs_0->cset->mb_wc(cs_0, &wc, (const uchar *)v5, v8);
    if ( v10 <= 0 )
      break;
    v5 += v10;
    if ( wc - 1 > 0x64 )
      break;
    ++i;
  }
  *endptr = i;
  result = my_strtod(buf, endptr, err);
  *endptr = &nptr[cs_0->mbminlen * (*endptr - buf)];
  return result;
};

// Line 564: range 000000000CFC4500-000000000CFC45D4
ulonglong __fastcall my_strntoull10rnd_mb2_or_mb4(
        CHARSET_INFO *cs_0,
        const char *nptr,
        size_t length,
        int unsign_fl,
        char **endptr,
        int *err)
{
  const char *v6; // r14
  size_t v7; // rbp
  const uchar *v8; // rbp
  char *i; // r15
  int v10; // eax
  ulonglong result; // rax
  ulong wc; // [rsp+28h] [rbp-140h] BYREF
  char buf[256]; // [rsp+30h] [rbp-138h] BYREF

  v6 = nptr;
  v7 = 255LL;
  if ( length <= 0xFF )
    v7 = length;
  v8 = (const uchar *)&nptr[v7];
  for ( i = buf; ; *(i - 1) = wc )
  {
    v10 = cs_0->cset->mb_wc(cs_0, &wc, (const uchar *)v6, v8);
    if ( v10 <= 0 )
      break;
    v6 += v10;
    if ( wc - 1 > 0x64 )
      break;
    ++i;
  }
  result = my_strntoull10rnd_8bit(cs_0, buf, i - buf, unsign_fl, endptr, err);
  *endptr = (char *)&nptr[cs_0->mbminlen * (*endptr - buf)];
  return result;
};

// Line 597: range 000000000CFC2820-000000000CFC293E
size_t __fastcall my_l10tostr_mb2_or_mb4(CHARSET_INFO *cs_0, char *dst, size_t len, int radix, __int64 val)
{
  int v6; // esi
  char *v7; // rbx
  signed __int64 v8; // r9
  uchar *v9; // r13
  ulong v10; // rsi
  char *v11; // rbp
  int v12; // eax
  char buffer[66]; // [rsp+0h] [rbp-78h] BYREF

  v6 = 0;
  buffer[65] = 0;
  if ( radix < 0 && val < 0 )
  {
    val = -val;
    LOBYTE(v6) = 1;
  }
  v7 = &buffer[64];
  v8 = val / 0xAuLL;
  buffer[64] = val + 48 - 10 * (val / 0xAuLL);
  if ( val / 0xAuLL )
  {
    while ( 1 )
    {
      *--v7 = v8 + 48 - 10 * (v8 / 10);
      if ( !(v8 / 10) )
        break;
      v8 /= 10LL;
    }
  }
  if ( v6 )
    *--v7 = 45;
  v9 = (uchar *)&dst[len];
  if ( dst >= &dst[len] )
    return 0LL;
  v10 = *v7;
  if ( !(_BYTE)v10 )
    return 0LL;
  v11 = dst;
  do
  {
    v12 = cs_0->cset->wc_mb(cs_0, v10, (uchar *)v11, v9);
    if ( v12 <= 0 )
      break;
    ++v7;
    v11 += v12;
    if ( v9 <= (uchar *)v11 )
      break;
    v10 = *v7;
  }
  while ( (_BYTE)v10 );
  return (int)v11 - (int)dst;
};

// Line 648: range 000000000CFC2940-000000000CFC2A6E
size_t __fastcall my_ll10tostr_mb2_or_mb4(CHARSET_INFO *cs_0, char *dst, size_t len, int radix, longlong val)
{
  int v6; // esi
  char *v7; // rbx
  uchar *v8; // r13
  char v9; // al
  char *v10; // rbp
  int v11; // eax
  char buffer[65]; // [rsp+0h] [rbp-78h] BYREF

  v6 = 0;
  if ( radix < 0 && val < 0 )
  {
    val = -val;
    LOBYTE(v6) = 1;
  }
  buffer[64] = 0;
  if ( val )
  {
    v7 = &buffer[64];
    if ( val < 0 )
    {
      v7 = &buffer[63];
      buffer[63] = val % 0xAuLL + 48;
      val /= 0xAuLL;
    }
    while ( 1 )
    {
      *--v7 = val + 48 - 10 * (val / 10);
      if ( !(val / 10) )
        break;
      val /= 10LL;
    }
  }
  else
  {
    buffer[63] = 48;
    v7 = &buffer[63];
  }
  if ( v6 )
    *--v7 = 45;
  v8 = (uchar *)&dst[len];
  if ( dst >= &dst[len] )
    return 0LL;
  v9 = *v7;
  if ( !*v7 )
    return 0LL;
  v10 = dst;
  do
  {
    v11 = cs_0->cset->wc_mb(cs_0, v9, (uchar *)v10, v8);
    if ( v11 <= 0 )
      break;
    ++v7;
    v10 += v11;
    if ( v8 <= (uchar *)v10 )
      break;
    v9 = *v7;
  }
  while ( *v7 );
  return (int)v10 - (int)dst;
};

// Line 714: range 000000000CFC2A70-000000000CFC2E10
longlong __fastcall my_strtoll10_mb2(CHARSET_INFO *cs_0, const char *nptr, char **endptr, int *error)
{
  const char *v4; // r8
  char v5; // al
  const char *v6; // rdi
  char v7; // al
  char v8; // al
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r10
  int v12; // r9d
  longlong result; // rax
  char *v14; // rsi
  char *v15; // rbp
  unsigned __int8 v16; // di
  const char *v17; // rbp
  char *v18; // r13
  char *v19; // rdi
  unsigned __int64 v20; // rbp
  unsigned __int8 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // si
  unsigned __int8 v24; // r13
  unsigned __int64 v25; // rdx

  if ( !endptr )
    goto no_conv;
  v4 = &nptr[(*endptr - nptr + ((unsigned __int64)(*endptr - nptr) >> 63)) & 0xFFFFFFFFFFFFFFFELL];
  if ( nptr >= v4 || *nptr )
  {
    v6 = nptr;
  }
  else
  {
    v5 = nptr[1];
    v6 = nptr;
    if ( v5 == 32 || v5 == 9 )
    {
      do
      {
        v6 += 2;
        if ( v4 <= v6 )
          break;
        if ( *v6 )
          break;
        v7 = v6[1];
      }
      while ( v7 == 9 || v7 == 32 );
    }
  }
  if ( v6 == v4 )
    goto no_conv;
  if ( !*v6 && v6[1] == 45 )
  {
    v17 = v6 + 2;
    *error = -1;
    if ( v6 + 2 != v4 )
    {
      v9 = 8LL;
      v10 = 368547758LL;
      v11 = 92233720LL;
      v12 = 1;
      goto LABEL_39;
    }
no_conv:
    *error = 33;
    result = 0LL;
    *endptr = (char *)nptr;
    return result;
  }
  *error = 0;
  if ( *v6 )
    goto no_conv;
  v8 = v6[1];
  if ( v8 != 43 )
  {
    v9 = 15LL;
    v10 = 737095516LL;
    v11 = 184467440LL;
    v12 = 0;
    goto LABEL_15;
  }
  v17 = v6 + 2;
  if ( v6 + 2 == v4 )
    goto no_conv;
  v9 = 15LL;
  v10 = 737095516LL;
  v11 = 184467440LL;
  v12 = 0;
LABEL_39:
  if ( *v17 )
    goto no_conv;
  v8 = v6[3];
  v6 = v17;
LABEL_15:
  if ( v8 != 48 )
  {
    LOBYTE(result) = v8 - 48;
    if ( (unsigned __int8)result <= 9u )
    {
      v14 = (char *)(v6 + 2);
      v15 = (char *)(v6 + 18);
      result = (unsigned __int8)result;
      goto LABEL_18;
    }
    goto no_conv;
  }
  do
  {
    v6 += 2;
    if ( v6 == v4 )
    {
      v14 = (char *)v6;
      result = 0LL;
      goto end_i;
    }
  }
  while ( !*v6 && v6[1] == 48 );
  v15 = (char *)(v6 + 18);
  v14 = (char *)v6;
  result = 0LL;
LABEL_18:
  if ( v15 > v4 )
    v15 = (char *)v4;
  if ( v14 == v15 )
  {
LABEL_43:
    if ( v14 != v4 )
    {
      v18 = (char *)v4;
      v19 = v14;
      if ( v14 + 18 <= v4 )
        v18 = v14 + 18;
      v20 = 0LL;
      do
      {
        if ( *v19 )
          goto end_i_and_j;
        v21 = v19[1] - 48;
        if ( v21 > 9u )
          goto end_i_and_j;
        v19 += 2;
        v20 = v21 + 10 * v20;
      }
      while ( v19 != v18 );
      if ( v4 == v19 )
      {
        if ( v19 == v14 + 18 )
          goto end3;
end_i_and_j:
        v22 = lfactor_0[(unsigned __int64)(v19 - v14) >> 1] * result;
      }
      else
      {
        if ( !*v19 )
        {
          v23 = v19[1] - 48;
          if ( v23 <= 9u )
          {
            if ( v19 + 2 == v4 || v19[2] || (v24 = v19[3] - 48, v24 > 9u) )
            {
              *endptr = v19 + 2;
              result = v23 + 10000000000LL * result + 10 * v20;
              if ( v12 )
              {
                if ( (unsigned __int64)result <= 0x8000000000000000LL )
                {
                  return -result;
                }
                else
                {
                  *error = 34;
                  return 0x8000000000000000LL;
                }
              }
            }
            else
            {
              *endptr = v19 + 4;
              if ( (v19 + 4 == v4 || v19[4] || (unsigned __int8)(v19[5] - 48) > 9u)
                && result <= v11
                && ((v25 = v24 + 10LL * v23, result != v11) || v20 < v10 || v25 <= v9) )
              {
                return v25 + 100 * v20 + 100000000000LL * result;
              }
              else
              {
                result = 0x8000000000000000LL;
                *error = 34;
                if ( !v12 )
                  return -1LL;
              }
            }
            return result;
          }
        }
end3:
        v22 = 1000000000 * result;
      }
      *endptr = v19;
      result = v20 + v22;
      goto LABEL_26;
    }
  }
  else
  {
    while ( !*v14 )
    {
      v16 = v14[1] - 48;
      if ( v16 > 9u )
        break;
      v14 += 2;
      result = v16 + 10 * result;
      if ( v15 == v14 )
        goto LABEL_43;
    }
  }
end_i:
  *endptr = v14;
LABEL_26:
  if ( v12 )
    return -result;
  return result;
};

// Line 887: range 000000000CFC2E20-000000000CFC2E62
size_t __fastcall my_scan_mb2(CHARSET_INFO *cs_0, const char *str, const char *end, int sequence_type)
{
  const char *v4; // rdx
  const char *v5; // rax

  if ( sequence_type != 2 )
    return 0LL;
  v4 = end - 1;
  if ( str >= v4 || *str || str[1] != 32 )
    return 0LL;
  v5 = str;
  do
    v5 += 2;
  while ( v4 > v5 && !*v5 && v5[1] == 32 );
  return v5 - str;
};

// Line 907: range 000000000CFC2E70-000000000CFC2E9F
void __fastcall my_fill_mb2(CHARSET_INFO *cs_0, char *s, size_t l, int fill)
{
  char *v4; // rax

  if ( l > 1 )
  {
    v4 = &s[2 * ((l - 2) >> 1) + 2];
    do
    {
      *s = BYTE1(fill);
      s[1] = fill;
      s += 2;
    }
    while ( s != v4 );
  }
};

// Line 992: range 000000000CFC46C0-000000000CFC492D
size_t my_snprintf_mb2(CHARSET_INFO *cs_0, char *to, size_t n, const char *fmt, ...)
{
  char *v4; // r15
  int v5; // r14d
  char *v6; // rbp
  char v7; // al
  const char *i; // rbx
  char v9; // al
  const char *v10; // rdx
  bool v11; // dl
  size_t result; // rax
  unsigned int gp_offset; // eax
  unsigned int v14; // eax
  char v15; // al
  char *j; // rdx
  const char **overflow_arg_area; // rax
  const char *v18; // r13
  unsigned __int64 v19; // rdx
  size_t v20; // rax
  unsigned __int64 v21; // rcx
  const char *v22; // rsi
  char *v23; // rdx
  char v24; // cl
  unsigned int *v25; // rcx
  char dst[24]; // [rsp+10h] [rbp-98h] BYREF
  va_list args; // [rsp+28h] [rbp-80h] BYREF

  va_start(args, fmt);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  v4 = &to[n - 1];
  v5 = (int)to;
  v6 = to;
  v7 = *fmt;
  if ( !*fmt )
  {
    result = 0LL;
    goto LABEL_19;
  }
  do
  {
    while ( 1 )
    {
      if ( v7 != 37 )
      {
        if ( v4 == v6 )
          goto LABEL_18;
        *v6 = 0;
        i = fmt;
        v6 += 2;
        *(v6 - 1) = *fmt;
        goto LABEL_5;
      }
      for ( i = fmt + 1; ; ++i )
      {
        v9 = *i;
        if ( (unsigned __int8)(*i - 48) > 9u && (unsigned __int8)(v9 - 45) > 1u )
          break;
      }
      v10 = i;
      if ( v9 == 108 )
      {
        ++i;
        v9 = v10[1];
      }
      if ( v9 == 115 )
      {
        if ( args[0].gp_offset > 0x2F )
        {
          overflow_arg_area = (const char **)args[0].overflow_arg_area;
          args[0].overflow_arg_area = (char *)args[0].overflow_arg_area + 8;
        }
        else
        {
          overflow_arg_area = (const char **)((char *)args[0].reg_save_area + args[0].gp_offset);
          args[0].gp_offset += 8;
        }
        v18 = *overflow_arg_area;
        v19 = v4 - v6;
        if ( *overflow_arg_area )
        {
          v20 = strlen(*overflow_arg_area);
          v19 = v4 - v6;
          v21 = 2 * v20;
        }
        else
        {
          v21 = 12LL;
          v20 = 6LL;
          v18 = "(null)";
        }
        if ( v19 <= v21 )
          v20 = (v19 >> 1) - 1;
        if ( v20 )
        {
          v22 = &v18[v20];
          v23 = v6;
          do
          {
            *v23 = 0;
            v24 = *v18++;
            v23 += 2;
            *(v23 - 1) = v24;
          }
          while ( v18 != v22 );
          v6 += 2 * v20;
        }
        goto LABEL_5;
      }
      v11 = v9 == 100;
      if ( v9 != 117 && v9 != 100 )
        break;
      if ( (unsigned __int64)(v4 - v6) <= 0x1F )
        goto LABEL_18;
      gp_offset = args[0].gp_offset;
      if ( args[0].gp_offset > 0x2F )
      {
        v25 = (unsigned int *)args[0].overflow_arg_area;
        args[0].overflow_arg_area = (char *)args[0].overflow_arg_area + 8;
        v14 = *v25;
        if ( !v11 )
        {
LABEL_23:
          int10_to_str(v14, dst, 10);
          goto LABEL_24;
        }
      }
      else
      {
        args[0].gp_offset += 8;
        v14 = *(_DWORD *)((char *)args[0].reg_save_area + gp_offset);
        if ( !v11 )
          goto LABEL_23;
      }
      int10_to_str((int)v14, dst, -10);
LABEL_24:
      v15 = dst[0];
      for ( j = dst; *j; v15 = *j )
      {
        *v6 = 0;
        ++j;
        v6 += 2;
        *(v6 - 1) = v15;
      }
LABEL_5:
      v7 = i[1];
      fmt = i + 1;
      if ( !v7 )
        goto LABEL_18;
    }
    if ( v4 == v6 )
      break;
    *v6 = 0;
    v6[1] = 37;
    v6 += 2;
    v7 = i[1];
    fmt = i + 1;
  }
  while ( v7 );
LABEL_18:
  result = (int)v6 - v5;
LABEL_19:
  *v6 = 0;
  return result;
};

// Line 1003: range 000000000CFC2EB0-000000000CFC2ED8
size_t __fastcall my_lengthsp_mb2(CHARSET_INFO *cs_0, const char *ptr, size_t length)
{
  const char *i; // rax

  for ( i = &ptr[length]; i > ptr + 1; i -= 2 )
  {
    if ( *(i - 1) != 32 )
      break;
    if ( *(i - 2) )
      break;
  }
  return i - ptr;
};

// Line 1030: range 000000000CFC2EE0-000000000CFC2F75
int __fastcall my_utf16_uni(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  int v4; // edi
  int result; // eax

  if ( e < s + 2 )
    return -102;
  v4 = *s;
  if ( (*s & 0xFC) == 0xD8 )
  {
    if ( e < s + 4 )
    {
      return -104;
    }
    else
    {
      result = 0;
      if ( (s[2] & 0xFC) == 0xDC )
      {
        *pwc = (s[1] << 10) + ((v4 & 3) << 18) + ((s[2] & 3) << 8) + s[3] + 0x10000;
        return 4;
      }
    }
  }
  else if ( (*s & 0xFC) == 0xDC )
  {
    return 0;
  }
  else
  {
    result = 2;
    *pwc = s[1] + (v4 << 8);
  }
  return result;
};

// Line 1072: range 000000000CFC5970-000000000CFC5A15
int __fastcall my_uni_utf16(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  int result; // eax
  ulong v5; // rsi

  if ( wc > 0xFFFF )
  {
    result = 0;
    if ( wc <= 0x10FFFF )
    {
      if ( e < s + 4 )
      {
        return -104;
      }
      else
      {
        v5 = wc - 0x10000;
        s[3] = v5;
        *s = (v5 >> 18) | 0xD8;
        s[1] = v5 >> 10;
        s[2] = BYTE1(v5) & 3 | 0xDC;
        return 4;
      }
    }
  }
  else if ( e < s + 2 )
  {
    return -102;
  }
  else if ( (wc & 0xF800) == 55296 )
  {
    return 0;
  }
  else
  {
    s[1] = wc;
    *s = BYTE1(wc);
    return 2;
  }
  return result;
};

// Line 1136: range 000000000CFC5A20-000000000CFC5AC6
size_t __fastcall my_caseup_utf16(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  uchar *v5; // rbp
  char *v6; // rbx
  MY_UNICASE_INFO **caseinfo; // r14
  ulong toupper; // rsi
  MY_UNICASE_INFO *v9; // rax
  int v10; // r15d
  ulong wc[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = (uchar *)&src[srclen];
  v6 = src;
  caseinfo = cs_0->caseinfo;
  if ( src < &src[srclen] )
  {
    do
    {
      v10 = my_utf16_uni(cs_0, wc, (const uchar *)v6, v5);
      if ( v10 <= 0 )
        break;
      toupper = wc[0];
      if ( (int)(wc[0] >> 8) <= 255 )
      {
        v9 = caseinfo[(int)(wc[0] >> 8)];
        if ( v9 )
        {
          toupper = v9[LOBYTE(wc[0])].toupper;
          wc[0] = toupper;
        }
      }
      if ( my_uni_utf16(cs_0, toupper, (uchar *)v6, v5) != v10 )
        break;
      v6 += v10;
    }
    while ( v5 > (uchar *)v6 );
  }
  return srclen;
};

// Line 1158: range 000000000CFC2F80-000000000CFC30BE
void __fastcall my_hash_sort_utf16(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  const uchar *v6; // r12
  const uchar *v8; // rbx
  __int64 v9; // rcx
  MY_UNICASE_INFO *v10; // rsi
  ulong sort; // rdx
  ulong v12; // rdx
  ulong v13; // rsi
  int v14; // eax
  MY_UNICASE_INFO **uni_plane; // [rsp+0h] [rbp-48h]
  ulong wc[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = s;
  v8 = &s[slen];
  for ( uni_plane = cs_0->caseinfo; v8 > s + 1; v8 -= 2 )
  {
    if ( *(v8 - 1) != 32 )
      break;
    if ( *(v8 - 2) )
      break;
  }
  if ( s < v8 )
  {
    do
    {
      v14 = my_utf16_uni(cs_0, wc, v6, v8);
      if ( v14 <= 0 )
        break;
      v12 = wc[0] >> 8;
      if ( (int)(wc[0] >> 8) <= 255 )
      {
        v9 = LOBYTE(wc[0]);
        v10 = uni_plane[(int)v12];
        if ( v10 )
        {
          sort = v10[LOBYTE(wc[0])].sort;
          v9 = (unsigned __int8)sort;
          wc[0] = sort;
          v12 = sort >> 8;
        }
      }
      else
      {
        wc[0] = 65533LL;
        v12 = 255LL;
        v9 = 253LL;
      }
      v6 += v14;
      *n1 ^= (*n1 << 8) + (*n2 + (*n1 & 0x3F)) * v9;
      v13 = *n2 + 3;
      *n2 = v13;
      *n1 ^= (*n1 << 8) + ((*n1 & 0x3F) + v13) * v12;
      *n2 += 3LL;
    }
    while ( v6 < v8 );
  }
};

// Line 1183: range 000000000CFC5AD0-000000000CFC5B77
size_t __fastcall my_casedn_utf16(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  uchar *v5; // rbp
  char *v6; // rbx
  MY_UNICASE_INFO **caseinfo; // r14
  ulong tolower; // rsi
  MY_UNICASE_INFO *v9; // rax
  int v10; // r15d
  ulong wc[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = (uchar *)&src[srclen];
  v6 = src;
  caseinfo = cs_0->caseinfo;
  if ( src < &src[srclen] )
  {
    do
    {
      v10 = my_utf16_uni(cs_0, wc, (const uchar *)v6, v5);
      if ( v10 <= 0 )
        break;
      tolower = wc[0];
      if ( (int)(wc[0] >> 8) <= 255 )
      {
        v9 = caseinfo[(int)(wc[0] >> 8)];
        if ( v9 )
        {
          tolower = v9[LOBYTE(wc[0])].tolower;
          wc[0] = tolower;
        }
      }
      if ( my_uni_utf16(cs_0, tolower, (uchar *)v6, v5) != v10 )
        break;
      v6 += v10;
    }
    while ( v5 > (uchar *)v6 );
  }
  return srclen;
};

// Line 1207: range 000000000CFC4F30-000000000CFC513A
int __fastcall my_strnncoll_utf16(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  const uchar *v6; // r14
  const uchar *v7; // r13
  const uchar *v8; // r12
  const uchar *v9; // rbx
  int i; // eax
  MY_UNICASE_INFO *v11; // rax
  ulong sort; // rsi
  ulong v13; // rcx
  MY_UNICASE_INFO *v14; // rax
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rdx
  int result; // eax
  int v19; // r12d
  int v20; // r13d
  int v21; // edx
  int v22; // r13d
  MY_UNICASE_INFO **uni_plane; // [rsp+10h] [rbp-58h]
  ulong s_wc; // [rsp+20h] [rbp-48h] BYREF
  ulong t_wc[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = s;
  v7 = &s[slen];
  v8 = &t[tlen];
  v9 = t;
  uni_plane = cs_0->caseinfo;
  if ( s >= &s[slen] || t >= v8 )
  {
LABEL_20:
    if ( t_is_prefix )
      return (_DWORD)v9 - (_DWORD)v8;
    else
      return (_DWORD)v7 - (_DWORD)v6 - ((_DWORD)v8 - (_DWORD)v9);
  }
  else
  {
    for ( i = my_utf16_uni(cs_0, &s_wc, s, v7); ; i = my_utf16_uni(cs_0, &s_wc, v6, v7) )
    {
      v15 = i;
      v16 = my_utf16_uni(cs_0, t_wc, v9, v8);
      v17 = v16;
      if ( v16 <= 0 || v15 <= 0 )
        break;
      if ( (int)(s_wc >> 8) <= 255 )
      {
        v11 = uni_plane[(int)(s_wc >> 8)];
        if ( v11 )
        {
          sort = v11[(unsigned __int8)s_wc].sort;
          s_wc = sort;
        }
        else
        {
          sort = s_wc;
        }
      }
      else
      {
        s_wc = 65533LL;
        sort = 65533LL;
      }
      v13 = t_wc[0];
      if ( (int)(t_wc[0] >> 8) > 255 )
      {
        v13 = 65533LL;
        t_wc[0] = 65533LL;
        if ( sort != 65533 )
          return v13 < sort ? 1 : -1;
      }
      else
      {
        v14 = uni_plane[(int)(t_wc[0] >> 8)];
        if ( v14 )
        {
          v13 = v14[LOBYTE(t_wc[0])].sort;
          t_wc[0] = v13;
        }
        if ( sort != v13 )
          return v13 < sort ? 1 : -1;
      }
      v9 += v17;
      v6 += v15;
      if ( v8 <= v9 || v7 <= v6 )
        goto LABEL_20;
    }
    v19 = (_DWORD)v8 - (_DWORD)v9;
    v20 = (_DWORD)v7 - (_DWORD)v6;
    v21 = v20;
    if ( v19 <= v20 )
      v21 = v19;
    v22 = v20 - v19;
    result = memcmp(v6, v9, v21);
    if ( !result )
      return v22;
  }
  return result;
};

// Line 1271: range 000000000CFC4CF0-000000000CFC4F2C
int __fastcall my_strnncollsp_utf16(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  const uchar *v6; // r15
  const uchar *v7; // r13
  const uchar *v8; // rbp
  const uchar *v9; // rbx
  int i; // eax
  MY_UNICASE_INFO *v11; // rax
  ulong sort; // rsi
  ulong v13; // rcx
  MY_UNICASE_INFO *v14; // rax
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rdx
  int result; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  bool v21; // cf
  int v22; // r13d
  int v23; // eax
  int v24; // ebp
  int v25; // r13d
  int v26; // edx
  int v27; // r13d
  MY_UNICASE_INFO **uni_plane; // [rsp+18h] [rbp-50h]
  ulong s_wc; // [rsp+20h] [rbp-48h] BYREF
  ulong t_wc[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = s;
  v7 = &s[slen];
  v8 = &t[tlen];
  v9 = t;
  uni_plane = cs_0->caseinfo;
  if ( s >= &s[slen] || t >= v8 )
  {
LABEL_20:
    v19 = v7 - v6;
    v20 = v8 - v9;
    v21 = v7 - v6 < (unsigned __int64)(v8 - v9);
    if ( v7 - v6 != v8 - v9 )
    {
      if ( v7 - v6 >= (unsigned __int64)(v8 - v9) )
        v8 = v7;
      v22 = v21 ? -1 : 1;
      if ( v19 < v20 )
        v6 = v9;
      for ( ; v6 < v8; v6 += v23 )
      {
        v23 = my_utf16_uni(cs_0, &s_wc, v6, v8);
        if ( v23 < 0 )
          break;
        if ( s_wc != 32 )
        {
          result = v22;
          if ( s_wc <= 0x1F )
            return -v22;
          return result;
        }
      }
    }
    return 0;
  }
  else
  {
    for ( i = my_utf16_uni(cs_0, &s_wc, s, v7); ; i = my_utf16_uni(cs_0, &s_wc, v6, v7) )
    {
      v15 = i;
      v16 = my_utf16_uni(cs_0, t_wc, v9, v8);
      v17 = v16;
      if ( v16 <= 0 || v15 <= 0 )
        break;
      if ( (int)(s_wc >> 8) <= 255 )
      {
        v11 = uni_plane[(int)(s_wc >> 8)];
        if ( v11 )
        {
          sort = v11[(unsigned __int8)s_wc].sort;
          s_wc = sort;
        }
        else
        {
          sort = s_wc;
        }
      }
      else
      {
        s_wc = 65533LL;
        sort = 65533LL;
      }
      v13 = t_wc[0];
      if ( (int)(t_wc[0] >> 8) > 255 )
      {
        v13 = 65533LL;
        t_wc[0] = 65533LL;
        if ( sort != 65533 )
          return v13 < sort ? 1 : -1;
      }
      else
      {
        v14 = uni_plane[(int)(t_wc[0] >> 8)];
        if ( v14 )
        {
          v13 = v14[LOBYTE(t_wc[0])].sort;
          t_wc[0] = v13;
        }
        if ( sort != v13 )
          return v13 < sort ? 1 : -1;
      }
      v9 += v17;
      v6 += v15;
      if ( v8 <= v9 || v7 <= v6 )
        goto LABEL_20;
    }
    v24 = (_DWORD)v8 - (_DWORD)v9;
    v25 = (_DWORD)v7 - (_DWORD)v6;
    v26 = v25;
    if ( v24 <= v25 )
      v26 = v24;
    v27 = v25 - v24;
    result = memcmp(v6, v9, v26);
    if ( !result )
      return v27;
  }
  return result;
};

// Line 1345: range 000000000CFC5B80-000000000CFC5BC5
uint __fastcall my_ismbchar_utf16(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  uint result; // eax

  result = 0;
  if ( e >= b + 2 )
  {
    if ( (*b & 0xFC) == 0xD8 )
    {
      result = 0;
      if ( e >= b + 4 )
        return 4 * ((b[2] & 0xFC) == 0xDC);
    }
    else
    {
      return 2 * ((*b & 0xFC) != 0xDC);
    }
  }
  return result;
};

// Line 1364: range 000000000CFC30C0-000000000CFC30D5
uint __fastcall my_mbcharlen_utf16(CHARSET_INFO *cs_0, uint c)
{
  return 2 * ((c & 0xFC) == 216) + 2;
};

// Line 1371: range 000000000CFC5BD0-000000000CFC5C0D
size_t __fastcall my_numchars_utf16(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  size_t i; // rbp
  uint v6; // eax

  for ( i = 0LL; ; ++i )
  {
    v6 = my_ismbchar_utf16(cs_0, b, e);
    if ( !v6 )
      break;
    b += v6;
  }
  return i;
};

// Line 1387: range 000000000CFC30E0-000000000CFC3149
const char *__fastcall my_charpos_utf16(CHARSET_INFO *cs_0, const char *a2, const char *e, size_t pos)
{
  size_t v4; // rbx
  const char *v6; // rbp
  uint v7; // eax

  v4 = pos;
  if ( !pos )
    return 0LL;
  v6 = a2;
  do
  {
    v7 = cs_0->cset->ismbchar(cs_0, v6, e);
    if ( !v7 )
      return (const char *)(e + 2 - a2);
    v6 += v7;
    --v4;
  }
  while ( v4 );
  return (const char *)(v6 - a2);
};

// Line 1404: range 000000000CFC3150-000000000CFC31DF
size_t __fastcall my_well_formed_len_utf16(CHARSET_INFO *cs_0, const char *b, const char *e, size_t nchars, int *error)
{
  size_t v6; // rbp
  const char *v8; // rbx
  uint v9; // eax

  v6 = nchars;
  *error = 0;
  if ( !nchars )
    return 0LL;
  v8 = b;
  do
  {
    v9 = cs_0->cset->ismbchar(cs_0, v8, e);
    if ( !v9 )
    {
      *error = e > v8;
      return v8 - b;
    }
    v8 += v9;
    --v6;
  }
  while ( v6 );
  return v8 - b;
};

// Line 1426: range 000000000CFC4BD0-000000000CFC4BF5
int __fastcall my_wildcmp_utf16_ci(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, str_end, wildstr, wildend, escape, w_one, w_many, cs_0->caseinfo);
};

// Line 1438: range 000000000CFC4C00-000000000CFC4C25
int __fastcall my_wildcmp_utf16_bin(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, str_end, wildstr, wildend, escape, w_one, w_many, 0LL);
};

// Line 1449: range 000000000CFC52D0-000000000CFC5409
int __fastcall my_strnncoll_utf16_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  const uchar *v6; // r14
  const uchar *v7; // r12
  const uchar *v8; // rbp
  const uchar *v9; // rbx
  int i; // eax
  int v11; // r15d
  int v12; // eax
  int v13; // ebp
  int v14; // r12d
  int v15; // edx
  int v16; // r12d
  int result; // eax
  ulong s_wc; // [rsp+20h] [rbp-48h] BYREF
  ulong t_wc[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = s;
  v7 = &s[slen];
  v8 = &t[tlen];
  v9 = t;
  if ( s >= &s[slen] || t >= v8 )
  {
LABEL_15:
    if ( t_is_prefix )
      return (_DWORD)v9 - (_DWORD)v8;
    else
      return (_DWORD)v7 - (_DWORD)v6 - ((_DWORD)v8 - (_DWORD)v9);
  }
  else
  {
    for ( i = my_utf16_uni(cs_0, &s_wc, s, v7); ; i = my_utf16_uni(cs_0, &s_wc, v6, v7) )
    {
      v11 = i;
      v12 = my_utf16_uni(cs_0, t_wc, v9, v8);
      if ( v12 <= 0 || v11 <= 0 )
        break;
      if ( s_wc != t_wc[0] )
        return t_wc[0] < s_wc ? 1 : -1;
      v9 += v12;
      v6 += v11;
      if ( v8 <= v9 || v7 <= v6 )
        goto LABEL_15;
    }
    v13 = (_DWORD)v8 - (_DWORD)v9;
    v14 = (_DWORD)v7 - (_DWORD)v6;
    v15 = v14;
    if ( v13 <= v14 )
      v15 = v13;
    v16 = v14 - v13;
    result = memcmp(v6, v9, v15);
    if ( !result )
      return v16;
  }
  return result;
};

// Line 1482: range 000000000CFC5140-000000000CFC52C1
int __fastcall my_strnncollsp_utf16_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  const uchar *v6; // r15
  const uchar *v7; // r13
  const uchar *v8; // rbp
  const uchar *v9; // rbx
  int i; // eax
  int v11; // r14d
  int v12; // eax
  int v13; // r13d
  int v14; // ebp
  int v15; // edx
  int v16; // r13d
  int result; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  bool v20; // cf
  int v21; // r13d
  int v22; // eax
  ulong s_wc; // [rsp+10h] [rbp-48h] BYREF
  ulong t_wc[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = s;
  v7 = &s[slen];
  v8 = &t[tlen];
  v9 = t;
  if ( s >= &s[slen] || t >= v8 )
  {
LABEL_15:
    v18 = v7 - v6;
    v19 = v8 - v9;
    v20 = v7 - v6 < (unsigned __int64)(v8 - v9);
    if ( v7 - v6 != v8 - v9 )
    {
      if ( v7 - v6 >= (unsigned __int64)(v8 - v9) )
        v8 = v7;
      v21 = v20 ? -1 : 1;
      if ( v18 < v19 )
        v6 = v9;
      for ( ; v6 < v8; v6 += v22 )
      {
        v22 = my_utf16_uni(cs_0, &s_wc, v6, v8);
        if ( v22 < 0 )
          break;
        if ( s_wc != 32 )
        {
          result = v21;
          if ( s_wc <= 0x1F )
            return -v21;
          return result;
        }
      }
    }
    return 0;
  }
  else
  {
    for ( i = my_utf16_uni(cs_0, &s_wc, s, v7); ; i = my_utf16_uni(cs_0, &s_wc, v6, v7) )
    {
      v11 = i;
      v12 = my_utf16_uni(cs_0, t_wc, v9, v8);
      if ( v12 <= 0 || v11 <= 0 )
        break;
      if ( s_wc != t_wc[0] )
        return t_wc[0] < s_wc ? 1 : -1;
      v9 += v12;
      v6 += v11;
      if ( v8 <= v9 || v7 <= v6 )
        goto LABEL_15;
    }
    v13 = (_DWORD)v7 - (_DWORD)v6;
    v14 = (_DWORD)v8 - (_DWORD)v9;
    v15 = v13;
    if ( v14 <= v13 )
      v15 = v14;
    v16 = v13 - v14;
    result = memcmp(v6, v9, v15);
    if ( !result )
      return v16;
  }
  return result;
};

// Line 1555: range 000000000CFC31F0-000000000CFC325D
void __fastcall my_hash_sort_utf16_bin(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  const uchar *v5; // rax
  const uchar *v6; // rdx
  ulong v7; // r10
  ulong v8; // rdi

  v5 = key + 1;
  v6 = &key[len];
  if ( v6 > key + 1 )
  {
    do
    {
      if ( *(v6 - 1) != 32 )
        break;
      if ( *(v6 - 2) )
        break;
      v6 -= 2;
    }
    while ( v6 > v5 );
  }
  if ( key < v6 )
  {
    v7 = *nr2;
    while ( 1 )
    {
      *nr1 ^= (*nr1 << 8) + (v7 + (*nr1 & 0x3F)) * *key;
      key = v5;
      v8 = *nr2 + 3;
      *nr2 = v8;
      if ( v5 == v6 )
        break;
      v7 = v8;
      ++v5;
    }
  }
};

// Line 1705: range 000000000CFC3260-000000000CFC329D
int __fastcall my_utf32_uni(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  if ( e < s + 4 )
    return -104;
  *pwc = s[3] + (s[1] << 16) + (*s << 24) + (s[2] << 8);
  return 4;
};

// Line 1716: range 000000000CFC32A0-000000000CFC32D5
int __fastcall my_uni_utf32(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  if ( e < s + 4 )
    return -104;
  s[3] = wc;
  *s = BYTE3(wc);
  s[1] = BYTE2(wc);
  s[2] = BYTE1(wc);
  return 4;
};

// Line 1768: range 000000000CFC32E0-000000000CFC3394
size_t __fastcall my_caseup_utf32(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v5; // r8
  size_t result; // rax
  MY_UNICASE_INFO **caseinfo; // r11
  char *v8; // rsi
  char *v9; // rcx
  int toupper; // edi
  unsigned __int64 v11; // r10
  MY_UNICASE_INFO *v12; // r10

  v5 = &src[srclen];
  result = srclen;
  caseinfo = cs_0->caseinfo;
  if ( src < &src[srclen] )
  {
    v8 = src + 4;
    if ( v5 >= v8 )
    {
      do
      {
        v9 = v8;
        toupper = ((unsigned __int8)*(v8 - 3) << 16)
                + ((unsigned __int8)*(v8 - 4) << 24)
                + ((unsigned __int8)*(v8 - 2) << 8)
                + (unsigned __int8)*(v8 - 1);
        v11 = (unsigned __int64)toupper >> 8;
        if ( (int)v11 <= 255 )
        {
          v12 = caseinfo[(int)v11];
          if ( v12 )
            toupper = v12[(unsigned __int8)*(v8 - 1)].toupper;
        }
        if ( v5 < v8 )
          break;
        *(v8 - 1) = toupper;
        *(v8 - 4) = HIBYTE(toupper);
        *(v8 - 3) = BYTE2(toupper);
        *(v8 - 2) = BYTE1(toupper);
        if ( v5 <= v8 )
          break;
        v8 += 4;
      }
      while ( v5 >= v9 + 4 );
    }
  }
  return result;
};

// Line 1802: range 000000000CFC33A0-000000000CFC3569
void __fastcall my_hash_sort_utf32(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  const uchar *v5; // rdx
  MY_UNICASE_INFO **i; // r11
  const uchar *v7; // r10
  ulong v8; // rdi
  const uchar *v9; // rbx
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // r12
  ulong v15; // rax
  ulong v16; // rdi
  ulong v17; // rsi
  ulong v18; // rax
  MY_UNICASE_INFO *v19; // r9
  uint32 sort; // edx

  v5 = &s[slen];
  for ( i = cs_0->caseinfo; v5 > s + 3; v5 -= 4 )
  {
    if ( *(v5 - 1) != 32 )
      break;
    if ( *(v5 - 2) )
      break;
    if ( *(v5 - 3) )
      break;
    if ( *(v5 - 4) )
      break;
  }
  v7 = s + 4;
  if ( v5 >= s + 4 )
  {
    v8 = *n2;
    v9 = &s[4 * ((unsigned __int64)(v5 - s - 4) >> 2) + 4];
    while ( 1 )
    {
      LODWORD(v10) = s[3] + (s[2] << 8) + (s[1] << 16) + (*s << 24);
      v11 = (unsigned __int64)(int)v10 >> 8;
      if ( (int)v11 <= 255 )
      {
        v19 = i[(int)v11];
        if ( v19 )
        {
          sort = v19[s[3]].sort;
          v10 = (unsigned __int8)sort;
          v12 = BYTE1(sort);
          v14 = (unsigned __int64)v19[s[3]].sort >> 24;
          v13 = (unsigned __int8)BYTE2(v19[s[3]].sort);
        }
        else
        {
          v12 = (unsigned __int8)((unsigned __int16)(s[3] + (s[2] << 8)) >> 8);
          v14 = (unsigned __int64)(int)v10 >> 24;
          v13 = BYTE2(v10);
          v10 = (unsigned __int8)v10;
          v14 = (unsigned int)v14;
        }
      }
      else
      {
        v10 = 253LL;
        v12 = 255LL;
        v13 = 0LL;
        v14 = 0LL;
      }
      *n1 ^= (*n1 << 8) + v14 * ((*n1 & 0x3F) + v8);
      v15 = *n2 + 3;
      *n2 = v15;
      *n1 ^= (*n1 << 8) + ((*n1 & 0x3F) + v15) * v13;
      v16 = *n2 + 3;
      *n2 = v16;
      *n1 ^= (*n1 << 8) + ((*n1 & 0x3F) + v16) * v12;
      v17 = *n2 + 3;
      *n2 = v17;
      v18 = v17 + (*n1 & 0x3F);
      s = v7;
      *n1 ^= (*n1 << 8) + v10 * v18;
      v8 = *n2 + 3;
      *n2 = v8;
      if ( v7 == v9 )
        break;
      v7 += 4;
    }
  }
};

// Line 1824: range 000000000CFC3570-000000000CFC3631
size_t __fastcall my_casedn_utf32(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v5; // r10
  char *v6; // r9
  size_t result; // rax
  MY_UNICASE_INFO **caseinfo; // r11
  char *v9; // rcx
  char *v10; // rbx
  char *v11; // rdx
  int tolower; // esi
  unsigned __int64 v13; // r8
  MY_UNICASE_INFO *v14; // r8

  v5 = &src[srclen];
  v6 = src + 4;
  result = srclen;
  caseinfo = cs_0->caseinfo;
  if ( &src[srclen] >= src + 4 )
  {
    v9 = src + 8;
    v10 = &src[((srclen - 4) & 0xFFFFFFFFFFFFFFFCLL) + 12];
    while ( 1 )
    {
      v11 = v9;
      tolower = ((unsigned __int8)*(v9 - 7) << 16)
              + ((unsigned __int8)*(v9 - 8) << 24)
              + ((unsigned __int8)*(v9 - 6) << 8)
              + (unsigned __int8)*(v9 - 5);
      v13 = (unsigned __int64)tolower >> 8;
      if ( (int)v13 <= 255 )
      {
        v14 = caseinfo[(int)v13];
        if ( v14 )
          tolower = v14[(unsigned __int8)*(v9 - 5)].tolower;
      }
      if ( v5 < v6 )
        break;
      *(v9 - 5) = tolower;
      v9 += 4;
      *(v9 - 12) = HIBYTE(tolower);
      *(v9 - 11) = BYTE2(tolower);
      *(v9 - 10) = BYTE1(tolower);
      if ( v9 == v10 )
        break;
      v6 = v11;
    }
  }
  return result;
};

// Line 1844: range 000000000CFC5660-000000000CFC57EB
int __fastcall my_strnncoll_utf32(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  unsigned __int64 sort; // r10
  const uchar *v8; // rdi
  const uchar *v9; // rdx
  const uchar *v10; // r8
  const uchar *v11; // rsi
  MY_UNICASE_INFO **caseinfo; // rbp
  __int64 v13; // rcx
  const uchar *v14; // rax
  int v15; // edx
  int v16; // ebp
  int v17; // ebp
  int result; // eax
  int v19; // ebx
  unsigned __int64 v20; // r11
  MY_UNICASE_INFO *v21; // rsi
  unsigned __int64 v22; // rsi
  MY_UNICASE_INFO *v23; // rsi

  v8 = s;
  v9 = &s[slen];
  v10 = &t[tlen];
  v11 = t;
  caseinfo = cs_0->caseinfo;
  if ( v8 >= v9 || t >= v10 )
  {
    LODWORD(v14) = (_DWORD)t;
LABEL_26:
    if ( t_is_prefix )
      return (_DWORD)v14 - (_DWORD)v10;
    else
      return (_DWORD)v9 - (_DWORD)v8 - ((_DWORD)v10 - (_DWORD)v14);
  }
  else
  {
    while ( 1 )
    {
      v13 = -104LL;
      if ( v9 >= v8 + 4 )
      {
        v13 = 4LL;
        sort = v8[3] + (v8[2] << 8) + (v8[1] << 16) + (*v8 << 24);
      }
      v14 = v11 + 4;
      if ( v10 < v11 + 4 )
        break;
      v19 = (v11[1] << 16) + (*v11 << 24) + (v11[2] << 8) + v11[3];
      v20 = v19;
      if ( (int)v13 <= 0 )
        break;
      if ( (int)(sort >> 8) > 255 )
      {
        sort = 65533LL;
      }
      else
      {
        v21 = caseinfo[(int)(sort >> 8)];
        if ( v21 )
          sort = v21[(unsigned __int8)sort].sort;
      }
      v22 = (unsigned __int64)v19 >> 8;
      if ( (int)v22 > 255 )
      {
        v20 = 65533LL;
        if ( sort != 65533 )
          return v20 < sort ? 1 : -1;
      }
      else
      {
        v23 = caseinfo[(int)v22];
        if ( v23 )
          v20 = v23[(unsigned __int8)v19].sort;
        if ( sort != v20 )
          return v20 < sort ? 1 : -1;
      }
      v8 += v13;
      if ( v9 <= v8 || v10 <= v14 )
        goto LABEL_26;
      v11 = v14;
    }
    v15 = (_DWORD)v9 - (_DWORD)v8;
    v16 = v15;
    if ( (int)v10 - (int)v11 <= v15 )
      v15 = (_DWORD)v10 - (_DWORD)v11;
    v17 = v16 - ((_DWORD)v10 - (_DWORD)v11);
    result = memcmp(v8, v11, v15);
    if ( !result )
      return v17;
  }
  return result;
};

// Line 1908: range 000000000CFC5410-000000000CFC5650
// local variable allocation has failed, the output may be wrong!
int __fastcall my_strnncollsp_utf32(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  const uchar *v7; // rdi
  const uchar *v8; // rdx
  const uchar *v9; // r8
  const uchar *v10; // rsi
  MY_UNICASE_INFO **caseinfo; // rbx
  __int64 v12; // rcx
  const uchar *v13; // rax
  int v14; // edx
  int v15; // ebp
  int v16; // ebp
  int result; // eax
  int v18; // r11d
  unsigned __int64 sort; // r10
  MY_UNICASE_INFO *v20; // rsi
  unsigned __int64 v21; // rsi
  MY_UNICASE_INFO *v22; // rsi
  unsigned __int64 v23; // rcx
  bool v24; // cf
  unsigned __int8 *v25; // rcx
  unsigned __int64 v26; // rdx

  v7 = s;
  v8 = &s[slen];
  v9 = &t[tlen];
  v10 = t;
  caseinfo = cs_0->caseinfo;
  if ( v7 >= v8 || t >= v9 )
  {
    v13 = t;
LABEL_26:
    v23 = v9 - v13;
    v24 = v8 - v7 < (unsigned __int64)(v9 - v13);
    if ( v8 - v7 != v9 - v13 )
    {
      if ( v8 - v7 >= (unsigned __int64)(v9 - v13) )
        v9 = v8;
      if ( v8 - v7 < v23 )
        v7 = v13;
      if ( v7 < v9 )
      {
        v25 = (unsigned __int8 *)(v7 + 4);
        result = 0;
        if ( v9 < v7 + 4 )
          return result;
        v26 = (v7[1] << 16) + (*v7 << 24) + (v7[2] << 8) + v7[3];
        if ( v26 != 32 )
        {
LABEL_39:
          result = v24 ? -1 : 1;
          if ( v26 <= 0x1F )
            return -(v24 ? -1 : 1);
          return result;
        }
        for ( ; v25 < v9; v25 += 4 )
        {
          if ( v25 == &v7[4 * ((unsigned __int64)(v9 - 4 - v7) >> 2) + 4] )
            break;
          v26 = v25[3] + (v25[2] << 8) + (v25[1] << 16) + (*v25 << 24);
          if ( v26 != 32 )
            goto LABEL_39;
        }
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v12 = -104LL;
    if ( v8 >= v7 + 4 )
    {
      v12 = 4LL;
      *(_QWORD *)&diff_if_only_endspace_difference = v7[3] + (v7[2] << 8) + (v7[1] << 16) + (*v7 << 24);
    }
    v13 = v10 + 4;
    if ( v9 < v10 + 4 )
      break;
    v18 = (v10[1] << 16) + (*v10 << 24) + (v10[2] << 8) + v10[3];
    sort = v18;
    if ( (int)v12 <= 0 )
      break;
    if ( (int)((unsigned __int64)diff_if_only_endspace_difference >> 8) > 255 )
    {
      *(_QWORD *)&diff_if_only_endspace_difference = 65533LL;
    }
    else
    {
      v20 = caseinfo[(int)((unsigned __int64)diff_if_only_endspace_difference >> 8)];
      if ( v20 )
        *(_QWORD *)&diff_if_only_endspace_difference = v20[(unsigned __int8)diff_if_only_endspace_difference].sort;
    }
    v21 = (unsigned __int64)v18 >> 8;
    if ( (int)v21 > 255 )
    {
      sort = 65533LL;
      if ( diff_if_only_endspace_difference != 65533LL )
        return sort < diff_if_only_endspace_difference ? 1 : -1;
    }
    else
    {
      v22 = caseinfo[(int)v21];
      if ( v22 )
        sort = v22[(unsigned __int8)v18].sort;
      if ( diff_if_only_endspace_difference != sort )
        return sort < diff_if_only_endspace_difference ? 1 : -1;
    }
    v7 += v12;
    if ( v8 <= v7 || v9 <= v13 )
      goto LABEL_26;
    v10 = v13;
  }
  v14 = (_DWORD)v8 - (_DWORD)v7;
  v15 = v14;
  if ( (int)v9 - (int)v10 <= v14 )
    v14 = (_DWORD)v9 - (_DWORD)v10;
  v16 = v15 - ((_DWORD)v9 - (_DWORD)v10);
  result = memcmp(v7, v10, v14);
  if ( !result )
    return v16;
  return result;
};

// Line 1979: range 000000000CFC3640-000000000CFC3646
size_t __fastcall my_strnxfrmlen_utf32(CHARSET_INFO *cs_0, size_t len)
{
  return len >> 1;
};

// Line 1990: range 000000000CFC3650-000000000CFC3655
uint __fastcall my_ismbchar_utf32(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  return 4;
};

// Line 1998: range 000000000CFC3660-000000000CFC3665
uint __fastcall my_mbcharlen_utf32(CHARSET_INFO *cs_0, uint c)
{
  return 4;
};

// Line 2093: range 000000000CFC4940-000000000CFC4BC1
size_t my_snprintf_utf32(CHARSET_INFO *cs_0, char *to, size_t n, const char *fmt, ...)
{
  char *v4; // r14
  int v5; // r13d
  char *v6; // rbp
  char i; // al
  const char *j; // rbx
  char v10; // al
  const char *v11; // rdx
  bool v12; // dl
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  char v15; // al
  char *k; // rdx
  const char **overflow_arg_area; // rax
  const char *v18; // r12
  unsigned __int64 v19; // rdx
  size_t v20; // rax
  unsigned __int64 v21; // rcx
  const char *v22; // rsi
  char *v23; // rcx
  char dst[24]; // [rsp+10h] [rbp-98h] BYREF
  va_list args; // [rsp+28h] [rbp-80h] BYREF

  va_start(args, fmt);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  v4 = &to[n];
  v5 = (int)to;
  v6 = to;
  for ( i = *fmt; i; fmt = j + 1 )
  {
    if ( i == 37 )
    {
      for ( j = fmt + 1; ; ++j )
      {
        v10 = *j;
        if ( (unsigned __int8)(*j - 48) > 9u && (unsigned __int8)(v10 - 45) > 1u )
          break;
      }
      v11 = j;
      if ( v10 == 108 )
      {
        ++j;
        v10 = v11[1];
      }
      if ( v10 == 115 )
      {
        if ( args[0].gp_offset > 0x2F )
        {
          overflow_arg_area = (const char **)args[0].overflow_arg_area;
          args[0].overflow_arg_area = (char *)args[0].overflow_arg_area + 8;
        }
        else
        {
          overflow_arg_area = (const char **)((char *)args[0].reg_save_area + args[0].gp_offset);
          args[0].gp_offset += 8;
        }
        v18 = *overflow_arg_area;
        v19 = v4 - v6;
        if ( *overflow_arg_area )
        {
          v20 = strlen(*overflow_arg_area);
          v19 = v4 - v6;
          v21 = 4 * v20;
        }
        else
        {
          v21 = 24LL;
          v20 = 6LL;
          v18 = "(null)";
        }
        if ( v19 <= v21 )
          v20 = (v19 >> 2) - 1;
        if ( v20 )
        {
          v22 = &v18[v20];
          v23 = v6;
          do
          {
            *v23 = 0;
            v23[1] = 0;
            ++v18;
            v23[2] = 0;
            v23 += 4;
            *(v23 - 1) = *(v18 - 1);
          }
          while ( v18 != v22 );
          v6 += 4 * v20;
        }
      }
      else
      {
        v12 = v10 == 100;
        if ( v10 == 117 || v10 == 100 )
        {
          if ( (unsigned __int64)(v4 - v6) <= 0x3F )
            break;
          if ( args[0].gp_offset > 0x2F )
          {
            v13 = (unsigned int *)args[0].overflow_arg_area;
            args[0].overflow_arg_area = (char *)args[0].overflow_arg_area + 8;
          }
          else
          {
            v13 = (unsigned int *)((char *)args[0].reg_save_area + args[0].gp_offset);
            args[0].gp_offset += 8;
          }
          v14 = *v13;
          if ( v12 )
            int10_to_str((int)v14, dst, -10);
          else
            int10_to_str(v14, dst, 10);
          v15 = dst[0];
          for ( k = dst; *k; v15 = *k )
          {
            *v6 = 0;
            v6[1] = 0;
            ++k;
            v6[2] = 0;
            v6 += 4;
            *(v6 - 1) = v15;
          }
        }
        else
        {
          if ( v4 == v6 )
            break;
          *v6 = 0;
          v6[1] = 0;
          v6 += 4;
          *(v6 - 2) = 0;
          *(v6 - 1) = 37;
        }
      }
    }
    else
    {
      if ( v4 <= v6 )
        break;
      *v6 = 0;
      v6[1] = 0;
      j = fmt;
      v6[2] = 0;
      v6 += 4;
      *(v6 - 1) = *fmt;
    }
    i = j[1];
  }
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  return (int)v6 - v5;
};

// Line 2103: range 000000000CFC3670-000000000CFC3AAC
longlong __fastcall my_strtoll10_utf32(CHARSET_INFO *cs_0, const char *nptr, char **endptr, int *error)
{
  signed __int64 v4; // rax
  signed __int64 v5; // r8
  const char *v6; // r8
  char v7; // al
  const char *v8; // rax
  char v9; // di
  longlong result; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbp
  int v14; // r10d
  char v15; // di
  unsigned __int64 v16; // rdi
  char *v17; // rsi
  char *v18; // r9
  unsigned __int8 v19; // al
  const char *v20; // rdi
  char *v21; // r13
  char *v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // r12
  __int64 v25; // rdi
  unsigned __int8 v26; // si
  unsigned __int8 v27; // r13
  unsigned __int64 v28; // rsi

  if ( !endptr )
    goto no_conv;
  v4 = *endptr - nptr;
  v5 = v4 + 3;
  if ( v4 >= 0 )
    v5 = *endptr - nptr;
  v6 = &nptr[v5 & 0xFFFFFFFFFFFFFFFCLL];
  if ( nptr >= v6 || *nptr || nptr[1] || nptr[2] || (v7 = nptr[3], v7 != 9) && v7 != 32 )
  {
    v8 = nptr;
  }
  else
  {
    v8 = nptr;
    do
    {
      v8 += 4;
      if ( v6 <= v8 )
        break;
      if ( *v8 )
        break;
      if ( v8[1] )
        break;
      if ( v8[2] )
        break;
      v9 = v8[3];
    }
    while ( v9 == 9 || v9 == 32 );
  }
  if ( v8 == v6 )
    goto no_conv;
  if ( *v8 || v8[1] || v8[2] || v8[3] != 45 )
  {
    *error = 0;
    if ( *(_WORD *)v8 )
    {
no_conv:
      *error = 33;
      result = 0LL;
      *endptr = (char *)nptr;
      return result;
    }
    if ( v8[2] || v8[3] != 43 )
    {
      v11 = 737095516LL;
      v12 = 15LL;
      v13 = 184467440LL;
      v14 = 0;
      goto LABEL_26;
    }
    v20 = v8 + 4;
    if ( v8 + 4 == v6 )
      goto no_conv;
    v12 = 15LL;
    v11 = 737095516LL;
    v13 = 184467440LL;
    v14 = 0;
  }
  else
  {
    v20 = v8 + 4;
    *error = -1;
    if ( v8 + 4 == v6 )
      goto no_conv;
    v12 = 8LL;
    v11 = 368547758LL;
    v13 = 92233720LL;
    v14 = 1;
  }
  if ( *v20 || v8[5] )
    goto no_conv;
  v8 = v20;
LABEL_26:
  if ( v8[2] )
    goto no_conv;
  v15 = v8[3];
  if ( v15 != 48 )
  {
    LOBYTE(v16) = v15 - 48;
    if ( (unsigned __int8)v16 <= 9u )
    {
      v17 = (char *)(v8 + 4);
      v18 = (char *)(v8 + 36);
      v16 = (unsigned __int8)v16;
      goto LABEL_30;
    }
    goto no_conv;
  }
  do
  {
    v8 += 4;
    if ( v8 == v6 )
    {
      v17 = (char *)v8;
      result = 0LL;
      goto end_i;
    }
  }
  while ( !*v8 && !v8[1] && !v8[2] && v8[3] == 48 );
  v18 = (char *)(v8 + 36);
  v17 = (char *)v8;
  v16 = 0LL;
LABEL_30:
  if ( v18 > v6 )
    v18 = (char *)v6;
  if ( v17 == v18 )
  {
LABEL_62:
    if ( v17 != v6 )
    {
      v21 = (char *)v6;
      v22 = v17;
      if ( v17 + 36 <= v6 )
        v21 = v17 + 36;
      v23 = 0LL;
      do
      {
        if ( *v22 )
          goto end_i_and_j;
        if ( v22[1] )
          goto end_i_and_j;
        if ( v22[2] )
          goto end_i_and_j;
        v24 = v22[3] - 48;
        if ( v24 > 9u )
          goto end_i_and_j;
        v22 += 4;
        v23 = v24 + 10 * v23;
      }
      while ( v22 != v21 );
      if ( v6 == v22 )
      {
        if ( v22 == v17 + 36 )
          goto end3;
end_i_and_j:
        v25 = lfactor_0[(unsigned __int64)(v22 - v17) >> 2] * v16;
      }
      else
      {
        if ( !*v22 && !v22[1] && !v22[2] )
        {
          v26 = v22[3] - 48;
          if ( v26 <= 9u )
          {
            if ( v22 + 4 == v6 || v22[4] || v22[5] || v22[6] || (v27 = v22[7] - 48, v27 > 9u) )
            {
              *endptr = v22 + 4;
              result = v26 + 10000000000LL * v16 + 10 * v23;
              if ( v14 )
              {
                if ( (unsigned __int64)result <= 0x8000000000000000LL )
                {
                  return -result;
                }
                else
                {
                  *error = 34;
                  return 0x8000000000000000LL;
                }
              }
            }
            else
            {
              *endptr = v22 + 6;
              v28 = v27 + 10LL * v26;
              if ( (v22 + 6 == v6 || v22[6] || v22[7] || v22[8] || (unsigned __int8)(v22[9] - 48) > 9u)
                && v16 <= v13
                && (v16 != v13 || v23 < v11 || v28 <= v12) )
              {
                return v28 + 100000000000LL * v16 + 100 * v23;
              }
              else
              {
                result = 0x8000000000000000LL;
                *error = 34;
                if ( !v14 )
                  return -1LL;
              }
            }
            return result;
          }
        }
end3:
        v25 = 1000000000 * v16;
      }
      *endptr = v22;
      result = v25 + v23;
      goto LABEL_41;
    }
  }
  else
  {
    while ( !*v17 )
    {
      if ( v17[1] )
        break;
      if ( v17[2] )
        break;
      v19 = v17[3] - 48;
      if ( v19 > 9u )
        break;
      v17 += 4;
      v16 = v19 + 10 * v16;
      if ( v18 == v17 )
        goto LABEL_62;
    }
  }
  result = v16;
end_i:
  *endptr = v17;
LABEL_41:
  if ( v14 )
    return -result;
  return result;
};

// Line 2273: range 000000000CFC3AC0-000000000CFC3ACA
size_t __fastcall my_numchars_utf32(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  return (unsigned __int64)(e - b) >> 2;
};

// Line 2282: range 000000000CFC3AD0-000000000CFC3AE2
size_t __fastcall my_charpos_utf32(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos)
{
  unsigned __int64 v4; // rdx
  size_t v5; // rcx
  size_t result; // rax

  v4 = e - b;
  v5 = 4 * pos;
  result = v4 + 4;
  if ( v4 >= v5 )
    return v5;
  return result;
};

// Line 2294: range 000000000CFC3AF0-000000000CFC3B50
size_t __fastcall my_well_formed_len_utf32(CHARSET_INFO *cs_0, const char *b, const char *e, size_t nchars, int *error)
{
  size_t v5; // rcx
  const char *v6; // rdi
  size_t result; // rax

  v5 = 4 * nchars;
  v6 = b;
  result = e - b;
  *error = 0;
  if ( e - b > v5 )
  {
    e = &b[v5];
    result = v5;
  }
  if ( b < e )
  {
    if ( *b || b[1] > 0x10u )
    {
      result = 0LL;
LABEL_12:
      *error = 1;
    }
    else
    {
      while ( 1 )
      {
        b += 4;
        if ( e <= b )
          break;
        if ( *b || b[1] > 0x10u )
        {
          result = b - v6;
          goto LABEL_12;
        }
      }
    }
  }
  return result;
};

// Line 2319: range 000000000CFC5920-000000000CFC5967
void __fastcall my_fill_utf32(CHARSET_INFO *cs_0, char *s, size_t slen, int fill)
{
  char *v4; // r12
  char *v5; // rbx
  char buf[10]; // [rsp+0h] [rbp+0h] BYREF
  char varsA; // [rsp+Ah] [rbp+Ah] BYREF

  v4 = &s[slen];
  v5 = s;
  cs_0->cset->wc_mb(cs_0, fill, (uchar *)buf, (uchar *)&varsA);
  if ( s < v4 )
  {
    do
    {
      v5 += 4;
      *((_DWORD *)v5 - 1) = *(_DWORD *)buf;
    }
    while ( v4 > v5 );
  }
};

// Line 2341: range 000000000CFC3B60-000000000CFC3B94
size_t __fastcall my_lengthsp_utf32(CHARSET_INFO *cs_0, const char *ptr, size_t length)
{
  const char *i; // rax

  for ( i = &ptr[length]; i > ptr + 3; i -= 4 )
  {
    if ( *(i - 1) != 32 )
      break;
    if ( *(i - 2) )
      break;
    if ( *(i - 3) )
      break;
    if ( *(i - 4) )
      break;
  }
  return i - ptr;
};

// Line 2354: range 000000000CFC4C30-000000000CFC4C55
int __fastcall my_wildcmp_utf32_ci(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, str_end, wildstr, wildend, escape, w_one, w_many, cs_0->caseinfo);
};

// Line 2366: range 000000000CFC4C60-000000000CFC4C85
int __fastcall my_wildcmp_utf32_bin(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, str_end, wildstr, wildend, escape, w_one, w_many, 0LL);
};

// Line 2377: range 000000000CFC57F0-000000000CFC5913
int __fastcall my_strnncoll_utf32_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  unsigned __int64 v6; // rbx
  const uchar *v7; // rdi
  const uchar *v8; // r8
  const uchar *v9; // rdx
  const uchar *v10; // rsi
  __int64 v11; // rcx
  const uchar *v12; // rax
  int v13; // edx
  int v14; // ebp
  int v15; // ebp
  int result; // eax
  unsigned __int64 v17; // r10

  v7 = s;
  v8 = &t[tlen];
  v9 = &s[slen];
  v10 = t;
  if ( v7 >= v9 || t >= v8 )
  {
    LODWORD(v12) = (_DWORD)t;
LABEL_17:
    if ( t_is_prefix )
      return (_DWORD)v12 - (_DWORD)v8;
    else
      return (_DWORD)v9 - (_DWORD)v7 - ((_DWORD)v8 - (_DWORD)v12);
  }
  else
  {
    while ( 1 )
    {
      v11 = -104LL;
      if ( v9 >= v7 + 4 )
      {
        v11 = 4LL;
        v6 = (v7[1] << 16) + (*v7 << 24) + (v7[2] << 8) + v7[3];
      }
      v12 = v10 + 4;
      if ( v8 < v10 + 4 )
        break;
      v17 = v10[3] + (v10[1] << 16) + (*v10 << 24) + (v10[2] << 8);
      if ( (int)v11 <= 0 )
        break;
      if ( v6 != v17 )
        return v17 < v6 ? 1 : -1;
      v7 += v11;
      if ( v9 <= v7 || v8 <= v12 )
        goto LABEL_17;
      v10 += 4;
    }
    v13 = (_DWORD)v9 - (_DWORD)v7;
    v14 = v13;
    if ( (int)v8 - (int)v10 <= v13 )
      v13 = (_DWORD)v8 - (_DWORD)v10;
    v15 = v14 - ((_DWORD)v8 - (_DWORD)v10);
    result = memcmp(v7, v10, v13);
    if ( !result )
      return v15;
  }
  return result;
};

// Line 2431: range 000000000CFC3BA0-000000000CFC3CE5
int __fastcall my_strnncollsp_utf32_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // r11
  const uchar *v7; // rax
  const uchar *v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r9
  int result; // eax
  const uchar *v12; // rdx
  unsigned __int64 v13; // r9

  v6 = tlen;
  if ( slen <= tlen )
    v6 = slen;
  v7 = t;
  v8 = s;
  if ( !v6 )
  {
LABEL_8:
    if ( slen != tlen )
    {
      if ( slen < tlen )
      {
        v8 = v7;
        v12 = &t[tlen];
        result = -1;
      }
      else
      {
        v12 = &s[slen];
        result = 1;
      }
      if ( v8 < v12 )
      {
        v13 = ((unsigned __int64)v8[2] << 8) + v8[3] + ((unsigned __int64)*v8 << 24) + ((unsigned __int64)v8[1] << 16);
        if ( v13 != 32 )
        {
LABEL_18:
          if ( v13 <= 0x1F )
            return -result;
          return result;
        }
        while ( 1 )
        {
          v8 += 4;
          if ( v8 >= v12 )
            break;
          v13 = v8[3] + ((unsigned __int64)v8[1] << 16) + ((unsigned __int64)*v8 << 24) + ((unsigned __int64)v8[2] << 8);
          if ( v13 != 32 )
            goto LABEL_18;
        }
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v9 = ((unsigned __int64)v8[2] << 8) + ((unsigned __int64)*v8 << 24) + ((unsigned __int64)v8[1] << 16) + v8[3];
    v10 = v7[3] + ((unsigned __int64)v7[1] << 16) + ((unsigned __int64)*v7 << 24) + ((unsigned __int64)v7[2] << 8);
    if ( v9 != v10 )
      return v10 < v9 ? 1 : -1;
    v8 += 4;
    v7 += 4;
    v6 -= 4LL;
    if ( !v6 )
      goto LABEL_8;
  }
};

// Line 2469: range 000000000CFC3CF0-000000000CFC3D8A
size_t __fastcall my_scan_utf32(CHARSET_INFO *cs_0, const char *str, const char *end, int sequence_type)
{
  size_t result; // rax
  const char *v5; // rax

  if ( sequence_type != 2 || str >= end )
    return 0LL;
  result = 0LL;
  if ( end >= str + 4
    && *((unsigned __int8 *)str + 3)
     + (*((unsigned __int8 *)str + 1) << 16)
     + (*(unsigned __int8 *)str << 24)
     + (*((unsigned __int8 *)str + 2) << 8) == 32 )
  {
    v5 = str;
    do
      v5 += 4;
    while ( end > v5
         && v5 != &str[4 * ((unsigned __int64)(end - 4 - str) >> 2) + 4]
         && *((unsigned __int8 *)v5 + 3)
          + (*((unsigned __int8 *)v5 + 1) << 16)
          + (*(unsigned __int8 *)v5 << 24)
          + (*((unsigned __int8 *)v5 + 2) << 8) == 32 );
    return v5 - str;
  }
  return result;
};

// Line 2684: range 000000000CFC3D90-000000000CFC3DB5
int __fastcall my_ucs2_uni(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  if ( e < s + 2 )
    return -102;
  *pwc = s[1] + (*s << 8);
  return 2;
};

// Line 2694: range 000000000CFC3DC0-000000000CFC3DF8
int __fastcall my_uni_ucs2(CHARSET_INFO *cs_0, ulong wc, uchar *r, uchar *e)
{
  int result; // eax

  if ( e < r + 2 )
    return -102;
  result = 0;
  if ( wc <= 0xFFFF )
  {
    r[1] = wc;
    *r = BYTE1(wc);
    return 2;
  }
  return result;
};

// Line 2712: range 000000000CFC3E00-000000000CFC3E83
size_t __fastcall my_caseup_ucs2(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v5; // r8
  size_t result; // rax
  MY_UNICASE_INFO **caseinfo; // r11
  char *v8; // rsi
  char *v9; // rcx
  unsigned __int64 toupper; // rdi
  MY_UNICASE_INFO *v11; // r9

  v5 = &src[srclen];
  result = srclen;
  caseinfo = cs_0->caseinfo;
  if ( src < &src[srclen] )
  {
    v8 = src + 2;
    if ( v5 >= v8 )
    {
      do
      {
        v9 = v8;
        toupper = ((unsigned __int8)*(v8 - 2) << 8) + (unsigned __int8)*(v8 - 1);
        v11 = caseinfo[toupper >> 8];
        if ( v11 )
          toupper = v11[(unsigned __int8)*(v8 - 1)].toupper;
        if ( v5 < v8 )
          break;
        if ( toupper > 0xFFFF )
          break;
        *(v8 - 1) = toupper;
        *(v8 - 2) = BYTE1(toupper);
        if ( v5 <= v8 )
          break;
        v8 += 2;
      }
      while ( v5 >= v9 + 2 );
    }
  }
  return result;
};

// Line 2735: range 000000000CFC3E90-000000000CFC3F83
void __fastcall my_hash_sort_ucs2(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  MY_UNICASE_INFO **caseinfo; // r11
  const uchar *i; // rdx
  const uchar *v7; // rax
  ulong j; // rbp
  uint32 sort; // edi
  unsigned __int64 v10; // r10
  MY_UNICASE_INFO *v11; // r9
  ulong v12; // r9
  ulong v13; // rsi

  caseinfo = cs_0->caseinfo;
  for ( i = &s[slen]; i > s + 1; i -= 2 )
  {
    if ( *(i - 1) != 32 )
      break;
    if ( *(i - 2) )
      break;
  }
  if ( s < i )
  {
    v7 = s + 2;
    if ( i >= s + 2 )
    {
      for ( j = *n2; ; j = v13 )
      {
        LOBYTE(sort) = *(v7 - 1);
        v10 = (unsigned __int64)((*(v7 - 2) << 8) + (unsigned __int8)sort) >> 8;
        v11 = caseinfo[v10];
        if ( v11 )
        {
          sort = v11[*(v7 - 1)].sort;
          v10 = (unsigned __int64)sort >> 8;
        }
        *n1 ^= (*n1 << 8) + (j + (*n1 & 0x3F)) * (unsigned __int8)sort;
        v12 = *n2 + 3;
        *n2 = v12;
        *n1 ^= (*n1 << 8) + v10 * (v12 + (*n1 & 0x3F));
        v13 = *n2 + 3;
        *n2 = v13;
        if ( i <= v7 )
          break;
        v7 += 2;
        if ( i < v7 )
          break;
      }
    }
  }
};

// Line 2759: range 000000000CFC3F90-000000000CFC4014
size_t __fastcall my_casedn_ucs2(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v5; // r8
  size_t result; // rax
  MY_UNICASE_INFO **caseinfo; // r11
  char *v8; // rsi
  char *v9; // rcx
  unsigned __int64 tolower; // rdi
  MY_UNICASE_INFO *v11; // r9

  v5 = &src[srclen];
  result = srclen;
  caseinfo = cs_0->caseinfo;
  if ( src < &src[srclen] )
  {
    v8 = src + 2;
    if ( v5 >= v8 )
    {
      do
      {
        v9 = v8;
        tolower = ((unsigned __int8)*(v8 - 2) << 8) + (unsigned __int8)*(v8 - 1);
        v11 = caseinfo[tolower >> 8];
        if ( v11 )
          tolower = v11[(unsigned __int8)*(v8 - 1)].tolower;
        if ( v5 < v8 )
          break;
        if ( tolower > 0xFFFF )
          break;
        *(v8 - 1) = tolower;
        *(v8 - 2) = BYTE1(tolower);
        if ( v5 <= v8 )
          break;
        v8 += 2;
      }
      while ( v5 >= v9 + 2 );
    }
  }
  return result;
};

// Line 2780: range 000000000CFC4020-000000000CFC411B
int __fastcall my_strnncoll_ucs2(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  unsigned __int64 sort; // rbx
  const uchar *v7; // rdx
  const uchar *v8; // r8
  MY_UNICASE_INFO **caseinfo; // r11
  __int64 v10; // rdi
  const uchar *v11; // rax
  int v12; // r10d
  int v14; // r12d
  unsigned __int64 v15; // rcx
  MY_UNICASE_INFO *v16; // r10
  MY_UNICASE_INFO *v17; // r10

  v7 = &s[slen];
  v8 = &t[tlen];
  caseinfo = cs_0->caseinfo;
  if ( s >= v7 || t >= v8 )
  {
    LODWORD(v11) = (_DWORD)t;
LABEL_18:
    if ( t_is_prefix )
      return (_DWORD)v11 - (_DWORD)v8;
    else
      return (_DWORD)v7 - (_DWORD)s - ((_DWORD)v8 - (_DWORD)v11);
  }
  else
  {
    while ( 1 )
    {
      v10 = -102LL;
      if ( v7 >= s + 2 )
      {
        v10 = 2LL;
        sort = (*s << 8) + s[1];
      }
      v11 = t + 2;
      if ( v8 < t + 2 )
      {
        v12 = *t;
        return *s - v12;
      }
      v12 = *t;
      v14 = t[1] + (v12 << 8);
      v15 = v14;
      if ( (int)v10 <= 0 )
        return *s - v12;
      v16 = caseinfo[BYTE1(sort)];
      if ( v16 )
        sort = v16[(unsigned __int8)sort].sort;
      v17 = caseinfo[(unsigned __int64)v14 >> 8];
      if ( v17 )
        v15 = v17[(unsigned __int8)v14].sort;
      if ( sort != v15 )
        return v15 < sort ? 1 : -1;
      s += v10;
      if ( v7 <= s || v8 <= v11 )
        goto LABEL_18;
      t = v11;
    }
  }
};

// Line 2852: range 000000000CFC4120-000000000CFC4255
int __fastcall my_strnncollsp_ucs2(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // rdx
  size_t v7; // r8
  size_t v8; // r9
  const uchar *v9; // rax
  MY_UNICASE_INFO **caseinfo; // rbx
  const uchar *i; // rdi
  int sort; // ebp
  int v13; // r11d
  MY_UNICASE_INFO *v14; // r10
  int v15; // r11d
  int v16; // r11d
  MY_UNICASE_INFO *v17; // r10
  int result; // eax
  const uchar *v19; // rdx
  uchar v20; // r9

  v6 = slen & 0xFFFFFFFFFFFFFFFELL;
  v7 = tlen & 0xFFFFFFFFFFFFFFFELL;
  v8 = v7;
  v9 = t;
  if ( v6 <= v7 )
    v8 = v6;
  caseinfo = cs_0->caseinfo;
  for ( i = s; v8; v8 -= 2LL )
  {
    v16 = *i;
    v17 = caseinfo[(unsigned __int8)v16];
    if ( v17 )
      sort = v17[i[1]].sort;
    else
      sort = (v16 << 8) + i[1];
    v13 = *v9;
    v14 = caseinfo[(unsigned __int8)v13];
    if ( v14 )
    {
      v15 = v14[v9[1]].sort;
      if ( sort != v15 )
        return 2 * (v15 < sort) - 1;
    }
    else
    {
      v15 = v9[1] + (v13 << 8);
      if ( sort != v15 )
        return 2 * (v15 < sort) - 1;
    }
    i += 2;
    v9 += 2;
  }
  if ( v6 == v7 )
    return 0;
  if ( v6 < v7 )
  {
    i = v9;
    v19 = &t[v7];
    result = -1;
  }
  else
  {
    v19 = &s[v6];
    result = 1;
  }
  if ( v19 <= i )
    return 0;
  if ( *i )
    return result;
  if ( i[1] == 32 )
  {
    while ( 1 )
    {
      i += 2;
      if ( i >= v19 )
        return 0;
      if ( *i )
        return result;
      v20 = i[1];
      if ( v20 != 32 )
        goto LABEL_26;
    }
  }
  v20 = i[1];
LABEL_26:
  if ( v20 < 0x20u )
    return -result;
  return result;
};

// Line 2897: range 000000000CFC4260-000000000CFC4265
uint __fastcall my_ismbchar_ucs2(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  return 2;
};

// Line 2904: range 000000000CFC4270-000000000CFC4275
uint __fastcall my_mbcharlen_ucs2(CHARSET_INFO *cs_0, uint c)
{
  return 2;
};

// Line 2910: range 000000000CFC4280-000000000CFC4289
size_t __fastcall my_numchars_ucs2(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  return (unsigned __int64)(e - b) >> 1;
};

// Line 2921: range 000000000CFC4290-000000000CFC42A2
size_t __fastcall my_charpos_ucs2(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos)
{
  size_t v4; // rdx
  size_t result; // rax

  v4 = e - b;
  result = v4 + 2;
  if ( v4 >= pos )
    return 2 * pos;
  return result;
};

// Line 2932: range 000000000CFC42B0-000000000CFC42C9
size_t __fastcall my_well_formed_len_ucs2(CHARSET_INFO *cs_0, const char *b, const char *e, size_t nchars, int *error)
{
  size_t result; // rax
  unsigned __int64 v6; // rdx

  result = 2 * nchars;
  *error = 0;
  v6 = (e - b) & 0xFFFFFFFFFFFFFFFELL;
  if ( v6 <= 2 * nchars )
    return v6;
  return result;
};

// Line 2944: range 000000000CFC4C90-000000000CFC4CB5
int __fastcall my_wildcmp_ucs2_ci(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, str_end, wildstr, wildend, escape, w_one, w_many, cs_0->caseinfo);
};

// Line 2956: range 000000000CFC4CC0-000000000CFC4CE5
int __fastcall my_wildcmp_ucs2_bin(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, str_end, wildstr, wildend, escape, w_one, w_many, 0LL);
};

// Line 2970: range 000000000CFC42D0-000000000CFC438B
int __fastcall my_strnncoll_ucs2_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  unsigned __int64 v6; // r11
  const uchar *v7; // rdx
  const uchar *v8; // r8
  __int64 v9; // rdi
  const uchar *v10; // rax
  int v11; // ecx
  unsigned __int64 v13; // r10

  v7 = &s[slen];
  v8 = &t[tlen];
  if ( s >= v7 || t >= v8 )
  {
    LODWORD(v10) = (_DWORD)t;
LABEL_14:
    if ( t_is_prefix )
      return (_DWORD)v10 - (_DWORD)v8;
    else
      return (_DWORD)v7 - (_DWORD)s - ((_DWORD)v8 - (_DWORD)v10);
  }
  else
  {
    while ( 1 )
    {
      v9 = -102LL;
      if ( v7 >= s + 2 )
      {
        v9 = 2LL;
        v6 = s[1] + (*s << 8);
      }
      v10 = t + 2;
      if ( v8 < t + 2 )
      {
        v11 = *t;
        return *s - v11;
      }
      v11 = *t;
      v13 = (*(v10 - 2) << 8) + *(v10 - 1);
      if ( (int)v9 <= 0 )
        return *s - v11;
      if ( v6 != v13 )
        return v13 < v6 ? 1 : -1;
      s += v9;
      if ( v7 <= s || v8 <= v10 )
        goto LABEL_14;
      t = v10;
    }
  }
};

// Line 3004: range 000000000CFC4390-000000000CFC4482
int __fastcall my_strnncollsp_ucs2_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // rdx
  size_t v7; // r8
  size_t v8; // r10
  const uchar *v9; // rdi
  int v10; // r11d
  int v11; // r9d
  const uchar *v12; // rax
  const uchar *v13; // rcx
  int result; // eax
  uchar v15; // dl

  v6 = slen & 0xFFFFFFFFFFFFFFFELL;
  v7 = tlen & 0xFFFFFFFFFFFFFFFELL;
  v8 = v7;
  if ( v6 <= v7 )
    v8 = v6;
  if ( v8 )
  {
    v9 = s;
    v10 = (*s << 8) + s[1];
    v11 = (*t << 8) + t[1];
    v12 = t;
    if ( v10 != v11 )
      return 2 * (v10 > v11) - 1;
    while ( 1 )
    {
      v9 += 2;
      v12 += 2;
      v8 -= 2LL;
      if ( !v8 )
        break;
      v10 = (*v9 << 8) + v9[1];
      v11 = v12[1] + (*v12 << 8);
      if ( v10 != v11 )
        return 2 * (v10 > v11) - 1;
    }
  }
  else
  {
    v12 = t;
    v9 = s;
  }
  if ( v6 == v7 )
    return 0;
  if ( v6 < v7 )
  {
    v9 = v12;
    v13 = &t[v7];
    result = -1;
  }
  else
  {
    v13 = &s[v6];
    result = 1;
  }
  if ( v13 <= v9 )
    return 0;
  while ( !*v9 )
  {
    v15 = v9[1];
    if ( v15 != 32 )
    {
      if ( v15 < 0x20u )
        return -result;
      return result;
    }
    v9 += 2;
    if ( v9 >= v13 )
      return 0;
  }
  return result;
};

// Line 3049: range 000000000CFC4490-000000000CFC44FD
void __fastcall my_hash_sort_ucs2_bin(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  const uchar *v5; // rax
  const uchar *v6; // rdx
  ulong v7; // r10
  ulong v8; // rdi

  v5 = key + 1;
  v6 = &key[len];
  if ( v6 > key + 1 )
  {
    do
    {
      if ( *(v6 - 1) != 32 )
        break;
      if ( *(v6 - 2) )
        break;
      v6 -= 2;
    }
    while ( v6 > v5 );
  }
  if ( key < v6 )
  {
    v7 = *nr2;
    while ( 1 )
    {
      *nr1 ^= (*nr1 << 8) + (v7 + (*nr1 & 0x3F)) * *key;
      key = v5;
      v8 = *nr2 + 3;
      *nr2 = v8;
      if ( v5 == v6 )
        break;
      v7 = v8;
      ++v5;
    }
  }
};
