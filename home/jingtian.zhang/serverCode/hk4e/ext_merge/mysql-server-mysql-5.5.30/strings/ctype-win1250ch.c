// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-win1250ch.c

// Line 452: range 000000000CFCC820-000000000CFCCB2F
int __fastcall my_strnncoll_win1250ch(
        CHARSET_INFO *cs_0,
        const uchar *s1,
        size_t len1,
        const uchar *s2,
        size_t len2,
        my_bool s2_is_prefix)
{
  signed __int64 v6; // r9
  const uchar *v7; // rbx
  const uchar *v8; // r11
  int v9; // r15d
  int pass1; // r12d
  int pass2; // edx
  int result; // eax
  const wordvalue_0 *v13; // rbp
  int v14; // r12d
  char *word; // rdx
  char v16; // al
  const uchar *v17; // rax
  const wordvalue_0 *v18; // rbp
  int v19; // r13d
  char *v20; // rdx
  char v21; // al
  const uchar *v22; // rax
  int v23; // [rsp+0h] [rbp-3Ch]
  int v24; // [rsp+4h] [rbp-38h]

  if ( s2_is_prefix && len1 > len2 )
    LODWORD(len1) = len2;
  v24 = len1;
  v6 = (int)len1;
  v7 = s2;
  v8 = s1;
  v23 = 0;
  v9 = 0;
  do
  {
    if ( v8 - s1 < v6 )
    {
      if ( !v9 )
      {
        pass1 = sort_order_win1250ch1[*v8];
        if ( pass1 == 255 )
        {
LABEL_21:
          v13 = doubles_0;
          v14 = 0;
          word = "ch";
          v16 = aBnModInverseNo[22];
          if ( aBnModInverseNo[22] )
          {
            while ( v8 - s1 >= v6 || v16 != *v8 )
            {
LABEL_43:
              ++v13;
              word = (char *)v13->word;
              ++v14;
              v16 = *v13->word;
              if ( !v16 )
                goto LABEL_44;
            }
            v17 = v8;
            while ( 1 )
            {
              ++word;
              ++v17;
              if ( !*word )
                break;
              if ( v17 - s1 >= v6 || *word != *v17 )
                goto LABEL_43;
            }
            if ( !v9 )
              goto LABEL_29;
          }
          else
          {
LABEL_44:
            v17 = v8;
            if ( !v9 )
            {
LABEL_29:
              pass1 = doubles_0[v14].pass1;
LABEL_30:
              v8 = v17 - 1;
              goto LABEL_9;
            }
          }
          pass1 = doubles_0[v14].pass2;
          goto LABEL_30;
        }
LABEL_9:
        ++v8;
        goto LABEL_10;
      }
LABEL_8:
      pass1 = sort_order_win1250ch2[*v8];
      if ( pass1 == 255 )
        goto LABEL_21;
      goto LABEL_9;
    }
    if ( v9 )
    {
      v9 = 1;
    }
    else if ( v24 > 0 )
    {
      v8 = s1;
      v9 = 1;
      goto LABEL_8;
    }
    pass1 = 0;
LABEL_10:
    if ( v7 - s2 < (int)len2 )
    {
      if ( !v23 )
      {
        pass2 = sort_order_win1250ch1[*v7];
        if ( pass2 != 255 )
          goto LABEL_15;
        goto LABEL_33;
      }
LABEL_14:
      pass2 = sort_order_win1250ch2[*v7];
      if ( pass2 != 255 )
      {
LABEL_15:
        ++v7;
        goto LABEL_16;
      }
LABEL_33:
      v18 = doubles_0;
      v19 = 0;
      v20 = "ch";
      v21 = aBnModInverseNo[22];
      if ( aBnModInverseNo[22] )
      {
        while ( v7 - s2 >= (int)len2 || v21 != *v7 )
        {
LABEL_46:
          ++v18;
          v20 = (char *)v18->word;
          ++v19;
          v21 = *v18->word;
          if ( !v21 )
            goto LABEL_47;
        }
        v22 = v7;
        while ( 1 )
        {
          ++v20;
          ++v22;
          if ( !*v20 )
            break;
          if ( v22 - s2 >= (int)len2 || *v20 != *v22 )
            goto LABEL_46;
        }
        if ( !v23 )
          goto LABEL_41;
      }
      else
      {
LABEL_47:
        v22 = v7;
        if ( !v23 )
        {
LABEL_41:
          pass2 = doubles_0[v19].pass1;
LABEL_42:
          v7 = v22 - 1;
          goto LABEL_15;
        }
      }
      pass2 = doubles_0[v19].pass2;
      goto LABEL_42;
    }
    pass2 = 0;
    if ( !v23 )
    {
      pass2 = 0;
      if ( (int)len2 > 0 )
      {
        v7 = s2;
        v23 = 1;
        goto LABEL_14;
      }
    }
LABEL_16:
    result = pass1 - pass2;
    if ( pass1 != pass2 )
      return result;
  }
  while ( pass1 );
  return 0;
};

// Line 485: range 000000000CFCCB40-000000000CFCCBB5
int __fastcall my_strnncollsp_win1250ch(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  size_t v6; // rax
  size_t v7; // rdx

  if ( slen )
  {
    v6 = slen - 1;
    if ( s[slen - 1] == 32 )
    {
      while ( v6 && s[v6 - 1] == 32 )
        --v6;
    }
    else
    {
      v6 = slen;
    }
  }
  else
  {
    v6 = 0LL;
  }
  if ( tlen )
  {
    v7 = tlen - 1;
    if ( t[tlen - 1] == 32 )
    {
      while ( v7 && t[v7 - 1] == 32 )
        --v7;
    }
    else
    {
      v7 = tlen;
    }
  }
  else
  {
    v7 = 0LL;
  }
  return my_strnncoll_win1250ch(cs_0, s, v6, t, v7, 0);
};

// Line 494: range 000000000CFCCCD0-000000000CFCCE4F
size_t __fastcall my_strnxfrm_win1250ch(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  int v5; // r14d
  size_t v6; // r13
  const uchar *v9; // rdx
  int pass1; // esi
  const wordvalue_0 *v11; // r9
  int v12; // r10d
  char *word; // rsi
  char v14; // al
  const uchar *v15; // rax

  v5 = 0;
  v6 = 0LL;
  v9 = src;
  do
  {
    if ( v9 - src < (int)srclen )
    {
      if ( !v5 )
      {
        pass1 = sort_order_win1250ch1[*v9];
        if ( pass1 == 255 )
        {
LABEL_13:
          v11 = doubles_0;
          v12 = 0;
          word = "ch";
          v14 = aBnModInverseNo[22];
          if ( aBnModInverseNo[22] )
          {
            while ( v9 - src >= (int)srclen || v14 != *v9 )
            {
LABEL_23:
              ++v11;
              word = (char *)v11->word;
              ++v12;
              v14 = *v11->word;
              if ( !v14 )
                goto LABEL_24;
            }
            v15 = v9;
            while ( 1 )
            {
              ++word;
              ++v15;
              if ( !*word )
                break;
              if ( v15 - src >= (int)srclen || *word != *v15 )
                goto LABEL_23;
            }
            if ( !v5 )
              goto LABEL_21;
          }
          else
          {
LABEL_24:
            v15 = v9;
            if ( !v5 )
            {
LABEL_21:
              pass1 = doubles_0[v12].pass1;
LABEL_22:
              v9 = v15 - 1;
              goto LABEL_6;
            }
          }
          pass1 = doubles_0[v12].pass2;
          goto LABEL_22;
        }
LABEL_6:
        ++v9;
        goto LABEL_7;
      }
LABEL_5:
      pass1 = sort_order_win1250ch2[*v9];
      if ( pass1 == 255 )
        goto LABEL_13;
      goto LABEL_6;
    }
    if ( v5 )
    {
      v5 = 1;
    }
    else if ( (int)srclen > 0 )
    {
      v9 = src;
      v5 = 1;
      goto LABEL_5;
    }
    pass1 = 0;
LABEL_7:
    if ( v6 <= len )
      dest[v6] = pass1;
    ++v6;
  }
  while ( pass1 );
  if ( len > v6 )
  {
    LOBYTE(pass1) = 32;
    memset(&dest[v6], pass1, len - v6);
  }
  return len;
};

// Line 623: range 000000000CFCCBC0-000000000CFCCCC8
my_bool __fastcall my_like_range_win1250ch(
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
  const char *v11; // rbp
  char *v13; // r10
  char *v14; // rbx
  my_bool result; // al
  uchar v16; // dl
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rdx

  v11 = &ptr[ptr_length];
  v13 = min_str;
  v14 = &min_str[res_length];
  if ( ptr == &ptr[ptr_length] || min_str == v14 )
  {
    result = 1;
  }
  else
  {
    result = 1;
    do
    {
      v19 = *(unsigned __int8 *)ptr;
      if ( (_BYTE)v19 != escape || ptr + 1 == v11 )
      {
        if ( (_BYTE)v19 == w_one || (_BYTE)v19 == w_many )
          break;
      }
      else
      {
        v19 = *(unsigned __int8 *)++ptr;
      }
      v16 = like_range_prefix_min_win1250ch[v19];
      v17 = v16 == 32;
      *v13 = v16;
      v18 = *(unsigned __int8 *)ptr;
      if ( !v17 )
        result = 0;
      ++ptr;
      ++max_str;
      ++v13;
      *(max_str - 1) = like_range_prefix_max_win1250ch[v18];
    }
    while ( v11 != ptr && v14 != v13 );
  }
  if ( (cs_0->state & 0x10) != 0 )
    *min_length = v13 - min_str;
  else
    *min_length = res_length;
  for ( *max_length = res_length; v13 != v14; *(max_str - 1) = -1 )
  {
    ++v13;
    ++max_str;
    *(v13 - 1) = 32;
  }
  return result;
};
