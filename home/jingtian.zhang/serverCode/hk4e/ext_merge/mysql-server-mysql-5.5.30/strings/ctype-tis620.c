// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-tis620.c

// Line 466: range 000000000CFCBE40-000000000CFCBF47
size_t __fastcall thai2sortable(uchar *tstr, size_t len)
{
  int v2; // edx
  uchar *v3; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  int *v8; // r15
  int v9; // eax
  uchar v10; // si
  int v12; // [rsp+Ch] [rbp-3Ch]

  v2 = len;
  v3 = tstr;
  v5 = -8;
  if ( (int)len > 0 )
  {
    while ( 1 )
    {
      v6 = *v3;
      if ( (v6 & 0x80u) == 0LL )
        break;
      v7 = (unsigned __int8)v6;
      v8 = t_ctype[v7];
      v9 = t_ctype[v7][4];
      if ( (v9 & 0x10) != 0 )
        v5 -= 8;
      if ( (v9 & 0x20) != 0 && v2 != 1 && (v10 = v3[1], (t_ctype[v10][4] & 0x10) != 0) )
      {
        *v3 = v10;
        v3[1] = v6;
        v2 -= 2;
        v3 += 2;
        if ( v2 <= 0 )
          return len;
      }
      else
      {
        if ( v8[1] > 8 )
        {
          v12 = v2 - 1;
          v3 = (uchar *)memmove(v3, v3 + 1, v2 - 1) - 1;
          v2 = v12;
          tstr[len - 1] = v5 + *((_BYTE *)v8 + 4) - 8;
          goto LABEL_5;
        }
LABEL_4:
        --v2;
LABEL_5:
        ++v3;
        if ( v2 <= 0 )
          return len;
      }
    }
    v5 -= 8;
    *v3 = to_lower_tis620[v6];
    goto LABEL_4;
  }
  return len;
};

// Line 533: range 000000000CFCC130-000000000CFCC24A
int __fastcall my_strnncoll_tis620(
        CHARSET_INFO *cs_0,
        const uchar *s1,
        size_t len1,
        const uchar *s2,
        size_t len2,
        my_bool s2_is_prefix)
{
  size_t v8; // rbx
  size_t v9; // rdi
  int result; // eax
  uchar *v11; // rax
  uchar *v12; // r13
  uchar *v13; // r12
  int i; // [rsp+8h] [rbp-80h]
  uchar buf[80]; // [rsp+10h] [rbp-78h] BYREF

  v8 = len1;
  if ( s2_is_prefix && len1 > len2 )
    v8 = len2;
  v9 = v8 + len2 + 2;
  if ( v9 > 0x50 )
  {
    v11 = (uchar *)my_str_malloc(v9);
    v12 = &v11[v8 + 1];
    v13 = v11;
    memcpy(v11, s1, v8);
    v13[v8] = 0;
    memcpy(v12, s2, len2);
    v12[len2] = 0;
    thai2sortable(v13, v8);
    thai2sortable(v12, len2);
    result = strcmp((const char *)v13, (const char *)v12);
    if ( v13 != buf )
    {
      i = result;
      my_str_free(v13);
      return i;
    }
  }
  else
  {
    memcpy(buf, s1, v8);
    buf[v8] = 0;
    memcpy(&buf[v8 + 1], s2, len2);
    buf[v8 + 1 + len2] = 0;
    thai2sortable(buf, v8);
    thai2sortable(&buf[v8 + 1], len2);
    return strcmp((const char *)buf, (const char *)&buf[v8 + 1]);
  }
  return result;
};

// Line 563: range 000000000CFCBFB0-000000000CFCC12A
int __fastcall my_strnncollsp_tis620(
        CHARSET_INFO *cs_0,
        const uchar *a0,
        size_t a_length,
        const uchar *b0,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // rdi
  uchar *v8; // r14
  uchar *v11; // rbx
  uchar *v12; // rbp
  size_t v13; // r12
  size_t v14; // rax
  size_t v15; // rdi
  uchar v16; // r8
  int v17; // esi
  uchar *v18; // rcx
  uchar *v19; // rdx
  int v20; // ebx
  size_t v21; // r12
  uchar *v22; // rsi
  uchar buf[80]; // [rsp+10h] [rbp-88h] BYREF

  v6 = a_length + b_length + 2;
  v8 = 0LL;
  v11 = buf;
  if ( v6 > 0x50 )
  {
    v11 = (uchar *)my_str_malloc(v6);
    v8 = v11;
  }
  v12 = &v11[a_length + 1];
  memcpy(v11, a0, a_length);
  v11[a_length] = 0;
  memcpy(v12, b0, b_length);
  v12[b_length] = 0;
  v13 = thai2sortable(v11, a_length);
  v14 = thai2sortable(v12, b_length);
  v15 = v13;
  if ( v14 <= v13 )
    v15 = v14;
  if ( v11 >= &v11[v15] )
  {
    v19 = v12;
    v18 = v11;
  }
  else
  {
    v16 = *v11;
    v17 = *v12;
    v18 = v11 + 1;
    v19 = v12 + 1;
    if ( *v11 != (_BYTE)v17 )
    {
LABEL_22:
      v20 = v16 - v17;
      goto ret;
    }
    while ( v18 != &v11[v15] )
    {
      ++v18;
      ++v19;
      v16 = *(v18 - 1);
      v17 = *(v19 - 1);
      if ( v16 != (_BYTE)v17 )
        goto LABEL_22;
    }
  }
  v20 = 0;
  if ( v13 != v14 )
  {
    if ( v13 < v14 )
    {
      v13 = v14;
      v20 = -1;
    }
    else
    {
      v19 = v18;
      LOBYTE(v20) = 1;
    }
    v21 = v13 - v15;
    v22 = &v19[v21];
    if ( v19 < &v19[v21] )
    {
      while ( *v19 == 32 )
      {
        if ( ++v19 == v22 )
          goto LABEL_24;
      }
      if ( *v19 <= 0x1Fu )
        v20 = -v20;
    }
    else
    {
LABEL_24:
      v20 = 0;
    }
  }
ret:
  if ( v8 )
    my_str_free(v8);
  return v20;
};

// Line 639: range 000000000CFCBF50-000000000CFCBFA2
size_t __fastcall my_strnxfrm_tis620(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  bool v6; // cc
  size_t v7; // rdx
  char *v8; // rax
  size_t v9; // rax

  v6 = len <= srclen;
  v7 = srclen;
  if ( v6 )
    v7 = len;
  v8 = strmake((char *)dest, (const char *)src, v7);
  v9 = thai2sortable(dest, v8 - (char *)dest);
  if ( len > v9 )
    memset(&dest[v9], 32, len - v9);
  return len;
};

// Line 828: range 000000000CFCBDB0-000000000CFCBDE8
int __fastcall my_mb_wc_tis620(CHARSET_INFO *cs_0, ulong *wc, const uchar *str, const uchar *end)
{
  ulong v4; // rcx
  int result; // eax

  if ( str >= end )
    return -101;
  v4 = cs_to_uni[*str];
  result = 1;
  *wc = v4;
  if ( !v4 )
    return *str == 0 ? 1 : -1;
  return result;
};

// Line 843: range 000000000CFCBDF0-000000000CFCBE35
int __fastcall my_wc_mb_tis620(CHARSET_INFO *cs_0, ulong wc, uchar *str, uchar *end)
{
  uchar *v4; // rax
  uchar v5; // cl
  int result; // eax

  if ( str >= end )
    return -101;
  v4 = uni_to_cs[BYTE1(wc)];
  if ( !v4 )
  {
    *str = 0;
    return wc == 0;
  }
  v5 = v4[(unsigned __int8)wc];
  result = 1;
  *str = v5;
  if ( !v5 )
    return wc == 0;
  return result;
};
