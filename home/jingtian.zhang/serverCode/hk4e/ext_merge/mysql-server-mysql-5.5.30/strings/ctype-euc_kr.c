// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-euc_kr.c

// Line 208: range 000000000CFCA640-000000000CFCA682
uint __fastcall ismbchar_euc_kr(CHARSET_INFO *cs_0, const char *p, const char *e)
{
  uint result; // eax
  char v4; // dl

  result = 0;
  if ( *p > 0x80u && *p != -1 && e - p > 1 )
  {
    v4 = p[1];
    LOBYTE(result) = 2;
    if ( (unsigned __int8)((v4 & 0xDF) - 65) > 0x19u )
    {
      LOBYTE(result) = 0;
      if ( (unsigned __int8)v4 > 0x80u )
        return 2 * (v4 != -1);
    }
  }
  return result;
};

// Line 215: range 000000000CFCA690-000000000CFCA69E
uint __fastcall mbcharlen_euc_kr(CHARSET_INFO *cs_0, uint c)
{
  return 2 - ((unsigned __int8)(c + 127) >= 0x7Eu);
};

// Line 9877: range 000000000CFCA7F0-000000000CFCA9C9
int __fastcall my_wc_mb_euc_kr(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
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
  if ( (unsigned int)(wc - 161) <= 0xC6 )
  {
    result = tab_uni_ksc56010[(int)wc - 161];
  }
  else if ( (unsigned int)(wc - 711) <= 0x18A )
  {
    result = tab_uni_ksc56011[(int)wc - 711];
  }
  else if ( (unsigned int)(wc - 8213) <= 0x2FD )
  {
    result = tab_uni_ksc56012[(int)wc - 8213];
  }
  else if ( (unsigned int)(wc - 9312) <= 0x20D )
  {
    result = tab_uni_ksc56013[(int)wc - 9312];
  }
  else if ( (unsigned int)(wc - 12288) <= 0x27F )
  {
    result = tab_uni_ksc56014[(int)wc - 12288];
  }
  else if ( (unsigned int)(wc - 13184) <= 0x5D )
  {
    result = tab_uni_ksc56015[(int)wc - 13184];
  }
  else if ( (unsigned int)(wc - 19968) <= 0x467F )
  {
    result = tab_uni_ksc56016[(int)wc - 19968];
  }
  else if ( (unsigned int)(wc - 38263) <= 0xA25 )
  {
    result = tab_uni_ksc56017[(int)wc - 38263];
  }
  else if ( (unsigned int)(wc - 44032) <= 0x2BA3 )
  {
    result = tab_uni_ksc56018[(int)wc - 44032];
  }
  else if ( (unsigned int)(wc - 63744) <= 0x10B )
  {
    result = tab_uni_ksc56019[(int)wc - 63744];
  }
  else
  {
    v4 = wc - 65281;
    result = 0;
    if ( v4 > 0xE5 )
      return result;
    result = tab_uni_ksc560110[v4];
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

// Line 9906: range 000000000CFCA6A0-000000000CFCA765
int __fastcall my_mb_wc_euc_kr(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
{
  ulong v4; // rdi
  int v5; // eax
  ulong v6; // rax
  unsigned int v8; // eax
  ulong v9; // rax

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
    v5 = s[1] + ((unsigned __int8)v4 << 8);
    if ( (unsigned int)(v5 - 33089) > 0x47BD )
    {
      v8 = v5 - 51873;
      if ( v8 > 0x335D )
      {
        *pwc = 0LL;
        return -2;
      }
      else
      {
        v9 = tab_ksc5601_uni1[v8];
        *pwc = v9;
        return v9 == 0 ? -2 : 2;
      }
    }
    else
    {
      v6 = tab_ksc5601_uni0[v5 - 33089];
      *pwc = v6;
      return v6 == 0 ? -2 : 2;
    }
  }
};

// Line 9934: range 000000000CFCA770-000000000CFCA7E2
size_t __fastcall my_well_formed_len_euckr(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos, int *error)
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
      if ( v5 >= e - 1
        || v6 == (char)0x80
        || v6 == -1
        || (v7 = v5[1], (unsigned __int8)((v7 & 0xDF) - 65) > 0x19u) && ((unsigned __int8)v7 <= 0x80u || v7 == -1) )
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
