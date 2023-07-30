// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-latin1.c

// Line 365: range 000000000CFAA8D0-000000000CFAA908
int __fastcall my_mb_wc_latin1(CHARSET_INFO *cs_0, ulong *wc, const uchar *str, const uchar *end)
{
  ulong v4; // rcx
  int result; // eax

  if ( str >= end )
    return -101;
  v4 = cs_to_uni_0[*str];
  result = 1;
  *wc = v4;
  if ( !v4 )
    return *str == 0 ? 1 : -1;
  return result;
};

// Line 380: range 000000000CFAA910-000000000CFAA955
int __fastcall my_wc_mb_latin1(CHARSET_INFO *cs_0, ulong wc, uchar *str, uchar *end)
{
  uchar *v4; // rax
  uchar v5; // cl
  int result; // eax

  if ( str >= end )
    return -101;
  v4 = uni_to_cs_0[BYTE1(wc)];
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

// Line 550: range 000000000CFAA960-000000000CFAAA1B
int __fastcall my_strnncoll_latin1_de(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool b_is_prefix)
{
  const uchar *v6; // r8
  const uchar *v7; // rbx
  int v8; // edi
  int i; // eax
  uchar v10; // r10
  __int64 v11; // rax
  uchar v12; // r11
  __int64 v13; // rdi

  v6 = &b[b_length];
  v7 = &a[a_length];
  v8 = 0;
  for ( i = 0; ; i = v10 )
  {
    if ( !(_BYTE)i && a >= v7 )
      return -(b < v6 || (_BYTE)v8 != 0);
    if ( !(_BYTE)v8 && b >= v6 )
      return b_is_prefix == 0;
    v10 = 0;
    if ( !(_BYTE)i )
    {
      v11 = *a++;
      v10 = combo2map[v11];
      i = combo1map[v11];
    }
    v12 = 0;
    if ( !(_BYTE)v8 )
    {
      v13 = *b++;
      v12 = combo2map[v13];
      v8 = combo1map[v13];
    }
    if ( (_BYTE)i != (_BYTE)v8 )
      break;
    v8 = v12;
  }
  return i - v8;
};

// Line 592: range 000000000CFAAA20-000000000CFAAB25
int __fastcall my_strnncollsp_latin1_de(
        CHARSET_INFO *cs_0,
        const uchar *a,
        size_t a_length,
        const uchar *b,
        size_t b_length,
        my_bool diff_if_only_endspace_difference)
{
  const uchar *v6; // rdx
  const uchar *v7; // r8
  int v8; // r9d
  uchar i; // di
  uchar v10; // al
  __int64 v11; // rdi
  uchar v12; // r10
  __int64 v13; // r9
  int result; // eax

  v6 = &a[a_length];
  v7 = &b[b_length];
  v8 = 0;
  for ( i = 0; i || a < v6; i = v10 )
  {
    if ( !(_BYTE)v8 && b >= v7 )
    {
      result = 1;
      if ( i )
        return result;
      goto LABEL_12;
    }
    v10 = 0;
    if ( !i )
    {
      v11 = *a++;
      v10 = combo2map[v11];
      i = combo1map[v11];
    }
    v12 = 0;
    if ( !(_BYTE)v8 )
    {
      v13 = *b++;
      v12 = combo2map[v13];
      v8 = combo1map[v13];
    }
    if ( i != (_BYTE)v8 )
      return i - v8;
    v8 = v12;
  }
  if ( (_BYTE)v8 )
    return -1;
LABEL_12:
  if ( b != v7 || (result = 0, a != v6) )
  {
    if ( a == v6 )
    {
      v6 = v7;
      a = b;
      result = -1;
    }
    else
    {
      result = 1;
    }
    if ( v6 > a )
    {
      while ( *a == 32 )
      {
        if ( ++a == v6 )
          return 0;
      }
      if ( *a <= 0x1Fu )
        return -result;
    }
    else
    {
      return 0;
    }
  }
  return result;
};

// Line 663: range 000000000CFAAC70-000000000CFAACF3
size_t __fastcall my_strnxfrm_latin1_de(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  uchar *v5; // r10
  const uchar *v6; // r8
  int v7; // ebx
  uchar *v8; // rdi
  uchar v9; // r9

  v5 = &dest[len];
  v6 = &src[srclen];
  v7 = len;
  if ( dest >= &dest[len] || src >= v6 )
  {
    v8 = dest;
  }
  else
  {
    while ( 1 )
    {
      v8 = dest + 1;
      *dest = combo1map[*src];
      v9 = combo2map[*src];
      if ( v9 && v5 > v8 )
      {
        v8 = dest + 2;
        dest[1] = v9;
      }
      ++src;
      if ( v8 >= v5 || v6 <= src )
        break;
      dest = v8;
    }
  }
  if ( v5 > v8 )
    memset(v8, 32, v5 - v8);
  return v7;
};
