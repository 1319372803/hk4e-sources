// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-mb.c

// Line 24: range 000000000CFBF810-000000000CFBF87F
size_t __fastcall my_caseup_str_mb(CHARSET_INFO *cs_0, char *str)
{
  char *v2; // rbx
  uchar *to_upper; // r12
  uint v4; // eax
  __int64 v6; // rax

  v2 = str;
  to_upper = cs_0->to_upper;
  while ( *v2 )
  {
    while ( 1 )
    {
      v4 = cs_0->cset->ismbchar(cs_0, v2, &v2[cs_0->mbmaxlen]);
      if ( !v4 )
        break;
      v2 += v4;
      if ( !*v2 )
        return v2 - str;
    }
    v6 = (unsigned __int8)*v2++;
    *(v2 - 1) = to_upper[v6];
  }
  return v2 - str;
};

// Line 45: range 000000000CFBF890-000000000CFBF8FF
size_t __fastcall my_casedn_str_mb(CHARSET_INFO *cs_0, char *str)
{
  char *v2; // rbx
  uchar *to_lower; // r12
  uint v4; // eax
  __int64 v6; // rax

  v2 = str;
  to_lower = cs_0->to_lower;
  while ( *v2 )
  {
    while ( 1 )
    {
      v4 = cs_0->cset->ismbchar(cs_0, v2, &v2[cs_0->mbmaxlen]);
      if ( !v4 )
        break;
      v2 += v4;
      if ( !*v2 )
        return v2 - str;
    }
    v6 = (unsigned __int8)*v2++;
    *(v2 - 1) = to_lower[v6];
  }
  return v2 - str;
};

// Line 79: range 000000000CFBF910-000000000CFBF9B3
size_t __fastcall my_caseup_mb(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v6; // r12
  char *v7; // rbx
  uchar *to_upper; // r13
  MY_UNICASE_INFO **caseinfo; // rax
  MY_UNICASE_INFO *v10; // rax
  MY_UNICASE_INFO *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax

  v6 = &src[srclen];
  v7 = src;
  to_upper = cs_0->to_upper;
  while ( v6 > v7 )
  {
    while ( 1 )
    {
      v12 = ((__int64 (__fastcall *)(CHARSET_INFO *, char *, char *, char *, size_t))cs_0->cset->ismbchar)(
              cs_0,
              v7,
              v6,
              dst,
              dstlen);
      dst = (char *)v12;
      if ( v12 )
        break;
      v13 = (unsigned __int8)*v7++;
      *(v7 - 1) = to_upper[v13];
      if ( v6 <= v7 )
        return srclen;
    }
    caseinfo = cs_0->caseinfo;
    if ( caseinfo && (v10 = caseinfo[(unsigned __int8)*v7]) != 0LL && (v11 = &v10[(unsigned __int8)v7[1]]) != 0LL )
    {
      v7 += 2;
      *(v7 - 2) = BYTE1(v11->toupper);
      *(v7 - 1) = v11->toupper;
    }
    else
    {
      v7 = &v7[(_QWORD)dst];
    }
  }
  return srclen;
};

// Line 114: range 000000000CFBF9C0-000000000CFBFA63
size_t __fastcall my_casedn_mb(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  char *v6; // r12
  char *v7; // rbx
  uchar *to_lower; // r13
  MY_UNICASE_INFO **caseinfo; // rax
  MY_UNICASE_INFO *v10; // rax
  MY_UNICASE_INFO *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax

  v6 = &src[srclen];
  v7 = src;
  to_lower = cs_0->to_lower;
  while ( v6 > v7 )
  {
    while ( 1 )
    {
      v12 = ((__int64 (__fastcall *)(CHARSET_INFO *, char *, char *, char *, size_t))cs_0->cset->ismbchar)(
              cs_0,
              v7,
              v6,
              dst,
              dstlen);
      dst = (char *)v12;
      if ( v12 )
        break;
      v13 = (unsigned __int8)*v7++;
      *(v7 - 1) = to_lower[v13];
      if ( v6 <= v7 )
        return srclen;
    }
    caseinfo = cs_0->caseinfo;
    if ( caseinfo && (v10 = caseinfo[(unsigned __int8)*v7]) != 0LL && (v11 = &v10[(unsigned __int8)v7[1]]) != 0LL )
    {
      v7 += 2;
      *(v7 - 2) = BYTE1(v11->tolower);
      *(v7 - 1) = v11->tolower;
    }
    else
    {
      v7 = &v7[(_QWORD)dst];
    }
  }
  return srclen;
};

// Line 156: range 000000000CFBF570-000000000CFBF66E
size_t __fastcall my_casefold_mb_varlen(
        CHARSET_INFO *cs_0,
        char *src,
        size_t srclen,
        char *dst,
        size_t dstlen,
        uchar *map)
{
  const char *v6; // r12
  char *v7; // rbx
  char *v10; // rbp
  MY_UNICASE_INFO **caseinfo; // rax
  unsigned __int8 v12; // cl
  MY_UNICASE_INFO *v13; // rax
  int *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  char v18; // al

  v6 = &src[srclen];
  v7 = src;
  if ( src >= &src[srclen] )
    return 0LL;
  v10 = dst;
  do
  {
    while ( !cs_0->cset->ismbchar(cs_0, v7, v6) )
    {
      v16 = (unsigned __int8)*v7++;
      *v10++ = *(_BYTE *)(dstlen + v16);
      if ( v6 <= v7 )
        return v10 - dst;
    }
    caseinfo = cs_0->caseinfo;
    v12 = *v7;
    if ( caseinfo && (v13 = caseinfo[v12]) != 0LL && (v14 = (int *)&v13[(unsigned __int8)v7[1]]) != 0LL )
    {
      if ( map )
        v15 = *v14;
      else
        v15 = v14[1];
      v7 += 2;
      if ( v15 > 255 )
        *v10++ = BYTE1(v15);
      *v10++ = v15;
    }
    else
    {
      *v10 = v12;
      v18 = v7[1];
      v10 += 2;
      v7 += 2;
      *(v10 - 1) = v18;
    }
  }
  while ( v6 > v7 );
  return v10 - dst;
};

// Line 201: range 000000000CFBFA70-000000000CFBFA77
size_t __fastcall my_casedn_mb_varlen(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  return my_casefold_mb_varlen(cs_0, src, srclen, dst, (size_t)cs_0->to_lower, 0LL);
};

// Line 211: range 000000000CFBFA80-000000000CFBFA8A
size_t __fastcall my_caseup_mb_varlen(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  return my_casefold_mb_varlen(cs_0, src, srclen, dst, (size_t)cs_0->to_upper, (uchar *)1);
};

// Line 220: range 000000000CFBFA90-000000000CFBFB75
int __fastcall my_strcasecmp_mb(CHARSET_INFO *cs_0, const char *s, const char *t)
{
  uchar *to_upper; // r13
  uint v6; // eax
  const char *v7; // rax
  char v9; // dl

  to_upper = cs_0->to_upper;
  while ( 1 )
  {
LABEL_2:
    if ( !*s )
    {
      v9 = *t;
      return *s != (unsigned __int8)v9;
    }
    if ( !*t )
      break;
    v6 = cs_0->cset->ismbchar(cs_0, s, &s[cs_0->mbmaxlen]);
    if ( v6 )
    {
      v7 = &t[v6];
      while ( *s++ == *t++ )
      {
        if ( t == v7 )
          goto LABEL_2;
      }
      return 1;
    }
    if ( cs_0->cset->mbcharlen(cs_0, *t) > 1 || to_upper[*(unsigned __int8 *)s] != to_upper[*(unsigned __int8 *)t] )
      return 1;
    ++t;
    ++s;
  }
  v9 = 0;
  return *s != (unsigned __int8)v9;
};

// Line 258: range 000000000CFBFB80-000000000CFBFF77
int __fastcall my_wildcmp_mb(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  const char *v8; // r15
  char v12; // dl
  __int64 v13; // rcx
  const char *v14; // r14
  const char *v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  const char *v18; // r15
  uint v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  char v22; // dl
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int8 v25; // r14
  uint v26; // eax
  __int64 v27; // rdx
  uint v28; // eax
  __int64 v29; // rdx
  __int64 mb_len; // [rsp+10h] [rbp-58h]
  unsigned int mb_lena; // [rsp+10h] [rbp-58h]
  int mb_lenb; // [rsp+10h] [rbp-58h]
  const char *wildstra; // [rsp+18h] [rbp-50h]
  uchar cmp; // [rsp+2Fh] [rbp-39h]

  v8 = wildstr;
  if ( wildstr == wildend )
    return str != str_end;
  v12 = *wildstr;
  v13 = 0xFFFFFFFFLL;
  do
  {
    while ( v12 != w_many )
    {
      if ( v12 == w_one )
        goto LABEL_22;
      if ( v12 == escape && v8 + 1 != wildend )
        ++v8;
      v16 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, __int64))cs_0->cset->ismbchar)(
              cs_0,
              v8,
              wildend,
              v13);
      if ( v16 )
      {
        v14 = &str[v16];
        if ( v14 > str_end || (mb_len = v16, memcmp(str, v8, v16)) )
        {
LABEL_14:
          LODWORD(v17) = 1;
          return v17;
        }
        v15 = &v8[mb_len];
      }
      else
      {
        if ( str == str_end )
          goto LABEL_14;
        v15 = v8 + 1;
        v14 = str + 1;
        if ( cs_0->sort_order[*(unsigned __int8 *)v8] != cs_0->sort_order[*(unsigned __int8 *)str] )
          goto LABEL_14;
      }
      if ( v15 == wildend )
        return v14 != str_end;
      v12 = *v15;
      v13 = 1LL;
      v8 = v15;
      str = v14;
    }
    if ( w_many != w_one )
      break;
LABEL_22:
    if ( str == str_end )
    {
LABEL_40:
      LODWORD(v17) = v13;
      return v17;
    }
    while ( 1 )
    {
      mb_lena = v13;
      v19 = cs_0->cset->ismbchar(cs_0, str, str_end);
      v20 = 1LL;
      v13 = mb_lena;
      if ( v19 )
      {
        v21 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, _QWORD))cs_0->cset->ismbchar)(
                cs_0,
                str,
                str_end,
                mb_lena);
        v13 = mb_lena;
        v20 = v21;
      }
      ++v8;
      str += v20;
      if ( wildend <= v8 || *v8 != w_one )
        break;
      if ( str_end == str )
        goto LABEL_40;
    }
    if ( wildend == v8 )
      return str != str_end;
    v12 = *v8;
  }
  while ( *v8 != w_many );
  v18 = v8 + 1;
  if ( wildend == v18 )
    goto LABEL_21;
  while ( 2 )
  {
    v22 = *v18;
    if ( *v18 == w_many )
    {
LABEL_31:
      if ( wildend == ++v18 )
        goto LABEL_21;
      continue;
    }
    break;
  }
  if ( w_one == v22 )
  {
    if ( str == str_end )
      goto LABEL_42;
    v23 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, __int64))cs_0->cset->ismbchar)(
            cs_0,
            str,
            str_end,
            v13);
    v24 = 1LL;
    if ( v23 )
      v24 = cs_0->cset->ismbchar(cs_0, str, str_end);
    str += v24;
    goto LABEL_31;
  }
  if ( wildend != v18 )
  {
    if ( str_end == str )
      goto LABEL_42;
    v25 = *v18;
    if ( (unsigned __int8)v22 == escape && v18 + 1 != wildend )
      v25 = *++v18;
    mb_lenb = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, __int64))cs_0->cset->ismbchar)(
                cs_0,
                v18,
                wildend,
                v13);
    v26 = cs_0->cset->ismbchar(cs_0, v18, wildend);
    v27 = 1LL;
    if ( v26 )
      v27 = cs_0->cset->ismbchar(cs_0, v18, wildend);
    wildstra = &v18[v27];
    cmp = cs_0->sort_order[v25];
    if ( str_end <= str )
    {
LABEL_42:
      LODWORD(v17) = -1;
      return v17;
    }
    while ( 2 )
    {
      if ( mb_lenb )
      {
        if ( str_end >= &str[mb_lenb] && !memcmp(str, v18, mb_lenb) )
        {
          str += mb_lenb;
LABEL_52:
          LODWORD(v17) = my_wildcmp_mb(cs_0, str, str_end, wildstra, wildend, escape, w_one, w_many);
          if ( (int)v17 <= 0 )
            return v17;
          if ( str == str_end || *wildstra == w_many )
            goto LABEL_42;
LABEL_55:
          if ( str_end <= str )
            goto LABEL_42;
          continue;
        }
      }
      else if ( !cs_0->cset->ismbchar(cs_0, str, str_end) && cs_0->sort_order[*(unsigned __int8 *)str] == cmp )
      {
        ++str;
        goto LABEL_52;
      }
      break;
    }
    v28 = cs_0->cset->ismbchar(cs_0, str, str_end);
    v29 = 1LL;
    if ( v28 )
      v29 = cs_0->cset->ismbchar(cs_0, str, str_end);
    str += v29;
    goto LABEL_55;
  }
LABEL_21:
  LODWORD(v17) = 0;
  return v17;
};

// Line 364: range 000000000CFBFF80-000000000CFBFFD8
size_t __fastcall my_numchars_mb(CHARSET_INFO *cs_0, const char *pos, const char *end)
{
  const char *v4; // rbx
  size_t v5; // r12
  __int64 v6; // rax

  v4 = pos;
  if ( pos >= end )
    return 0LL;
  v5 = 0LL;
  do
  {
    v6 = cs_0->cset->ismbchar(cs_0, v4, end);
    if ( !(_DWORD)v6 )
      v6 = 1LL;
    ++v5;
    v4 += v6;
  }
  while ( end > v4 );
  return v5;
};

// Line 378: range 000000000CFBFFE0-000000000CFC006B
size_t __fastcall my_charpos_mb(CHARSET_INFO *cs_0, const char *pos, const char *end, size_t length)
{
  size_t v5; // rbp
  const char *v6; // rbx
  __int64 v7; // rax
  size_t result; // rax

  v5 = length;
  if ( pos < end && length )
  {
    v6 = pos;
    do
    {
      v7 = cs_0->cset->ismbchar(cs_0, v6, end);
      if ( !(_DWORD)v7 )
        v7 = 1LL;
      --v5;
      v6 += v7;
    }
    while ( end > v6 && v5 );
  }
  else
  {
    v6 = pos;
  }
  result = v6 - pos;
  if ( v5 )
    return end + 2 - pos;
  return result;
};

// Line 393: range 000000000CFC0070-000000000CFC0109
size_t __fastcall my_well_formed_len_mb(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos, int *error)
{
  size_t v6; // rbp
  const char *v8; // rbx
  int v9; // eax
  ulong wc[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = pos;
  *error = 0;
  if ( !pos )
    return 0LL;
  v8 = b;
  do
  {
    v9 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v8, (const uchar *)e);
    if ( v9 <= 0 )
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

// Line 417: range 000000000CFBF670-000000000CFBF7B8
uint __fastcall my_instr_mb(
        CHARSET_INFO *cs_0,
        const char *b,
        size_t b_length,
        const char *s,
        size_t s_length,
        my_match_t *match,
        uint nmatch)
{
  uint result; // eax
  uint v9; // r13d
  const char *v11; // r12
  const char *v12; // rbx
  signed int v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rax
  uint v17; // ebx

  result = 0;
  if ( s_length <= b_length )
  {
    if ( s_length )
    {
      v9 = 0;
      v11 = &b[b_length + 1 - s_length];
      v12 = b;
      if ( b < v11 )
      {
        while ( cs_0->coll->strnncoll(cs_0, (const uchar *)v12, s_length, (const uchar *)s, s_length, 0LL) )
        {
          v13 = cs_0->cset->ismbchar(cs_0, v12, v11);
          v14 = v13 == 0;
          v15 = v13;
          v16 = 1LL;
          if ( !v14 )
            v16 = v15;
          ++v9;
          v12 += v16;
          if ( v11 <= v12 )
            return 0;
        }
        if ( nmatch )
        {
          v17 = (_DWORD)v12 - (_DWORD)b;
          match->beg = 0;
          match->end = v17;
          match->mb_len = v9;
          if ( nmatch > 1 )
          {
            match[1].beg = v17;
            *(_QWORD *)&match[1].end = (unsigned int)s_length + v17;
          }
        }
        return 2;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      LOBYTE(result) = 1;
      if ( nmatch )
      {
        match->beg = 0;
        match->end = 0;
        match->mb_len = 0;
      }
    }
  }
  return result;
};

// Line 475: range 000000000CFBED00-000000000CFBED44
int __fastcall my_strnncoll_mb_bin(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  size_t v7; // r12
  int v8; // ebp
  int v9; // ebx
  int result; // eax
  int v11; // eax

  v7 = slen;
  v8 = tlen;
  v9 = slen;
  if ( tlen <= slen )
    v7 = tlen;
  result = memcmp(s, t, v7);
  if ( !result )
  {
    v11 = v7;
    if ( !t_is_prefix )
      v11 = v9;
    return v11 - v8;
  }
  return result;
};

// Line 521: range 000000000CFBEB60-000000000CFBEC09
int __fastcall my_strnncollsp_mb_bin(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // r11
  int v7; // eax
  const uchar *v8; // r9
  int v9; // ecx
  const uchar *v10; // rdi
  int result; // eax
  const uchar *v12; // rdx

  v6 = a_length;
  if ( b_length <= a_length )
    v6 = b_length;
  if ( a >= &a[v6] )
  {
    v8 = b;
    v10 = a;
  }
  else
  {
    v7 = *a;
    v8 = b + 1;
    v9 = *b;
    v10 = a + 1;
    if ( (_BYTE)v7 != (_BYTE)v9 )
      return v7 - v9;
    while ( v10 != &a[v6] )
    {
      ++v10;
      ++v8;
      v7 = *(v10 - 1);
      v9 = *(v8 - 1);
      if ( (_BYTE)v7 != (_BYTE)v9 )
        return v7 - v9;
    }
  }
  if ( a_length == b_length )
    return 0;
  result = 1;
  if ( b_length > a_length )
  {
    a_length = b_length;
    v10 = v8;
    result = -1;
  }
  v12 = &v10[a_length - v6];
  if ( v10 >= v12 )
    return 0;
  while ( *v10 == 32 )
  {
    if ( ++v10 == v12 )
      return 0;
  }
  if ( *v10 <= 0x1Fu )
    return -result;
  return result;
};

// Line 558: range 000000000CFBF7C0-000000000CFBF80B
size_t __fastcall my_strnxfrm_mb_bin(CHARSET_INFO *cs_0, uchar *dest, size_t dstlen, const uchar *src, size_t srclen)
{
  char *v5; // r9
  size_t v7; // rbx

  v5 = (char *)dest;
  v7 = dstlen;
  if ( dest != src )
  {
    if ( srclen <= dstlen )
      dstlen = srclen;
    v5 = (char *)memcpy(dest, src, dstlen);
  }
  if ( srclen < v7 )
    memset(&v5[srclen], 32, v7 - srclen);
  return v7;
};

// Line 570: range 000000000CFBF160-000000000CFBF166
int __fastcall my_strcasecmp_mb_bin(CHARSET_INFO *cs, const char *s, const char *t)
{
  return strcmp(s, t);
};

// Line 679: range 000000000CFBF170-000000000CFBF560
// local variable allocation has failed, the output may be wrong!
my_bool __fastcall my_like_range_mb(
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
  const char *v11; // r12
  const char *v12; // rbp
  unsigned __int64 mbmaxlen; // rsi
  const char *v14; // rcx
  char *v15; // r14
  size_t v16; // r9
  uint16 *contractions; // rax
  const char *v18; // rdx
  unsigned __int64 v19; // r13
  size_t v20; // r12
  char *v21; // r15
  char *v22; // rbx
  char v23; // al
  unsigned int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  char v28; // dl
  char *v29; // rax
  char *v30; // rbx
  char *v31; // r15
  size_t v32; // rax
  const char *v34; // rsi
  char v35; // dl
  int v36; // eax
  char *v37; // rax
  char v38; // dl
  char *v39; // rax
  CHARSET_INFO *v40; // r13
  char *v41; // rbx
  char *v42; // r14
  char *v43; // r15
  size_t v44; // rbx
  char *v45; // rbp
  bool v46; // zf
  uint16 max_sort_char; // ax
  size_t v48; // r12
  char *v49; // rdi
  char *v50; // rcx
  char *min_end; // [rsp+8h] [rbp-60h]
  const char *contraction_flags; // [rsp+18h] [rbp-50h]
  char src[10]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v57[6]; // [rsp+2Ah] [rbp-3Eh] BYREF

  v11 = &ptr[ptr_length];
  v12 = ptr;
  mbmaxlen = cs_0->mbmaxlen;
  v14 = 0LL;
  v15 = &min_str[res_length];
  v16 = res_length / mbmaxlen;
  contractions = cs_0->contractions;
  v18 = (const char *)(contractions + 2048);
  if ( !contractions )
    v18 = 0LL;
  contraction_flags = v18;
  if ( v12 == v11 || min_str == v15 )
  {
    v31 = max_str;
    v30 = min_str;
    v32 = 0LL;
LABEL_20:
    *max_length = v32;
    *min_length = v32;
    if ( v15 == v30 )
      return 0;
    do
    {
LABEL_21:
      ++v30;
      *v31++ = 32;
      *(v30 - 1) = 32;
    }
    while ( v30 != v15 );
    return 0;
  }
  if ( !v16 )
  {
    v31 = max_str;
    v30 = min_str;
    *max_length = 0LL;
    *min_length = 0LL;
    goto LABEL_21;
  }
  v19 = (unsigned __int64)v11;
  min_end = &min_str[res_length];
  v20 = res_length / mbmaxlen;
  v21 = min_str;
  v22 = max_str;
  while ( 1 )
  {
    v23 = *v12;
    if ( *v12 != escape || v12 + 1 == (const char *)v19 )
    {
      if ( v23 == w_one || v23 == w_many )
      {
LABEL_37:
        v39 = v22;
        v40 = cs_0;
        v41 = v21;
        v42 = &min_str[res_length];
        v43 = v39;
        v37 = v41 + 1;
        goto fill_max_and_min;
      }
    }
    else
    {
      ++v12;
    }
    v24 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, unsigned __int64, const char *, _QWORD, size_t))cs_0->cset->ismbchar)(
            cs_0,
            v12,
            v19,
            v14,
            w_one,
            v16);
    if ( v24 <= 1 )
      break;
    if ( v19 < (unsigned __int64)&v12[v24] || min_end < &v21[v24] )
    {
LABEL_19:
      v29 = v22;
      v30 = v21;
      v15 = &min_str[res_length];
      v31 = v29;
      v32 = v30 - min_str;
      goto LABEL_20;
    }
    v25 = v24 - 1;
    v26 = 0LL;
    v27 = v25 + 1;
    do
    {
      v28 = v12[v26];
      v22[v26] = v28;
      v21[v26++] = v28;
    }
    while ( v26 != v27 );
    v21 += v26;
    v22 += v26;
    v12 += v26;
LABEL_16:
    --v20;
    if ( v21 == min_end || v12 == (const char *)v19 || !v20 )
      goto LABEL_19;
  }
  if ( !contraction_flags )
  {
    v38 = *v12;
    ++v22;
    ++v21;
    ++v12;
    *(v22 - 1) = v38;
    *(v21 - 1) = v38;
    goto LABEL_16;
  }
  v34 = v12 + 1;
  v35 = *v12;
  if ( v19 <= (unsigned __int64)(v12 + 1) )
    goto LABEL_35;
  v14 = contraction_flags;
  if ( !contraction_flags[(unsigned __int8)v35] )
    goto LABEL_35;
  v36 = v12[1];
  if ( v12[1] == w_one || w_many == (_BYTE)v36 )
    goto LABEL_37;
  if ( !contraction_flags[(unsigned __int8)v36] || !cs_0->contractions[64 * v35 - 4160 + v36] )
    goto LABEL_35;
  if ( v20 == 1 )
    goto LABEL_37;
  v37 = v21 + 1;
  if ( min_end > v21 + 1 )
  {
    *v22 = v35;
    *v21 = v35;
    v34 = v12 + 2;
    v35 = v12[1];
    --v20;
    ++v22;
    ++v21;
LABEL_35:
    *v22 = v35;
    *v21++ = v35;
    ++v22;
    v12 = v34;
    goto LABEL_16;
  }
  v50 = v22;
  v40 = cs_0;
  v41 = v21;
  v42 = &min_str[res_length];
  v43 = v50;
fill_max_and_min:
  v44 = v41 - min_str;
  if ( (v40->state & 0x10) == 0 )
    v44 = res_length;
  *min_length = v44;
  *max_length = res_length;
  while ( 1 )
  {
    *(v37 - 1) = v40->min_sort_char;
    if ( v37 == v42 )
      break;
    ++v37;
  }
  v45 = &max_str[res_length];
  v46 = SLOBYTE(v40->state) >= 0;
  *max_length = res_length;
  if ( !v46 )
  {
    v48 = (char)v40->cset->wc_mb(v40, v40->max_sort_char, (uchar *)src, v57);
    goto LABEL_46;
  }
  max_sort_char = v40->max_sort_char;
  if ( max_sort_char <= 0xFFu )
  {
    memset(v43, max_sort_char, v45 - v43);
  }
  else
  {
    src[1] = v40->max_sort_char;
    v48 = 2LL;
    src[0] = HIBYTE(max_sort_char);
LABEL_46:
    v49 = v43;
    do
    {
      if ( v45 < &v49[v48] )
      {
        *v49++ = 32;
      }
      else
      {
        memcpy(v49, src, v48);
        v49 += v48;
      }
    }
    while ( v45 > v49 );
  }
  return 0;
};

// Line 836: range 000000000CFC0110-000000000CFC05A6
my_bool __fastcall my_like_range_generic(
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
  CHARSET_INFO *v11; // r15
  const char *v12; // rbx
  char *v13; // r14
  size_t v14; // r13
  uchar *v15; // r15
  char *v16; // r12
  char *v17; // rbp
  int i; // eax
  int v19; // eax
  int v20; // eax
  ulong v21; // rsi
  int v22; // eax
  uint16 *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  size_t v27; // rdx
  size_t v28; // rax
  char *v29; // rsi
  char *v30; // rbx
  size_t v31; // r13
  signed __int64 v32; // rdx
  my_bool v33; // bl
  int v35; // eax
  size_t v36; // rax
  const char *end; // [rsp+0h] [rbp-88h]
  char *max_end; // [rsp+8h] [rbp-80h]
  __int64 w_onea; // [rsp+18h] [rbp-70h]
  __int64 escapea; // [rsp+20h] [rbp-68h]
  __int64 w_manya; // [rsp+28h] [rbp-60h]
  uint16 *contractions; // [rsp+30h] [rbp-58h]
  ulong wc; // [rsp+40h] [rbp-48h] BYREF
  ulong wc2[8]; // [rsp+48h] [rbp-40h] BYREF

  v11 = cs_0;
  v12 = ptr;
  end = &ptr[ptr_length];
  v13 = &min_str[res_length];
  max_end = &max_str[res_length];
  v14 = res_length / cs_0->mbmaxlen;
  contractions = cs_0->contractions;
  if ( v14 )
  {
    v15 = (uchar *)&min_str[res_length];
    v16 = max_str;
    v17 = min_str;
    escapea = escape;
    w_onea = w_one;
    w_manya = w_many;
    for ( i = cs_0->cset->mb_wc(cs_0, &wc, (const uchar *)ptr, (const uchar *)end);
          ;
          i = cs_0->cset->mb_wc(cs_0, &wc, (const uchar *)v12, (const uchar *)end) )
    {
      if ( i <= 0 )
      {
        v13 = &min_str[res_length];
        v11 = cs_0;
        if ( i )
          goto LABEL_27;
        return 1;
      }
      v21 = wc;
      v12 += i;
      if ( escapea == wc )
        break;
      if ( wc != w_onea )
      {
        if ( wc == w_manya )
        {
          v13 = &min_str[res_length];
          v11 = cs_0;
          if ( (cs_0->state & 0x10) != 0 )
          {
            v29 = v17;
            v36 = v17 - min_str;
          }
          else
          {
            v36 = res_length;
            v29 = v17;
          }
          *min_length = v36;
          *max_length = res_length;
          goto LABEL_42;
        }
        if ( contractions )
        {
          if ( *((_BYTE *)cs_0->contractions + (unsigned __int8)wc + 4096) )
          {
            v22 = cs_0->cset->mb_wc(cs_0, wc2, (const uchar *)v12, (const uchar *)end);
            v21 = wc;
            if ( v22 > 0 )
            {
              if ( w_onea == wc2[0] || w_manya == wc2[0] )
              {
LABEL_44:
                v13 = &min_str[res_length];
                v11 = cs_0;
                v29 = v17;
                *max_length = res_length;
                *min_length = res_length;
LABEL_42:
                v30 = v16;
                goto pad_min_max;
              }
              v23 = cs_0->contractions;
              v21 = wc;
              if ( *((_BYTE *)v23 + LOBYTE(wc2[0]) + 4096)
                && &v23[64 * wc + wc2[0]] != (uint16 *)8320
                && v23[64 * wc - 4160 + wc2[0]] )
              {
                if ( v14 == 1 )
                  goto LABEL_44;
                --v14;
                v12 += v22;
                v24 = cs_0->cset->wc_mb(cs_0, wc, (uchar *)v17, v15);
                if ( v24 <= 0
                  || (v17 += v24, v25 = cs_0->cset->wc_mb(cs_0, wc, (uchar *)v16, (uchar *)max_end), v25 <= 0) )
                {
LABEL_26:
                  v13 = &min_str[res_length];
                  v11 = cs_0;
LABEL_27:
                  v27 = v17 - min_str;
                  v28 = v16 - max_str;
                  v29 = v17;
                  v30 = v16;
                  goto pad_set_lengths;
                }
                v21 = wc2[0];
                v16 += v25;
                wc = wc2[0];
              }
            }
          }
        }
        v19 = cs_0->cset->wc_mb(cs_0, v21, (uchar *)v17, v15);
        if ( v19 <= 0 )
          goto LABEL_26;
        goto LABEL_4;
      }
      v35 = cs_0->cset->wc_mb(cs_0, cs_0->min_sort_char, (uchar *)v17, v15);
      if ( v35 <= 0 )
        goto LABEL_26;
      v17 += v35;
      v20 = cs_0->cset->wc_mb(cs_0, cs_0->max_sort_char, (uchar *)v16, (uchar *)max_end);
      if ( v20 <= 0 )
        goto LABEL_26;
LABEL_5:
      v16 += v20;
      if ( !--v14 )
        goto LABEL_26;
    }
    v26 = cs_0->cset->mb_wc(cs_0, &wc, (const uchar *)v12, (const uchar *)end);
    if ( v26 <= 0 )
    {
      if ( !v26 )
        return 1;
    }
    else
    {
      v12 += v26;
    }
    v19 = cs_0->cset->wc_mb(cs_0, wc, (uchar *)v17, v15);
    if ( v19 <= 0 )
      goto LABEL_26;
LABEL_4:
    v17 += v19;
    v20 = cs_0->cset->wc_mb(cs_0, wc, (uchar *)v16, (uchar *)max_end);
    if ( v20 <= 0 )
      goto LABEL_26;
    goto LABEL_5;
  }
  v29 = min_str;
  v30 = max_str;
  v28 = 0LL;
  v27 = 0LL;
  v16 = max_str;
  v17 = min_str;
pad_set_lengths:
  *min_length = v27;
  *max_length = v28;
pad_min_max:
  v31 = res_length % v11->mbminlen;
  v11->cset->fill(v11, v17, v13 - v29 - v31, v11->min_sort_char);
  v32 = max_end - v30;
  v33 = 0;
  v11->cset->fill(v11, v16, v32 - v31, v11->max_sort_char);
  if ( v31 )
  {
    memset(&v13[-v31], 0, v31);
    memset(&max_end[-v31], 0, v31);
  }
  return v33;
};

// Line 996: range 000000000CFBED50-000000000CFBF154
int __fastcall my_wildcmp_mb_bin(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  const char *v9; // r13
  char v13; // dl
  __int64 v14; // r8
  const char *v15; // r15
  int v16; // eax
  __int64 v17; // rax
  const char *v18; // r13
  char v19; // dl
  int v20; // eax
  __int64 v21; // rdx
  uint v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned __int8 v25; // r13
  uint v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // r13d
  CHARSET_INFO *v30; // rbx
  const char *v31; // rbp
  uint v32; // eax
  __int64 v33; // rdx
  unsigned __int8 v34; // di
  const char *mb; // [rsp+10h] [rbp-58h]
  unsigned int mba; // [rsp+10h] [rbp-58h]
  const char *mbb; // [rsp+10h] [rbp-58h]
  const char *s2; // [rsp+18h] [rbp-50h]
  int mb_len; // [rsp+20h] [rbp-48h]
  const char *mb_lena; // [rsp+20h] [rbp-48h]
  int cmp; // [rsp+2Ch] [rbp-3Ch]

  v9 = wildstr;
  if ( wildstr == wildend )
    return str != str_end;
  v13 = *wildstr;
  v14 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    while ( v13 != w_many )
    {
      if ( v13 == w_one )
        goto LABEL_29;
      if ( v13 == escape && v9 + 1 != wildend )
        ++v9;
      v16 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, const char *, __int64))cs_0->cset->ismbchar)(
              cs_0,
              v9,
              wildend,
              wildstr,
              v14);
      if ( v16 )
      {
        v15 = &str[v16];
        if ( v15 > str_end || (mb = (const char *)v16, memcmp(str, v9, v16)) )
        {
LABEL_14:
          LODWORD(v17) = 1;
          return v17;
        }
        wildstr = &mb[(_QWORD)v9];
      }
      else
      {
        if ( str == str_end )
          goto LABEL_14;
        wildstr = v9 + 1;
        v15 = str + 1;
        if ( *v9 != *str )
          goto LABEL_14;
      }
      if ( wildstr == wildend )
        return v15 != str_end;
      v13 = *wildstr;
      v14 = 1LL;
      v9 = wildstr;
      str = v15;
    }
    if ( w_many != w_one )
      goto LABEL_20;
LABEL_29:
    if ( str == str_end )
      break;
    while ( 1 )
    {
      mba = v14;
      v22 = cs_0->cset->ismbchar(cs_0, str, str_end);
      v23 = 1LL;
      v14 = mba;
      if ( v22 )
      {
        v24 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, const char *, _QWORD))cs_0->cset->ismbchar)(
                cs_0,
                str,
                str_end,
                wildstr,
                mba);
        v14 = mba;
        v23 = v24;
      }
      ++v9;
      str += v23;
      if ( wildend <= v9 || *v9 != w_one )
        break;
      if ( str_end == str )
        goto LABEL_40;
    }
    if ( wildend == v9 )
      return str != str_end;
    v13 = *v9;
    if ( *v9 == w_many )
    {
LABEL_20:
      if ( wildend == v9 + 1 )
        goto LABEL_43;
      v18 = v9 + 1;
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 != w_many )
        {
          if ( w_one != v19 )
          {
            mbb = v18;
            if ( wildend != v18 )
            {
              if ( str_end == str )
                goto LABEL_42;
              v25 = *v18;
              if ( (unsigned __int8)v19 == escape && mbb + 1 != wildend )
              {
                v34 = *++mbb;
                v25 = v34;
              }
              mb_len = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, const char *, __int64))cs_0->cset->ismbchar)(
                         cs_0,
                         mbb,
                         wildend,
                         wildstr,
                         v14);
              v26 = cs_0->cset->ismbchar(cs_0, mbb, wildend);
              v27 = 1LL;
              if ( v26 )
                v27 = cs_0->cset->ismbchar(cs_0, mbb, wildend);
              s2 = &mbb[v27];
              if ( str_end <= str )
              {
LABEL_42:
                LODWORD(v17) = -1;
                return v17;
              }
              v28 = v25;
              v29 = mb_len;
              mb_lena = wildend;
              cmp = v28;
              v30 = cs_0;
              v31 = str;
              while ( 2 )
              {
                if ( v29 )
                {
                  if ( str_end >= &v31[v29] && !memcmp(v31, mbb, v29) )
                  {
                    v31 += v29;
LABEL_53:
                    LODWORD(v17) = my_wildcmp_mb_bin(v30, v31, str_end, s2, mb_lena, escape, w_one, w_many);
                    if ( (int)v17 <= 0 )
                      return v17;
                    if ( v31 == str_end || *s2 == w_many )
                      goto LABEL_42;
LABEL_56:
                    if ( str_end <= v31 )
                      goto LABEL_42;
                    continue;
                  }
                }
                else if ( !v30->cset->ismbchar(v30, v31, str_end) && *v31 == cmp )
                {
                  ++v31;
                  goto LABEL_53;
                }
                break;
              }
              v32 = v30->cset->ismbchar(v30, v31, str_end);
              v33 = 1LL;
              if ( v32 )
                v33 = v30->cset->ismbchar(v30, v31, str_end);
              v31 += v33;
              goto LABEL_56;
            }
LABEL_43:
            LODWORD(v17) = 0;
            return v17;
          }
          if ( str == str_end )
            goto LABEL_42;
          v20 = ((__int64 (__fastcall *)(CHARSET_INFO *, const char *, const char *, const char *, __int64))cs_0->cset->ismbchar)(
                  cs_0,
                  str,
                  str_end,
                  wildstr,
                  v14);
          v21 = 1LL;
          if ( v20 )
            v21 = cs_0->cset->ismbchar(cs_0, str, str_end);
          str += v21;
        }
        if ( wildend == ++v18 )
          goto LABEL_43;
      }
    }
  }
LABEL_40:
  LODWORD(v17) = v14;
  return v17;
};

// Line 1307: range 000000000CFC05B0-000000000CFC0677
size_t __fastcall my_numcells_mb(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  const char *v4; // rbx
  size_t v5; // rbp
  size_t v6; // rbp
  int v7; // eax
  const $4208D52CDE30A40A3D7A44DB143DD7CE *v8; // rdx
  char *p; // rcx
  __int64 page; // rax
  ulong wc[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = b;
  if ( b >= e )
    return 0LL;
  v5 = 0LL;
  do
  {
    while ( 1 )
    {
      v7 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v4, (const uchar *)e);
      if ( v7 > 0 )
        break;
      if ( e <= ++v4 )
        return v5;
    }
    v4 += v7;
    if ( wc[0] > 0xFFFF )
    {
      v6 = (wc[0] - 0x20000 < 0x1FFFE) + v5;
    }
    else
    {
      v8 = &utr11_data[(unsigned int)(wc[0] >> 8)];
      p = v8->p;
      if ( p )
        page = p[LOBYTE(wc[0])];
      else
        page = v8->page;
      v6 = page + v5;
    }
    v5 = v6 + 1;
  }
  while ( e > v4 );
  return v5;
};

// Line 1340: range 000000000CFC0680-000000000CFC06ED
int __fastcall my_mb_ctype_mb(CHARSET_INFO *cs_0, int *ctype, const uchar *s, const uchar *e)
{
  int result; // eax
  MY_UNI_CTYPE *v6; // rdx
  uchar *v7; // rsi
  int pctype; // edx
  ulong wc[2]; // [rsp+8h] [rbp-10h] BYREF

  result = cs_0->cset->mb_wc(cs_0, wc, s, e);
  if ( result <= 0 || wc[0] > 0xFFFF )
  {
    *ctype = 0;
  }
  else
  {
    v6 = &my_uni_ctype[wc[0] >> 8];
    v7 = v6->ctype;
    if ( v7 )
      pctype = v7[LOBYTE(wc[0])];
    else
      pctype = v6->pctype;
    *ctype = pctype;
  }
  return result;
};
