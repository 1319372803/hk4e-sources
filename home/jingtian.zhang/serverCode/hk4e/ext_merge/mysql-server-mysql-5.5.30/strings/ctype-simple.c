// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-simple.c

// Line 30: range 000000000CFAAD00-000000000CFAAD17
size_t __fastcall my_strnxfrmlen_simple(CHARSET_INFO *cs_0, size_t len)
{
  __int64 strxfrm_multiply; // rax

  strxfrm_multiply = 1LL;
  if ( cs_0->strxfrm_multiply )
    strxfrm_multiply = cs_0->strxfrm_multiply;
  return len * strxfrm_multiply;
};

// Line 77: range 000000000CFAC2E0-000000000CFAC386
size_t __fastcall my_strnxfrm_simple(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  uchar *v6; // rax
  bool v7; // cc
  size_t v8; // rdx
  uchar *sort_order; // rbx
  const uchar *v10; // r9
  uchar *v11; // r10
  uchar *v13; // rcx
  __int64 v14; // rax

  v6 = dest;
  v7 = len <= srclen;
  v8 = srclen;
  if ( v7 )
    v8 = len;
  sort_order = cs_0->sort_order;
  if ( dest == src )
  {
    v13 = &dest[v8];
    if ( dest < &dest[v8] )
    {
      do
      {
        v14 = *dest++;
        *(dest - 1) = sort_order[v14];
      }
      while ( dest != v13 );
      v6 = dest;
    }
  }
  else if ( src < &src[v8] )
  {
    v10 = src;
    v11 = dest;
    do
      *v11++ = sort_order[*v10++];
    while ( v10 != &src[v8] );
    v6 = &dest[v10 - src];
  }
  if ( len > v8 )
    memset(v6, 32, len - v8);
  return len;
};

// Line 103: range 000000000CFAAD20-000000000CFAAD83
int __fastcall my_strnncoll_simple(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  size_t v6; // r10
  uchar *sort_order; // rdi
  const uchar *v8; // r10
  int v9; // eax
  int v10; // r9d
  int result; // eax

  v6 = tlen;
  sort_order = cs_0->sort_order;
  if ( slen <= tlen )
    v6 = slen;
  if ( slen > tlen && t_is_prefix )
    slen = tlen;
  v8 = &t[v6];
  while ( t != v8 )
  {
    ++s;
    ++t;
    v9 = sort_order[*(s - 1)];
    v10 = sort_order[*(t - 1)];
    if ( (_BYTE)v9 != (_BYTE)v10 )
      return v9 - v10;
  }
  result = 1;
  if ( tlen >= slen )
    return -(tlen > slen);
  return result;
};

// Line 153: range 000000000CFAAD90-000000000CFAAE72
int __fastcall my_strnncollsp_simple(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // rbx
  uchar *sort_order; // r10
  const uchar *v8; // r9
  const uchar *v9; // rdi
  int v10; // eax
  int v11; // ecx
  int result; // eax
  const uchar *v13; // rdx
  uchar v14; // si
  uchar v15; // cl

  v6 = a_length;
  if ( b_length <= a_length )
    v6 = b_length;
  sort_order = cs_0->sort_order;
  if ( a >= &a[v6] )
  {
    v8 = b;
    v9 = a;
  }
  else
  {
    v8 = b + 1;
    v9 = a + 1;
    v10 = sort_order[*a];
    v11 = sort_order[*b];
    if ( (_BYTE)v10 != (_BYTE)v11 )
      return v10 - v11;
    while ( v9 != &a[v6] )
    {
      ++v9;
      ++v8;
      v10 = sort_order[*(v9 - 1)];
      v11 = sort_order[*(v8 - 1)];
      if ( (_BYTE)v10 != (_BYTE)v11 )
        return v10 - v11;
    }
  }
  if ( a_length == b_length )
    return 0;
  result = 1;
  if ( b_length > a_length )
  {
    a_length = b_length;
    v9 = v8;
    result = -1;
  }
  v13 = &v9[a_length - v6];
  if ( v9 >= v13 )
    return 0;
  v14 = sort_order[*v9];
  if ( v14 == sort_order[32] )
  {
    while ( ++v9 != v13 )
    {
      v15 = sort_order[*v9];
      if ( v15 != v14 )
        goto LABEL_18;
    }
    return 0;
  }
  v15 = sort_order[*v9];
  v14 = sort_order[32];
LABEL_18:
  if ( v15 < v14 )
    return -result;
  return result;
};

// Line 200: range 000000000CFAAE80-000000000CFAAEAF
size_t __fastcall my_caseup_str_8bit(CHARSET_INFO *cs_0, char *str)
{
  uchar *to_upper; // rcx
  char v3; // al
  char *v4; // rax
  char v5; // dl

  to_upper = cs_0->to_upper;
  v3 = to_upper[(unsigned __int8)*str];
  *str = v3;
  if ( !v3 )
    return 0LL;
  v4 = str;
  do
  {
    v5 = to_upper[(unsigned __int8)*++v4];
    *v4 = v5;
  }
  while ( v5 );
  return v4 - str;
};

// Line 210: range 000000000CFAAEB0-000000000CFAAEDF
size_t __fastcall my_casedn_str_8bit(CHARSET_INFO *cs_0, char *str)
{
  uchar *to_lower; // rcx
  char v3; // al
  char *v4; // rax
  char v5; // dl

  to_lower = cs_0->to_lower;
  v3 = to_lower[(unsigned __int8)*str];
  *str = v3;
  if ( !v3 )
    return 0LL;
  v4 = str;
  do
  {
    v5 = to_lower[(unsigned __int8)*++v4];
    *v4 = v5;
  }
  while ( v5 );
  return v4 - str;
};

// Line 220: range 000000000CFAAEE0-000000000CFAAF03
size_t __fastcall my_caseup_8bit(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v5; // r8
  size_t result; // rax
  uchar *i; // rdi
  __int64 v8; // rcx

  v5 = &src[srclen];
  result = srclen;
  for ( i = cs_0->to_upper; src != v5; *(src - 1) = i[v8] )
    v8 = (unsigned __int8)*src++;
  return result;
};

// Line 233: range 000000000CFAAF10-000000000CFAAF33
size_t __fastcall my_casedn_8bit(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v5; // r8
  size_t result; // rax
  uchar *i; // rdi
  __int64 v8; // rcx

  v5 = &src[srclen];
  result = srclen;
  for ( i = cs_0->to_lower; src != v5; *(src - 1) = i[v8] )
    v8 = (unsigned __int8)*src++;
  return result;
};

// Line 243: range 000000000CFAAF40-000000000CFAAF82
int __fastcall my_strcasecmp_8bit(CHARSET_INFO *cs_0, const char *s, const char *t)
{
  uchar *to_upper; // rdi
  char v4; // cl
  int v5; // r8d
  int v6; // eax

  to_upper = cs_0->to_upper;
  do
  {
    ++t;
    v4 = *s;
    v5 = to_upper[*((unsigned __int8 *)t - 1)];
    v6 = to_upper[*(unsigned __int8 *)s];
    if ( (_BYTE)v6 != (_BYTE)v5 )
      return v6 - v5;
    ++s;
  }
  while ( v4 );
  return 0;
};

// Line 254: range 000000000CFAAF90-000000000CFAAFC8
int __fastcall my_mb_wc_8bit(CHARSET_INFO *cs_0, ulong *wc, const uchar *str, const uchar *end)
{
  ulong v4; // rcx
  int result; // eax

  if ( str >= end )
    return -101;
  v4 = cs_0->tab_to_uni[*str];
  result = 1;
  *wc = v4;
  if ( !v4 )
    return *str == 0 ? 1 : -1;
  return result;
};

// Line 267: range 000000000CFAAFD0-000000000CFAB033
int __fastcall my_wc_mb_8bit(CHARSET_INFO *cs_0, ulong wc, uchar *str, uchar *end)
{
  MY_UNI_IDX *tab_from_uni; // rax
  uchar *tab; // rcx
  ulong from; // rdi
  int result; // eax
  uchar v8; // cl

  if ( str >= end )
    return -101;
  tab_from_uni = cs_0->tab_from_uni;
  tab = tab_from_uni->tab;
  if ( !tab )
    return 0;
  while ( 1 )
  {
    from = tab_from_uni->from;
    if ( from <= wc && wc <= tab_from_uni->to )
      break;
    ++tab_from_uni;
    tab = tab_from_uni->tab;
    if ( !tab )
      return 0;
  }
  v8 = tab[wc - from];
  result = 1;
  *str = v8;
  if ( !v8 )
    return wc == 0;
  return result;
};

// Line 292: range 000000000CFAC3A0-000000000CFAC42F
size_t my_snprintf_8bit(CHARSET_INFO *cs_0, char *to, size_t n, const char *fmt, ...)
{
  va_list args; // [rsp+8h] [rbp-D0h] BYREF

  va_start(args, fmt);
  return (int)my_vsnprintf(to, n, fmt, (__va_list_tag *)args);
};

// Line 327: range 000000000CFAB140-000000000CFAB312
__int64 __fastcall my_strntol_8bit(CHARSET_INFO *cs_0, const char *nptr, size_t l, int base, char **endptr, int *err)
{
  const char *v6; // rbp
  uchar *ctype; // rdx
  const char *v8; // r10
  __int64 result; // rax
  char v10; // bl
  int v11; // r13d
  unsigned int v12; // eax
  unsigned int v13; // edx
  char *v14; // rdi
  int v15; // r14d
  unsigned int v16; // r12d
  unsigned __int8 v17; // r11

  *err = 0;
  v6 = &nptr[l];
  if ( nptr < &nptr[l] )
  {
    ctype = cs_0->ctype;
    if ( (ctype[*(unsigned __int8 *)nptr + 1] & 8) != 0 )
    {
      v8 = nptr;
      while ( ++v8 != v6 )
      {
        if ( (ctype[*(unsigned __int8 *)v8 + 1] & 8) == 0 )
          goto LABEL_12;
      }
noconv:
      *err = 33;
      if ( endptr )
        *endptr = (char *)nptr;
      return 0LL;
    }
  }
  if ( nptr == v6 )
    goto noconv;
  v8 = nptr;
LABEL_12:
  v10 = *v8;
  if ( *v8 == 45 )
  {
    ++v8;
    v11 = 1;
    goto LABEL_39;
  }
  if ( v10 == 43 )
  {
    ++v8;
    v11 = 0;
LABEL_39:
    v10 = *v8;
    v13 = 0xFFFFFFFF % base;
    v12 = 0xFFFFFFFF / base;
    if ( v8 == v6 )
      goto noconv;
    goto LABEL_15;
  }
  v11 = 0;
  v13 = 0xFFFFFFFF % base;
  v12 = 0xFFFFFFFF / base;
LABEL_15:
  v14 = (char *)v8;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = v10 - 48;
    if ( (unsigned __int8)(v10 - 48) > 9u )
      break;
LABEL_21:
    if ( base <= v17 )
      goto LABEL_25;
    if ( v16 <= v12 )
    {
      if ( v16 == v12 && v13 < v17 )
      {
        v15 = 1;
        goto LABEL_24;
      }
      v10 = *++v14;
      v16 = v17 + base * v16;
      if ( v6 == v14 )
        goto LABEL_25;
    }
    else
    {
      v15 = 1;
LABEL_24:
      v10 = *++v14;
      if ( v6 == v14 )
        goto LABEL_25;
    }
  }
  if ( (unsigned __int8)(v10 - 65) <= 0x19u )
  {
    v17 = v10 - 55;
    goto LABEL_21;
  }
  if ( (unsigned __int8)(v10 - 97) <= 0x19u )
  {
    v17 = v10 - 87;
    goto LABEL_21;
  }
LABEL_25:
  if ( v8 == v14 )
    goto noconv;
  if ( endptr )
    *endptr = v14;
  if ( v11 )
  {
    if ( v16 > 0x80000000 || (result = -(__int64)v16, v15) )
    {
      result = 0xFFFFFFFF80000000LL;
      *err = 34;
    }
  }
  else if ( (v16 & 0x80000000) != 0 || (result = v16, v15) )
  {
    *err = 34;
    return 0x7FFFFFFFLL;
  }
  return result;
};

// Line 423: range 000000000CFAB320-000000000CFAB4BB
ulong __fastcall my_strntoul_8bit(CHARSET_INFO *cs_0, const char *nptr, size_t l, int base, char **endptr, int *err)
{
  const char *v6; // rbp
  uchar *ctype; // rdx
  const char *v8; // r10
  ulong result; // rax
  char v10; // bl
  int v11; // r13d
  unsigned int v12; // eax
  unsigned int v13; // edx
  char *v14; // rdi
  int v15; // r14d
  unsigned int v16; // r12d
  unsigned __int8 v17; // r11

  *err = 0;
  v6 = &nptr[l];
  if ( nptr < &nptr[l] )
  {
    ctype = cs_0->ctype;
    if ( (ctype[*(unsigned __int8 *)nptr + 1] & 8) != 0 )
    {
      v8 = nptr;
      while ( ++v8 != v6 )
      {
        if ( (ctype[*(unsigned __int8 *)v8 + 1] & 8) == 0 )
          goto LABEL_11;
      }
noconv:
      *err = 33;
      if ( endptr )
        *endptr = (char *)nptr;
      return 0LL;
    }
  }
  if ( nptr == v6 )
    goto noconv;
  v8 = nptr;
LABEL_11:
  v10 = *v8;
  if ( *v8 == 45 )
  {
    ++v8;
    v11 = 1;
    goto LABEL_37;
  }
  if ( v10 == 43 )
  {
    ++v8;
    v11 = 0;
LABEL_37:
    v10 = *v8;
    v13 = 0xFFFFFFFF % base;
    v12 = 0xFFFFFFFF / base;
    if ( v8 == v6 )
      goto noconv;
    goto LABEL_14;
  }
  v11 = 0;
  v13 = 0xFFFFFFFF % base;
  v12 = 0xFFFFFFFF / base;
LABEL_14:
  v14 = (char *)v8;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = v10 - 48;
    if ( (unsigned __int8)(v10 - 48) > 9u )
      break;
LABEL_20:
    if ( base <= v17 )
      goto LABEL_24;
    if ( v16 <= v12 )
    {
      if ( v16 == v12 && v17 > v13 )
      {
        v15 = 1;
        goto LABEL_23;
      }
      v10 = *++v14;
      v16 = v17 + base * v16;
      if ( v6 == v14 )
        goto LABEL_24;
    }
    else
    {
      v15 = 1;
LABEL_23:
      v10 = *++v14;
      if ( v6 == v14 )
        goto LABEL_24;
    }
  }
  if ( (unsigned __int8)(v10 - 65) <= 0x19u )
  {
    v17 = v10 - 55;
    goto LABEL_20;
  }
  if ( (unsigned __int8)(v10 - 97) <= 0x19u )
  {
    v17 = v10 - 87;
    goto LABEL_20;
  }
LABEL_24:
  if ( v8 == v14 )
    goto noconv;
  if ( endptr )
    *endptr = v14;
  if ( v15 )
  {
    result = 0xFFFFFFFFLL;
    *err = 34;
  }
  else
  {
    result = v16;
    if ( v11 )
      return -(__int64)v16;
  }
  return result;
};

// Line 510: range 000000000CFAB4C0-000000000CFAB692
longlong __fastcall my_strntoll_8bit(CHARSET_INFO *cs_0, const char *nptr, size_t l, int base, char **endptr, int *err)
{
  const char *v6; // rbp
  uchar *ctype; // rdx
  const char *v8; // r11
  longlong result; // rax
  char v10; // bl
  const char *v11; // rdi
  int v12; // r14d
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rdi
  int v17; // r15d
  longlong v18; // r12
  unsigned __int8 v19; // r10

  *err = 0;
  v6 = &nptr[l];
  if ( nptr < &nptr[l] )
  {
    ctype = cs_0->ctype;
    if ( (ctype[*(unsigned __int8 *)nptr + 1] & 8) != 0 )
    {
      v8 = nptr;
      while ( ++v8 != v6 )
      {
        if ( (ctype[*(unsigned __int8 *)v8 + 1] & 8) == 0 )
          goto LABEL_11;
      }
noconv:
      *err = 33;
      if ( endptr )
        *endptr = (char *)nptr;
      return 0LL;
    }
  }
  if ( nptr == v6 )
    goto noconv;
  v8 = nptr;
LABEL_11:
  v10 = *v8;
  v11 = v8 + 1;
  v12 = 1;
  if ( *v8 == 45 )
    goto LABEL_37;
  if ( v10 == 43 )
  {
    v11 = v8 + 1;
    v12 = 0;
LABEL_37:
    v13 = base;
    v14 = 0xFFFFFFFFFFFFFFFFLL / base;
    v15 = 0xFFFFFFFFFFFFFFFFLL % base;
    if ( v11 == v6 )
      goto noconv;
    v10 = v8[1];
    v8 = v11;
    goto LABEL_14;
  }
  v13 = base;
  v14 = 0xFFFFFFFFFFFFFFFFLL / base;
  v15 = 0xFFFFFFFFFFFFFFFFLL % base;
  v12 = 0;
LABEL_14:
  v16 = (char *)v8;
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = v10 - 48;
    if ( (unsigned __int8)(v10 - 48) <= 9u )
      goto LABEL_21;
    if ( (unsigned __int8)(v10 - 65) <= 0x19u )
    {
      v19 = v10 - 55;
      goto LABEL_21;
    }
    if ( (unsigned __int8)(v10 - 97) > 0x19u )
      break;
    v19 = v10 - 87;
LABEL_21:
    if ( base <= v19 )
      break;
    if ( v18 <= v14 )
    {
      if ( v18 != v14 || v19 <= (unsigned int)v15 )
      {
        ++v16;
        v18 = v19 + v13 * v18;
        if ( v6 == v16 )
          break;
        goto LABEL_17;
      }
      v17 = 1;
    }
    else
    {
      v17 = 1;
    }
    if ( v6 == ++v16 )
      break;
LABEL_17:
    v10 = *v16;
  }
  if ( v8 == v16 )
    goto noconv;
  if ( endptr )
    *endptr = v16;
  if ( v12 )
  {
    result = 0x8000000000000000LL;
    if ( (unsigned __int64)v18 > 0x8000000000000000LL || v17 )
      *err = 34;
    else
      return -v18;
  }
  else if ( v18 < 0 || v17 )
  {
    *err = 34;
    return 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    return v18;
  }
  return result;
};

// Line 606: range 000000000CFAB6A0-000000000CFAB845
ulonglong __fastcall my_strntoull_8bit(
        CHARSET_INFO *cs_0,
        const char *nptr,
        size_t l,
        int base,
        char **endptr,
        int *err)
{
  const char *v6; // rbp
  uchar *ctype; // rdx
  const char *v8; // r11
  ulonglong result; // rax
  char v10; // bl
  const char *v11; // rdi
  int v12; // r14d
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rdi
  int v17; // r15d
  ulonglong v18; // r12
  unsigned __int8 v19; // r10

  *err = 0;
  v6 = &nptr[l];
  if ( nptr < &nptr[l] )
  {
    ctype = cs_0->ctype;
    if ( (ctype[*(unsigned __int8 *)nptr + 1] & 8) != 0 )
    {
      v8 = nptr;
      while ( ++v8 != v6 )
      {
        if ( (ctype[*(unsigned __int8 *)v8 + 1] & 8) == 0 )
          goto LABEL_11;
      }
noconv:
      *err = 33;
      if ( endptr )
        *endptr = (char *)nptr;
      return 0LL;
    }
  }
  if ( nptr == v6 )
    goto noconv;
  v8 = nptr;
LABEL_11:
  v10 = *v8;
  v11 = v8 + 1;
  v12 = 1;
  if ( *v8 == 45 )
    goto LABEL_35;
  if ( v10 == 43 )
  {
    v11 = v8 + 1;
    v12 = 0;
LABEL_35:
    v13 = base;
    v14 = 0xFFFFFFFFFFFFFFFFLL / base;
    v15 = 0xFFFFFFFFFFFFFFFFLL % base;
    if ( v11 == v6 )
      goto noconv;
    v10 = v8[1];
    v8 = v11;
    goto LABEL_14;
  }
  v13 = base;
  v14 = 0xFFFFFFFFFFFFFFFFLL / base;
  v15 = 0xFFFFFFFFFFFFFFFFLL % base;
  v12 = 0;
LABEL_14:
  v16 = (char *)v8;
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = v10 - 48;
    if ( (unsigned __int8)(v10 - 48) <= 9u )
      goto LABEL_21;
    if ( (unsigned __int8)(v10 - 65) <= 0x19u )
    {
      v19 = v10 - 55;
      goto LABEL_21;
    }
    if ( (unsigned __int8)(v10 - 97) > 0x19u )
      break;
    v19 = v10 - 87;
LABEL_21:
    if ( base <= v19 )
      break;
    if ( v14 >= v18 )
    {
      if ( v14 != v18 || v19 <= (unsigned int)v15 )
      {
        ++v16;
        v18 = v19 + v13 * v18;
        if ( v6 == v16 )
          break;
        goto LABEL_17;
      }
      v18 = v14;
      v17 = 1;
    }
    else
    {
      v17 = 1;
    }
    if ( v6 == ++v16 )
      break;
LABEL_17:
    v10 = *v16;
  }
  if ( v8 == v16 )
    goto noconv;
  if ( endptr )
    *endptr = v16;
  if ( v17 )
  {
    result = -1LL;
    *err = 34;
  }
  else
  {
    result = v18;
    if ( v12 )
      return -(__int64)v18;
  }
  return result;
};

// Line 720: range 000000000CFAC430-000000000CFAC44F
double __fastcall my_strntod_8bit(CHARSET_INFO *cs, char *str, size_t length, char **end, int *err)
{
  if ( length == 0x7FFFFFFF )
    length = 0xFFFFLL;
  *end = &str[length];
  return my_strtod(str, end, err);
};

// Line 734: range 000000000CFAC460-000000000CFAC539
size_t __fastcall my_long10_to_str_8bit(CHARSET_INFO *cs_0, char *dst, size_t len, int radix, __int64 val)
{
  char *v6; // rsi
  __int64 v7; // rbx
  signed __int64 v8; // rcx
  char *v9; // r8
  char buffer[66]; // [rsp+0h] [rbp-68h] BYREF

  v6 = (char *)len;
  v7 = 0LL;
  buffer[65] = 0;
  if ( radix < 0 && val < 0 )
  {
    *dst = 45;
    val = -val;
    v6 = (char *)(len - 1);
    ++dst;
    LOBYTE(v7) = 1;
  }
  v8 = val / 0xAuLL;
  buffer[64] = val + 48 - 10 * (val / 0xAuLL);
  v9 = &buffer[64];
  if ( v8 )
  {
    while ( 1 )
    {
      *--v9 = v8 + 48 - 10 * (v8 / 10);
      if ( !(v8 / 10) )
        break;
      v8 /= 10LL;
    }
  }
  if ( &buffer[65] - v9 <= (unsigned __int64)v6 )
    v6 = (char *)(&buffer[65] - v9);
  memcpy(dst, v9, (size_t)v6);
  return (size_t)&v6[v7];
};

// Line 776: range 000000000CFAC540-000000000CFAC641
size_t __fastcall my_longlong10_to_str_8bit(CHARSET_INFO *cs_0, char *dst, size_t len, int radix, longlong val)
{
  char *v6; // rsi
  __int64 v7; // rbx
  char *v8; // rcx
  size_t v9; // rbp
  char buffer[65]; // [rsp+0h] [rbp-68h] BYREF

  v6 = (char *)len;
  v7 = 0LL;
  if ( radix < 0 && val < 0 )
  {
    *dst = 45;
    val = -val;
    v6 = (char *)(len - 1);
    ++dst;
    LOBYTE(v7) = 1;
  }
  buffer[64] = 0;
  if ( val )
  {
    v8 = &buffer[64];
    if ( val < 0 )
    {
      v8 = &buffer[63];
      buffer[63] = val % 0xAuLL + 48;
      val /= 0xAuLL;
    }
    while ( 1 )
    {
      *--v8 = val + 48 - 10 * (val / 10);
      if ( !(val / 10) )
        break;
      val /= 10LL;
    }
    if ( &buffer[64] - v8 <= (unsigned __int64)v6 )
      v6 = (char *)(&buffer[64] - v8);
    v9 = (size_t)v6;
  }
  else
  {
    buffer[63] = 48;
    v8 = &buffer[63];
    v9 = 1LL;
  }
  memcpy(dst, v8, v9);
  return v9 + v7;
};

// Line 848: range 000000000CFAB850-000000000CFABAC7
int __fastcall my_wildcmp_8bit(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  int v10; // edx
  __int64 v11; // rax
  const char *v12; // r11
  unsigned __int8 v13; // dl
  int v14; // eax
  const char *v15; // rdx
  __int64 v16; // rax
  uchar *sort_order; // rdx
  const char *v18; // rbx
  uchar v19; // r12
  const char *v20; // rdi
  const char *wildstra; // [rsp+10h] [rbp-58h]
  const char *v23; // [rsp+18h] [rbp-50h]

  if ( wildstr == wildend )
    return str != str_end;
  v10 = *wildstr;
  LODWORD(v11) = -1;
  do
  {
    while ( v10 != w_many )
    {
      if ( v10 == w_one )
        goto LABEL_23;
      if ( v10 == escape )
      {
        if ( wildstr + 1 != wildend )
          ++wildstr;
        if ( str == str_end )
        {
LABEL_13:
          LODWORD(v11) = 1;
          return v11;
        }
      }
      else if ( str == str_end )
      {
        goto LABEL_13;
      }
      if ( cs_0->sort_order[*(unsigned __int8 *)wildstr] != cs_0->sort_order[*(unsigned __int8 *)str++] )
        goto LABEL_13;
      if ( wildstr + 1 == wildend )
        return str_end != str;
      v10 = wildstr[1];
      LODWORD(v11) = 1;
      ++wildstr;
    }
    if ( w_many != w_one )
      break;
LABEL_23:
    if ( str == str_end )
      return v11;
    v15 = wildstr + 1;
    ++str;
    if ( wildend > wildstr + 1 && wildstr[1] == w_one )
    {
      while ( 1 )
      {
        if ( str == str_end )
          return v11;
        ++v15;
        ++str;
        if ( v15 == wildend )
          return str != str_end;
        if ( *v15 != w_one )
          goto LABEL_33;
      }
    }
    if ( wildend == v15 )
      return str != str_end;
LABEL_33:
    wildstr = v15;
    v10 = *v15;
  }
  while ( (char)v10 != w_many );
  v12 = wildstr + 1;
  if ( wildend == wildstr + 1 )
    goto LABEL_22;
  while ( 2 )
  {
    v13 = *v12;
    v14 = *v12;
    if ( v14 == w_many )
    {
LABEL_21:
      if ( wildend == ++v12 )
        goto LABEL_22;
      continue;
    }
    break;
  }
  if ( w_one == v14 )
  {
    if ( str == str_end )
      goto LABEL_35;
    ++str;
    goto LABEL_21;
  }
  if ( wildend != v12 )
  {
    if ( str_end != str )
    {
      v16 = v13;
      if ( v13 == escape )
      {
        if ( v12 + 1 == wildend )
        {
          wildstra = wildend;
        }
        else
        {
          v20 = v12 + 2;
          v16 = *(unsigned __int8 *)++v12;
          wildstra = v20;
        }
      }
      else
      {
        wildstra = v12 + 1;
      }
      sort_order = cs_0->sort_order;
      v23 = v12;
      v18 = str + 1;
      v19 = sort_order[v16];
      while ( 1 )
      {
        if ( sort_order[*((unsigned __int8 *)v18 - 1)] == v19 )
        {
          if ( str_end == v18 - 1 )
            break;
          LODWORD(v11) = my_wildcmp_8bit(cs_0, v18, str_end, wildstra, wildend, escape, w_one, w_many);
          if ( (int)v11 <= 0 )
            return v11;
          if ( str_end == v18 || v23[1] == w_many )
            break;
          sort_order = cs_0->sort_order;
        }
        else if ( str_end == v18 )
        {
          break;
        }
        ++v18;
      }
    }
LABEL_35:
    LODWORD(v11) = -1;
    return v11;
  }
LABEL_22:
  LODWORD(v11) = 0;
  return v11;
};

// Line 946: range 000000000CFABAD0-000000000CFABC96
my_bool __fastcall my_like_range_simple(
        CHARSET_INFO *cs_0,
        const char *ptr,
        size_t ptr_length,
        pbool escape,
        pbool w_one,
        pbool w_many,
        size_t res_length,
        char *min_str,
        char *max_str,
        size_t *min_length,
        size_t *max_length)
{
  const char *v11; // r13
  char *v12; // rbp
  char *v13; // r12
  size_t v14; // rax
  char *v15; // r10
  char *v16; // r11
  char *v17; // rbx
  char v18; // dl
  char *v19; // rbp
  char *v20; // rbx
  const char *v21; // r15
  char v22; // dl
  size_t v23; // r10
  size_t v25; // rax

  v11 = &ptr[ptr_length];
  v12 = max_str;
  v13 = &min_str[res_length];
  v14 = res_length / cs_0->mbmaxlen;
  if ( ptr == &ptr[ptr_length] || min_str == v13 )
  {
    v17 = min_str;
    v23 = 0LL;
LABEL_15:
    *max_length = v23;
    *min_length = v23;
    if ( v13 == v17 )
      return 0;
    goto LABEL_16;
  }
  if ( !v14 )
  {
    v17 = min_str;
    *max_length = 0LL;
    *min_length = 0LL;
    do
    {
LABEL_16:
      ++v17;
      *v12++ = 32;
      *(v17 - 1) = 32;
    }
    while ( v17 != v13 );
    return 0;
  }
  v15 = min_str + 1;
  v16 = max_str + 1;
  while ( 1 )
  {
    v18 = *ptr;
    v19 = v16 - 1;
    v20 = v15 - 1;
    if ( *ptr == escape )
    {
      v21 = ptr + 1;
      if ( ptr + 1 != v11 )
      {
        v22 = ptr[1];
        --v14;
        ptr += 2;
        v17 = v15;
        v12 = v16;
        *(v16 - 1) = v22;
        *(v15 - 1) = v22;
        if ( v11 == v21 + 1 )
          goto LABEL_14;
        goto LABEL_9;
      }
    }
    if ( v18 != w_one )
      break;
    *(v15 - 1) = 0;
    v17 = v15;
    v12 = v16;
    *(v16 - 1) = cs_0->max_sort_char;
LABEL_8:
    ++ptr;
    --v14;
    if ( v11 == ptr )
      goto LABEL_14;
LABEL_9:
    if ( v13 == v15 )
      goto LABEL_14;
    ++v15;
    ++v16;
    if ( !v14 )
    {
      v15 = v17;
LABEL_14:
      v23 = v15 - min_str;
      goto LABEL_15;
    }
  }
  if ( v18 != w_many )
  {
    *(v16 - 1) = v18;
    v17 = v15;
    v12 = v16;
    *(v15 - 1) = v18;
    goto LABEL_8;
  }
  v25 = v20 - min_str;
  if ( (cs_0->state & 0x10) == 0 )
    v25 = res_length;
  *min_length = v25;
  *max_length = res_length;
  do
  {
    *v20++ = 0;
    *v19++ = cs_0->max_sort_char;
  }
  while ( v20 != v13 );
  return 0;
};

// Line 993: range 000000000CFAC660-000000000CFAC6CE
size_t __fastcall my_scan_8bit(CHARSET_INFO *cs_0, const char *str, const char *end, int sq)
{
  uchar *ctype; // rdi
  const char *i; // rax
  size_t result; // rax

  if ( sq == 1 )
  {
    result = 0LL;
    if ( *str == 46 )
    {
      for ( i = str + 1; end != i && *i == 48; ++i )
        ;
      return i - str;
    }
  }
  else
  {
    if ( sq == 2 && str < end )
    {
      ctype = cs_0->ctype;
      if ( (ctype[*(unsigned __int8 *)str + 1] & 8) != 0 )
      {
        i = str;
        do
          ++i;
        while ( i != end && (ctype[*(unsigned __int8 *)i + 1] & 8) != 0 );
        return i - str;
      }
    }
    return 0LL;
  }
  return result;
};

// Line 1018: range 000000000CFAC390-000000000CFAC395
void __fastcall my_fill_8bit(CHARSET_INFO *cs, char *s, size_t l, int fill)
{
  memset(s, fill, l);
};

// Line 1025: range 000000000CFABCA0-000000000CFABCA6
size_t __fastcall my_numchars_8bit(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  return e - b;
};

// Line 1032: range 000000000CFABCB0-000000000CFABCB6
size_t __fastcall my_numcells_8bit(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  return e - b;
};

// Line 1041: range 000000000CFABCC0-000000000CFABCC3
size_t __fastcall my_charpos_8bit(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos)
{
  return pos;
};

// Line 1050: range 000000000CFABCD0-000000000CFABCE4
size_t __fastcall my_well_formed_len_8bit(
        CHARSET_INFO *cs_0,
        const char *start,
        const char *end,
        size_t nchars,
        int *error)
{
  unsigned __int64 v5; // rdx
  size_t result; // rax

  v5 = end - start;
  result = nchars;
  *error = 0;
  if ( v5 <= nchars )
    return v5;
  return result;
};

// Line 1121: range 000000000CFAC6D0-000000000CFAC802
uint __fastcall my_instr_simple(
        CHARSET_INFO *cs_0,
        const char *b,
        size_t b_length,
        const char *s,
        size_t s_length,
        my_match_t *match,
        uint nmatch)
{
  uint result; // eax
  size_t v8; // rdx
  const char *v9; // r13
  uchar *sort_order; // rdx
  const char *i; // r11
  const char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r10
  uint v16; // eax

  result = 0;
  if ( s_length <= b_length )
  {
    if ( s_length )
    {
      v8 = b_length + 1 - s_length;
      v9 = &b[v8];
      if ( b != &b[v8] )
      {
        sort_order = cs_0->sort_order;
        for ( i = b; ; ++i )
        {
          v12 = i + 1;
          if ( sort_order[*(unsigned __int8 *)i] == sort_order[*(unsigned __int8 *)s] )
          {
            if ( &s[s_length] == s + 1 )
              goto LABEL_13;
            if ( sort_order[*(unsigned __int8 *)v12] == sort_order[*((unsigned __int8 *)s + 1)] )
              break;
          }
LABEL_5:
          if ( v9 == v12 )
            return 0;
        }
        v13 = 0LL;
        while ( v13 != s_length - 2 )
        {
          v14 = (unsigned __int8)s[v13 + 2];
          v15 = (unsigned __int8)i[v13++ + 2];
          if ( sort_order[v15] != sort_order[v14] )
            goto LABEL_5;
        }
LABEL_13:
        if ( nmatch )
        {
          match->beg = 0;
          v16 = (_DWORD)i - (_DWORD)b;
          match->end = (_DWORD)i - (_DWORD)b;
          match->mb_len = (_DWORD)i - (_DWORD)b;
          if ( nmatch > 1 )
          {
            match[1].beg = v16;
            match[1].mb_len = s_length;
            match[1].end = s_length + v16;
          }
        }
        return 2;
      }
    }
    else
    {
      LOBYTE(result) = 1;
      if ( nmatch )
      {
        match->end = 0;
        match->mb_len = 0;
        match->beg = 0;
      }
    }
  }
  return result;
};

// Line 1141: range 000000000CFABCF0-000000000CFABD00
int __fastcall pcmp(const void *f, const void *s)
{
  int result; // eax

  result = *(_DWORD *)s - *(_DWORD *)f;
  if ( *(_DWORD *)s == *(_DWORD *)f )
    return *((unsigned __int16 *)f + 4) - *((unsigned __int16 *)s + 5);
  return result;
};

// Line 1146: range 000000000CFAC810-000000000CFACA0B
__int64 __fastcall create_fromuni(
        CHARSET_INFO *cs_0,
        CHARSET_INFO *a2,
        __int64 (__fastcall *alloc)(__int64, uchar *, __int64, __int64))
{
  __int64 v4; // r8
  __int64 v5; // rax
  uint16 to; // dx
  __int64 v8; // rcx
  __int64 v9; // rsi
  uint16 from; // di
  uni_idx *v11; // r15
  int v12; // ebx
  size_t v13; // r13
  uchar *v14; // rax
  __int64 v15; // rcx
  int i; // eax
  uchar *tab; // rsi
  __int64 v18; // rdx
  char *v19; // rax
  MY_UNI_IDX *p_uidx; // rdx
  char *v22; // rcx
  __int64 v23; // rsi
  uchar *v24; // rdi
  __int64 v25; // rbx
  char *v26; // rax
  uni_idx idx[256]; // [rsp+10h] [rbp-1838h] BYREF

  v4 = *(_QWORD *)&cs_0->number;
  if ( !*(_QWORD *)&cs_0->number )
    return 1LL;
  v5 = 0LL;
  memset(idx, 0, sizeof(idx));
  do
  {
    to = *(_WORD *)(v4 + 2 * v5);
    if ( to || !(_DWORD)v5 )
    {
      v8 = HIBYTE(to);
      v9 = HIBYTE(to);
      if ( idx[v9].nchars )
      {
        from = idx[HIBYTE(to)].uidx.from;
        if ( to <= from )
          from = *(_WORD *)(v4 + 2 * v5);
        idx[HIBYTE(to)].uidx.from = from;
        if ( to < idx[HIBYTE(to)].uidx.to )
          to = idx[HIBYTE(to)].uidx.to;
        idx[v9].uidx.to = to;
      }
      else
      {
        idx[HIBYTE(to)].uidx.from = to;
        idx[HIBYTE(to)].uidx.to = to;
      }
      ++idx[v8].nchars;
    }
    ++v5;
  }
  while ( v5 != 256 );
  v11 = idx;
  v12 = 0;
  qsort(idx, 0x100uLL, 0x18uLL, pcmp);
  while ( v11->nchars )
  {
    v13 = v11->uidx.to - v11->uidx.from + 1;
    v14 = (uchar *)((__int64 (__fastcall *)(size_t))alloc)(v13);
    v11->uidx.tab = v14;
    if ( !v14 )
      return 1LL;
    memset(v14, 0, v13);
    v15 = 2LL;
    for ( i = 1; i != 256; ++i )
    {
      tab = (uchar *)v11->uidx.from;
      v18 = *(unsigned __int16 *)(*(_QWORD *)&cs_0->number + v15);
      if ( (unsigned __int16)v18 >= (unsigned __int16)tab && (unsigned __int16)v18 <= v11->uidx.to && (_WORD)v18 )
      {
        LODWORD(v18) = v18 - (_DWORD)tab;
        tab = v11->uidx.tab;
        v18 = (int)v18;
        tab[(int)v18] = i;
      }
      v15 += 2LL;
    }
    ++v12;
    ++v11;
    if ( v12 == 256 )
    {
      v19 = (char *)alloc(4112LL, tab, v18, v15);
      *(_QWORD *)&a2->number = v19;
      if ( !v19 )
        return 1LL;
      goto LABEL_28;
    }
  }
  v19 = (char *)((__int64 (__fastcall *)(__int64))alloc)(16LL * (v12 + 1));
  *(_QWORD *)&a2->number = v19;
  if ( !v19 )
    return 1LL;
  if ( !v12 )
  {
    v25 = 0LL;
    goto LABEL_31;
  }
LABEL_28:
  p_uidx = &idx[0].uidx;
  v22 = v19;
  do
  {
    v23 = *(_QWORD *)&p_uidx->from;
    v24 = p_uidx->tab;
    p_uidx = (MY_UNI_IDX *)((char *)p_uidx + 24);
    v22 += 16;
    *((_QWORD *)v22 - 2) = v23;
    *((_QWORD *)v22 - 1) = v24;
  }
  while ( p_uidx != &idx[(unsigned int)(v12 - 1) + 1].uidx );
  v25 = 16LL * v12;
LABEL_31:
  v26 = &v19[v25];
  *(_QWORD *)v26 = 0LL;
  *((_QWORD *)v26 + 1) = 0LL;
  return 0LL;
};

// Line 1226: range 000000000CFACA10-000000000CFACA30
my_bool __fastcall my_cset_init_8bit(CHARSET_INFO *cs_0, void *(*alloc)(size_t))
{
  cs_0->caseup_multiply = 1;
  cs_0->casedn_multiply = 1;
  cs_0->pad_char = 32;
  return create_fromuni(
           (CHARSET_INFO *)&cs_0->tab_to_uni,
           (CHARSET_INFO *)&cs_0->tab_from_uni,
           (__int64 (__fastcall *)(__int64, uchar *, __int64, __int64))alloc);
};

// Line 1252: range 000000000CFABD10-000000000CFABD4F
my_bool __fastcall my_coll_init_simple(CHARSET_INFO *cs_0, void *(*alloc)(size_t))
{
  uchar *sort_order; // rsi
  uchar v3; // cl
  __int64 i; // rax
  uchar v5; // dl

  sort_order = cs_0->sort_order;
  if ( sort_order )
  {
    v3 = sort_order[LOBYTE(cs_0->max_sort_char)];
    for ( i = 0LL; i != 256; ++i )
    {
      v5 = sort_order[i];
      if ( v5 > v3 )
      {
        cs_0->max_sort_char = i;
        v3 = v5;
      }
    }
  }
  return 0;
};

// Line 1262: range 000000000CFAC650-000000000CFAC659
longlong __fastcall my_strtoll10_8bit(CHARSET_INFO *cs, const char *nptr, char **endptr, int *error)
{
  return my_strtoll10(nptr, endptr, error);
};

// Line 1270: range 000000000CFABD50-000000000CFABD7B
int __fastcall my_mb_ctype_8bit(CHARSET_INFO *cs_0, int *ctype, const uchar *s, const uchar *e)
{
  if ( s >= e )
  {
    *ctype = 0;
    return -101;
  }
  else
  {
    *ctype = cs_0->ctype[*s + 1];
    return 1;
  }
};

// Line 1369: range 000000000CFABD80-000000000CFAC2CA
ulonglong __fastcall my_strntoull10rnd_8bit(
        CHARSET_INFO *cs_0,
        const char *str,
        size_t length,
        int unsigned_flag,
        char **endptr,
        int *error)
{
  const char *v6; // rdx
  char v7; // al
  ulonglong result; // rax
  bool v9; // r12
  _BOOL4 v10; // r11d
  const char *v11; // rbx
  char *v12; // r10
  unsigned __int8 v13; // di
  int v14; // r13d
  char *v15; // r15
  char *v16; // r10
  int v17; // r13d
  char v18; // bl
  char *v19; // rdi
  char *v20; // r14
  unsigned __int8 v21; // bp
  __int64 v22; // rcx
  int v23; // ecx
  _BOOL4 v24; // ebx
  char *v25; // rsi
  char v26; // r10
  _BOOL4 v27; // ebp
  unsigned __int8 v28; // r10
  int i; // esi
  int v30; // r15d
  char v31; // r10

  v6 = &str[length];
  if ( str >= v6 )
    goto ret_edom;
  v7 = *str;
  if ( *str == 32 || v7 == 9 )
  {
    while ( ++str != v6 )
    {
      v7 = *str;
      if ( *str != 9 && v7 != 32 )
        goto LABEL_9;
    }
ret_edom:
    *endptr = (char *)str;
    result = 0LL;
    *error = 33;
    return result;
  }
LABEL_9:
  v9 = v7 == 45;
  v10 = v7 == 45;
  if ( (v7 == 45 || v7 == 43) && ++str == v6 )
    goto ret_edom;
  v11 = str + 9;
  if ( v6 < str + 9 )
    v11 = v6;
  if ( str >= v11 )
  {
    v12 = (char *)str;
    result = 0LL;
  }
  else
  {
    v12 = (char *)str;
    v13 = *str - 48;
    for ( result = 0LL; v13 <= 9u; v13 = *v12 - 48 )
    {
      ++v12;
      result = v13 + 10 * result;
      if ( v12 == v11 )
        break;
    }
  }
  if ( v12 >= v6 )
  {
    *endptr = v12;
    if ( v10 )
    {
      if ( unsigned_flag )
      {
        *error = result != 0 ? 0x22 : 0;
        return 0LL;
      }
      else
      {
LABEL_78:
        *error = 0;
        return -(__int64)result;
      }
    }
LABEL_54:
    *error = 0;
    return result;
  }
  v14 = (int)v12;
  v15 = 0LL;
  v16 = v12 + 1;
  v17 = v14 - (_DWORD)str;
  while ( 1 )
  {
    v18 = *(v16 - 1);
    v19 = v16 - 1;
    v20 = v16;
    v21 = v18 - 48;
    if ( (unsigned __int8)(v18 - 48) <= 9u )
      break;
    if ( v18 != 46 )
    {
      v23 = unsigned_flag;
LABEL_30:
      if ( v15 )
        LODWORD(v15) = (_DWORD)v15 - (_DWORD)v19;
      else
        LODWORD(v15) = 0;
exp:
      if ( !v17 )
        goto ret_edom;
      if ( v19 < v6 )
      {
        v24 = 0;
        goto LABEL_56;
      }
      if ( !(_DWORD)v15 )
        goto ret_sign;
      goto LABEL_71;
    }
    if ( v15 )
    {
      v23 = unsigned_flag;
      LODWORD(v15) = 0;
      goto exp;
    }
    v15 = v16;
LABEL_28:
    ++v16;
    if ( v6 <= v20 )
    {
      v23 = unsigned_flag;
      v19 = v20;
      goto LABEL_30;
    }
  }
  v22 = 0x1999999999999998LL;
  if ( result <= 0x1999999999999998LL || v21 <= 5u && (LOBYTE(v22) = -103, result == v22) )
  {
    ++v17;
    result = v21 + 10 * result;
    goto LABEL_28;
  }
  v23 = unsigned_flag;
  v24 = v18 > 52;
  if ( result == 0x1999999999999999LL )
  {
    v19 = v16;
    v24 = 1;
    result = -1LL;
  }
  if ( !v15 )
  {
    if ( v19 >= v6 )
    {
      LODWORD(v15) = 0;
    }
    else
    {
      v31 = *v19;
      if ( (unsigned __int8)(*v19 - 48) <= 9u )
      {
        while ( 1 )
        {
          ++v19;
          LODWORD(v15) = (_DWORD)v15 + 1;
          if ( v19 == v6 )
            goto LABEL_103;
          v31 = *v19;
          if ( (unsigned __int8)(*v19 - 48) > 9u )
            goto LABEL_106;
        }
      }
      LODWORD(v15) = 0;
LABEL_106:
      if ( v31 != 46 )
        goto LABEL_51;
      if ( v6 > v19 + 1 )
      {
        if ( (unsigned __int8)(*++v19 - 48) <= 9u )
        {
          while ( ++v19 != v6 )
          {
            if ( (unsigned __int8)(*v19 - 48) > 9u )
              goto LABEL_51;
          }
          goto LABEL_103;
        }
        goto LABEL_51;
      }
      ++v19;
    }
LABEL_103:
    if ( !v17 )
      goto ret_edom;
    goto LABEL_67;
  }
  LODWORD(v15) = (_DWORD)v15 - (_DWORD)v19;
  if ( v19 >= v6 )
    goto LABEL_103;
  while ( (unsigned __int8)(*v19 - 48) <= 9u )
  {
    if ( ++v19 == v6 )
      goto LABEL_103;
  }
LABEL_51:
  if ( !v17 )
    goto ret_edom;
LABEL_56:
  if ( (*v19 & 0xDF) != 69 )
  {
LABEL_67:
    if ( !(_DWORD)v15 )
    {
      if ( !v24 )
        goto ret_sign;
      if ( result != -1LL )
      {
        ++result;
        goto ret_sign;
      }
      goto ret_too_big;
    }
LABEL_71:
    if ( (int)v15 < 0 )
    {
      v30 = -(int)v15;
      if ( v30 > 19 )
      {
        *endptr = v19;
        result = 0LL;
        *error = 0;
        return result;
      }
      result = result / d10[v30] - ((2 * (result % d10[v30]) < d10[v30]) - 1LL);
      goto ret_sign;
    }
    if ( (int)v15 <= 20 )
    {
      while ( result <= 0x1999999999999999LL )
      {
        result *= 10LL;
        LODWORD(v15) = (_DWORD)v15 - 1;
        if ( !(_DWORD)v15 )
          goto ret_sign;
      }
    }
    else if ( !result )
    {
      goto ret_sign;
    }
ret_too_big:
    *endptr = v19;
    result = -1LL;
    *error = 34;
    if ( !v23 )
    {
      result = 0x8000000000000000LL;
      if ( !v10 )
        return 0x7FFFFFFFFFFFFFFFLL;
    }
    return result;
  }
  v25 = v19 + 1;
  if ( v6 <= v19 + 1 )
  {
    ++v19;
    goto LABEL_67;
  }
  v26 = v19[1];
  v27 = v26 == 45;
  if ( v26 != 45 && v26 != 43 )
    goto LABEL_60;
  v25 = v19 + 2;
  if ( v19 + 2 != v6 )
  {
    if ( v6 <= v25 )
    {
      v19 += 2;
      i = 0;
    }
    else
    {
      v26 = v19[2];
LABEL_60:
      v28 = v26 - 48;
      v19 = v25;
      for ( i = 0; v28 <= 9u; v28 = *v19 - 48 )
      {
        ++v19;
        i = v28 + 10 * i;
        if ( v6 <= v19 )
          break;
      }
    }
    if ( v27 )
      i = -i;
    LODWORD(v15) = i + (_DWORD)v15;
    goto LABEL_67;
  }
  v19 = (char *)v6;
ret_sign:
  *endptr = v19;
  if ( v23 )
  {
    if ( result && v9 )
    {
      *error = 34;
      return 0LL;
    }
    goto LABEL_54;
  }
  if ( v10 )
  {
    if ( result <= 0x8000000000000000LL )
      goto LABEL_78;
    *error = 34;
    return 0x8000000000000000LL;
  }
  else
  {
    if ( (result & 0x8000000000000000LL) == 0LL )
      goto LABEL_54;
    *error = 34;
    return 0x7FFFFFFFFFFFFFFFLL;
  }
};

// Line 1649: range 000000000CFAC2D0-000000000CFAC2D5
my_bool __fastcall my_propagate_simple(CHARSET_INFO *cs_0, const uchar *str, size_t length)
{
  return 1;
};

// Line 1657: range 000000000CFACAD0-000000000CFACAD2
my_bool __fastcall my_propagate_complex(CHARSET_INFO *cs_0, const uchar *str, size_t length)
{
  return 0;
};
