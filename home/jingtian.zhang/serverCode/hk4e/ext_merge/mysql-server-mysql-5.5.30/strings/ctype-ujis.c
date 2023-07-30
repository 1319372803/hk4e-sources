// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-ujis.c

// Line 190: range 000000000CFCC250-000000000CFCC2F8
uint __fastcall ismbchar_ujis(CHARSET_INFO *cs_0, const char *p, const char *e)
{
  int v3; // ecx
  uint result; // eax

  v3 = *(unsigned __int8 *)p;
  result = 0;
  if ( (v3 & 0x80u) != 0 )
  {
    if ( (unsigned int)(v3 - 161) > 0x5D
      || e - p <= 1
      || (result = 2, (unsigned int)*((unsigned __int8 *)p + 1) - 161 > 0x5D) )
    {
      if ( v3 == 142 )
      {
        result = 0;
        if ( e - p > 1 )
          return (unsigned int)*((unsigned __int8 *)p + 1) - 161 < 0x3F ? 2 : 0;
      }
      else
      {
        result = 0;
        if ( v3 == 143 && e - p > 2 && (unsigned int)*((unsigned __int8 *)p + 1) - 161 <= 0x5D )
          return (unsigned int)*((unsigned __int8 *)p + 2) - 161 < 0x5E ? 3 : 0;
      }
    }
  }
  return result;
};

// Line 199: range 000000000CFCC300-000000000CFCC337
uint __fastcall mbcharlen_ujis(CHARSET_INFO *cs_0, uint c)
{
  uint result; // eax

  result = 2;
  if ( (unsigned int)(unsigned __int8)c - 161 > 0x5D && (unsigned __int8)c != 142 )
    return 2 * ((unsigned __int8)c == 143) + 1;
  return result;
};

// Line 218: range 000000000CFCC340-000000000CFCC3E6
size_t __fastcall my_well_formed_len_ujis(CHARSET_INFO *cs_0, const char *beg, const char *end, size_t pos, int *error)
{
  const char *v5; // rax
  unsigned int v6; // edi
  const char *v7; // r9

  *error = 0;
  if ( beg >= end || !pos )
    return 0LL;
  v5 = beg;
  do
  {
    v6 = *(unsigned __int8 *)v5;
    if ( v6 > 0x7F )
    {
      v7 = v5 + 1;
      if ( end <= v5 + 1 )
        goto LABEL_14;
      if ( v6 == 142 )
      {
        if ( (unsigned __int8)(v5[1] + 96) > 0x3Fu )
          goto LABEL_14;
      }
      else if ( v6 == 143 && (v7 = v5 + 2, v6 = *((unsigned __int8 *)v5 + 1), end <= v5 + 2)
             || v6 - 161 > 0x5D
             || (unsigned __int8)(*v7 + 95) > 0x5Du )
      {
LABEL_14:
        *error = 1;
        return v5 - beg;
      }
      v5 = v7;
    }
    ++v5;
    --pos;
  }
  while ( end > v5 && pos );
  return v5 - beg;
};

// Line 269: range 000000000CFCC3F0-000000000CFCC44A
size_t __fastcall my_numcells_eucjp(CHARSET_INFO *cs_0, const char *str, const char *str_end)
{
  size_t result; // rax
  char v4; // cl

  result = 0LL;
  while ( str_end > str )
  {
    while ( 1 )
    {
      v4 = *str;
      if ( *str != -114 )
        break;
      str += 2;
      ++result;
      if ( str_end <= str )
        return result;
    }
    if ( v4 == -113 )
    {
      result += 2LL;
      str += 3;
    }
    else if ( v4 < 0 )
    {
      result += 2LL;
      str += 2;
    }
    else
    {
      ++result;
      ++str;
    }
  }
  return result;
};

// Line 65887: range 000000000CFCC450-000000000CFCC575
int __fastcall my_mb_wc_euc_jp(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rdi
  ulong v5; // rcx
  int result; // eax
  ulong v7; // rcx
  __int64 v8; // rax

  if ( s >= e )
    return -101;
  v4 = *s;
  if ( (unsigned __int8)v4 <= 0x7Fu )
  {
    *pwc = v4;
    return 1;
  }
  if ( (unsigned int)(unsigned __int8)v4 - 161 > 0x5D )
  {
    if ( (unsigned __int8)v4 == 142 )
    {
      if ( e < s + 2 )
        return -102;
      v8 = s[1];
      if ( (unsigned __int8)(v8 + 95) <= 0x3Eu )
      {
        *pwc = v8 + 65216;
        return 2;
      }
    }
    else if ( (unsigned __int8)v4 == 143 )
    {
      if ( e < s + 3 )
        return -103;
      v7 = jisx0212_eucjp_to_unicode[256 * s[1] + s[2]];
      result = 3;
      *pwc = v7;
      if ( !v7 )
      {
        if ( (unsigned __int8)(s[1] + 95) > 0x5Du || (unsigned __int8)(s[2] + 95) > 0x5Du )
          return 0;
        return -3;
      }
      return result;
    }
    return 0;
  }
  if ( e < s + 2 )
    return -102;
  v5 = jisx0208_eucjp_to_unicode[256 * (unsigned __int8)v4 + s[1]];
  result = 2;
  *pwc = v5;
  if ( !v5 )
  {
    result = -2;
    if ( (unsigned __int8)(s[1] + 95) > 0x5Du )
      return 0;
  }
  return result;
};

// Line 65947: range 000000000CFCC580-000000000CFCC65B
int __fastcall my_wc_mb_euc_jp(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  int result; // eax
  uint16 v5; // di
  uint16 v6; // di

  if ( (int)wc <= 127 )
  {
    if ( s >= e )
      return -101;
    *s = wc;
    return 1;
  }
  result = 0;
  if ( wc > 0xFFFF )
    return result;
  v5 = unicode_to_jisx0208_eucjp[wc];
  if ( v5 )
  {
    if ( e >= s + 2 )
    {
      s[1] = v5;
      result = 2;
      *s = HIBYTE(v5);
      return result;
    }
    return -102;
  }
  v6 = unicode_to_jisx0212_eucjp[wc];
  if ( !v6 )
  {
    if ( wc - 65377 > 0x3E )
      return result;
    if ( e >= s + 2 )
    {
      *s = -114;
      result = 2;
      s[1] = wc + 64;
      return result;
    }
    return -102;
  }
  if ( e < s + 3 )
    return -103;
  *s = -113;
  s[2] = v6;
  s[1] = HIBYTE(v6);
  return 3;
};

// Line 67172: range 000000000CFCC660-000000000CFCC7F0
size_t __fastcall my_casefold_ujis(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen, uchar *map)
{
  const char *v6; // r12
  char *v7; // rbx
  char *v10; // rbp
  MY_UNICASE_INFO *v11; // rdx
  MY_UNICASE_INFO *v12; // rdx
  int toupper; // edx
  char *v14; // rcx
  char *v15; // rax
  uint v16; // eax
  __int64 v17; // rax
  char v19; // dl
  MY_UNICASE_INFO *v20; // rcx
  char v21; // al
  char v22; // al

  v6 = &src[srclen];
  v7 = src;
  if ( src < &src[srclen] )
  {
    v10 = dst;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = cs_0->cset->ismbchar(cs_0, v7, v6);
        if ( v16 )
          break;
        v17 = (unsigned __int8)*v7++;
        *v10++ = *(_BYTE *)(dstlen + v17);
        if ( v6 <= v7 )
          return v10 - dst;
      }
      if ( v16 == 2LL )
      {
        v19 = *v7;
        v20 = cs_0->caseinfo[(unsigned __int8)*v7];
        if ( !v20 )
          goto LABEL_24;
        v12 = &v20[(unsigned __int8)v7[1]];
      }
      else
      {
        v11 = cs_0->caseinfo[(unsigned __int8)v7[1] + 256];
        if ( !v11 )
          goto LABEL_21;
        v12 = &v11[(unsigned __int8)v7[2]];
      }
      if ( !v12 )
      {
LABEL_21:
        if ( v16 == 3LL )
        {
          v21 = *v7;
          ++v10;
          ++v7;
          *(v10 - 1) = v21;
        }
        v19 = *v7;
LABEL_24:
        *v10 = v19;
        v22 = v7[1];
        v10 += 2;
        v7 += 2;
        *(v10 - 1) = v22;
        goto LABEL_12;
      }
      if ( map )
      {
        toupper = v12->toupper;
        v7 += v16;
        if ( toupper > 0xFFFF )
          goto LABEL_9;
      }
      else
      {
        toupper = v12->tolower;
        v7 += v16;
        if ( toupper > 0xFFFF )
        {
LABEL_9:
          v14 = v10 + 1;
          *v10 = BYTE2(toupper);
          goto LABEL_10;
        }
      }
      if ( toupper <= 255 )
      {
        v15 = v10;
        goto LABEL_11;
      }
      v14 = v10;
LABEL_10:
      v15 = v14 + 1;
      *v14 = BYTE1(toupper);
LABEL_11:
      v10 = v15 + 1;
      *v15 = toupper;
LABEL_12:
      if ( v6 <= v7 )
        return v10 - dst;
    }
  }
  return 0LL;
};

// Line 67225: range 000000000CFCC800-000000000CFCC807
size_t __fastcall my_casedn_ujis(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  return my_casefold_ujis(cs_0, src, srclen, dst, (size_t)cs_0->to_lower, 0LL);
};

// Line 67238: range 000000000CFCC810-000000000CFCC81A
size_t __fastcall my_caseup_ujis(CHARSET_INFO *cs_0, char *src, size_t srclen, char *dst, size_t dstlen)
{
  return my_casefold_ujis(cs_0, src, srclen, dst, (size_t)cs_0->to_upper, (uchar *)1);
};
