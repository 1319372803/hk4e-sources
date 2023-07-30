// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_init.c

// Line 44: range 000000000CFBB0C0-000000000CFBB11D
ulong __fastcall atoi_octal(const char *str)
{
  unsigned __int8 v1; // al
  int v2; // esi
  __int64 tmp; // [rsp+8h] [rbp-10h] BYREF

  v1 = *str;
  if ( !*str )
    goto LABEL_6;
  while ( (my_charset_latin1.ctype[v1 + 1] & 8) != 0 )
  {
    v1 = *++str;
    if ( !*str )
      goto LABEL_6;
  }
  v2 = 8;
  if ( v1 != 48 )
LABEL_6:
    v2 = 10;
  str2int(str, v2, 0LL, 0x7FFFFFFFLL, &tmp);
  return tmp;
};

// Line 69: range 000000000CFBB120-000000000CFBB225
my_bool __cdecl my_init()
{
  my_bool result; // al
  char *v1; // rax
  char *v2; // rax
  my_bool v3; // dl
  char *v4; // rax

  if ( my_init_done[0] )
    return 0;
  my_init_done[0] = 1;
  my_umask = 432;
  ++mysys_usage_id;
  my_umask_dir = 448;
  v1 = getenv("UMASK");
  if ( v1 )
    my_umask = atoi_octal(v1) | 0x180;
  v2 = getenv("UMASK_DIR");
  if ( v2 )
    my_umask_dir = atoi_octal(v2) | 0x1C0;
  init_glob_errs();
  instrumented_stdin.m_psi = 0LL;
  instrumented_stdin.m_file = stdin;
  mysql_stdin = &instrumented_stdin;
  v3 = my_thread_global_init();
  result = 1;
  if ( !v3 )
  {
    v4 = getenv("HOME");
    home_dir = v4;
    if ( v4 )
      home_dir = intern_filename(home_dir_buff, v4);
    return 0;
  }
  return result;
};

// Line 122: range 000000000CFBB230-000000000CFBB404
void __fastcall my_end(int infoflag)
{
  FILE *v1; // r12
  char ebuff[512]; // [rsp+40h] [rbp-228h] BYREF

  v1 = stderr;
  if ( my_init_done[0] )
  {
    if ( (infoflag & 1) != 0 && __PAIR128__(my_stream_opened, my_file_opened) != 0 )
    {
      my_snprintf(ebuff, 0x200uLL, globerrs[18]);
      my_message_stderr(0x13u, ebuff, 4);
    }
    free_charsets();
    my_error_unregister_all();
    my_once_free();
    if ( (infoflag & 2) != 0 && !getrusage(RUSAGE_SELF, (struct rusage *)ebuff) )
      fprintf(
        v1,
        "\n"
        "User time %.2f, System time %.2f\n"
        "Maximum resident set size %ld, Integral resident set size %ld\n"
        "Non-physical pagefaults %ld, Physical pagefaults %ld, Swaps %ld\n"
        "Blocks in %ld out %ld, Messages in %ld out %ld, Signals %ld\n"
        "Voluntary context switches %ld, Involuntary context switches %ld\n",
        (double)(int)(*(_QWORD *)&ebuff[8] / 10000LL + 100 * *(_DWORD *)ebuff) / 100.0,
        (double)(*(_DWORD *)&ebuff[24] / 10000 + 100 * *(_DWORD *)&ebuff[16]) / 100.0,
        *(_QWORD *)&ebuff[32],
        *(_QWORD *)&ebuff[48],
        *(_QWORD *)&ebuff[64],
        *(_QWORD *)&ebuff[72],
        *(_QWORD *)&ebuff[80],
        *(_QWORD *)&ebuff[88],
        *(_QWORD *)&ebuff[96],
        *(_QWORD *)&ebuff[104],
        *(_QWORD *)&ebuff[112],
        *(_QWORD *)&ebuff[120],
        *(_QWORD *)&ebuff[128],
        *(_QWORD *)&ebuff[136]);
    my_thread_end();
    my_thread_global_end();
    my_init_done[0] = 0;
  }
};

// Line 539: range 000000000CFBB410-000000000CFBB471
void __cdecl my_init_mysys_psi_keys()
{
  if ( PSI_server )
  {
    PSI_server->register_mutex("mysys", all_mysys_mutexes, 18LL);
    PSI_server->register_cond("mysys", all_mysys_conds, 5);
    PSI_server->register_file("mysys", all_mysys_files, 3);
  }
};
