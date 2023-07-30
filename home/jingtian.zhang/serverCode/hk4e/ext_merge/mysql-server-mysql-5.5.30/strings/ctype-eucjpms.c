// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-eucjpms.c

// Line 191: range 000000000CFCA9D0-000000000CFCAA78
uint __fastcall ismbchar_eucjpms(CHARSET_INFO *cs_0, const char *p, const char *e)
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

// Line 200: range 000000000CFCAA80-000000000CFCAAB7
uint __fastcall mbcharlen_eucjpms(CHARSET_INFO *cs_0, uint c)
{
  uint result; // eax

  result = 2;
  if ( (unsigned int)(unsigned __int8)c - 161 > 0x5D && (unsigned __int8)c != 142 )
    return 2 * ((unsigned __int8)c == 143) + 1;
  return result;
};

// Line 67311: range 000000000CFCAAC0-000000000CFCABE5
int __fastcall my_mb_wc_eucjpms(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
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
      v7 = jisx0212_eucjpms_to_unicode[256 * s[1] + s[2]];
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
  v5 = jisx0208_eucjpms_to_unicode[256 * (unsigned __int8)v4 + s[1]];
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

// Line 67371: range 000000000CFCAD10-000000000CFCADEB
int __fastcall my_wc_mb_eucjpms(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
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
  v5 = unicode_to_jisx0208_eucjpms[wc];
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
  v6 = unicode_to_jisx0212_eucjpms[wc];
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

// Line 67428: range 000000000CFCABF0-000000000CFCACA5
size_t __fastcall my_well_formed_len_eucjpms(
        CHARSET_INFO *cs_0,
        const char *beg,
        const char *end,
        size_t pos,
        int *error)
{
  const char *v5; // rax
  unsigned int v6; // edi
  const char *v7; // r9

  *error = 0;
  if ( beg < end && pos )
  {
    v5 = beg;
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)v5;
      if ( v6 > 0x7F )
      {
        v7 = v5 + 1;
        if ( end <= v5 + 1 )
          return (unsigned int)((_DWORD)v5 - (_DWORD)beg);
        if ( v6 == 142 )
        {
          if ( (unsigned __int8)(v5[1] + 96) > 0x3Fu )
            goto LABEL_14;
        }
        else
        {
          if ( v6 == 143 )
          {
            v7 = v5 + 2;
            v6 = *((unsigned __int8 *)v5 + 1);
            if ( end <= v5 + 2 )
            {
LABEL_14:
              *error = 1;
              return (unsigned int)((_DWORD)v5 - (_DWORD)beg);
            }
          }
          if ( v6 - 161 > 0x5D || (unsigned __int8)(*v7 + 95) > 0x5Du )
          {
            *error = 1;
            return v5 - beg;
          }
        }
        v5 = v7;
      }
      ++v5;
      --pos;
      if ( end <= v5 || !pos )
        return v5 - beg;
    }
  }
  return 0LL;
};

// Line 67476: range 000000000CFCACB0-000000000CFCAD0A
size_t __fastcall my_numcells_eucjpms(CHARSET_INFO *cs_0, const char *str, const char *str_end)
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
