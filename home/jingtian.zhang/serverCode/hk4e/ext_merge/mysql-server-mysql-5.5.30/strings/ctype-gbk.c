// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-gbk.c

// Line 3444: range 000000000CFCB5A0-000000000CFCB6EE
int __fastcall my_strnncoll_gbk_internal(const uchar **a_res, const uchar **b_res, size_t length)
{
  size_t v3; // r9
  const uchar *v4; // rcx
  const uchar *v5; // r8
  __int64 v6; // rax
  int v7; // r11d
  __int64 v8; // r10
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  int result; // eax
  unsigned int v14; // eax
  unsigned int v15; // r10d
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  unsigned __int16 v19; // ax

  v3 = length - 1;
  v4 = *a_res;
  v5 = *b_res;
  if ( !length )
  {
LABEL_11:
    *a_res = v4;
    result = 0;
    *b_res = v5;
    return result;
  }
  while ( 1 )
  {
    v6 = *v4;
    if ( !v3
      || (unsigned __int8)(v6 + 127) > 0x7Du
      || (v7 = v4[1], (unsigned __int8)(v7 + 0x80) > 0x7Eu) && (unsigned __int8)(v7 - 64) > 0x3Eu )
    {
      v8 = *v5;
      goto LABEL_9;
    }
    v8 = *v5;
    if ( (unsigned __int8)(v8 + 127) <= 0x7Du )
    {
      v9 = v5[1];
      if ( (unsigned __int8)(v9 + 0x80) <= 0x7Eu || (unsigned __int8)(v9 - 64) <= 0x3Eu )
        break;
    }
LABEL_9:
    ++v4;
    ++v5;
    v10 = sort_order_gbk[v6];
    v11 = sort_order_gbk[v8];
    if ( (_BYTE)v10 != (_BYTE)v11 )
      return v10 - v11;
LABEL_10:
    length = v3;
    if ( v3-- == 0 )
      goto LABEL_11;
  }
  v14 = v7 | ((_DWORD)v6 << 8);
  v15 = v9 | ((_DWORD)v8 << 8);
  if ( v14 == v15 )
  {
    v4 += 2;
    v5 += 2;
    v3 = length - 2;
    goto LABEL_10;
  }
  v16 = (unsigned __int8)v14 - 65;
  if ( (unsigned __int8)v14 < 0x80u )
    v16 = (unsigned __int8)v14 - 64;
  v17 = v16 + 190 * ((v14 >> 8) - 129);
  v18 = (unsigned __int8)v15 - 65;
  v19 = gbk_order[v17] - 32512;
  if ( (unsigned __int8)v15 < 0x80u )
    v18 = (unsigned __int8)v15 - 64;
  return v19 - (unsigned __int16)(gbk_order[190 * (v15 >> 8) - 24510 + v18] - 32512);
};

// Line 3476: range 000000000CFCB700-000000000CFCB74F
int __fastcall my_strnncoll_gbk(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool b_is_prefix)
{
  size_t v7; // r12
  int v8; // ebp
  int v9; // ebx
  int result; // eax
  int v11; // eax
  const uchar *ba; // [rsp+0h] [rbp-38h] BYREF
  const uchar *aa; // [rsp+8h] [rbp-30h] BYREF

  v7 = a_length;
  v8 = b_length;
  v9 = a_length;
  if ( b_length <= a_length )
    v7 = b_length;
  aa = a;
  ba = b;
  result = my_strnncoll_gbk_internal(&aa, &ba, v7);
  if ( !result )
  {
    v11 = v7;
    if ( !b_is_prefix )
      v11 = v9;
    return v11 - v8;
  }
  return result;
};

// Line 3487: range 000000000CFCB750-000000000CFCB80B
int __fastcall my_strnncollsp_gbk(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // r12
  size_t v8; // rbx
  int result; // eax
  const uchar *v10; // rcx
  size_t v11; // rbx
  const uchar *v12; // rdx
  uchar v13; // si
  const uchar *v14; // rcx
  const uchar *ba; // [rsp+0h] [rbp-28h] BYREF
  const uchar *aa; // [rsp+8h] [rbp-20h] BYREF

  v6 = a_length;
  v8 = a_length;
  if ( b_length <= a_length )
    v6 = b_length;
  aa = a;
  ba = b;
  result = my_strnncoll_gbk_internal(&aa, &ba, v6);
  if ( !result && v8 != b_length )
  {
    if ( b_length > v8 )
    {
      v10 = ba;
      v8 = b_length;
      result = -1;
      aa = ba;
    }
    else
    {
      v10 = aa;
      LOBYTE(result) = 1;
    }
    v11 = v8 - v6;
    v12 = &v10[v11];
    if ( v10 < &v10[v11] )
    {
      v13 = *v10;
      v14 = v10 + 1;
      if ( v13 != 32 )
      {
LABEL_15:
        if ( v13 <= 0x1Fu )
          return -result;
        return result;
      }
      while ( 1 )
      {
        aa = v14;
        if ( v14 == v12 )
          break;
        v13 = *v14++;
        if ( v13 != 32 )
          goto LABEL_15;
      }
    }
    return 0;
  }
  return result;
};

// Line 3526: range 000000000CFCB2D0-000000000CFCB3F3
size_t __fastcall my_strnxfrm_gbk(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  uchar *v5; // rdi
  uchar *v7; // rdx
  size_t v8; // rsi
  size_t v9; // r9
  __int16 v10; // ax
  __int16 v11; // r10
  __int16 v12; // ax
  unsigned int v13; // r10d
  int v14; // eax
  unsigned int v15; // r9d
  uint16 v16; // r9
  uchar *v17; // rax
  __int64 v18; // r9
  __int64 v20; // rsi

  v5 = dest;
  v7 = &dest[len];
  v8 = srclen;
  while ( 2 )
  {
    v9 = v8 - 1;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( v5 >= v7 )
          goto LABEL_13;
        if ( !v9 )
          break;
        v10 = *src;
        if ( (unsigned __int8)(v10 + 127) > 0x7Du
          || (v11 = src[1], (unsigned __int8)(v11 + 0x80) > 0x7Eu) && (unsigned __int8)(v11 - 64) > 0x3Eu )
        {
          v20 = (unsigned __int8)v10;
          goto LABEL_17;
        }
        v12 = v11 | (v10 << 8);
        v13 = (unsigned __int8)v12;
        v14 = HIBYTE(v12);
        v15 = v13 - 65;
        if ( v13 < 0x80 )
          v15 = v13 - 64;
        v16 = gbk_order[190 * v14 - 24510 + v15];
        v17 = v5 + 1;
        v18 = (unsigned __int16)(v16 - 32512);
        *v5 = BYTE1(v18);
        if ( v7 > v5 + 1 )
        {
          v17 = v5 + 2;
          v5[1] = v18;
        }
        v8 -= 2LL;
        src += 2;
        v5 = v17;
        v9 = v8 - 1;
        if ( !v8 )
          goto LABEL_13;
      }
      v20 = *src;
LABEL_17:
      ++src;
      *v5++ = sort_order_gbk[v20];
      v8 = v9;
      continue;
    }
    break;
  }
LABEL_13:
  if ( len > srclen )
    memset(v5, 32, len - srclen);
  return len;
};

// Line 3554: range 000000000CFCB180-000000000CFCB1BD
uint __fastcall ismbchar_gbk(CHARSET_INFO *cs_0, const char *p, const char *e)
{
  uint result; // eax
  char v4; // dl

  result = 0;
  if ( *p > 0x80u && *p != -1 && e - p > 1 )
  {
    v4 = p[1];
    if ( (unsigned __int8)(v4 - 64) <= 0x3Eu || v4 < -1 )
      return 2;
  }
  return result;
};

// Line 3559: range 000000000CFCB1C0-000000000CFCB1CE
uint __fastcall mbcharlen_gbk(CHARSET_INFO *cs_0, uint c)
{
  return 2 - ((unsigned __int8)(c + 127) >= 0x7Eu);
};

// Line 10672: range 000000000CFCB400-000000000CFCB599
int __fastcall my_wc_mb_gbk(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  unsigned int v4; // esi
  int result; // eax
  uchar v6; // ch

  if ( s >= e )
    return -101;
  if ( (unsigned int)wc <= 0x7F )
  {
    *s = wc;
    return 1;
  }
  if ( (unsigned int)(wc - 164) <= 0x3AD )
  {
    result = tab_uni_gbk0[(int)wc - 164];
  }
  else if ( (unsigned int)(wc - 8208) <= 0x302 )
  {
    result = tab_uni_gbk1[(int)wc - 8208];
  }
  else if ( (unsigned int)(wc - 9312) <= 0x1E2 )
  {
    result = tab_uni_gbk2[(int)wc - 9312];
  }
  else if ( (unsigned int)(wc - 12288) <= 0x129 )
  {
    result = tab_uni_gbk3[(int)wc - 12288];
  }
  else if ( (unsigned int)(wc - 12832) <= 0x83 )
  {
    result = tab_uni_gbk4[(int)wc - 12832];
  }
  else if ( (unsigned int)(wc - 13198) <= 0x47 )
  {
    result = tab_uni_gbk5[(int)wc - 13198];
  }
  else if ( (unsigned int)(wc - 19968) <= 0x51A5 )
  {
    result = tab_uni_gbk6[(int)wc - 19968];
  }
  else if ( (unsigned int)(wc - 63788) <= 0xFD )
  {
    result = tab_uni_gbk7[(int)wc - 63788];
  }
  else
  {
    v4 = wc - 65072;
    result = 0;
    if ( v4 > 0x1B5 )
      return result;
    result = tab_uni_gbk8[v4];
  }
  if ( result )
  {
    if ( e < s + 2 )
    {
      return -102;
    }
    else
    {
      v6 = BYTE1(result);
      s[1] = result;
      result = 2;
      *s = v6;
    }
  }
  return result;
};

// Line 10698: range 000000000CFCB1D0-000000000CFCB255
int __fastcall my_mb_wc_gbk(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rdi
  unsigned int v5; // eax
  ulong v6; // rax

  if ( s >= e )
    return -101;
  v4 = *s;
  if ( (unsigned __int8)v4 <= 0x7Fu )
  {
    *pwc = v4;
    return 1;
  }
  else if ( e < s + 2 )
  {
    return -102;
  }
  else
  {
    v5 = ((unsigned __int8)v4 << 8) + s[1] - 33088;
    if ( v5 > 0x7D0F )
    {
      *pwc = 0LL;
      return -2;
    }
    else
    {
      v6 = tab_gbk_uni0[v5];
      *pwc = v6;
      return v6 == 0 ? -2 : 2;
    }
  }
};

// Line 10729: range 000000000CFCB260-000000000CFCB2C2
size_t __fastcall my_well_formed_len_gbk(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos, int *error)
{
  const char *v5; // rax
  char v6; // di
  char v7; // di

  *error = 0;
  v5 = b;
  while ( pos && v5 < e )
  {
    v6 = *v5;
    if ( *v5 >= 0 )
    {
      ++v5;
    }
    else
    {
      if ( v5 >= e - 1 || v6 == (char)0x80 || v6 == -1 || (v7 = v5[1], (unsigned __int8)(v7 - 64) > 0x3Eu) && v7 >= -1 )
      {
        *error = 1;
        return v5 - b;
      }
      v5 += 2;
    }
    --pos;
  }
  return v5 - b;
};
