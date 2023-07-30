// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-big5.c

// Line 841: range 000000000CFC8A90-000000000CFC8B71
int __fastcall my_strnncoll_big5_internal(const uchar **a_res, const uchar **b_res, size_t length)
{
  const uchar *v3; // rax
  const uchar *v4; // rcx
  size_t v5; // r8
  __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // r10
  int v9; // ebx
  uchar v10; // r9
  int v11; // edx

  v3 = *a_res;
  v4 = *b_res;
  v5 = length - 1;
  if ( !length )
  {
LABEL_15:
    *a_res = v3;
    *b_res = v4;
    return 0;
  }
  while ( 1 )
  {
    v6 = *v3;
    if ( !v5
      || (unsigned __int8)(v6 + 95) > 0x58u
      || (v7 = v3[1], (unsigned __int8)(v7 + 95) > 0x5Du) && (unsigned __int8)(v7 - 64) > 0x3Eu )
    {
      v8 = *v4;
      goto LABEL_13;
    }
    v8 = *v4;
    if ( (unsigned __int8)(v8 + 95) <= 0x58u )
    {
      v9 = v4[1];
      if ( (unsigned __int8)(v9 + 95) <= 0x5Du || (unsigned __int8)(v9 - 64) <= 0x3Eu )
        break;
    }
LABEL_13:
    ++v3;
    ++v4;
    v10 = sort_order_big5[v6];
    v11 = sort_order_big5[v8];
    if ( v10 != (_BYTE)v11 )
      return v10 - v11;
LABEL_14:
    length = v5;
    if ( v5-- == 0 )
      goto LABEL_15;
  }
  if ( (_BYTE)v6 != (_BYTE)v8 )
    return (v7 | ((unsigned __int8)v6 << 8)) - (v9 | ((_DWORD)v8 << 8));
  if ( (_BYTE)v7 == (_BYTE)v9 )
  {
    v3 += 2;
    v4 += 2;
    v5 = length - 2;
    goto LABEL_14;
  }
  LODWORD(v8) = (unsigned __int8)v6;
  return (v7 | ((unsigned __int8)v6 << 8)) - (v9 | ((_DWORD)v8 << 8));
};

// Line 872: range 000000000CFC8B80-000000000CFC8BCF
int __fastcall my_strnncoll_big5(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool b_is_prefix)
{
  size_t v7; // r12
  int v8; // ebp
  int v9; // ebx
  int result; // eax
  int v11; // eax
  const uchar *ba; // [rsp+0h] [rbp-30h] BYREF
  const uchar *aa; // [rsp+8h] [rbp-28h] BYREF

  v7 = a_length;
  v8 = b_length;
  v9 = a_length;
  if ( b_length <= a_length )
    v7 = b_length;
  aa = a;
  ba = b;
  result = my_strnncoll_big5_internal(&aa, &ba, v7);
  if ( !result )
  {
    v11 = v7;
    if ( !b_is_prefix )
      v11 = v9;
    return v11 - v8;
  }
  return result;
};

// Line 885: range 000000000CFC8BD0-000000000CFC8C8B
int __fastcall my_strnncollsp_big5(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // r12
  size_t v8; // rbx
  int result; // eax
  const uchar *v10; // rcx
  size_t v11; // rbx
  const uchar *v12; // rdx
  uchar v13; // si
  const uchar *v14; // rcx
  const uchar *ba; // [rsp+0h] [rbp-28h] BYREF
  const uchar *aa; // [rsp+8h] [rbp-20h] BYREF

  v6 = a_length;
  v8 = a_length;
  if ( b_length <= a_length )
    v6 = b_length;
  aa = a;
  ba = b;
  result = my_strnncoll_big5_internal(&aa, &ba, v6);
  if ( !result && v8 != b_length )
  {
    if ( b_length > v8 )
    {
      v10 = ba;
      v8 = b_length;
      result = -1;
      aa = ba;
    }
    else
    {
      v10 = aa;
      LOBYTE(result) = 1;
    }
    v11 = v8 - v6;
    v12 = &v10[v11];
    if ( v10 < &v10[v11] )
    {
      v13 = *v10;
      v14 = v10 + 1;
      if ( v13 != 32 )
      {
LABEL_15:
        if ( v13 <= 0x1Fu )
          return -result;
        return result;
      }
      while ( 1 )
      {
        aa = v14;
        if ( v14 == v12 )
          break;
        v13 = *v14++;
        if ( v13 != 32 )
          goto LABEL_15;
      }
    }
    return 0;
  }
  return result;
};

// Line 924: range 000000000CFC9000-000000000CFC98E1
size_t __fastcall my_strnxfrm_big5(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  uchar *v5; // rdi
  uchar *v7; // rdx
  size_t v8; // rsi
  size_t v9; // r9
  __int16 v10; // ax
  __int16 v11; // r10
  __int16 v12; // ax
  char v13; // r9
  char v14; // r10
  __int64 v15; // rsi
  uchar *v18; // rax

  v5 = dest;
  v7 = &dest[len];
  v8 = srclen;
LABEL_2:
  v9 = v8 - 1;
  if ( v8 )
  {
    while ( v5 < v7 )
    {
      if ( v9 )
      {
        v10 = *src;
        if ( (unsigned __int8)(v10 + 95) <= 0x58u )
        {
          v11 = src[1];
          if ( (unsigned __int8)(v11 + 95) <= 0x5Du || (unsigned __int8)(v11 - 64) <= 0x3Eu )
          {
            v12 = v11 | (v10 << 8);
            if ( (unsigned __int16)(v12 + 23488) <= 1u )
            {
              v13 = -92;
              v14 = 64;
            }
            else if ( (unsigned __int16)(v12 + 14016) <= 4u || (unsigned __int16)(v12 + 23486) <= 0x11u )
            {
              v13 = -92;
              v14 = 66;
            }
            else if ( (unsigned __int16)(v12 + 14011) <= 7u || (unsigned __int16)(v12 + 23468) <= 0x2Au )
            {
              v13 = -92;
              v14 = 84;
            }
            else if ( (unsigned __int16)(v12 + 14003) <= 0x15u || (unsigned __int16)(v12 + 23391) <= 0x5Cu )
            {
              v13 = -92;
              v14 = -95;
            }
            else if ( (unsigned __int16)(v12 + 13981) <= 0x47u || (unsigned __int16)(v12 + 23298) <= 0xE1u )
            {
              v13 = -92;
              v14 = -2;
            }
            else if ( (unsigned __int16)(v12 + 13909) <= 0xAEu || (unsigned __int16)(v12 + 23072) <= 0x109u )
            {
              v13 = -91;
              v14 = -32;
            }
            else if ( (unsigned __int16)(v12 + 13734) <= 0x156u || (unsigned __int16)(v12 + 22806) <= 0x1D8u )
            {
              v13 = -90;
              v14 = -22;
            }
            else if ( v12 == -23968 || (unsigned __int16)(v12 + 22333) <= 0x281u )
            {
              v13 = -88;
              v14 = -61;
            }
            else
            {
              v13 = -88;
              v14 = -61;
              if ( (unsigned __int16)(v12 + 13391) > 0x22Bu )
              {
                if ( v12 == -23975 || v12 == -1574 )
                {
                  v13 = -85;
                  v14 = 69;
                }
                else
                {
                  v13 = -85;
                  v14 = 69;
                  if ( (unsigned __int16)(v12 + 21691) > 0x276u && (unsigned __int16)(v12 + 12835) > 0x2EAu )
                  {
                    if ( v12 == -23974 || (unsigned __int16)(v12 + 21060) <= 0x2F1u )
                    {
                      v13 = -83;
                      v14 = -68;
                    }
                    else
                    {
                      v13 = -83;
                      v14 = -68;
                      if ( (unsigned __int16)(v12 + 12088) > 0x382u )
                      {
                        if ( (unsigned __int16)(v12 + 23973) <= 1u || (unsigned __int16)(v12 + 20306) <= 0x314u )
                        {
                          v13 = -80;
                          v14 = -82;
                        }
                        else
                        {
                          v13 = -80;
                          v14 = -82;
                          if ( (unsigned __int16)(v12 + 11189) > 0x405u )
                          {
                            if ( v12 == -1573 || (unsigned __int16)(v12 + 19517) <= 0x2FFu )
                            {
                              v13 = -77;
                              v14 = -61;
                            }
                            else
                            {
                              v13 = -77;
                              v14 = -61;
                              if ( (unsigned __int16)(v12 + 10159) > 0x45Fu )
                              {
                                v13 = -74;
                                v14 = -61;
                                if ( (v12 & 0xFFFD) != 0xA25D )
                                {
                                  if ( v12 == -14687 || v12 == -1578 || v12 == -1576 )
                                  {
                                    v13 = -74;
                                    v14 = -61;
                                  }
                                  else if ( (unsigned __int16)(v12 + 18749) > 0x2E8u
                                         && (unsigned __int16)(v12 + 9039) > 0x43Eu )
                                  {
                                    if ( v12 == -1572 || (unsigned __int16)(v12 + 18004) <= 0x248u )
                                    {
                                      v13 = -71;
                                      v14 = -84;
                                    }
                                    else
                                    {
                                      v13 = -71;
                                      v14 = -84;
                                      if ( (unsigned __int16)(v12 + 7952) > 0x3F5u )
                                      {
                                        if ( v12 == -23967 || (unsigned __int16)(v12 + 17419) <= 0x2B1u )
                                        {
                                          v13 = -69;
                                          v14 = -11;
                                        }
                                        else
                                        {
                                          v13 = -69;
                                          v14 = -11;
                                          if ( (unsigned __int16)(v12 + 6938) > 0x40Du )
                                          {
                                            if ( v12 == -23970 || v12 == -1577 || v12 == -1575 )
                                            {
                                              v13 = -66;
                                              v14 = -89;
                                            }
                                            else
                                            {
                                              v13 = -66;
                                              v14 = -89;
                                              if ( (unsigned __int16)(v12 + 16729) > 0x1CDu
                                                && (unsigned __int16)(v12 + 5900) > 0x3C4u )
                                              {
                                                if ( (unsigned __int16)(v12 + 4935) <= 0x2FDu
                                                  || (unsigned __int16)(v12 + 16267) <= 0x1D9u )
                                                {
                                                  v13 = -64;
                                                  v14 = 117;
                                                }
                                                else if ( (unsigned __int16)(v12 + 4169) <= 0x233u
                                                       || (unsigned __int16)(v12 + 15793) <= 0x10Fu )
                                                {
                                                  v13 = -62;
                                                  v14 = 79;
                                                }
                                                else if ( (unsigned __int16)(v12 + 3605) <= 0x211u
                                                       || (unsigned __int16)(v12 + 15521) <= 0xF5u )
                                                {
                                                  v13 = -61;
                                                  v14 = 95;
                                                }
                                                else if ( (unsigned __int16)(v12 + 3075) <= 0x1C2u
                                                       || (unsigned __int16)(v12 + 15275) <= 0x81u )
                                                {
                                                  v13 = -60;
                                                  v14 = 85;
                                                }
                                                else if ( (unsigned __int16)(v12 + 2624) <= 0x115u
                                                       || (unsigned __int16)(v12 + 15145) <= 0x93u )
                                                {
                                                  v13 = -60;
                                                  v14 = -41;
                                                }
                                                else if ( (unsigned __int16)(v12 + 2346) <= 0xF9u
                                                       || (unsigned __int16)(v12 + 14997) <= 0x5Cu )
                                                {
                                                  v13 = -59;
                                                  v14 = 107;
                                                }
                                                else if ( (unsigned __int16)(v12 + 2096) <= 0xD4u
                                                       || (unsigned __int16)(v12 + 14904) <= 0x28u )
                                                {
                                                  v13 = -59;
                                                  v14 = -56;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1883) <= 0x48u
                                                       || (unsigned __int16)(v12 + 14863) <= 0x63u )
                                                {
                                                  v13 = -59;
                                                  v14 = -15;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1810) <= 0x7Cu
                                                       || (unsigned __int16)(v12 + 14763) <= 0xFu )
                                                {
                                                  v13 = -58;
                                                  v14 = 85;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1685) <= 0x36u
                                                       || (unsigned __int16)(v12 + 14747) <= 6u )
                                                {
                                                  v13 = -58;
                                                  v14 = 101;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1630) <= 0x17u
                                                       || (unsigned __int16)(v12 + 14740) <= 9u )
                                                {
                                                  v13 = -58;
                                                  v14 = 108;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1606) <= 0xBu
                                                       || (unsigned __int16)(v12 + 14730) <= 2u )
                                                {
                                                  v13 = -58;
                                                  v14 = 118;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1593) <= 4u
                                                       || (unsigned __int16)(v12 + 14727) <= 3u )
                                                {
                                                  v13 = -58;
                                                  v14 = 121;
                                                }
                                                else if ( (unsigned __int16)(v12 + 1588) <= 3u || v12 == -14723 )
                                                {
                                                  v13 = -58;
                                                  v14 = 125;
                                                }
                                                else if ( v12 == -1584 )
                                                {
                                                  v13 = -7;
                                                  v14 = -48;
                                                }
                                                else if ( v12 == -1583 || v12 == -14722 )
                                                {
                                                  v13 = -58;
                                                  v14 = 126;
                                                }
                                                else
                                                {
                                                  v13 = -7;
                                                  if ( v12 == -1582 || v12 == -1594 )
                                                  {
                                                    v14 = -58;
                                                  }
                                                  else
                                                  {
                                                    v14 = -45;
                                                    if ( v12 != -1581 )
                                                    {
                                                      if ( v12 == -1580 )
                                                      {
                                                        v14 = -44;
                                                      }
                                                      else
                                                      {
                                                        v14 = -43;
                                                        if ( v12 != -1579 )
                                                          v13 = -95;
                                                        if ( v12 != -1579 )
                                                          v14 = 64;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v18 = v5 + 1;
            *v5 = v13;
            if ( v7 > v5 + 1 )
            {
              v18 = v5 + 2;
              v5[1] = v14;
            }
            src += 2;
            v8 -= 2LL;
            v5 = v18;
            goto LABEL_2;
          }
        }
        v15 = (unsigned __int8)v10;
      }
      else
      {
        v15 = *src;
      }
      ++src;
      *v5++ = sort_order_big5[v15];
      v8 = v9;
      if ( v9-- == 0 )
        break;
    }
  }
  if ( len > srclen )
    memset(v5, 32, len - srclen);
  return len;
};

// Line 1000: range 000000000CFC8C90-000000000CFC8CD1
uint __fastcall ismbchar_big5(CHARSET_INFO *cs_0, const char *p, const char *e)
{
  uint result; // eax
  char v4; // dl

  result = 0;
  if ( (unsigned __int8)(*p + 95) <= 0x58u && e - p > 1 )
  {
    v4 = p[1];
    LOBYTE(result) = 2;
    if ( (unsigned __int8)(v4 - 64) > 0x3Eu )
    {
      LOBYTE(result) = 0;
      if ( (unsigned __int8)v4 > 0xA0u )
        return 2 * (v4 != -1);
    }
  }
  return result;
};

// Line 1006: range 000000000CFC8CE0-000000000CFC8CEE
uint __fastcall mbcharlen_big5(CHARSET_INFO *cs_0, uint c)
{
  return 2 - ((unsigned __int8)(c + 95) >= 0x59u);
};

// Line 6787: range 000000000CFC8CF0-000000000CFC8EAD
int __fastcall my_wc_mb_big5(CHARSET_INFO *cs_0, ulong wc, uchar *s, uchar *e)
{
  unsigned int v4; // esi
  int result; // eax
  uchar v6; // ch

  if ( s < e )
  {
    if ( (int)wc <= 127 )
    {
      *s = wc;
      return 1;
    }
    if ( (unsigned int)(wc - 162) <= 0x55 )
    {
      result = tab_uni_big50[(int)wc - 162];
    }
    else if ( (unsigned int)(wc - 711) <= 0x18A )
    {
      result = tab_uni_big51[(int)wc - 711];
    }
    else if ( (unsigned int)(wc - 8211) <= 0x2AC )
    {
      result = tab_uni_big52[(int)wc - 8211];
    }
    else if ( (unsigned int)(wc - 9312) <= 0x1E2 )
    {
      result = tab_uni_big53[(int)wc - 9312];
    }
    else if ( (unsigned int)(wc - 12288) <= 0x129 )
    {
      result = tab_uni_big54[(int)wc - 12288];
    }
    else
    {
      if ( (_DWORD)wc == 12963 )
      {
        LOWORD(result) = -24128;
LABEL_17:
        if ( e >= s + 2 )
        {
          v6 = BYTE1(result);
          s[1] = result;
          result = 2;
          *s = v6;
          return result;
        }
        return -101;
      }
      if ( (unsigned int)(wc - 13198) <= 0x47 )
      {
        result = tab_uni_big56[(int)wc - 13198];
      }
      else if ( (unsigned int)(wc - 19968) <= 0x4683 )
      {
        result = tab_uni_big57[(int)wc - 19968];
      }
      else if ( (unsigned int)(wc - 38263) <= 0xA2D )
      {
        result = tab_uni_big58[(int)wc - 38263];
      }
      else if ( (unsigned int)(wc - 64012) <= 1 )
      {
        result = tab_uni_big59[(int)wc - 64012];
      }
      else
      {
        v4 = wc - 65072;
        result = 0;
        if ( v4 > 0x1CD )
          return result;
        result = tab_uni_big510[v4];
      }
    }
    if ( !result )
      return result;
    goto LABEL_17;
  }
  return -101;
};

// Line 6816: range 000000000CFC8EC0-000000000CFC8F85
int __fastcall my_mb_wc_big5(CHARSET_INFO *cs_0, ulong *pwc, const uchar *s, const uchar *e)
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
    if ( (unsigned int)(v5 - 41280) > 0x26BC )
    {
      v8 = v5 - 51520;
      if ( v8 > 0x309C )
      {
        *pwc = 0LL;
        return -2;
      }
      else
      {
        v9 = tab_big5_uni1[v8];
        *pwc = v9;
        return v9 == 0 ? -2 : 2;
      }
    }
    else
    {
      v6 = tab_big5_uni0[v5 - 41280];
      *pwc = v6;
      return v6 == 0 ? -2 : 2;
    }
  }
};

// Line 6845: range 000000000CFC8F90-000000000CFC8FFA
size_t __fastcall my_well_formed_len_big5(CHARSET_INFO *cs_0, const char *b, const char *e, size_t pos, int *error)
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
      if ( v5 >= e - 1
        || (unsigned __int8)(*v5 + 95) > 0x58u
        || (v6 = v5[1], (unsigned __int8)(v6 - 64) > 0x3Eu) && ((unsigned __int8)v6 <= 0xA0u || v6 == -1) )
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
