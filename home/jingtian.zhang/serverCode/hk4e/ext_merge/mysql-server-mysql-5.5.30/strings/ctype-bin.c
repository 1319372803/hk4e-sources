// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-bin.c

// Line 74: range 000000000CFBE3E0-000000000CFBE3EE
my_bool __fastcall my_coll_init_8bit_bin(CHARSET_INFO *cs_0, void *(*alloc)(size_t))
{
  cs_0->max_sort_char = 255;
  return 0;
};

// Line 82: range 000000000CFBE920-000000000CFBE964
int __fastcall my_strnncoll_binary(
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

// Line 92: range 000000000CFBE3F0-000000000CFBE3F3
size_t __fastcall my_lengthsp_binary(CHARSET_INFO *cs_0, const char *ptr, size_t length)
{
  return length;
};

// Line 124: range 000000000CFBE970-000000000CFBE99E
int __fastcall my_strnncollsp_binary(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  bool v7; // cc
  size_t v8; // rdx
  int v9; // ebx
  int result; // eax

  v7 = slen <= tlen;
  v8 = tlen;
  if ( v7 )
    v8 = slen;
  v9 = slen - tlen;
  result = memcmp(s, t, v8);
  if ( !result )
    return v9;
  return result;
};

// Line 133: range 000000000CFBE8D0-000000000CFBE914
int __fastcall my_strnncoll_8bit_bin(
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

// Line 178: range 000000000CFBE400-000000000CFBE4A9
int __fastcall my_strnncollsp_8bit_bin(
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

// Line 218: range 000000000CFBE4B0-000000000CFBE4B2
size_t __fastcall my_case_str_bin(CHARSET_INFO *cs_0, char *str)
{
  return 0LL;
};

// Line 226: range 000000000CFBE4C0-000000000CFBE4C3
size_t __fastcall my_case_bin(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  return srclen;
};

// Line 233: range 000000000CFBE8C0-000000000CFBE8C6
int __fastcall my_strcasecmp_bin(CHARSET_INFO *cs, const char *s, const char *t)
{
  return strcmp(s, t);
};

// Line 242: range 000000000CFBE4D0-000000000CFBE4D5
uint __fastcall my_mbcharlen_8bit(CHARSET_INFO *cs_0, uint c)
{
  return 1;
};

// Line 250: range 000000000CFBE4E0-000000000CFBE4FD
int __fastcall my_mb_wc_bin(CHARSET_INFO *cs_0, ulong *wc, const uchar *str, const uchar *end)
{
  if ( str >= end )
    return -101;
  *wc = *str;
  return 1;
};

// Line 263: range 000000000CFBE500-000000000CFBE528
int __fastcall my_wc_mb_bin(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  int result; // eax

  if ( s >= e )
    return -101;
  result = 0;
  if ( wc <= 0xFF )
  {
    *s = wc;
    LOBYTE(result) = 1;
  }
  return result;
};

// Line 301: range 000000000CFBE620-000000000CFBE66A
void __fastcall my_hash_sort_bin(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  const uchar *v5; // rdx
  ulong i; // r10
  __int64 v7; // rax
  ulong v8; // rax

  v5 = &key[len];
  if ( key < v5 )
  {
    for ( i = *nr2; ; i = v8 )
    {
      v7 = *key++;
      *nr1 ^= (*nr1 << 8) + (i + (*nr1 & 0x3F)) * v7;
      v8 = *nr2 + 3;
      *nr2 = v8;
      if ( key == v5 )
        break;
    }
  }
};

// Line 325: range 000000000CFBE670-000000000CFBE8BA
int __fastcall my_wildcmp_bin(
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
  char v13; // dl
  const char *v14; // rdx
  char v15; // cl
  const char *v16; // r15
  const char *v17; // rbx
  char v18; // r12
  const char *v19; // rdi
  const char *wildstra; // [rsp+10h] [rbp-58h]
  CHARSET_INFO *cs_0a; // [rsp+18h] [rbp-50h]

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
      if ( *wildstr != *str++ )
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
    v14 = wildstr + 1;
    ++str;
    if ( wildend > wildstr + 1 && wildstr[1] == w_one )
    {
      while ( 1 )
      {
        if ( str == str_end )
          return v11;
        ++v14;
        ++str;
        if ( v14 == wildend )
          return str != str_end;
        if ( *v14 != w_one )
          goto LABEL_33;
      }
    }
    if ( wildend == v14 )
      return str != str_end;
LABEL_33:
    wildstr = v14;
    v10 = *v14;
  }
  while ( (char)v10 != w_many );
  v12 = wildstr + 1;
  if ( wildend == wildstr + 1 )
  {
LABEL_22:
    LODWORD(v11) = 0;
    return v11;
  }
  while ( 2 )
  {
    v13 = *v12;
    if ( *v12 == w_many )
    {
LABEL_21:
      if ( wildend == ++v12 )
        goto LABEL_22;
      continue;
    }
    break;
  }
  if ( w_one == v13 )
  {
    if ( str == str_end )
      goto LABEL_47;
    ++str;
    goto LABEL_21;
  }
  if ( wildend == v12 )
    goto LABEL_22;
  if ( str_end != str )
  {
    v15 = *v12;
    if ( (unsigned __int8)v13 == escape )
    {
      if ( v12 + 1 == wildend )
      {
        wildstra = wildend;
      }
      else
      {
        v15 = v12[1];
        v19 = v12 + 2;
        ++v12;
        wildstra = v19;
      }
    }
    else
    {
      wildstra = v12 + 1;
    }
    v16 = str + 1;
    cs_0a = cs_0;
    v17 = v12;
    v18 = v15;
    while ( 1 )
    {
      if ( v18 == *(v16 - 1) )
      {
        if ( str_end == v16 - 1 )
          break;
        LODWORD(v11) = my_wildcmp_bin(cs_0a, v16, str_end, wildstra, wildend, escape, w_one, w_many);
        if ( (int)v11 <= 0 )
          return v11;
        if ( str_end == v16 || v17[1] == w_many )
          break;
      }
      else if ( str_end == v16 )
      {
        break;
      }
      ++v16;
    }
  }
LABEL_47:
  LODWORD(v11) = -1;
  return v11;
};

// Line 402: range 000000000CFBEB10-000000000CFBEB58
size_t __fastcall my_strnxfrm_bin(CHARSET_INFO *cs_0, uchar *dest, size_t dstlen, const uchar *src, size_t srclen)
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
    memset(&v5[srclen], 0, v7 - srclen);
  return v7;
};

// Line 415: range 000000000CFBEAC0-000000000CFBEB0B
size_t __fastcall my_strnxfrm_8bit_bin(CHARSET_INFO *cs_0, uchar *dest, size_t dstlen, const uchar *src, size_t srclen)
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

// Line 481: range 000000000CFBE9A0-000000000CFBEAB2
uint __fastcall my_instr_bin(
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
  const char *v9; // rbp
  const char *i; // rdi
  const char *v11; // r10
  __int64 v12; // rax
  char v13; // dl
  uint v14; // eax

  result = 0;
  if ( s_length <= b_length )
  {
    if ( s_length )
    {
      v8 = b_length + 1 - s_length;
      v9 = &b[v8];
      if ( b != &b[v8] )
      {
        for ( i = b; ; ++i )
        {
          v11 = i + 1;
          if ( *i == *s )
          {
            if ( &s[s_length] == s + 1 )
              goto LABEL_13;
            if ( *v11 == s[1] )
              break;
          }
LABEL_5:
          if ( v9 == v11 )
            return 0;
        }
        v12 = 0LL;
        while ( v12 != s_length - 2 )
        {
          v13 = i[v12++ + 2];
          if ( v13 != s[v12 + 1] )
            goto LABEL_5;
        }
LABEL_13:
        if ( nmatch )
        {
          match->beg = 0;
          v14 = (_DWORD)i - (_DWORD)b;
          match->end = (_DWORD)i - (_DWORD)b;
          match->mb_len = (_DWORD)i - (_DWORD)b;
          if ( nmatch > 1 )
          {
            match[1].beg = v14;
            match[1].mb_len = s_length;
            match[1].end = s_length + v14;
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
