// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/libmysql/libmysql.c

// Line 200: range 000000000CFA4090-000000000CFA40E7
void __cdecl mysql_server_end()
{
  if ( mysql_client_init[0] )
  {
    mysql_client_plugin_deinit();
    finish_client_errs();
    vio_end();
    if ( org_my_init_done )
    {
      free_charsets();
      mysql_thread_end();
    }
    else
    {
      my_end(0);
    }
    org_my_init_done = 0;
    mysql_client_init[0] = 0;
  }
};

// Line 231: range 000000000CFA4060-000000000CFA4067
MYSQL_PARAMETERS *__cdecl mysql_get_parameters()
{
  return &mysql_internal_parameters;
};

// Line 235: range 000000000CFA4070-000000000CFA4080
// attributes: thunk
my_bool __cdecl mysql_thread_init()
{
  return my_thread_init();
};

// Line 252: range 000000000CFA23F0-000000000CFA2472
void __fastcall append_wild(char *to, char *end, const char *wild)
{
  char *v3; // rdi
  char v4; // al
  char *v5; // rsi
  char *v6; // rcx
  _BYTE *v7; // rcx

  if ( !wild || !*wild )
    return;
  v3 = to + 7;
  *(_QWORD *)(v3 - 7) = 0x2720656B696C20LL;
  v4 = *wild;
  if ( !*wild )
  {
    v6 = v3;
LABEL_13:
    *v6 = 39;
    v6[1] = 0;
    return;
  }
  v5 = end - 5;
  if ( v5 > v3 )
  {
    while ( 1 )
    {
      if ( v4 == 39 || v4 == 92 )
        *v3++ = 92;
      ++wild;
      v6 = v3 + 1;
      *v3 = *(wild - 1);
      v4 = *wild;
      if ( !*wild )
        goto LABEL_13;
      if ( v5 <= v6 )
        goto LABEL_14;
      ++v3;
    }
  }
  v6 = v3;
LABEL_14:
  *v6 = 37;
  v7 = v6 + 1;
  *v7 = 39;
  v7[1] = 0;
};

// Line 275: range 000000000CFA40F0-000000000CFA4220
void __fastcall mysql_debug(const char *debug)
{
  ;
};

// Line 310: range 000000000CFA4230-000000000CFA43A2
void __fastcall my_pipe_sig_handler(int sig)
{
  ;
};

// Line 411: range 000000000CFA43B0-000000000CFA4442
void __fastcall read_user_name(char *name)
{
  char *pw_name; // rax
  __uid_t v2; // eax
  struct passwd *v3; // rax

  if ( geteuid() )
  {
    pw_name = getlogin();
    if ( !pw_name )
    {
      v2 = geteuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_name = v3->pw_name;
      }
      else
      {
        pw_name = getenv("USER");
        if ( !pw_name )
        {
          pw_name = getenv("LOGNAME");
          if ( !pw_name )
          {
            pw_name = getenv("LOGIN");
            if ( !pw_name )
              pw_name = (char *)&unk_1A2DA8D9;
          }
        }
      }
    }
    strmake(name, pw_name, 0x30uLL);
  }
  else
  {
    strcpy(name, "root");
  }
};

// Line 449: range 000000000CFA44C0-000000000CFA467E
my_bool __fastcall handle_local_infile(MYSQL *mysql, const char *net_filename)
{
  unsigned int v2; // r13d
  char *v3; // r12
  int v4; // eax
  int v5; // ebp
  my_bool v6; // r13
  void *li_ptr; // [rsp+8h] [rbp-30h] BYREF

  v2 = (LODWORD(mysql->net.max_packet) + 4079) & 0xFFFFF000;
  if ( !mysql->options.local_infile_init
    || !mysql->options.local_infile_read
    || !mysql->options.local_infile_end
    || !mysql->options.local_infile_error )
  {
    mysql_set_local_infile_default(mysql);
  }
  v3 = (char *)my_malloc(v2, 0);
  if ( v3 )
  {
    if ( mysql->options.local_infile_init(&li_ptr, net_filename, mysql->options.local_infile_userdata) )
    {
      my_net_write(&mysql->net, (const uchar *)&off_1B23A528[4], 0LL);
      net_flush(&mysql->net);
      strcpy(mysql->net.sqlstate, unknown_sqlstate);
    }
    else
    {
      while ( 1 )
      {
        v4 = mysql->options.local_infile_read(li_ptr, v3, v2);
        v5 = v4;
        if ( v4 <= 0 )
          break;
        if ( my_net_write(&mysql->net, (const uchar *)v3, v4) )
          goto LABEL_11;
      }
      if ( my_net_write(&mysql->net, (const uchar *)&off_1B23A528[4], 0LL) || net_flush(&mysql->net) )
      {
LABEL_11:
        v6 = 1;
        set_mysql_error(mysql, 2013, unknown_sqlstate);
        goto err;
      }
      v6 = 0;
      if ( !v5 )
        goto err;
    }
    v6 = 1;
    mysql->net.last_errno = mysql->options.local_infile_error(li_ptr, mysql->net.last_error, 511u);
err:
    mysql->options.local_infile_end(li_ptr);
    my_free(v3);
    return v6;
  }
  set_mysql_error(mysql, 2008, unknown_sqlstate);
  return 1;
};

// Line 563: range 000000000CFA24B0-000000000CFA256F
int __fastcall default_local_infile_init(void **ptr, const char *filename, void *userdata)
{
  void *v3; // rax
  void *v4; // rbx
  int v5; // edx
  File v6; // eax
  st_my_thread_var *v8; // rax
  const char *v9; // rdx
  char tmp_name[512]; // [rsp+0h] [rbp-218h] BYREF

  v3 = my_malloc(0x210uLL, 0);
  v4 = v3;
  *ptr = v3;
  v5 = 1;
  if ( !v3 )
    return v5;
  *((_BYTE *)v3 + 16) = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_QWORD *)v3 + 1) = filename;
  fn_format(tmp_name, filename, &off_1B23A528[4], &off_1B23A528[4], 4u);
  v6 = my_open(tmp_name, 0, 0);
  v5 = 0;
  *(_DWORD *)v4 = v6;
  if ( v6 >= 0 )
    return v5;
  v8 = my_thread_var();
  v9 = globerrs[28];
  *((_DWORD *)v4 + 1) = v8->thr_errno;
  my_snprintf((char *)v4 + 16, 0x1FFuLL, v9, tmp_name);
  return 1;
};

// Line 603: range 000000000CFA3690-000000000CFA36EE
int __fastcall default_local_infile_read(void *ptr, char *buf, uint buf_len)
{
  int result; // eax
  int v4; // ebx
  st_my_thread_var *v5; // rax

  result = my_read(*(_DWORD *)ptr, (uchar *)buf, buf_len, 0);
  v4 = result;
  if ( result < 0 )
  {
    *((_DWORD *)ptr + 1) = 2;
    v5 = my_thread_var();
    my_snprintf((char *)ptr + 16, 0x1FFuLL, globerrs[1], *((_QWORD *)ptr + 1), (unsigned int)v5->thr_errno);
    return v4;
  }
  return result;
};

// Line 632: range 000000000CFA2480-000000000CFA24A9
void __fastcall default_local_infile_end(void *ptr)
{
  File v2; // edi

  if ( ptr )
  {
    v2 = *(_DWORD *)ptr;
    if ( v2 >= 0 )
      my_close(v2, 16);
    my_free(ptr);
  }
};

// Line 657: range 000000000CFA3650-000000000CFA3686
int __fastcall default_local_infile_error(void *ptr, char *error_msg, uint error_msg_len)
{
  if ( ptr )
  {
    strmake(error_msg, (const char *)ptr + 16, error_msg_len);
    return *((_DWORD *)ptr + 1);
  }
  else
  {
    strcpy(error_msg, client_errors[8]);
    return 2008;
  }
};

// Line 679: range 000000000CFA4450-000000000CFA4473
void __fastcall mysql_set_local_infile_handler(
        MYSQL *mysql,
        int (*local_infile_init)(void **, const char *, void *),
        int (*local_infile_read)(void *, char *, uint),
        void (*local_infile_end)(void *),
        int (*local_infile_error)(void *, char *, uint),
        void *userdata)
{
  mysql->options.local_infile_init = local_infile_init;
  mysql->options.local_infile_read = local_infile_read;
  mysql->options.local_infile_end = local_infile_end;
  mysql->options.local_infile_error = local_infile_error;
  mysql->options.local_infile_userdata = userdata;
};

// Line 689: range 000000000CFA4480-000000000CFA44B8
void __fastcall mysql_set_local_infile_default(MYSQL *mysql)
{
  mysql->options.local_infile_init = default_local_infile_init;
  mysql->options.local_infile_read = default_local_infile_read;
  mysql->options.local_infile_end = default_local_infile_end;
  mysql->options.local_infile_error = default_local_infile_error;
};

// Line 703: range 000000000CFA4680-000000000CFA46A2
int __fastcall mysql_query(MYSQL *mysql, const char *query)
{
  unsigned int v2; // eax

  v2 = strlen(query);
  return mysql_real_query(mysql, query, v2);
};

// Line 715: range 000000000CFA46B0-000000000CFA46DA
MYSQL_FIELD *__fastcall mysql_fetch_field(MYSQL_RES *result)
{
  __int64 current_field; // rdx
  MYSQL_FIELD *fields; // rax

  current_field = result->current_field;
  if ( (unsigned int)current_field >= result->field_count )
    return 0LL;
  fields = result->fields;
  result->current_field = current_field + 1;
  return &fields[current_field];
};

// Line 730: range 000000000CFA46E0-000000000CFA472E
void __fastcall mysql_data_seek(MYSQL_RES *result, my_ulonglong row)
{
  MYSQL_DATA *data; // rax
  MYSQL_ROWS *v3; // rax
  __int64 v4; // rdx

  data = result->data;
  if ( data )
  {
    v3 = data->data;
    if ( row && v3 )
    {
      v4 = 0LL;
      do
      {
        v3 = v3->next;
        if ( v4 == row - 1 )
          break;
        ++v4;
      }
      while ( v3 );
    }
    result->current_row = 0LL;
    result->data_cursor = v3;
  }
  else
  {
    result->current_row = 0LL;
    result->data_cursor = 0LL;
  }
};

// Line 746: range 000000000CFA4730-000000000CFA4740
MYSQL_ROW_OFFSET __fastcall mysql_row_seek(MYSQL_RES *result, MYSQL_ROW_OFFSET row)
{
  MYSQL_ROW_OFFSET data_cursor; // rax

  data_cursor = result->data_cursor;
  result->current_row = 0LL;
  result->data_cursor = row;
  return data_cursor;
};

// Line 756: range 000000000CFA4750-000000000CFA475C
MYSQL_FIELD_OFFSET __fastcall mysql_field_seek(MYSQL_RES *result, MYSQL_FIELD_OFFSET field_offset)
{
  MYSQL_FIELD_OFFSET current_field; // eax

  current_field = result->current_field;
  result->current_field = field_offset;
  return current_field;
};

// Line 768: range 000000000CFA4760-000000000CFA47CA
MYSQL_RES *__fastcall mysql_list_dbs(MYSQL *mysql, const char *wild)
{
  int v2; // edx
  MYSQL_RES *result; // rax
  char buff[255]; // [rsp+0h] [rbp-118h] BYREF
  char end[25]; // [rsp+FFh] [rbp-19h] BYREF

  strcpy(buff, "show databases");
  append_wild(&buff[14], end, wild);
  v2 = mysql_query(mysql, buff);
  result = 0LL;
  if ( !v2 )
    return mysql_store_result(mysql);
  return result;
};

// Line 786: range 000000000CFA47D0-000000000CFA482B
MYSQL_RES *__fastcall mysql_list_tables(MYSQL *mysql, const char *wild)
{
  int v2; // edx
  MYSQL_RES *result; // rax
  char buff[255]; // [rsp+0h] [rbp-118h] BYREF
  char end[25]; // [rsp+FFh] [rbp-19h] BYREF

  strcpy(buff, "show tables");
  append_wild(&buff[11], end, wild);
  v2 = mysql_query(mysql, buff);
  result = 0LL;
  if ( !v2 )
    return mysql_store_result(mysql);
  return result;
};

// Line 798: range 000000000CFA4830-000000000CFA488B
MYSQL_FIELD *__fastcall cli_list_fields(MYSQL *mysql)
{
  MYSQL_DATA *rows; // rax
  my_ulonglong v2; // rcx
  uint server_capabilities; // r9d

  rows = cli_read_rows(mysql, 0LL, (mysql->server_capabilities & 0x200) == 0 ? 6 : 8);
  if ( !rows )
    return 0LL;
  v2 = rows->rows;
  server_capabilities = mysql->server_capabilities;
  mysql->field_count = v2;
  return unpack_fields(mysql, rows, &mysql->field_alloc, v2, 1, server_capabilities);
};

// Line 819: range 000000000CFA4890-000000000CFA49DD
MYSQL_RES *__fastcall mysql_list_fields(MYSQL *mysql, const char *table, const char *wild)
{
  const char *v3; // r12
  char *v4; // rax
  char *v5; // r12
  MYSQL_FIELD *v6; // rbp
  MYSQL_RES *result; // rax
  unsigned int field_count; // edx
  char buff[258]; // [rsp+10h] [rbp-128h] BYREF

  v3 = &off_1B23A528[4];
  if ( wild )
    v3 = wild;
  v4 = strmake(buff, table, 0x80uLL);
  v5 = strmake(v4 + 1, v3, 0x80uLL);
  free_old_query(mysql);
  if ( mysql->methods->advanced_command(
         mysql,
         COM_FIELD_LIST,
         0LL,
         0LL,
         (const unsigned __int8 *)buff,
         v5 - buff,
         1,
         0LL) )
  {
    return 0LL;
  }
  v6 = mysql->methods->list_fields(mysql);
  if ( !v6 )
    return 0LL;
  result = (MYSQL_RES *)my_malloc(0x98uLL, 48);
  if ( !result )
    return 0LL;
  result->methods = mysql->methods;
  result->field_alloc = mysql->field_alloc;
  field_count = mysql->field_count;
  mysql->fields = 0LL;
  result->fields = v6;
  result->eof = 1;
  result->field_count = field_count;
  return result;
};

// Line 850: range 000000000CFA49E0-000000000CFA4AB8
MYSQL_RES *__fastcall mysql_list_processes(MYSQL *mysql)
{
  uint v1; // ebp
  MYSQL_DATA *v2; // rax
  MYSQL_FIELD *v3; // rax
  uchar *pos; // [rsp+18h] [rbp-20h] BYREF

  if ( mysql->methods->advanced_command(mysql, COM_PROCESS_INFO, 0LL, 0LL, 0LL, 0LL, 0, 0LL) )
    return 0LL;
  free_old_query(mysql);
  pos = mysql->net.read_pos;
  v1 = net_field_length(&pos);
  v2 = mysql->methods->read_rows(mysql, 0LL, (mysql->server_capabilities & 0x200) == 0 ? 5 : 7);
  if ( !v2 )
    return 0LL;
  v3 = unpack_fields(mysql, v2, &mysql->field_alloc, v1, 0, mysql->server_capabilities);
  mysql->fields = v3;
  if ( !v3 )
    return 0LL;
  mysql->field_count = v1;
  mysql->status = MYSQL_STATUS_GET_RESULT;
  return mysql_store_result(mysql);
};

// Line 896: range 000000000CFA4AC0-000000000CFA4AFE
int __fastcall mysql_shutdown(MYSQL *mysql, mysql_enum_shutdown_level shutdown_level)
{
  const st_mysql_methods *methods; // rax
  uchar level[1]; // [rsp+1Fh] [rbp-9h] BYREF

  methods = mysql->methods;
  level[0] = shutdown_level;
  return methods->advanced_command(mysql, COM_SHUTDOWN, 0LL, 0LL, level, 1uLL, 0, 0LL);
};

// Line 906: range 000000000CFA4B00-000000000CFA4B3E
int __fastcall mysql_refresh(MYSQL *mysql, uint options)
{
  const st_mysql_methods *methods; // rax
  uchar bits[1]; // [rsp+1Fh] [rbp-9h] BYREF

  methods = mysql->methods;
  bits[0] = options;
  return methods->advanced_command(mysql, COM_REFRESH, 0LL, 0LL, bits, 1uLL, 0, 0LL);
};

// Line 919: range 000000000CFA4B40-000000000CFA4B9D
int __fastcall mysql_kill(MYSQL *mysql, ulong pid)
{
  uchar buff[4]; // [rsp+10h] [rbp-18h] BYREF

  *(_WORD *)buff = pid;
  buff[3] = BYTE3(pid);
  buff[2] = BYTE2(pid);
  return mysql->methods->advanced_command(mysql, COM_PROCESS_KILL, 0LL, 0LL, buff, 4uLL, 0, 0LL);
};

// Line 926: range 000000000CFA4BA0-000000000CFA4BE6
int __fastcall mysql_set_server_option(MYSQL *mysql, enum_mysql_set_option option)
{
  const st_mysql_methods *methods; // rax
  uchar buff[2]; // [rsp+10h] [rbp-18h] BYREF

  methods = mysql->methods;
  *(_WORD *)buff = option;
  return methods->advanced_command(mysql, COM_SET_OPTION, 0LL, 0LL, buff, 2uLL, 0, 0LL);
};

// Line 936: range 000000000CFA4BF0-000000000CFA4C24
int __fastcall mysql_dump_debug_info(MYSQL *mysql)
{
  return mysql->methods->advanced_command(mysql, COM_DEBUG, 0LL, 0LL, 0LL, 0LL, 0, 0LL);
};

// Line 943: range 000000000CFA4C30-000000000CFA4C6C
const char *__fastcall cli_read_statistics(MYSQL *mysql)
{
  const char *result; // rax

  mysql->net.read_pos[mysql->packet_length] = 0;
  result = (const char *)mysql->net.read_pos;
  if ( !*result )
  {
    set_mysql_error(mysql, 2009, unknown_sqlstate);
    return mysql->net.last_error;
  }
  return result;
};

// Line 956: range 000000000CFA4C70-000000000CFA4CCB
const char *__fastcall mysql_stat(MYSQL *mysql)
{
  if ( mysql->methods->advanced_command(mysql, COM_STATISTICS, 0LL, 0LL, 0LL, 0LL, 0, 0LL) )
    return mysql->net.last_error;
  else
    return mysql->methods->read_statistics(mysql);
};

// Line 966: range 000000000CFA4CD0-000000000CFA4D04
int __fastcall mysql_ping(MYSQL *mysql)
{
  return mysql->methods->advanced_command(mysql, COM_PING, 0LL, 0LL, 0LL, 0LL, 0, 0LL);
};

// Line 979: range 000000000CFA4D10-000000000CFA4D17
const char *__fastcall mysql_get_server_info(MYSQL *mysql)
{
  return mysql->server_version;
};

// Line 986: range 000000000CFA4D20-000000000CFA4D27
const char *__fastcall mysql_get_host_info(MYSQL *mysql)
{
  return mysql->host_info;
};

// Line 993: range 000000000CFA4D30-000000000CFA4D36
uint __fastcall mysql_get_proto_info(MYSQL *mysql)
{
  return mysql->protocol_version;
};

// Line 1000: range 000000000CFA4D40-000000000CFA4D47
const char *__cdecl mysql_get_client_info()
{
  return "5.5.30";
};

// Line 1005: range 000000000CFA4D50-000000000CFA4D55
ulong __cdecl mysql_get_client_version()
{
  return 50530LL;
};

// Line 1009: range 000000000CFA4D60-000000000CFA4D67
my_bool __fastcall mysql_eof(MYSQL_RES *res)
{
  return res->eof;
};

// Line 1014: range 000000000CFA4D70-000000000CFA4D7A
MYSQL_FIELD *__fastcall mysql_fetch_field_direct(MYSQL_RES *res, uint fieldnr)
{
  return &res->fields[(unsigned __int64)fieldnr];
};

// Line 1019: range 000000000CFA4D80-000000000CFA4D84
MYSQL_FIELD *__fastcall mysql_fetch_fields(MYSQL_RES *res)
{
  return res->fields;
};

// Line 1024: range 000000000CFA4D90-000000000CFA4D94
MYSQL_ROW_OFFSET __fastcall mysql_row_tell(MYSQL_RES *res)
{
  return res->data_cursor;
};

// Line 1029: range 000000000CFA4DA0-000000000CFA4DA6
MYSQL_FIELD_OFFSET __fastcall mysql_field_tell(MYSQL_RES *res)
{
  return res->current_field;
};

// Line 1036: range 000000000CFA4DB0-000000000CFA4DB6
unsigned int __fastcall mysql_field_count(MYSQL *mysql)
{
  return mysql->field_count;
};

// Line 1041: range 000000000CFA4DC0-000000000CFA4DC7
my_ulonglong __fastcall mysql_affected_rows(MYSQL *mysql)
{
  return mysql->affected_rows;
};

// Line 1046: range 000000000CFA4DD0-000000000CFA4DD7
my_ulonglong __fastcall mysql_insert_id(MYSQL *mysql)
{
  return mysql->insert_id;
};

// Line 1051: range 000000000CFA4DE0-000000000CFA4DFA
const char *__fastcall mysql_sqlstate(MYSQL *mysql)
{
  if ( mysql )
    return mysql->net.sqlstate;
  else
    return cant_connect_sqlstate;
};

// Line 1056: range 000000000CFA4E00-000000000CFA4E06
uint __fastcall mysql_warning_count(MYSQL *mysql)
{
  return mysql->warning_count;
};

// Line 1061: range 000000000CFA4E10-000000000CFA4E17
const char *__fastcall mysql_info(MYSQL *mysql)
{
  return mysql->info;
};

// Line 1066: range 000000000CFA4E20-000000000CFA4E27
ulong __fastcall mysql_thread_id(MYSQL *mysql)
{
  return mysql->thread_id;
};

// Line 1071: range 000000000CFA4E30-000000000CFA4E3B
const char *__fastcall mysql_character_set_name(MYSQL *mysql)
{
  return mysql->charset->csname;
};

// Line 1076: range 000000000CFA4E40-000000000CFA4E9E
void __fastcall mysql_get_character_set_info(MYSQL *mysql, MY_CHARSET_INFO *csinfo)
{
  charset_info_st *charset; // rax
  unsigned int mbminlen; // edx
  char *charset_dir; // rax

  charset = mysql->charset;
  csinfo->number = charset->number;
  csinfo->state = charset->state;
  csinfo->csname = charset->csname;
  csinfo->name = charset->name;
  csinfo->comment = charset->comment;
  mbminlen = charset->mbminlen;
  LODWORD(charset) = charset->mbmaxlen;
  csinfo->mbminlen = mbminlen;
  csinfo->mbmaxlen = (unsigned int)charset;
  charset_dir = mysql->options.charset_dir;
  if ( charset_dir )
    csinfo->dir = charset_dir;
  else
    csinfo->dir = charsets_dir;
};

// Line 1093: range 000000000CFA4EA0-000000000CFA4EA5
uint __cdecl mysql_thread_safe()
{
  return 1;
};

// Line 1103: range 000000000CFA4EB0-000000000CFA4EB2
my_bool __cdecl mysql_embedded()
{
  return 0;
};

// Line 1114: range 000000000CFA4EC0-000000000CFA4F12
void __fastcall my_net_local_init(NET *net)
{
  unsigned __int64 v1; // rax

  net->max_packet = (unsigned int)net_buffer_length;
  my_net_set_read_timeout(net, 0x1E13380u);
  my_net_set_write_timeout(net, 0x1E13380u);
  net->retry_count = 1;
  v1 = max_allowed_packet;
  if ( net_buffer_length >= max_allowed_packet )
    v1 = net_buffer_length;
  net->max_packet_size = v1;
};

// Line 1148: range 000000000CFA4F20-000000000CFA4F82
ulong __fastcall mysql_hex_string(char *to, const char *from, ulong length)
{
  const char *v3; // rdx
  const char *v4; // rax
  char *v5; // rcx
  unsigned __int8 v6; // r8
  char *v7; // rdx
  ulong result; // rax

  v3 = &from[length];
  if ( from >= v3 )
  {
    v7 = to;
    result = 0LL;
  }
  else
  {
    v4 = from;
    v5 = to;
    do
    {
      v6 = *v4++;
      v5 += 2;
      *(v5 - 2) = dig_vec_upper[v6 >> 4];
      *(v5 - 1) = dig_vec_upper[*(v4 - 1) & 0xF];
    }
    while ( v4 != v3 );
    v7 = &to[2 * (v4 - from)];
    result = 2 * (v4 - from);
  }
  *v7 = 0;
  return result;
};

// Line 1165: range 000000000CFA4F90-000000000CFA4FB4
ulong __fastcall mysql_escape_string(char *to, const char *from, ulong length)
{
  return (unsigned int)escape_string_for_mysql(default_charset_info, to, 0LL, from, length);
};

// Line 1172: range 000000000CFA4FC0-000000000CFA4FFB
ulong __fastcall mysql_real_escape_string(MYSQL *mysql, char *to, const char *from, ulong length)
{
  bool v4; // zf
  charset_info_st *charset; // rdi

  v4 = (mysql->server_status & 0x200) == 0;
  charset = mysql->charset;
  if ( v4 )
    return (unsigned int)escape_string_for_mysql(charset, to, 0LL, from, length);
  else
    return (unsigned int)escape_quotes_for_mysql(charset, to, 0LL, from, length);
};

// Line 1180: range 000000000CFA5000-000000000CFA5102
void __fastcall myodbc_remove_escape(MYSQL *mysql, char *name)
{
  char *v2; // r12
  char *v3; // rbx
  MY_CHARSET_HANDLER *cset; // rax
  bool v5; // r13
  char *v6; // rbp
  char v7; // al
  char *v8; // rax
  uint v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v12; // rax
  char v13; // dl

  v3 = name;
  cset = mysql->charset->cset;
  v5 = cset->ismbchar != 0LL;
  if ( !cset->ismbchar )
  {
    if ( *name )
      goto LABEL_5;
LABEL_15:
    v6 = name;
    goto LABEL_13;
  }
  if ( !*name )
    goto LABEL_15;
  v2 = name;
  do
    ++v2;
  while ( *v2 );
LABEL_5:
  v6 = name;
  do
  {
    while ( v5 )
    {
      v9 = mysql->charset->cset->ismbchar(mysql->charset, v3, v2);
      if ( !v9 )
        break;
      v10 = v9 - 1;
      v11 = 0LL;
      do
      {
        v6[v11] = v3[v11];
        ++v11;
      }
      while ( v11 != v10 + 1 );
      v12 = &v3[v10];
      v6 += v10 + 1;
      v3 += v10 + 1;
      if ( !v12[1] )
        goto LABEL_13;
    }
    v7 = *v3;
    if ( *v3 == 92 )
    {
      v13 = v3[1];
      if ( v13 )
      {
        ++v3;
        v7 = v13;
      }
    }
    *v6 = v7;
    v8 = v3;
    ++v6;
    ++v3;
  }
  while ( v8[1] );
LABEL_13:
  *v6 = 0;
};

// Line 1310: range 000000000CFA25C0-000000000CFA2641
my_bool __fastcall my_realloc_str(NET *net, ulong length)
{
  signed __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  my_bool result; // al
  my_bool v5; // r12

  v2 = net->write_pos - net->buff;
  v3 = v2 + length;
  if ( v3 <= net->max_packet )
    return 0;
  v5 = net_realloc(net, v3);
  if ( v5 )
  {
    strcpy(net->sqlstate, unknown_sqlstate);
    strcpy(net->last_error, client_errors[net->last_errno - 2000]);
  }
  result = v5;
  net->write_pos = &net->buff[v2];
  return result;
};

// Line 1345: range 000000000CFA5110-000000000CFA514F
void __fastcall set_stmt_error(MYSQL_STMT *stmt, int errcode, const char *sqlstate, const char *err)
{
  char *last_error; // rdi

  last_error = stmt->last_error;
  *((_DWORD *)last_error - 4) = errcode;
  strcpy(last_error, client_errors[errcode - 2000]);
  strcpy(stmt->sqlstate, sqlstate);
};

// Line 1369: range 000000000CFA53B0-000000000CFA53F8
void __fastcall set_stmt_errmsg(MYSQL_STMT *stmt, NET *net)
{
  stmt->last_errno = net->last_errno;
  if ( net->last_error[0] )
    strcpy(stmt->last_error, net->last_error);
  strcpy(stmt->sqlstate, net->sqlstate);
};

// Line 1400: range 000000000CFA59E0-000000000CFA5B39
my_bool __fastcall cli_read_prepare_result(MYSQL *mysql, MYSQL_STMT *stmt)
{
  ulong v2; // rax
  unsigned __int8 *read_pos; // r8
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  MYSQL_DATA *v7; // rax
  unsigned int server_status; // eax
  MYSQL_DATA *v9; // rax
  MYSQL_FIELD *v10; // rax

  v2 = cli_safe_read(mysql);
  if ( v2 == -1LL )
    return 1;
  read_pos = mysql->net.read_pos;
  mysql->warning_count = 0;
  stmt->stmt_id = read_pos[1] + (read_pos[3] << 16) + (read_pos[2] << 8) + (read_pos[4] << 24);
  v4 = (unsigned __int16)(read_pos[5] + (read_pos[6] << 8));
  v5 = (unsigned __int16)(read_pos[7] + (read_pos[8] << 8));
  if ( v2 > 0xB )
  {
    mysql->warning_count = (unsigned __int16)(read_pos[10] + (read_pos[11] << 8));
    if ( !v5 )
    {
LABEL_4:
      if ( !v4 )
      {
LABEL_5:
        stmt->field_count = v4;
        stmt->param_count = v5;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else if ( !(read_pos[7] + (read_pos[8] << 8)) )
  {
    goto LABEL_4;
  }
  v7 = mysql->methods->read_rows(mysql, 0LL, 7LL);
  if ( !v7 )
    return 1;
  free_rows(v7);
  if ( !v4 )
    goto LABEL_5;
LABEL_9:
  server_status = mysql->server_status;
  if ( (server_status & 2) == 0 )
    mysql->server_status = server_status | 1;
  v9 = mysql->methods->read_rows(mysql, 0LL, 7LL);
  if ( v9 )
  {
    v10 = unpack_fields(mysql, v9, &stmt->mem_root, v4, 0, mysql->server_capabilities);
    stmt->fields = v10;
    if ( v10 )
      goto LABEL_5;
  }
  return 1;
};

// Line 1484: range 000000000CFA5B40-000000000CFA5C51
MYSQL_STMT *__fastcall mysql_stmt_init(MYSQL *mysql)
{
  MYSQL_STMT *v2; // rbx
  st_mysql_stmt_extension *v3; // rax
  LIST *stmts; // rdi

  v2 = (MYSQL_STMT *)my_malloc(0x330uLL, 48);
  if ( v2 && (v3 = (st_mysql_stmt_extension *)my_malloc(0x38uLL, 48), (v2->extension = v3) != 0LL) )
  {
    init_alloc_root(&v2->mem_root, 0x800uLL, 0x800uLL);
    init_alloc_root(&v2->result.alloc, 0x1000uLL, 0x1000uLL);
    stmts = mysql->stmts;
    v2->result.alloc.min_malloc = 24LL;
    mysql->stmts = list_add(stmts, &v2->list);
    v2->list.data = v2;
    v2->state = MYSQL_STMT_INIT_DONE;
    v2->read_row_func = stmt_read_row_no_result_set;
    v2->mysql = mysql;
    v2->prefetch_rows = 1LL;
    strcpy(v2->sqlstate, not_error_sqlstate);
    init_alloc_root(&v2->extension->fields_mem_root, 0x800uLL, 0LL);
    return v2;
  }
  else
  {
    set_mysql_error(mysql, 2008, unknown_sqlstate);
    my_free(v2);
    return 0LL;
  }
};

// Line 1554: range 000000000CFA5C60-000000000CFA5E79
int __fastcall mysql_stmt_prepare(MYSQL_STMT *stmt, const char *query, ulong length)
{
  MYSQL *mysql; // rbp
  bool v4; // cc
  unsigned __int64 stmt_id; // rax
  uchar v8; // edx^2
  const st_mysql_methods *methods; // rax
  MYSQL_BIND *v10; // rax
  __int64 param_count; // rdx
  uchar buff[4]; // [rsp+10h] [rbp-38h] BYREF

  mysql = stmt->mysql;
  if ( mysql )
  {
    v4 = stmt->state <= MYSQL_STMT_INIT_DONE;
    stmt->last_errno = 0;
    stmt->last_error[0] = 0;
    if ( !v4 )
    {
      if ( reset_stmt_handle(stmt, 6u) )
        return 1;
      stmt->bind_result_done = 0;
      stmt->bind_param_done = 0;
      stmt->field_count = 0;
      stmt->param_count = 0;
      free_root(&stmt->mem_root, 1);
      free_root(&stmt->extension->fields_mem_root, 0);
      stmt_id = stmt->stmt_id;
      stmt->state = MYSQL_STMT_INIT_DONE;
      *(_WORD *)buff = stmt_id;
      v8 = BYTE2(stmt_id);
      buff[3] = BYTE3(stmt_id);
      methods = mysql->methods;
      buff[2] = v8;
      if ( methods->advanced_command(mysql, COM_STMT_CLOSE, 0LL, 0LL, buff, 4uLL, 1, stmt) )
        goto LABEL_10;
    }
    if ( mysql->methods->advanced_command(
           mysql,
           COM_STMT_PREPARE,
           0LL,
           0LL,
           (const unsigned __int8 *)query,
           length,
           1,
           stmt) )
    {
LABEL_10:
      set_stmt_errmsg(stmt, &mysql->net);
      return 1;
    }
    if ( mysql->methods->read_prepare_result(mysql, stmt) )
    {
      set_stmt_errmsg(stmt, &mysql->net);
      return 1;
    }
    else
    {
      v10 = (MYSQL_BIND *)alloc_root(&stmt->mem_root, 112LL * (stmt->param_count + stmt->field_count));
      stmt->params = v10;
      if ( !v10 )
      {
        set_stmt_error(stmt, 2008, unknown_sqlstate, 0LL);
        return 1;
      }
      param_count = stmt->param_count;
      stmt->state = MYSQL_STMT_PREPARE_DONE;
      stmt->bind = &v10[param_count];
      return 0;
    }
  }
  else
  {
    set_stmt_error(stmt, 2013, unknown_sqlstate, 0LL);
    return 1;
  }
};

// Line 1645: range 000000000CFA5190-000000000CFA539E
void __fastcall alloc_stmt_fields(MYSQL_STMT *stmt)
{
  st_mysql_stmt_extension *extension; // r12
  MYSQL *mysql; // rbx
  MYSQL_FIELD *v3; // rax
  MYSQL_BIND *v4; // rax
  MYSQL_FIELD *fields; // rbx
  MYSQL_FIELD *v6; // rbp
  MYSQL_FIELD *i; // r13
  const char *def; // rsi

  extension = stmt->extension;
  mysql = stmt->mysql;
  free_root(&extension->fields_mem_root, 0);
  v3 = (MYSQL_FIELD *)alloc_root(&extension->fields_mem_root, (unsigned __int64)stmt->field_count << 7);
  stmt->fields = v3;
  if ( v3
    && (v4 = (MYSQL_BIND *)alloc_root(&extension->fields_mem_root, 112LL * stmt->field_count), (stmt->bind = v4) != 0LL) )
  {
    fields = mysql->fields;
    v6 = stmt->fields;
    for ( i = &fields[(unsigned __int64)stmt->field_count]; i > fields; ++v6 )
    {
      if ( !v6 )
        break;
      v6->name = fields->name;
      v6->org_name = fields->org_name;
      v6->table = fields->table;
      v6->org_table = fields->org_table;
      v6->db = fields->db;
      v6->catalog = fields->catalog;
      v6->def = fields->def;
      v6->length = fields->length;
      v6->max_length = fields->max_length;
      *(_QWORD *)&v6->name_length = *(_QWORD *)&fields->name_length;
      *(_QWORD *)&v6->table_length = *(_QWORD *)&fields->table_length;
      *(_QWORD *)&v6->db_length = *(_QWORD *)&fields->db_length;
      *(_QWORD *)&v6->def_length = *(_QWORD *)&fields->def_length;
      *(_QWORD *)&v6->decimals = *(_QWORD *)&fields->decimals;
      *(_QWORD *)&v6->type = *(_QWORD *)&fields->type;
      v6->extension = fields->extension;
      v6->catalog = strmake_root(&extension->fields_mem_root, fields->catalog, fields->catalog_length);
      v6->db = strmake_root(&extension->fields_mem_root, fields->db, fields->db_length);
      v6->table = strmake_root(&extension->fields_mem_root, fields->table, fields->table_length);
      v6->org_table = strmake_root(&extension->fields_mem_root, fields->org_table, fields->org_table_length);
      v6->name = strmake_root(&extension->fields_mem_root, fields->name, fields->name_length);
      v6->org_name = strmake_root(&extension->fields_mem_root, fields->org_name, fields->org_name_length);
      def = fields->def;
      if ( def )
      {
        v6->def = strmake_root(&extension->fields_mem_root, def, fields->def_length);
        v6->def_length = fields->def_length;
      }
      else
      {
        v6->def = 0LL;
        v6->def_length = 0;
      }
      ++fields;
      v6->extension = 0LL;
      v6->max_length = 0LL;
    }
  }
  else
  {
    set_stmt_error(stmt, 2008, unknown_sqlstate, 0LL);
  }
};

// Line 1787: range 000000000CFA5E80-000000000CFA5EFC
MYSQL_RES *__fastcall mysql_stmt_result_metadata(MYSQL_STMT *stmt)
{
  MYSQL_RES *v1; // rbp
  MYSQL_RES *v2; // rax
  MYSQL_RES *v3; // rdx
  const st_mysql_methods *methods; // rax

  v1 = 0LL;
  if ( stmt->field_count )
  {
    v2 = (MYSQL_RES *)my_malloc(0x98uLL, 48);
    v3 = v2;
    if ( v2 )
    {
      v1 = v2;
      methods = stmt->mysql->methods;
      v3->eof = 1;
      v3->methods = methods;
      v3->fields = stmt->fields;
      v3->field_count = stmt->field_count;
    }
    else
    {
      set_stmt_error(stmt, 2008, unknown_sqlstate, 0LL);
    }
  }
  return v1;
};

// Line 1845: range 000000000CFA5F00-000000000CFA5F02
MYSQL_RES *__fastcall mysql_stmt_param_metadata(MYSQL_STMT *stmt)
{
  return 0LL;
};

// Line 1876: range 000000000CFA20A0-000000000CFA20B5
void __fastcall store_param_tinyint(NET *net, MYSQL_BIND *param)
{
  unsigned __int8 *write_pos; // rax

  write_pos = net->write_pos;
  net->write_pos = write_pos + 1;
  *write_pos = *(_BYTE *)param->buffer;
};

// Line 1881: range 000000000CFA20C0-000000000CFA20DC
void __fastcall store_param_short(NET *net, MYSQL_BIND *param)
{
  *(_WORD *)net->write_pos = *(_WORD *)param->buffer;
  net->write_pos += 2;
};

// Line 1888: range 000000000CFA20E0-000000000CFA2113
void __fastcall store_param_int32(NET *net, MYSQL_BIND *param)
{
  *(_DWORD *)net->write_pos = *(_DWORD *)param->buffer;
  net->write_pos += 4;
};

// Line 1895: range 000000000CFA2120-000000000CFA2186
void __fastcall store_param_int64(NET *net, MYSQL_BIND *param)
{
  *(_QWORD *)net->write_pos = *(_QWORD *)param->buffer;
  net->write_pos += 8;
};

// Line 1902: range 000000000CFA2190-000000000CFA21A1
void __fastcall store_param_float(NET *net, MYSQL_BIND *param)
{
  *(_DWORD *)net->write_pos = *(_DWORD *)param->buffer;
  net->write_pos += 4;
};

// Line 1909: range 000000000CFA21B0-000000000CFA21C3
void __fastcall store_param_double(NET *net, MYSQL_BIND *param)
{
  *(_QWORD *)net->write_pos = *(_QWORD *)param->buffer;
  net->write_pos += 8;
};

// Line 1915: range 000000000CFA30F0-000000000CFA31CA
void __fastcall store_param_time(NET *net, MYSQL_BIND *param)
{
  _BYTE *buffer; // rax
  bool v4; // zf
  int v5; // ecx
  int v6; // esi
  __int64 v7; // rdx
  size_t v8; // rbp
  char v9; // al
  unsigned __int8 *write_pos; // rdi
  char buff[13]; // [rsp+0h] [rbp-28h] BYREF

  buffer = param->buffer;
  v4 = buffer[32] == 0;
  v5 = *((_DWORD *)buffer + 2);
  v6 = *((_DWORD *)buffer + 3);
  *(_DWORD *)&buff[2] = v5;
  buff[1] = !v4;
  buff[6] = v6;
  buff[7] = *((_DWORD *)buffer + 4);
  buff[8] = *((_DWORD *)buffer + 5);
  v7 = *((_QWORD *)buffer + 3);
  *(_WORD *)&buff[9] = v7;
  buff[11] = BYTE2(v7);
  buff[12] = BYTE3(v7);
  if ( v7 )
  {
    v8 = 13LL;
    v9 = 12;
  }
  else if ( v6 || *((_QWORD *)buffer + 2) )
  {
    v8 = 9LL;
    v9 = 8;
  }
  else
  {
    v8 = (-(__int64)(v5 == 0) & 0xFFFFFFFFFFFFFFF8LL) + 9;
    v9 = v5 != 0 ? 8 : 0;
  }
  write_pos = net->write_pos;
  buff[0] = v9;
  memcpy(write_pos, buff, v8);
  net->write_pos += v8;
};

// Line 1938: range 000000000CFA3F00-000000000CFA3FDA
void __fastcall net_store_datetime(NET *net, MYSQL_TIME *tm)
{
  unsigned int year; // eax
  unsigned int day; // ecx
  unsigned int hour; // edx
  unsigned int month; // eax
  unsigned __int64 second_part; // rax
  size_t v8; // rbp
  char v9; // al
  Vio *vio; // rdi
  char buff[12]; // [rsp+0h] [rbp-28h] BYREF

  year = tm->year;
  day = tm->day;
  hour = tm->hour;
  buff[1] = tm->year;
  buff[4] = day;
  buff[2] = BYTE1(year);
  month = tm->month;
  buff[5] = hour;
  buff[3] = month;
  buff[6] = tm->minute;
  buff[7] = tm->second;
  second_part = tm->second_part;
  *(_WORD *)&buff[8] = second_part;
  buff[10] = BYTE2(second_part);
  buff[11] = BYTE3(second_part);
  if ( second_part )
  {
    v8 = 12LL;
    v9 = 11;
  }
  else if ( hour || *(_QWORD *)&tm->minute )
  {
    v8 = 8LL;
    v9 = 7;
  }
  else if ( *(_QWORD *)&tm->year )
  {
    v8 = 5LL;
    v9 = 4;
  }
  else
  {
    v8 = (-(__int64)(day == 0) & 0xFFFFFFFFFFFFFFFCLL) + 5;
    v9 = day != 0 ? 4 : 0;
  }
  vio = net->vio;
  buff[0] = v9;
  memcpy(vio, buff, v8);
  net->vio = (Vio *)((char *)net->vio + v8);
};

// Line 1966: range 000000000CFA3FF0-000000000CFA4054
void __fastcall store_param_date(NET *net, MYSQL_BIND *param)
{
  _QWORD *buffer; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  MYSQL_TIME tm; // [rsp+0h] [rbp-38h] BYREF

  buffer = param->buffer;
  *(_QWORD *)&tm.year = *buffer;
  *(_QWORD *)&tm.day = buffer[1];
  v3 = buffer[2];
  tm.hour = 0;
  *(_QWORD *)&tm.minute = v3;
  v4 = buffer[3];
  tm.second = 0;
  tm.minute = 0;
  tm.second_part = v4;
  v5 = buffer[4];
  tm.second_part = 0LL;
  *(_QWORD *)&tm.neg = v5;
  net_store_datetime((NET *)&net->write_pos, &tm);
};

// Line 1975: range 000000000CFA3FE0-000000000CFA3FE8
void __fastcall store_param_datetime(NET *net, MYSQL_BIND *param)
{
  net_store_datetime((NET *)&net->write_pos, (MYSQL_TIME *)param->buffer);
};

// Line 1979: range 000000000CFA31D0-000000000CFA3207
void __fastcall store_param_str(NET *net, MYSQL_BIND *param)
{
  unsigned __int64 v2; // rbx
  uchar *v3; // rax

  v2 = *param->length;
  v3 = net_store_length(net->write_pos, v2);
  net->write_pos = (unsigned __int8 *)memcpy(v3, param->buffer, v2) + v2;
};

// Line 2049: range 000000000CFA5620-000000000CFA575B
my_bool __fastcall execute(MYSQL_STMT *stmt, char *packet, ulong length)
{
  unsigned __int64 stmt_id; // rax
  MYSQL *mysql; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 flags; // rax
  bool v8; // zf
  my_bool result; // al
  uchar buff[9]; // [rsp+10h] [rbp-28h] BYREF

  stmt_id = stmt->stmt_id;
  mysql = stmt->mysql;
  buff[5] = 1;
  buff[6] = 0;
  buff[7] = 0;
  buff[8] = 0;
  *(_WORD *)buff = stmt_id;
  v6 = stmt_id >> 16;
  buff[3] = BYTE3(stmt_id);
  flags = stmt->flags;
  buff[2] = v6;
  buff[4] = flags;
  if ( cli_advanced_command(mysql, COM_STMT_EXECUTE, buff, 9uLL, (const uchar *)packet, length, 1, stmt)
    || mysql->methods->read_query_result(mysql) )
  {
    v8 = stmt->mysql == 0LL;
    stmt->affected_rows = mysql->affected_rows;
    stmt->server_status = mysql->server_status;
    stmt->insert_id = mysql->insert_id;
    if ( v8 )
    {
      return 1;
    }
    else
    {
      set_stmt_errmsg(stmt, &mysql->net);
      return 1;
    }
  }
  else
  {
    stmt->affected_rows = mysql->affected_rows;
    stmt->server_status = mysql->server_status;
    stmt->insert_id = mysql->insert_id;
    result = 0;
    if ( mysql->status == MYSQL_STATUS_GET_RESULT )
    {
      stmt->mysql->status = MYSQL_STATUS_STATEMENT_GET_RESULT;
      return 0;
    }
  }
  return result;
};

// Line 2085: range 000000000CFA5F10-000000000CFA61C7
int __fastcall cli_stmt_execute(MYSQL_STMT *stmt)
{
  MYSQL *mysql; // r12
  size_t v4; // rbx
  my_bool *v5; // rbx
  MYSQL_BIND *v6; // r13
  MYSQL_BIND *i; // rbx
  MYSQL *v8; // r15
  unsigned int param_number; // eax
  char v10; // cl
  unsigned __int8 *v11; // rax
  unsigned __int8 *buff; // rdi
  size_t v13; // rbx
  char *v14; // rax
  char *v15; // r12
  my_bool v16; // al
  my_bool v17; // bl
  MYSQL_BIND *params; // rdx
  unsigned __int8 *write_pos; // rcx
  int v20; // eax
  int v21; // eax

  if ( !stmt->param_count )
    return execute(stmt, 0LL, 0LL);
  mysql = stmt->mysql;
  if ( !stmt->bind_param_done )
  {
    set_stmt_error(stmt, 2031, unknown_sqlstate, 0LL);
    return 1;
  }
  if ( mysql->status || (mysql->server_status & 8) != 0 )
  {
    set_stmt_error(stmt, 2014, unknown_sqlstate, 0LL);
    return 1;
  }
  net_clear(&stmt->mysql->net, 1);
  v4 = (stmt->param_count + 7) >> 3;
  if ( my_realloc_str(&mysql->net, (unsigned int)(v4 + 1)) )
    goto LABEL_21;
  memset(mysql->net.write_pos, 0, v4);
  v5 = (my_bool *)&mysql->net.write_pos[v4];
  v6 = &stmt->params[stmt->param_count];
  mysql->net.write_pos = (unsigned __int8 *)(v5 + 1);
  *v5 = stmt->send_types_to_server;
  if ( !stmt->send_types_to_server )
    goto LABEL_9;
  if ( my_realloc_str(&mysql->net, 2 * stmt->param_count) )
  {
LABEL_21:
    set_stmt_errmsg(stmt, &mysql->net);
    return 1;
  }
  params = stmt->params;
  if ( v6 <= params )
    goto LABEL_19;
  write_pos = mysql->net.write_pos;
  do
  {
    v20 = -(params->is_unsigned == 0);
    ++params;
    v21 = params[-1].buffer_type | ~(_WORD)v20 & 0x8000;
    *write_pos = v21;
    mysql->net.write_pos[1] = BYTE1(v21);
    write_pos = mysql->net.write_pos + 2;
    mysql->net.write_pos = write_pos;
  }
  while ( v6 > params );
LABEL_9:
  for ( i = stmt->params; v6 > i; ++i )
  {
    if ( i->long_data_used )
    {
      i->long_data_used = 0;
    }
    else
    {
      v8 = stmt->mysql;
      if ( *i->is_null )
      {
        param_number = i->param_number;
        v10 = param_number & 7;
        v11 = &v8->net.buff[param_number >> 3];
        *v11 |= 1 << v10;
      }
      else
      {
        if ( my_realloc_str(&stmt->mysql->net, *i->length) )
        {
          set_stmt_errmsg(stmt, &v8->net);
          return 1;
        }
        i->store_param_func(&v8->net, i);
      }
    }
  }
LABEL_19:
  buff = mysql->net.buff;
  v13 = mysql->net.write_pos - buff;
  v14 = (char *)my_memdup(buff, v13, 0);
  v15 = v14;
  if ( v14 )
  {
    v16 = execute(stmt, v14, v13);
    stmt->send_types_to_server = 0;
    v17 = v16;
    my_free(v15);
    return v17;
  }
  else
  {
    set_stmt_error(stmt, 2008, unknown_sqlstate, 0LL);
    return 1;
  }
};

// Line 2176: range 000000000CFA21D0-000000000CFA220C
int __fastcall stmt_read_row_buffered(MYSQL_STMT *stmt, unsigned __int8 **row)
{
  MYSQL_ROWS *data_cursor; // rax

  data_cursor = stmt->data_cursor;
  if ( data_cursor )
  {
    *row = (unsigned __int8 *)data_cursor->data;
    stmt->data_cursor = stmt->data_cursor->next;
    return 0;
  }
  else
  {
    *row = 0LL;
    return 100;
  }
};

// Line 2206: range 000000000CFA5760-000000000CFA583A
int __fastcall stmt_read_row_unbuffered(MYSQL_STMT *stmt, unsigned __int8 **row)
{
  MYSQL *mysql; // rbp
  int result; // eax

  mysql = stmt->mysql;
  if ( !mysql )
  {
    set_stmt_error(stmt, 2013, unknown_sqlstate, 0LL);
    return 1;
  }
  if ( mysql->status == MYSQL_STATUS_STATEMENT_GET_RESULT )
  {
    result = ((__int64 (__fastcall *)(MYSQL *))mysql->methods->unbuffered_fetch)(stmt->mysql);
    if ( result )
    {
      set_stmt_errmsg(stmt, &mysql->net);
      mysql->status = MYSQL_STATUS_READY;
      result = 1;
    }
    else
    {
      if ( *row )
        return result;
      mysql->status = MYSQL_STATUS_READY;
      result = 100;
    }
  }
  else
  {
    set_stmt_error(stmt, stmt->unbuffered_fetch_cancelled == 0 ? 2014 : 2050, unknown_sqlstate, 0LL);
    result = 1;
  }
  if ( mysql->unbuffered_fetch_owner == &stmt->unbuffered_fetch_cancelled )
    mysql->unbuffered_fetch_owner = 0LL;
  return result;
};

// Line 2265: range 000000000CFA5840-000000000CFA59D4
int __fastcall stmt_read_row_from_cursor(MYSQL_STMT *stmt, unsigned __int8 **row)
{
  MYSQL_ROWS *data_cursor; // rax
  int result; // eax
  unsigned int server_status; // eax
  MYSQL *mysql; // r12
  unsigned __int64 stmt_id; // rax
  uchar v7; // edx^2
  unsigned __int64 prefetch_rows; // rax
  uchar v9; // edx^2
  const st_mysql_methods *methods; // rax
  MYSQL_ROWS *data; // rdx
  uchar buff[8]; // [rsp+10h] [rbp-28h] BYREF

  data_cursor = stmt->data_cursor;
  if ( data_cursor )
  {
    *row = (unsigned __int8 *)data_cursor->data;
    stmt->data_cursor = stmt->data_cursor->next;
    return 0;
  }
  server_status = stmt->server_status;
  if ( (server_status & 0x80u) != 0 )
  {
    LOBYTE(server_status) = server_status & 0x7F;
    stmt->server_status = server_status;
    *row = 0LL;
    return 100;
  }
  mysql = stmt->mysql;
  free_root(&stmt->result.alloc, 1);
  stmt_id = stmt->stmt_id;
  stmt->result.data = 0LL;
  stmt->result.rows = 0LL;
  *(_WORD *)buff = stmt_id;
  v7 = BYTE2(stmt_id);
  buff[3] = BYTE3(stmt_id);
  prefetch_rows = stmt->prefetch_rows;
  buff[2] = v7;
  *(_WORD *)&buff[4] = prefetch_rows;
  v9 = BYTE2(prefetch_rows);
  buff[7] = BYTE3(prefetch_rows);
  methods = mysql->methods;
  buff[6] = v9;
  if ( methods->advanced_command(mysql, COM_STMT_FETCH, buff, 8uLL, 0LL, 0LL, 1, stmt) )
  {
    if ( stmt->mysql )
      set_stmt_errmsg(stmt, &mysql->net);
    return 1;
  }
  result = mysql->methods->read_rows_from_cursor(stmt);
  if ( result )
    return 1;
  stmt->server_status = mysql->server_status;
  data = stmt->result.data;
  stmt->data_cursor = data;
  if ( data )
  {
    *row = (unsigned __int8 *)data->data;
    stmt->data_cursor = stmt->data_cursor->next;
  }
  else
  {
    *row = 0LL;
    return 100;
  }
  return result;
};

// Line 2318: range 000000000CFA2210-000000000CFA2215
int __fastcall stmt_read_row_no_data(MYSQL_STMT *stmt, unsigned __int8 **row)
{
  return 100;
};

// Line 2323: range 000000000CFA5160-000000000CFA5183
int __fastcall stmt_read_row_no_result_set(MYSQL_STMT *stmt, unsigned __int8 **row)
{
  set_stmt_error(stmt, 2053, unknown_sqlstate, 0LL);
  return 1;
};

// Line 2347: range 000000000CFA61D0-000000000CFA6262
my_bool __fastcall mysql_stmt_attr_set(MYSQL_STMT *stmt, enum_stmt_attr_type attr_type, const void *value)
{
  unsigned __int64 v4; // rax
  my_bool v5; // al

  if ( attr_type == STMT_ATTR_CURSOR_TYPE )
  {
    if ( value )
    {
      v4 = *(_QWORD *)value;
      if ( *(_QWORD *)value > 1uLL )
        goto err_not_implemented;
    }
    else
    {
      v4 = 0LL;
    }
    stmt->flags = v4;
    return 0;
  }
  if ( attr_type )
  {
    if ( attr_type == STMT_ATTR_PREFETCH_ROWS )
    {
      if ( !value )
        return 1;
      stmt->prefetch_rows = *(_QWORD *)value;
      return 0;
    }
err_not_implemented:
    set_stmt_error(stmt, 2054, unknown_sqlstate, 0LL);
    return 1;
  }
  if ( value )
    v5 = *(_BYTE *)value;
  else
    v5 = 0;
  stmt->update_max_length = v5;
  return 0;
};

// Line 2383: range 000000000CFA6270-000000000CFA62BC
my_bool __fastcall mysql_stmt_attr_get(MYSQL_STMT *stmt, enum_stmt_attr_type attr_type, void *value)
{
  if ( attr_type == STMT_ATTR_CURSOR_TYPE )
  {
    *(_QWORD *)value = stmt->flags;
    return 0;
  }
  else if ( attr_type )
  {
    if ( attr_type == STMT_ATTR_PREFETCH_ROWS )
    {
      *(_QWORD *)value = stmt->prefetch_rows;
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *(_BYTE *)value = stmt->update_max_length;
    return 0;
  }
};

// Line 2449: range 000000000CFA70B0-000000000CFA7110
void __fastcall prepare_to_fetch_result(MYSQL_STMT *stmt)
{
  if ( (stmt->server_status & 0x40) != 0 )
  {
    stmt->mysql->status = MYSQL_STATUS_READY;
    stmt->read_row_func = stmt_read_row_from_cursor;
  }
  else if ( (stmt->flags & 1) != 0 )
  {
    mysql_stmt_store_result(stmt);
  }
  else
  {
    stmt->mysql->unbuffered_fetch_owner = &stmt->unbuffered_fetch_cancelled;
    stmt->unbuffered_fetch_cancelled = 0;
    stmt->read_row_func = stmt_read_row_unbuffered;
  }
};

// Line 2519: range 000000000CFA7120-000000000CFA7271
int __fastcall mysql_stmt_execute(MYSQL_STMT *stmt)
{
  MYSQL *mysql; // rbp
  __int64 v3; // rax
  unsigned int field_count; // ecx
  __int64 v5; // r13
  MYSQL *v6; // rax
  MYSQL_BIND *bind; // rdi
  MYSQL_FIELD *fields; // r12
  MYSQL_FIELD *p_type; // rbp
  MYSQL_FIELD *i; // r13

  mysql = stmt->mysql;
  if ( !mysql || reset_stmt_handle(stmt, 0xCu) || mysql->methods->stmt_execute(stmt) )
  {
    LODWORD(v3) = 1;
  }
  else
  {
    field_count = mysql->field_count;
    stmt->state = MYSQL_STMT_EXECUTE_DONE;
    if ( field_count )
    {
      v5 = stmt->field_count;
      v6 = stmt->mysql;
      if ( (_DWORD)v5 )
      {
        bind = 0LL;
        fields = v6->fields;
        if ( stmt->bind_result_done )
          bind = stmt->bind;
        if ( (_DWORD)v5 == v6->field_count )
        {
          p_type = (MYSQL_FIELD *)&stmt->fields->type;
          for ( i = &fields[v5]; i > fields; ++p_type )
          {
            HIDWORD(p_type[-1].extension) = fields->charsetnr;
            *(_QWORD *)&p_type[-1].name_length = fields->length;
            LODWORD(p_type->name) = fields->type;
            *((_DWORD *)&p_type[-1].type + 1) = fields->flags;
            LODWORD(p_type[-1].extension) = fields->decimals;
            if ( bind )
              setup_one_fetch_function(bind++, (MYSQL_FIELD *)((char *)p_type - 48), p_type);
            ++fields;
          }
        }
        else
        {
          set_stmt_error(stmt, 2057, unknown_sqlstate, 0LL);
        }
      }
      else
      {
        stmt->field_count = v6->field_count;
        alloc_stmt_fields(stmt);
      }
      prepare_to_fetch_result(stmt);
    }
    return stmt->last_errno != 0;
  }
  return v3;
};

// Line 2554: range 000000000CFA62C0-000000000CFA62C6
ulong __fastcall mysql_stmt_param_count(MYSQL_STMT *stmt)
{
  return stmt->param_count;
};

// Line 2563: range 000000000CFA62D0-000000000CFA62D7
my_ulonglong __fastcall mysql_stmt_affected_rows(MYSQL_STMT *stmt)
{
  return stmt->affected_rows;
};

// Line 2574: range 000000000CFA62E0-000000000CFA62E6
unsigned int __fastcall mysql_stmt_field_count(MYSQL_STMT *stmt)
{
  return stmt->field_count;
};

// Line 2595: range 000000000CFA62F0-000000000CFA62F7
my_ulonglong __fastcall mysql_stmt_insert_id(MYSQL_STMT *stmt)
{
  return stmt->insert_id;
};

// Line 2773: range 000000000CFA6300-000000000CFA660B
my_bool __fastcall mysql_stmt_bind_param(MYSQL_STMT *stmt, MYSQL_BIND *my_bind)
{
  my_bool result; // al
  MYSQL_BIND *params; // rbx
  unsigned __int64 *p_buffer_length; // rdx
  unsigned int v5; // eax
  MYSQL_BIND *v6; // rcx
  bool v7; // zf
  unsigned int v8; // r12d
  unsigned int buffer_type; // eax
  unsigned __int64 *length; // rax
  __int64 v11; // rdx

  if ( stmt->param_count )
  {
    memcpy(stmt->params, my_bind, 112LL * stmt->param_count);
    params = stmt->params;
    p_buffer_length = &params->buffer_length;
    v5 = 0;
    v6 = &params[stmt->param_count];
    if ( params >= v6 )
    {
LABEL_40:
      stmt->send_types_to_server = 1;
      stmt->bind_param_done = 1;
      return 0;
    }
    while ( 1 )
    {
      v7 = params->is_null == 0LL;
      v8 = v5 + 1;
      params->param_number = v5;
      params->long_data_used = 0;
      if ( v7 )
        params->is_null = &int_is_null_false;
      buffer_type = params->buffer_type;
      if ( buffer_type == 7 )
      {
LABEL_33:
        params->store_param_func = store_param_datetime;
        *p_buffer_length = 12LL;
        length = params->length;
        goto LABEL_14;
      }
      if ( buffer_type <= 7 )
        break;
      if ( buffer_type == 12 )
        goto LABEL_33;
      if ( buffer_type > 0xC )
      {
        if ( buffer_type != 246 )
        {
          if ( buffer_type > 0xF6 )
          {
            if ( buffer_type - 249 > 5 )
            {
LABEL_32:
              strcpy(stmt->sqlstate, unknown_sqlstate);
              v11 = (unsigned int)params->buffer_type;
              stmt->last_errno = 2036;
              sprintf(stmt->last_error, client_errors[36], v11, v8);
              return 1;
            }
          }
          else if ( buffer_type != 15 )
          {
            goto LABEL_32;
          }
        }
LABEL_30:
        params->store_param_func = store_param_str;
        length = params->length;
LABEL_14:
        if ( length )
          goto LABEL_15;
LABEL_23:
        params->length = p_buffer_length;
        goto LABEL_15;
      }
      if ( buffer_type == 10 )
      {
        params->store_param_func = store_param_date;
        *p_buffer_length = 5LL;
        length = params->length;
        goto LABEL_14;
      }
      if ( buffer_type > 0xA )
      {
        params->store_param_func = store_param_time;
        *p_buffer_length = 13LL;
        length = params->length;
        goto LABEL_14;
      }
      if ( buffer_type != 8 )
        goto LABEL_32;
      params->length = p_buffer_length;
      *p_buffer_length = 8LL;
      params->store_param_func = store_param_int64;
      if ( !p_buffer_length )
        goto LABEL_23;
LABEL_15:
      ++params;
      p_buffer_length += 14;
      if ( v6 <= params )
        goto LABEL_40;
      v5 = v8;
    }
    if ( buffer_type == 3 )
    {
      params->length = p_buffer_length;
      length = p_buffer_length;
      *p_buffer_length = 4LL;
      params->store_param_func = store_param_int32;
    }
    else if ( buffer_type <= 3 )
    {
      if ( buffer_type == 1 )
      {
        params->length = p_buffer_length;
        length = p_buffer_length;
        *p_buffer_length = 1LL;
        params->store_param_func = store_param_tinyint;
      }
      else
      {
        if ( buffer_type <= 1 )
          goto LABEL_30;
        params->length = p_buffer_length;
        length = p_buffer_length;
        *p_buffer_length = 2LL;
        params->store_param_func = store_param_short;
      }
    }
    else if ( buffer_type == 5 )
    {
      params->length = p_buffer_length;
      length = p_buffer_length;
      *p_buffer_length = 8LL;
      params->store_param_func = store_param_double;
    }
    else if ( buffer_type > 5 )
    {
      params->is_null = &int_is_null_true;
      length = params->length;
    }
    else
    {
      params->length = p_buffer_length;
      length = p_buffer_length;
      *p_buffer_length = 4LL;
      params->store_param_func = store_param_float;
    }
    goto LABEL_14;
  }
  result = 0;
  if ( stmt->state <= MYSQL_STMT_INIT_DONE )
  {
    set_stmt_error(stmt, 2030, unknown_sqlstate, 0LL);
    return 1;
  }
  return result;
};

// Line 2934: range 000000000CFA6610-000000000CFA676C
my_bool __fastcall mysql_stmt_send_long_data(MYSQL_STMT *stmt, uint param_number, const char *data, ulong length)
{
  MYSQL_BIND *v4; // rbx
  my_bool result; // al
  unsigned __int64 stmt_id; // rax
  MYSQL *mysql; // r12
  uchar v9; // edx^2
  const st_mysql_methods *methods; // rax
  my_bool v11; // dl
  __int64 v12; // rdx
  uchar buff[6]; // [rsp+10h] [rbp-28h] BYREF

  if ( stmt->param_count <= param_number )
  {
    set_stmt_error(stmt, 2034, unknown_sqlstate, 0LL);
    return 1;
  }
  else
  {
    v4 = &stmt->params[param_number];
    if ( (unsigned int)(v4->buffer_type - 249) > 5 )
    {
      strcpy(stmt->sqlstate, unknown_sqlstate);
      v12 = v4->param_number;
      stmt->last_errno = 2035;
      sprintf(stmt->last_error, client_errors[35], v12);
      return 1;
    }
    else if ( length || (result = 0, !v4->long_data_used) )
    {
      stmt_id = stmt->stmt_id;
      mysql = stmt->mysql;
      v4->long_data_used = 1;
      *(_WORD *)&buff[4] = param_number;
      *(_WORD *)buff = stmt_id;
      v9 = BYTE2(stmt_id);
      buff[3] = BYTE3(stmt_id);
      methods = mysql->methods;
      buff[2] = v9;
      v11 = methods->advanced_command(
              mysql,
              COM_STMT_SEND_LONG_DATA,
              buff,
              6uLL,
              (const unsigned __int8 *)data,
              length,
              1,
              stmt);
      result = 0;
      if ( v11 )
      {
        if ( stmt->mysql )
          set_stmt_errmsg(stmt, &mysql->net);
        return 1;
      }
    }
  }
  return result;
};

// Line 3017: range 000000000CFA26E0-000000000CFA27B6
void __fastcall read_binary_time(MYSQL_TIME *tm, uchar **pos)
{
  unsigned int v4; // eax
  uchar *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi

  v4 = net_field_length(pos);
  if ( v4 )
  {
    v5 = *pos;
    tm->neg = **pos;
    v6 = (v5[4] << 24) + (v5[3] << 16) + v5[1] + (v5[2] << 8);
    tm->day = v6;
    v7 = v5[5];
    tm->hour = v7;
    tm->minute = v5[6];
    tm->second = v5[7];
    v8 = 0LL;
    if ( v4 > 8 )
      v8 = (v5[11] << 24) + (v5[9] << 8) + v5[8] + (v5[10] << 16);
    tm->second_part = v8;
    tm->month = 0;
    tm->year = 0;
    if ( v6 )
    {
      tm->day = 0;
      tm->hour = v7 + 24 * v6;
    }
    tm->time_type = MYSQL_TIMESTAMP_TIME;
    *pos += v4;
  }
  else
  {
    set_zero_time(tm, MYSQL_TIMESTAMP_TIME);
  }
};

// Line 3047: range 000000000CFA27D0-000000000CFA289E
void __fastcall read_binary_datetime(MYSQL_TIME *tm, uchar **pos)
{
  unsigned int v2; // eax
  uchar *v3; // rdx
  unsigned __int64 v4; // rdx

  v2 = net_field_length(pos);
  if ( v2 )
  {
    v3 = *pos;
    tm->neg = 0;
    tm->year = (__int16)(*v3 + (v3[1] << 8));
    tm->month = v3[2];
    tm->day = v3[3];
    if ( v2 <= 4 )
    {
      tm->second = 0;
      tm->minute = 0;
      tm->hour = 0;
    }
    else
    {
      tm->hour = v3[4];
      tm->minute = v3[5];
      tm->second = v3[6];
      if ( v2 > 7 )
      {
        v4 = (v3[8] << 8) + v3[7] + (v3[9] << 16) + (v3[10] << 24);
LABEL_7:
        tm->second_part = v4;
        tm->time_type = MYSQL_TIMESTAMP_DATETIME;
        *pos += v2;
        return;
      }
    }
    v4 = 0LL;
    goto LABEL_7;
  }
  set_zero_time(tm, MYSQL_TIMESTAMP_DATETIME);
};

// Line 3077: range 000000000CFA2650-000000000CFA26CB
void __fastcall read_binary_date(MYSQL_TIME *tm, uchar **pos)
{
  unsigned int v2; // eax
  uchar *v3; // rdx

  v2 = net_field_length(pos);
  if ( v2 )
  {
    v3 = *pos;
    tm->year = (__int16)(**pos + ((*pos)[1] << 8));
    tm->month = v3[2];
    LODWORD(v3) = v3[3];
    tm->second = 0;
    tm->minute = 0;
    tm->hour = 0;
    tm->second_part = 0LL;
    tm->neg = 0;
    tm->time_type = MYSQL_TIMESTAMP_DATE;
    tm->day = (unsigned int)v3;
    *pos += v2;
  }
  else
  {
    set_zero_time(tm, MYSQL_TIMESTAMP_DATE);
  }
};

// Line 3111: range 000000000CFA28C0-000000000CFA2C8C
void __fastcall fetch_string_with_conversion(MYSQL_BIND *param, char *value, uint length)
{
  __m128d v3; // xmm0
  size_t v4; // rbp
  char *v8; // rdx
  MYSQL_TIME *buffer; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  bool v13; // dl
  unsigned __int64 v14; // rax
  bool v15; // dl
  unsigned __int64 v16; // rax
  bool v17; // dl
  __m128d v18; // xmm0
  char v19; // al
  __m128 v20; // xmm1
  __m128i v21; // xmm1
  my_bool *error; // rdx
  char *v23; // rdi
  unsigned __int64 buffer_length; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r13
  double v27; // [rsp+8h] [rbp-40h]
  int err; // [rsp+14h] [rbp-34h] BYREF
  char *end[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = length;
  v8 = &value[length];
  buffer = (MYSQL_TIME *)param->buffer;
  err = 0;
  end[0] = v8;
  switch ( param->buffer_type )
  {
    case MYSQL_TYPE_TINY:
      v12 = my_strtoll10(value, end, &err);
      if ( param->is_unsigned )
      {
        v13 = 1;
        if ( v12 > 0xFF )
          goto LABEL_9;
        goto LABEL_8;
      }
      v13 = 1;
      if ( v12 + 128 <= 0xFF )
LABEL_8:
        v13 = err > 0;
LABEL_9:
      *param->error = v13;
      LOBYTE(buffer->year) = v12;
      return;
    case MYSQL_TYPE_SHORT:
      v14 = my_strtoll10(value, end, &err);
      if ( param->is_unsigned )
      {
        v15 = 1;
        if ( v14 > 0xFFFF )
          goto LABEL_13;
        goto LABEL_12;
      }
      v15 = 1;
      if ( v14 + 0x8000 <= 0xFFFF )
LABEL_12:
        v15 = err > 0;
LABEL_13:
      *param->error = v15;
      LOWORD(buffer->year) = v14;
      return;
    case MYSQL_TYPE_LONG:
      v16 = my_strtoll10(value, end, &err);
      if ( param->is_unsigned )
      {
        v17 = 1;
        if ( v16 > 0xFFFFFFFF )
          goto LABEL_17;
        goto LABEL_16;
      }
      v17 = 1;
      if ( v16 + 0x80000000 <= 0xFFFFFFFF )
LABEL_16:
        v17 = err > 0;
LABEL_17:
      *param->error = v17;
      LOWORD(buffer->year) = v16;
      HIBYTE(buffer->year) = BYTE3(v16);
      BYTE2(buffer->year) = BYTE2(v16);
      return;
    case MYSQL_TYPE_FLOAT:
      v3.m128d_f64[0] = my_charset_latin1.cset->strntod(&my_charset_latin1, value, v4, end, &err);
      v18 = _mm_unpacklo_pd(v3, v3);
      v19 = 1;
      v20 = _mm_cvtpd_ps(v18);
      v21 = (__m128i)_mm_unpacklo_ps(v20, v20);
      if ( *(float *)v21.m128i_i32 == v18.m128d_f64[0] )
        v19 = 0;
      *param->error = (err != 0) | v19;
      buffer->year = _mm_cvtsi128_si32(v21);
      return;
    case MYSQL_TYPE_DOUBLE:
      v27 = my_charset_latin1.cset->strntod(&my_charset_latin1, value, v4, end, &err);
      *param->error = err != 0;
      *(double *)&buffer->year = v27;
      return;
    case MYSQL_TYPE_NULL:
      return;
    case MYSQL_TYPE_TIMESTAMP:
    case MYSQL_TYPE_DATE:
    case MYSQL_TYPE_DATETIME:
      str_to_datetime(value, length, buffer, 1uLL, &err);
      error = param->error;
      *error = err && param->buffer_type == MYSQL_TYPE_DATE && buffer->time_type != MYSQL_TIMESTAMP_DATE;
      return;
    case MYSQL_TYPE_LONGLONG:
      v10 = my_strtoll10(value, end, &err);
      if ( param->is_unsigned )
      {
        LOBYTE(v11) = err != 0;
      }
      else
      {
        LOBYTE(v11) = 1;
        if ( err <= 0 )
        {
          LOBYTE(v11) = 0;
          if ( !err )
            v11 = v10 >> 63;
        }
      }
      *param->error = v11;
      *(_QWORD *)&buffer->year = v10;
      return;
    case MYSQL_TYPE_TIME:
      str_to_time(value, length, buffer, &err);
      *param->error = err != 0;
      return;
    default:
      v23 = &value[param->offset];
      if ( v8 <= v23 )
      {
        v26 = 0LL;
      }
      else
      {
        buffer_length = param->buffer_length;
        v25 = v8 - v23;
        v26 = v25;
        if ( !buffer_length )
          goto LABEL_27;
        if ( v25 <= buffer_length )
          buffer_length = v25;
        memcpy(buffer, v23, buffer_length);
      }
      buffer_length = param->buffer_length;
      if ( v26 < buffer_length )
      {
        *((_BYTE *)&buffer->year + v26) = 0;
        buffer_length = param->buffer_length;
      }
LABEL_27:
      *param->error = v26 > buffer_length;
      *param->length = v4;
      return;
  }
};

// Line 3235: range 000000000CFA36F0-000000000CFA3A96
void __fastcall fetch_long_with_conversion(
        MYSQL_BIND *param,
        MYSQL_FIELD *field,
        MYSQL_FIELD *a3,
        unsigned __int64 value,
        my_bool is_unsigned,
        __m128d a6)
{
  MYSQL_TIME *buffer; // rsi
  bool v9; // dl
  bool v10; // al
  bool v11; // dl
  bool v12; // dl
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  float v15; // xmm0_4
  unsigned __int64 v16; // rax
  signed __int64 v17; // rax
  uint v18; // edx
  char *name; // rcx
  __int64 v20; // rbp
  char *v21; // r12
  my_bool *error; // rax
  float data_0; // [rsp+Ch] [rbp-4Ch]
  uchar buff[22]; // [rsp+10h] [rbp-48h] BYREF

  buffer = (MYSQL_TIME *)param->buffer;
  switch ( param->buffer_type )
  {
    case MYSQL_TYPE_TINY:
      if ( param->is_unsigned )
        v9 = value > 0xFF;
      else
        v9 = value + 128 > 0xFF;
      *param->error = v9;
      *(_BYTE *)param->buffer = value;
      break;
    case MYSQL_TYPE_SHORT:
      if ( param->is_unsigned )
        v11 = value > 0xFFFF;
      else
        v11 = value + 0x8000 > 0xFFFF;
      *param->error = v11;
      LOWORD(buffer->year) = value;
      break;
    case MYSQL_TYPE_LONG:
      if ( param->is_unsigned )
        v12 = value > 0xFFFFFFFF;
      else
        v12 = value + 0x80000000 > 0xFFFFFFFF;
      *param->error = v12;
      LOWORD(buffer->year) = value;
      HIBYTE(buffer->year) = BYTE3(value);
      BYTE2(buffer->year) = BYTE2(value);
      break;
    case MYSQL_TYPE_FLOAT:
      if ( is_unsigned )
      {
        if ( (value & 0x8000000000000000LL) != 0LL )
          a6.m128d_f64[0] = (double)(int)(value & 1 | (value >> 1)) + (double)(int)(value & 1 | (value >> 1));
        else
          a6.m128d_f64[0] = (double)(int)value;
        v15 = _mm_unpacklo_pd(a6, a6).m128d_f64[0];
        data_0 = v15;
        if ( v15 >= 9.223372e18 )
          v16 = (unsigned int)(int)(float)(v15 - 9.223372e18) ^ 0x8000000000000000LL;
        else
          v16 = (unsigned int)(int)v15;
        *param->error = value != v16;
      }
      else
      {
        data_0 = (float)(int)value;
        *param->error = value != (int)(float)(int)value;
      }
      *(float *)&buffer->year = data_0;
      break;
    case MYSQL_TYPE_DOUBLE:
      if ( is_unsigned )
      {
        if ( (value & 0x8000000000000000LL) != 0LL )
          v13 = (double)(int)(value & 1 | (value >> 1)) + (double)(int)(value & 1 | (value >> 1));
        else
          v13 = (double)(int)value;
        *(double *)buff = v13;
        if ( v13 >= 9.223372036854776e18 )
          v14 = (unsigned int)(int)(v13 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v14 = (unsigned int)(int)v13;
        *param->error = value != v14;
      }
      else
      {
        error = param->error;
        *(double *)buff = (double)(int)value;
        *error = value != (int)(double)(int)value;
      }
      *(_QWORD *)&buffer->year = *(_QWORD *)buff;
      break;
    case MYSQL_TYPE_NULL:
      return;
    case MYSQL_TYPE_TIMESTAMP:
    case MYSQL_TYPE_DATE:
    case MYSQL_TYPE_TIME:
    case MYSQL_TYPE_DATETIME:
      number_to_datetime(value, buffer, 1uLL, (int *)buff);
      *param->error = *(_DWORD *)buff != 0;
      break;
    case MYSQL_TYPE_LONGLONG:
      *(_QWORD *)&buffer->year = value;
      v10 = 0;
      if ( param->is_unsigned != is_unsigned )
        v10 = (value & 0x8000000000000000LL) != 0LL;
      *param->error = v10;
      break;
    default:
      v17 = int10_to_str(value, (char *)buff, is_unsigned == 0 ? -10 : 10) - (char *)buff;
      v18 = v17;
      if ( ((__int64)a3->name & 0x40) != 0 )
      {
        name = field->name;
        v20 = (unsigned int)v17;
        if ( (char *)(unsigned int)v17 < field->name && (unsigned __int64)name <= 0x14 )
        {
          bmove_upp(&buff[(_QWORD)name], &buff[(unsigned int)v17], (unsigned int)v17);
          v21 = field->name;
          memset(buff, 48, (size_t)&v21[-v20]);
          v18 = (unsigned int)v21;
        }
      }
      fetch_string_with_conversion(param, (char *)buff, v18);
      break;
  }
};

// Line 3346: range 000000000CFA2CA0-000000000CFA3013
void __fastcall fetch_float_with_conversion(MYSQL_BIND *param, MYSQL_FIELD *field, double value, my_gcvt_arg_type type)
{
  __m128d v4; // xmm1
  _BYTE *buffer; // rbp
  double v9; // xmm0_8
  int v10; // eax
  my_bool *error; // rdx
  unsigned int v12; // eax
  int v13; // eax
  __m128i v14; // xmm0
  unsigned int decimals; // edi
  int buffer_length; // esi
  size_t v17; // rax
  unsigned __int64 length; // rdx
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  size_t v21; // [rsp+0h] [rbp-1A8h]
  char buff[342]; // [rsp+20h] [rbp-188h] BYREF

  v4.m128d_f64[0] = value;
  buffer = param->buffer;
  if ( value < 0.0 )
  {
    v4 = (__m128d)*(unsigned __int64 *)&value;
    v9 = -floor(-value);
  }
  else
  {
    v9 = floor(value);
    v4 = (__m128d)*(unsigned __int64 *)&v4.m128d_f64[0];
  }
  switch ( param->buffer_type )
  {
    case MYSQL_TYPE_TINY:
      if ( param->is_unsigned )
      {
        LOBYTE(v10) = (int)v4.m128d_f64[0];
        *buffer = v10;
      }
      else
      {
        v10 = (int)v4.m128d_f64[0];
        *buffer = (int)v4.m128d_f64[0];
      }
      error = param->error;
      if ( param->is_unsigned )
        v4.m128d_f64[0] = (double)(unsigned __int8)v10;
      else
        v4.m128d_f64[0] = (double)(char)v10;
      goto LABEL_8;
    case MYSQL_TYPE_SHORT:
      v12 = (int)v4.m128d_f64[0];
      if ( param->is_unsigned )
      {
        *buffer = v12;
        LOBYTE(v12) = (unsigned __int16)(int)v4.m128d_f64[0] >> 8;
      }
      else
      {
        *buffer = v12;
        v12 = (unsigned int)(__int16)v12 >> 8;
      }
      buffer[1] = v12;
      error = param->error;
      if ( param->is_unsigned )
        v13 = *(unsigned __int16 *)buffer;
      else
        v13 = *(__int16 *)buffer;
      v4.m128d_f64[0] = (double)v13;
      goto LABEL_8;
    case MYSQL_TYPE_LONG:
      *(_WORD *)buffer = (int)v4.m128d_f64[0];
      buffer[3] = (unsigned int)(int)v4.m128d_f64[0] >> 24;
      buffer[2] = (unsigned int)(int)v4.m128d_f64[0] >> 16;
      error = param->error;
      v4.m128d_f64[0] = (double)*(int *)buffer;
      goto LABEL_8;
    case MYSQL_TYPE_FLOAT:
      v4 = _mm_unpacklo_pd(v4, v4);
      v14 = (__m128i)_mm_cvtpd_ps(v4);
      *(_DWORD *)buffer = _mm_cvtsi128_si32(v14);
      error = param->error;
      v9 = *(float *)v14.m128i_i32;
      goto LABEL_8;
    case MYSQL_TYPE_DOUBLE:
      *(double *)buffer = v4.m128d_f64[0];
      return;
    case MYSQL_TYPE_NULL:
      return;
    case MYSQL_TYPE_LONGLONG:
      if ( param->is_unsigned && v4.m128d_f64[0] >= 9.223372036854776e18 )
      {
        *(_QWORD *)buffer = (unsigned int)(int)(v4.m128d_f64[0] - 9.223372036854776e18);
        *(_QWORD *)buffer ^= 0x8000000000000000LL;
      }
      else
      {
        *(_QWORD *)buffer = (unsigned int)(int)v4.m128d_f64[0];
      }
      error = param->error;
      if ( param->is_unsigned )
      {
        if ( *(__int64 *)buffer < 0 )
        {
          v20 = *(_QWORD *)buffer & 1LL | (*(_QWORD *)buffer >> 1);
          v4.m128d_f64[0] = (double)(int)v20 + (double)(int)v20;
        }
        else
        {
          v4.m128d_f64[0] = (double)(int)*(_QWORD *)buffer;
        }
      }
      else
      {
        v4.m128d_f64[0] = (double)(int)*(_QWORD *)buffer;
      }
LABEL_8:
      *error = v9 != v4.m128d_f64[0];
      break;
    default:
      decimals = field->decimals;
      if ( decimals <= 0x1E )
      {
        v17 = my_fcvt(v4.m128d_f64[0], decimals, buff, 0LL);
      }
      else
      {
        buffer_length = 341;
        if ( param->buffer_length <= 0x155 )
          buffer_length = param->buffer_length;
        v17 = my_gcvt(v4.m128d_f64[0], type, buffer_length, buff, 0LL);
      }
      if ( (field->flags & 0x40) != 0 )
      {
        length = field->length;
        if ( v17 < length && length <= 0x149 )
        {
          v21 = v17;
          bmove_upp((uchar *)&buff[length], (const uchar *)&buff[v17], v17);
          v19 = field->length;
          memset(buff, 48, v19 - v21);
          LODWORD(v17) = v19;
        }
      }
      fetch_string_with_conversion(param, buff, v17);
      break;
  }
};

// Line 3465: range 000000000CFA3AA0-000000000CFA3C5D
void __fastcall fetch_datetime_with_conversion(MYSQL_BIND *param, MYSQL_FIELD *field, MYSQL_TIME *my_time)
{
  __m128d v3; // xmm0
  ulonglong v4; // rax
  double v5; // xmm0_8
  unsigned __int64 v6; // rax
  int v7; // eax
  char buff[30]; // [rsp+10h] [rbp-38h] BYREF

  switch ( param->buffer_type )
  {
    case MYSQL_TYPE_TINY:
    case MYSQL_TYPE_SHORT:
    case MYSQL_TYPE_LONG:
    case MYSQL_TYPE_LONGLONG:
    case MYSQL_TYPE_INT24:
      v6 = TIME_to_ulonglong(my_time);
      fetch_long_with_conversion(param, (MYSQL_FIELD *)&field->length, (MYSQL_FIELD *)&field->flags, v6, 1, v3);
      break;
    case MYSQL_TYPE_FLOAT:
    case MYSQL_TYPE_DOUBLE:
      v4 = TIME_to_ulonglong(my_time);
      if ( (v4 & 0x8000000000000000LL) != 0LL )
        v5 = (double)(int)(v4 & 1 | (v4 >> 1)) + (double)(int)(v4 & 1 | (v4 >> 1));
      else
        v5 = (double)(int)v4;
      fetch_float_with_conversion(param, field, v5, MY_GCVT_ARG_DOUBLE);
      break;
    case MYSQL_TYPE_NULL:
      return;
    case MYSQL_TYPE_TIMESTAMP:
    case MYSQL_TYPE_DATETIME:
      *(MYSQL_TIME *)param->buffer = *my_time;
      break;
    case MYSQL_TYPE_DATE:
      *(MYSQL_TIME *)param->buffer = *my_time;
      *param->error = my_time->time_type != MYSQL_TIMESTAMP_DATE;
      break;
    case MYSQL_TYPE_TIME:
      *(MYSQL_TIME *)param->buffer = *my_time;
      *param->error = my_time->time_type != MYSQL_TIMESTAMP_TIME;
      break;
    case MYSQL_TYPE_YEAR:
      *(_WORD *)param->buffer = my_time->year;
      *param->error = 1;
      break;
    default:
      v7 = my_TIME_to_str(my_time, buff);
      fetch_string_with_conversion(param, buff, v7);
      break;
  }
};

// Line 3538: range 000000000CFA3C70-000000000CFA3EF7
void __fastcall fetch_result_with_conversion(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  __m128d v3; // xmm0
  unsigned int flags; // r8d
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  ulong v10; // rbx
  MYSQL_TIME tm; // [rsp+10h] [rbp-58h] BYREF

  flags = field->flags;
  switch ( field->type )
  {
    case MYSQL_TYPE_TINY:
      v6 = **row;
      if ( (flags & 0x20) == 0 )
        v6 = (char)**row;
      fetch_long_with_conversion(param, (MYSQL_FIELD *)&field->length, (MYSQL_FIELD *)&field->flags, v6, 0, v3);
      ++*row;
      break;
    case MYSQL_TYPE_SHORT:
    case MYSQL_TYPE_YEAR:
      v7 = **row + ((*row)[1] << 8);
      v8 = v7;
      if ( (flags & 0x20) == 0 )
        v8 = (__int16)v7;
      fetch_long_with_conversion(param, (MYSQL_FIELD *)&field->length, (MYSQL_FIELD *)&field->flags, v8, 0, v3);
      *row += 2;
      break;
    case MYSQL_TYPE_LONG:
    case MYSQL_TYPE_INT24:
      v9 = ((*row)[1] << 8) + **row + ((*row)[2] << 16) + ((*row)[3] << 24);
      if ( (flags & 0x20) == 0 )
        v9 = (int)v9;
      fetch_long_with_conversion(param, (MYSQL_FIELD *)&field->length, (MYSQL_FIELD *)&field->flags, v9, 0, v3);
      *row += 4;
      break;
    case MYSQL_TYPE_FLOAT:
      fetch_float_with_conversion(param, field, *(float *)*row, MY_GCVT_ARG_FLOAT);
      *row += 4;
      break;
    case MYSQL_TYPE_DOUBLE:
      fetch_float_with_conversion(param, field, *(double *)*row, MY_GCVT_ARG_DOUBLE);
      *row += 8;
      break;
    case MYSQL_TYPE_TIMESTAMP:
    case MYSQL_TYPE_DATETIME:
      read_binary_datetime(&tm, row);
      fetch_datetime_with_conversion(param, field, &tm);
      break;
    case MYSQL_TYPE_LONGLONG:
      fetch_long_with_conversion(
        param,
        (MYSQL_FIELD *)&field->length,
        (MYSQL_FIELD *)&field->flags,
        ((unsigned __int64)((*row)[4] + ((*row)[6] << 16) + ((*row)[5] << 8) + ((*row)[7] << 24)) << 32)
      + ((*row)[3] << 24)
      + **row
      + ((*row)[1] << 8)
      + ((*row)[2] << 16),
        flags & 0x20,
        v3);
      *row += 8;
      break;
    case MYSQL_TYPE_DATE:
      read_binary_date(&tm, row);
      fetch_datetime_with_conversion(param, field, &tm);
      break;
    case MYSQL_TYPE_TIME:
      read_binary_time(&tm, row);
      fetch_datetime_with_conversion(param, field, &tm);
      break;
    default:
      v10 = net_field_length(row);
      fetch_string_with_conversion(param, (char *)*row, v10);
      *row += v10;
      break;
  }
};

// Line 3655: range 000000000CFA2220-000000000CFA224F
void __fastcall fetch_result_tinyint(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  char v3; // r8
  uchar v4; // cl
  my_bool v5; // cl
  my_bool v6; // al

  v3 = (field->flags & 0x20) != 0;
  v4 = **row;
  *(_BYTE *)param->buffer = v4;
  v5 = v4 >> 7;
  v6 = 0;
  if ( param->is_unsigned != v3 )
    v6 = v5;
  *param->error = v6;
  ++*row;
};

// Line 3664: range 000000000CFA2250-000000000CFA2294
void __fastcall fetch_result_short(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  char v3; // si
  unsigned __int16 v4; // cx
  char v5; // bl
  __int16 v6; // cx
  my_bool v7; // al

  v3 = (field->flags & 0x20) != 0;
  v4 = ((*row)[1] << 8) + **row;
  v5 = HIBYTE(v4);
  *(_BYTE *)param->buffer = **row;
  v6 = v4 >> 15;
  *((_BYTE *)param->buffer + 1) = v5;
  v7 = 0;
  if ( param->is_unsigned != v3 )
    v7 = v6;
  *param->error = v7;
  *row += 2;
};

// Line 3676: range 000000000CFA22A0-000000000CFA2311
void __fastcall fetch_result_int32(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  char v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  my_bool v7; // cl

  v3 = (field->flags & 0x20) != 0;
  v4 = ((*row)[3] << 24) + ((*row)[2] << 16) + **row + ((*row)[1] << 8);
  *(_BYTE *)param->buffer = **row;
  *((_BYTE *)param->buffer + 1) = BYTE1(v4);
  *((_BYTE *)param->buffer + 2) = BYTE2(v4);
  v5 = HIBYTE(v4);
  v6 = v4 >> 31;
  *((_BYTE *)param->buffer + 3) = v5;
  v7 = 0;
  if ( param->is_unsigned != v3 )
    v7 = v6;
  *param->error = v7;
  *row += 4;
};

// Line 3688: range 000000000CFA2320-000000000CFA23A3
void __fastcall fetch_result_int64(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v3 = **row
     + ((*row)[1] << 8)
     + ((*row)[2] << 16)
     + ((*row)[3] << 24)
     + ((unsigned __int64)((*row)[4] + ((*row)[6] << 16) + ((*row)[5] << 8) + ((*row)[7] << 24)) << 32);
  LOBYTE(v4) = 0;
  if ( param->is_unsigned != ((field->flags & 0x20) != 0) )
    v4 = v3 >> 63;
  *param->error = v4;
  *(_QWORD *)param->buffer = v3;
  *row += 8;
};

// Line 3699: range 000000000CFA23B0-000000000CFA23BF
void __fastcall fetch_result_float(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  *(_DWORD *)param->buffer = *(_DWORD *)*row;
  *row += 4;
};

// Line 3709: range 000000000CFA23C0-000000000CFA23D1
void __fastcall fetch_result_double(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  *(_QWORD *)param->buffer = *(_QWORD *)*row;
  *row += 8;
};

// Line 3719: range 000000000CFA27C0-000000000CFA27C7
void __fastcall fetch_result_time(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  read_binary_time((MYSQL_TIME *)param->buffer, row);
};

// Line 3727: range 000000000CFA26D0-000000000CFA26D7
void __fastcall fetch_result_date(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  read_binary_date((MYSQL_TIME *)param->buffer, row);
};

// Line 3735: range 000000000CFA28B0-000000000CFA28B7
void __fastcall fetch_result_datetime(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  read_binary_datetime((MYSQL_TIME *)param->buffer, row);
};

// Line 3741: range 000000000CFA3090-000000000CFA30E8
void __fastcall fetch_result_bin(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  ulong v5; // rax
  unsigned __int64 buffer_length; // r13
  void *buffer; // rdi
  unsigned __int64 v8; // rbx

  v5 = net_field_length(row);
  buffer_length = param->buffer_length;
  buffer = param->buffer;
  v8 = v5;
  if ( v5 <= buffer_length )
    buffer_length = v5;
  memcpy(buffer, *row, buffer_length);
  *param->length = v8;
  *param->error = buffer_length < v8;
  *row += v8;
};

// Line 3753: range 000000000CFA3020-000000000CFA3083
void __fastcall fetch_result_str(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  ulong v5; // rax
  unsigned __int64 buffer_length; // r13
  void *buffer; // rdi
  unsigned __int64 v8; // rbp

  v5 = net_field_length(row);
  buffer_length = param->buffer_length;
  buffer = param->buffer;
  v8 = v5;
  if ( v5 <= buffer_length )
    buffer_length = v5;
  memcpy(buffer, *row, buffer_length);
  if ( param->buffer_length != buffer_length )
    *((_BYTE *)param->buffer + buffer_length) = 0;
  *param->length = v8;
  *param->error = buffer_length < v8;
  *row += v8;
};

// Line 3776: range 000000000CFA23E0-000000000CFA23E6
void __fastcall skip_result_fixed(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  *row += param->pack_length;
};

// Line 3784: range 000000000CFA25A0-000000000CFA25B0
void __fastcall skip_result_with_length(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  *row += net_field_length(row);
};

// Line 3794: range 000000000CFA2570-000000000CFA2597
void __fastcall skip_result_string(MYSQL_BIND *param, MYSQL_FIELD *field, uchar **row)
{
  ulong v4; // rax

  v4 = net_field_length(row);
  *row += v4;
  if ( v4 > field->max_length )
    field->max_length = v4;
};

// Line 3875: range 000000000CFA3210-000000000CFA3642
__int64 __fastcall setup_one_fetch_function(MYSQL_BIND *param, MYSQL_FIELD *field, MYSQL_FIELD *a3)
{
  enum_field_types buffer_type; // r10d
  unsigned int name; // r11d
  MYSQL_PARAMETERS *v5; // rbx
  unsigned __int64 *p_max_allowed_packet; // rdx
  int v7; // eax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // cl
  __int64 result; // rax

  buffer_type = param->buffer_type;
  if ( buffer_type == MYSQL_TYPE_DATE )
  {
    param->fetch_result = fetch_result_date;
    *param->length = 40LL;
    goto LABEL_19;
  }
  if ( (unsigned int)buffer_type > MYSQL_TYPE_DATE )
  {
    if ( buffer_type != MYSQL_TYPE_BIT )
    {
      if ( (unsigned int)buffer_type <= MYSQL_TYPE_BIT )
      {
        if ( buffer_type == MYSQL_TYPE_DATETIME )
          goto LABEL_63;
        if ( (unsigned int)buffer_type < MYSQL_TYPE_DATETIME )
        {
          param->fetch_result = fetch_result_time;
          *param->length = 40LL;
          goto LABEL_19;
        }
        if ( buffer_type == MYSQL_TYPE_YEAR )
        {
LABEL_14:
          param->fetch_result = fetch_result_short;
          *param->length = 2LL;
          goto LABEL_19;
        }
        if ( buffer_type != MYSQL_TYPE_NEWDATE )
          return 1LL;
LABEL_40:
        param->fetch_result = fetch_result_str;
        goto LABEL_19;
      }
      if ( (unsigned int)buffer_type > MYSQL_TYPE_BLOB )
      {
        if ( (unsigned int)buffer_type > MYSQL_TYPE_STRING )
          return 1LL;
        goto LABEL_40;
      }
      if ( (unsigned int)buffer_type < MYSQL_TYPE_TINY_BLOB )
      {
        if ( buffer_type != MYSQL_TYPE_NEWDECIMAL )
          return 1LL;
        goto LABEL_40;
      }
    }
    param->fetch_result = fetch_result_bin;
    goto LABEL_19;
  }
  if ( buffer_type == MYSQL_TYPE_FLOAT )
  {
    param->fetch_result = fetch_result_float;
    *param->length = 4LL;
    goto LABEL_19;
  }
  if ( (unsigned int)buffer_type <= MYSQL_TYPE_FLOAT )
  {
    if ( buffer_type == MYSQL_TYPE_TINY )
    {
      param->fetch_result = fetch_result_tinyint;
      *param->length = 1LL;
      goto LABEL_19;
    }
    if ( buffer_type )
    {
      if ( buffer_type != MYSQL_TYPE_SHORT )
        goto LABEL_18;
      goto LABEL_14;
    }
    goto LABEL_40;
  }
  if ( buffer_type == MYSQL_TYPE_TIMESTAMP )
  {
LABEL_63:
    param->fetch_result = fetch_result_datetime;
    *param->length = 40LL;
    goto LABEL_19;
  }
  if ( (unsigned int)buffer_type > MYSQL_TYPE_TIMESTAMP )
  {
    if ( buffer_type == MYSQL_TYPE_LONGLONG )
    {
      param->fetch_result = fetch_result_int64;
      *param->length = 8LL;
      goto LABEL_19;
    }
LABEL_18:
    param->fetch_result = fetch_result_int32;
    *param->length = 4LL;
    goto LABEL_19;
  }
  if ( buffer_type == MYSQL_TYPE_DOUBLE )
  {
    param->fetch_result = fetch_result_double;
    *param->length = 8LL;
  }
  else
  {
    *param->length = 0LL;
  }
LABEL_19:
  name = (unsigned int)a3->name;
  if ( buffer_type != LODWORD(a3->name) )
  {
    v5 = (MYSQL_PARAMETERS *)&range_list_12915;
    while ( 1 )
    {
      p_max_allowed_packet = v5->p_max_allowed_packet;
      v7 = *(_DWORD *)v5->p_max_allowed_packet;
      if ( v7 != 6 )
      {
        v8 = 0;
        v9 = 0;
        do
        {
          v9 |= buffer_type == v7;
          p_max_allowed_packet = (unsigned __int64 *)((char *)p_max_allowed_packet + 4);
          v8 |= name == v7;
          v7 = *(_DWORD *)p_max_allowed_packet;
        }
        while ( *(_DWORD *)p_max_allowed_packet != 6 );
        if ( v8 | v9 )
          break;
      }
      v5 = (MYSQL_PARAMETERS *)((char *)v5 + 8);
      if ( v5 == &mysql_internal_parameters )
        goto LABEL_26;
    }
    if ( (v9 & v8) == 0 )
LABEL_26:
      param->fetch_result = fetch_result_with_conversion;
  }
  param->skip_result = skip_result_fixed;
  if ( name == 8 )
  {
    field->name = (char *)21;
    result = 0LL;
    param->pack_length = 8;
    return result;
  }
  if ( name <= 8 )
  {
    if ( name == 3 )
    {
      field->name = (char *)11;
      result = 0LL;
      param->pack_length = 4;
      return result;
    }
    if ( name > 3 )
    {
      if ( name == 5 )
      {
        param->pack_length = 8;
        result = 0LL;
        field->name = (char *)331;
        return result;
      }
      if ( name < 5 )
      {
        param->pack_length = 4;
        result = 0LL;
        field->name = (char *)331;
        return result;
      }
      if ( name == 6 )
      {
        param->pack_length = 0;
        result = 0LL;
        field->name = 0LL;
        return result;
      }
      goto LABEL_72;
    }
    if ( name == 1 )
    {
      param->pack_length = 1;
      result = 0LL;
      field->name = (char *)4;
      return result;
    }
    if ( name > 1 )
    {
LABEL_54:
      param->pack_length = 2;
      result = 0LL;
      field->name = (char *)6;
      return result;
    }
LABEL_58:
    param->skip_result = skip_result_string;
    return 0LL;
  }
  if ( name == 13 )
    goto LABEL_54;
  if ( name > 0xD )
  {
    if ( name == 16 )
      goto LABEL_58;
    if ( name <= 0x10 )
    {
      if ( name == 14 )
        goto LABEL_58;
    }
    else if ( name - 246 <= 9 )
    {
      goto LABEL_58;
    }
    return 1LL;
  }
  if ( name == 10 )
  {
    field->name = (char *)10;
    param->skip_result = skip_result_with_length;
    return 0LL;
  }
  if ( name < 0xA )
  {
    field->name = (char *)9;
    result = 0LL;
    param->pack_length = 4;
    return result;
  }
  if ( name == 11 )
  {
    field->name = (char *)15;
    param->skip_result = skip_result_with_length;
    return 0LL;
  }
LABEL_72:
  param->skip_result = skip_result_with_length;
  field->name = (char *)30;
  return 0LL;
};

// Line 4028: range 000000000CFA6770-000000000CFA68E8
my_bool __fastcall mysql_stmt_bind_result(MYSQL_STMT *stmt, MYSQL_BIND *my_bind)
{
  size_t field_count; // r13
  int v4; // esi
  MYSQL_BIND *bind; // rdi
  size_t v7; // r13
  MYSQL_BIND *v8; // rbx
  MYSQL_BIND *v9; // r13
  unsigned int v10; // eax
  MYSQL_FIELD *fields; // rbp
  MYSQL *mysql; // rax
  bool v13; // zf
  unsigned int v14; // r12d
  __int64 type; // rdx

  field_count = stmt->field_count;
  if ( !stmt->field_count )
  {
    v4 = 2030;
    if ( stmt->state > MYSQL_STMT_INIT_DONE )
      v4 = 2052;
    set_stmt_error(stmt, v4, unknown_sqlstate, 0LL);
    return 1;
  }
  bind = stmt->bind;
  v7 = field_count;
  v8 = bind;
  if ( bind != my_bind )
  {
    memcpy(bind, my_bind, v7 * 112);
    v8 = stmt->bind;
  }
  v9 = &v8[v7];
  v10 = 0;
  fields = stmt->fields;
  if ( v8 < v9 )
  {
    while ( 1 )
    {
      if ( v8->is_null )
      {
        if ( !v8->length )
        {
LABEL_18:
          v13 = v8->error == 0LL;
          v8->length = &v8->length_value;
          if ( !v13 )
            goto LABEL_13;
          goto LABEL_19;
        }
      }
      else
      {
        v13 = v8->length == 0LL;
        v8->is_null = &v8->is_null_value;
        if ( v13 )
          goto LABEL_18;
      }
      if ( v8->error )
        goto LABEL_13;
LABEL_19:
      v8->error = &v8->error_value;
LABEL_13:
      v8->param_number = v10;
      v8->offset = 0LL;
      v14 = v10 + 1;
      if ( (unsigned __int8)setup_one_fetch_function(
                              v8,
                              (MYSQL_FIELD *)&fields->max_length,
                              (MYSQL_FIELD *)&fields->type) )
      {
        strcpy(stmt->sqlstate, unknown_sqlstate);
        type = (unsigned int)fields->type;
        stmt->last_errno = 2036;
        sprintf(stmt->last_error, client_errors[36], type, v14);
        return 1;
      }
      ++v8;
      ++fields;
      if ( v9 <= v8 )
        break;
      v10 = v14;
    }
  }
  mysql = stmt->mysql;
  stmt->bind_result_done = 1;
  if ( mysql->options.report_data_truncation )
    stmt->bind_result_done = 3;
  return 0;
};

// Line 4160: range 000000000CFA68F0-000000000CFA6933
int __fastcall cli_unbuffered_fetch(MYSQL *mysql, char **row)
{
  unsigned __int8 *read_pos; // rdx
  char *v3; // rax

  if ( cli_safe_read(mysql) == -1LL )
    return 1;
  read_pos = mysql->net.read_pos;
  v3 = 0LL;
  if ( *read_pos != 0xFE )
    v3 = (char *)(read_pos + 1);
  *row = v3;
  return 0;
};

// Line 4175: range 000000000CFA6940-000000000CFA6AB8
int __fastcall mysql_stmt_fetch(MYSQL_STMT *stmt)
{
  int result; // eax
  int (*v2)(st_mysql_stmt *, unsigned __int8 **); // rdx
  bool v3; // zf
  uchar *v4; // r13
  __int64 field_count; // rcx
  MYSQL_BIND *bind; // rbx
  MYSQL_FIELD *fields; // r14
  MYSQL_BIND *v8; // rcx
  int v9; // r15d
  char v10; // bp
  my_bool *is_null; // rdx
  int v12; // [rsp+Ch] [rbp-5Ch]
  MYSQL_BIND *v13; // [rsp+10h] [rbp-58h]
  uchar *row; // [rsp+20h] [rbp-48h] BYREF
  uchar *v15; // [rsp+28h] [rbp-40h] BYREF

  result = stmt->read_row_func(stmt, &row);
  if ( result )
  {
    v2 = stmt_read_row_no_data;
    stmt->state = MYSQL_STMT_PREPARE_DONE;
    if ( result != 100 )
      v2 = stmt_read_row_no_result_set;
    stmt->read_row_func = v2;
  }
  else
  {
    v3 = stmt->bind_result_done == 0;
    v4 = row;
    v15 = row;
    if ( !v3 )
    {
      field_count = stmt->field_count;
      bind = stmt->bind;
      fields = stmt->fields;
      v15 = &row[(unsigned int)(field_count + 9) >> 3];
      v8 = &bind[field_count];
      if ( bind < v8 )
      {
        v9 = 0;
        v10 = 4;
        do
        {
          *bind->error = 0;
          if ( ((unsigned __int8)v10 & *v4) != 0 )
          {
            is_null = bind->is_null;
            bind->row_ptr = 0LL;
            *is_null = 1;
          }
          else
          {
            v13 = v8;
            v12 = result;
            *bind->is_null = 0;
            bind->row_ptr = v15;
            bind->fetch_result(bind, fields, &v15);
            v8 = v13;
            result = v12;
            v9 += *bind->error;
          }
          v10 *= 2;
          if ( !v10 )
          {
            ++v4;
            v10 = 1;
          }
          ++bind;
          ++fields;
        }
        while ( v8 > bind );
        if ( v9 && (stmt->bind_result_done & 2) != 0 )
          result = 101;
      }
    }
    stmt->state = MYSQL_STMT_FETCH_DONE;
  }
  return result;
};

// Line 4214: range 000000000CFA6AC0-000000000CFA6BD5
int __fastcall mysql_stmt_fetch_column(MYSQL_STMT *stmt, MYSQL_BIND *my_bind, uint column, ulong offset)
{
  MYSQL_BIND *bind; // rsi
  my_bool *error; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  char *v9; // r9
  uchar *v10; // r8
  MYSQL_FIELD *v11; // rsi
  my_bool *is_null; // rcx
  my_bool *v14; // rax
  uchar *row; // [rsp+8h] [rbp-10h] BYREF

  bind = stmt->bind;
  if ( stmt->state <= MYSQL_STMT_EXECUTE_DONE )
  {
    set_stmt_error(stmt, 2051, unknown_sqlstate, 0LL);
    return 1;
  }
  else if ( column >= stmt->field_count )
  {
    set_stmt_error(stmt, 2034, unknown_sqlstate, 0LL);
    return 1;
  }
  else
  {
    error = my_bind->error;
    if ( !error )
    {
      error = &my_bind->error_value;
      my_bind->error = &my_bind->error_value;
    }
    *error = 0;
    v7 = column;
    v8 = (unsigned __int64)column << 7;
    v9 = (char *)bind + v8 - 16 * v7;
    v10 = (uchar *)*((_QWORD *)v9 + 4);
    if ( v10 )
    {
      v11 = (MYSQL_FIELD *)((char *)stmt->fields + v8);
      my_bind->offset = offset;
      is_null = my_bind->is_null;
      row = v10;
      if ( is_null )
        *is_null = 0;
      if ( my_bind->length )
        *my_bind->length = **(_QWORD **)v9;
      else
        my_bind->length = (unsigned __int64 *)(v9 + 80);
      fetch_result_with_conversion(my_bind, v11, &row);
      return 0;
    }
    else
    {
      v14 = my_bind->is_null;
      if ( v14 )
        *v14 = 1;
      return 0;
    }
  }
};

// Line 4259: range 000000000CFA6BE0-000000000CFA6D2E
int __fastcall cli_read_binary_rows(MYSQL_STMT *stmt)
{
  MYSQL_DATA *p_result; // rbp
  MYSQL *mysql; // r13
  unsigned __int8 *read_pos; // r15
  MYSQL_ROWS *v4; // rax
  ulong v5; // rax
  USED_MEM *v6; // rbx

  p_result = &stmt->result;
  mysql = stmt->mysql;
  if ( mysql )
  {
    while ( 1 )
    {
      v5 = cli_safe_read(mysql);
      v6 = (USED_MEM *)v5;
      if ( v5 == -1LL )
      {
        set_stmt_errmsg(stmt, &mysql->net);
        return 1;
      }
      read_pos = mysql->net.read_pos;
      if ( *read_pos == 0xFE && v5 <= 7 )
        break;
      v4 = (MYSQL_ROWS *)alloc_root(&stmt->result.alloc, v5 + 23);
      if ( !v4 )
      {
        set_stmt_error(stmt, 2008, unknown_sqlstate, 0LL);
        return 1;
      }
      v4->data = (MYSQL_ROW)&v4[1];
      p_result->data = v4;
      p_result = (MYSQL_DATA *)v4;
      memcpy(v4->data, read_pos + 1, (size_t)&v6[-1].size + 3);
      p_result->alloc.free = v6;
      ++stmt->result.rows;
    }
    p_result->data = 0LL;
    mysql->warning_count = (unsigned __int16)(read_pos[1] + (read_pos[2] << 8));
    mysql->server_status = (unsigned __int16)(read_pos[3] + (read_pos[4] << 8));
    return 0;
  }
  else
  {
    set_stmt_error(stmt, 2013, unknown_sqlstate, 0LL);
    return 1;
  }
};

// Line 4361: range 000000000CFA6D40-000000000CFA70A7
int __fastcall mysql_stmt_store_result(MYSQL_STMT *stmt)
{
  mysql_status status; // eax
  MYSQL_ROWS *data; // rax
  __int64 field_count; // r8
  char v4; // bl
  MYSQL_BIND *v5; // rbp
  MYSQL_FIELD *fields; // r14
  _BYTE *v7; // r12
  char *v8; // r13
  my_ulonglong rows; // rax
  unsigned __int64 stmt_id; // rax
  MYSQL_BIND *bind; // rsi
  MYSQL_BIND *v13; // rax
  MYSQL_BIND *v14; // rdx
  int v15; // [rsp+14h] [rbp-64h]
  MYSQL_ROWS *cur; // [rsp+18h] [rbp-60h]
  MYSQL *net; // [rsp+28h] [rbp-50h]
  uchar buff[8]; // [rsp+30h] [rbp-48h] BYREF

  net = stmt->mysql;
  if ( !net )
  {
    set_stmt_error(stmt, 2013, unknown_sqlstate, 0LL);
    return 1;
  }
  v15 = 0;
  if ( stmt->field_count )
  {
    if ( stmt->state > MYSQL_STMT_PREPARE_DONE )
    {
      if ( stmt->last_errno )
        return 1;
      status = net->status;
      if ( status )
      {
        if ( status == MYSQL_STATUS_STATEMENT_GET_RESULT )
        {
LABEL_7:
          if ( stmt->update_max_length && !stmt->bind_result_done )
          {
            memset(stmt->bind, 0, 112LL * stmt->field_count);
            bind = stmt->bind;
            v13 = bind;
            v14 = &bind[stmt->field_count];
            if ( bind < v14 )
            {
              do
              {
                v13->buffer_type = MYSQL_TYPE_NULL;
                v13->buffer_length = 1LL;
                ++v13;
              }
              while ( v14 > v13 );
            }
            if ( mysql_stmt_bind_result(stmt, bind) )
              return 1;
            stmt->bind_result_done = 0;
          }
          v15 = net->methods->read_binary_rows(stmt);
          if ( !v15 )
          {
            data = stmt->result.data;
            if ( stmt->update_max_length )
            {
              cur = stmt->result.data;
              if ( data )
              {
                do
                {
                  field_count = stmt->field_count;
                  v4 = 4;
                  v5 = stmt->bind;
                  fields = stmt->fields;
                  v7 = cur->data;
                  *(_QWORD *)buff = &v7[(unsigned int)(field_count + 9) >> 3];
                  field_count *= 112LL;
                  v8 = (char *)v5 + field_count;
                  if ( v5 < (MYSQL_BIND *)((char *)v5 + field_count) )
                  {
                    do
                    {
                      if ( ((unsigned __int8)v4 & *v7) == 0 )
                        v5->skip_result(v5, fields, (unsigned __int8 **)buff);
                      v4 *= 2;
                      if ( !v4 )
                      {
                        ++v7;
                        v4 = 1;
                      }
                      ++v5;
                      ++fields;
                    }
                    while ( v8 > (char *)v5 );
                  }
                  cur = cur->next;
                }
                while ( cur );
                data = stmt->result.data;
              }
              else
              {
                data = 0LL;
              }
            }
            stmt->data_cursor = data;
            rows = stmt->result.rows;
            stmt->affected_rows = rows;
            net->affected_rows = rows;
            stmt->read_row_func = stmt_read_row_buffered;
            net->unbuffered_fetch_owner = 0LL;
            net->status = MYSQL_STATUS_READY;
            return v15;
          }
          free_root(&stmt->result.alloc, 1);
          stmt->result.data = 0LL;
          stmt->result.rows = 0LL;
          net->status = MYSQL_STATUS_READY;
          return 1;
        }
      }
      else if ( (stmt->server_status & 0x40) != 0 )
      {
        stmt_id = stmt->stmt_id;
        buff[4] = -1;
        *(_WORD *)buff = stmt_id;
        buff[5] = -1;
        buff[6] = -1;
        buff[7] = -1;
        buff[3] = BYTE3(stmt_id);
        buff[2] = BYTE2(stmt_id);
        if ( cli_advanced_command(net, COM_STMT_FETCH, buff, 8uLL, 0LL, 0LL, 1, stmt) )
        {
          if ( stmt->mysql )
            set_stmt_errmsg(stmt, &net->net);
          return 1;
        }
        goto LABEL_7;
      }
    }
    set_stmt_error(stmt, 2014, unknown_sqlstate, 0LL);
    return 1;
  }
  return v15;
};

// Line 4479: range 000000000CFA7280-000000000CFA728E
MYSQL_ROW_OFFSET __fastcall mysql_stmt_row_seek(MYSQL_STMT *stmt, MYSQL_ROW_OFFSET row)
{
  MYSQL_ROW_OFFSET result; // rax

  result = stmt->data_cursor;
  stmt->data_cursor = row;
  return result;
};

// Line 4496: range 000000000CFA7290-000000000CFA7297
MYSQL_ROW_OFFSET __fastcall mysql_stmt_row_tell(MYSQL_STMT *stmt)
{
  return stmt->data_cursor;
};

// Line 4507: range 000000000CFA72A0-000000000CFA72F3
void __fastcall mysql_stmt_data_seek(MYSQL_STMT *stmt, my_ulonglong row)
{
  MYSQL_ROWS *data; // rax
  bool i; // dl

  data = stmt->result.data;
  for ( i = data != 0LL; row; --row )
  {
    if ( !i )
      break;
    data = data->next;
    i = data != 0LL;
  }
  stmt->data_cursor = data;
  if ( !row && i )
  {
    stmt->state = MYSQL_STMT_EXECUTE_DONE;
    stmt->read_row_func = stmt_read_row_buffered;
  }
};

// Line 4532: range 000000000CFA7300-000000000CFA7307
my_ulonglong __fastcall mysql_stmt_num_rows(MYSQL_STMT *stmt)
{
  return stmt->result.rows;
};

// Line 4543: range 000000000CFA5400-000000000CFA560C
my_bool __fastcall reset_stmt_handle(MYSQL_STMT *stmt, uint flags)
{
  MYSQL *mysql; // r12
  MYSQL_BIND *params; // rax
  MYSQL_BIND *i; // rdx
  my_bool *unbuffered_fetch_owner; // rax
  unsigned __int64 stmt_id; // rax
  uchar v8; // edx^2
  const st_mysql_methods *methods; // rax
  uchar buff[4]; // [rsp+10h] [rbp-28h] BYREF

  if ( stmt->state <= MYSQL_STMT_INIT_DONE )
    return 0;
  mysql = stmt->mysql;
  if ( (flags & 4) != 0 )
  {
    free_root(&stmt->result.alloc, 1);
    stmt->result.data = 0LL;
    stmt->result.rows = 0LL;
    stmt->data_cursor = 0LL;
  }
  if ( (flags & 2) != 0 )
  {
    params = stmt->params;
    for ( i = &params[stmt->param_count]; i > params; ++params )
      params->long_data_used = 0;
  }
  stmt->read_row_func = stmt_read_row_no_result_set;
  if ( !mysql )
    goto LABEL_17;
  if ( stmt->state > MYSQL_STMT_PREPARE_DONE )
  {
    if ( mysql->unbuffered_fetch_owner == &stmt->unbuffered_fetch_cancelled )
      mysql->unbuffered_fetch_owner = 0LL;
    if ( stmt->field_count && mysql->status )
    {
      mysql->methods->flush_use_result(mysql, 0LL);
      unbuffered_fetch_owner = mysql->unbuffered_fetch_owner;
      if ( unbuffered_fetch_owner )
        *unbuffered_fetch_owner = 1;
      mysql->status = MYSQL_STATUS_READY;
    }
  }
  if ( (flags & 1) != 0
    && (stmt_id = stmt->stmt_id,
        *(_WORD *)buff = stmt_id,
        v8 = BYTE2(stmt_id),
        buff[3] = BYTE3(stmt_id),
        methods = mysql->methods,
        buff[2] = v8,
        methods->advanced_command(mysql, COM_STMT_RESET, buff, 4uLL, 0LL, 0LL, 0, stmt)) )
  {
    set_stmt_errmsg(stmt, &mysql->net);
    stmt->state = MYSQL_STMT_INIT_DONE;
    return 1;
  }
  else
  {
LABEL_17:
    if ( (flags & 8) != 0 )
    {
      if ( stmt->last_errno )
      {
        stmt->last_errno = 0;
        stmt->last_error[0] = 0;
        strcpy(stmt->sqlstate, not_error_sqlstate);
      }
    }
    stmt->state = MYSQL_STMT_PREPARE_DONE;
    return 0;
  }
};

// Line 4614: range 000000000CFA7310-000000000CFA7315
my_bool __fastcall mysql_stmt_free_result(MYSQL_STMT *stmt)
{
  return reset_stmt_handle(stmt, 0xEu);
};

// Line 4635: range 000000000CFA7320-000000000CFA748B
my_bool __fastcall mysql_stmt_close(MYSQL_STMT *stmt)
{
  MEM_ROOT *p_alloc; // rdi
  USED_MEM *used; // rbp
  unsigned __int64 stmt_id; // rax
  uchar v5; // edx^2
  st_used_mem *v6; // rax
  char v7; // al
  int v8; // r12d
  bool v9; // bp
  st_used_mem *next; // rax
  uchar buff[4]; // [rsp+10h] [rbp-28h] BYREF

  p_alloc = &stmt->result.alloc;
  used = p_alloc[-1].used;
  free_root(p_alloc, 0);
  free_root(&stmt->mem_root, 0);
  free_root(&stmt->extension->fields_mem_root, 0);
  if ( used
    && (*(_QWORD *)&used[76].left = list_delete(*(LIST **)&used[76].left, &stmt->list),
        net_clear_error((NET *)used),
        stmt->state > MYSQL_STMT_INIT_DONE) )
  {
    if ( (my_bool *)used[78].next == &stmt->unbuffered_fetch_cancelled )
      used[78].next = 0LL;
    if ( used[72].left )
    {
      (*(void (__fastcall **)(USED_MEM *, __int64))&used[77].next[2].left)(used, 1LL);
      next = used[78].next;
      if ( next )
        LOBYTE(next->next) = 1;
      used[72].left = 0;
    }
    stmt_id = stmt->stmt_id;
    *(_WORD *)buff = stmt_id;
    v5 = BYTE2(stmt_id);
    buff[3] = BYTE3(stmt_id);
    v6 = used[77].next;
    buff[2] = v5;
    v7 = (*(__int64 (__fastcall **)(USED_MEM *, __int64, _QWORD, _QWORD, uchar *, __int64, int, MYSQL_STMT *))&v6->left)(
           used,
           25LL,
           0LL,
           0LL,
           buff,
           4LL,
           1,
           stmt);
    v8 = v7;
    if ( v7 )
      set_stmt_errmsg(stmt, (NET *)used);
    v9 = v8 != 0;
  }
  else
  {
    v9 = 0;
  }
  my_free(stmt->extension);
  my_free(stmt);
  return v9;
};

// Line 4691: range 000000000CFA7490-000000000CFA74CB
my_bool __fastcall mysql_stmt_reset(MYSQL_STMT *stmt)
{
  if ( stmt->mysql )
    return reset_stmt_handle(stmt, 0xBu);
  set_stmt_error(stmt, 2013, unknown_sqlstate, 0LL);
  return 1;
};

// Line 4710: range 000000000CFA74D0-000000000CFA74D6
uint __fastcall mysql_stmt_errno(MYSQL_STMT *stmt)
{
  return stmt->last_errno;
};

// Line 4716: range 000000000CFA74E0-000000000CFA74E7
const char *__fastcall mysql_stmt_sqlstate(MYSQL_STMT *stmt)
{
  return stmt->sqlstate;
};

// Line 4726: range 000000000CFA74F0-000000000CFA74F7
const char *__fastcall mysql_stmt_error(MYSQL_STMT *stmt)
{
  return stmt->last_error;
};

// Line 4741: range 000000000CFA7500-000000000CFA7519
my_bool __fastcall mysql_commit(MYSQL *mysql)
{
  return mysql_real_query(mysql, "commit", 6uLL);
};

// Line 4751: range 000000000CFA7520-000000000CFA7539
my_bool __fastcall mysql_rollback(MYSQL *mysql)
{
  return mysql_real_query(mysql, "rollback", 8uLL);
};

// Line 4764: range 000000000CFA7540-000000000CFA756A
my_bool __fastcall mysql_autocommit(MYSQL *mysql, my_bool auto_mode)
{
  const char *v2; // rax

  v2 = "set autocommit=1";
  if ( !auto_mode )
    v2 = "set autocommit=0";
  return mysql_real_query(mysql, v2, 0x10uLL);
};

// Line 4784: range 000000000CFA7570-000000000CFA757C
my_bool __fastcall mysql_more_results(MYSQL *mysql)
{
  return (mysql->server_status >> 3) & 1;
};

// Line 4794: range 000000000CFA7580-000000000CFA75DA
int __fastcall mysql_next_result(MYSQL *mysql)
{
  bool v1; // zf
  int result; // eax

  if ( mysql->status )
  {
    set_mysql_error(mysql, 2014, unknown_sqlstate);
    return 1;
  }
  else
  {
    net_clear_error(&mysql->net);
    v1 = (mysql->server_status & 8) == 0;
    mysql->affected_rows = -1LL;
    result = -1;
    if ( !v1 )
      return mysql->methods->next_result(mysql);
  }
  return result;
};

// Line 4814: range 000000000CFA75E0-000000000CFA76B3
int __fastcall mysql_stmt_next_result(MYSQL_STMT *stmt)
{
  MYSQL *mysql; // rbp
  int result; // eax
  int v3; // eax
  unsigned int field_count; // edx
  int rc; // [rsp+Ch] [rbp-1Ch]

  mysql = stmt->mysql;
  if ( !mysql )
    return 1;
  result = stmt->last_errno;
  if ( !result )
  {
    if ( (mysql->server_status & 8) != 0 && reset_stmt_handle(stmt, 4u) )
      return 1;
    v3 = mysql_next_result(mysql);
    if ( v3 )
    {
      rc = v3;
      set_stmt_errmsg(stmt, &mysql->net);
      return rc;
    }
    else
    {
      if ( mysql->status == MYSQL_STATUS_GET_RESULT )
        mysql->status = MYSQL_STATUS_STATEMENT_GET_RESULT;
      stmt->bind_result_done = 0;
      field_count = mysql->field_count;
      result = 0;
      stmt->state = MYSQL_STMT_EXECUTE_DONE;
      stmt->field_count = field_count;
      if ( field_count )
      {
        alloc_stmt_fields(stmt);
        prepare_to_fetch_result(stmt);
        return 0;
      }
    }
  }
  return result;
};

// Line 4858: range 000000000CFA76C0-000000000CFA76CB
MYSQL_RES *__fastcall mysql_use_result(MYSQL *mysql)
{
  return (MYSQL_RES *)((__int64 (*)(void))mysql->methods->use_result)();
};

// Line 4863: range 000000000CFA76D0-000000000CFA76DA
my_bool __fastcall mysql_read_query_result(MYSQL *mysql)
{
  return ((__int64 (*)(void))mysql->methods->read_query_result)();
};
