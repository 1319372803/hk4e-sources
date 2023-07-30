// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-gb2312.c

// Line 171: range 000000000CFCADF0-000000000CFCAE20
uint __fastcall ismbchar_gb2312(CHARSET_INFO *cs_0, const char *p, const char *e)
{
  uint result; // eax
  char v4; // dl

  result = 0;
  if ( (unsigned __int8)(*p + 95) <= 0x56u && e - p > 1 )
  {
    v4 = p[1];
    if ( (unsigned __int8)v4 > 0xA0u )
      return 2 * (v4 != -1);
  }
  return result;
};

// Line 176: range 000000000CFCAE30-000000000CFCAE3E
uint __fastcall mbcharlen_gb2312(CHARSET_INFO *cs_0, uint c)
{
  return 2 - ((unsigned __int8)(c + 95) >= 0x57u);
};

// Line 6282: range 000000000CFCAFA0-000000000CFCB16F
int __fastcall my_wc_mb_gb2312(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
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
  if ( (unsigned int)(wc - 164) <= 0x138 )
  {
    result = tab_uni_gb23120[(int)wc - 164];
  }
  else if ( (unsigned int)(wc - 711) <= 0x18A )
  {
    result = tab_uni_gb23121[(int)wc - 711];
  }
  else if ( (unsigned int)(wc - 8213) <= 0x2FD )
  {
    result = tab_uni_gb23122[(int)wc - 8213];
  }
  else if ( (unsigned int)(wc - 9312) <= 0x1E2 )
  {
    result = tab_uni_gb23123[(int)wc - 9312];
  }
  else if ( (unsigned int)(wc - 12288) <= 0x129 )
  {
    result = tab_uni_gb23124[(int)wc - 12288];
  }
  else if ( (unsigned int)(wc - 12832) <= 9 )
  {
    result = tab_uni_gb23125[(int)wc - 12832];
  }
  else if ( (unsigned int)(wc - 19968) <= 0x4D54 )
  {
    result = tab_uni_gb23126[(int)wc - 19968];
  }
  else if ( (unsigned int)(wc - 40060) <= 0x66 )
  {
    result = tab_uni_gb23127[(int)wc - 40060];
  }
  else if ( (unsigned int)(wc - 40479) <= 0x181 )
  {
    result = tab_uni_gb23128[(int)wc - 40479];
  }
  else
  {
    v4 = wc - 65281;
    result = 0;
    if ( v4 > 0xE4 )
      return result;
    result = tab_uni_gb23129[v4];
  }
  if ( result )
  {
    if ( e < s + 2 )
    {
      return -102;
    }
    else
    {
      v6 = BYTE1(result) | 0x80;
      s[1] = result | 0x80;
      result = 2;
      *s = v6;
    }
  }
  return result;
};

// Line 6309: range 000000000CFCAE40-000000000CFCAF35
int __fastcall my_mb_wc_gb2312(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rdi
  int v5; // eax
  unsigned int v6; // eax
  ulong v7; // rax
  ulong v9; // rax
  ulong v10; // rax

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
    v5 = (s[1] + ((unsigned __int8)v4 << 8)) & 0x7F7F;
    if ( (unsigned int)(v5 - 8481) <= 0x537 )
    {
      v9 = tab_gb2312_uni0[v5 - 8481];
      *pwc = v9;
      return v9 == 0 ? -2 : 2;
    }
    else if ( (unsigned int)(v5 - 10017) <= 0x24E )
    {
      v10 = tab_gb2312_uni1[v5 - 10017];
      *pwc = v10;
      return v10 == 0 ? -2 : 2;
    }
    else
    {
      v6 = v5 - 12321;
      if ( v6 > 0x475D )
      {
        *pwc = 0LL;
        return -2;
      }
      else
      {
        v7 = tab_gb2312_uni2[v6];
        *pwc = v7;
        return v7 == 0 ? -2 : 2;
      }
    }
  }
};

// Line 6337: range 000000000CFCAF40-000000000CFCAF9A
size_t __fastcall my_well_formed_len_gb2312(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos, int *error)
{
  const char *v5; // rax
  char v6; // di

  *error = 0;
  v5 = b;
  while ( pos && v5 < e )
  {
    if ( *v5 >= 0 )
    {
      ++v5;
    }
    else
    {
      if ( v5 >= e - 1 || (unsigned __int8)(*v5 + 95) > 0x56u || (v6 = v5[1], (unsigned __int8)v6 <= 0xA0u) || v6 == -1 )
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
