// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/charset.c

// Line 36: range 000000000CFB6070-000000000CFB6095
my_bool __fastcall my_charset_same(CHARSET_INFO *cs1, CHARSET_INFO *cs2)
{
  return cs1 == cs2 || strcmp(cs1->csname, cs2->csname) == 0;
};

// Line 42: range 000000000CFB54F0-000000000CFB5556
uint __fastcall get_collation_number_internal(const char *name)
{
  uint **v1; // rbx
  const char *v2; // rsi

  v1 = (uint **)all_charsets;
  do
  {
    if ( *v1 )
    {
      v2 = (const char *)*((_QWORD *)*v1 + 3);
      if ( v2 )
      {
        if ( !my_charset_latin1.coll->strcasecmp(&my_charset_latin1, v2, name) )
          return **v1;
      }
    }
    ++v1;
  }
  while ( v1 < (uint **)&all_charsets[2048] );
  return 0;
};

// Line 57: range 000000000CFB55E0-000000000CFB5793
my_bool __fastcall init_state_maps(CHARSET_INFO *cs_0)
{
  uchar *v1; // rax
  uchar *v2; // r14
  uchar *state_map; // r12
  __int64 v4; // rbx
  uchar *v5; // rbp
  __int64 v6; // rdx
  my_bool result; // al

  v1 = (uchar *)my_once_alloc(0x100uLL, 16);
  cs_0->state_map = v1;
  if ( !v1 )
    return 1;
  v2 = (uchar *)my_once_alloc(0x100uLL, 16);
  cs_0->ident_map = v2;
  if ( !v2 )
    return 1;
  state_map = cs_0->state_map;
  v4 = 1LL;
  v5 = state_map;
  do
  {
    if ( (cs_0->ctype[v4] & 3) != 0 )
      goto LABEL_8;
    if ( (cs_0->ctype[v4] & 4) != 0 )
    {
      *v5 = 14;
      goto LABEL_6;
    }
    if ( cs_0->cset->mbcharlen(cs_0, (_DWORD)v5 - (_DWORD)state_map) > 1 )
    {
LABEL_8:
      *v5 = 2;
    }
    else if ( (cs_0->ctype[v4] & 8) != 0 )
    {
      *v5 = 26;
    }
    else
    {
      *v5 = 1;
    }
LABEL_6:
    ++v4;
    ++v5;
  }
  while ( v4 != 257 );
  state_map[36] = 2;
  state_map[95] = 2;
  v6 = 0LL;
  state_map[39] = 10;
  state_map[46] = 16;
  state_map[33] = 8;
  state_map[61] = 8;
  state_map[62] = 8;
  state_map[60] = 9;
  state_map[124] = 17;
  state_map[38] = 17;
  state_map[35] = 11;
  state_map[59] = 22;
  state_map[58] = 23;
  *state_map = 18;
  state_map[92] = 19;
  state_map[47] = 20;
  state_map[42] = 21;
  state_map[64] = 24;
  state_map[96] = 27;
  state_map[34] = 33;
  do
  {
    v2[v6] = state_map[v6] == 2 || state_map[v6] == 14;
    ++v6;
  }
  while ( v6 != 256 );
  state_map[88] = 30;
  state_map[120] = 30;
  result = 0;
  state_map[66] = 31;
  state_map[98] = 31;
  state_map[78] = 32;
  state_map[110] = 32;
  return result;
};

// Line 221: range 000000000CFB57B0-000000000CFB5E0F
int __fastcall add_collation(CHARSET_INFO *cs_0)
{
  const char *name; // rdi
  uint number; // eax
  __int64 v4; // r13
  CHARSET_INFO *v5; // rbp
  uint state; // edx
  int v7; // edx
  const char *comment; // rdi
  char *v9; // rax
  const char *csname; // rdi
  char *v11; // rax
  const char *v12; // rdi
  char *v13; // rax
  int result; // eax
  const char *v15; // rdi
  char *v16; // rax
  const char *v17; // rdi
  char *v18; // rax
  const char *v19; // rdi
  char *v20; // rax
  uchar *ctype; // rdi
  uchar *v22; // rax
  uchar *to_lower; // rdi
  uchar *v24; // rax
  uchar *to_upper; // rdi
  uchar *v26; // rax
  uchar *sort_order; // rdi
  uchar *v28; // rax
  uint16 *tab_to_uni; // rdi
  uint16 *v30; // rax
  const char *tailoring; // rdi
  char *v32; // rax
  const char *v33; // rax
  CHARSET_INFO *v34; // rax
  uint mbmaxlen; // eax
  uint v36; // edx
  uchar *v37; // rax
  CHARSET_INFO *v38; // rdx
  unsigned int v39; // edx
  CHARSET_INFO *v40; // rdi
  __int64 v41; // rcx
  uint *v42; // rdi
  uint v43; // edx
  uchar *v44; // rax
  __int64 v45; // rcx
  CHARSET_INFO *v46; // rax
  uchar *v47; // rdx
  CHARSET_INFO *v48; // rdi
  uint v49; // eax
  uint v50; // ecx
  uchar v51; // cl
  CHARSET_INFO *v52; // rax
  CHARSET_INFO *v53; // rax

  name = cs_0->name;
  if ( !name )
    return 0;
  number = cs_0->number;
  if ( !cs_0->number )
  {
    number = get_collation_number_internal(name);
    cs_0->number = number;
    if ( !number )
      return 0;
  }
  if ( number > 0x7FF )
    return 0;
  v4 = number;
  v5 = all_charsets[number];
  if ( v5 )
  {
LABEL_5:
    state = cs_0->state;
    if ( cs_0->primary_number == number )
    {
      state |= 0x20u;
      cs_0->state = state;
    }
    if ( cs_0->binary_number == number )
    {
      state |= 0x10u;
      cs_0->state = state;
    }
    v7 = v5->state | state;
    v5->state = v7;
    if ( (v7 & 1) != 0 )
    {
      comment = cs_0->comment;
      v5->number = number;
      if ( !comment || (v9 = my_once_strdup(comment, 16), (v5->comment = v9) != 0LL) )
      {
        csname = cs_0->csname;
        if ( !csname || (v11 = my_once_strdup(csname, 16), (v5->csname = v11) != 0LL) )
        {
          v12 = cs_0->name;
          if ( !v12 )
            goto LABEL_16;
          v13 = my_once_strdup(v12, 16);
          v5->name = v13;
          if ( v13 )
            goto LABEL_16;
        }
      }
      return 1;
    }
    if ( !number )
      number = v5->number;
    v15 = cs_0->csname;
    v5->number = number;
    if ( v15 )
    {
      v16 = my_once_strdup(v15, 16);
      v5->csname = v16;
      if ( !v16 )
        return 1;
    }
    v17 = cs_0->name;
    if ( v17 )
    {
      v18 = my_once_strdup(v17, 16);
      v5->name = v18;
      if ( !v18 )
        return 1;
    }
    v19 = cs_0->comment;
    if ( v19 )
    {
      v20 = my_once_strdup(v19, 16);
      v5->comment = v20;
      if ( !v20 )
        return 1;
    }
    ctype = cs_0->ctype;
    if ( ctype )
    {
      v22 = (uchar *)my_once_memdup(ctype, 0x101uLL, 16);
      v5->ctype = v22;
      if ( !v22 || init_state_maps(v5) )
        return 1;
    }
    to_lower = cs_0->to_lower;
    if ( to_lower )
    {
      v24 = (uchar *)my_once_memdup(to_lower, 0x100uLL, 16);
      v5->to_lower = v24;
      if ( !v24 )
        return 1;
    }
    to_upper = cs_0->to_upper;
    if ( to_upper )
    {
      v26 = (uchar *)my_once_memdup(to_upper, 0x100uLL, 16);
      v5->to_upper = v26;
      if ( !v26 )
        return 1;
    }
    sort_order = cs_0->sort_order;
    if ( sort_order )
    {
      v28 = (uchar *)my_once_memdup(sort_order, 0x100uLL, 16);
      v5->sort_order = v28;
      if ( !v28 )
        return 1;
    }
    tab_to_uni = cs_0->tab_to_uni;
    if ( tab_to_uni )
    {
      v30 = (uint16 *)my_once_memdup(tab_to_uni, 0x200uLL, 16);
      v5->tab_to_uni = v30;
      if ( !v30 )
        return 1;
    }
    tailoring = cs_0->tailoring;
    if ( tailoring )
    {
      v32 = my_once_strdup(tailoring, 16);
      v5->tailoring = v32;
      if ( !v32 )
        return 1;
    }
    v33 = cs_0->csname;
    v5->casedn_multiply = 1;
    v5->caseup_multiply = 1;
    if ( !strcmp(v33, "ucs2") )
    {
      v34 = &my_charset_ucs2_unicode_ci;
LABEL_45:
      v5->cset = v34->cset;
      v5->coll = v34->coll;
      v5->strxfrm_multiply = v34->strxfrm_multiply;
      v5->min_sort_char = v34->min_sort_char;
      v5->max_sort_char = v34->max_sort_char;
      v5->mbminlen = v34->mbminlen;
      mbmaxlen = v34->mbmaxlen;
      v5->state |= 0x22C8u;
      v5->mbmaxlen = mbmaxlen;
      goto LABEL_16;
    }
    if ( !strcmp(v33, "utf8") || !strcmp(v33, "utf8mb3") )
    {
      v5->cset = my_charset_utf8_unicode_ci.cset;
      v5->coll = my_charset_utf8_unicode_ci.coll;
      v5->strxfrm_multiply = my_charset_utf8_unicode_ci.strxfrm_multiply;
      v5->min_sort_char = my_charset_utf8_unicode_ci.min_sort_char;
      v5->max_sort_char = my_charset_utf8_unicode_ci.max_sort_char;
      v5->mbminlen = my_charset_utf8_unicode_ci.mbminlen;
      v43 = my_charset_utf8_unicode_ci.mbmaxlen;
      v5->state |= 0x2C8u;
      v44 = my_charset_utf8_unicode_ci.ctype;
      v5->mbmaxlen = v43;
      v5->ctype = v44;
      if ( init_state_maps(v5) )
        return 1;
LABEL_16:
      cs_0->number = 0;
      cs_0->primary_number = 0;
      cs_0->binary_number = 0;
      cs_0->name = 0LL;
      cs_0->state = 0;
      cs_0->sort_order = 0LL;
      return 0;
    }
    if ( !strcmp(v33, "utf8mb4") )
    {
      v5->cset = my_charset_utf8mb4_unicode_ci.cset;
      v5->coll = my_charset_utf8mb4_unicode_ci.coll;
      v5->strxfrm_multiply = my_charset_utf8mb4_unicode_ci.strxfrm_multiply;
      v5->min_sort_char = my_charset_utf8mb4_unicode_ci.min_sort_char;
      v5->max_sort_char = my_charset_utf8mb4_unicode_ci.max_sort_char;
      v5->mbminlen = my_charset_utf8mb4_unicode_ci.mbminlen;
      v36 = my_charset_utf8mb4_unicode_ci.mbmaxlen;
      v37 = my_charset_utf8mb4_unicode_ci.ctype;
      v5->state |= 0x2C8u;
      v5->mbmaxlen = v36;
      v5->ctype = v37;
      goto LABEL_16;
    }
    if ( !strcmp(v33, "utf16") )
    {
      v34 = &my_charset_utf16_unicode_ci;
      goto LABEL_45;
    }
    if ( !strcmp(v33, "utf32") )
    {
      v34 = &my_charset_utf32_unicode_ci;
      goto LABEL_45;
    }
    v45 = cs_0->number;
    v46 = all_charsets[v45];
    v47 = v46->sort_order;
    if ( (v46->state & 0x10) != 0 )
      v46->coll = &my_collation_8bit_bin_handler;
    else
      v46->coll = &my_collation_8bit_simple_ci_handler;
    v46->cset = &my_charset_8bit_handler;
    v48 = all_charsets[v45];
    v5->mbminlen = 1;
    v5->mbmaxlen = 1;
    if ( v48->csname && v48->tab_to_uni && v48->ctype && v48->to_upper && v48->to_lower && v48->number && v48->name )
    {
      if ( !v48->sort_order )
      {
        v49 = v48->state;
        if ( (v49 & 0x10) == 0 )
          goto LABEL_82;
      }
      v48->state |= 8u;
    }
    v49 = v48->state;
LABEL_82:
    v50 = v49;
    BYTE1(v50) = BYTE1(v49) | 2;
    v48->state = v50;
    if ( v47 )
    {
      v51 = v47[97];
      if ( v47[65] < v51 && v51 < v47[66] )
      {
        BYTE1(v49) |= 6u;
        v48->state = v49;
      }
    }
    if ( my_charset_is_8bit_pure_ascii(v48) )
    {
      v52 = all_charsets[cs_0->number];
      v52->state |= 0x1000u;
    }
    if ( !my_charset_is_ascii_compatible(cs_0) )
    {
      v53 = all_charsets[cs_0->number];
      v53->state |= 0x2000u;
    }
    goto LABEL_16;
  }
  v38 = (CHARSET_INFO *)my_once_alloc(0xB0uLL, 0);
  all_charsets[v4] = v38;
  result = 1;
  if ( v38 )
  {
    v39 = 176;
    v40 = all_charsets[cs_0->number];
    if ( ((unsigned __int8)v40 & 1) != 0 )
    {
      LOBYTE(v40->number) = 0;
      LOBYTE(v39) = -81;
      v40 = (CHARSET_INFO *)((char *)v40 + 1);
    }
    if ( ((unsigned __int8)v40 & 2) != 0 )
    {
      v40 = (CHARSET_INFO *)((char *)v40 + 2);
      v39 -= 2;
      HIWORD(v40[-1].coll) = 0;
    }
    if ( ((unsigned __int8)v40 & 4) != 0 )
    {
      v40->number = 0;
      v39 -= 4;
      v40 = (CHARSET_INFO *)((char *)v40 + 4);
    }
    v41 = v39 >> 3;
    memset(v40, 0, 8 * v41);
    v42 = &v40->number + 2 * v41;
    if ( (v39 & 4) != 0 )
      *v42++ = 0;
    if ( (v39 & 2) != 0 )
    {
      v42 = (uint *)((char *)v42 + 2);
      *((_WORD *)v42 - 1) = 0;
    }
    if ( (v39 & 1) != 0 )
      *(_BYTE *)v42 = 0;
    number = cs_0->number;
    v5 = all_charsets[cs_0->number];
    goto LABEL_5;
  }
  return result;
};

// Line 358: range 000000000CFB5E20-000000000CFB605C
my_bool __fastcall my_read_charset_file(const char *filename, myf myflags)
{
  size_t st_size_low; // rbp
  uchar *v5; // r14
  PSI_file_locker *v6; // rax
  int v7; // r12d
  PSI_file_locker *v8; // r8
  size_t v9; // rax
  size_t v10; // rsi
  size_t v11; // r15
  PSI_file_locker *v12; // r8
  PSI_file_locker *v13; // [rsp+8h] [rbp-130h]
  PSI_file_locker *v14; // [rsp+8h] [rbp-130h]
  PSI_file_locker *v15; // [rsp+18h] [rbp-120h] BYREF
  char v16[80]; // [rsp+20h] [rbp-118h] BYREF
  stat stat_info; // [rsp+70h] [rbp-C8h] BYREF

  if ( !my_stat(filename, &stat_info, myflags) )
    return 1;
  st_size_low = LODWORD(stat_info.st_size);
  if ( LODWORD(stat_info.st_size) > 0x100000uLL )
    return 1;
  v5 = (uchar *)my_malloc(LODWORD(stat_info.st_size), myflags);
  if ( !v5 )
    return 1;
  v15 = 0LL;
  if ( PSI_server )
  {
    v6 = PSI_server->get_thread_file_name_locker(v16, key_file_charset, 2LL, filename, &v15);
    v15 = v6;
    if ( v6 )
      PSI_server->start_file_open_wait(
        v6,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/charset.c",
        369LL);
  }
  v7 = my_open(filename, 0, myflags);
  if ( v15 )
    PSI_server->end_file_open_wait_and_bind_to_descriptor(v15, v7);
  if ( v7 < 0 )
    goto error;
  if ( PSI_server && (v8 = PSI_server->get_thread_file_descriptor_locker(v16, (unsigned int)v7, 6LL)) != 0LL )
  {
    v13 = v8;
    PSI_server->start_file_wait(
      v8,
      st_size_low,
      "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/charset.c",
      371LL);
    v9 = my_read(v7, v5, st_size_low, myflags);
    v10 = 0LL;
    v11 = v9;
    if ( (myflags & 6) != 0 )
    {
      if ( !v9 )
        v10 = st_size_low;
    }
    else if ( v9 != -1LL )
    {
      v10 = v9;
    }
    PSI_server->end_file_wait(v13, v10);
  }
  else
  {
    v11 = my_read(v7, v5, st_size_low, myflags);
  }
  if ( PSI_server && (v12 = PSI_server->get_thread_file_descriptor_locker(v16, (unsigned int)v7, 4LL)) != 0LL )
  {
    v14 = v12;
    PSI_server->start_file_wait(
      v12,
      0LL,
      "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/charset.c",
      372LL);
    my_close(v7, myflags);
    PSI_server->end_file_wait(v14, 0LL);
  }
  else
  {
    my_close(v7, myflags);
  }
  if ( st_size_low != v11 )
  {
error:
    my_free(v5);
    return 1;
  }
  my_parse_charset_xml((const char *)v5, st_size_low, add_collation);
  my_free(v5);
  return 0;
};

// Line 396: range 000000000CFB60A0-000000000CFB6157
char *__fastcall get_charsets_dir(char *buf)
{
  if ( charsets_dir )
  {
    strmake(buf, charsets_dir, 0x1FFuLL);
  }
  else if ( test_if_hard_path("/usr/local/mysql/share") || is_prefix("/usr/local/mysql/share", "/usr/local/mysql") )
  {
    strxmov(buf, "/usr/local/mysql/share", dirsep, "charsets/", 0LL);
  }
  else
  {
    strxmov(buf, "/usr/local/mysql", dirsep, "/usr/local/mysql/share", dirsep, "charsets/", 0LL);
  }
  return convert_dirname(buf, buf, 0LL);
};

// Line 423: range 000000000CFB6370-000000000CFB6384
void __fastcall add_compiled_collation(CHARSET_INFO *cs_0)
{
  all_charsets[cs_0->number] = cs_0;
  cs_0->state |= 0x200u;
};

// Line 429: range 000000000CFB57A0-000000000CFB57A5
void *__fastcall cs_alloc(size_t size)
{
  return my_once_alloc(size, 16);
};

// Line 437: range 000000000CFB6160-000000000CFB61E9
void __cdecl init_available_charsets()
{
  CHARSET_INFO **v0; // rbx
  CHARSET_INFO *v1; // rdi
  char fname[522]; // [rsp+0h] [rbp-228h] BYREF

  v0 = all_charsets;
  memset(all_charsets, 0, sizeof(all_charsets));
  init_compiled_charsets(0);
  do
  {
    v1 = *v0;
    if ( *v0 && v1->ctype && init_state_maps(v1) )
      *v0 = 0LL;
    ++v0;
  }
  while ( v0 < &all_charsets[2047] );
  strcpy(get_charsets_dir(fname), "Index.xml");
  my_read_charset_file(fname, 0);
};

// Line 464: range 000000000CFB6390-000000000CFB639A
void __cdecl free_charsets()
{
  charsets_initialized = 0;
};

// Line 481: range 000000000CFB63A0-000000000CFB641A
uint __fastcall get_collation_number(const char *name)
{
  uint collation_number_internal; // ebx
  char alias[64]; // [rsp+0h] [rbp-58h] BYREF

  pthread_once(&charsets_initialized, init_available_charsets);
  collation_number_internal = get_collation_number_internal(name);
  if ( collation_number_internal || strncasecmp(name, "utf8mb3_", 8uLL) )
    return collation_number_internal;
  my_snprintf(alias, 0x40uLL, "utf8_%s", name + 8);
  return get_collation_number_internal(alias);
};

// Line 495: range 000000000CFB5560-000000000CFB55DC
uint __fastcall get_charset_number_internal(const char *charset_name, uint cs_flags)
{
  uint **v3; // rbx
  uint *v4; // rax
  const char *v5; // rsi

  v3 = (uint **)all_charsets;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v5 = (const char *)*((_QWORD *)v4 + 2);
      if ( v5 )
      {
        if ( (cs_flags & v4[3]) != 0 && !my_charset_latin1.coll->strcasecmp(&my_charset_latin1, v5, charset_name) )
          return **v3;
      }
    }
    ++v3;
  }
  while ( v3 < (uint **)&all_charsets[2048] );
  return 0;
};

// Line 520: range 000000000CFB6420-000000000CFB6485
uint __fastcall get_charset_number(const char *charset_name, uint cs_flags)
{
  uint charset_number_internal; // ebx

  pthread_once(&charsets_initialized, init_available_charsets);
  charset_number_internal = get_charset_number_internal(charset_name, cs_flags);
  if ( charset_number_internal || my_charset_latin1.coll->strcasecmp(&my_charset_latin1, charset_name, "utf8mb3") )
    return charset_number_internal;
  else
    return get_charset_number_internal("utf8", cs_flags);
};

// Line 532: range 000000000CFB6490-000000000CFB64E3
const char *__fastcall get_charset_name(uint charset_number)
{
  const char *result; // rax
  CHARSET_INFO *v2; // rdx

  pthread_once(&charsets_initialized, init_available_charsets);
  result = "?";
  if ( charset_number <= 0x7FF )
  {
    v2 = all_charsets[charset_number];
    if ( v2 )
    {
      if ( v2->number == charset_number )
      {
        result = v2->name;
        if ( !result )
          return "?";
      }
    }
  }
  return result;
};

// Line 548: range 000000000CFB61F0-000000000CFB6365
CHARSET_INFO *__fastcall get_internal_charset(uint cs_number, myf flags)
{
  CHARSET_INFO *v2; // rbx
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v6; // r14
  int v7; // eax
  uint state; // eax
  my_bool (*init)(charset_info_st *, void *(*)(size_t)); // rax
  my_bool (*v10)(charset_info_st *, void *(*)(size_t)); // rax
  const char *csname; // r15
  char *charsets_dir; // rax
  char buf[512]; // [rsp+0h] [rbp-238h] BYREF

  v2 = all_charsets[cs_number];
  if ( !v2 || (v2->state & 0x100) != 0 )
    return v2;
  if ( PSI_server
    && (m_psi = THR_LOCK_charset.m_psi) != 0LL
    && (v6 = PSI_server->get_thread_mutex_locker(buf, m_psi, 0LL)) != 0LL )
  {
    PSI_server->start_mutex_wait(
      v6,
      "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/charset.c",
      563LL);
    v7 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_charset);
    PSI_server->end_mutex_wait(v6, v7);
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_charset);
  }
  state = v2->state;
  if ( (state & 9) == 0 )
  {
    csname = v2->csname;
    charsets_dir = get_charsets_dir(buf);
    strxmov(charsets_dir, csname, ".xml", 0LL);
    my_read_charset_file(buf, flags);
    state = v2->state;
  }
  if ( (state & 0x200) == 0 )
    goto LABEL_11;
  if ( (state & 0x100) == 0 )
  {
    init = v2->cset->init;
    if ( init && init(v2, cs_alloc) || (v10 = v2->coll->init) != 0LL && v10(v2, cs_alloc) )
    {
LABEL_11:
      v2 = 0LL;
      goto LABEL_12;
    }
    v2->state |= 0x100u;
  }
LABEL_12:
  if ( PSI_server && THR_LOCK_charset.m_psi )
    ((void (*)(void))PSI_server->unlock_mutex)();
  pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_charset);
  return v2;
};

// Line 592: range 000000000CFB64F0-000000000CFB65AF
CHARSET_INFO *__fastcall get_charset(uint cs_number, myf flags)
{
  CHARSET_INFO *internal_charset; // rbx
  char cs_string[23]; // [rsp+0h] [rbp-258h] BYREF
  char index_file[522]; // [rsp+20h] [rbp-238h] BYREF

  internal_charset = default_charset_info;
  if ( default_charset_info->number != cs_number )
  {
    pthread_once(&charsets_initialized, init_available_charsets);
    if ( cs_number <= 0x7FF )
    {
      internal_charset = get_internal_charset(cs_number, (unsigned __int8)flags);
      if ( internal_charset )
        return internal_charset;
      if ( (flags & 0x10) != 0 )
      {
        strcpy(get_charsets_dir(index_file), "Index.xml");
        cs_string[0] = 35;
        int10_to_str(cs_number, &cs_string[1], 10);
        my_error(22, 4, cs_string, index_file);
        return internal_charset;
      }
    }
    return 0LL;
  }
  return internal_charset;
};

// Line 616: range 000000000CFB65C0-000000000CFB6655
CHARSET_INFO *__fastcall get_charset_by_name(const char *cs_name, myf flags)
{
  uint collation_number; // eax
  CHARSET_INFO *internal_charset; // rbx
  char index_file[522]; // [rsp+0h] [rbp-228h] BYREF

  pthread_once(&charsets_initialized, init_available_charsets);
  collation_number = get_collation_number(cs_name);
  if ( !collation_number || (internal_charset = get_internal_charset(collation_number, (unsigned __int8)flags)) == 0LL )
  {
    internal_charset = 0LL;
    if ( (flags & 0x10) != 0 )
    {
      strcpy(get_charsets_dir(index_file), "Index.xml");
      my_error(28, 4, cs_name, index_file);
    }
  }
  return internal_charset;
};

// Line 638: range 000000000CFB6660-000000000CFB66F5
CHARSET_INFO *__fastcall get_charset_by_csname(const char *cs_name, uint cs_flags, myf flags)
{
  uint charset_number; // eax
  CHARSET_INFO *internal_charset; // rbx
  char index_file[522]; // [rsp+0h] [rbp-228h] BYREF

  pthread_once(&charsets_initialized, init_available_charsets);
  charset_number = get_charset_number(cs_name, cs_flags);
  if ( !charset_number || (internal_charset = get_internal_charset(charset_number, flags)) == 0LL )
  {
    internal_charset = 0LL;
    if ( (flags & 0x10) != 0 )
    {
      strcpy(get_charsets_dir(index_file), "Index.xml");
      my_error(22, 4, cs_name, index_file);
    }
  }
  return internal_charset;
};

// Line 679: range 000000000CFB6700-000000000CFB6741
my_bool __fastcall resolve_charset(const char *cs_name, CHARSET_INFO *default_cs, CHARSET_INFO **cs_0)
{
  CHARSET_INFO *charset_by_csname; // rcx
  my_bool result; // al

  charset_by_csname = get_charset_by_csname(cs_name, 0x20u, 0);
  result = 0;
  if ( charset_by_csname )
  {
    *cs_0 = charset_by_csname;
  }
  else
  {
    result = 1;
    *cs_0 = default_cs;
  }
  return result;
};

// Line 711: range 000000000CFB6750-000000000CFB6791
my_bool __fastcall resolve_collation(const char *cl_name, CHARSET_INFO *default_cl, CHARSET_INFO **cl_0)
{
  CHARSET_INFO *charset_by_name; // rcx
  my_bool result; // al

  charset_by_name = get_charset_by_name(cl_name, 0);
  result = 0;
  if ( charset_by_name )
  {
    *cl_0 = charset_by_name;
  }
  else
  {
    result = 1;
    *cl_0 = default_cl;
  }
  return result;
};

// Line 752: range 000000000CFB67A0-000000000CFB6991
size_t __fastcall escape_string_for_mysql(
        CHARSET_INFO *charset_info,
        char *to,
        size_t to_length,
        const char *from,
        size_t length)
{
  const char *v5; // r14
  size_t v6; // r12
  const char *v7; // rbx
  char *v8; // r12
  uint (*ismbchar)(charset_info_st *, const char *, const char *); // r13
  char *v10; // rbp
  char v11; // al
  char v12; // dl
  size_t result; // rax
  signed int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax

  v5 = &from[length];
  v6 = to_length - 1;
  v7 = from;
  if ( !to_length )
    v6 = 2 * length;
  v8 = &to[v6];
  ismbchar = charset_info->cset->ismbchar;
  if ( from < v5 )
  {
    v10 = to;
    while ( 1 )
    {
      if ( !ismbchar )
        goto LABEL_12;
      v14 = charset_info->cset->ismbchar(charset_info, v7, v5);
      if ( v14 )
      {
        if ( v8 < &v10[v14] )
        {
LABEL_31:
          *v10 = 0;
          return -1LL;
        }
        v15 = (unsigned int)(v14 - 1);
        v16 = 0LL;
        do
        {
          v10[v16] = v7[v16];
          ++v16;
        }
        while ( v16 != v15 + 1 );
        v10 += v15 + 1;
        v7 += v15 + 1;
LABEL_10:
        if ( v7 >= v5 )
          goto LABEL_20;
      }
      else
      {
        if ( (int)charset_info->cset->mbcharlen(charset_info, *v7) > 1 )
        {
          v11 = *v7;
          v12 = *v7;
          if ( !*v7 )
            goto LABEL_8;
          goto LABEL_18;
        }
LABEL_12:
        v11 = *v7;
        if ( *v7 == 26 )
        {
          v12 = 90;
        }
        else if ( v11 <= 26 )
        {
          if ( v11 == 10 )
          {
            v12 = 110;
          }
          else if ( v11 == 13 )
          {
            v12 = 114;
          }
          else
          {
            if ( v11 )
              goto LABEL_8;
            v12 = 48;
          }
        }
        else
        {
          switch ( v11 )
          {
            case '\'':
              v12 = 39;
              break;
            case '\\':
              v12 = 92;
              break;
            case '"':
              v12 = 34;
              break;
            default:
LABEL_8:
              if ( v8 < v10 + 1 )
                goto LABEL_31;
              *v10 = v11;
              ++v7;
              ++v10;
              goto LABEL_10;
          }
        }
LABEL_18:
        if ( v8 < v10 + 2 )
          goto LABEL_31;
        ++v7;
        *v10 = 92;
        v10[1] = v12;
        v10 += 2;
        if ( v7 >= v5 )
        {
LABEL_20:
          result = v10 - to;
          goto LABEL_21;
        }
      }
    }
  }
  v10 = to;
  result = 0LL;
LABEL_21:
  *v10 = 0;
  return result;
};

// Line 892: range 000000000CFB69A0-000000000CFB6AC1
size_t __fastcall escape_quotes_for_mysql(
        CHARSET_INFO *charset_info,
        char *to,
        size_t to_length,
        const char *from,
        size_t length)
{
  const char *v5; // r14
  size_t v6; // r12
  const char *v7; // rbx
  char *v8; // r12
  uint (*ismbchar)(charset_info_st *, const char *, const char *); // r13
  char *v10; // rbp
  signed int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t result; // rax

  v5 = &from[length];
  v6 = to_length - 1;
  v7 = from;
  if ( !to_length )
    v6 = 2 * length;
  v8 = &to[v6];
  ismbchar = charset_info->cset->ismbchar;
  if ( from < v5 )
  {
    v10 = to;
    while ( 1 )
    {
      if ( ismbchar && (v11 = charset_info->cset->ismbchar(charset_info, v7, v5)) != 0 )
      {
        if ( v8 < &v10[v11] )
          goto LABEL_17;
        v12 = (unsigned int)(v11 - 1);
        v13 = 0LL;
        do
        {
          v10[v13] = v7[v13];
          ++v13;
        }
        while ( v13 != v12 + 1 );
        v10 += v12 + 1;
        v7 += v12 + 1;
      }
      else if ( *v7 == 39 )
      {
        if ( v8 < v10 + 2 )
        {
LABEL_17:
          *v10 = 0;
          return -1LL;
        }
        *v10 = 39;
        v10[1] = 39;
        ++v7;
        v10 += 2;
      }
      else
      {
        if ( v8 < v10 + 1 )
          goto LABEL_17;
        *v10++ = *v7++;
      }
      if ( v5 <= v7 )
      {
        result = v10 - to;
        goto LABEL_13;
      }
    }
  }
  v10 = to;
  result = 0LL;
LABEL_13:
  *v10 = 0;
  return result;
};
