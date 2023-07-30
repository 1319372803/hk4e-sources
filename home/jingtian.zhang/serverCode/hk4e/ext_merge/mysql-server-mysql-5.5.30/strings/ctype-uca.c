// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype-uca.c

// Line 6801: range 000000000CFC0F90-000000000CFC0FE5
void __fastcall my_uca_scanner_init_ucs2(my_uca_scanner *scanner, CHARSET_INFO *cs_0, const uchar *str, size_t length)
{
  scanner->wbeg = nochar;
  if ( length )
  {
    scanner->sbeg = str;
    scanner->send = &str[length - 2];
    scanner->uca_length = cs_0->sort_order;
    scanner->uca_weight = cs_0->sort_order_big;
    scanner->contractions = cs_0->contractions;
  }
  else
  {
    scanner->sbeg = (const uchar *)&nochar[1];
    scanner->send = (const uchar *)nochar;
  }
};

// Line 6880: range 000000000CFC0FF0-000000000CFC1188
int __fastcall my_uca_scanner_next_ucs2(my_uca_scanner *scanner)
{
  int result; // eax
  const uchar *sbeg; // rax
  const uchar *send; // r11
  uint16 **uca_weight; // rbx
  uchar *uca_length; // rbp
  __int64 v6; // rsi
  uint16 *contractions; // r10
  const uchar *v8; // rdx
  uchar v9; // r9
  int v10; // ecx
  int v11; // r12d
  uint16 *v12; // rax
  const uint16 *v13; // rcx
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx

  result = *scanner->wbeg;
  if ( (_WORD)result )
  {
    ++scanner->wbeg;
  }
  else
  {
    sbeg = scanner->sbeg;
    send = scanner->send;
    uca_weight = scanner->uca_weight;
    uca_length = scanner->uca_length;
    if ( send < sbeg )
    {
      return -1;
    }
    else
    {
      while ( 1 )
      {
        v6 = *sbeg;
        contractions = scanner->contractions;
        v8 = sbeg + 2;
        scanner->page = (unsigned __int8)v6;
        v9 = sbeg[1];
        scanner->sbeg = sbeg + 2;
        v10 = v9;
        scanner->code = v9;
        if ( contractions )
        {
          if ( send >= v8 && !(_BYTE)v6 && !*v8 )
          {
            v11 = sbeg[3];
            if ( (unsigned __int8)(v11 - 65) <= 0x3Eu && (unsigned __int8)(v9 - 65) <= 0x3Eu )
            {
              v14 = contractions[64 * v9 - 4160 + v11];
              if ( contractions[64 * v10 - 4160 + v11] )
              {
                scanner->implicit[0] = 0;
                scanner->sbeg = sbeg + 4;
                result = v14;
                scanner->wbeg = scanner->implicit;
                return result;
              }
            }
          }
        }
        v12 = uca_weight[v6];
        if ( !v12 )
          break;
        v13 = &v12[uca_length[v6] * v10];
        result = *v13;
        scanner->wbeg = v13;
        if ( (_WORD)result )
        {
          scanner->wbeg = v13 + 1;
          return result;
        }
        sbeg = v8;
        if ( send < v8 )
          return -1;
      }
      v15 = (int)(unsigned __int8)v6 >> 7;
      scanner->page = v15;
      v16 = ((unsigned __int8)v6 << 8) + v10;
      scanner->code = v16;
      scanner->implicit[0] = v16 | 0x8000;
      scanner->implicit[1] = 0;
      scanner->wbeg = scanner->implicit;
      if ( (unsigned int)(v16 - 13312) <= 0x19B5 )
      {
        result = v15 + 64384;
        scanner->page = v15 + 64384;
      }
      else
      {
        if ( (unsigned int)(v16 - 19968) > 0x51A5 )
          result = v15 + 64448;
        else
          result = v15 + 64320;
        scanner->page = result;
      }
    }
  }
  return result;
};

// Line 6956: range 000000000CFC06F0-000000000CFC0721
void __fastcall my_uca_scanner_init_any(my_uca_scanner *scanner, CHARSET_INFO *cs_0, const uchar *str, size_t length)
{
  uint16 *contractions; // rax

  scanner->sbeg = str;
  scanner->send = &str[length];
  scanner->wbeg = nochar;
  scanner->uca_length = cs_0->sort_order;
  scanner->uca_weight = cs_0->sort_order_big;
  contractions = cs_0->contractions;
  scanner->cs = cs_0;
  scanner->contractions = contractions;
};

// Line 6964: range 000000000CFC1190-000000000CFC138A
int __fastcall my_uca_scanner_next_any(my_uca_scanner *scanner)
{
  const uint16 *wbeg; // rdx
  int result; // eax
  uint16 **uca_weight; // rbp
  uchar *uca_length; // r13
  int v6; // eax
  __int64 v7; // rdx
  ulong v8; // rax
  const uchar *v9; // rdx
  bool v10; // cc
  int code; // esi
  bool v12; // zf
  int page; // edi
  int v14; // eax
  uint16 v15; // dx
  __int64 v16; // rdx
  uint16 *v17; // rax
  int v18; // eax
  int v19; // edi
  int v20; // esi
  ulong wc[6]; // [rsp+8h] [rbp-30h] BYREF

  wbeg = scanner->wbeg;
  result = *scanner->wbeg;
  if ( (_WORD)result )
  {
LABEL_14:
    scanner->wbeg = wbeg + 1;
    return result;
  }
  while ( 1 )
  {
    uca_weight = scanner->uca_weight;
    uca_length = scanner->uca_length;
    v6 = scanner->cs->cset->mb_wc(scanner->cs, wc, scanner->sbeg, scanner->send);
    if ( v6 <= 0 )
      return -1;
    v7 = v6;
    v8 = wc[0];
    v9 = &scanner->sbeg[v7];
    v10 = wc[0] <= 0xFFFF;
    scanner->sbeg = v9;
    if ( !v10 )
    {
      scanner->wbeg = nochar;
      return 65533;
    }
    code = (unsigned __int8)v8;
    v12 = scanner->contractions == 0LL;
    scanner->code = (unsigned __int8)v8;
    page = v8 >> 8;
    scanner->page = page;
    if ( v12 || (unsigned int)(v8 >> 8) || (unsigned int)(unsigned __int8)v8 - 65 > 0x3E )
      goto LABEL_12;
    v14 = scanner->cs->cset->mb_wc(scanner->cs, wc, v9, scanner->send);
    if ( v14 < 0 || (unsigned int)(wc[0] >> 8) || (unsigned int)LOBYTE(wc[0]) - 65 > 0x3E )
      break;
    code = scanner->code;
    v15 = scanner->contractions[64 * code - 4160 + LOBYTE(wc[0])];
    if ( v15 )
    {
      scanner->sbeg += v14;
      scanner->implicit[0] = 0;
      result = v15;
      scanner->wbeg = scanner->implicit;
      return result;
    }
    page = scanner->page;
LABEL_12:
    v16 = page;
    v17 = uca_weight[page];
    if ( !v17 )
      goto LABEL_16;
LABEL_13:
    wbeg = &v17[code * uca_length[v16]];
    result = *wbeg;
    scanner->wbeg = wbeg;
    if ( (_WORD)result )
      goto LABEL_14;
  }
  page = scanner->page;
  code = scanner->code;
  v16 = page;
  v17 = uca_weight[page];
  if ( v17 )
    goto LABEL_13;
LABEL_16:
  v18 = page;
  v19 = page >> 7;
  scanner->page = v19;
  v20 = (v18 << 8) + code;
  scanner->code = v20;
  scanner->implicit[0] = v20 | 0x8000;
  scanner->implicit[1] = 0;
  scanner->wbeg = scanner->implicit;
  if ( (unsigned int)(v20 - 13312) > 0x19B5 )
  {
    if ( (unsigned int)(v20 - 19968) > 0x51A5 )
      result = v19 + 64448;
    else
      result = v19 + 64320;
    scanner->page = result;
  }
  else
  {
    result = v19 + 64384;
    scanner->page = v19 + 64384;
  }
  return result;
};

// Line 7099: range 000000000CFC0730-000000000CFC07BF
int __fastcall my_strnncoll_uca(
        CHARSET_INFO *cs_0,
        my_uca_scanner_handler *scanner_handler,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  my_uca_scanner sscanner; // [rsp+10h] [rbp-D8h] BYREF
  my_uca_scanner tscanner; // [rsp+60h] [rbp-88h] BYREF

  scanner_handler->init(&sscanner, cs_0, s, slen);
  scanner_handler->init(&tscanner, cs_0, t, tlen);
  do
  {
    v8 = scanner_handler->next(&sscanner);
    v9 = scanner_handler->next(&tscanner);
  }
  while ( v8 > 0 && v8 == v9 );
  if ( v9 >= 0 )
    return v8 - v9;
  v10 = 0;
  if ( !t_is_prefix )
    return v8 - v9;
  return v10;
};

// Line 7165: range 000000000CFC1390-000000000CFC14BC
__int64 __fastcall my_strnncollsp_uca(
        CHARSET_INFO *cs_0,
        my_uca_scanner_handler *scanner_handler,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen)
{
  int v8; // r15d
  int v9; // eax
  int v10; // r13d
  int v11; // r12d
  int v13; // ebp
  int t_res; // [rsp+Ch] [rbp-DCh]
  my_uca_scanner sscanner; // [rsp+10h] [rbp-D8h] BYREF
  my_uca_scanner tscanner; // [rsp+60h] [rbp-88h] BYREF

  scanner_handler->init(&sscanner, cs_0, s, slen);
  scanner_handler->init(&tscanner, cs_0, t, tlen);
  do
  {
    v8 = scanner_handler->next(&sscanner);
    v9 = scanner_handler->next(&tscanner);
  }
  while ( v8 > 0 && v8 == v9 );
  t_res = v9;
  v10 = v8;
  if ( v9 < 0 && v8 > 0 )
  {
    v11 = (*cs_0->sort_order_big)[32 * *cs_0->sort_order];
    if ( v8 != v11 )
      return (unsigned int)(v8 - v11);
    while ( 1 )
    {
      v8 = scanner_handler->next(&sscanner);
      if ( v8 <= 0 )
        break;
      if ( v8 != v10 )
        return (unsigned int)(v8 - v11);
    }
    return 0LL;
  }
  if ( v9 <= 0 || v8 >= 0 )
    return (unsigned int)(v8 - v9);
  v13 = (*cs_0->sort_order_big)[32 * *cs_0->sort_order];
  if ( v9 == v13 )
  {
    while ( 1 )
    {
      v9 = scanner_handler->next(&tscanner);
      if ( v9 <= 0 )
        break;
      if ( v9 != t_res )
        return (unsigned int)(v13 - v9);
    }
    return 0LL;
  }
  return (unsigned int)(v13 - v9);
};

// Line 7247: range 000000000CFC07D0-000000000CFC088F
void __fastcall my_hash_sort_uca(
        CHARSET_INFO *cs_0,
        my_uca_scanner_handler *scanner_handler,
        const uchar *s,
        size_t slen,
        ulong *n1,
        ulong *n2)
{
  size_t v9; // rax
  ulong v10; // rcx
  int v11; // eax
  my_uca_scanner scanner; // [rsp+0h] [rbp-88h] BYREF

  v9 = cs_0->cset->lengthsp(cs_0, (const char *)s, slen);
  scanner_handler->init(&scanner, cs_0, s, v9);
  while ( 1 )
  {
    v11 = scanner_handler->next(&scanner);
    if ( v11 <= 0 )
      break;
    *n1 ^= (*n1 << 8) + (*n2 + (*n1 & 0x3F)) * (v11 >> 8);
    v10 = *n2 + 3;
    *n2 = v10;
    *n1 ^= (*n1 << 8) + ((*n1 & 0x3F) + v10) * (unsigned __int8)v11;
    *n2 += 3LL;
  }
};

// Line 7299: range 000000000CFC0890-000000000CFC0951
size_t __fastcall my_strnxfrm_uca(
        CHARSET_INFO *cs_0,
        my_uca_scanner_handler *scanner_handler,
        uchar *dst,
        size_t dstlen,
        const uchar *src,
        size_t srclen)
{
  uchar *v7; // rbp
  uchar *v8; // rbx
  int v9; // eax
  uchar *v10; // rcx
  uint16 v11; // ax
  my_uca_scanner scanner; // [rsp+0h] [rbp-88h] BYREF

  v7 = &dst[dstlen & 0xFFFFFFFFFFFFFFFELL];
  v8 = dst;
  scanner_handler->init(&scanner, cs_0, src, srclen);
  if ( v8 < v7 )
  {
    while ( 1 )
    {
      v9 = scanner_handler->next(&scanner);
      if ( v9 <= 0 )
        break;
      v8[1] = v9;
      v8 += 2;
      *(v8 - 2) = BYTE1(v9);
      if ( v7 <= v8 )
        goto LABEL_8;
    }
    v10 = v8;
    v11 = (*cs_0->sort_order_big)[32 * *cs_0->sort_order];
    if ( v7 > v8 )
    {
      do
      {
        *v8 = HIBYTE(v11);
        v8[1] = v11;
        v8 += 2;
      }
      while ( v7 > v8 );
      v8 = &v10[2 * ((unsigned __int64)&v7[~(unsigned __int64)v10] >> 1) + 2];
    }
  }
LABEL_8:
  if ( (dstlen & 1) != 0 )
    *v8 = 0;
  return dstlen;
};

// Line 7362: range 000000000CFC0BC0-000000000CFC0CB8
int __fastcall my_uca_charcmp(CHARSET_INFO *cs_0, ulong wc1, ulong wc2)
{
  uint16 *v3; // rbx
  uchar *sort_order; // rcx
  uint16 **sort_order_big; // rax
  __int64 v6; // rdi
  uint16 *v7; // r8
  __int64 v8; // rbp
  __int64 v10; // r8
  uint16 *v11; // rdi
  uint16 *v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  size_t v15; // rdx

  v3 = 0LL;
  sort_order = cs_0->sort_order;
  sort_order_big = cs_0->sort_order_big;
  if ( (unsigned int)wc1 <= 0xFFFF )
  {
    v6 = (unsigned int)wc1 >> 8;
    v7 = sort_order_big[v6];
    if ( v7 )
      v3 = &v7[(unsigned __int8)wc1 * sort_order[v6]];
  }
  if ( (unsigned int)wc2 > 0xFFFF )
    return wc1 != wc2;
  v10 = (unsigned int)wc2 >> 8;
  v11 = sort_order_big[v10];
  if ( !v11 )
    return wc1 != wc2;
  v12 = &v11[(unsigned __int8)wc2 * sort_order[v10]];
  if ( !v3 || !v12 )
    return wc1 != wc2;
  LODWORD(v8) = 1;
  if ( *v3 != *v12 )
    return v8;
  v13 = sort_order[wc1 >> 8];
  v14 = sort_order[wc2 >> 8];
  if ( v13 > v14 )
  {
    if ( !memcmp(v3, v12, 2 * v14) )
      LODWORD(v8) = v3[v14];
    return v8;
  }
  v15 = 2 * v13;
  if ( v13 < v14 )
  {
    if ( !memcmp(v3, v12, v15) )
      LODWORD(v8) = v12[v13];
    return v8;
  }
  return memcmp(v3, v12, v15);
};

// Line 7401: range 000000000CFC0CC0-000000000CFC0F80
int __fastcall my_wildcmp_uca(
        CHARSET_INFO *cs_0,
        const char *str,
        const char *str_end,
        const char *wildstr,
        const char *wildend,
        int escape,
        int w_one,
        int w_many)
{
  const char *v9; // r12
  const char *v10; // rbx
  my_charset_conv_mb_wc mb_wc; // r14
  int i; // eax
  int v13; // eax
  char v14; // r15
  int v15; // eax
  __int64 v16; // rax
  ulong *p_s_wc; // r8
  int v18; // eax
  int v19; // eax
  int v20; // eax
  const char *v21; // r15
  const char *v22; // r12
  int v23; // eax
  __int64 v24; // rbx
  __int64 v27; // [rsp+30h] [rbp-68h]
  ulong *v28; // [rsp+30h] [rbp-68h]
  ulong s_wc; // [rsp+50h] [rbp-48h] BYREF
  ulong w_wc[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = str;
  v10 = wildstr;
  mb_wc = cs_0->cset->mb_wc;
  if ( wildstr == wildend )
  {
    return str != str_end;
  }
  else
  {
    v27 = escape;
    for ( i = mb_wc(cs_0, w_wc, (const uchar *)wildstr, (const uchar *)wildend);
          ;
          i = mb_wc(cs_0, w_wc, (const uchar *)v10, (const uchar *)wildend) )
    {
      if ( i <= 0 )
        goto LABEL_15;
      if ( w_many == w_wc[0] )
        break;
      v14 = 0;
      v10 += i;
      if ( w_wc[0] == v27 )
      {
        v15 = mb_wc(cs_0, w_wc, (const uchar *)v10, (const uchar *)wildend);
        if ( v15 <= 0 )
          goto LABEL_15;
        v14 = 1;
        v10 += v15;
      }
      v13 = mb_wc(cs_0, &s_wc, (const uchar *)v9, (const uchar *)str_end);
      if ( v13 <= 0 )
        goto LABEL_15;
      v9 += v13;
      if ( v14 || w_one != w_wc[0] )
      {
        if ( my_uca_charcmp(cs_0, s_wc, w_wc[0]) )
          goto LABEL_15;
      }
      if ( v10 == wildend )
        return str_end != v9;
    }
    p_s_wc = &s_wc;
    if ( v10 != wildend )
    {
      while ( 1 )
      {
        v28 = p_s_wc;
        v18 = mb_wc(cs_0, w_wc, (const uchar *)v10, (const uchar *)wildend);
        if ( v18 <= 0 )
          break;
        p_s_wc = v28;
        if ( w_many == w_wc[0] )
        {
          v10 += v18;
        }
        else
        {
          if ( w_wc[0] != w_one )
          {
            if ( wildend == v10 )
              goto LABEL_24;
            if ( str_end == v9 )
            {
LABEL_38:
              LODWORD(v16) = -1;
              return v16;
            }
            v20 = ((__int64 (__fastcall *)(CHARSET_INFO *, ulong *, const char *, const char *, ulong *))mb_wc)(
                    cs_0,
                    w_wc,
                    v10,
                    wildend,
                    v28);
            if ( v20 > 0 )
            {
              if ( escape != w_wc[0] || (v10 += v20, mb_wc(cs_0, w_wc, (const uchar *)v10, (const uchar *)wildend) > 0) )
              {
                v21 = v9;
                v22 = v10;
                while ( 1 )
                {
                  v23 = mb_wc(cs_0, &s_wc, (const uchar *)v21, (const uchar *)str_end);
                  v24 = v23;
                  if ( v23 <= 0 )
                    break;
                  if ( !my_uca_charcmp(cs_0, s_wc, w_wc[0]) )
                  {
                    if ( v21 == str_end )
                      goto LABEL_38;
                    LODWORD(v16) = my_wildcmp_uca(cs_0, v21, str_end, v22, wildend, escape, w_one, w_many);
                    if ( (int)v16 <= 0 )
                      return v16;
                  }
                  v21 += v24;
                  if ( str_end == v21 )
                    goto LABEL_38;
                }
              }
            }
            break;
          }
          v10 += v18;
          v19 = mb_wc(cs_0, v28, (const uchar *)v9, (const uchar *)str_end);
          if ( v19 <= 0 )
            break;
          p_s_wc = v28;
          v9 += v19;
        }
        if ( wildend == v10 )
          goto LABEL_24;
      }
LABEL_15:
      LODWORD(v16) = 1;
      return v16;
    }
LABEL_24:
    LODWORD(v16) = 0;
  }
  return v16;
};

// Line 7632: range 000000000CFC1510-000000000CFC1561
void __fastcall my_coll_lexem_print_error(
        MY_COLL_LEXEM *lexem,
        MY_COLL_LEXEM *a2,
        char *errstr,
        const char *errsize,
        const char *txt)
{
  size_t v5; // rdi
  char tail[30]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (char *)lexem - (char *)a2;
  if ( v5 > 0x1D )
    v5 = 29LL;
  strmake(tail, (const char *)a2, v5);
  errstr[126] = 0;
  my_snprintf(errstr, 0x7EuLL, "%s at '%s'", errsize, tail);
};

// Line 7692: range 000000000CFC0960-000000000CFC0AD3
my_coll_lexem_num __fastcall my_coll_lexem_next(MY_COLL_LEXEM *lexem)
{
  const char *beg; // r8
  const char *end; // rsi
  const char *v3; // rdx
  int v4; // ecx
  const char *v5; // r9
  my_coll_lexem_num result; // eax
  int v7; // eax
  int v8; // eax

  beg = lexem->beg;
  end = lexem->end;
  v3 = lexem->beg;
  if ( lexem->beg >= end )
  {
LABEL_11:
    result = MY_COLL_LEXEM_EOF;
    lexem->prev = beg;
    lexem->beg = v3;
  }
  else
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 != 32 && (unsigned __int8)(v4 - 9) > 1u && (_BYTE)v4 != 13 )
        break;
      if ( ++v3 == end )
        goto LABEL_11;
    }
    v5 = v3;
    switch ( (_BYTE)v4 )
    {
      case '&':
        ++v3;
        result = MY_COLL_LEXEM_SHIFT;
        break;
      case '=':
        ++v3;
        result = MY_COLL_LEXEM_DIFF;
        break;
      case '<':
        ++v3;
        lexem->diff = 1;
        if ( v3 >= end
          || v5[1] != 60
          || (v3 = v5 + 2, lexem->diff = 2, v5 + 2 >= end)
          || v5[2] != 60
          || (v3 = v5 + 3, lexem->diff = 3, v5 + 3 >= end)
          || (result = MY_COLL_LEXEM_DIFF, v5[3] != 60) )
        {
          result = MY_COLL_LEXEM_DIFF;
        }
        break;
      default:
        if ( (unsigned __int8)((v4 & 0xDF) - 65) <= 0x19u )
        {
          lexem->code = v4;
          result = MY_COLL_LEXEM_CHAR;
          lexem->prev = beg;
          lexem->beg = v3 + 1;
          return result;
        }
        result = MY_COLL_LEXEM_ERROR;
        if ( (_BYTE)v4 == 92 && v3 + 2 < end && v3[1] == 117 )
        {
          lexem->code = 0;
          v3 += 2;
          do
          {
            v8 = *v3;
            if ( (unsigned int)(v8 - 48) <= 9 )
            {
              v7 = v8 - 48;
            }
            else if ( (unsigned int)(v8 - 97) > 5 )
            {
              if ( (unsigned int)(v8 - 65) > 5 )
                break;
              v7 = v8 - 55;
            }
            else
            {
              v7 = v8 - 87;
            }
            if ( v7 < 0 )
              break;
            ++v3;
            lexem->code = 16 * lexem->code + v7;
          }
          while ( v3 != end );
          result = MY_COLL_LEXEM_CHAR;
        }
        break;
    }
    lexem->prev = beg;
    lexem->beg = v3;
  }
  return result;
};

// Line 7914: range 000000000CFC1570-000000000CFC1E5D
my_bool __fastcall create_tailoring(CHARSET_INFO *cs_0, void *(*alloc)(size_t))
{
  const char *tailoring; // rbx
  int v3; // r12d
  int v4; // ebp
  my_coll_lexem_num v5; // eax
  const char *v6; // r8
  int code; // r12d
  const char *beg; // r15
  const char *end; // r14
  int diff; // r13d
  const char *v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rax
  _BYTE *v14; // rax
  uint16 **v15; // r12
  _DWORD *v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rcx
  _DWORD *v19; // rdi
  _BYTE *v20; // rax
  _BYTE *v21; // rbx
  _WORD *v22; // rdi
  uchar *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rdi
  uchar *v28; // rsi
  __int16 v29; // di
  __int16 base; // si
  uint v31; // ecx
  int v32; // r8d
  MY_COLL_RULE *v33; // rax
  uint v34; // edx
  MY_COLL_RULE *v35; // r9
  uchar *v36; // rdx
  uchar v37; // cl
  MY_COLL_RULE *v38; // r12
  unsigned __int64 v39; // r13
  uint16 **v40; // r15
  uint16 *v41; // rcx
  uchar *v42; // rbx
  size_t v43; // r14
  uint16 *v44; // rax
  uint16 **v45; // r14
  int i; // r13d
  int v47; // eax
  uint16 *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 j; // rax
  uint16 *v53; // rax
  uint16 *v54; // r9
  MY_COLL_RULE *v55; // rax
  __int64 v56; // rdx
  uint16 *v57; // rdi
  __int64 v58; // rcx
  int v59; // edx
  __int16 v60; // dx
  unsigned __int64 v61; // [rsp+0h] [rbp-D48h]
  const char *prev; // [rsp+8h] [rbp-D40h]
  uint v63; // [rsp+8h] [rbp-D40h]
  uint v64; // [rsp+14h] [rbp-D34h]
  uchar *v65; // [rsp+28h] [rbp-D20h]
  uint16 **newweights; // [rsp+40h] [rbp-D08h]
  int ncontractions; // [rsp+4Ch] [rbp-CFCh]
  __int64 v70; // [rsp+50h] [rbp-CF8h]
  __int64 v71; // [rsp+58h] [rbp-CF0h]
  __int64 v72; // [rsp+60h] [rbp-CE8h]
  MY_COLL_LEXEM lexem; // [rsp+70h] [rbp-CD8h] BYREF
  char errstr[128]; // [rsp+90h] [rbp-CB8h] BYREF
  MY_COLL_RULE rule[128]; // [rsp+110h] [rbp-C38h] BYREF

  tailoring = cs_0->tailoring;
  if ( !tailoring )
    return 1;
  v3 = 0;
  v4 = 6;
  lexem.beg = cs_0->tailoring;
  lexem.prev = tailoring;
  lexem.end = &tailoring[strlen(tailoring)];
  errstr[0] = 0;
  LODWORD(v70) = 0;
  HIDWORD(v71) = 0;
  v72 = 0LL;
  lexem.diff = 0;
  lexem.code = 0;
  v61 = 0LL;
LABEL_3:
  while ( 2 )
  {
    v5 = my_coll_lexem_next(&lexem);
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v5 == MY_COLL_LEXEM_ERROR )
        {
          my_coll_lexem_print_error(
            (MY_COLL_LEXEM *)lexem.end,
            (MY_COLL_LEXEM *)lexem.prev,
            errstr,
            "Unknown character",
            v6);
          return 1;
        }
        if ( v3 == 1 )
          break;
        if ( v3 != 2 )
        {
          if ( v5 == MY_COLL_LEXEM_SHIFT )
          {
            v4 = 4;
            v3 = 2;
            goto LABEL_3;
          }
          my_coll_lexem_print_error((MY_COLL_LEXEM *)lexem.end, (MY_COLL_LEXEM *)lexem.prev, errstr, "& expected", v6);
          return 1;
        }
        if ( v5 != MY_COLL_LEXEM_CHAR )
        {
          my_coll_lexem_print_error(
            (MY_COLL_LEXEM *)lexem.end,
            (MY_COLL_LEXEM *)lexem.prev,
            errstr,
            "character expected",
            v6);
          return 1;
        }
        if ( v4 == 4 )
        {
          HIDWORD(v71) = 0;
          v3 = 1;
          v72 = 0LL;
          LODWORD(v70) = lexem.code;
          goto LABEL_3;
        }
        if ( v4 != 1 )
        {
          my_coll_lexem_print_error(
            (MY_COLL_LEXEM *)lexem.end,
            (MY_COLL_LEXEM *)lexem.prev,
            errstr,
            "Should never happen",
            v6);
          return 1;
        }
        code = lexem.code;
        beg = lexem.beg;
        end = lexem.end;
        diff = lexem.diff;
        prev = lexem.prev;
        HIDWORD(v70) = lexem.code;
        if ( my_coll_lexem_next(&lexem) == MY_COLL_LEXEM_CHAR )
        {
          LODWORD(v71) = lexem.code;
          v12 = lexem.diff;
        }
        else
        {
          LODWORD(v71) = 0;
          lexem.beg = beg;
          lexem.end = end;
          lexem.diff = diff;
          lexem.code = code;
          lexem.prev = prev;
          v12 = diff;
        }
        switch ( v12 )
        {
          case 3:
            ++HIDWORD(v72);
            break;
          case 2:
            v72 = (unsigned int)(v72 + 1);
            break;
          case 1:
            ++HIDWORD(v71);
            v72 = 0LL;
            break;
          case 0:
            v72 = 0LL;
            HIDWORD(v71) = 0;
            break;
        }
        if ( v61 > 0x7F )
        {
          my_coll_lexem_print_error(
            (MY_COLL_LEXEM *)lexem.end,
            (MY_COLL_LEXEM *)lexem.prev,
            errstr,
            "Too many rules",
            v11);
          return 1;
        }
        v3 = 1;
        v13 = v61;
        *(_QWORD *)&rule[v13].base = v70;
        *(_QWORD *)&rule[v13].curr[1] = v71;
        *(_QWORD *)&rule[v13].diff[1] = v72;
        ++v61;
        v5 = my_coll_lexem_next(&lexem);
        if ( v5 == MY_COLL_LEXEM_EOF )
          goto LABEL_19;
      }
      if ( v5 == MY_COLL_LEXEM_DIFF || v5 == MY_COLL_LEXEM_SHIFT )
      {
        v4 = v5;
        v3 = 2;
        continue;
      }
      my_coll_lexem_print_error((MY_COLL_LEXEM *)lexem.end, (MY_COLL_LEXEM *)lexem.prev, errstr, "& or < expected", v6);
      return 1;
    }
    break;
  }
LABEL_19:
  if ( (v61 & 0x80000000) != 0LL )
    return 1;
  if ( !cs_0->caseinfo )
    cs_0->caseinfo = my_unicase_default;
  v14 = (_BYTE *)alloc(2048LL);
  v15 = (uint16 **)v14;
  if ( !v14 )
    return 1;
  v16 = v14;
  v17 = 2048;
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    *v14 = 0;
    v16 = v14 + 1;
    LOWORD(v17) = 2047;
  }
  if ( ((unsigned __int8)v16 & 2) != 0 )
  {
    v16 = (_DWORD *)((char *)v16 + 2);
    v17 -= 2;
    *((_WORD *)v16 - 1) = 0;
  }
  if ( ((unsigned __int8)v16 & 4) != 0 )
  {
    *v16 = 0;
    v17 -= 4;
    ++v16;
  }
  v18 = v17 >> 3;
  memset(v16, 0, 8 * v18);
  v19 = &v16[2 * v18];
  if ( (v17 & 4) != 0 )
    *v19++ = 0;
  if ( (v17 & 2) != 0 )
  {
    v19 = (_DWORD *)((char *)v19 + 2);
    *((_WORD *)v19 - 1) = 0;
  }
  if ( (v17 & 1) != 0 )
    *(_BYTE *)v19 = 0;
  v20 = (_BYTE *)alloc(256LL);
  v21 = v20;
  v65 = v20;
  if ( !v20 )
    return 1;
  v22 = v20;
  v23 = uca_length;
  v24 = 256;
  if ( ((unsigned __int8)v21 & 1) != 0 )
  {
    v22 = v21 + 1;
    v23 = &uca_length[1];
    *v21 = uca_length[0];
    v24 = 255;
  }
  if ( ((unsigned __int8)v22 & 2) != 0 )
  {
    v60 = *(_WORD *)v23;
    ++v22;
    v23 += 2;
    v24 -= 2;
    *(v22 - 1) = v60;
  }
  if ( ((unsigned __int8)v22 & 4) != 0 )
  {
    v59 = *(_DWORD *)v23;
    v22 += 2;
    v23 += 4;
    v24 -= 4;
    *((_DWORD *)v22 - 1) = v59;
  }
  v25 = 0LL;
  v26 = v24 >> 3;
  qmemcpy(v22, v23, 8 * v26);
  v28 = &v23[8 * v26];
  v27 = &v22[4 * v26];
  if ( (v24 & 4) != 0 )
  {
    *v27 = *(_DWORD *)v28;
    v25 = 4LL;
  }
  if ( (v24 & 2) != 0 )
  {
    *(_WORD *)((char *)v27 + v25) = *(_WORD *)&v28[v25];
    v25 += 2LL;
  }
  if ( (v24 & 1) != 0 )
    *((_BYTE *)v27 + v25) = v28[v25];
  if ( !(_DWORD)v61 )
  {
    ncontractions = 0;
    goto LABEL_83;
  }
  v29 = rule[0].curr[0];
  if ( rule[0].curr[0] > 0xFFFF )
    return 1;
  base = rule[0].base;
  if ( rule[0].base > 0xFFFF )
    return 1;
  v31 = rule[0].base;
  v32 = 0;
  v33 = &rule[1];
  v34 = rule[0].curr[0];
  v35 = &rule[(unsigned int)(v61 - 1) + 1];
  while ( v33[-1].curr[1] )
  {
    ++v32;
    if ( v33 == v35 )
      goto LABEL_59;
LABEL_55:
    v34 = v33->curr[0];
    if ( v34 <= 0xFFFF )
    {
      ++v33;
      v31 = v33[-1].base;
      if ( v31 <= 0xFFFF )
        continue;
    }
    return 1;
  }
  v36 = &v65[v34 >> 8];
  v37 = uca_length[v31 >> 8];
  if ( *v36 < v37 )
    *v36 = v37;
  if ( v33 != v35 )
    goto LABEL_55;
LABEL_59:
  newweights = v15;
  ncontractions = v32;
  v38 = rule;
  LOWORD(v63) = v29;
  LOWORD(v64) = base;
  while ( 1 )
  {
    if ( !v38->curr[1] )
    {
      v39 = BYTE1(v63);
      v40 = &newweights[v39];
      v41 = newweights[v39];
      v42 = &v65[BYTE1(v63)];
      if ( !v41 )
      {
        v43 = *v42 << 9;
        v44 = (uint16 *)alloc(v43);
        *v40 = v44;
        if ( !v44 )
          return 1;
        memset(v44, 0, v43);
        v45 = &uca_weight[v39];
        for ( i = 0; i != 256; ++i )
        {
          v47 = uca_length[BYTE1(v63)];
          v48 = &(*v40)[i * *v42];
          v49 = (unsigned __int8)v47;
          v50 = (unsigned int)(i * v47);
          memcpy(v48, &(*v45)[v50], 2 * v49);
        }
        v41 = *v40;
      }
      memcpy(
        &v41[(unsigned __int8)v63 * *v42],
        &uca_weight[BYTE1(v64)][(unsigned __int8)v64 * uca_length[BYTE1(v64)]],
        2LL * uca_length[BYTE1(v64)]);
      (*v40)[(unsigned __int8)v63 * *v42] += v38->diff[0];
    }
    if ( ++v38 == &rule[(unsigned int)(v61 - 1) + 1] )
      break;
    v64 = v38->base;
    v63 = v38->curr[0];
  }
  v15 = newweights;
LABEL_83:
  for ( j = 0LL; j != 256; ++j )
  {
    while ( v15[j] )
    {
      if ( ++j == 256 )
        goto LABEL_87;
    }
    v15[j] = uca_weight[j];
  }
LABEL_87:
  cs_0->sort_order_big = v15;
  cs_0->contractions = 0LL;
  cs_0->sort_order = v65;
  if ( !ncontractions )
    return 0;
  v53 = (uint16 *)alloc(8448LL);
  cs_0->contractions = v53;
  if ( !v53 )
    return 1;
  memset(v53, 0, 0x2100uLL);
  v54 = cs_0->contractions + 2048;
  if ( !(_DWORD)v61 )
    return 0;
  v55 = rule;
  do
  {
    v56 = v55->curr[1];
    if ( (_DWORD)v56 )
    {
      v57 = &uca_weight[(unsigned __int8)BYTE1(v55->base)][(unsigned __int8)v55->base * uca_length[BYTE1(v55->base)]];
      if ( v57[1] )
        return 1;
      v58 = v55->curr[0];
      if ( (unsigned int)(v58 - 64) > 0x3F || (unsigned int)(v56 - 64) > 0x3F )
        return 1;
      cs_0->contractions[(unsigned int)((((_DWORD)v58 + 67108800) << 6) + v56 - 64)] = LOWORD(v55->diff[0]) + *v57;
      *((_BYTE *)v54 + v58) = 1;
      *((_BYTE *)v54 + v56) = 1;
    }
    ++v55;
  }
  while ( v55 != &rule[(unsigned int)(v61 - 1) + 1] );
  return 0;
};

// Line 8082: range 000000000CFC1E70-000000000CFC1E86
my_bool __fastcall my_coll_init_uca(CHARSET_INFO *cs_0, void *(*alloc)(size_t))
{
  cs_0->pad_char = 32;
  cs_0->ctype = my_charset_utf8_unicode_ci.ctype;
  return create_tailoring(cs_0, alloc);
};

// Line 8090: range 000000000CFC0AE0-000000000CFC0B08
int __fastcall my_strnncoll_any_uca(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  return my_strnncoll_uca(cs_0, &my_any_uca_scanner_handler, s, slen, t, tlen, t_is_prefix);
};

// Line 8100: range 000000000CFC14D0-000000000CFC14E3
int __fastcall my_strnncollsp_any_uca(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  return my_strnncollsp_uca(cs_0, &my_any_uca_scanner_handler, s, slen, t, tlen);
};

// Line 8109: range 000000000CFC0B10-000000000CFC0B23
void __fastcall my_hash_sort_any_uca(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  my_hash_sort_uca(cs_0, &my_any_uca_scanner_handler, s, slen, n1, n2);
};

// Line 8116: range 000000000CFC0B30-000000000CFC0B43
size_t __fastcall my_strnxfrm_any_uca(CHARSET_INFO *cs_0, uchar *dst, size_t dstlen, const uchar *src, size_t srclen)
{
  return my_strnxfrm_uca(cs_0, &my_any_uca_scanner_handler, dst, dstlen, src, srclen);
};

// Line 8129: range 000000000CFC0B50-000000000CFC0B78
int __fastcall my_strnncoll_ucs2_uca(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool t_is_prefix)
{
  return my_strnncoll_uca(cs_0, &my_ucs2_uca_scanner_handler, s, slen, t, tlen, t_is_prefix);
};

// Line 8139: range 000000000CFC14F0-000000000CFC1503
int __fastcall my_strnncollsp_ucs2_uca(
        CHARSET_INFO *cs_0,
        const uchar *s,
        size_t slen,
        const uchar *t,
        size_t tlen,
        my_bool diff_if_only_endspace_difference)
{
  return my_strnncollsp_uca(cs_0, &my_ucs2_uca_scanner_handler, s, slen, t, tlen);
};

// Line 8148: range 000000000CFC0B80-000000000CFC0B93
void __fastcall my_hash_sort_ucs2_uca(CHARSET_INFO *cs_0, const uchar *s, size_t slen, ulong *n1, ulong *n2)
{
  my_hash_sort_uca(cs_0, &my_ucs2_uca_scanner_handler, s, slen, n1, n2);
};

// Line 8155: range 000000000CFC0BA0-000000000CFC0BB3
size_t __fastcall my_strnxfrm_ucs2_uca(CHARSET_INFO *cs_0, uchar *dst, size_t dstlen, const uchar *src, size_t srclen)
{
  return my_strnxfrm_uca(cs_0, &my_ucs2_uca_scanner_handler, dst, dstlen, src, srclen);
};
