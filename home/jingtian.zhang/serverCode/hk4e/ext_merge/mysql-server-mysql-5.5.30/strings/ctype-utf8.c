// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-utf8.c

// Line 1930: range 000000000CFAEBD0-000000000CFAF004
int __fastcall my_wildcmp_unicode(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many,
        MY_UNICASE_INFO **weights)
{
  const char *v10; // rbp
  const char *v11; // rbx
  my_charset_conv_mb_wc mb_wc; // r14
  int i; // eax
  MY_UNICASE_INFO *v14; // rdx
  ulong v15; // rdx
  MY_UNICASE_INFO *v16; // rdx
  ulong sort; // rax
  char v18; // r15
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  ulong *p_s_wc; // r8
  int v23; // eax
  int v24; // eax
  int v25; // eax
  const char *v26; // rbx
  const char *v27; // r15
  int j; // eax
  MY_UNICASE_INFO *v29; // rdx
  ulong v30; // rdx
  MY_UNICASE_INFO *v31; // rcx
  int v32; // eax
  __int64 v35; // [rsp+30h] [rbp-68h]
  ulong *v36; // [rsp+30h] [rbp-68h]
  ulong s_wc; // [rsp+50h] [rbp-48h] BYREF
  ulong w_wc[8]; // [rsp+58h] [rbp-40h] BYREF

  v10 = str;
  v11 = wildstr;
  mb_wc = cs_0->cset->mb_wc;
  if ( wildstr == wildend )
    return str != str_end;
  v35 = escape;
  for ( i = mb_wc(cs_0, w_wc, (const uchar *)wildstr, (const uchar *)wildend);
        ;
        i = mb_wc(cs_0, w_wc, (const uchar *)v11, (const uchar *)wildend) )
  {
    if ( i <= 0 )
      goto LABEL_22;
    if ( w_many == w_wc[0] )
      break;
    v18 = 0;
    v11 += i;
    if ( w_wc[0] == v35 && wildend > v11 )
    {
      v21 = mb_wc(cs_0, w_wc, (const uchar *)v11, (const uchar *)wildend);
      if ( v21 <= 0 )
        goto LABEL_22;
      v18 = 1;
      v11 += v21;
    }
    v19 = mb_wc(cs_0, &s_wc, (const uchar *)v10, (const uchar *)str_end);
    if ( v19 <= 0 )
      goto LABEL_22;
    v10 += v19;
    sort = w_wc[0];
    if ( v18 || w_one != w_wc[0] )
    {
      if ( !weights )
        goto LABEL_8;
      if ( (int)(s_wc >> 8) <= 255 )
      {
        v14 = weights[(int)(s_wc >> 8)];
        if ( v14 )
          s_wc = v14[(unsigned __int8)s_wc].sort;
        v15 = w_wc[0] >> 8;
        if ( (int)(w_wc[0] >> 8) <= 255 )
        {
LABEL_6:
          v16 = weights[(int)v15];
          if ( v16 )
          {
            sort = v16[LOBYTE(w_wc[0])].sort;
            w_wc[0] = sort;
          }
LABEL_8:
          if ( s_wc != sort )
            goto LABEL_22;
          goto LABEL_9;
        }
      }
      else
      {
        s_wc = 65533LL;
        v15 = w_wc[0] >> 8;
        if ( (int)(w_wc[0] >> 8) <= 255 )
          goto LABEL_6;
      }
      w_wc[0] = 65533LL;
      if ( s_wc != 65533 )
        goto LABEL_22;
    }
LABEL_9:
    if ( v11 == wildend )
      return str_end != v10;
  }
  p_s_wc = &s_wc;
  if ( v11 != wildend )
  {
    while ( 1 )
    {
      v36 = p_s_wc;
      v23 = mb_wc(cs_0, w_wc, (const uchar *)v11, (const uchar *)wildend);
      if ( v23 <= 0 )
        break;
      p_s_wc = v36;
      if ( w_many == w_wc[0] )
      {
        v11 += v23;
      }
      else
      {
        if ( w_wc[0] != w_one )
        {
          if ( wildend == v11 )
            goto LABEL_32;
          if ( str_end == v10 )
          {
LABEL_55:
            LODWORD(v20) = -1;
            return v20;
          }
          v25 = ((__int64 (__fastcall *)(CHARSET_INFO *, ulong *, const char *, const char *, ulong *))mb_wc)(
                  cs_0,
                  w_wc,
                  v11,
                  wildend,
                  v36);
          if ( v25 <= 0 )
            break;
          v26 = &v11[v25];
          if ( escape == w_wc[0] && wildend > v26 )
          {
            v32 = mb_wc(cs_0, w_wc, (const uchar *)v26, (const uchar *)wildend);
            if ( v32 <= 0 )
              break;
            v26 += v32;
          }
          v27 = v10;
          for ( j = mb_wc(cs_0, &s_wc, (const uchar *)v10, (const uchar *)str_end);
                j > 0;
                j = mb_wc(cs_0, &s_wc, (const uchar *)v27, (const uchar *)str_end) )
          {
            v30 = w_wc[0];
            if ( weights )
            {
              if ( (int)(s_wc >> 8) <= 255 )
              {
                v29 = weights[(int)(s_wc >> 8)];
                if ( v29 )
                  s_wc = v29[(unsigned __int8)s_wc].sort;
              }
              else
              {
                s_wc = 65533LL;
              }
              v30 = w_wc[0];
              if ( (int)(w_wc[0] >> 8) > 255 )
              {
                w_wc[0] = 65533LL;
                v30 = 65533LL;
              }
              else
              {
                v31 = weights[(int)(w_wc[0] >> 8)];
                if ( v31 )
                {
                  v30 = v31[LOBYTE(w_wc[0])].sort;
                  w_wc[0] = v30;
                }
              }
            }
            if ( s_wc == v30 )
            {
              if ( v27 == str_end )
                goto LABEL_55;
              v27 += j;
              LODWORD(v20) = my_wildcmp_unicode(cs_0, v27, str_end, v26, wildend, escape, w_one, w_many, weights);
              if ( (int)v20 <= 0 )
                return v20;
            }
            else
            {
              v27 += j;
            }
            if ( str_end == v27 )
              goto LABEL_55;
          }
          break;
        }
        v11 += v23;
        v24 = mb_wc(cs_0, v36, (const uchar *)v10, (const uchar *)str_end);
        if ( v24 <= 0 )
          break;
        p_s_wc = v36;
        v10 += v24;
      }
      if ( wildend == v11 )
        goto LABEL_32;
    }
LABEL_22:
    LODWORD(v20) = 1;
    return v20;
  }
LABEL_32:
  LODWORD(v20) = 0;
  return v20;
};

// Line 2084: range 000000000CFACAE0-000000000CFACC32
size_t __fastcall my_strnxfrm_unicode(CHARSET_INFO *cs_0, uchar *dst, size_t dstlen, const uchar *src, size_t srclen)
{
  uchar *v5; // r15
  const uchar *v6; // r13
  uchar *v7; // r12
  MY_UNICASE_INFO **caseinfo; // rbp
  uchar *v9; // rbx
  int i; // eax
  MY_UNICASE_INFO *v11; // rcx
  ulong sort; // rdx
  ulong v13; // rax
  char v14; // cl
  uchar *v15; // rax
  uchar *v16; // rdx
  bool v17; // cc
  const uchar *se; // [rsp+8h] [rbp-60h]
  ulong wc[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = dst;
  v6 = src;
  v7 = &dst[dstlen];
  caseinfo = 0LL;
  v9 = &dst[dstlen - 1];
  se = &src[srclen];
  if ( (cs_0->state & 0x10) == 0 )
    caseinfo = cs_0->caseinfo;
  if ( dst >= v9 )
    goto LABEL_23;
  for ( i = cs_0->cset->mb_wc(cs_0, wc, src, se); i > 0; i = cs_0->cset->mb_wc(cs_0, wc, v6, se) )
  {
    LOBYTE(sort) = wc[0];
    v6 += i;
    v13 = wc[0] >> 8;
    if ( !caseinfo )
      goto LABEL_7;
    if ( (int)v13 <= 255 )
    {
      v11 = caseinfo[(int)v13];
      if ( v11 )
      {
        sort = v11[LOBYTE(wc[0])].sort;
        wc[0] = sort;
        v13 = sort >> 8;
LABEL_7:
        v14 = v13;
        goto LABEL_8;
      }
      v14 = BYTE1(wc[0]);
    }
    else
    {
      wc[0] = 65533LL;
      v14 = -1;
      LOBYTE(sort) = -3;
    }
LABEL_8:
    v15 = v5 + 1;
    *v5 = v14;
    if ( v7 > v5 + 1 )
    {
      v15 = v5 + 2;
      v5[1] = sort;
    }
    if ( v9 <= v15 )
      goto LABEL_19;
    v5 = v15;
  }
  v16 = v5;
  if ( v9 > v5 )
  {
    do
    {
      *v5 = 0;
      v17 = v9 <= v5 + 2;
      v5 += 2;
      *(v5 - 1) = 32;
    }
    while ( !v17 );
    v15 = &v16[2 * ((unsigned __int64)(v7 - 2 - v16) >> 1) + 2];
    goto LABEL_19;
  }
LABEL_23:
  v15 = v5;
LABEL_19:
  if ( v7 > v15 )
    *v15 = 0;
  return dstlen;
};

// Line 2130: range 000000000CFACC40-000000000CFACD10
size_t __fastcall my_strnxfrm_unicode_full_bin(
        CHARSET_INFO *cs_0,
        uchar *dst,
        size_t dstlen,
        const uchar *src,
        size_t srclen)
{
  const uchar *v5; // r14
  const uchar *v6; // r12
  uchar *v7; // rbp
  uchar *v8; // rbx
  __int16 v9; // ax
  int v10; // eax
  uchar *de; // [rsp+0h] [rbp-58h]
  ulong wc; // [rsp+18h] [rbp-40h] BYREF

  v5 = src;
  v6 = &src[srclen];
  v7 = &dst[dstlen - 2];
  v8 = dst;
  de = &dst[dstlen];
  if ( dst < v7 )
  {
    while ( 1 )
    {
      v10 = cs_0->cset->mb_wc(cs_0, &wc, v5, v6);
      if ( v10 <= 0 )
        break;
      v8 += 3;
      v5 += v10;
      v9 = wc;
      *(v8 - 3) = BYTE2(wc);
      *(v8 - 2) = HIBYTE(v9);
      *(v8 - 1) = v9;
      if ( v7 <= v8 )
        goto LABEL_7;
    }
    for ( ; v7 > v8; *(v8 - 1) = 32 )
    {
      *v8 = 0;
      v8[1] = 0;
      v8 += 3;
    }
  }
LABEL_7:
  if ( de > v8 )
  {
    *v8 = 0;
    if ( de > v8 + 1 )
      v8[1] = 0;
  }
  return dstlen;
};

// Line 2173: range 000000000CFACD20-000000000CFACD33
size_t __fastcall my_strnxfrmlen_unicode_full_bin(CHARSET_INFO *cs_0, size_t len)
{
  return 3 * ((len + 3) / cs_0->mbmaxlen);
};

// Line 2261: range 000000000CFACD40-000000000CFACE13
int __fastcall my_utf8_uni(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rdi
  int result; // eax
  unsigned __int8 v6; // dl
  uchar v7; // r8
  unsigned __int8 v8; // dl

  if ( s >= e )
    return -101;
  v4 = *s;
  if ( (v4 & 0x80u) != 0LL )
  {
    result = 0;
    if ( (unsigned __int8)v4 > 0xC1u )
    {
      if ( (unsigned __int8)v4 > 0xDFu )
      {
        if ( (unsigned __int8)v4 <= 0xEFu )
        {
          if ( e < s + 3 )
          {
            return -103;
          }
          else
          {
            v7 = s[1];
            if ( (unsigned __int8)(v7 + 0x80) <= 0x3Fu )
            {
              v8 = s[2] + 0x80;
              if ( v8 <= 0x3Fu && ((_BYTE)v4 != 0xE0 || v7 > 0x9Fu) )
              {
                result = 3;
                *pwc = v8 | ((unsigned __int64)(unsigned __int8)(v7 + 0x80) << 6) | (unsigned __int16)((_WORD)v4 << 12);
              }
            }
          }
        }
      }
      else if ( e < s + 2 )
      {
        return -102;
      }
      else
      {
        v6 = s[1] + 0x80;
        if ( v6 <= 0x3Fu )
        {
          LOBYTE(result) = 2;
          *pwc = v6 | ((v4 & 0x1F) << 6);
        }
      }
    }
  }
  else
  {
    *pwc = v4;
    return 1;
  }
  return result;
};

// Line 2371: range 000000000CFAE2C0-000000000CFAE358
char __fastcall my_utf8_uni_no_range(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s)
{
  __int64 v3; // rdx
  char result; // al
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // si

  v3 = *(unsigned __int8 *)pwc;
  if ( (v3 & 0x80u) != 0LL )
  {
    result = 0;
    if ( (unsigned __int8)v3 > 0xC1u )
    {
      if ( (unsigned __int8)v3 > 0xDFu )
      {
        if ( (unsigned __int8)v3 <= 0xEFu )
        {
          v5 = *((_BYTE *)pwc + 1);
          if ( (unsigned __int8)(v5 + 0x80) <= 0x3Fu )
          {
            v6 = *((_BYTE *)pwc + 2) + 0x80;
            if ( v6 <= 0x3Fu && ((_BYTE)v3 != 0xE0 || v5 > 0x9Fu) )
            {
              result = 3;
              *(_QWORD *)&cs_0->number = v6 | ((unsigned __int64)(unsigned __int8)(v5 + 0x80) << 6) | (unsigned __int16)((_WORD)v3 << 12);
            }
          }
        }
      }
      else if ( (unsigned __int8)(*((_BYTE *)pwc + 1) + 0x80) <= 0x3Fu )
      {
        result = 2;
        *(_QWORD *)&cs_0->number = (unsigned __int8)(*((_BYTE *)pwc + 1) + 0x80) | ((unsigned __int64)(v3 & 0x1F) << 6);
      }
    }
  }
  else
  {
    *(_QWORD *)&cs_0->number = v3;
    return 1;
  }
  return result;
};

// Line 2412: range 000000000CFACE20-000000000CFACED7
int __fastcall my_uni_utf8(CHARSET_INFO *cs_0, ulong wc, uchar *r, uchar *e)
{
  int result; // eax
  char v5; // al
  int v6; // edx

  if ( r >= e )
    return -101;
  if ( wc <= 0x7F )
  {
    if ( e >= r + 1 )
    {
      result = 1;
      *r = wc;
      return result;
    }
    v6 = 1;
    return -100 - v6;
  }
  if ( wc > 0x7FF )
  {
    if ( wc > 0xFFFF )
      return 0;
    if ( e >= r + 3 )
    {
      v5 = wc;
      wc = (wc >> 6) | 0x800;
      r[2] = v5 & 0x3F | 0x80;
      result = 3;
      goto LABEL_11;
    }
    v6 = 3;
  }
  else
  {
    if ( e >= r + 2 )
    {
      result = 2;
LABEL_11:
      *r = (wc >> 6) | 0xC0;
      r[1] = wc & 0x3F | 0x80;
      return result;
    }
    v6 = 2;
  }
  return -100 - v6;
};

// Line 2461: range 000000000CFAE360-000000000CFAE3D2
__int64 __fastcall my_uni_utf8_no_range(unsigned __int64 cs_0, _BYTE *wc, uchar *r)
{
  __int64 result; // rax
  char v4; // al

  if ( cs_0 <= 0x7F )
  {
    result = 1LL;
    *wc = cs_0;
  }
  else
  {
    if ( cs_0 <= 0x7FF )
    {
      result = 2LL;
LABEL_4:
      *wc = (cs_0 >> 6) | 0xC0;
      wc[1] = cs_0 & 0x3F | 0x80;
      return result;
    }
    if ( cs_0 <= 0xFFFF )
    {
      v4 = cs_0;
      cs_0 = (cs_0 >> 6) | 0x800;
      wc[2] = v4 & 0x3F | 0x80;
      result = 3LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  return result;
};

// Line 2483: range 000000000CFACEE0-000000000CFACFA1
size_t __fastcall my_caseup_utf8(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  const uchar *v5; // r13
  char *v6; // rbx
  MY_UNICASE_INFO **caseinfo; // r15
  char *v8; // rbp
  int i; // eax
  ulong v10; // rsi
  int v11; // eax
  int v12; // r14d
  MY_UNICASE_INFO *v13; // rdx
  char *dstend; // [rsp+8h] [rbp-50h]
  ulong wc[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (const uchar *)&src[srclen];
  v6 = src;
  caseinfo = cs_0->caseinfo;
  dstend = &dst[dstlen];
  if ( src >= &src[srclen] )
    return 0LL;
  v8 = dst;
  for ( i = my_utf8_uni(cs_0, wc, (const uchar *)src, v5); ; i = my_utf8_uni(cs_0, wc, (const uchar *)v6, v5) )
  {
    v12 = i;
    if ( i <= 0 )
      break;
    v13 = caseinfo[BYTE1(wc[0])];
    v10 = v13 ? v13[LOBYTE(wc[0])].toupper : wc[0];
    wc[0] = v10;
    v11 = my_uni_utf8(cs_0, v10, (uchar *)v8, (uchar *)dstend);
    if ( v11 <= 0 )
      break;
    v6 += v12;
    v8 += v11;
    if ( v5 <= (const uchar *)v6 )
      break;
  }
  return v8 - dst;
};

// Line 2506: range 000000000CFACFB0-000000000CFAD0BF
void __fastcall my_hash_sort_utf8(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  const uchar *v5; // rbp
  const uchar *v6; // rbx
  MY_UNICASE_INFO **caseinfo; // r14
  int i; // eax
  ulong sort; // rcx
  ulong v12; // r8
  MY_UNICASE_INFO *v13; // rdx
  ulong v14; // rsi
  ulong v15; // rdx
  ulong wc[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = s;
  v6 = &s[slen];
  caseinfo = cs_0->caseinfo;
  if ( s < &s[slen] )
  {
    while ( *(v6 - 1) == 32 )
    {
      if ( --v6 == s )
        return;
    }
    for ( i = my_utf8_uni(cs_0, wc, s, v6); i > 0; i = my_utf8_uni(cs_0, wc, v5, v6) )
    {
      sort = wc[0];
      v12 = wc[0] >> 8;
      v13 = caseinfo[BYTE1(wc[0])];
      if ( v13 )
      {
        sort = v13[LOBYTE(wc[0])].sort;
        v12 = sort >> 8;
      }
      v14 = *n1;
      wc[0] = sort;
      v5 += i;
      *n1 = v14 ^ ((v14 << 8) + (*n2 + (v14 & 0x3F)) * (unsigned __int8)sort);
      v15 = *n2 + 3;
      *n2 = v15;
      *n1 ^= (*n1 << 8) + v12 * ((*n1 & 0x3F) + v15);
      *n2 += 3LL;
      if ( v6 <= v5 )
        break;
    }
  }
};

// Line 2533: range 000000000CFAE3E0-000000000CFAE483
size_t __fastcall my_caseup_str_utf8(CHARSET_INFO *cs_0, char *src)
{
  const uchar *v2; // rdx
  char *v3; // rbp
  MY_UNICASE_INFO **caseinfo; // r14
  char *v5; // rbx
  ulong v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // r12
  uchar *v10; // rdx
  size_t result; // rax
  ulong wc; // [rsp+8h] [rbp-38h] BYREF

  v3 = src;
  caseinfo = cs_0->caseinfo;
  if ( *src )
  {
    v5 = src;
    do
    {
      LOBYTE(v8) = my_utf8_uni_no_range((CHARSET_INFO *)&wc, (ulong *)v5, v2);
      v9 = v8;
      if ( v8 <= 0 )
        break;
      v10 = (uchar *)caseinfo[BYTE1(wc)];
      v6 = v10 ? *(unsigned int *)&v10[12 * (unsigned __int8)wc] : wc;
      wc = v6;
      v7 = my_uni_utf8_no_range(v6, v3, v10);
      if ( v7 <= 0 )
        break;
      v5 += v9;
      v3 += v7;
    }
    while ( *v5 );
    result = v3 - src;
  }
  else
  {
    result = 0LL;
  }
  *v3 = 0;
  return result;
};

// Line 2557: range 000000000CFAD0C0-000000000CFAD181
size_t __fastcall my_casedn_utf8(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  const uchar *v5; // r13
  char *v6; // rbx
  MY_UNICASE_INFO **caseinfo; // r15
  char *v8; // rbp
  int i; // eax
  ulong v10; // rsi
  int v11; // eax
  int v12; // r14d
  MY_UNICASE_INFO *v13; // rdx
  char *dstend; // [rsp+8h] [rbp-50h]
  ulong wc[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (const uchar *)&src[srclen];
  v6 = src;
  caseinfo = cs_0->caseinfo;
  dstend = &dst[dstlen];
  if ( src >= &src[srclen] )
    return 0LL;
  v8 = dst;
  for ( i = my_utf8_uni(cs_0, wc, (const uchar *)src, v5); ; i = my_utf8_uni(cs_0, wc, (const uchar *)v6, v5) )
  {
    v12 = i;
    if ( i <= 0 )
      break;
    v13 = caseinfo[BYTE1(wc[0])];
    v10 = v13 ? v13[LOBYTE(wc[0])].tolower : wc[0];
    wc[0] = v10;
    v11 = my_uni_utf8(cs_0, v10, (uchar *)v8, (uchar *)dstend);
    if ( v11 <= 0 )
      break;
    v6 += v12;
    v8 += v11;
    if ( v5 <= (const uchar *)v6 )
      break;
  }
  return v8 - dst;
};

// Line 2579: range 000000000CFAE490-000000000CFAE533
size_t __fastcall my_casedn_str_utf8(CHARSET_INFO *cs_0, char *src)
{
  const uchar *v2; // rdx
  char *v3; // rbp
  MY_UNICASE_INFO **caseinfo; // r14
  char *v5; // rbx
  ulong v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // r12
  uchar *v10; // rdx
  size_t result; // rax
  ulong wc; // [rsp+8h] [rbp-38h] BYREF

  v3 = src;
  caseinfo = cs_0->caseinfo;
  if ( *src )
  {
    v5 = src;
    do
    {
      LOBYTE(v8) = my_utf8_uni_no_range((CHARSET_INFO *)&wc, (ulong *)v5, v2);
      v9 = v8;
      if ( v8 <= 0 )
        break;
      v10 = (uchar *)caseinfo[BYTE1(wc)];
      v6 = v10 ? *(unsigned int *)&v10[12 * (unsigned __int8)wc + 4] : wc;
      wc = v6;
      v7 = my_uni_utf8_no_range(v6, v3, v10);
      if ( v7 <= 0 )
        break;
      v5 += v9;
      v3 += v7;
    }
    while ( *v5 );
    result = v3 - src;
  }
  else
  {
    result = 0LL;
  }
  *v3 = 0;
  return result;
};

// Line 2621: range 000000000CFADCF0-000000000CFADE7E
int __fastcall my_strnncoll_utf8(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  const uchar *v6; // r14
  const uchar *v7; // r12
  const uchar *v8; // rbx
  MY_UNICASE_INFO **caseinfo; // r15
  int i; // eax
  ulong sort; // rax
  MY_UNICASE_INFO *v12; // rcx
  ulong v13; // rcx
  MY_UNICASE_INFO *v14; // rsi
  int v15; // r13d
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r12d
  int v19; // edx
  int result; // eax
  const uchar *se; // [rsp+0h] [rbp-68h]
  ulong s_wc; // [rsp+20h] [rbp-48h] BYREF
  ulong t_wc; // [rsp+28h] [rbp-40h] BYREF

  v6 = s;
  v7 = &t[tlen];
  v8 = t;
  caseinfo = cs_0->caseinfo;
  se = &s[slen];
  if ( s >= &s[slen] || t >= v7 )
  {
LABEL_19:
    if ( t_is_prefix )
      return (_DWORD)v8 - (_DWORD)v7;
    else
      return (_DWORD)se - (_DWORD)v6 - ((_DWORD)v7 - (_DWORD)v8);
  }
  else
  {
    for ( i = my_utf8_uni(cs_0, &s_wc, s, se); ; i = my_utf8_uni(cs_0, &s_wc, v6, se) )
    {
      v15 = i;
      v16 = my_utf8_uni(cs_0, &t_wc, v8, v7);
      v17 = v16;
      if ( v16 <= 0 || v15 <= 0 )
        break;
      sort = s_wc;
      v12 = caseinfo[BYTE1(s_wc)];
      if ( v12 )
        sort = v12[(unsigned __int8)s_wc].sort;
      v13 = t_wc;
      s_wc = sort;
      v14 = caseinfo[BYTE1(t_wc)];
      if ( v14 )
        v13 = v14[(unsigned __int8)t_wc].sort;
      t_wc = v13;
      if ( sort != v13 )
        return v13 < sort ? 1 : -1;
      v8 += v17;
      v6 += v15;
      if ( v7 <= v8 || se <= v6 )
        goto LABEL_19;
    }
    v18 = (_DWORD)v7 - (_DWORD)v8;
    v19 = (_DWORD)se - (_DWORD)v6;
    if ( v18 <= (int)se - (int)v6 )
      v19 = v18;
    result = memcmp(v6, v8, v19);
    if ( !result )
      return (_DWORD)se - (_DWORD)v6 - v18;
  }
  return result;
};

// Line 2691: range 000000000CFADB20-000000000CFADCE0
int __fastcall my_strnncollsp_utf8(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  const uchar *v6; // r14
  const uchar *v7; // rbp
  const uchar *v8; // rbx
  MY_UNICASE_INFO **caseinfo; // r15
  int i; // eax
  ulong sort; // rax
  MY_UNICASE_INFO *v12; // rcx
  ulong v13; // rcx
  MY_UNICASE_INFO *v14; // rsi
  int v15; // r13d
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ebp
  int v19; // edx
  int result; // eax
  unsigned __int64 v21; // rdx
  bool v22; // cf
  const uchar *se; // [rsp+8h] [rbp-60h]
  ulong s_wc; // [rsp+20h] [rbp-48h] BYREF
  ulong t_wc; // [rsp+28h] [rbp-40h] BYREF

  v6 = s;
  v7 = &t[tlen];
  v8 = t;
  caseinfo = cs_0->caseinfo;
  se = &s[slen];
  if ( s >= &s[slen] || t >= v7 )
  {
LABEL_19:
    v21 = v7 - v8;
    v22 = se - v6 < (unsigned __int64)(v7 - v8);
    if ( se - v6 == v7 - v8 )
      return 0;
    if ( se - v6 >= (unsigned __int64)(v7 - v8) )
      v7 = se;
    result = v22 ? -1 : 1;
    if ( se - v6 < v21 )
      v6 = v8;
    if ( v7 <= v6 )
    {
      return 0;
    }
    else
    {
      while ( *v6 == 32 )
      {
        if ( ++v6 == v7 )
          return 0;
      }
      if ( *v6 <= 0x1Fu )
        return -result;
    }
  }
  else
  {
    for ( i = my_utf8_uni(cs_0, &s_wc, s, se); ; i = my_utf8_uni(cs_0, &s_wc, v6, se) )
    {
      v15 = i;
      v16 = my_utf8_uni(cs_0, &t_wc, v8, v7);
      v17 = v16;
      if ( v16 <= 0 || v15 <= 0 )
        break;
      sort = s_wc;
      v12 = caseinfo[BYTE1(s_wc)];
      if ( v12 )
        sort = v12[(unsigned __int8)s_wc].sort;
      v13 = t_wc;
      s_wc = sort;
      v14 = caseinfo[BYTE1(t_wc)];
      if ( v14 )
        v13 = v14[(unsigned __int8)t_wc].sort;
      t_wc = v13;
      if ( sort != v13 )
        return v13 < sort ? 1 : -1;
      v8 += v17;
      v6 += v15;
      if ( v7 <= v8 || se <= v6 )
        goto LABEL_19;
    }
    v18 = (_DWORD)v7 - (_DWORD)v8;
    v19 = (_DWORD)se - (_DWORD)v6;
    if ( v18 <= (int)se - (int)v6 )
      v19 = v18;
    result = memcmp(v6, v8, v19);
    if ( !result )
      return (_DWORD)se - (_DWORD)v6 - v18;
  }
  return result;
};

// Line 2782: range 000000000CFAD980-000000000CFADB12
int __fastcall my_strcasecmp_utf8(CHARSET_INFO *cs_0, const char *s, const char *t)
{
  const uchar *v3; // r15
  const char *v4; // rbx
  __int64 v5; // rax
  MY_UNICASE_INFO **caseinfo; // r12
  __int64 v7; // rax
  int v8; // edx
  ulong v9; // rax
  int v10; // eax
  ulong tolower; // rax
  MY_UNICASE_INFO *v12; // rdx
  int v13; // eax
  MY_UNICASE_INFO *v14; // rdx
  int v16; // ecx
  ulong s_wc; // [rsp+10h] [rbp-48h] BYREF
  ulong t_wc; // [rsp+18h] [rbp-40h] BYREF

  v3 = (const uchar *)s;
  v4 = t;
  v5 = *s;
  caseinfo = cs_0->caseinfo;
  if ( !(_BYTE)v5 )
  {
LABEL_18:
    v16 = *(unsigned __int8 *)v4;
    LODWORD(v5) = 0;
    return v5 - v16;
  }
  if ( !*t )
  {
LABEL_20:
    LODWORD(v5) = (unsigned __int8)v5;
    v16 = 0;
    return v5 - v16;
  }
  while ( 1 )
  {
    if ( (v5 & 0x80u) == 0LL )
    {
      ++v3;
      s_wc = plane00[v5].tolower;
      v7 = *v4;
      if ( (v7 & 0x80u) == 0LL )
        goto LABEL_5;
    }
    else
    {
      v10 = my_utf8_uni(cs_0, &s_wc, v3, v3 + 3);
      if ( v10 <= 0 )
        return strcmp((const char *)v3, v4);
      v3 += v10;
      tolower = s_wc;
      v12 = caseinfo[BYTE1(s_wc)];
      if ( v12 )
        tolower = v12[(unsigned __int8)s_wc].tolower;
      s_wc = tolower;
      v7 = *v4;
      if ( (v7 & 0x80u) == 0LL )
      {
LABEL_5:
        v8 = s_wc;
        ++v4;
        v9 = plane00[v7].tolower;
        t_wc = v9;
        if ( s_wc != v9 )
          return v8 - v9;
        goto LABEL_6;
      }
    }
    v13 = my_utf8_uni(cs_0, &t_wc, (const uchar *)v4, (const uchar *)v4 + 3);
    if ( v13 <= 0 )
      return strcmp((const char *)v3, v4);
    v4 += v13;
    v9 = t_wc;
    v14 = caseinfo[BYTE1(t_wc)];
    if ( v14 )
      v9 = v14[(unsigned __int8)t_wc].tolower;
    v8 = s_wc;
    t_wc = v9;
    if ( s_wc != v9 )
      return v8 - v9;
LABEL_6:
    v5 = *(char *)v3;
    if ( !(_BYTE)v5 )
      goto LABEL_18;
    if ( !*v4 )
      goto LABEL_20;
  }
};

// Line 2867: range 000000000CFAF010-000000000CFAF035
int __fastcall my_wildcmp_utf8(
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

// Line 2878: range 000000000CFAD190-000000000CFAD1A8
size_t __fastcall my_strnxfrmlen_utf8(CHARSET_INFO *cs_0, size_t len)
{
  return (2 * len + 2) / 3;
};

// Line 2883: range 000000000CFAD1B0-000000000CFAD1D5
uint __fastcall my_ismbchar_utf8(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  int v3; // eax
  uint v4; // edx
  ulong wc; // [rsp+8h] [rbp-8h] BYREF

  v3 = my_utf8_uni(cs_0, &wc, (const uchar *)b, (const uchar *)e);
  v4 = 0;
  if ( v3 >= 2 )
    return v3;
  return v4;
};

// Line 2892: range 000000000CFAE540-000000000CFAE56B
uint __fastcall my_mbcharlen_utf8(CHARSET_INFO *cs_0, uint c)
{
  uint result; // eax

  result = 1;
  if ( c > 0x7F )
  {
    LOBYTE(result) = 0;
    if ( c > 0xC1 )
    {
      LOBYTE(result) = 2;
      if ( c > 0xDF )
        return c < 0xF0 ? 3 : 0;
    }
  }
  return result;
};

// Line 4365: range 000000000CFAE570-000000000CFAE6A5
int __fastcall my_mb_wc_filename(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  uchar v4; // di
  int result; // eax
  __int64 v6; // r8
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  int v10; // r8d
  int v11; // eax
  ulong v12; // rdi

  if ( s >= e )
    return -101;
  v4 = *s;
  result = 0;
  if ( *(char *)s >= 0 )
  {
    if ( filename_safe_char[v4] )
    {
      *pwc = v4;
      LOBYTE(result) = 1;
      return result;
    }
    if ( v4 == 64 )
    {
      if ( e < s + 3 )
      {
        return -103;
      }
      else
      {
        result = s[1];
        v6 = s[2];
        if ( (unsigned int)(result - 48) <= 0x4F && (unsigned int)(unsigned __int8)v6 - 48 <= 0x4F )
        {
          v7 = (unsigned __int8)v6 + 80 * (result - 48) - 48;
          if ( v7 <= 5993 )
          {
            v12 = touni[v7];
            if ( (_WORD)v12 )
            {
              *pwc = v12;
              return 3;
            }
          }
          if ( (unsigned __int8)v6 == 64 && result == 64 )
          {
            *pwc = 0LL;
            LOBYTE(result) = 3;
            return result;
          }
        }
        if ( e < s + 4 )
        {
          return -104;
        }
        else
        {
          v8 = hex_lo_digit_8424[s[1]];
          if ( v8 < 0 )
            return 0;
          v9 = hex_lo_digit_8424[v6];
          if ( v9 < 0 )
            return 0;
          v10 = hex_lo_digit_8424[s[3]];
          v11 = hex_lo_digit_8424[s[4]];
          if ( v11 < 0 || v10 < 0 )
          {
            return 0;
          }
          else
          {
            *pwc = (v8 << 12) + (v9 << 8) + 16 * v10 + v11;
            return 5;
          }
        }
      }
    }
  }
  return result;
};

// Line 4423: range 000000000CFAD1E0-000000000CFAD38B
int __fastcall my_wc_mb_filename(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  ulong v5; // rax
  int v6; // r8d
  unsigned int v7; // edx
  int result; // eax
  ulong v9; // rax
  ulong v10; // rax
  ulong v11; // rax
  ulong v12; // rax
  char hex[17]; // [rsp+0h] [rbp-28h] BYREF

  strcpy(hex, "0123456789abcdef");
  if ( s >= e )
    return -101;
  if ( wc <= 0x7F && filename_safe_char[wc] )
  {
    *s = wc;
    return 1;
  }
  else if ( e < s + 3 )
  {
    return -103;
  }
  else
  {
    v5 = wc - 192;
    *s = 64;
    if ( wc - 192 <= 0x53F )
    {
      v6 = uni_0C00_05FF[v5];
      if ( uni_0C00_05FF[v5] )
        goto LABEL_6;
    }
    v9 = wc - 7680;
    if ( wc - 7680 <= 0x1FF )
    {
      v6 = uni_1E00_1FFF[v9];
      if ( uni_1E00_1FFF[v9] )
        goto LABEL_6;
    }
    if ( (v10 = wc - 8544, wc - 8544 <= 0x1F) && (v6 = uni_2160_217F[v10]) != 0
      || (v11 = wc - 9392, wc - 9392 <= 0x3F) && (v6 = uni_24B0_24EF[v11]) != 0
      || (v12 = wc - 65312, wc - 65312 <= 0x3F) && (v6 = uni_FF20_FF5F[v12]) != 0 )
    {
LABEL_6:
      v7 = (unsigned int)((unsigned __int64)(1717986919LL * v6) >> 32) >> 5;
      s[1] = v7 + 48;
      result = 3;
      s[2] = v6 - 80 * v7 + 48;
    }
    else if ( e < s + 6 )
    {
      return -105;
    }
    else
    {
      s[1] = hex[(unsigned __int16)wc >> 12];
      s[2] = hex[(wc >> 8) & 0xF];
      s[3] = hex[(unsigned __int8)wc >> 4];
      s[4] = hex[wc & 0xF];
      return 5;
    }
  }
  return result;
};

// Line 4686: range 000000000CFAD390-000000000CFAD510
int __fastcall my_mb_wc_utf8mb4(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rdi
  int result; // eax
  unsigned __int8 v6; // dl
  uchar v7; // r8
  unsigned __int8 v8; // dl
  uchar v9; // r8
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // dl

  if ( s >= e )
    return -101;
  v4 = *s;
  if ( (v4 & 0x80u) == 0LL )
  {
    *pwc = v4;
    return 1;
  }
  result = 0;
  if ( (unsigned __int8)v4 > 0xC1u )
  {
    if ( (unsigned __int8)v4 <= 0xDFu )
    {
      if ( e < s + 2 )
        return -102;
      v6 = s[1] + 0x80;
      if ( v6 <= 0x3Fu )
      {
        LOBYTE(result) = 2;
        *pwc = v6 | ((v4 & 0x1F) << 6);
      }
      return result;
    }
    if ( (unsigned __int8)v4 > 0xEFu )
    {
      if ( (unsigned __int8)v4 <= 0xF4u )
      {
        if ( e < s + 4 )
          return -104;
        v9 = s[1];
        if ( (unsigned __int8)(v9 + 0x80) <= 0x3Fu )
        {
          v10 = s[2] + 0x80;
          if ( v10 <= 0x3Fu )
          {
            v11 = s[3] + 0x80;
            if ( v11 <= 0x3Fu )
            {
              if ( (_BYTE)v4 == 0xF0 )
              {
                result = 0;
                if ( v9 <= 0x8Fu )
                  return result;
              }
              else if ( (_BYTE)v4 == 0xF4 )
              {
                result = 0;
                if ( v9 > 0x8Fu )
                  return result;
              }
              result = 4;
              *pwc = ((unsigned __int64)v10 << 6) | v11 | ((unsigned __int64)(unsigned __int8)(v9 + 0x80) << 12) | ((v4 & 7) << 18);
            }
          }
        }
      }
    }
    else if ( e < s + 3 )
    {
      return -103;
    }
    else
    {
      v7 = s[1];
      if ( (unsigned __int8)(v7 + 0x80) <= 0x3Fu )
      {
        v8 = s[2] + 0x80;
        if ( v8 <= 0x3Fu && ((_BYTE)v4 != 0xE0 || v7 > 0x9Fu) )
        {
          result = 3;
          *pwc = v8 | ((unsigned __int64)(unsigned __int8)(v7 + 0x80) << 6) | (unsigned __int16)((_WORD)v4 << 12);
        }
      }
    }
  }
  return result;
};

// Line 4772: range 000000000CFAE6B0-000000000CFAE7E3
char __fastcall my_mb_wc_utf8mb4_no_range(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s)
{
  __int64 v3; // rdx
  char result; // al
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // si
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // si

  v3 = *(unsigned __int8 *)pwc;
  if ( (v3 & 0x80u) == 0LL )
  {
    *(_QWORD *)&cs_0->number = v3;
    return 1;
  }
  result = 0;
  if ( (unsigned __int8)v3 > 0xC1u )
  {
    if ( (unsigned __int8)v3 <= 0xDFu )
    {
      if ( (unsigned __int8)(*((_BYTE *)pwc + 1) + 0x80) <= 0x3Fu )
      {
        result = 2;
        *(_QWORD *)&cs_0->number = (unsigned __int8)(*((_BYTE *)pwc + 1) + 0x80) | ((unsigned __int64)(v3 & 0x1F) << 6);
      }
      return result;
    }
    if ( (unsigned __int8)v3 > 0xEFu )
    {
      if ( (unsigned __int8)v3 <= 0xF4u )
      {
        v5 = *((_BYTE *)pwc + 1);
        if ( (unsigned __int8)(v5 + 0x80) <= 0x3Fu )
        {
          v6 = *((_BYTE *)pwc + 2) + 0x80;
          if ( v6 <= 0x3Fu )
          {
            v7 = *((_BYTE *)pwc + 3) + 0x80;
            if ( v7 <= 0x3Fu )
            {
              if ( (_BYTE)v3 == 0xF0 )
              {
                if ( v5 <= 0x8Fu )
                  return result;
              }
              else if ( (_BYTE)v3 == 0xF4 )
              {
                result = 0;
                if ( v5 > 0x8Fu )
                  return result;
              }
              result = 4;
              *(_QWORD *)&cs_0->number = ((unsigned __int64)v6 << 6) | v7 | ((unsigned __int64)(unsigned __int8)(v5 + 0x80) << 12) | ((unsigned __int64)(v3 & 7) << 18);
            }
          }
        }
      }
    }
    else
    {
      v8 = *((_BYTE *)pwc + 1);
      if ( (unsigned __int8)(v8 + 0x80) <= 0x3Fu )
      {
        v9 = *((_BYTE *)pwc + 2) + 0x80;
        if ( v9 <= 0x3Fu && ((_BYTE)v3 != 0xE0 || v8 > 0x9Fu) )
        {
          result = 3;
          *(_QWORD *)&cs_0->number = v9 | ((unsigned __int64)(unsigned __int8)(v8 + 0x80) << 6) | (unsigned __int16)((_WORD)v3 << 12);
        }
      }
    }
  }
  return result;
};

// Line 4827: range 000000000CFAD520-000000000CFAD61E
int __fastcall my_wc_mb_utf8mb4(CHARSET_INFO *cs_0, ulong wc, uchar *r, uchar *e)
{
  int result; // eax
  char v5; // al
  char v6; // cl
  char v7; // cl
  int v8; // edx

  if ( r >= e )
    return -101;
  if ( wc <= 0x7F )
  {
    if ( e >= r + 1 )
    {
      result = 1;
LABEL_16:
      *r = wc;
      return result;
    }
    v8 = 1;
    return -100 - v8;
  }
  if ( wc > 0x7FF )
  {
    if ( wc > 0xFFFF )
    {
      if ( wc > 0x1FFFFF )
        return 0;
      if ( e < r + 4 )
      {
        v8 = 4;
        return -100 - v8;
      }
      v5 = wc;
      wc = (wc >> 6) | 0x10000;
      r[3] = v5 & 0x3F | 0x80;
      result = 4;
    }
    else
    {
      if ( e < r + 3 )
      {
        v8 = 3;
        return -100 - v8;
      }
      result = 3;
    }
    v6 = wc;
    wc = (wc >> 6) | 0x800;
    r[2] = v6 & 0x3F | 0x80;
    goto LABEL_15;
  }
  if ( e >= r + 2 )
  {
    result = 2;
LABEL_15:
    v7 = wc;
    LOBYTE(wc) = (wc >> 6) | 0xC0;
    r[1] = v7 & 0x3F | 0x80;
    goto LABEL_16;
  }
  v8 = 2;
  return -100 - v8;
};

// Line 4863: range 000000000CFAE990-000000000CFAEA22
__int64 __fastcall my_wc_mb_utf8mb4_no_range(unsigned __int64 cs_0, _BYTE *wc, uchar *r)
{
  __int64 result; // rax
  char v4; // al
  char v5; // dl

  if ( cs_0 <= 0x7F )
  {
    result = 1LL;
    *wc = cs_0;
  }
  else
  {
    if ( cs_0 <= 0x7FF )
    {
      result = 2LL;
LABEL_4:
      *wc = (cs_0 >> 6) | 0xC0;
      wc[1] = cs_0 & 0x3F | 0x80;
      return result;
    }
    if ( cs_0 <= 0xFFFF )
    {
      result = 3LL;
      goto LABEL_9;
    }
    if ( cs_0 <= 0x1FFFFF )
    {
      v4 = cs_0;
      cs_0 = (cs_0 >> 6) | 0x10000;
      wc[3] = v4 & 0x3F | 0x80;
      result = 4LL;
LABEL_9:
      v5 = cs_0;
      cs_0 = (cs_0 >> 6) | 0x800;
      wc[2] = v5 & 0x3F | 0x80;
      goto LABEL_4;
    }
    return 0LL;
  }
  return result;
};

// Line 4907: range 000000000CFAD620-000000000CFAD6E7
size_t __fastcall my_caseup_utf8mb4(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  const uchar *v5; // r13
  char *v6; // rbx
  char *v7; // rbp
  ulong toupper; // rsi
  MY_UNICASE_INFO *v9; // rax
  int v10; // eax
  int v11; // r15d
  char *dstend; // [rsp+0h] [rbp-58h]
  MY_UNICASE_INFO **uni_plane; // [rsp+8h] [rbp-50h]
  ulong wc[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (const uchar *)&src[srclen];
  v6 = src;
  dstend = &dst[dstlen];
  uni_plane = cs_0->caseinfo;
  if ( src >= &src[srclen] )
    return 0LL;
  v7 = dst;
  do
  {
    v11 = my_mb_wc_utf8mb4(cs_0, wc, (const uchar *)v6, v5);
    if ( v11 <= 0 )
      break;
    toupper = wc[0];
    if ( (int)(wc[0] >> 8) <= 255 )
    {
      v9 = uni_plane[(int)(wc[0] >> 8)];
      if ( v9 )
      {
        toupper = v9[LOBYTE(wc[0])].toupper;
        wc[0] = toupper;
      }
    }
    v10 = my_wc_mb_utf8mb4(cs_0, toupper, (uchar *)v7, (uchar *)dstend);
    if ( v10 <= 0 )
      break;
    v6 += v11;
    v7 += v10;
  }
  while ( v5 > (const uchar *)v6 );
  return v7 - dst;
};

// Line 4939: range 000000000CFAD6F0-000000000CFAD867
void __fastcall my_hash_sort_utf8mb4(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  const uchar *v5; // r15
  const uchar *v7; // rbp
  MY_UNICASE_INFO *v9; // rcx
  ulong sort; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  ulong v13; // rsi
  ulong v14; // rdx
  int v15; // eax
  MY_UNICASE_INFO **uni_plane; // [rsp+0h] [rbp-48h]
  ulong wc; // [rsp+10h] [rbp-38h] BYREF

  v5 = s;
  v7 = &s[slen];
  uni_plane = cs_0->caseinfo;
  if ( s < &s[slen] )
  {
    do
    {
      if ( *(v7 - 1) != 32 )
        break;
      --v7;
    }
    while ( v7 != s );
  }
  while ( 1 )
  {
    v15 = my_mb_wc_utf8mb4(cs_0, &wc, v5, v7);
    if ( v15 <= 0 )
      break;
    sort = wc;
    if ( (int)(wc >> 8) <= 255 )
    {
      v9 = uni_plane[(int)(wc >> 8)];
      if ( v9 )
      {
        sort = v9[(unsigned __int8)wc].sort;
        v11 = (unsigned __int8)sort;
        wc = sort;
        v12 = BYTE1(sort);
      }
      else
      {
        v11 = (unsigned __int8)wc;
        v12 = BYTE1(wc);
      }
    }
    else
    {
      wc = 65533LL;
      v12 = 255LL;
      v11 = 253LL;
      sort = 65533LL;
    }
    *n1 ^= (*n1 << 8) + (*n2 + (*n1 & 0x3F)) * v11;
    v13 = *n2 + 3;
    *n2 = v13;
    *n1 ^= (*n1 << 8) + ((*n1 & 0x3F) + v13) * v12;
    v14 = *n2 + 3;
    *n2 = v14;
    if ( sort > 0xFFFF )
    {
      *n1 ^= (*n1 << 8) + ((*n1 & 0x3F) + v14) * BYTE2(sort);
      *n2 += 3LL;
    }
    v5 += v15;
  }
};

// Line 4975: range 000000000CFAEA30-000000000CFAEAD5
size_t __fastcall my_caseup_str_utf8mb4(CHARSET_INFO *cs_0, char *src)
{
  const uchar *v2; // rdx
  char *v3; // rbp
  MY_UNICASE_INFO **caseinfo; // r14
  char *v5; // rbx
  ulong toupper; // rdi
  MY_UNICASE_INFO *v7; // rax
  uchar *v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // r12
  size_t result; // rax
  ulong wc; // [rsp+8h] [rbp-38h] BYREF

  v3 = src;
  caseinfo = cs_0->caseinfo;
  if ( *src )
  {
    v5 = src;
    do
    {
      LOBYTE(v10) = my_mb_wc_utf8mb4_no_range((CHARSET_INFO *)&wc, (ulong *)v5, v2);
      v11 = v10;
      if ( v10 <= 0 )
        break;
      toupper = wc;
      if ( (int)(wc >> 8) <= 255 )
      {
        v7 = caseinfo[(int)(wc >> 8)];
        if ( v7 )
        {
          v8 = (uchar *)(3LL * (unsigned __int8)wc);
          toupper = v7[(unsigned __int8)wc].toupper;
          wc = toupper;
        }
      }
      v9 = my_wc_mb_utf8mb4_no_range(toupper, v3, v8);
      if ( v9 <= 0 )
        break;
      v5 += v11;
      v3 += v9;
    }
    while ( *v5 );
    result = v3 - src;
  }
  else
  {
    result = 0LL;
  }
  *v3 = 0;
  return result;
};

// Line 5000: range 000000000CFAD870-000000000CFAD938
size_t __fastcall my_casedn_utf8mb4(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  const uchar *v5; // r13
  char *v6; // rbx
  char *v7; // rbp
  ulong tolower; // rsi
  MY_UNICASE_INFO *v9; // rax
  int v10; // eax
  int v11; // r15d
  char *dstend; // [rsp+0h] [rbp-58h]
  MY_UNICASE_INFO **uni_plane; // [rsp+8h] [rbp-50h]
  ulong wc[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (const uchar *)&src[srclen];
  v6 = src;
  dstend = &dst[dstlen];
  uni_plane = cs_0->caseinfo;
  if ( src >= &src[srclen] )
    return 0LL;
  v7 = dst;
  do
  {
    v11 = my_mb_wc_utf8mb4(cs_0, wc, (const uchar *)v6, v5);
    if ( v11 <= 0 )
      break;
    tolower = wc[0];
    if ( (int)(wc[0] >> 8) <= 255 )
    {
      v9 = uni_plane[(int)(wc[0] >> 8)];
      if ( v9 )
      {
        tolower = v9[LOBYTE(wc[0])].tolower;
        wc[0] = tolower;
      }
    }
    v10 = my_wc_mb_utf8mb4(cs_0, tolower, (uchar *)v7, (uchar *)dstend);
    if ( v10 <= 0 )
      break;
    v6 += v11;
    v7 += v10;
  }
  while ( v5 > (const uchar *)v6 );
  return v7 - dst;
};

// Line 5023: range 000000000CFAEAE0-000000000CFAEB86
size_t __fastcall my_casedn_str_utf8mb4(CHARSET_INFO *cs_0, char *src)
{
  const uchar *v2; // rdx
  char *v3; // rbp
  MY_UNICASE_INFO **caseinfo; // r14
  char *v5; // rbx
  ulong tolower; // rdi
  MY_UNICASE_INFO *v7; // rax
  uchar *v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // r12
  size_t result; // rax
  ulong wc; // [rsp+8h] [rbp-38h] BYREF

  v3 = src;
  caseinfo = cs_0->caseinfo;
  if ( *src )
  {
    v5 = src;
    do
    {
      LOBYTE(v10) = my_mb_wc_utf8mb4_no_range((CHARSET_INFO *)&wc, (ulong *)v5, v2);
      v11 = v10;
      if ( v10 <= 0 )
        break;
      tolower = wc;
      if ( (int)(wc >> 8) <= 255 )
      {
        v7 = caseinfo[(int)(wc >> 8)];
        if ( v7 )
        {
          v8 = (uchar *)(3LL * (unsigned __int8)wc);
          tolower = v7[(unsigned __int8)wc].tolower;
          wc = tolower;
        }
      }
      v9 = my_wc_mb_utf8mb4_no_range(tolower, v3, v8);
      if ( v9 <= 0 )
        break;
      v5 += v11;
      v3 += v9;
    }
    while ( *v5 );
    result = v3 - src;
  }
  else
  {
    result = 0LL;
  }
  *v3 = 0;
  return result;
};

// Line 5065: range 000000000CFAE0B0-000000000CFAE2BA
int __fastcall my_strnncoll_utf8mb4(
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
    for ( i = my_mb_wc_utf8mb4(cs_0, &s_wc, s, v7); ; i = my_mb_wc_utf8mb4(cs_0, &s_wc, v6, v7) )
    {
      v15 = i;
      v16 = my_mb_wc_utf8mb4(cs_0, t_wc, v9, v8);
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

// Line 5132: range 000000000CFADE80-000000000CFAE0A8
int __fastcall my_strnncollsp_utf8mb4(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  const uchar *v6; // r14
  const uchar *v7; // r13
  const uchar *v8; // rbp
  const uchar *v9; // rbx
  int i; // eax
  MY_UNICASE_INFO *v11; // rax
  ulong sort; // rsi
  ulong v13; // rcx
  MY_UNICASE_INFO *v14; // rax
  bool v15; // cf
  int v16; // r15d
  int v17; // eax
  __int64 v18; // rdx
  int result; // eax
  unsigned __int64 v20; // rdx
  bool v21; // cf
  int v22; // ebp
  int v23; // r13d
  int v24; // edx
  int v25; // r13d
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
    v20 = v8 - v9;
    v21 = v7 - v6 < (unsigned __int64)(v8 - v9);
    if ( v7 - v6 == v8 - v9 )
      return 0;
    if ( v7 - v6 >= (unsigned __int64)(v8 - v9) )
      v8 = v7;
    result = v21 ? -1 : 1;
    if ( v7 - v6 < v20 )
      v6 = v9;
    if ( v8 <= v6 )
    {
      return 0;
    }
    else
    {
      while ( *v6 == 32 )
      {
        if ( ++v6 == v8 )
          return 0;
      }
      if ( *v6 <= 0x1Fu )
        return -result;
    }
  }
  else
  {
    for ( i = my_mb_wc_utf8mb4(cs_0, &s_wc, s, v7); ; i = my_mb_wc_utf8mb4(cs_0, &s_wc, v6, v7) )
    {
      v16 = i;
      v17 = my_mb_wc_utf8mb4(cs_0, t_wc, v9, v8);
      v18 = v17;
      if ( v17 <= 0 || v16 <= 0 )
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
        t_wc[0] = 65533LL;
        v15 = sort > 0xFFFD;
        if ( sort != 65533 )
          return v15 ? 1 : -1;
      }
      else
      {
        v14 = uni_plane[(int)(t_wc[0] >> 8)];
        if ( v14 )
        {
          v13 = v14[LOBYTE(t_wc[0])].sort;
          t_wc[0] = v13;
        }
        v15 = v13 < sort;
        if ( v13 != sort )
          return v15 ? 1 : -1;
      }
      v9 += v18;
      v6 += v16;
      if ( v8 <= v9 || v7 <= v6 )
        goto LABEL_20;
    }
    v22 = (_DWORD)v8 - (_DWORD)v9;
    v23 = (_DWORD)v7 - (_DWORD)v6;
    v24 = v23;
    if ( v22 <= v23 )
      v24 = v22;
    v25 = v23 - v22;
    result = memcmp(v6, v9, v24);
    if ( !result )
      return v25;
  }
  return result;
};

// Line 5219: range 000000000CFAE7F0-000000000CFAE982
int __fastcall my_strcasecmp_utf8mb4(CHARSET_INFO *cs_0, const char *s, const char *t)
{
  ulong *v3; // rbp
  char *v4; // rbx
  __int64 v5; // rax
  MY_UNICASE_INFO **caseinfo; // r14
  __int64 v7; // rax
  ulong tolower; // rax
  int v9; // eax
  MY_UNICASE_INFO *v10; // rax
  int v11; // eax
  MY_UNICASE_INFO *v12; // rdx
  int v14; // ecx
  ulong s_wc; // [rsp+0h] [rbp-48h] BYREF
  ulong t_wc; // [rsp+8h] [rbp-40h] BYREF

  v3 = (ulong *)s;
  v4 = (char *)t;
  v5 = *s;
  caseinfo = cs_0->caseinfo;
  if ( !(_BYTE)v5 )
  {
LABEL_20:
    v14 = (unsigned __int8)*v4;
    LODWORD(v5) = 0;
    return v5 - v14;
  }
  if ( !*t )
  {
LABEL_22:
    LODWORD(v5) = (unsigned __int8)v5;
    v14 = 0;
    return v5 - v14;
  }
  while ( 1 )
  {
    if ( (v5 & 0x80u) == 0LL )
    {
      v3 = (ulong *)((char *)v3 + 1);
      s_wc = plane00[v5].tolower;
LABEL_5:
      v7 = *v4;
      if ( (v7 & 0x80u) == 0LL )
        goto LABEL_6;
      goto LABEL_15;
    }
    LOBYTE(v9) = my_mb_wc_utf8mb4_no_range((CHARSET_INFO *)&s_wc, v3, (const uchar *)t);
    if ( v9 <= 0 )
      return strcmp((const char *)v3, v4);
    t = (const char *)s_wc;
    v3 = (ulong *)((char *)v3 + v9);
    if ( (int)(s_wc >> 8) > 255 )
      goto LABEL_5;
    v10 = caseinfo[(int)(s_wc >> 8)];
    if ( !v10 )
      goto LABEL_5;
    t = (const char *)(3LL * (unsigned __int8)s_wc);
    s_wc = v10[(unsigned __int8)s_wc].tolower;
    v7 = *v4;
    if ( (v7 & 0x80u) == 0LL )
    {
LABEL_6:
      ++v4;
      tolower = plane00[v7].tolower;
      t_wc = tolower;
LABEL_7:
      t = (const char *)s_wc;
      if ( s_wc != tolower )
        return (_DWORD)t - tolower;
      goto LABEL_8;
    }
LABEL_15:
    LOBYTE(v11) = my_mb_wc_utf8mb4_no_range((CHARSET_INFO *)&t_wc, (ulong *)v4, (const uchar *)t);
    if ( v11 <= 0 )
      return strcmp((const char *)v3, v4);
    v4 += v11;
    tolower = t_wc;
    if ( (int)(t_wc >> 8) > 255 )
      goto LABEL_7;
    v12 = caseinfo[(int)(t_wc >> 8)];
    if ( !v12 )
      goto LABEL_7;
    tolower = v12[(unsigned __int8)t_wc].tolower;
    t = (const char *)s_wc;
    t_wc = tolower;
    if ( s_wc != tolower )
      return (_DWORD)t - tolower;
LABEL_8:
    v5 = *(char *)v3;
    if ( !(_BYTE)v5 )
      goto LABEL_20;
    if ( !*v4 )
      goto LABEL_22;
  }
};

// Line 5282: range 000000000CFAF040-000000000CFAF065
int __fastcall my_wildcmp_utf8mb4(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *strend,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  return my_wildcmp_unicode(cs_0, str, strend, wildstr, wildend, escape, w_one, w_many, cs_0->caseinfo);
};

// Line 5292: range 000000000CFAD940-000000000CFAD949
size_t __fastcall my_strnxfrmlen_utf8mb4(CHARSET_INFO *cs_0, size_t len)
{
  return (2 * len + 2) >> 2;
};

// Line 5298: range 000000000CFAD950-000000000CFAD975
uint __fastcall my_ismbchar_utf8mb4(CHARSET_INFO *cs_0, const char *b, const char *e)
{
  int v3; // eax
  uint v4; // edx
  ulong wc; // [rsp+8h] [rbp-8h] BYREF

  v3 = my_mb_wc_utf8mb4(cs_0, &wc, (const uchar *)b, (const uchar *)e);
  v4 = 0;
  if ( v3 >= 2 )
    return v3;
  return v4;
};

// Line 5308: range 000000000CFAEB90-000000000CFAEBC5
uint __fastcall my_mbcharlen_utf8mb4(CHARSET_INFO *cs_0, uint c)
{
  uint result; // eax

  result = 1;
  if ( c > 0x7F )
  {
    LOBYTE(result) = 0;
    if ( c > 0xC1 )
    {
      LOBYTE(result) = 2;
      if ( c > 0xDF )
      {
        LOBYTE(result) = 3;
        if ( c > 0xEF )
          return c < 0xF8 ? 4 : 0;
      }
    }
  }
  return result;
};
