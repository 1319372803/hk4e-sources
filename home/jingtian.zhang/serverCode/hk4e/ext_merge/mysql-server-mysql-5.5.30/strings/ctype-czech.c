// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-czech.c

// Line 246: range 000000000CFC9E80-000000000CFCA27D
int __fastcall my_strnncoll_czech(
        CHARSET_INFO *cs_0,
        const uchar *s1,
        size_t len1,
        const uchar *s2,
        size_t len2,
        my_bool s2_is_prefix)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  const uchar *v8; // rdx
  const uchar *v9; // r14
  int v10; // r15d
  int v11; // ebp
  signed __int64 v12; // r11
  uchar *v13; // r12
  int v14; // r8d
  const uchar *v15; // r11
  __int64 v16; // rax
  const uchar *v18; // r10
  int result; // eax
  uchar *v20; // rax
  const uchar *v21; // rax
  const uchar *v22; // r11
  __int64 v23; // r8
  __int64 v24; // r10
  const uchar *v25; // rax
  const uchar *v26; // rax
  const wordvalue *v27; // rbx
  int v28; // ebp
  char *word; // r8
  char v30; // al
  char *v31; // r8
  const uchar *v32; // rax
  char v33; // r10
  const wordvalue *v34; // r12
  char *v35; // r8
  char v36; // al
  char *v37; // r8
  const uchar *v38; // rax
  char v39; // r10
  int v40; // [rsp+0h] [rbp-4Ch]
  const uchar *v41; // [rsp+4h] [rbp-48h]
  const uchar *v42; // [rsp+Ch] [rbp-40h]
  int v43; // [rsp+14h] [rbp-38h]

  if ( s2_is_prefix && len1 > len2 )
    LODWORD(len1) = len2;
  v6 = (int)len1;
  v7 = (int)len2;
  v41 = s2;
  v42 = s1;
  v8 = s2;
  v9 = s1;
  v10 = 0;
  v40 = 0;
  do
  {
    while ( 1 )
    {
LABEL_5:
      if ( v9 - s1 >= v6 )
      {
        v11 = 0;
        if ( v40 != 3 )
        {
          if ( v40 )
          {
            ++v40;
            v9 = s1;
            LOBYTE(v11) = 1;
          }
          else
          {
            v9 = v42;
            v40 = 1;
            v11 = 1;
          }
        }
        goto LABEL_9;
      }
      v20 = CZ_SORT_TABLE[v40];
      v11 = v20[*v9];
      if ( v20[*v9] )
        break;
      ++v9;
    }
    if ( v11 != 2 )
    {
      if ( v11 == 255 )
      {
        v27 = doubles;
        v28 = 0;
        word = "ch";
        v30 = aBnModInverseNo[22];
        if ( aBnModInverseNo[22] )
        {
          while ( v30 != *v9 )
          {
LABEL_59:
            ++v27;
            word = (char *)v27->word;
            ++v28;
            v30 = *v27->word;
            if ( !v30 )
              goto LABEL_60;
          }
          v31 = word + 1;
          v32 = v9;
          while ( 1 )
          {
            v33 = *v31;
            ++v32;
            if ( !*v31 )
              break;
            if ( v32 - s1 < v6 )
            {
              ++v31;
              if ( v33 == *v32 )
                continue;
            }
            goto LABEL_59;
          }
        }
        else
        {
LABEL_60:
          v32 = v9;
        }
        v9 = v32 - 1;
        v11 = doubles[v28].outvalue[v40];
      }
      ++v9;
      goto LABEL_9;
    }
    v22 = v9 + 1;
    v23 = v9 + 1 - s1;
    if ( v23 >= v6 )
    {
      ++v9;
    }
    else
    {
      v24 = *++v9;
      if ( v20[v24] != 2 )
      {
LABEL_63:
        v25 = v9;
        v9 = v22;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v23 = ++v9 - s1;
        if ( v9 - s1 >= v6 )
          break;
        if ( v20[*v9] != 2 )
          goto LABEL_63;
      }
    }
    v25 = v9;
LABEL_45:
    if ( v40 <= 2 && v23 < v6 )
      v9 = v25;
  }
  while ( v9 - s1 >= v6 );
  if ( v40 <= 1 )
  {
    v40 = 1 - v40;
    v26 = v9;
    v9 = v42;
    v42 = v26;
  }
  while ( 1 )
  {
LABEL_9:
    v12 = v8 - s2;
    if ( v8 - s2 >= v7 )
    {
LABEL_12:
      v14 = 0;
      if ( v10 != 3 )
      {
        if ( v10 )
        {
          ++v10;
          v8 = s2;
          LOBYTE(v14) = 1;
        }
        else
        {
          v8 = v41;
          v10 = 1;
          v14 = 1;
        }
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      v13 = CZ_SORT_TABLE[v10];
      v14 = v13[*v8];
      if ( v13[*v8] )
        break;
      v12 = ++v8 - s2;
      if ( v8 - s2 >= v7 )
        goto LABEL_12;
    }
    if ( v14 != 2 )
      break;
    v15 = v8 + 1;
    v16 = v8 + 1 - s2;
    if ( v16 >= v7 )
    {
      ++v8;
LABEL_21:
      v18 = v8;
      goto LABEL_22;
    }
    if ( v13[*++v8] == 2 )
    {
      do
      {
        v16 = ++v8 - s2;
        if ( v8 - s2 >= v7 )
          goto LABEL_21;
      }
      while ( v13[*v8] == 2 );
    }
    v18 = v8;
    v8 = v15;
LABEL_22:
    if ( v10 <= 2 && v16 < v7 )
      v8 = v18;
    if ( v8 - s2 < v7 )
    {
      if ( v10 <= 1 )
      {
        v10 = 1 - v10;
        v21 = v8;
        v8 = v41;
        v41 = v21;
      }
      goto LABEL_28;
    }
  }
  if ( v14 == 255 )
  {
    v43 = 0;
    v34 = doubles;
    v35 = "ch";
    v36 = aBnModInverseNo[22];
    if ( aBnModInverseNo[22] )
    {
      while ( v12 >= v7 || v36 != *v8 )
      {
LABEL_73:
        ++v34;
        v35 = (char *)v34->word;
        ++v43;
        v36 = *v34->word;
        if ( !v36 )
          goto LABEL_74;
      }
      v37 = v35 + 1;
      v38 = v8;
      while ( 1 )
      {
        v39 = *v37;
        ++v38;
        if ( !*v37 )
          break;
        if ( v38 - s2 < v7 )
        {
          ++v37;
          if ( v39 == *v38 )
            continue;
        }
        goto LABEL_73;
      }
    }
    else
    {
LABEL_74:
      v38 = v8;
    }
    v14 = doubles[v43].outvalue[v10];
    v8 = v38;
  }
  else
  {
    ++v8;
  }
LABEL_28:
  result = v11 - v14;
  if ( v11 == v14 )
  {
    if ( !v11 )
      return 0;
    goto LABEL_5;
  }
  return result;
};

// Line 282: range 000000000CFCA290-000000000CFCA305
int __fastcall my_strnncollsp_czech(
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
  return my_strnncoll_czech(cs_0, s, v6, t, v7, 0);
};

// Line 296: range 000000000CFCA420-000000000CFCA634
size_t __fastcall my_strnxfrm_czech(CHARSET_INFO *cs_0, uchar *dest, size_t len, const uchar *src, size_t srclen)
{
  int v5; // eax
  size_t v7; // rbp
  const uchar *v8; // rbx
  int v9; // edi
  uchar *v11; // rdx
  const uchar *v12; // r11
  __int64 v13; // r9
  __int64 v14; // r10
  const uchar *v15; // rdx
  const uchar *v16; // rdx
  const wordvalue *v17; // r11
  int v18; // r15d
  char *word; // rdi
  char v20; // dl
  char *v21; // rdi
  const uchar *v22; // rdx
  char v23; // r9
  const uchar *store; // [rsp+8h] [rbp-40h]

  v5 = 0;
  v7 = 0LL;
  v8 = src;
  store = src;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v8 - src >= (int)srclen )
        {
          if ( v5 == 3 )
          {
            v9 = 0;
          }
          else
          {
            if ( v5 )
            {
              ++v5;
              v8 = src;
            }
            else
            {
              v8 = store;
              v5 = 1;
            }
            v9 = 1;
          }
          goto LABEL_7;
        }
        v11 = CZ_SORT_TABLE[v5];
        v9 = v11[*v8];
        if ( v11[*v8] )
          break;
        ++v8;
      }
      if ( v9 != 2 )
        break;
      v12 = v8 + 1;
      v13 = v8 + 1 - src;
      if ( v13 >= (int)srclen )
      {
        ++v8;
LABEL_24:
        v15 = v8;
        goto LABEL_25;
      }
      v14 = *++v8;
      if ( v11[v14] == 2 )
      {
        do
        {
          v13 = ++v8 - src;
          if ( v8 - src >= (int)srclen )
            goto LABEL_24;
        }
        while ( v11[*v8] == 2 );
      }
      v15 = v8;
      v8 = v12;
LABEL_25:
      if ( v5 <= 2 && v13 < (int)srclen )
        v8 = v15;
      if ( v8 - src < (int)srclen )
      {
        if ( v5 <= 1 )
        {
          v5 = 1 - v5;
          v16 = v8;
          v8 = store;
          store = v16;
        }
        goto LABEL_7;
      }
    }
    if ( v9 == 255 )
    {
      v17 = doubles;
      v18 = 0;
      word = "ch";
      v20 = aBnModInverseNo[22];
      if ( aBnModInverseNo[22] )
      {
        while ( v20 != *v8 )
        {
LABEL_38:
          ++v17;
          word = (char *)v17->word;
          ++v18;
          v20 = *v17->word;
          if ( !v20 )
            goto LABEL_39;
        }
        v21 = word + 1;
        v22 = v8;
        while ( 1 )
        {
          v23 = *v21;
          ++v22;
          if ( !*v21 )
            break;
          if ( v22 - src < (int)srclen )
          {
            ++v21;
            if ( v23 == *v22 )
              continue;
          }
          goto LABEL_38;
        }
      }
      else
      {
LABEL_39:
        v22 = v8;
      }
      v8 = v22 - 1;
      v9 = doubles[v18].outvalue[v5];
    }
    ++v8;
LABEL_7:
    if ( v7 < len )
      dest[v7] = v9;
    ++v7;
  }
  while ( v9 );
  if ( len > v7 )
    memset(&dest[v7], 32, len - v7);
  return len;
};

// Line 369: range 000000000CFCA310-000000000CFCA418
my_bool __fastcall my_like_range_czech(
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
  const char *v11; // rbx
  bool v13; // zf
  char *v14; // rdx
  char v15; // r10
  char *v17; // rax
  char v18; // r8
  char v19; // r10

  v11 = &ptr[ptr_length];
  v13 = ptr == &ptr[ptr_length];
  v14 = &min_str[res_length];
  if ( v13 || min_str == v14 || (v15 = *ptr, *ptr == w_one) || v15 == w_many )
  {
    v17 = min_str;
  }
  else
  {
    v17 = min_str;
    while ( 1 )
    {
      if ( v15 == escape && ptr + 1 != v11 )
        ++ptr;
      v18 = *ptr;
      v19 = byte_1A3384C0[*(unsigned __int8 *)ptr];
      if ( v19 )
      {
        if ( (unsigned __int8)(v19 - 3) > 0xFBu )
          break;
        *max_str = v18;
        *v17++ = v18;
        ++max_str;
      }
      if ( v17 == v14 )
        break;
      if ( v11 == ptr + 1 )
        break;
      v15 = ptr[1];
      if ( v15 == w_one || v15 == w_many )
        break;
      ++ptr;
    }
  }
  if ( (cs_0->state & 0x10) != 0 )
    *min_length = v17 - min_str;
  else
    *min_length = res_length;
  for ( *max_length = res_length; v17 != v14; *(max_str - 1) = 57 )
  {
    ++v17;
    ++max_str;
    *(v17 - 1) = 32;
  }
  return 0;
};
