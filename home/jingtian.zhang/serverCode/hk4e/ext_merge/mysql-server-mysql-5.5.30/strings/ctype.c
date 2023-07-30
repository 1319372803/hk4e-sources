// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/ctype.c

// Line 118: range 000000000CFC5C10-000000000CFC5C5E
my_cs_file_section_st *__fastcall cs_file_sec(const char *attr, size_t len)
{
  const char *str; // rsi
  my_cs_file_section_st *v4; // rbx

  str = sec[0].str;
  if ( !sec[0].str )
    return 0LL;
  v4 = sec;
  while ( strncmp(attr, str, len) )
  {
    ++v4;
    str = v4->str;
    if ( !str )
      return 0LL;
  }
  return v4;
};

// Line 150: range 000000000CFC5CB0-000000000CFC5D78
int __fastcall fill_uchar(uchar *a, uint size, const char *str, size_t len)
{
  uint v4; // r12d
  const char *v5; // rbp
  const char *v6; // rbx
  const char *v7; // r15
  uchar *v8; // r13

  v4 = 0;
  v5 = &str[len];
  v6 = str;
  if ( str < &str[len] )
  {
    while ( 1 )
    {
      while ( strchr(off_1A1AF811, *v6) )
      {
        if ( v5 <= ++v6 )
          return 0;
      }
      if ( v5 <= v6 )
        break;
      v7 = v6;
      do
        ++v7;
      while ( v7 != v5 && !strchr(off_1A1AF811, *v7) );
      if ( v7 == v6 )
        break;
      if ( v4 > size )
        break;
      v8 = &a[v4++];
      *v8 = strtoul(v6, 0LL, 16);
      if ( v5 <= v7 )
        break;
      v6 = v7;
    }
  }
  return 0;
};

// Line 185: range 000000000CFC5D80-000000000CFC5E43
int __fastcall cs_enter(MY_XML_PARSER *st, const char *attr, size_t len)
{
  char *user_data; // rbx
  my_cs_file_section_st *v4; // rax
  my_cs_file_section_st *v5; // rdx
  int state; // eax
  _DWORD *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rcx
  _DWORD *v11; // rdi

  user_data = (char *)st->user_data;
  v4 = cs_file_sec(attr, len);
  v5 = v4;
  if ( v4 )
  {
    state = v4->state;
    if ( state == 8 )
    {
      v8 = user_data + 2704;
      v9 = 176;
      if ( (((_BYTE)user_data - 112) & 1) != 0 )
      {
        user_data[2704] = 0;
        v8 = user_data + 2705;
        LOBYTE(v9) = -81;
      }
      if ( ((unsigned __int8)v8 & 2) != 0 )
      {
        v8 = (_DWORD *)((char *)v8 + 2);
        v9 -= 2;
        *((_WORD *)v8 - 1) = 0;
      }
      if ( ((unsigned __int8)v8 & 4) != 0 )
      {
        *v8 = 0;
        v9 -= 4;
        ++v8;
      }
      v10 = v9 >> 3;
      memset(v8, 0, 8 * v10);
      v11 = &v8[2 * v10];
      if ( (v9 & 4) != 0 )
        *v11++ = 0;
      if ( (v9 & 2) != 0 )
      {
        v11 = (_DWORD *)((char *)v11 + 2);
        *((_WORD *)v11 - 1) = 0;
      }
      if ( (v9 & 1) != 0 )
        *(_BYTE *)v11 = 0;
      state = v5->state;
    }
    if ( state == 9 )
      *((_QWORD *)user_data + 337) = 0LL;
  }
  return 0;
};

// Line 200: range 000000000CFC5C60-000000000CFC5CA3
int __fastcall cs_leave(MY_XML_PARSER *st, const char *attr, size_t len)
{
  _QWORD *user_data; // rbx
  my_cs_file_section_st *v4; // rax
  __int64 (__fastcall *v5)(_QWORD *); // rax

  user_data = st->user_data;
  v4 = cs_file_sec(attr, len);
  if ( v4 && v4->state == 9 && (v5 = (__int64 (__fastcall *)(_QWORD *))user_data[360]) != 0LL )
    return v5(user_data + 338);
  else
    return 0;
};

// Line 218: range 000000000CFC5E50-000000000CFC6246
int __fastcall cs_value(MY_XML_PARSER *st, const char *attr, size_t len)
{
  const char *v4; // rbx
  char *user_data; // r13
  size_t v6; // rax
  my_cs_file_section_st *v7; // rax
  int state; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  size_t v13; // r14
  const char *v14; // rax
  __int64 v15; // rbx
  size_t v16; // rbp
  size_t v17; // rbp
  void *v18; // rax
  const char *v19; // r12
  unsigned int v20; // r14d
  const char *v21; // rbp
  __int64 v22; // rax
  size_t v23; // rbp
  void *v24; // rax
  char *v25; // [rsp+8h] [rbp-80h]
  char arg[16]; // [rsp+10h] [rbp-78h] BYREF
  const char *cmd[5]; // [rsp+20h] [rbp-68h]

  v4 = attr;
  user_data = (char *)st->user_data;
  v6 = strlen(st->attr);
  v7 = cs_file_sec(st->attr, v6);
  if ( v7 )
  {
    state = v7->state;
    switch ( v7->state )
    {
      case 2:
        *((_DWORD *)user_data + 676) = strtol(attr, 0LL, 10);
        break;
      case 3:
        v16 = 31LL;
        if ( len <= 0x1F )
          v16 = len;
        memcpy(user_data, attr, v16);
        user_data[v16] = 0;
        *((_QWORD *)user_data + 340) = user_data;
        break;
      case 6:
        v17 = 31LL;
        if ( len <= 0x1F )
          v17 = len;
        v18 = memcpy(user_data + 32, attr, v17);
        user_data[v17 + 32] = 0;
        *((_QWORD *)user_data + 341) = v18;
        break;
      case 7:
        v9 = 8LL;
        if ( (__int64)len <= 8 )
          v9 = len;
        if ( !memcmp("primary", attr, v9) )
        {
          *((_DWORD *)user_data + 679) |= 0x20u;
        }
        else
        {
          v10 = 7LL;
          if ( (__int64)len <= 7 )
            v10 = len;
          if ( !memcmp("binary", v4, v10) )
          {
            *((_DWORD *)user_data + 679) |= 0x10u;
          }
          else
          {
            v11 = 9LL;
            if ( (__int64)len <= 9 )
              v11 = len;
            if ( !memcmp("compiled", v4, v11) )
              *((_DWORD *)user_data + 679) |= 1u;
          }
        }
        break;
      case 0xA:
        fill_uchar((uchar *)user_data + 577, 0x100u, attr, len);
        *((_QWORD *)user_data + 346) = user_data + 577;
        break;
      case 0xB:
        fill_uchar((uchar *)user_data + 321, 0x100u, attr, len);
        *((_QWORD *)user_data + 345) = user_data + 321;
        break;
      case 0xC:
        v19 = &attr[len];
        v20 = 0;
        v25 = user_data + 1090;
        if ( attr < v19 )
        {
          while ( 1 )
          {
            while ( strchr(off_1A1AF811, *v4) )
            {
              if ( v19 <= ++v4 )
                goto LABEL_46;
            }
            if ( v4 >= v19 )
              break;
            v21 = v4;
            do
              ++v21;
            while ( v21 != v19 && !strchr(off_1A1AF811, *v21) );
            if ( v4 == v21 )
              break;
            if ( v20 > 0x100 )
              break;
            v22 = v20++;
            *(_WORD *)&v25[2 * v22] = strtol(v4, 0LL, 16);
            if ( v19 <= v21 )
              break;
            v4 = v21;
          }
        }
LABEL_46:
        *((_QWORD *)user_data + 350) = v25;
        break;
      case 0xD:
        fill_uchar((uchar *)user_data + 833, 0x100u, attr, len);
        *((_QWORD *)user_data + 347) = user_data + 833;
        break;
      case 0xE:
        fill_uchar((uchar *)user_data + 64, 0x101u, attr, len);
        *((_QWORD *)user_data + 344) = user_data + 64;
        break;
      case 0xF:
        *((_DWORD *)user_data + 677) = strtol(attr, 0LL, 10);
        break;
      case 0x10:
        *((_DWORD *)user_data + 678) = strtol(attr, 0LL, 10);
        break;
      case 0x11:
        v23 = 63LL;
        if ( len <= 0x3F )
          v23 = len;
        v24 = memcpy(user_data + 1602, attr, v23);
        user_data[v23 + 1602] = 0;
        *((_QWORD *)user_data + 342) = v24;
        break;
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        v13 = 15LL;
        cmd[0] = "&";
        if ( len <= 0xF )
          v13 = len;
        cmd[1] = "<";
        cmd[2] = "<<";
        cmd[3] = "<<<";
        cmd[4] = "=";
        *((_QWORD *)user_data + 343) = user_data + 1666;
        v14 = (const char *)memcpy(arg, attr, v13);
        arg[v13] = 0;
        v15 = *((_QWORD *)user_data + 337);
        if ( (unsigned __int64)(v15 + 20) <= 0x3FF )
          *((_QWORD *)user_data + 337) = sprintf(&user_data[v15 + 1666], " %s %s", cmd[state - 18], v14) + v15;
        break;
      default:
        return 0;
    }
  }
  return 0;
};

// Line 299: range 000000000CFC6250-000000000CFC62DD
my_bool __fastcall my_parse_charset_xml(const char *buf, size_t len, int (*add_collation)(CHARSET_INFO *))
{
  int v4; // ebp
  MY_XML_PARSER p; // [rsp+0h] [rbp-CC8h] BYREF
  my_cs_file_info i; // [rsp+150h] [rbp-B78h] BYREF

  my_xml_parser_create(&p);
  my_xml_set_enter_handler(&p, cs_enter);
  my_xml_set_value_handler(&p, cs_value);
  my_xml_set_leave_handler(&p, cs_leave);
  i.add_collation = add_collation;
  my_xml_set_user_data(&p, &i);
  v4 = my_xml_parse(&p, buf, len);
  my_xml_parser_free(&p);
  return v4 != 0;
};

// Line 321: range 000000000CFC62E0-000000000CFC636D
uint __fastcall my_string_repertoire(CHARSET_INFO *cs_0, const char *str, ulong length)
{
  const uchar *v3; // r12
  const char *v4; // rbx
  int v5; // eax
  ulong wc[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (const uchar *)&str[length];
  v4 = str;
  if ( cs_0->mbminlen != 1 )
  {
    while ( 1 )
    {
      v5 = cs_0->cset->mb_wc(cs_0, wc, (const uchar *)v4, v3);
      if ( v5 <= 0 )
        break;
      if ( wc[0] > 0x7F )
        return 3;
      v4 += v5;
    }
    return 1;
  }
  if ( str >= (const char *)v3 )
    return 1;
  while ( *v4 >= 0 )
  {
    if ( ++v4 == (const char *)v3 )
      return 1;
  }
  return 3;
};

// Line 352: range 000000000CFC6370-000000000CFC6383
uint __fastcall my_charset_repertoire(CHARSET_INFO *cs_0)
{
  return (cs_0->state & 0x1000) == 0 ? 3 : 1;
};

// Line 387: range 000000000CFC6390-000000000CFC63DA
my_bool __fastcall my_charset_is_ascii_based(CHARSET_INFO *cs_0)
{
  uint mbmaxlen; // edx
  my_bool result; // al
  uint16 *tab_to_uni; // rax

  mbmaxlen = cs_0->mbmaxlen;
  if ( mbmaxlen == 1 )
  {
    tab_to_uni = cs_0->tab_to_uni;
    return tab_to_uni && tab_to_uni[123] == 123;
  }
  else
  {
    result = 0;
    if ( cs_0->mbminlen == 1 )
      return mbmaxlen > 1;
  }
  return result;
};

// Line 403: range 000000000CFC63E0-000000000CFC6415
my_bool __fastcall my_charset_is_8bit_pure_ascii(CHARSET_INFO *cs_0)
{
  uint16 *tab_to_uni; // rdx
  __int64 v2; // rax

  tab_to_uni = cs_0->tab_to_uni;
  if ( tab_to_uni )
  {
    v2 = 0LL;
    while ( tab_to_uni[v2] <= 0x7Fu )
    {
      if ( ++v2 == 256 )
        return 1;
    }
  }
  return 0;
};

// Line 423: range 000000000CFC6420-000000000CFC6455
my_bool __fastcall my_charset_is_ascii_compatible(CHARSET_INFO *cs_0)
{
  uint16 *tab_to_uni; // rcx
  __int64 v2; // rax

  tab_to_uni = cs_0->tab_to_uni;
  if ( !tab_to_uni )
    return 1;
  v2 = 0LL;
  while ( tab_to_uni[v2] == (_DWORD)v2 )
  {
    if ( ++v2 == 128 )
      return 1;
  }
  return 0;
};
