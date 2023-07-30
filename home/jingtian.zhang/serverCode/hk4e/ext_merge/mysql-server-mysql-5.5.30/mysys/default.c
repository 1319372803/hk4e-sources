// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/default.c

// Line 79: range 000000000CFB7A30-000000000CFB7A3D
my_bool __fastcall my_getopt_is_args_separator(const char *arg)
{
  return arg == "----args-separator----";
};

// Line 173: range 000000000CFB6AD0-000000000CFB6B45
int __fastcall fn_expand(const char *filename, char *result_buf)
{
  int v2; // ebx
  char dir[512]; // [rsp+0h] [rbp-228h] BYREF

  v2 = my_getwd(dir, 0x200uLL, 0);
  if ( v2 )
    return 3;
  if ( !fn_format(result_buf, filename, dir, &off_1B23A528[4], 0xC4u) )
    return 2;
  return v2;
};

// Line 225: range 000000000CFB7B50-000000000CFB7EBE
int __fastcall my_search_option_files(
        const char *conf_file,
        int *argc,
        char ***argv,
        uint *args_used,
        Process_option_func func,
        void *func_ctx,
        const char **default_directories)
{
  uint v10; // r15d
  int defaults_options; // eax
  bool v13; // zf
  const char **v14; // rbp
  int v15; // eax
  int result; // eax
  int v17; // eax
  const char *v18; // rdx
  size_t v19; // rax
  int *v20; // r15
  size_t v21; // r14
  int v22; // edx
  uint v23; // ecx
  char *v24; // rax
  const char *v25; // rdi
  size_t v26; // r14
  char *v27; // rax
  __int64 v28; // rdx
  const char **extra_groups; // [rsp+10h] [rbp-68h]
  const void **v31; // [rsp+18h] [rbp-60h]
  uint i; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+24h] [rbp-54h]
  size_t n; // [rsp+28h] [rbp-50h]
  const char *forced_default_file; // [rsp+30h] [rbp-48h] BYREF
  const char *forced_extra_defaults; // [rsp+38h] [rbp-40h] BYREF

  v10 = *args_used;
  defaults_options = get_defaults_options(
                       *argc - v10,
                       &(*argv)[v10],
                       (char **)&forced_default_file,
                       (char **)&forced_extra_defaults,
                       (char **)&my_defaults_group_suffix);
  v13 = my_defaults_group_suffix == 0LL;
  *args_used = defaults_options + v10;
  if ( v13 )
    my_defaults_group_suffix = getenv("DEFAULT_GROUP_SUFFIX_ENV");
  if ( forced_extra_defaults && !defaults_already_read[0] )
  {
    result = fn_expand(forced_extra_defaults, my_defaults_extra_file_buffer);
    if ( result )
      return result;
    my_defaults_extra_file = my_defaults_extra_file_buffer;
  }
  if ( !forced_default_file || defaults_already_read[0] )
  {
LABEL_7:
    defaults_already_read[0] = 1;
    if ( !my_defaults_group_suffix || func != handle_default_option )
    {
LABEL_9:
      v14 = &my_defaults_file;
      if ( my_defaults_file )
      {
        v15 = search_default_file_with_ext(func, func_ctx, &off_1B23A528[4], &off_1B23A528[4], my_defaults_file, 0);
        if ( v15 < 0 )
          goto err;
        if ( v15 )
        {
LABEL_12:
          fprintf(stderr, "Could not open required defaults file: %s\n", *v14);
err:
          fwrite("Fatal error in defaults handling. Program aborted\n", 1uLL, 0x32uLL, stderr);
          return 1;
        }
      }
      else if ( dirname_length(conf_file) )
      {
        if ( search_default_file(func, func_ctx, 0LL, conf_file) < 0 )
          goto err;
      }
      else
      {
        while ( 1 )
        {
          v18 = *default_directories;
          if ( !*default_directories )
            break;
          if ( *v18 )
          {
            if ( search_default_file(func, func_ctx, v18, conf_file) < 0 )
              goto err;
          }
          else
          {
            v14 = &my_defaults_extra_file;
            if ( my_defaults_extra_file )
            {
              v17 = search_default_file_with_ext(
                      func,
                      func_ctx,
                      &off_1B23A528[4],
                      &off_1B23A528[4],
                      my_defaults_extra_file,
                      0);
              if ( v17 < 0 )
                goto err;
              if ( v17 )
                goto LABEL_12;
            }
          }
          ++default_directories;
        }
      }
      return 0;
    }
    v19 = strlen(my_defaults_group_suffix);
    v20 = (int *)*((_QWORD *)func_ctx + 2);
    v21 = v19;
    extra_groups = (const char **)alloc_root(*(MEM_ROOT **)func_ctx, 8LL * (unsigned int)(2 * *v20 + 1));
    if ( extra_groups )
    {
      v22 = *v20;
      if ( !*v20 )
      {
LABEL_38:
        v28 = (unsigned int)(2 * v22);
        *v20 = v28;
        *((_QWORD *)v20 + 2) = extra_groups;
        extra_groups[v28] = 0LL;
        goto LABEL_9;
      }
      v23 = 0;
      v33 = v21 + 1;
      n = v21 + 1;
      while ( 1 )
      {
        i = v23;
        v25 = *(const char **)(*((_QWORD *)v20 + 2) + 8LL * v23);
        extra_groups[v23] = v25;
        v31 = (const void **)&extra_groups[v23];
        v26 = strlen(v25);
        v27 = (char *)alloc_root(*(MEM_ROOT **)func_ctx, (unsigned int)(v33 + v26));
        if ( !v27 )
          break;
        (&extra_groups[*v20])[i] = v27;
        v24 = (char *)memcpy(v27, *v31, v26);
        memcpy(&v24[v26], my_defaults_group_suffix, n);
        v22 = *v20;
        v23 = i + 1;
        if ( *v20 <= i + 1 )
          goto LABEL_38;
      }
    }
    return 2;
  }
  result = fn_expand(forced_default_file, my_defaults_file_buffer);
  if ( !result )
  {
    my_defaults_file = my_defaults_file_buffer;
    goto LABEL_7;
  }
  return result;
};

// Line 372: range 000000000CFB6DE0-000000000CFB6E5D
int __fastcall handle_default_option(void *in_ctx, const char *group_name, const char *option)
{
  size_t v5; // rax
  char *tmp; // [rsp+8h] [rbp-20h] BYREF

  if ( !option || !find_type(group_name, *((const TYPELIB **)in_ctx + 2), 1u) )
    return 0;
  v5 = strlen(option);
  tmp = (char *)alloc_root(*(MEM_ROOT **)in_ctx, v5 + 1);
  if ( tmp && !insert_dynamic(*((DYNAMIC_ARRAY **)in_ctx + 1), (uchar *)&tmp) )
  {
    strcpy(tmp, option);
    return 0;
  }
  return 1;
};

// Line 412: range 000000000CFB7A40-000000000CFB7B42
int __fastcall get_defaults_options(int argc, char **argv, char **defaults, char **extra_defaults, char **group_suffix)
{
  const char **v8; // rbp
  int v9; // esi
  int v10; // ebx
  int v11; // r9d
  int v13; // eax

  v8 = (const char **)(argv + 1);
  v9 = 0;
  v10 = argc;
  *group_suffix = 0LL;
  *extra_defaults = 0LL;
  *defaults = 0LL;
  while ( v10 != v9 && v10 > 1 )
  {
    if ( *defaults || !is_prefix(*v8, "--defaults-file=") )
    {
      if ( *extra_defaults || !is_prefix(*v8, "--defaults-extra-file=") )
      {
        v11 = v10;
        if ( !*group_suffix )
        {
          v13 = is_prefix(*v8, "--defaults-group-suffix=");
          v11 = v10;
          if ( v13 )
          {
            v11 = v10 - 1;
            *group_suffix = (char *)(*v8 + 24);
          }
        }
      }
      else
      {
        v11 = v10 - 1;
        *extra_defaults = (char *)(*v8 + 22);
      }
    }
    else
    {
      v11 = v10 - 1;
      *defaults = (char *)(*v8 + 16);
    }
    v9 = v10;
    ++v8;
    v10 = v11;
  }
  return argc - v10;
};

// Line 467: range 000000000CFB8390-000000000CFB8397
int __fastcall load_defaults(const char *conf_file, const char **groups, int *argc, char ***argv)
{
  return my_load_defaults(conf_file, groups, argc, argv, &default_directories);
};

// Line 510: range 000000000CFB7ED0-000000000CFB8381
int __fastcall my_load_defaults(
        const char *conf_file,
        const char **groups,
        int *argc,
        char ***argv,
        const char ***default_directories)
{
  const char **v5; // r15
  const char **inited; // r12
  int v9; // r11d
  bool v10; // zf
  int v11; // eax
  int v12; // r14d
  _BOOL4 v13; // r14d
  char *v14; // rax
  USED_MEM **v15; // rbp
  char **v16; // r15
  uchar *buffer; // rsi
  size_t v18; // rdx
  signed int v19; // eax
  char **v20; // rdx
  __int64 elements; // rdx
  __int64 v22; // rdx
  USED_MEM *free; // rax
  const char ***v24; // rax
  _QWORD *v26; // rax
  char **v27; // r8
  my_bool v28; // bp
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r11d
  int v32; // r9d
  __int64 v33; // rcx
  char *v34; // rdi
  __int64 v35; // rsi
  USED_MEM *v36; // rdx
  __int64 v37; // rbp
  int v38; // r12d
  my_bool found_print_defaults; // [rsp+1Eh] [rbp-EAh]
  my_bool found_print_defaultsa; // [rsp+1Eh] [rbp-EAh]
  bool v42; // [rsp+1Fh] [rbp-E9h]
  uint args_used; // [rsp+2Ch] [rbp-DCh] BYREF
  DYNAMIC_ARRAY args; // [rsp+30h] [rbp-D8h] BYREF
  handle_option_ctx ctx; // [rsp+50h] [rbp-B8h] BYREF
  int v46; // [rsp+70h] [rbp-98h] BYREF
  const char *v47; // [rsp+78h] [rbp-90h]
  const char **groupsa; // [rsp+80h] [rbp-88h]
  MEM_ROOT alloc; // [rsp+90h] [rbp-78h] BYREF

  v5 = groups;
  args_used = 0;
  found_print_defaults = my_getopt_use_args_separator[0];
  init_alloc_root(&alloc, 0x200uLL, 0LL);
  inited = init_default_directories(&alloc);
  if ( !inited )
    goto err;
  v9 = *argc;
  if ( *argc <= 1 || strcmp((*argv)[1], "--no-defaults") )
  {
    v10 = *groups == 0LL;
    v46 = 0;
    groupsa = groups;
    v47 = "defaults";
    v11 = 1;
    if ( !v10 )
    {
      while ( *++v5 )
        ++v11;
      v46 = v11;
    }
    if ( !init_dynamic_array2(&args, 8u, 0LL, v9, 0x20u) )
    {
      ctx.alloc = &alloc;
      ctx.args = &args;
      ctx.group = (TYPELIB *)&v46;
      v12 = my_search_option_files(conf_file, argc, argv, &args_used, handle_default_option, &ctx, inited);
      if ( v12 )
      {
        free_root(&alloc, 0);
        return v12;
      }
      v42 = found_print_defaults != 0;
      v13 = found_print_defaults != 0;
      v14 = (char *)alloc_root(&alloc, 8LL * (*argc + v13 + args.elements + 1) + 56);
      v15 = (USED_MEM **)v14;
      if ( v14 )
      {
        v16 = (char **)(v14 + 56);
        buffer = args.buffer;
        v18 = 8LL * args.elements;
        *((_QWORD *)v14 + 7) = **argv;
        memcpy(v14 + 64, buffer, v18);
        found_print_defaultsa = 0;
        v19 = *argc - args_used;
        v20 = &(*argv)[args_used];
        *argc = v19;
        *argv = v20;
        if ( v19 > 1 && !strcmp(v20[1], "--print-defaults") )
        {
          --v19;
          found_print_defaultsa = 1;
          *argc = v19;
          *argv = v20 + 1;
        }
        elements = args.elements;
        if ( my_getopt_use_args_separator[0] )
          v16[args.elements + 1] = "----args-separator----";
        if ( v19 )
        {
          memcpy(&(&v16[v42 + 1])[elements], *argv + 1, 8LL * (v19 - 1));
          v19 = *argc;
          LODWORD(elements) = args.elements;
        }
        v22 = (unsigned int)(v13 + elements + v19);
        v16[v22] = 0LL;
        *argc = v22;
        free = alloc.free;
        *argv = v16;
        *v15 = free;
        v15[1] = alloc.used;
        v15[2] = alloc.pre_alloc;
        v15[3] = (USED_MEM *)alloc.min_malloc;
        v15[4] = (USED_MEM *)alloc.block_size;
        v15[5] = *(USED_MEM **)&alloc.block_num;
        v15[6] = (USED_MEM *)alloc.error_handler;
        delete_dynamic(&args);
        if ( found_print_defaultsa )
        {
          v37 = 1LL;
          v38 = 1;
          printf("%s would have been started with the following arguments:\n", **argv);
          if ( *argc > 1 )
          {
            do
            {
              if ( !my_getopt_is_args_separator((*argv)[v37]) )
                printf("%s ", (*argv)[v37]);
              ++v38;
              ++v37;
            }
            while ( *argc > v38 );
          }
          puts(&off_1B23A528[4]);
          exit(0);
        }
        v24 = default_directories;
        if ( default_directories )
        {
LABEL_21:
          *v24 = inited;
          return 0;
        }
        return 0;
      }
    }
err:
    fwrite("Fatal error in defaults handling. Program aborted\n", 1uLL, 0x32uLL, stderr);
    exit(1);
  }
  v26 = alloc_root(&alloc, 8LL * (v9 + 1) + 56);
  if ( !v26 )
    goto err;
  v27 = (char **)(v26 + 7);
  v28 = my_getopt_use_args_separator[0];
  v26[7] = **argv;
  if ( v28 )
  {
    LODWORD(v30) = 2;
    v26[8] = "----args-separator----";
    v29 = 2LL;
  }
  else
  {
    v29 = 1LL;
    LODWORD(v30) = 1;
  }
  v31 = *argc;
  if ( (unsigned int)*argc > 2 )
  {
    v32 = v30 + v31 - 2;
    v33 = 2LL;
    do
    {
      v34 = (*argv)[v33];
      v35 = (unsigned int)v30;
      v30 = (unsigned int)(v30 + 1);
      ++v33;
      v27[v35] = v34;
    }
    while ( (_DWORD)v30 != v32 );
    v29 = v30;
  }
  v26[v29 + 7] = 0LL;
  if ( !v28 )
    *argc = v31 - 1;
  v36 = alloc.free;
  *argv = v27;
  *v26 = v36;
  v26[1] = alloc.used;
  v26[2] = alloc.pre_alloc;
  v26[3] = alloc.min_malloc;
  v26[4] = alloc.block_size;
  v26[5] = *(_QWORD *)&alloc.block_num;
  v26[6] = alloc.error_handler;
  v24 = default_directories;
  if ( default_directories )
    goto LABEL_21;
  return 0;
};

// Line 650: range 000000000CFB83A0-000000000CFB83F0
void __fastcall free_defaults(char **argv)
{
  MEM_ROOT ptr; // [rsp+0h] [rbp-48h] BYREF

  ptr = *(MEM_ROOT *)((_BYTE *)argv - 1);
  free_root(&ptr, 0);
};

// Line 661: range 000000000CFB7980-000000000CFB7A22
int __fastcall search_default_file(
        Process_option_func opt_handler,
        void *handler_ctx,
        const char *dir,
        const char *config_file)
{
  const char *v6; // rcx
  const char **v7; // rbx
  int result; // eax
  const char *empty_list[2]; // [rsp+0h] [rbp-38h] BYREF

  empty_list[0] = &off_1B23A528[4];
  empty_list[1] = 0LL;
  if ( *fn_ext(config_file) )
  {
    v7 = empty_list;
    v6 = &off_1B23A528[4];
LABEL_5:
    while ( 1 )
    {
      result = search_default_file_with_ext(opt_handler, handler_ctx, dir, v6, config_file, 0);
      if ( result < 0 )
        break;
      v6 = *++v7;
      if ( !*v7 )
        return 0;
    }
  }
  else
  {
    v6 = f_extensions[0];
    v7 = f_extensions;
    if ( f_extensions[0] )
      goto LABEL_5;
    return 0;
  }
  return result;
};

// Line 696: range 000000000CFB6D30-000000000CFB6DD6
char *__fastcall get_argument(const char *keyword, size_t kwlen, char *ptr, char *name, uint line)
{
  char *v7; // rbx
  uchar *i; // rbp
  size_t v9; // rax
  char *v10; // rsi
  char *result; // rax

  v7 = &ptr[kwlen - 1];
  for ( i = my_charset_latin1.ctype; (i[(unsigned __int8)*v7 + 1] & 8) != 0; ++v7 )
    ;
  v9 = strlen(v7);
  v10 = &v7[v9 - 1];
  if ( (i[(unsigned __int8)v7[v9 - 2] + 1] & 8) != 0 )
  {
    do
      --v10;
    while ( (i[(unsigned __int8)*(v10 - 1) + 1] & 8) != 0 );
  }
  *v10 = 0;
  result = v7;
  if ( v7 >= v10 )
  {
    fprintf(stderr, "error: Wrong '!%s' directive in config file: %s at line %d\n", keyword, name, line);
    return 0LL;
  }
  return result;
};

// Line 751: range 000000000CFB6E60-000000000CFB78E1
int __fastcall search_default_file_with_ext_0(
        Process_option_func opt_handler,
        void *handler_ctx,
        const char *dir,
        const char *ext,
        const char *config_file,
        int recursion_level)
{
  char *v9; // rax
  PSI_file_key v10; // ebx
  FILE **v11; // rax
  FILE **v12; // r14
  PSI_file_locker *v13; // rbx
  FILE *v14; // rax
  PSI_file *v15; // rsi
  PSI_file_locker *v16; // rbx
  char *v17; // rbp
  end_file_wait_v1_t end_file_wait; // r12
  size_t v19; // rsi
  char v20; // al
  char *v21; // rbx
  uchar *ctype; // r12
  char v23; // al
  char v24; // cl
  char v25; // dl
  char *v26; // r14
  char *v27; // rax
  unsigned __int8 *v28; // r13
  char *v29; // rax
  uchar *k; // rcx
  unsigned __int64 v31; // rbp
  char v32; // al
  char *v33; // rax
  unsigned __int8 *v34; // rdx
  char v35; // al
  unsigned __int8 *v36; // rcx
  PSI_file *v37; // rsi
  PSI_file_locker *v38; // rbx
  unsigned __int8 v40; // al
  char *j; // rax
  const char *v42; // rbx
  char *v43; // rax
  size_t v44; // rdx
  char *i; // rdx
  char *v46; // r8
  PSI_file *v47; // rsi
  PSI_file_locker *v48; // rbx
  char *argument; // rdi
  MY_DIR *v50; // rax
  MY_DIR *v51; // r13
  uint v52; // r12d
  const char **p_name; // rbp
  char *v54; // rax
  const char *v55; // rsi
  const char *v56; // rbx
  const char **v57; // r14
  FILE **v58; // [rsp+10h] [rbp-3508h]
  uint line; // [rsp+40h] [rbp-34D8h]
  my_bool found_group; // [rsp+47h] [rbp-34D1h]
  char v64[80]; // [rsp+70h] [rbp-34A8h] BYREF
  char tmp[512]; // [rsp+C0h] [rbp-3458h] BYREF
  char name[522]; // [rsp+2C0h] [rbp-3258h] BYREF
  char buff[4096]; // [rsp+4D0h] [rbp-3048h] BYREF
  char curr_gr[4096]; // [rsp+14D0h] [rbp-2048h] BYREF
  stat stat_info; // [rsp+24D0h] [rbp-1048h] BYREF

  if ( dir )
  {
    v9 = convert_dirname(name, dir, 0LL);
    if ( *dir == 126 )
      *v9++ = 46;
    strxmov(v9, config_file, ext, 0LL);
  }
  else
  {
    strcpy(name, config_file);
  }
  fn_format(name, name, &off_1B23A528[4], &off_1B23A528[4], 4u);
  if ( !my_stat(name, &stat_info, 0) )
    return 1;
  if ( (stat_info.st_mode & 0xF002) == 32770 )
  {
    fprintf(stderr, "Warning: World-writable config file '%s' is ignored\n", name);
    return 0;
  }
  v10 = key_file_cnf;
  v11 = (FILE **)my_malloc(0x10uLL, 16);
  v12 = v11;
  v58 = v11;
  if ( !v11 )
    return 1;
  v11[1] = 0LL;
  if ( PSI_server && (v13 = PSI_server->get_thread_file_name_locker(&stat_info, v10, 3LL, name, v11)) != 0LL )
  {
    v12[1] = (FILE *)PSI_server->start_file_open_wait(
                       v13,
                       "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/default.c",
                       803LL);
    *v12 = my_fopen(name, 0, 0);
    PSI_server->end_file_open_wait(v13);
    v14 = *v12;
  }
  else
  {
    v14 = my_fopen(name, 0, 0);
    *v58 = v14;
  }
  if ( !v14 )
  {
    my_free(v58);
    return 1;
  }
  found_group = 0;
  line = 0;
  while ( 1 )
  {
    if ( PSI_server
      && (v15 = (PSI_file *)v58[1]) != 0LL
      && (v16 = PSI_server->get_thread_file_stream_locker(v64, v15, 6LL)) != 0LL )
    {
      PSI_server->start_file_wait(
        v16,
        4095LL,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/default.c",
        806LL);
      v17 = fgets(buff, 4095, *v58);
      end_file_wait = PSI_server->end_file_wait;
      v19 = v17 ? strlen(v17) : 0LL;
      end_file_wait(v16, v19);
    }
    else
    {
      v17 = fgets(buff, 4095, *v58);
    }
    if ( !v17 )
      break;
    v20 = buff[0];
    ++line;
    v21 = buff;
    ctype = my_charset_latin1.ctype;
    if ( (ctype[(unsigned __int8)buff[0] + 1] & 8) != 0 )
    {
      do
        v20 = *++v21;
      while ( (ctype[(unsigned __int8)*v21 + 1] & 8) != 0 );
    }
    if ( v20 != 35 && v20 != 59 && v20 )
    {
      if ( v20 == 33 )
      {
        if ( recursion_level <= 9 )
        {
          for ( i = v21 + 1; (ctype[(unsigned __int8)*i + 1] & 8) != 0; ++i )
            ;
          if ( !memcmp(i, "includedir", 0xAuLL) && (ctype[(unsigned __int8)i[10] + 1] & 8) != 0 )
          {
            argument = get_argument("includedir", 0xBuLL, i, name, line);
            if ( !argument )
              goto LABEL_67;
            v50 = my_dir(argument, 16);
            v51 = v50;
            if ( !v50 )
              goto LABEL_67;
            v52 = 0;
            if ( v50->number_off_files )
            {
              do
              {
                p_name = (const char **)&v51->dir_entry[v52].name;
                v54 = fn_ext(*p_name);
                v55 = f_extensions[0];
                v56 = v54;
                if ( f_extensions[0] )
                {
                  v57 = f_extensions;
                  while ( strcmp(v56, v55) )
                  {
                    v55 = *++v57;
                    if ( !*v57 )
                      goto LABEL_127;
                  }
                  fn_format(tmp, *p_name, argument, &off_1B23A528[4], 0x44u);
                  search_default_file_with_ext(
                    opt_handler,
                    handler_ctx,
                    &off_1B23A528[4],
                    &off_1B23A528[4],
                    tmp,
                    recursion_level + 1);
                }
LABEL_127:
                ++v52;
              }
              while ( v52 < v51->number_off_files );
            }
            my_dirend(v51);
          }
          else if ( !memcmp(i, "include", 7uLL) && (ctype[(unsigned __int8)i[7] + 1] & 8) != 0 )
          {
            v46 = get_argument("include", 8uLL, i, name, line);
            if ( !v46 )
              goto LABEL_67;
            search_default_file_with_ext(
              opt_handler,
              handler_ctx,
              &off_1B23A528[4],
              &off_1B23A528[4],
              v46,
              recursion_level + 1);
          }
        }
        else
        {
          for ( j = &v21[strlen(v21) - 1]; (ctype[(unsigned __int8)*(j - 1) + 1] & 8) != 0; --j )
            ;
          *j = 0;
          fprintf(
            stderr,
            "Warning: skipping '%s' directive as maximum includerecursion level was reached in file %s at line %d\n",
            v21,
            name,
            line);
        }
      }
      else if ( v20 == 91 )
      {
        v42 = v21 + 1;
        v43 = strchr(v42, 93);
        if ( !v43 )
        {
          fprintf(stderr, "error: Wrong group definition in config file: %s at line %d\n", name, line);
          goto LABEL_67;
        }
        while ( (ctype[(unsigned __int8)*(v43 - 1) + 1] & 8) != 0 )
          --v43;
        *v43 = 0;
        v44 = v43 - v42 + 1;
        if ( v44 > 0xFFF )
          v44 = 4095LL;
        strmake(curr_gr, v42, v44);
        opt_handler(handler_ctx, curr_gr, 0LL);
        found_group = 1;
      }
      else
      {
        if ( !found_group )
        {
          fprintf(stderr, "error: Found option without preceding group in config file: %s at line: %d\n", name, line);
LABEL_67:
          if ( PSI_server
            && (v37 = (PSI_file *)v58[1]) != 0LL
            && (v38 = PSI_server->get_thread_file_stream_locker(v64, v37, 5LL)) != 0LL )
          {
            PSI_server->start_file_wait(
              v38,
              0LL,
              "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/default.c",
              1000LL);
            my_fclose(*v58, 0);
            PSI_server->end_file_wait(v38, 0LL);
          }
          else
          {
            my_fclose(*v58, 0);
          }
          my_free(v58);
          return -1;
        }
        v23 = *v21;
        v24 = 0;
        v25 = 0;
        v26 = v21;
        if ( !*v21 )
          goto LABEL_36;
        while ( v23 != 34 && v23 != 39 || v25 )
        {
          if ( !v24 )
            goto LABEL_73;
          if ( v23 == 92 && !v25 )
          {
            v25 = 1;
            goto LABEL_35;
          }
LABEL_34:
          v25 = 0;
LABEL_35:
          v23 = *++v26;
          if ( !*v26 )
            goto LABEL_36;
        }
        if ( !v24 )
        {
          v24 = v23;
          goto LABEL_34;
        }
        if ( v23 != v24 )
          goto LABEL_34;
LABEL_73:
        if ( v23 != 35 )
        {
          v24 = 0;
          goto LABEL_34;
        }
        *v26 = 0;
LABEL_36:
        v27 = strchr(v21, 61);
        if ( v27 )
          v26 = v27;
        for ( ; (ctype[(unsigned __int8)*(v26 - 1) + 1] & 8) != 0; --v26 )
          ;
        if ( v27 )
        {
          v28 = (unsigned __int8 *)(v27 + 1);
          if ( (ctype[(unsigned __int8)v27[1] + 1] & 8) != 0 )
          {
            do
              ++v28;
            while ( (ctype[*v28 + 1] & 8) != 0 );
          }
          v29 = strend((const char *)v28);
          for ( k = my_charset_latin1.ctype; (k[(unsigned __int8)*(v29 - 1) + 1] & 8) != 0; --v29 )
            ;
          if ( v29 < (char *)v28 )
            v29 = (char *)v28;
          v31 = (unsigned __int64)v29;
          v32 = *v28;
          if ( (*v28 == 39 || v32 == 34) && (unsigned __int64)(v28 + 1) < v31 && v32 == *(_BYTE *)(v31 - 1) )
          {
            --v31;
            ++v28;
          }
          strcpy((char *)&stat_info, "--");
          v33 = strnmov((char *)&stat_info.st_dev + 2, v21, v26 - v21);
          v34 = (unsigned __int8 *)(v33 + 1);
          *v33 = 61;
          if ( (unsigned __int8 *)v31 != v28 )
          {
            while ( 1 )
            {
              while ( *v28 != 92 || v28 == (unsigned __int8 *)(v31 - 1) )
              {
                *v34++ = *v28;
LABEL_55:
                if ( (unsigned __int8 *)v31 == ++v28 )
                  goto LABEL_65;
              }
              v35 = v28[1];
              v36 = v28 + 1;
              if ( v35 == 98 )
              {
                *v34 = 8;
                ++v28;
                ++v34;
                goto LABEL_55;
              }
              if ( v35 <= 98 )
                break;
              if ( v35 == 114 )
              {
                *v34 = 13;
                ++v28;
                ++v34;
                goto LABEL_55;
              }
              if ( v35 <= 114 )
              {
                if ( v35 == 110 )
                {
                  *v34 = 10;
                  ++v28;
                  ++v34;
                  goto LABEL_55;
                }
                goto LABEL_83;
              }
              if ( v35 == 115 )
              {
                *v34 = 32;
                ++v28;
                ++v34;
                goto LABEL_55;
              }
              if ( v35 != 116 )
                goto LABEL_83;
              *v34++ = 9;
              v28 += 2;
              if ( (unsigned __int8 *)v31 == v36 + 1 )
                goto LABEL_65;
            }
            switch ( v35 )
            {
              case '\'':
                *v34 = 39;
                ++v28;
                ++v34;
                goto LABEL_55;
              case '\\':
                *v34 = 92;
                ++v28;
                ++v34;
                goto LABEL_55;
              case '"':
                *v34 = 34;
                ++v28;
                ++v34;
                goto LABEL_55;
            }
LABEL_83:
            *v34 = 92;
            v40 = v28[1];
            v34 += 2;
            ++v28;
            *(v34 - 1) = v40;
            goto LABEL_55;
          }
LABEL_65:
          *v34 = 0;
        }
        else
        {
          strcpy((char *)&stat_info, "--");
          strmake((char *)&stat_info.st_dev + 2, v21, v26 - v21);
        }
        if ( opt_handler(handler_ctx, curr_gr, (const char *)&stat_info) )
          goto LABEL_67;
      }
    }
  }
  if ( PSI_server
    && (v47 = (PSI_file *)v58[1]) != 0LL
    && (v48 = PSI_server->get_thread_file_stream_locker(v64, v47, 5LL)) != 0LL )
  {
    PSI_server->start_file_wait(
      v48,
      0LL,
      "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/default.c",
      996LL);
    my_fclose(*v58, 0);
    PSI_server->end_file_wait(v48, 0LL);
  }
  else
  {
    my_fclose(*v58, 0);
  }
  my_free(v58);
  return 0;
};

// Line 757: range 000000000CFB78F0-000000000CFB797A
int __fastcall search_default_file_with_ext(
        Process_option_func opt_handler,
        void *handler_ctx,
        const char *dir,
        const char *ext,
        const char *config_file,
        int recursion_level)
{
  size_t v10; // rbp

  if ( dir )
    v10 = strlen(dir);
  else
    v10 = 0LL;
  if ( strlen(config_file) + v10 > 0x1FC )
    return 0;
  else
    return search_default_file_with_ext_0(opt_handler, handler_ctx, dir, ext, config_file, recursion_level);
};

// Line 1032: range 000000000CFB8400-000000000CFB857B
void __fastcall my_print_default_files(const char *conf_file)
{
  const char **v1; // r14
  const char **inited; // rax
  const char **v3; // r12
  const char **v4; // rbx
  const char *v5; // rsi
  char *v6; // rax
  const char *empty_list[2]; // [rsp+0h] [rbp-288h] BYREF
  MEM_ROOT alloc; // [rsp+10h] [rbp-278h] BYREF
  char name[512]; // [rsp+50h] [rbp-238h] BYREF

  v1 = f_extensions;
  empty_list[0] = &off_1B23A528[4];
  empty_list[1] = 0LL;
  if ( *fn_ext(conf_file) )
    v1 = empty_list;
  puts("\nDefault options are read from the following files in the given order:");
  if ( dirname_length(conf_file) )
  {
    fputs(conf_file, stdout);
  }
  else
  {
    init_alloc_root(&alloc, 0x200uLL, 0LL);
    inited = init_default_directories(&alloc);
    v3 = inited;
    if ( inited )
    {
      if ( *inited )
      {
        do
        {
          if ( *v1 )
          {
            v4 = v1;
            do
            {
              v5 = *v3;
              if ( **v3 || (v5 = my_defaults_extra_file) != 0LL )
              {
                v6 = convert_dirname(name, v5, 0LL);
                if ( name[0] == 126 )
                  *v6++ = 46;
                strxmov(v6, conf_file, *v4, " ", 0LL);
                fputs(name, stdout);
              }
              ++v4;
            }
            while ( *v4 );
          }
          ++v3;
        }
        while ( *v3 );
      }
    }
    else
    {
      fwrite("Internal error initializing default directories list", 1uLL, 0x34uLL, stdout);
    }
    free_root(&alloc, 0);
  }
  puts(&off_1B23A528[4]);
};

// Line 1081: range 000000000CFB8580-000000000CFB863C
void __fastcall print_defaults(const char *conf_file, const char **groups)
{
  const char **v2; // r12
  const char **v3; // rbp

  v2 = groups;
  v3 = groups;
  my_print_default_files(conf_file);
  fwrite("The following groups are read:", 1uLL, 0x1EuLL, stdout);
  if ( *groups )
  {
    do
    {
      ++v3;
      fputc(32, stdout);
      fputs(*(v3 - 1), stdout);
    }
    while ( *v3 );
  }
  if ( my_defaults_group_suffix && *groups )
  {
    do
    {
      ++v2;
      fputc(32, stdout);
      fputs(*(v2 - 1), stdout);
      fputs(my_defaults_group_suffix, stdout);
    }
    while ( *v2 );
  }
  puts(
    "\n"
    "The following options may be given as the first argument:\n"
    "--print-defaults        Print the program argument list and exit.\n"
    "--no-defaults           Don't read default options from any option file.\n"
    "--defaults-file=#       Only read default options from the given file #.\n"
    "--defaults-extra-file=# Read this file after the global files are read.");
};

// Line 1111: range 000000000CFB6B50-000000000CFB6B9E
int __fastcall add_directory(MEM_ROOT *alloc, const char *dir, const char **dirs)
{
  size_t v4; // rax
  char *v5; // rdi
  int result; // eax
  char buf[512]; // [rsp+0h] [rbp-218h] BYREF

  v4 = normalize_dirname(buf, dir);
  v5 = strmake_root(alloc, buf, v4);
  result = 1;
  if ( v5 )
  {
    array_append_string_unique(v5, dirs, 7uLL);
    return 0;
  }
  return result;
};

// Line 1197: range 000000000CFB6BA0-000000000CFB6D25
const char **__fastcall init_default_directories(MEM_ROOT *alloc)
{
  const char **v2; // rax
  const char **v3; // rbx
  _DWORD *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int v8; // r12d
  int v9; // r12d
  int v10; // r12d
  char *v11; // rax
  int v12; // r12d

  v2 = (const char **)alloc_root(alloc, 0x38uLL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2;
  v5 = 56;
  if ( ((unsigned __int8)v2 & 1) != 0 )
  {
    *(_BYTE *)v2 = 0;
    v4 = (_DWORD *)((char *)v2 + 1);
    LOBYTE(v5) = 55;
  }
  if ( ((unsigned __int8)v4 & 2) != 0 )
  {
    v4 = (_DWORD *)((char *)v4 + 2);
    v5 -= 2;
    *((_WORD *)v4 - 1) = 0;
  }
  if ( ((unsigned __int8)v4 & 4) != 0 )
  {
    *v4 = 0;
    v5 -= 4;
    ++v4;
  }
  v6 = v5 >> 3;
  memset(v4, 0, 8 * v6);
  v7 = &v4[2 * v6];
  if ( (v5 & 4) != 0 )
  {
    *v7++ = 0;
    if ( (v5 & 2) == 0 )
    {
LABEL_10:
      if ( (v5 & 1) == 0 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_10;
  }
  v7 = (_DWORD *)((char *)v7 + 2);
  *((_WORD *)v7 - 1) = 0;
  if ( (v5 & 1) != 0 )
LABEL_15:
    *(_BYTE *)v7 = 0;
LABEL_11:
  v8 = add_directory(alloc, "/etc/", v2);
  v9 = add_directory(alloc, "/etc/mysql/", v3) + v8;
  v10 = add_directory(alloc, "/usr/local/mysql/etc", v3) + v9;
  v11 = getenv("MYSQL_HOME");
  if ( v11 )
    v10 += add_directory(alloc, v11, v3);
  v12 = add_directory(alloc, &off_1B23A528[4], v3) + v10;
  if ( add_directory(alloc, "~/", v3) + v12 > 0 )
    return 0LL;
  return v3;
};
