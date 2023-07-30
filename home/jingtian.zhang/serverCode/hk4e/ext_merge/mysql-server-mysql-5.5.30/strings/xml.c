// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/xml.c

// Line 84: range 000000000CFC67A0-000000000CFC6887
const char *__fastcall lex2str(int lex)
{
  const char *result; // rax

  switch ( lex )
  {
    case '!':
      result = "'!'";
      break;
    case '/':
      result = "'/'";
      break;
    case '<':
      result = "'<'";
      break;
    case '=':
      result = "'='";
      break;
    case '>':
      result = "'>'";
      break;
    case '?':
      result = "'?'";
      break;
    case 'C':
      result = "COMMENT";
      break;
    case 'D':
      result = "CDATA";
      break;
    case 'E':
      result = "END-OF-INPUT";
      break;
    case 'I':
      result = "IDENT";
      break;
    case 'S':
      result = "STRING";
      break;
    case 'T':
      result = "TEXT";
      break;
    default:
      result = "unknown token";
      break;
  }
  return result;
};

// Line 104: range 000000000CFC6890-000000000CFC6910
void __fastcall my_xml_norm_text(MY_XML_ATTR *a)
{
  const char *beg; // rdx
  const char *end; // r8
  const char *v3; // rax
  __int64 v4; // rsi
  const char *v5; // rax
  __int64 v6; // rsi

  beg = a->beg;
  end = a->end;
  if ( a->beg < end )
  {
    if ( (my_xml_ctype[*(unsigned __int8 *)beg] & 8) != 0 )
    {
      v3 = beg + 1;
      while ( 1 )
      {
        beg = v3;
        a->beg = v3;
        if ( v3 == end )
          break;
        v4 = *(unsigned __int8 *)v3++;
        if ( (my_xml_ctype[v4] & 8) == 0 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( (my_xml_ctype[*((unsigned __int8 *)end - 1)] & 8) != 0 )
      {
        v5 = end - 1;
        do
        {
          a->end = v5;
          if ( beg >= v5 )
            break;
          v6 = *(unsigned __int8 *)--v5;
        }
        while ( (my_xml_ctype[v6] & 8) != 0 );
      }
    }
  }
};

// Line 117: range 000000000CFC6BB0-000000000CFC6E8E
int __fastcall my_xml_scan(MY_XML_PARSER *p, MY_XML_ATTR *a)
{
  const char *cur; // rbx
  const char *end; // rcx
  const char *v4; // rax
  __int64 v5; // rdx
  int result; // eax
  const char *v7; // r13
  const char *v8; // r14
  const char *v9; // rbx
  __int64 v10; // r13
  const char *v11; // rbx
  const char *v12; // r14
  const char *v13; // rbx
  const char *v14; // rax
  const char *v15; // rdx
  bool v16; // zf
  const char *v17; // rax
  const char *v18; // rbx
  __int64 v19; // rdx

  cur = p->cur;
  end = p->end;
  if ( end <= cur )
  {
LABEL_6:
    a->beg = end;
    a->end = end;
    return 69;
  }
  if ( (my_xml_ctype[*(unsigned __int8 *)cur] & 8) != 0 )
  {
    v4 = cur + 1;
    do
    {
      cur = v4;
      p->cur = v4;
      if ( v4 == end )
        goto LABEL_6;
      v5 = *(unsigned __int8 *)v4++;
    }
    while ( (my_xml_ctype[v5] & 8) != 0 );
  }
  a->beg = cur;
  a->end = cur;
  v7 = p->cur;
  v8 = p->end;
  if ( v8 >= v7 + 4 && !memcmp(p->cur, "<!--", 4uLL) )
  {
    v9 = v7;
    if ( v8 > v7 )
    {
      do
      {
        v7 = v9 + 3;
        if ( v8 >= v9 + 3 && !memcmp(v9, "-->", 3uLL) )
        {
          p->cur = v7;
          goto LABEL_14;
        }
        p->cur = ++v9;
      }
      while ( v9 != v8 );
      v7 = v9;
    }
LABEL_14:
    a->end = v7;
    return 67;
  }
  if ( v8 < v7 + 9 || memcmp(v7, "<![CDATA[", 9uLL) )
  {
    v10 = *(unsigned __int8 *)v7;
    if ( strchr("?=/<>!", (char)v10) )
    {
      p->cur = cur + 1;
      a->end = cur + 1;
      return *cur;
    }
    if ( (_BYTE)v10 != 39 && (_BYTE)v10 != 34 )
    {
      result = 85;
      if ( (my_xml_ctype[v10] & 1) != 0 )
      {
        v17 = cur + 1;
        p->cur = cur + 1;
        if ( v8 > cur + 1 && (my_xml_ctype[*((unsigned __int8 *)cur + 1)] & 2) != 0 )
        {
          v18 = cur + 2;
          do
          {
            v17 = v18;
            p->cur = v18;
            if ( v18 == v8 )
              break;
            v19 = *(unsigned __int8 *)v18++;
          }
          while ( (my_xml_ctype[v19] & 2) != 0 );
        }
        a->end = v17;
        my_xml_norm_text(a);
        return 73;
      }
      return result;
    }
    p->cur = cur + 1;
    if ( v8 <= cur + 1 )
    {
      v15 = cur + 1;
    }
    else
    {
      if ( cur[1] == *cur )
      {
        v15 = cur + 1;
LABEL_47:
        a->end = v15;
        p->cur = v15 + 1;
        goto LABEL_37;
      }
      v14 = cur + 2;
      while ( 1 )
      {
        v15 = v14;
        p->cur = v14;
        if ( v14 == v8 )
          break;
        ++v14;
        if ( *v15 == *cur )
          goto LABEL_47;
      }
    }
    a->end = v15;
LABEL_37:
    v16 = (p->flags & 2) == 0;
    a->beg = cur + 1;
    result = 83;
    if ( v16 )
    {
      my_xml_norm_text(a);
      return 83;
    }
    return result;
  }
  v11 = cur + 9;
  v12 = v8 - 2;
  p->cur = v11;
  if ( v11 >= v12 )
    return 68;
  while ( *v11 != 93 || v11[1] != 93 || v11[2] != 62 )
  {
    p->cur = ++v11;
    if ( v11 == v12 )
      return 68;
  }
  v13 = v11 + 3;
  result = 68;
  p->cur = v13;
  a->end = v13;
  return result;
};

// Line 211: range 000000000CFC6920-000000000CFC6A24
int __fastcall my_xml_enter(MY_XML_PARSER *st, const char *str, size_t len)
{
  char *attr; // r12
  char *attrend; // rdi
  char *v7; // rax
  int result; // eax
  int (*enter)(xml_stack_st *, const char *, size_t); // rax
  int (*v10)(xml_stack_st *, const char *, size_t); // rcx

  attr = st->attr;
  attrend = st->attrend;
  if ( len + attrend - attr + 1 > 0x80 )
  {
    strcpy(st->errstr, "To deep XML");
    return 1;
  }
  else
  {
    if ( attrend > attr )
    {
      *attrend = 47;
      attrend = st->attrend + 1;
      st->attrend = attrend;
    }
    memcpy(attrend, str, len);
    v7 = &st->attrend[len];
    st->attrend = v7;
    *v7 = 0;
    result = st->flags & 1;
    if ( result )
    {
      enter = st->enter;
      if ( enter )
        return enter(st, str, len);
      else
        return 0;
    }
    else
    {
      v10 = st->enter;
      if ( v10 )
        return v10(st, attr, st->attrend - attr);
    }
  }
  return result;
};

// Line 241: range 000000000CFC6A30-000000000CFC6BA5
int __fastcall my_xml_leave(MY_XML_PARSER *p, const char *str, size_t slen)
{
  char *attr; // rcx
  char *attrend; // rdi
  char *v6; // rbx
  size_t v7; // r12
  int (*v8)(xml_stack_st *, const char *, size_t); // r8
  int result; // eax
  int (*leave_xml)(xml_stack_st *, const char *, size_t); // rcx
  size_t v11; // r13
  const char *v12; // rax
  char s[32]; // [rsp+0h] [rbp-78h] BYREF
  char g[32]; // [rsp+20h] [rbp-58h] BYREF

  attr = p->attr;
  attrend = p->attrend;
  v6 = attrend;
  if ( attrend <= attr )
  {
    v7 = 0LL;
LABEL_7:
    if ( *v6 == 47 )
      --v7;
  }
  else
  {
    v7 = -1LL;
    if ( *attrend != 47 )
    {
      do
      {
        if ( --v6 == attr )
        {
          v7 = attrend - v6;
          goto LABEL_7;
        }
      }
      while ( *v6 != 47 );
      v7 = attrend - v6 - 1;
      if ( v7 == slen )
        goto LABEL_10;
      goto LABEL_17;
    }
  }
  if ( v7 == slen )
  {
LABEL_10:
    if ( (p->flags & 1) != 0 )
    {
      leave_xml = p->leave_xml;
      result = 0;
      if ( leave_xml )
        result = ((__int64 (__fastcall *)(MY_XML_PARSER *, const char *))leave_xml)(p, str);
    }
    else
    {
      v8 = p->leave_xml;
      result = 0;
      if ( v8 )
        result = v8(p, attr, attrend - attr);
    }
    *v6 = 0;
    p->attrend = v6;
    return result;
  }
LABEL_17:
  if ( !str )
    goto LABEL_10;
  if ( slen > 0x1F )
    slen = 31LL;
  v11 = slen;
  memcpy(s, str, slen);
  s[v11] = 0;
  if ( v7 )
  {
    if ( v7 > 0x1F )
      v7 = 31LL;
    v12 = (const char *)memcpy(g, v6 + 1, v7);
    g[v7] = 0;
    sprintf(p->errstr, "'</%s>' unexpected ('</%s>' wanted)", s, v12);
    return 1;
  }
  else
  {
    sprintf(p->errstr, "'</%s>' unexpected (END-OF-INPUT wanted)", s);
    return 1;
  }
};

// Line 279: range 000000000CFC6EA0-000000000CFC732A
int __fastcall my_xml_parse(MY_XML_PARSER *p, const char *str, size_t len)
{
  const char *end; // rcx
  const char *cur; // rdx
  const char *v5; // rax
  bool v6; // zf
  int (*value)(xml_stack_st *, const char *, size_t); // rax
  int result; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r14d
  int v12; // r15d
  const char *beg; // rsi
  const char *v14; // rdx
  char v15; // r13
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  const char *v19; // rax
  int v20; // eax
  const char *v21; // rsi
  const char *v22; // rdx
  int (*v23)(xml_stack_st *, const char *, size_t); // rax
  const char *v24; // rsi
  const char *v25; // rdx
  int v26; // eax
  int v27; // eax
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rax
  int lex; // [rsp+Ch] [rbp-5Ch]
  MY_XML_ATTR a; // [rsp+10h] [rbp-58h] BYREF
  MY_XML_ATTR b; // [rsp+20h] [rbp-48h] BYREF

  end = &str[len];
  p->attrend = p->attr;
  p->beg = str;
  p->cur = str;
  p->end = &str[len];
  if ( str >= &str[len] )
  {
LABEL_14:
    result = 0;
    if ( p->attr[0] )
    {
      strcpy(p->errstr, "unexpected END-OF-INPUT");
      return 1;
    }
    return result;
  }
  while ( 1 )
  {
    if ( *str != 60 )
    {
      cur = p->cur;
      a.beg = str;
      if ( end > cur && *cur != 60 )
      {
        v5 = cur + 1;
        do
        {
          cur = v5;
          p->cur = v5;
          if ( v5 == end )
            break;
          ++v5;
        }
        while ( *(v5 - 1) != 60 );
      }
      v6 = (p->flags & 2) == 0;
      a.end = cur;
      if ( v6 )
      {
        my_xml_norm_text(&a);
        str = a.beg;
        cur = a.end;
      }
      if ( cur == str )
        goto LABEL_13;
      value = p->value;
      if ( !value )
        goto LABEL_13;
LABEL_12:
      value(p, str, cur - str);
      goto LABEL_13;
    }
    v9 = my_xml_scan(p, &a);
    if ( v9 == 67 )
      goto LABEL_13;
    if ( v9 == 68 )
    {
      str = a.beg + 9;
      a.beg += 9;
      cur = a.end - 3;
      value = p->value;
      a.end -= 3;
      if ( !value )
        goto LABEL_13;
      goto LABEL_12;
    }
    v10 = my_xml_scan(p, &a);
    if ( v10 != 47 )
      break;
    v27 = my_xml_scan(p, &a);
    if ( v27 != 73 )
    {
      v31 = lex2str(v27);
      sprintf(p->errstr, "%s unexpected (ident wanted)", v31);
      return 1;
    }
    if ( my_xml_leave(p, a.beg, a.end - a.beg) )
      return 1;
    v17 = my_xml_scan(p, &a);
    if ( v17 != 62 )
      goto LABEL_43;
LABEL_13:
    str = p->cur;
    end = p->end;
    if ( str >= end )
      goto LABEL_14;
  }
  if ( v10 == 33 )
  {
    v11 = 1;
    v10 = my_xml_scan(p, &a);
    v12 = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    if ( v10 == 63 )
    {
      LOBYTE(v12) = 1;
      v10 = my_xml_scan(p, &a);
    }
  }
  if ( v10 != 73 )
  {
    v29 = lex2str(v10);
    sprintf(p->errstr, "%s unexpected (ident or '/' wanted)", v29);
    return 1;
  }
  beg = a.beg;
  v14 = a.end;
  p->current_node_type = MY_XML_NODE_TAG;
  if ( my_xml_enter(p, beg, v14 - beg) )
    return 1;
  v15 = v11 & 1;
LABEL_29:
  do
  {
    v16 = my_xml_scan(p, &a);
    v17 = v16;
    if ( v16 != 73 && (v16 != 83 || !v15) )
      break;
    v18 = my_xml_scan(p, &b);
    v17 = v18;
    if ( v18 == 61 )
    {
      v20 = my_xml_scan(p, &b);
      if ( v20 != 83 && v20 != 73 )
      {
        v28 = lex2str(v20);
        sprintf(p->errstr, "%s unexpected (ident or string wanted)", v28);
        return 1;
      }
      v21 = a.beg;
      v22 = a.end;
      p->current_node_type = MY_XML_NODE_ATTR;
      if ( my_xml_enter(p, v21, v22 - v21) )
        return 1;
      v23 = p->value;
      if ( v23 )
      {
        if ( v23(p, b.beg, b.end - b.beg) )
          return 1;
      }
      goto LABEL_48;
    }
    if ( v18 == 73 )
    {
      v24 = a.beg;
      v25 = a.end;
      p->current_node_type = MY_XML_NODE_ATTR;
      if ( my_xml_enter(p, v24, v25 - v24) )
        return 1;
LABEL_48:
      if ( my_xml_leave(p, a.beg, a.end - a.beg) )
        return 1;
      goto LABEL_29;
    }
  }
  while ( v18 == 83 && v15 );
  if ( v17 == 47 )
  {
    if ( my_xml_leave(p, 0LL, 0LL) )
      return 1;
    v17 = my_xml_scan(p, &a);
  }
  if ( !v12 )
  {
LABEL_41:
    if ( !v11 )
    {
      if ( v17 == 62 )
        goto LABEL_13;
LABEL_43:
      v19 = lex2str(v17);
      sprintf(p->errstr, "%s unexpected ('>' wanted)", v19);
      return 1;
    }
    lex = v17;
    v26 = my_xml_leave(p, 0LL, 0LL);
    v17 = lex;
    if ( v26 )
      return 1;
    if ( lex != 62 )
      goto LABEL_43;
    goto LABEL_13;
  }
  if ( v17 == 63 )
  {
    if ( my_xml_leave(p, 0LL, 0LL) )
      return 1;
    v17 = my_xml_scan(p, &a);
    goto LABEL_41;
  }
  v30 = lex2str(v17);
  sprintf(p->errstr, "%s unexpected ('?' wanted)", v30);
  return 1;
};

// Line 446: range 000000000CFC7330-000000000CFC73B5
void __fastcall my_xml_parser_create(MY_XML_PARSER *p)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  int *v3; // rdi

  v1 = 328;
  if ( ((unsigned __int8)p & 1) == 0 )
  {
    if ( ((unsigned __int8)p & 2) == 0 )
      goto LABEL_3;
LABEL_12:
    p = (MY_XML_PARSER *)((char *)p + 2);
    v1 -= 2;
    HIWORD(p[-1].leave_xml) = 0;
    if ( ((unsigned __int8)p & 4) == 0 )
      goto LABEL_4;
    goto LABEL_13;
  }
  LOBYTE(p->flags) = 0;
  p = (MY_XML_PARSER *)((char *)p + 1);
  LOBYTE(v1) = 71;
  if ( ((unsigned __int8)p & 2) != 0 )
    goto LABEL_12;
LABEL_3:
  if ( ((unsigned __int8)p & 4) == 0 )
    goto LABEL_4;
LABEL_13:
  p->flags = 0;
  v1 -= 4;
  p = (MY_XML_PARSER *)((char *)p + 4);
LABEL_4:
  v2 = v1 >> 3;
  memset(p, 0, 8 * v2);
  v3 = &p->flags + 2 * v2;
  if ( (v1 & 4) != 0 )
    *v3++ = 0;
  if ( (v1 & 2) != 0 )
  {
    v3 = (int *)((char *)v3 + 2);
    *((_WORD *)v3 - 1) = 0;
  }
  if ( (v1 & 1) != 0 )
    *(_BYTE *)v3 = 0;
};

// Line 451: range 000000000CFC73C0-000000000CFC73D7
void __fastcall my_xml_parser_free(MY_XML_PARSER *p)
{
  ;
};

// Line 466: range 000000000CFC73E0-000000000CFC73E7
void __fastcall my_xml_set_enter_handler(MY_XML_PARSER *p, int (*action)(MY_XML_PARSER *, const char *, size_t))
{
  p->enter = action;
};

// Line 474: range 000000000CFC73F0-000000000CFC73F7
void __fastcall my_xml_set_leave_handler(MY_XML_PARSER *p, int (*action)(MY_XML_PARSER *, const char *, size_t))
{
  p->leave_xml = action;
};

// Line 480: range 000000000CFC7400-000000000CFC7407
void __fastcall my_xml_set_user_data(MY_XML_PARSER *p, void *user_data)
{
  p->user_data = user_data;
};

// Line 486: range 000000000CFC7410-000000000CFC7414
const char *__fastcall my_xml_error_string(MY_XML_PARSER *p)
{
  return p->errstr;
};

// Line 492: range 000000000CFC7420-000000000CFC7453
size_t __fastcall my_xml_error_pos(MY_XML_PARSER *p)
{
  const char *beg; // rcx
  const char *cur; // rax
  const char *v3; // rdx

  beg = p->beg;
  cur = p->cur;
  if ( beg < cur )
  {
    v3 = p->beg;
    do
    {
      if ( *v3 == 10 )
        beg = v3;
      ++v3;
    }
    while ( v3 != cur );
  }
  return cur - beg;
};

// Line 506: range 000000000CFC7460-000000000CFC748D
uint __fastcall my_xml_error_lineno(MY_XML_PARSER *p)
{
  const char *beg; // rdx
  const char *cur; // rsi
  uint result; // eax
  int v4; // ecx

  beg = p->beg;
  cur = p->cur;
  result = 0;
  if ( beg < cur )
  {
    do
    {
      v4 = *beg++ == 10;
      result += v4;
    }
    while ( beg != cur );
  }
  return result;
};
