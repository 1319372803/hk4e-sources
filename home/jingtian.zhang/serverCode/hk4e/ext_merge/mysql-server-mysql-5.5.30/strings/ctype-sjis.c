// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-sjis.c

// Line 188: range 000000000CFCB810-000000000CFCB857
uint __fastcall ismbchar_sjis(CHARSET_INFO *cs_0, const char *p, const char *e)
{
  uint result; // eax
  char v4; // dl

  if ( (unsigned __int8)(*p + 32) <= 0x1Cu || (result = 0, (unsigned __int8)(*p + 127) <= 0x1Eu) )
  {
    result = 0;
    if ( e - p > 1 )
    {
      v4 = p[1];
      LOBYTE(result) = 2;
      if ( (unsigned __int8)(v4 - 64) > 0x3Eu )
      {
        LOBYTE(result) = 0;
        if ( v4 < 0 )
          return (unsigned __int8)v4 < 0xFDu ? 2 : 0;
      }
    }
  }
  return result;
};

// Line 193: range 000000000CFCB860-000000000CFCB87E
uint __fastcall mbcharlen_sjis(CHARSET_INFO *cs_0, uint c)
{
  uint result; // eax

  if ( (unsigned __int8)(c + 32) <= 0x1Cu )
    return 2;
  result = 1;
  if ( (unsigned __int8)(c + 127) <= 0x1Eu )
    return 2;
  return result;
};

// Line 1078: range 000000000CFCB880-000000000CFCB974
int __fastcall my_strnncoll_sjis_internal(
        CHARSET_INFO *cs_0,
        const uchar **a_res,
        size_t a_length,
        const uchar **b_res,
        size_t b_length)
{
  const uchar *v6; // rbx
  const uchar *v7; // r14
  const char *v8; // rbp
  const char *v9; // r12
  int v10; // eax
  int v11; // edx
  uchar v13; // si

  v6 = *a_res;
  v7 = *b_res;
  v8 = (const char *)&(*a_res)[a_length];
  v9 = (const char *)&(*b_res)[b_length];
LABEL_2:
  if ( v7 < (const uchar *)v9 )
  {
    while ( v6 < (const uchar *)v8 )
    {
      if ( !ismbchar_sjis(cs_0, (const char *)v6, v8) || !ismbchar_sjis(cs_0, (const char *)v7, v9) )
      {
        v13 = sort_order_sjis[*v6];
        v11 = sort_order_sjis[*v7];
        if ( v13 == (_BYTE)v11 )
        {
          ++v6;
          ++v7;
          goto LABEL_2;
        }
        v10 = v13;
        return v10 - v11;
      }
      v10 = v6[1] | (*v6 << 8);
      v11 = v7[1] | (*v7 << 8);
      if ( v10 != v11 )
        return v10 - v11;
      v7 += 2;
      v6 += 2;
      if ( v7 >= (const uchar *)v9 )
        break;
    }
  }
  *a_res = v6;
  *b_res = v7;
  return 0;
};

// Line 1111: range 000000000CFCB980-000000000CFCB9C2
int __fastcall my_strnncoll_sjis(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool b_is_prefix)
{
  size_t v8; // rbx
  int result; // eax
  int v10; // ebx
  const uchar *ba; // [rsp+0h] [rbp-28h] BYREF
  const uchar *aa; // [rsp+8h] [rbp-20h] BYREF

  v8 = a_length;
  aa = a;
  ba = b;
  result = my_strnncoll_sjis_internal(cs_0, &aa, a_length, &ba, b_length);
  if ( v8 > b_length && b_is_prefix )
    LODWORD(v8) = b_length;
  v10 = v8 - b_length;
  if ( !result )
    return v10;
  return result;
};

// Line 1123: range 000000000CFCB9D0-000000000CFCBA87
int __fastcall my_strnncollsp_sjis(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  int result; // eax
  const uchar *v10; // rdi
  const uchar *v11; // rdx
  uchar v12; // r8
  const uchar *ba; // [rsp+0h] [rbp-30h] BYREF
  const uchar *aa; // [rsp+8h] [rbp-28h] BYREF

  aa = a;
  ba = b;
  result = my_strnncoll_sjis_internal(cs_0, &aa, a_length, &ba, b_length);
  if ( !result )
  {
    v10 = aa;
    v11 = &a[a_length];
    result = 1;
    if ( aa == &a[a_length] )
    {
      v10 = ba;
      v11 = &b[b_length];
      if ( ba == &b[b_length] )
        return 0;
      aa = ba;
      result = -1;
    }
    if ( v10 < v11 )
    {
      v12 = *v10;
      if ( *v10 != 32 )
      {
LABEL_11:
        if ( v12 <= 0x1Fu )
          return -result;
        return result;
      }
      while ( 1 )
      {
        aa = v10 + 1;
        if ( v10 + 1 == v11 )
          break;
        v12 = v10[1];
        if ( v12 != 32 )
          goto LABEL_11;
        ++v10;
      }
    }
    return 0;
  }
  return result;
};

// Line 1162: range 000000000CFCBCD0-000000000CFCBDA6
size_t __fastcall my_strnxfrm_sjis(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  const char *v5; // r15
  uchar *v7; // r12
  uchar *v8; // rbp
  const uchar *v9; // rbx
  uchar v10; // al
  __int64 v12; // rax

  v5 = (const char *)&src[srclen];
  v7 = &dest[len];
  v8 = dest;
  v9 = src;
LABEL_2:
  if ( v9 < (const uchar *)v5 )
  {
    while ( v8 < v7 )
    {
      if ( !ismbchar_sjis(cs_0, (const char *)v9, v5) )
      {
        v12 = *v9++;
        *v8++ = sort_order_sjis[v12];
        goto LABEL_2;
      }
      *v8 = *v9;
      if ( v9 + 1 >= (const uchar *)v5 || v8 + 1 >= v7 )
      {
        ++v9;
        ++v8;
        goto LABEL_2;
      }
      v10 = v9[1];
      v9 += 2;
      v8 += 2;
      *(v8 - 1) = v10;
      if ( v9 >= (const uchar *)v5 )
        break;
    }
  }
  if ( len > srclen )
    memset(v8, 32, len - srclen);
  return len;
};

// Line 33991: range 000000000CFCBA90-000000000CFCBB55
int __fastcall my_mb_wc_sjis(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rax
  int v5; // edi
  ulong v6; // rcx
  int result; // eax
  uchar v8; // al

  if ( s >= e )
    return -101;
  v4 = *s;
  v5 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 <= 0x7Fu )
  {
LABEL_8:
    *pwc = v4;
    return 1;
  }
  if ( (unsigned int)(unsigned __int8)v4 - 161 <= 0x3E )
  {
    v4 = sjis_to_unicode[(unsigned __int8)v4];
    goto LABEL_8;
  }
  if ( e < s + 2 )
    return -102;
  v6 = sjis_to_unicode[256 * (unsigned __int8)v4 + s[1]];
  result = 2;
  *pwc = v6;
  if ( !v6 )
  {
    if ( (unsigned int)(v5 - 224) <= 0x1C || (result = 0, (unsigned int)(v5 - 129) <= 0x1E) )
    {
      v8 = s[1];
      if ( (unsigned __int8)(v8 + 0x80) <= 0x7Cu || (unsigned __int8)(v8 - 64) <= 0x3Eu )
        return -2;
      else
        return 0;
    }
  }
  return result;
};

// Line 34036: range 000000000CFCBB60-000000000CFCBBE5
int __fastcall my_wc_mb_sjis(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  int result; // eax
  uint16 v5; // di
  __int16 v6; // si

  if ( (int)wc <= 127 )
  {
    if ( wc != 92 )
    {
      if ( s < e )
      {
        *s = wc;
        return 1;
      }
      return -101;
    }
    v6 = -32417;
mb:
    if ( e < s + 2 )
      return -102;
    s[1] = v6;
    *s = HIBYTE(v6);
    return 2;
  }
  result = 0;
  if ( wc <= 0xFFFF )
  {
    v5 = unicode_to_sjis[wc];
    v6 = v5;
    if ( v5 )
    {
      if ( v5 <= 0xFFu )
      {
        if ( s < e )
        {
          *s = v5;
          LOBYTE(result) = 1;
          return result;
        }
        return -101;
      }
      goto mb;
    }
  }
  return result;
};

// Line 34087: range 000000000CFCBBF0-000000000CFCBC32
size_t __fastcall my_numcells_sjis(CHARSET_INFO *cs_0, const char *str, const char *str_end)
{
  size_t result; // rax

  for ( result = 0LL; str_end > str; result += 2LL )
  {
    while ( (unsigned __int8)(*str + 95) <= 0x3Eu || *str >= 0 )
    {
      ++str;
      ++result;
      if ( str_end <= str )
        return result;
    }
    str += 2;
  }
  return result;
};

// Line 34118: range 000000000CFCBC40-000000000CFCBCC4
size_t __fastcall my_well_formed_len_sjis(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos, int *error)
{
  char *v5; // rax
  char v6; // di
  char v7; // r9

  *error = 0;
  v5 = (char *)b;
  while ( pos && v5 < e )
  {
    v6 = *v5;
    if ( *v5 >= 0 )
      goto LABEL_2;
    if ( (unsigned __int8)(v6 + 32) > 0x1Cu && (unsigned __int8)(v6 + 127) > 0x1Eu
      || e - v5 <= 1
      || (v7 = v5[1], (unsigned __int8)(v7 - 64) > 0x3Eu) && v7 >= -3 )
    {
      if ( (unsigned __int8)(v6 + 95) > 0x3Eu )
      {
        *error = 1;
        return v5 - b;
      }
LABEL_2:
      ++v5;
      goto LABEL_3;
    }
    v5 += 2;
LABEL_3:
    --pos;
  }
  return v5 - b;
};
