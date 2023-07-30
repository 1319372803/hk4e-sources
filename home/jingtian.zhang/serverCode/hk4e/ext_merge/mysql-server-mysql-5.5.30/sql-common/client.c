// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/sql-common/client.c

// Line 153: range 000000000CF9D310-000000000CF9D44C
int __fastcall my_connect(my_socket fd, const sockaddr *name, uint namelen, uint timeout)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r14d
  int v9; // r13d
  int *v10; // rax
  int v11; // r15d
  int *v12; // r12
  int result; // eax
  int v14; // eax
  bool v15; // sf
  int optval; // [rsp+8h] [rbp-50h] BYREF
  socklen_t optlen; // [rsp+Ch] [rbp-4Ch] BYREF
  struct pollfd fds; // [rsp+10h] [rbp-48h] BYREF

  if ( !timeout )
    return connect(fd, name, namelen);
  v6 = fcntl(fd, 3, 0LL);
  v7 = v6;
  v8 = v6;
  BYTE1(v7) = BYTE1(v6) | 8;
  fcntl(fd, 4, v7);
  v9 = connect(fd, name, namelen);
  v10 = __errno_location();
  v11 = *v10;
  v12 = v10;
  fcntl(fd, 4, v8);
  if ( v11 == 115 || !v9 )
  {
    result = 0;
    if ( v9 )
    {
      fds.fd = fd;
      fds.events = 3;
      v14 = poll(&fds, 1uLL, 1000 * timeout);
      v15 = v14 < 0;
      if ( v14 )
      {
        result = -1;
        if ( !v15 && (fds.revents & 3) != 0 )
        {
          optlen = 4;
          result = getsockopt(fd, 1, 4, &optval, &optlen);
          if ( !result )
          {
            if ( optval )
            {
              *v12 = optval;
              return -1;
            }
          }
        }
      }
      else
      {
        *v12 = 4;
        return -1;
      }
    }
  }
  else
  {
    *v12 = v11;
    return -1;
  }
  return result;
};

// Line 334: range 000000000CF9D460-000000000CF9D4DA
void __fastcall set_mysql_error(MYSQL *mysql, int errcode, const char *sqlstate)
{
  if ( mysql )
  {
    mysql->net.last_errno = errcode;
    strcpy(mysql->net.last_error, client_errors[errcode - 2000]);
    strcpy(mysql->net.sqlstate, sqlstate);
  }
  else
  {
    mysql_server_last_errno = errcode;
    strcpy(mysql_server_last_error, client_errors[errcode - 2000]);
  }
};

// Line 365: range 000000000CF9D800-000000000CF9D822
void __fastcall net_clear_error(NET *net)
{
  char *sqlstate; // rdi

  net->last_errno = 0;
  sqlstate = net->sqlstate;
  *(sqlstate - 512) = 0;
  strcpy(sqlstate, not_error_sqlstate);
};

// Line 382: range 000000000CF9D830-000000000CF9D8E2
void set_mysql_extended_error(MYSQL *mysql, int errcode, const char *sqlstate, const char *format, ...)
{
  va_list args; // [rsp+8h] [rbp-E0h] BYREF

  va_start(args, format);
  mysql->net.last_errno = errcode;
  my_vsnprintf(mysql->net.last_error, 0x1FFuLL, format, (__va_list_tag *)args);
  strcpy(mysql->net.sqlstate, sqlstate);
};

// Line 730: range 000000000CF9DF60-000000000CF9E0B9
ulong __fastcall cli_safe_read(MYSQL *mysql)
{
  ulong v1; // rdx
  unsigned __int8 *read_pos; // rbp
  ulong result; // rax
  const char *v4; // r13
  unsigned int v5; // r12d
  bool v6; // zf
  unsigned int v7; // eax
  int v8; // esi

  if ( mysql->net.vio && (v1 = my_net_read(&mysql->net), v1 - 1 <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    read_pos = mysql->net.read_pos;
    result = v1;
    if ( *read_pos == 0xFF )
    {
      if ( v1 <= 3 )
      {
        set_mysql_error(mysql, 2000, unknown_sqlstate);
      }
      else
      {
        v4 = (const char *)(read_pos + 3);
        v5 = v1 - 2;
        v6 = (mysql->server_capabilities & 0x200) == 0;
        mysql->net.last_errno = (unsigned __int16)(read_pos[1] + (read_pos[2] << 8));
        if ( !v6 && read_pos[3] == 35 )
        {
          v4 = (const char *)(read_pos + 9);
          strmake(mysql->net.sqlstate, (const char *)read_pos + 4, 5uLL);
        }
        else
        {
          strcpy(mysql->net.sqlstate, unknown_sqlstate);
        }
        v7 = 511;
        if ( v5 <= 0x1FF )
          v7 = v5;
        strmake(mysql->net.last_error, v4, v7);
      }
      mysql->server_status &= ~8u;
      return -1LL;
    }
  }
  else
  {
    end_server(mysql);
    v8 = 2013;
    if ( mysql->net.last_errno == 1153 )
      v8 = 2020;
    set_mysql_error(mysql, v8, unknown_sqlstate);
    return -1LL;
  }
  return result;
};

// Line 800: range 000000000CF9DDD0-000000000CF9DDF1
void __fastcall free_rows(MYSQL_DATA *cur)
{
  if ( cur )
  {
    free_root(&cur->alloc, 0);
    my_free(cur);
  }
};

// Line 812: range 000000000CFA1650-000000000CFA184F
my_bool __fastcall cli_advanced_command(
        MYSQL *mysql,
        enum_server_command command,
        const uchar *header,
        ulong header_length,
        const uchar *arg,
        ulong arg_length,
        my_bool skip_check,
        MYSQL_STMT *stmt)
{
  my_bool v12; // r11
  my_bool result; // al
  my_bool v14; // al
  my_bool v15; // r11
  unsigned __int64 v16; // rax
  my_bool v17; // al
  my_bool v18; // al
  bool stmt_skip; // [rsp+8h] [rbp-40h]
  my_bool v20; // [rsp+Ch] [rbp-3Ch]

  v12 = skip_check;
  if ( stmt )
    stmt_skip = stmt->state != MYSQL_STMT_INIT_DONE;
  else
    stmt_skip = 0;
  if ( !mysql->net.vio )
  {
    v17 = mysql_reconnect(mysql);
    v12 = skip_check;
    if ( v17 || stmt_skip )
      return 1;
  }
  if ( mysql->status || (mysql->server_status & 8) != 0 )
  {
    set_mysql_error(mysql, 2014, unknown_sqlstate);
    return 1;
  }
  v20 = v12;
  net_clear_error(&mysql->net);
  mysql->info = 0LL;
  mysql->affected_rows = -1LL;
  net_clear(&mysql->net, command != COM_QUIT);
  v14 = net_write_command(&mysql->net, command, header, header_length, arg, arg_length);
  v15 = v20;
  if ( v14 )
  {
    if ( mysql->net.last_errno == 1153 )
    {
      set_mysql_error(mysql, 2020, unknown_sqlstate);
      return 1;
    }
    end_server(mysql);
    if ( mysql_reconnect(mysql) || stmt_skip )
      return 1;
    v18 = net_write_command(&mysql->net, command, header, header_length, arg, arg_length);
    v15 = v20;
    if ( v18 )
    {
      set_mysql_error(mysql, 2006, unknown_sqlstate);
      return 1;
    }
  }
  result = 0;
  if ( !v15 )
  {
    v16 = cli_safe_read(mysql);
    mysql->packet_length = v16;
    return v16 == -1LL;
  }
  return result;
};

// Line 871: range 000000000CF9DE00-000000000CF9DE63
void __fastcall free_old_query(MYSQL *mysql)
{
  if ( mysql->fields )
    free_root(&mysql->field_alloc, 0);
  init_alloc_root(&mysql->field_alloc, 0x2000uLL, 0LL);
  mysql->fields = 0LL;
  mysql->field_count = 0;
  mysql->warning_count = 0;
  mysql->info = 0LL;
};

// Line 894: range 000000000CF9E0C0-000000000CF9E126
my_bool __fastcall flush_one_result(MYSQL *mysql)
{
  ulong v1; // rax
  unsigned __int8 *read_pos; // rdx
  my_bool result; // al

  while ( 1 )
  {
    v1 = cli_safe_read(mysql);
    if ( v1 == -1LL )
      return 1;
    if ( v1 <= 8 )
    {
      read_pos = mysql->net.read_pos;
      if ( *read_pos == 0xFE )
        break;
    }
  }
  result = 0;
  if ( (mysql->server_capabilities & 0x200) != 0 )
  {
    mysql->warning_count = (unsigned __int16)(read_pos[1] + (read_pos[2] << 8));
    mysql->server_status = (unsigned __int16)((read_pos[4] << 8) + read_pos[3]);
  }
  return result;
};

// Line 939: range 000000000CF9E130-000000000CF9E1E3
my_bool __fastcall opt_flush_ok_packet(MYSQL *mysql, my_bool *is_ok_packet)
{
  my_bool result; // al
  bool v3; // zf
  uchar *v4; // rax
  uchar *packet[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( cli_safe_read(mysql) == -1LL )
    return 1;
  result = 0;
  v3 = *mysql->net.read_pos != 0;
  *is_ok_packet = *mysql->net.read_pos == 0;
  if ( !v3 )
  {
    packet[0] = mysql->net.read_pos + 1;
    net_field_length_ll(packet);
    net_field_length_ll(packet);
    v4 = packet[0];
    v3 = (mysql->server_capabilities & 0x200) == 0;
    mysql->server_status = (unsigned __int16)(*packet[0] + (packet[0][1] << 8));
    packet[0] = v4 + 2;
    if ( !v3 )
      mysql->warning_count = (unsigned __int16)(v4[2] + (v4[3] << 8));
    return 0;
  }
  return result;
};

// Line 974: range 000000000CF9E1F0-000000000CF9E266
void __fastcall cli_flush_use_result(MYSQL *mysql, my_bool flush_all_results)
{
  my_bool is_ok_packet[25]; // [rsp+Fh] [rbp-19h] BYREF

  if ( !flush_one_result(mysql) && flush_all_results && (mysql->server_status & 8) != 0 )
  {
    while ( !opt_flush_ok_packet(mysql, is_ok_packet)
         && !is_ok_packet[0]
         && !flush_one_result(mysql)
         && !flush_one_result(mysql)
         && (mysql->server_status & 8) != 0 )
      ;
  }
};

// Line 1077: range 000000000CF9DE70-000000000CF9DF55
void __fastcall end_server(MYSQL *mysql)
{
  int *v1; // r14
  int v2; // r15d
  LIST *v3; // r13
  LIST *stmts; // rbp
  void *data; // rbx
  LIST *v6; // rax

  v1 = __errno_location();
  v2 = *v1;
  if ( mysql->net.vio )
  {
    v3 = 0LL;
    mysql->net.vio->viodelete(mysql->net.vio);
    stmts = mysql->stmts;
    for ( mysql->net.vio = 0LL; stmts; v3 = v6 )
    {
      while ( 1 )
      {
        data = stmts->data;
        if ( *((_DWORD *)data + 70) == 1 )
          break;
        *((_QWORD *)data + 10) = 0LL;
        *((_DWORD *)data + 67) = 2013;
        strcpy((char *)data + 284, client_errors[13]);
        strcpy((char *)data + 796, unknown_sqlstate);
        stmts = stmts->next;
        if ( !stmts )
          goto LABEL_7;
      }
      v6 = list_add(v3, stmts);
      stmts = stmts->next;
    }
LABEL_7:
    mysql->stmts = v3;
  }
  net_end(&mysql->net);
  free_old_query(mysql);
  *v1 = v2;
};

// Line 1099: range 000000000CF9E550-000000000CF9E60E
void __fastcall mysql_free_result(MYSQL_RES *result)
{
  MYSQL *handle; // rbp
  bool v2; // zf
  my_bool *unbuffered_fetch_owner; // rax

  if ( !result )
    return;
  handle = result->handle;
  if ( handle )
  {
    if ( handle->unbuffered_fetch_owner == &result->unbuffered_fetch_cancelled )
    {
      v2 = handle->status == MYSQL_STATUS_USE_RESULT;
      handle->unbuffered_fetch_owner = 0LL;
      if ( !v2 )
        goto LABEL_5;
    }
    else if ( handle->status != MYSQL_STATUS_USE_RESULT )
    {
      goto LABEL_5;
    }
    handle->methods->flush_use_result(handle, 0LL);
    unbuffered_fetch_owner = handle->unbuffered_fetch_owner;
    handle->status = MYSQL_STATUS_READY;
    if ( unbuffered_fetch_owner )
      *unbuffered_fetch_owner = 1;
  }
LABEL_5:
  free_rows(result->data);
  if ( result->fields )
    free_root(&result->field_alloc, 0);
  my_free(result->row);
  my_free(result);
};

// Line 1164: range 000000000CF9D280-000000000CF9D306
__int64 __fastcall add_init_command(st_mysql_options *options, const char *cmd)
{
  my_bool inserted; // al
  unsigned int v3; // edx
  char *v4; // rdi
  DYNAMIC_ARRAY *v6; // rax
  char *tmp; // [rsp+8h] [rbp-20h] BYREF

  if ( !*(_QWORD *)&options->connect_timeout )
  {
    v6 = (DYNAMIC_ARRAY *)my_malloc(0x18uLL, 16);
    *(_QWORD *)&options->connect_timeout = v6;
    init_dynamic_array(v6, 8u, 0, 5u);
  }
  tmp = my_strdup(cmd, 16);
  if ( !tmp )
  {
    v4 = 0LL;
    goto LABEL_6;
  }
  inserted = insert_dynamic(*(DYNAMIC_ARRAY **)&options->connect_timeout, (uchar *)&tmp);
  v3 = 0;
  if ( inserted )
  {
    v4 = tmp;
LABEL_6:
    my_free(v4);
    return 1;
  }
  return v3;
};

// Line 1209: range 000000000CF9E610-000000000CF9EB1D
void __fastcall mysql_read_default_options(st_mysql_options *options, const char *filename, const char *group)
{
  const char **i; // r15
  const char *v5; // rdi
  char *v6; // r12
  char *v7; // rax
  char *j; // rax
  const char *v9; // rdi
  st_mysql_options_extention *v10; // r8
  bool v11; // al
  int v12; // eax
  int type; // eax
  bool v14; // al
  st_mysql_options_extention *extension; // rax
  st_mysql_options_extention *v16; // r12
  st_mysql_options_extention *v17; // rax
  st_mysql_options_extention *v18; // rdx
  char *v19; // rax
  st_mysql_options_extention *v20; // rax
  st_mysql_options_extention *v21; // rax
  st_mysql_options_extention *v22; // rax
  st_mysql_options_extention *v23; // [rsp+8h] [rbp-480h]
  st_mysql_options_extention *v24; // [rsp+8h] [rbp-480h]
  int argc; // [rsp+1Ch] [rbp-46Ch] BYREF
  char *argv_buff[1]; // [rsp+20h] [rbp-468h] BYREF
  char **option; // [rsp+28h] [rbp-460h] BYREF
  char *groups; // [rsp+30h] [rbp-458h] BYREF
  const char *groupa; // [rsp+38h] [rbp-450h]
  __int64 v30; // [rsp+40h] [rbp-448h]
  char buff[512]; // [rsp+50h] [rbp-438h] BYREF
  char buff2[512]; // [rsp+250h] [rbp-238h] BYREF

  groupa = group;
  argc = 1;
  option = argv_buff;
  v30 = 0LL;
  argv_buff[0] = "client";
  groups = "client";
  my_load_defaults(filename, (const char **)&groups, &argc, &option, 0LL);
  if ( argc != 1 )
  {
    for ( i = (const char **)(option + 1); *i; ++i )
    {
      if ( !my_getopt_is_args_separator(*i) )
      {
        v5 = *i;
        if ( **i == 45 && v5[1] == 45 )
        {
          v6 = 0LL;
          v7 = strcend(v5, 61);
          if ( *v7 )
          {
            v6 = v7 + 1;
            *v7 = 0;
          }
          for ( j = (char *)*i; ; *j = 45 )
          {
            j = strcend(j, 95);
            if ( !*j )
              break;
          }
          switch ( find_type(*i + 2, &option_types, 0) )
          {
            case 1:
              if ( v6 )
                options->port = strtol(v6, 0LL, 10);
              continue;
            case 2:
              if ( v6 )
              {
                my_free(options->unix_socket);
                options->unix_socket = my_strdup(v6, 16);
              }
              continue;
            case 3:
              options->compress = 1;
              options->client_flag |= 0x20uLL;
              continue;
            case 4:
              if ( v6 )
              {
                my_free(options->password);
                options->password = my_strdup(v6, 16);
              }
              continue;
            case 5:
              options->protocol = 3;
              goto LABEL_16;
            case 6:
            case 20:
LABEL_16:
              if ( v6 )
                options->connect_timeout = strtol(v6, 0LL, 10);
              continue;
            case 7:
              if ( v6 )
              {
                my_free(options->user);
                options->user = my_strdup(v6, 16);
              }
              continue;
            case 8:
              add_init_command((st_mysql_options *)&options->init_commands, v6);
              continue;
            case 9:
              if ( v6 )
              {
                my_free(options->host);
                options->host = my_strdup(v6, 16);
              }
              continue;
            case 10:
              if ( v6 )
              {
                my_free(options->db);
                options->db = my_strdup(v6, 16);
              }
              continue;
            case 11:
              v9 = "d:t:o,/tmp/client.trace";
              if ( v6 )
                v9 = v6;
              mysql_debug(v9);
              continue;
            case 12:
              options->client_flag |= 2uLL;
              continue;
            case 17:
              my_free(options->charset_dir);
              options->charset_dir = my_strdup(v6, 16);
              continue;
            case 18:
              my_free(options->charset_name);
              options->charset_name = my_strdup(v6, 16);
              continue;
            case 19:
              options->client_flag |= 0x400uLL;
              continue;
            case 21:
              if ( v6 && !(unsigned int)strtol(v6, 0LL, 10) )
                goto LABEL_18;
              options->client_flag |= 0x80uLL;
              break;
            case 22:
LABEL_18:
              options->client_flag &= ~0x80uLL;
              break;
            case 24:
              if ( v6 )
                options->max_allowed_packet = (int)strtol(v6, 0LL, 10);
              break;
            case 25:
              type = find_type(v6, &sql_protocol_typelib, 0);
              options->protocol = type;
              if ( !type )
              {
                fprintf(stderr, "Unknown option to protocol: %s\n", v6);
                exit(1);
              }
              return;
            case 27:
              options->client_flag |= 0x20000uLL;
              break;
            case 28:
            case 29:
              options->client_flag |= 0x30000uLL;
              break;
            case 30:
              options->secure_auth = 1;
              break;
            case 31:
              v14 = 1;
              if ( v6 )
                v14 = (unsigned int)strtol(v6, 0LL, 10) != 0;
              options->report_data_truncation = v14;
              break;
            case 32:
              if ( strlen(v6) > 0x1FF )
                v6[512] = 0;
              if ( !my_realpath(buff, v6, 0) )
              {
                convert_dirname(buff, buff2, 0LL);
                extension = options->extension;
                if ( extension )
                {
                  my_free(extension->plugin_dir);
                  v16 = options->extension;
                }
                else
                {
                  v22 = (st_mysql_options_extention *)my_malloc(0x18uLL, 48);
                  options->extension = v22;
                  v16 = v22;
                }
                v16->plugin_dir = my_strdup(buff2, 16);
              }
              break;
            case 33:
              v17 = options->extension;
              if ( v17 )
              {
                my_free(v17->default_auth);
                v18 = options->extension;
              }
              else
              {
                v20 = (st_mysql_options_extention *)my_malloc(0x18uLL, 48);
                options->extension = v20;
                v18 = v20;
              }
              v19 = 0LL;
              if ( v6 )
              {
                v24 = v18;
                v19 = my_strdup(v6, 16);
                v18 = v24;
              }
              v18->default_auth = v19;
              break;
            case 34:
              v10 = options->extension;
              if ( !v10 )
              {
                v21 = (st_mysql_options_extention *)my_malloc(0x18uLL, 48);
                options->extension = v21;
                v10 = v21;
              }
              v11 = 1;
              if ( v6 )
              {
                v23 = v10;
                v12 = strtol(v6, 0LL, 10);
                v10 = v23;
                v11 = v12 != 0;
              }
              v10->enable_cleartext_plugin = v11;
              break;
            default:
              continue;
          }
        }
      }
    }
  }
  free_defaults(option);
};

// Line 1436: range 000000000CF9CE10-000000000CF9CE7E
void __fastcall cli_fetch_lengths(ulong *to, MYSQL_ROW column, unsigned int field_count)
{
  ulong *v3; // rcx
  char **v4; // r8
  char *i; // rdx
  char *v6; // rax

  v3 = 0LL;
  v4 = &column[field_count + 1];
  for ( i = 0LL; v4 != column; ++to )
  {
    while ( 1 )
    {
      v6 = *column;
      if ( *column )
        break;
      ++column;
      *to++ = 0LL;
      if ( v4 == column )
        return;
    }
    if ( i )
      *v3 = v6 - i - 1;
    i = v6;
    v3 = to;
    ++column;
  }
};

// Line 1457: range 000000000CF9EB30-000000000CF9EF85
MYSQL_FIELD *__fastcall unpack_fields(
        MYSQL *mysql,
        MYSQL_DATA *data,
        MEM_ROOT *alloc,
        uint fields,
        my_bool default_value,
        uint server_capabilities)
{
  size_t v7; // r13
  __int16 v8; // r12
  MYSQL_ROWS *v11; // r13
  MYSQL_FIELD *v12; // r14
  unsigned int v13; // esi
  const char *v14; // rsi
  char *v15; // rax
  MYSQL_ROW v16; // rax
  unsigned int v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // esi
  char *v20; // rsi
  MYSQL_FIELD *v21; // r14
  const char *v22; // rsi
  bool v23; // zf
  MYSQL_ROW v24; // rdi
  unsigned __int8 *v25; // rax
  unsigned int v26; // edx
  unsigned __int16 v27; // si
  MYSQL_FIELD *result; // [rsp+0h] [rbp-98h]
  ulong lengths[9]; // [rsp+10h] [rbp-88h] BYREF

  v7 = fields << 7;
  v8 = server_capabilities;
  result = (MYSQL_FIELD *)alloc_root(alloc, v7);
  if ( result )
  {
    memset(result, 0, v7);
    v11 = data->data;
    if ( (v8 & 0x200) == 0 )
    {
      if ( v11 )
      {
        v12 = result;
        while ( 1 )
        {
          cli_fetch_lengths(lengths, v11->data, 6 - (default_value == 0));
          v15 = strdup_root(alloc, *(const char **)v11->data);
          v12->table = v15;
          v12->org_table = v15;
          v12->name = strdup_root(alloc, *((const char **)v11->data + 1));
          v16 = v11->data;
          v17 = lengths[0];
          v12->length = (unsigned __int8)*v16[2]
                      + ((unsigned __int8)v16[2][1] << 8)
                      + ((unsigned __int8)v16[2][2] << 16);
          v18 = (unsigned __int8)*v16[3];
          v12->table_length = v17;
          v12->org_table_length = v17;
          v19 = lengths[1];
          v12->catalog = (char *)&off_1B23A528[4];
          v12->db = (char *)&off_1B23A528[4];
          v12->catalog_length = 0;
          v12->db_length = 0;
          v12->type = v18;
          v12->name_length = v19;
          v20 = v16[4];
          if ( (v8 & 4) != 0 )
          {
            v12->flags = (unsigned __int16)((unsigned __int8)*v20 + ((unsigned __int8)v20[1] << 8));
            v13 = (unsigned __int8)v20[2];
          }
          else
          {
            v12->flags = (unsigned __int8)*v20;
            v13 = (unsigned __int8)v20[1];
          }
          v12->decimals = v13;
          if ( v18 != 7 && v18 <= 9 || v18 == 13 || v18 == 246 )
          {
            v12->flags |= 0x8000u;
            if ( !default_value )
            {
LABEL_30:
              v12->def = 0LL;
              goto LABEL_13;
            }
          }
          else if ( !default_value )
          {
            goto LABEL_30;
          }
          v14 = v16[5];
          if ( !v14 )
            goto LABEL_30;
          v12->def = strdup_root(alloc, v14);
          v12->def_length = lengths[5];
LABEL_13:
          v11 = v11->next;
          v12->max_length = 0LL;
          ++v12;
          if ( !v11 )
            goto LABEL_31;
        }
      }
      goto LABEL_31;
    }
    v21 = result;
    if ( !v11 )
    {
LABEL_31:
      free_rows(data);
      return result;
    }
    while ( 1 )
    {
      cli_fetch_lengths(lengths, v11->data, 8 - (default_value == 0));
      v21->catalog = strmake_root(alloc, *(const char **)v11->data, lengths[0]);
      v21->db = strmake_root(alloc, *((const char **)v11->data + 1), lengths[1]);
      v21->table = strmake_root(alloc, *((const char **)v11->data + 2), lengths[2]);
      v21->org_table = strmake_root(alloc, *((const char **)v11->data + 3), lengths[3]);
      v21->name = strmake_root(alloc, *((const char **)v11->data + 4), lengths[4]);
      v21->org_name = strmake_root(alloc, *((const char **)v11->data + 5), lengths[5]);
      v23 = lengths[6] == 12;
      v21->catalog_length = lengths[0];
      v21->db_length = lengths[1];
      v21->table_length = lengths[2];
      v21->org_table_length = lengths[3];
      v21->name_length = lengths[4];
      v21->org_name_length = lengths[5];
      if ( !v23 )
        break;
      v24 = v11->data;
      v25 = (unsigned __int8 *)v24[6];
      v21->charsetnr = (unsigned __int16)(*v25 + (v25[1] << 8));
      v21->length = v25[2] + (v25[4] << 16) + (v25[3] << 8) + (v25[5] << 24);
      v26 = v25[6];
      v21->type = v26;
      v27 = v25[7] + (v25[8] << 8);
      v21->flags = v27;
      v21->decimals = v25[9];
      if ( v26 != 7 && v26 <= 9 || v26 == 13 || v26 == 246 )
        v21->flags = v27 | 0x8000;
      if ( default_value && (v22 = v24[7]) != 0LL )
      {
        v21->def = strmake_root(alloc, v22, lengths[7]);
        v21->def_length = lengths[7];
      }
      else
      {
        v21->def = 0LL;
      }
      v11 = v11->next;
      v21->max_length = 0LL;
      ++v21;
      if ( !v11 )
        goto LABEL_31;
    }
    free_rows(data);
    set_mysql_error(mysql, 2027, unknown_sqlstate);
    return 0LL;
  }
  else
  {
    free_rows(data);
    set_mysql_error(mysql, 2008, unknown_sqlstate);
    return 0LL;
  }
};

// Line 1573: range 000000000CF9E270-000000000CF9E533
MYSQL_DATA *__fastcall cli_read_rows(MYSQL *mysql, MYSQL_FIELD *mysql_fields, unsigned int fields)
{
  ulong v3; // rbx
  MYSQL_ROWS *v4; // r13
  char **v5; // rax
  MYSQL_ROWS **v6; // rax
  MYSQL_ROW data; // rax
  char *v8; // r15
  MYSQL_FIELD *v9; // r12
  __int64 v10; // rbx
  int v11; // ebp
  size_t v12; // r14
  MYSQL_ROW v13; // rax
  __int64 v14; // rdx
  MYSQL_DATA *v15; // rax
  uchar *v16; // rdx
  char *end_to; // [rsp+20h] [rbp-88h]
  MEM_ROOT *mem_root; // [rsp+30h] [rbp-78h]
  MYSQL_ROWS **prev_ptr; // [rsp+38h] [rbp-70h]
  MYSQL_DATA *result; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  uchar *cp; // [rsp+68h] [rbp-40h] BYREF

  v3 = cli_safe_read(mysql);
  if ( v3 == -1LL )
    return 0LL;
  result = (MYSQL_DATA *)my_malloc(0x60uLL, 48);
  if ( !result )
    goto LABEL_24;
  mem_root = &result->alloc;
  init_alloc_root(&result->alloc, 0x2000uLL, 0LL);
  result->alloc.min_malloc = 24LL;
  prev_ptr = &result->data;
  result->rows = 0LL;
  result->fields = fields;
  v22 = 8LL * fields + 8;
  while ( 1 )
  {
    cp = mysql->net.read_pos;
    if ( *cp == 0xFE && v3 <= 7 )
      break;
    ++result->rows;
    v4 = (MYSQL_ROWS *)alloc_root(mem_root, 0x18uLL);
    if ( !v4 || (v5 = (char **)alloc_root(mem_root, v3 + 8LL * (fields + 1)), (v4->data = v5) == 0LL) )
    {
      free_rows(result);
LABEL_24:
      set_mysql_error(mysql, 2008, unknown_sqlstate);
      return 0LL;
    }
    v6 = prev_ptr;
    prev_ptr = &v4->next;
    *v6 = v4;
    data = v4->data;
    v8 = (char *)data + v22;
    end_to = (char *)data + v22 + v3 - 1;
    if ( fields )
    {
      v9 = mysql_fields;
      v10 = 0LL;
      v11 = 0;
      while ( 1 )
      {
        v12 = net_field_length(&cp);
        v13 = v4->data;
        if ( v12 == -1LL )
        {
          v13[v10] = 0LL;
        }
        else
        {
          v13[v10] = v8;
          if ( v12 > end_to - v8 )
          {
            free_rows(result);
            set_mysql_error(mysql, 2027, unknown_sqlstate);
            return 0LL;
          }
          memcpy(v8, cp, v12);
          v8[v12] = 0;
          cp += v12;
          v8 += v12 + 1;
          if ( mysql_fields )
          {
            if ( v12 > v9->max_length )
              v9->max_length = v12;
          }
        }
        ++v11;
        ++v10;
        ++v9;
        if ( v11 == fields )
        {
          data = v4->data;
          v14 = fields;
          goto LABEL_18;
        }
      }
    }
    v14 = 0LL;
LABEL_18:
    data[v14] = v8;
    v3 = cli_safe_read(mysql);
    if ( v3 == -1LL )
    {
      free_rows(result);
      return 0LL;
    }
  }
  *prev_ptr = 0LL;
  v15 = result;
  if ( v3 > 1 )
  {
    v16 = cp;
    mysql->warning_count = (unsigned __int16)(cp[1] + (cp[2] << 8));
    mysql->server_status = (unsigned __int16)((v16[4] << 8) + v16[3]);
  }
  return v15;
};

// Line 1729: range 000000000CF9F1B0-000000000CF9F31B
MYSQL *__fastcall mysql_init(MYSQL *mysql)
{
  MYSQL *v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // rcx
  Vio **v4; // rdi
  MYSQL *result; // rax
  MYSQL *v6; // rax

  v1 = mysql;
  if ( mysql_server_init(0, 0LL, 0LL) )
    return 0LL;
  if ( mysql )
  {
    v2 = 1272;
    if ( ((unsigned __int8)mysql & 1) != 0 )
    {
      LOBYTE(mysql->net.vio) = 0;
      mysql = (MYSQL *)((char *)mysql + 1);
      LOBYTE(v2) = -9;
    }
    if ( ((unsigned __int8)mysql & 2) != 0 )
    {
      mysql = (MYSQL *)((char *)mysql + 2);
      v2 -= 2;
      HIWORD(mysql[-1].extension) = 0;
    }
    if ( ((unsigned __int8)mysql & 4) != 0 )
    {
      LODWORD(mysql->net.vio) = 0;
      v2 -= 4;
      mysql = (MYSQL *)((char *)mysql + 4);
    }
    v3 = v2 >> 3;
    memset(mysql, 0, 8 * v3);
    v4 = &mysql->net.vio + v3;
    if ( (v2 & 4) != 0 )
    {
      *(_DWORD *)v4 = 0;
      v4 = (Vio **)((char *)v4 + 4);
      if ( (v2 & 2) == 0 )
      {
LABEL_11:
        if ( (v2 & 1) == 0 )
        {
LABEL_12:
          v1->options.connect_timeout = 0;
          v1->charset = default_client_charset_info;
          strcpy(v1->net.sqlstate, not_error_sqlstate);
          result = v1;
          v1->options.methods_to_use = MYSQL_OPT_GUESS_CONNECTION;
          v1->options.report_data_truncation = 1;
          v1->reconnect = 0;
          return result;
        }
LABEL_13:
        *(_BYTE *)v4 = 0;
        goto LABEL_12;
      }
    }
    else if ( (v2 & 2) == 0 )
    {
      goto LABEL_11;
    }
    v4 = (Vio **)((char *)v4 + 2);
    *((_WORD *)v4 - 1) = 0;
    if ( (v2 & 1) == 0 )
      goto LABEL_12;
    goto LABEL_13;
  }
  v6 = (MYSQL *)my_malloc(0x4F8uLL, 48);
  v1 = v6;
  if ( v6 )
  {
    v6->free_me = 1;
    goto LABEL_12;
  }
  set_mysql_error(0LL, 2008, unknown_sqlstate);
  return 0LL;
};

// Line 1808: range 000000000CF9F320-000000000CF9F322
my_bool __fastcall mysql_ssl_set(
        MYSQL *mysql,
        const char *key,
        const char *cert,
        const char *ca,
        const char *capath,
        const char *cipher)
{
  return 0;
};

// Line 1863: range 000000000CF9F330-000000000CF9F332
const char *__fastcall mysql_get_ssl_cipher(MYSQL *mysql)
{
  return 0LL;
};

// Line 1953: range 000000000CF9E540-000000000CF9E54D
int __fastcall cli_read_change_user_result(MYSQL *mysql)
{
  return cli_safe_read(mysql);
};

// Line 2257: range 000000000CF9F340-000000000CF9F5D9
int __fastcall mysql_init_character_set(MYSQL *mysql)
{
  char *charset_name; // rax
  const char *v2; // r12
  charset_info_st *charset_by_csname; // rax
  CHARSET_INFO *charset_by_name; // rax
  charset_info_st *v5; // r13
  charset_info_st *charset; // rax
  char *my_name; // r13
  const MY_CSET_OS_NAME *v9; // rbp
  const char *os_name; // rsi
  char cs_dir_name[512]; // [rsp+0h] [rbp-228h] BYREF

  charset_name = mysql->options.charset_name;
  if ( charset_name )
  {
    if ( !strcmp(charset_name, "auto") )
    {
      my_name = "latin1";
      if ( setlocale(0, &off_1B23A528[4]) )
      {
        my_name = nl_langinfo(14);
        if ( my_name )
        {
          v9 = charsets;
          os_name = "646";
          while ( my_charset_latin1.coll->strcasecmp(&my_charset_latin1, os_name, my_name) )
          {
            ++v9;
            os_name = v9->os_name;
            if ( !v9->os_name )
            {
              my_printf_error(0x451u, "Unknown OS character set '%s'.", 0, my_name);
              goto LABEL_19;
            }
          }
          if ( v9->param >= (unsigned int)my_cs_unsupp )
          {
            my_printf_error(0x451u, "OS character set '%s' is not supported by MySQL client", 0, v9->my_name);
LABEL_19:
            my_name = "latin1";
            my_printf_error(0x451u, "Switching to the default character set '%s'.", 0, "latin1");
            goto LABEL_20;
          }
          my_name = (char *)v9->my_name;
        }
      }
LABEL_20:
      charset_name = my_strdup(my_name, 16);
      mysql->options.charset_name = charset_name;
      if ( !charset_name )
        return 1;
    }
  }
  else
  {
    charset_name = my_strdup("latin1", 16);
    mysql->options.charset_name = charset_name;
    if ( !charset_name )
      return 1;
  }
  v2 = charsets_dir;
  if ( mysql->options.charset_dir )
    charsets_dir = mysql->options.charset_dir;
  charset_by_csname = get_charset_by_csname(charset_name, 0x20u, 16);
  mysql->charset = charset_by_csname;
  if ( charset_by_csname )
  {
    charset_by_name = get_charset_by_name("latin1_swedish_ci", 16);
    v5 = charset_by_name;
    if ( charset_by_name && my_charset_same(mysql->charset, charset_by_name) )
    {
      mysql->charset = v5;
      charsets_dir = v2;
      return 0;
    }
    charset = mysql->charset;
    charsets_dir = v2;
    if ( charset )
      return 0;
  }
  else
  {
    charsets_dir = v2;
  }
  if ( !mysql->options.charset_dir )
    get_charsets_dir(cs_dir_name);
  set_mysql_extended_error(mysql, 2019, unknown_sqlstate, client_errors[19], mysql->options.charset_name);
  return 1;
};

// Line 2406: range 000000000CF9D4E0-000000000CF9D65C
int __fastcall send_change_user_packet(MCPVIO_EXT *mpvio, const uchar *data, int data_len)
{
  size_t v4; // r13
  MYSQL *mysql; // rbx
  void *v6; // rsp
  char *v7; // rax
  char *v8; // rdi
  const char *db; // rsi
  char *v10; // rax
  unsigned __int64 server_capabilities; // rdx
  char *v12; // r9
  void *v14; // rcx
  char v15[15]; // [rsp+10h] [rbp-30h] BYREF

  v4 = data_len;
  mysql = mpvio->mysql;
  v6 = alloca(data_len + 435 + 15LL);
  v7 = strmake(v15, mysql->user, 0x30uLL);
  if ( !(_DWORD)v4 )
  {
    v8 = v7 + 2;
    v7[1] = 0;
    goto LABEL_3;
  }
  v14 = v7 + 1;
  if ( (mysql->client_flag & 0x8000) == 0 )
  {
LABEL_11:
    v8 = (char *)memcpy(v14, data, v4) + v4;
LABEL_3:
    db = &off_1B23A528[4];
    if ( mpvio->db )
      db = mpvio->db;
    v10 = strmake(v8, db, 0xC0uLL);
    server_capabilities = mysql->server_capabilities;
    v12 = v10 + 1;
    if ( (server_capabilities & 0x200) != 0 )
    {
      v12 = v10 + 3;
      *(_WORD *)(v10 + 1) = mysql->charset->number;
      if ( (mysql->server_capabilities & 0x80000) == 0 )
        return mysql->methods->advanced_command(
                 mysql,
                 COM_CHANGE_USER,
                 0LL,
                 0LL,
                 (const unsigned __int8 *)v15,
                 v12 - v15,
                 1,
                 0LL);
    }
    else if ( (server_capabilities & 0x80000) == 0 )
    {
      return mysql->methods->advanced_command(
               mysql,
               COM_CHANGE_USER,
               0LL,
               0LL,
               (const unsigned __int8 *)v15,
               v12 - v15,
               1,
               0LL);
    }
    v12 = strmake(v12, mpvio->plugin->name, 0xC0uLL) + 1;
    return mysql->methods->advanced_command(
             mysql,
             COM_CHANGE_USER,
             0LL,
             0LL,
             (const unsigned __int8 *)v15,
             v12 - v15,
             1,
             0LL);
  }
  if ( (int)v4 <= 255 )
  {
    v14 = v7 + 2;
    v7[1] = v4;
    goto LABEL_11;
  }
  set_mysql_error(mysql, 2027, unknown_sqlstate);
  return 1;
};

// Line 2488: range 000000000CF9D8F0-000000000CF9DBD8
int __fastcall send_client_reply_packet(MCPVIO_EXT *mpvio, const uchar *data, int data_len)
{
  const void *v3; // rbx
  size_t v4; // r14
  MYSQL *mysql; // rbx
  void *v6; // rsp
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  char *v11; // r15
  const char *user; // rsi
  char *v13; // rax
  void *v14; // rcx
  char *v15; // r14
  const char *db; // rsi
  unsigned __int64 server_capabilities; // rcx
  int *v18; // rax
  uint number; // eax
  char *v21; // rax
  __int64 v22; // [rsp-8h] [rbp-40h] BYREF
  const void *src[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+18h] [rbp-20h] BYREF

  v4 = data_len;
  src[2] = v3;
  mysql = mpvio->mysql;
  src[0] = data;
  v6 = alloca(data_len + 465 + 15LL);
  v7 = mysql->client_flag | mysql->options.client_flag;
  v8 = v7 | 0xEA20D;
  v9 = v7 | 0xEA205;
  if ( mpvio->db )
    v9 = v8;
  v10 = (mysql->server_capabilities | 0xFFFFFFFFFFFFF5DFLL) & v9;
  mysql->client_flag = v10;
  LOBYTE(v22) = v10;
  if ( (v10 & 0x200) != 0 )
  {
    v11 = (char *)&v24;
    BYTE1(v22) = BYTE1(mysql->client_flag);
    BYTE2(v22) = BYTE2(mysql->client_flag);
    BYTE3(v22) = BYTE3(mysql->client_flag);
    WORD2(v22) = mysql->net.max_packet_size;
    BYTE6(v22) = BYTE2(mysql->net.max_packet_size);
    HIBYTE(v22) = BYTE3(mysql->net.max_packet_size);
    number = mysql->charset->number;
    *(const void **)((char *)src + 1) = 0LL;
    memset((char *)&src[1] + 1, 0, 15);
    LOBYTE(src[0]) = number;
  }
  else
  {
    v11 = (char *)&v22 + 5;
    BYTE1(v22) = BYTE1(v10);
    WORD1(v22) = mysql->net.max_packet_size;
    BYTE4(v22) = BYTE2(mysql->net.max_packet_size);
  }
  user = mysql->user;
  if ( *user )
    strmake(v11, user, 0x30uLL);
  else
    read_user_name(v11);
  v13 = strend(v11);
  if ( (_DWORD)v4 )
  {
    v14 = v13 + 1;
    if ( (mysql->server_capabilities & 0x8000) != 0 )
    {
      v14 = v13 + 2;
      v13[1] = v4;
    }
    v15 = (char *)memcpy(v14, src[0], v4) + v4;
  }
  else
  {
    v15 = v13 + 2;
    v13[1] = 0;
  }
  db = mpvio->db;
  server_capabilities = mysql->server_capabilities;
  if ( db && (server_capabilities & 8) != 0 )
  {
    v15 = strmake(v15, db, 0xC0uLL) + 1;
    v21 = my_strdup(mpvio->db, 16);
    server_capabilities = mysql->server_capabilities;
    mysql->db = v21;
  }
  if ( (server_capabilities & 0x80000) != 0 )
    v15 = strmake(v15, mpvio->plugin->name, 0xC0uLL) + 1;
  if ( !my_net_write(&mysql->net, (const uchar *)&v22, v15 - (char *)&v22) && !net_flush(&mysql->net) )
    return 0;
  v18 = __errno_location();
  set_mysql_extended_error(
    mysql,
    2013,
    unknown_sqlstate,
    client_errors[55],
    "sending authentication information",
    (unsigned int)*v18,
    v22);
  return 1;
};

// Line 2667: range 000000000CF9DCB0-000000000CF9DD48
int __fastcall client_mpvio_read_packet(st_plugin_vio *mpv, uchar **buf)
{
  int (*read_packet)(st_plugin_vio *, unsigned __int8 **); // rax
  int (*v3)(st_plugin_vio *, unsigned __int8 **); // r12
  int result; // eax
  uchar *v5; // rdx

  read_packet = mpv[2].read_packet;
  v3 = mpv[1].read_packet;
  if ( read_packet )
  {
    *buf = (uchar *)read_packet;
    ++LODWORD(mpv[2].info);
    result = (int)mpv[2].write_packet;
    mpv[2].read_packet = 0LL;
  }
  else
  {
    if ( !LODWORD(mpv[2].info) && client_mpvio_write_packet(mpv, 0LL, 0) )
      return -1;
    result = (*(__int64 (__fastcall **)(int (*)(st_plugin_vio *, unsigned __int8 **)))(*((_QWORD *)v3 + 154) + 48LL))(v3);
    v5 = (uchar *)*((_QWORD *)v3 + 4);
    HIDWORD(mpv[3].read_packet) = result;
    *buf = v5;
    if ( *v5 == 0xFE )
    {
      return -1;
    }
    else
    {
      if ( result )
      {
        if ( *v5 == 1 )
        {
          --result;
          *buf = v5 + 1;
        }
      }
      else
      {
        result = 0;
      }
      ++LODWORD(mpv[2].info);
    }
  }
  return result;
};

// Line 2729: range 000000000CF9DBE0-000000000CF9DCA5
int __fastcall client_mpvio_write_packet(st_plugin_vio *mpv, const uchar *pkt, int pkt_len)
{
  int result; // eax
  MYSQL *read_packet; // rbp
  int *v5; // rax
  my_bool v6; // dl

  if ( HIDWORD(mpv[2].info) )
  {
    read_packet = (MYSQL *)mpv[1].read_packet;
    if ( !read_packet->thd )
    {
      if ( !my_net_write((NET *)mpv[1].read_packet, pkt, pkt_len) )
      {
        v6 = net_flush(&read_packet->net);
        result = 0;
        if ( !v6 )
          goto LABEL_7;
      }
      read_packet = (MYSQL *)mpv[1].read_packet;
    }
    v5 = __errno_location();
    set_mysql_extended_error(
      read_packet,
      2013,
      unknown_sqlstate,
      client_errors[55],
      "sending authentication information",
      (unsigned int)*v5);
    result = 1;
LABEL_7:
    ++HIDWORD(mpv[2].info);
    return result;
  }
  if ( LODWORD(mpv[3].read_packet) )
    result = send_change_user_packet((MCPVIO_EXT *)mpv, pkt, pkt_len);
  else
    result = send_client_reply_packet((MCPVIO_EXT *)mpv, pkt, pkt_len);
  ++HIDWORD(mpv[2].info);
  return result;
};

// Line 2762: range 000000000CF9F5E0-000000000CF9F679
void __fastcall mpvio_info(Vio *vio, MYSQL_PLUGIN_VIO_INFO *info)
{
  enum_vio_type type; // eax
  int v4; // eax
  int v5; // edi
  int sd; // eax
  socklen_t addrlen; // [rsp+Ch] [rbp-2Ch] BYREF
  sockaddr addr; // [rsp+10h] [rbp-28h] BYREF

  *info = 0LL;
  type = vio->type;
  switch ( type )
  {
    case VIO_TYPE_SOCKET:
      sd = vio->sd;
      info->protocol = MYSQL_VIO_SOCKET;
      info->socket = sd;
      break;
    case VIO_TYPE_SSL:
      v5 = vio->sd;
      addrlen = 16;
      if ( !getsockname(v5, &addr, &addrlen) )
      {
        info->protocol = (addr.sa_family == 1) + 1;
        info->socket = vio->sd;
      }
      break;
    case VIO_TYPE_TCPIP:
      v4 = vio->sd;
      info->protocol = MYSQL_VIO_TCP;
      info->socket = v4;
      break;
  }
};

// Line 2804: range 000000000CF9F680-000000000CF9F687
void __fastcall client_mpvio_info(MYSQL_PLUGIN_VIO *vio, MYSQL_PLUGIN_VIO_INFO *info)
{
  mpvio_info(*(Vio **)vio[1].read_packet, info);
};

// Line 2812: range 000000000CF9DD50-000000000CF9DDC5
my_bool __fastcall check_plugin_enabled(MYSQL *mysql, auth_plugin_t *plugin)
{
  my_bool result; // al
  st_mysql_options_extention *extension; // rdx

  result = 0;
  if ( plugin == &clear_password_client_plugin && !libmysql_cleartext_plugin_enabled[0] )
  {
    extension = mysql->options.extension;
    if ( !extension || !extension->enable_cleartext_plugin )
    {
      set_mysql_extended_error(
        mysql,
        2059,
        unknown_sqlstate,
        client_errors[59],
        clear_password_client_plugin.name,
        "plugin not enabled");
      return 1;
    }
  }
  return result;
};

// Line 2846: range 000000000CF9F690-000000000CF9F9F4
int __fastcall run_plugin_auth(MYSQL *mysql, char *data, uint data_len, const char *data_plugin, const char *db)
{
  st_mysql_options_extention *extension; // rax
  const char *default_auth; // r15
  unsigned __int64 server_capabilities; // rax
  auth_plugin_t *plugin; // rbp
  int v13; // eax
  __int64 last_read_packet_len; // rbp
  unsigned __int8 *read_pos; // r13
  unsigned __int8 v17; // al
  const char *v18; // r14
  int v19; // eax
  st_mysql_client_plugin *v20; // rax
  st_mysql_client_plugin *v21; // rbp
  __int64 v22; // r9
  __int64 v23; // r9
  MCPVIO_EXT mpvio; // [rsp+10h] [rbp-88h] BYREF

  extension = mysql->options.extension;
  if ( !extension || (default_auth = extension->default_auth) == 0LL )
  {
    server_capabilities = mysql->server_capabilities;
    goto LABEL_4;
  }
  server_capabilities = mysql->server_capabilities;
  if ( (server_capabilities & 0x80000) == 0 )
  {
LABEL_4:
    plugin = &native_password_client_plugin;
    if ( (server_capabilities & 0x200) == 0 )
      plugin = &old_password_client_plugin;
    default_auth = plugin->name;
    goto LABEL_7;
  }
  plugin = (auth_plugin_t *)mysql_client_find_plugin(mysql, default_auth, 2);
  if ( !plugin )
    return 1;
LABEL_7:
  if ( check_plugin_enabled(mysql, plugin) )
    return 1;
  mysql->net.last_errno = 0;
  if ( data_plugin )
  {
    if ( strcmp(data_plugin, default_auth) )
    {
      data_len = 0;
      data = 0LL;
    }
  }
  mpvio.cached_server_reply.pkt = (uchar *)data;
  mpvio.cached_server_reply.pkt_len = data_len;
  mpvio.mysql_change_user = data_plugin == 0LL;
  mpvio.mysql = mysql;
  mpvio.packets_written = 0;
  mpvio.packets_read = 0;
  mpvio.read_packet = client_mpvio_read_packet;
  mpvio.plugin = plugin;
  mpvio.write_packet = client_mpvio_write_packet;
  mpvio.info = client_mpvio_info;
  mpvio.db = db;
  v13 = plugin->authenticate_user((MYSQL_PLUGIN_VIO *)&mpvio, mysql);
  if ( v13 < 0 )
  {
    if ( v13 == -1 )
    {
      last_read_packet_len = mysql->methods->read_change_user_result(mysql);
LABEL_20:
      if ( last_read_packet_len == -1 )
      {
        if ( mysql->net.last_errno == 2013 )
        {
          v22 = (unsigned int)*__errno_location();
          set_mysql_extended_error(
            mysql,
            2013,
            unknown_sqlstate,
            client_errors[55],
            "reading authorization packet",
            v22);
        }
        return 1;
      }
      read_pos = mysql->net.read_pos;
      v17 = *read_pos;
      if ( *read_pos == 0xFE )
      {
        if ( last_read_packet_len == 1 )
        {
          mpvio.cached_server_reply.pkt_len = 21;
          v18 = "mysql_old_password";
          mpvio.cached_server_reply.pkt = (uchar *)mysql->scramble;
        }
        else
        {
          v18 = (const char *)(read_pos + 1);
          v19 = strlen((const char *)read_pos + 1);
          mpvio.cached_server_reply.pkt_len = last_read_packet_len - 2 - v19;
          mpvio.cached_server_reply.pkt = &read_pos[v19 + 2];
        }
        v20 = mysql_client_find_plugin(mysql, v18, 2);
        v21 = v20;
        if ( !v20 || check_plugin_enabled(mysql, (auth_plugin_t *)v20) )
          return 1;
        mpvio.plugin = (auth_plugin_t *)v21;
        v13 = (*(__int64 (__fastcall **)(MCPVIO_EXT *, MYSQL *))&v21[1].type)(&mpvio, mysql);
        if ( v13 >= 0 )
        {
          if ( !v13 )
          {
LABEL_14:
            if ( !mysql->net.last_errno )
              set_mysql_error(mysql, 2000, unknown_sqlstate);
            return 1;
          }
          goto LABEL_31;
        }
        if ( v13 != -2 && cli_safe_read(mysql) == -1LL )
        {
          if ( mysql->net.last_errno == 2013 )
          {
            v23 = (unsigned int)*__errno_location();
            set_mysql_extended_error(
              mysql,
              2013,
              unknown_sqlstate,
              client_errors[55],
              "reading final connect information",
              v23);
          }
          return 1;
        }
        v17 = *mysql->net.read_pos;
      }
      return v17 != 0;
    }
LABEL_19:
    last_read_packet_len = mpvio.last_read_packet_len;
    goto LABEL_20;
  }
  if ( *mysql->net.read_pos == 0xFE )
    goto LABEL_19;
  if ( !v13 )
    goto LABEL_14;
LABEL_31:
  set_mysql_error(mysql, v13, unknown_sqlstate);
  return 1;
};

// Line 3010: range 000000000CF9FC40-000000000CFA091E
// local variable allocation has failed, the output may be wrong!
MYSQL *__fastcall mysql_real_connect(
        MYSQL *mysql,
        const char *host,
        const char *user,
        const char *passwd,
        const char *db,
        uint port,
        const char *unix_socket,
        ulong client_flag)
{
  char *my_cnf_file; // rsi
  char *my_cnf_group; // rdx
  Vio *vio; // rsi
  bool v17; // zf
  Vio *v18; // rax
  MYSQL *result; // rax
  unsigned int read_timeout; // esi
  unsigned int write_timeout; // esi
  unsigned __int64 max_allowed_packet; // rax
  unsigned int connect_timeout; // esi
  ulong v24; // rax
  unsigned __int8 *read_pos; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int protocol; // eax
  int v29; // eax
  int v30; // ebp
  Vio *v31; // rax
  char *v32; // r11
  int inited; // eax
  char *v34; // r11
  int v35; // eax
  int v36; // eax
  char *v37; // rax
  char *v38; // rax
  char *v39; // r11
  void *v40; // rbx
  const char *v41; // rcx
  uint v42; // edx
  st_dynamic_array *init_commands; // rax
  const char **buffer; // rbx
  __int64 elements; // rax
  my_bool reconnect; // r12
  const char **v47; // rbp
  const char *v48; // r13
  size_t v49; // rax
  MYSQL_RES *v50; // rax
  int v51; // eax
  __int64 v52; // r9
  addrinfo *v53; // r12
  unsigned int v54; // r14d
  int v55; // eax
  int v56; // ebx
  int *v57; // rax
  int *v58; // rax
  int *v59; // rax
  char *v60; // rax
  __int64 v61; // r9
  const char *host_info; // [rsp+20h] [rbp-278h]
  char *host_infoa; // [rsp+20h] [rbp-278h]
  char *host_infob; // [rsp+20h] [rbp-278h]
  const char *passwda; // [rsp+28h] [rbp-270h]
  const char *passwdb; // [rsp+28h] [rbp-270h]
  char *server_version_end; // [rsp+30h] [rbp-268h]
  int server_version_enda; // [rsp+30h] [rbp-268h]
  int pkt_scramble_len; // [rsp+38h] [rbp-260h]
  const char *pkt_scramble_lena; // [rsp+38h] [rbp-260h]
  my_socket sd; // [rsp+40h] [rbp-258h]
  char *v72; // [rsp+48h] [rbp-250h]
  int v73; // [rsp+48h] [rbp-250h]
  char *v74; // [rsp+50h] [rbp-248h]
  int v75; // [rsp+5Ch] [rbp-23Ch]
  addrinfo *res_lst; // [rsp+68h] [rbp-230h] BYREF
  char port_buf[32]; // [rsp+70h] [rbp-228h] BYREF
  _BYTE hints[104]; // [rsp+90h] [rbp-208h] OVERLAPPED BYREF
  int v79; // [rsp+F8h] [rbp-1A0h]
  __int16 v80; // [rsp+FCh] [rbp-19Ch]
  char buff[340]; // [rsp+100h] [rbp-198h] BYREF

  if ( mysql->net.vio )
  {
    set_mysql_error(mysql, 2058, unknown_sqlstate);
    return 0LL;
  }
  my_cnf_file = mysql->options.my_cnf_file;
  mysql->methods = &client_methods;
  mysql->net.vio = 0LL;
  mysql->client_flag = 0LL;
  my_cnf_group = mysql->options.my_cnf_group;
  if ( !my_cnf_file )
  {
    if ( !my_cnf_group )
      goto LABEL_4;
    my_cnf_file = "my";
  }
  mysql_read_default_options(&mysql->options, my_cnf_file, my_cnf_group);
  my_free(mysql->options.my_cnf_file);
  my_free(mysql->options.my_cnf_group);
  mysql->options.my_cnf_group = 0LL;
  mysql->options.my_cnf_file = 0LL;
LABEL_4:
  if ( !host || !*host )
    host = mysql->options.host;
  if ( user && *user )
  {
    if ( passwd )
      goto LABEL_9;
    goto LABEL_25;
  }
  user = mysql->options.user;
  if ( !user )
    user = &off_1B23A528[4];
  if ( !passwd )
  {
LABEL_25:
    passwd = mysql->options.password;
    if ( !passwd )
    {
      passwd = getenv("MYSQL_PWD");
      if ( !passwd )
        passwd = &off_1B23A528[4];
    }
  }
LABEL_9:
  if ( !db || !*db )
    db = mysql->options.db;
  if ( port )
  {
    if ( unix_socket )
      goto LABEL_14;
  }
  else
  {
    port = mysql->options.port;
    if ( unix_socket )
      goto LABEL_14;
  }
  unix_socket = mysql->options.unix_socket;
LABEL_14:
  vio = mysql->net.vio;
  mysql->server_status = 2;
  host_info = 0LL;
  if ( !vio )
  {
    protocol = mysql->options.protocol;
    if ( (protocol & 0xFFFFFFFD) == 0 && (unix_socket || mysql_unix_port) && (!host || !strcmp(host, "localhost")) )
    {
      v29 = socket(1, 1, 0);
      v30 = v29;
      if ( v29 == -1 )
      {
        v58 = __errno_location();
        set_mysql_extended_error(mysql, 2001, unknown_sqlstate, client_errors[1], (unsigned int)*v58);
        goto error;
      }
      v31 = vio_new(v29, VIO_TYPE_SOCKET, 3u);
      mysql->net.vio = v31;
      if ( !v31 )
      {
        set_mysql_error(mysql, 2047, unknown_sqlstate);
        close(v30);
        goto error;
      }
      if ( !unix_socket )
        unix_socket = mysql_unix_port;
      host_info = client_errors[10];
      memset(hints, 0, sizeof(hints));
      v79 = 0;
      v80 = 0;
      *(_WORD *)hints = 1;
      strmake(&hints[2], unix_socket, 0x6BuLL);
      if ( my_connect(v30, (const sockaddr *)hints, 0x6Eu, mysql->options.connect_timeout) )
      {
        v59 = __errno_location();
        set_mysql_extended_error(mysql, 2002, unknown_sqlstate, client_errors[2], unix_socket, (unsigned int)*v59);
        mysql->net.vio->viodelete(mysql->net.vio);
        mysql->net.vio = 0LL;
        goto error;
      }
      vio = mysql->net.vio;
      mysql->options.protocol = 2;
      if ( vio )
      {
        host = "localhost";
        goto LABEL_15;
      }
    }
    else if ( protocol <= 1 )
    {
      if ( !port )
        port = mysql_port;
      if ( !host )
        host = "localhost";
      my_snprintf(buff, 0x153uLL, client_errors[11], host);
      memset(hints, 0, 0x30uLL);
      *(_DWORD *)&hints[8] = 1;
      *(_DWORD *)&hints[12] = 6;
      my_snprintf(port_buf, 0x20uLL, "%d", port);
      if ( getaddrinfo(host, port_buf, (const struct addrinfo *)hints, &res_lst) )
      {
        v57 = __errno_location();
        set_mysql_extended_error(mysql, 2005, unknown_sqlstate, client_errors[5], host, (unsigned int)*v57);
        goto error;
      }
      if ( !res_lst )
      {
        v54 = 0;
        freeaddrinfo(0LL);
LABEL_118:
        set_mysql_extended_error(mysql, 2004, unknown_sqlstate, client_errors[4], v54);
        goto error;
      }
      pkt_scramble_lena = db;
      host_infob = (char *)user;
      v53 = res_lst;
      passwdb = passwd;
      while ( 1 )
      {
        v55 = socket(v53->ai_family, v53->ai_socktype, v53->ai_protocol);
        v56 = v55;
        if ( v55 == -1 )
        {
          v54 = *__errno_location();
        }
        else
        {
          if ( !my_connect(v55, v53->ai_addr, v53->ai_addrlen, mysql->options.connect_timeout) )
          {
            sd = v56;
            passwd = passwdb;
            user = host_infob;
            db = pkt_scramble_lena;
            freeaddrinfo(res_lst);
            vio = vio_new(sd, VIO_TYPE_TCPIP, 2u);
            mysql->net.vio = vio;
            if ( vio )
            {
              unix_socket = 0LL;
              host_info = buff;
              goto LABEL_15;
            }
            set_mysql_error(mysql, 2047, unknown_sqlstate);
            close(sd);
            goto error;
          }
          v54 = *__errno_location();
          close(v56);
        }
        v53 = v53->ai_next;
        if ( !v53 )
        {
          freeaddrinfo(res_lst);
          if ( v56 == -1 )
            goto LABEL_118;
          set_mysql_extended_error(mysql, 2003, unknown_sqlstate, client_errors[3], host, v54);
          goto error;
        }
      }
    }
    set_mysql_error(mysql, 2047, unknown_sqlstate);
    goto error;
  }
LABEL_15:
  v17 = my_net_init(&mysql->net, vio) == 0;
  v18 = mysql->net.vio;
  if ( !v17 )
  {
    v18->viodelete(mysql->net.vio);
    mysql->net.vio = 0LL;
LABEL_17:
    set_mysql_error(mysql, 2008, unknown_sqlstate);
    goto error;
  }
  v18->viokeepalive(mysql->net.vio, 1LL);
  read_timeout = mysql->options.read_timeout;
  if ( read_timeout )
    my_net_set_read_timeout(&mysql->net, read_timeout);
  write_timeout = mysql->options.write_timeout;
  if ( write_timeout )
    my_net_set_write_timeout(&mysql->net, write_timeout);
  max_allowed_packet = mysql->options.max_allowed_packet;
  if ( max_allowed_packet )
    mysql->net.max_packet_size = max_allowed_packet;
  connect_timeout = mysql->options.connect_timeout;
  mysql->protocol_version = 10;
  if ( connect_timeout && ((unsigned __int8 (__fastcall *)(Vio *))mysql->net.vio->poll_read)(mysql->net.vio) )
  {
    v52 = (unsigned int)*__errno_location();
    set_mysql_extended_error(
      mysql,
      2013,
      unknown_sqlstate,
      client_errors[55],
      "waiting for initial communication packet",
      v52);
    goto error;
  }
  v24 = cli_safe_read(mysql);
  if ( v24 == -1LL )
  {
    if ( mysql->net.last_errno == 2013 )
    {
      v27 = (unsigned int)*__errno_location();
      set_mysql_extended_error(
        mysql,
        2013,
        unknown_sqlstate,
        client_errors[55],
        "reading initial communication packet",
        v27);
    }
    goto error;
  }
  read_pos = mysql->net.read_pos;
  v26 = *read_pos;
  mysql->protocol_version = v26;
  if ( (_DWORD)v26 != 10 )
  {
    set_mysql_extended_error(mysql, 2007, unknown_sqlstate, client_errors[7], v26, 10LL);
    goto error;
  }
  passwda = (const char *)&read_pos[v24];
  v32 = strend((const char *)read_pos + 1);
  mysql->thread_id = (unsigned __int8)v32[1]
                   + ((unsigned __int8)v32[3] << 16)
                   + ((unsigned __int8)v32[2] << 8)
                   + ((unsigned __int8)v32[4] << 24);
  if ( passwda >= v32 + 15 )
    mysql->server_capabilities = (unsigned __int16)((unsigned __int8)v32[14] + ((unsigned __int8)v32[15] << 8));
  if ( passwda >= v32 + 32 )
  {
    mysql->server_language = v32[16];
    mysql->server_status = (unsigned __int16)((unsigned __int8)v32[17] + ((unsigned __int8)v32[18] << 8));
    mysql->server_capabilities |= ((unsigned __int8)v32[19] + ((unsigned __int8)v32[20] << 8)) << 16;
    pkt_scramble_len = v32[21];
    if ( pkt_scramble_len < 0 )
    {
      set_mysql_error(mysql, 2027, unknown_sqlstate);
      goto error;
    }
  }
  else
  {
    pkt_scramble_len = 0;
  }
  if ( mysql->options.secure_auth && *passwd && (mysql->server_capabilities & 0x8000) == 0 )
  {
    set_mysql_error(mysql, 2049, unknown_sqlstate);
    goto error;
  }
  server_version_end = v32;
  inited = mysql_init_character_set(mysql);
  v34 = server_version_end;
  if ( inited )
  {
error:
    end_server(mysql);
    mysql_close_free(mysql);
    result = 0LL;
    if ( (client_flag & 0x80000000) == 0LL )
    {
      mysql_close_free_options(mysql);
      return 0LL;
    }
  }
  else
  {
    server_version_enda = (_DWORD)server_version_end - LODWORD(mysql->net.read_pos) + 1;
    if ( unix_socket )
    {
      v72 = v34;
      v35 = strlen(unix_socket);
      v34 = v72;
      v75 = v35 + 1;
    }
    else
    {
      v75 = 1;
    }
    v74 = v34;
    v73 = strlen(host);
    v36 = strlen(host_info);
    if ( !my_multi_malloc(
            0,
            &mysql->host_info,
            (unsigned int)(v36 + 1),
            &mysql->host,
            (unsigned int)(v73 + 1),
            &mysql->unix_socket,
            v75,
            &mysql->server_version,
            server_version_enda,
            0LL) )
      goto LABEL_17;
    v37 = my_strdup(user, 0);
    mysql->user = v37;
    if ( !v37 )
      goto LABEL_17;
    v38 = my_strdup(passwd, 0);
    mysql->passwd = v38;
    if ( !v38 )
      goto LABEL_17;
    strcpy(mysql->host_info, host_info);
    strcpy(mysql->host, host);
    v39 = v74;
    if ( unix_socket )
    {
      strcpy(mysql->unix_socket, unix_socket);
      v39 = v74;
    }
    else
    {
      mysql->unix_socket = 0LL;
    }
    v40 = v39 + 5;
    host_infoa = v39;
    strcpy(mysql->server_version, (const char *)mysql->net.read_pos + 1);
    mysql->port = port;
    if ( passwda >= host_infoa + 45 )
    {
      v60 = (char *)memmove(host_infoa + 24, v40, 8uLL);
      if ( (mysql->server_capabilities & 0x80000) != 0 )
      {
        v41 = &v60[pkt_scramble_len];
        if ( passwda < v41 )
        {
          v40 = v60;
          v42 = (_DWORD)passwda - (_DWORD)v60;
        }
        else
        {
          v42 = pkt_scramble_len;
          v40 = v60;
        }
      }
      else
      {
        v40 = v60;
        v41 = "mysql_native_password";
        v42 = (_DWORD)passwda - (_DWORD)v60;
      }
    }
    else
    {
      mysql->server_capabilities &= ~0x8000uLL;
      v41 = "mysql_old_password";
      v42 = 9;
    }
    mysql->client_flag = client_flag;
    if ( run_plugin_auth(mysql, (char *)v40, v42, v41, db) )
      goto error;
    if ( (mysql->client_flag & 0x20) != 0 )
      mysql->net.compress = 1;
    if ( db && !mysql->db && mysql_select_db(mysql, db) )
    {
      if ( mysql->net.last_errno == 2013 )
      {
        v61 = (unsigned int)*__errno_location();
        set_mysql_extended_error(mysql, 2013, unknown_sqlstate, client_errors[55], "Setting intital database", v61);
      }
      goto error;
    }
    init_commands = mysql->options.init_commands;
    if ( init_commands )
    {
      buffer = (const char **)init_commands->buffer;
      elements = init_commands->elements;
      reconnect = mysql->reconnect;
      mysql->reconnect = 0;
      v47 = &buffer[elements];
      if ( buffer < v47 )
      {
LABEL_85:
        v48 = *buffer;
        v49 = strlen(*buffer);
        if ( !mysql_real_query(mysql, v48, v49) )
        {
          while ( 1 )
          {
            if ( mysql->fields )
            {
              v50 = cli_use_result(mysql);
              if ( !v50 )
                goto error;
              mysql_free_result(v50);
            }
            v51 = mysql_next_result(mysql);
            if ( v51 > 0 )
              break;
            if ( v51 )
            {
              if ( v47 > ++buffer )
                goto LABEL_85;
              goto LABEL_92;
            }
          }
        }
        goto error;
      }
LABEL_92:
      mysql->reconnect = reconnect;
      return mysql;
    }
    else
    {
      return mysql;
    }
  }
  return result;
};

// Line 3575: range 000000000CFA1390-000000000CFA15E5
my_bool __fastcall mysql_reconnect_0(MYSQL *mysql)
{
  char v2; // r13
  unsigned __int64 client_flag; // rax
  unsigned int port; // r9d
  char *db; // r8
  char *user; // rdx
  char *host; // rsi
  my_bool free_me; // al
  st_mysql_options *p_options; // rdi
  unsigned int v10; // edx
  LIST *stmts; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rdi
  MYSQL tmp_mysql; // [rsp+10h] [rbp-528h] BYREF

  v2 = (_BYTE)mysql - 112;
  mysql_init(&tmp_mysql);
  qmemcpy(&tmp_mysql.options, &mysql->options, sizeof(tmp_mysql.options));
  client_flag = mysql->client_flag | 0x80000000;
  port = mysql->port;
  db = mysql->db;
  user = mysql->user;
  host = mysql->host;
  tmp_mysql.options.my_cnf_group = 0LL;
  tmp_mysql.options.my_cnf_file = 0LL;
  if ( mysql_real_connect(&tmp_mysql, host, user, mysql->passwd, db, port, mysql->unix_socket, client_flag) )
  {
    if ( !mysql_set_character_set(&tmp_mysql, mysql->charset->csname) )
    {
      free_me = mysql->free_me;
      tmp_mysql.reconnect = 1;
      p_options = &mysql->options;
      v10 = 248;
      tmp_mysql.free_me = free_me;
      stmts = mysql->stmts;
      mysql->stmts = 0LL;
      tmp_mysql.stmts = stmts;
      if ( (v2 & 1) != 0 )
      {
        LOBYTE(mysql->options.connect_timeout) = 0;
        p_options = (st_mysql_options *)((char *)&mysql->options.connect_timeout + 1);
        LOBYTE(v10) = -9;
      }
      if ( ((unsigned __int8)p_options & 2) != 0 )
      {
        p_options = (st_mysql_options *)((char *)p_options + 2);
        v10 -= 2;
        HIWORD(p_options[-1].extension) = 0;
      }
      if ( ((unsigned __int8)p_options & 4) != 0 )
      {
        p_options->connect_timeout = 0;
        v10 -= 4;
        p_options = (st_mysql_options *)((char *)p_options + 4);
      }
      v12 = v10 >> 3;
      memset(p_options, 0, 8 * v12);
      v13 = &p_options->connect_timeout + 2 * v12;
      if ( (v10 & 4) != 0 )
      {
        *v13++ = 0;
        if ( (v10 & 2) == 0 )
        {
LABEL_11:
          if ( (v10 & 1) == 0 )
          {
LABEL_12:
            mysql->free_me = 0;
            mysql_close(mysql);
            qmemcpy(mysql, &tmp_mysql, sizeof(MYSQL));
            net_clear(&mysql->net, 1);
            mysql->affected_rows = -1LL;
            return 0;
          }
LABEL_13:
          *(_BYTE *)v13 = 0;
          goto LABEL_12;
        }
      }
      else if ( (v10 & 2) == 0 )
      {
        goto LABEL_11;
      }
      v13 = (unsigned int *)((char *)v13 + 2);
      *((_WORD *)v13 - 1) = 0;
      if ( (v10 & 1) == 0 )
        goto LABEL_12;
      goto LABEL_13;
    }
    memset(&tmp_mysql.options, 0, sizeof(tmp_mysql.options));
    mysql_close(&tmp_mysql);
  }
  mysql->net.last_errno = tmp_mysql.net.last_errno;
  strcpy(mysql->net.last_error, tmp_mysql.net.last_error);
  strcpy(mysql->net.sqlstate, tmp_mysql.net.sqlstate);
  return 1;
};

// Line 3576: range 000000000CFA15F0-000000000CFA1646
my_bool __fastcall mysql_reconnect(MYSQL *mysql)
{
  unsigned int server_status; // eax

  server_status = mysql->server_status;
  if ( mysql->reconnect && (server_status & 1) == 0 && mysql->host_info )
    return mysql_reconnect_0(mysql);
  mysql->server_status = server_status & 0xFFFFFFFE;
  set_mysql_error(mysql, 2006, unknown_sqlstate);
  return 1;
};

// Line 3639: range 000000000CF9FA00-000000000CF9FA77
int __fastcall mysql_select_db(MYSQL *mysql, const char *db)
{
  unsigned __int64 v2; // rax
  my_bool v3; // al
  int v4; // r12d

  v2 = strlen(db);
  v3 = mysql->methods->advanced_command(mysql, COM_INIT_DB, 0LL, 0LL, (const unsigned __int8 *)db, v2, 0, 0LL);
  v4 = v3;
  if ( !v3 )
  {
    my_free(mysql->db);
    mysql->db = my_strdup(db, 16);
  }
  return v4;
};

// Line 3659: range 000000000CF9D0E0-000000000CF9D275
void __fastcall mysql_close_free_options(MYSQL *mysql)
{
  st_dynamic_array *init_commands; // r13
  void **buffer; // rbx
  unsigned __int64 v4; // r12
  void *v5; // rdi
  st_mysql_options_extention *extension; // rax
  st_mysql_options *p_options; // rdi
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int *v10; // rdi

  my_free(mysql->options.user);
  my_free(mysql->options.host);
  my_free(mysql->options.password);
  my_free(mysql->options.unix_socket);
  my_free(mysql->options.db);
  my_free(mysql->options.my_cnf_file);
  my_free(mysql->options.my_cnf_group);
  my_free(mysql->options.charset_dir);
  my_free(mysql->options.charset_name);
  my_free(mysql->options.client_ip);
  init_commands = mysql->options.init_commands;
  if ( init_commands )
  {
    buffer = (void **)init_commands->buffer;
    v4 = (unsigned __int64)&init_commands->buffer[8 * init_commands->elements];
    if ( init_commands->buffer < (uchar *)v4 )
    {
      do
      {
        v5 = *buffer++;
        my_free(v5);
      }
      while ( v4 > (unsigned __int64)buffer );
    }
    delete_dynamic(init_commands);
    my_free(init_commands);
  }
  extension = mysql->options.extension;
  if ( extension )
  {
    my_free(extension->plugin_dir);
    my_free(mysql->options.extension->default_auth);
    my_free(mysql->options.extension);
  }
  p_options = &mysql->options;
  v8 = 248;
  if ( (((_BYTE)mysql - 112) & 1) == 0 )
  {
    if ( (((_BYTE)mysql - 112) & 2) == 0 )
      goto LABEL_9;
LABEL_18:
    p_options = (st_mysql_options *)((char *)p_options + 2);
    v8 -= 2;
    HIWORD(p_options[-1].extension) = 0;
    if ( ((unsigned __int8)p_options & 4) == 0 )
      goto LABEL_10;
    goto LABEL_19;
  }
  p_options = (st_mysql_options *)((char *)&mysql->options.connect_timeout + 1);
  LOBYTE(mysql->options.connect_timeout) = 0;
  LOBYTE(v8) = -9;
  if ( (((_BYTE)mysql - 111) & 2) != 0 )
    goto LABEL_18;
LABEL_9:
  if ( ((unsigned __int8)p_options & 4) == 0 )
    goto LABEL_10;
LABEL_19:
  p_options->connect_timeout = 0;
  v8 -= 4;
  p_options = (st_mysql_options *)((char *)p_options + 4);
LABEL_10:
  v9 = v8 >> 3;
  memset(p_options, 0, 8 * v9);
  v10 = &p_options->connect_timeout + 2 * v9;
  if ( (v8 & 4) != 0 )
    *v10++ = 0;
  if ( (v8 & 2) != 0 )
  {
    v10 = (unsigned int *)((char *)v10 + 2);
    *((_WORD *)v10 - 1) = 0;
  }
  if ( (v8 & 1) != 0 )
    *(_BYTE *)v10 = 0;
};

// Line 3701: range 000000000CF9CE80-000000000CF9CEF8
void __fastcall mysql_close_free(MYSQL *mysql)
{
  my_free(mysql->host_info);
  my_free(mysql->user);
  my_free(mysql->passwd);
  my_free(mysql->db);
  my_free(mysql->info_buffer);
  mysql->info_buffer = 0LL;
  mysql->db = 0LL;
  mysql->passwd = 0LL;
  mysql->user = 0LL;
  mysql->host_info = 0LL;
};

// Line 3772: range 000000000CF9FA80-000000000CF9FB07
void __fastcall mysql_detach_stmt_list(LIST **stmt_list, const char *func_name)
{
  LIST *v2; // rbx
  MYSQL_STMT *data; // rbp
  char buff[512]; // [rsp+0h] [rbp-228h] BYREF

  v2 = *stmt_list;
  my_snprintf(buff, 0x1FFuLL, client_errors[56], func_name);
  for ( ; v2; data->mysql = 0LL )
  {
    data = (MYSQL_STMT *)v2->data;
    set_stmt_error(data, 2056, unknown_sqlstate, buff);
    v2 = v2->next;
  }
  *stmt_list = 0LL;
};

// Line 3794: range 000000000CF9FB10-000000000CF9FBC8
void __fastcall mysql_close(MYSQL *mysql)
{
  const st_mysql_methods *methods; // rax

  if ( mysql )
  {
    if ( mysql->net.vio )
    {
      free_old_query(mysql);
      methods = mysql->methods;
      mysql->status = MYSQL_STATUS_READY;
      mysql->reconnect = 0;
      methods->advanced_command(mysql, COM_QUIT, 0LL, 0LL, 0LL, 0LL, 1, 0LL);
      end_server(mysql);
    }
    mysql_close_free_options(mysql);
    mysql_close_free(mysql);
    mysql_detach_stmt_list(&mysql->stmts, "mysql_close");
    if ( mysql->thd )
      mysql->methods->free_embedded_thd(mysql);
    if ( mysql->free_me )
      my_free(mysql);
  }
};

// Line 3822: range 000000000CF9EF90-000000000CF9F1A5
my_bool __fastcall cli_read_query_result(MYSQL *mysql)
{
  ulong v1; // r12
  my_bool v2; // bp
  ulong v3; // rax
  uint v4; // ebp
  unsigned __int64 server_capabilities; // rax
  uchar *v6; // rax
  uchar *v7; // rdx
  uchar *v8; // rax
  __int16 v9; // cx
  unsigned int server_status; // eax
  MYSQL_DATA *rows; // rax
  MYSQL_FIELD *v13; // rax
  bool v14; // zf
  __int16 v15; // dx
  __int16 v16; // cx
  uchar *pos[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = cli_safe_read(mysql);
  if ( v1 != -1LL )
  {
    free_old_query(mysql);
    while ( 1 )
    {
      pos[0] = mysql->net.read_pos;
      v3 = net_field_length(pos);
      v4 = v3;
      if ( !v3 )
      {
        mysql->affected_rows = net_field_length_ll(pos);
        mysql->insert_id = net_field_length_ll(pos);
        server_capabilities = mysql->server_capabilities;
        if ( (server_capabilities & 0x200) != 0 )
        {
          v6 = pos[0];
          mysql->server_status = (unsigned __int16)(*pos[0] + (pos[0][1] << 8));
          v7 = v6 + 2;
          v8 = v6 + 4;
          pos[0] = v7;
          LOWORD(v7) = *(v8 - 1);
          v9 = *(v8 - 2);
          pos[0] = v8;
          mysql->warning_count = (unsigned __int16)(v9 + ((_WORD)v7 << 8));
        }
        else
        {
          v14 = (server_capabilities & 0x2000) == 0;
          v8 = pos[0];
          if ( !v14 )
          {
            v15 = pos[0][1];
            v16 = *pos[0];
            v8 = pos[0] + 2;
            pos[0] += 2;
            mysql->warning_count = 0;
            mysql->server_status = (unsigned __int16)(v16 + (v15 << 8));
          }
        }
        if ( v8 >= &mysql->net.read_pos[v1] || !net_field_length(pos) )
          return 0;
        mysql->info = (char *)pos[0];
        return 0;
      }
      if ( v3 != -1LL )
        break;
      if ( SLOBYTE(mysql->options.client_flag) >= 0 )
      {
        set_mysql_error(mysql, 2027, unknown_sqlstate);
        return 1;
      }
      v2 = handle_local_infile(mysql, (const char *)pos[0]);
      v1 = cli_safe_read(mysql);
      if ( v1 == -1LL || v2 )
        return 1;
    }
    server_status = mysql->server_status;
    if ( (server_status & 2) == 0 )
      mysql->server_status = server_status | 1;
    rows = cli_read_rows(mysql, 0LL, (mysql->server_capabilities & 0x200) == 0 ? 5 : 7);
    if ( rows )
    {
      v13 = unpack_fields(mysql, rows, &mysql->field_alloc, v4, 0, mysql->server_capabilities);
      mysql->fields = v13;
      if ( v13 )
      {
        mysql->status = MYSQL_STATUS_GET_RESULT;
        mysql->field_count = v4;
        return 0;
      }
    }
  }
  return 1;
};

// Line 3901: range 000000000CF9FBD0-000000000CF9FC04
int __fastcall mysql_send_query(MYSQL *mysql, const char *query, ulong length)
{
  return mysql->methods->advanced_command(mysql, COM_QUERY, 0LL, 0LL, (const unsigned __int8 *)query, length, 1, 0LL);
};

// Line 3909: range 000000000CF9FC10-000000000CF9FC34
int __fastcall mysql_real_query(MYSQL *mysql, const char *query, ulong length)
{
  int v3; // eax
  int v4; // edx

  v3 = mysql_send_query(mysql, query, length);
  v4 = 1;
  if ( !v3 )
    return ((__int64 (__fastcall *)(MYSQL *, const char *, __int64))mysql->methods->read_query_result)(
             mysql,
             query,
             1LL);
  return v4;
};

// Line 3926: range 000000000CFA0930-000000000CFA0ADD
MYSQL_RES *__fastcall mysql_store_result(MYSQL *mysql)
{
  unsigned int field_count; // eax
  MYSQL_RES *v2; // rbp
  const st_mysql_methods *methods; // rax
  __int64 v4; // rdx
  MYSQL_FIELD *fields; // rsi
  MYSQL_DATA *v6; // rax
  my_ulonglong rows; // rdx
  MYSQL_ROWS *data; // rax
  MYSQL_RES *result; // rax

  if ( !mysql->fields )
    return 0LL;
  if ( mysql->status == MYSQL_STATUS_GET_RESULT )
  {
    field_count = mysql->field_count;
    mysql->status = MYSQL_STATUS_READY;
    v2 = (MYSQL_RES *)my_malloc(8 * field_count + 152, 48);
    if ( v2 )
    {
      methods = mysql->methods;
      v2->eof = 1;
      v4 = mysql->field_count;
      fields = mysql->fields;
      v2->methods = methods;
      v2->lengths = &v2[1].row_count;
      v6 = mysql->methods->read_rows(mysql, fields, v4);
      v2->data = v6;
      if ( v6 )
      {
        rows = v6->rows;
        data = v6->data;
        v2->row_count = rows;
        mysql->affected_rows = rows;
        v2->data_cursor = data;
        v2->fields = mysql->fields;
        v2->field_alloc = mysql->field_alloc;
        v2->field_count = mysql->field_count;
        mysql->fields = 0LL;
        result = v2;
        mysql->field_alloc.pre_alloc = 0LL;
        mysql->field_alloc.used = 0LL;
        mysql->field_alloc.free = 0LL;
        mysql->field_alloc.min_malloc = 0LL;
        mysql->unbuffered_fetch_owner = 0LL;
      }
      else
      {
        my_free(v2);
        return 0LL;
      }
    }
    else
    {
      set_mysql_error(mysql, 2008, unknown_sqlstate);
      return 0LL;
    }
  }
  else
  {
    set_mysql_error(mysql, 2014, unknown_sqlstate);
    return 0LL;
  }
  return result;
};

// Line 3980: range 000000000CF9D670-000000000CF9D7EF
MYSQL_RES *__fastcall cli_use_result(MYSQL *mysql)
{
  MYSQL_RES *v1; // rax
  MYSQL_RES *v2; // rbp
  char **v3; // rax
  unsigned int field_count; // eax
  MYSQL_RES *result; // rax

  if ( !mysql->fields )
    return 0LL;
  if ( mysql->status != MYSQL_STATUS_GET_RESULT )
  {
    set_mysql_error(mysql, 2014, unknown_sqlstate);
    return 0LL;
  }
  v1 = (MYSQL_RES *)my_malloc(8LL * mysql->field_count + 152, 48);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v1->lengths = &v1[1].row_count;
  v1->methods = mysql->methods;
  v3 = (char **)my_malloc(8LL * (mysql->field_count + 1), 16);
  v2->row = v3;
  if ( v3 )
  {
    v2->fields = mysql->fields;
    v2->field_alloc = mysql->field_alloc;
    field_count = mysql->field_count;
    v2->current_field = 0;
    v2->handle = mysql;
    v2->current_row = 0LL;
    v2->field_count = field_count;
    mysql->fields = 0LL;
    mysql->field_alloc.pre_alloc = 0LL;
    mysql->field_alloc.used = 0LL;
    mysql->unbuffered_fetch_owner = &v2->unbuffered_fetch_cancelled;
    mysql->field_alloc.free = 0LL;
    result = v2;
    mysql->field_alloc.min_malloc = 0LL;
    mysql->status = MYSQL_STATUS_USE_RESULT;
  }
  else
  {
    my_free(v2);
    return 0LL;
  }
  return result;
};

// Line 4023: range 000000000CFA0AE0-000000000CFA0D51
MYSQL_ROW __fastcall mysql_fetch_row(MYSQL_RES *res)
{
  MYSQL_ROWS *data_cursor; // rdx
  MYSQL_ROW result; // rax
  MYSQL_ROWS *next; // rdx
  unsigned __int64 *lengths; // r12
  unsigned int field_count; // ebp
  ulong v7; // rax
  uchar *v8; // r13
  unsigned __int64 *v9; // r12
  _QWORD *v10; // r14
  uchar *v11; // r15
  unsigned int v12; // r13d
  ulong i; // rax
  uchar *v14; // rdi
  unsigned __int8 *read_pos; // rdx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  uchar *v19; // [rsp+8h] [rbp-60h]
  MYSQL *mysql; // [rsp+10h] [rbp-58h]
  MYSQL_ROW row; // [rsp+18h] [rbp-50h]
  uchar *v22[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( res->data )
  {
    data_cursor = res->data_cursor;
    if ( data_cursor )
    {
      result = data_cursor->data;
      next = data_cursor->next;
      res->current_row = result;
      res->data_cursor = next;
    }
    else
    {
      res->current_row = 0LL;
      return 0LL;
    }
    return result;
  }
  if ( res->eof )
    return 0LL;
  mysql = res->handle;
  if ( mysql->status != MYSQL_STATUS_USE_RESULT )
  {
    set_mysql_error(mysql, res->unbuffered_fetch_cancelled == 0 ? 2014 : 2050, unknown_sqlstate);
    goto LABEL_22;
  }
  lengths = res->lengths;
  field_count = res->field_count;
  row = res->row;
  v7 = cli_safe_read(mysql);
  if ( v7 == -1LL )
    goto LABEL_22;
  if ( v7 <= 8 )
  {
    read_pos = mysql->net.read_pos;
    v8 = read_pos;
    if ( *read_pos == 0xFE )
    {
      if ( v7 > 1 )
      {
        mysql->warning_count = (unsigned __int16)(read_pos[1] + (read_pos[2] << 8));
        mysql->server_status = (unsigned __int16)(read_pos[3] + (read_pos[4] << 8));
      }
LABEL_22:
      res->eof = 1;
      v16 = mysql->unbuffered_fetch_owner == &res->unbuffered_fetch_cancelled;
      mysql->status = MYSQL_STATUS_READY;
      if ( v16 )
        mysql->unbuffered_fetch_owner = 0LL;
      res->handle = 0LL;
      return 0LL;
    }
  }
  else
  {
    v8 = mysql->net.read_pos;
  }
  v22[0] = v8;
  v19 = &v8[v7];
  if ( field_count )
  {
    v9 = lengths + 1;
    v10 = row;
    v11 = 0LL;
    v12 = 0;
    for ( i = net_field_length(v22); ; i = net_field_length(v22) )
    {
      if ( i == -1LL )
      {
        *v10 = 0LL;
        *(v9 - 1) = 0LL;
      }
      else
      {
        v14 = v22[0];
        if ( i > v19 - v22[0] )
        {
          set_mysql_error(mysql, 2000, unknown_sqlstate);
          goto LABEL_22;
        }
        *v10 = v22[0];
        v22[0] = &v14[i];
        *(v9 - 1) = i;
      }
      if ( v11 )
        *v11 = 0;
      ++v12;
      ++v9;
      ++v10;
      v11 = v22[0];
      if ( v12 == field_count )
      {
        v17 = (__int64)(v22[0] + 1);
        v18 = v12;
        goto LABEL_27;
      }
    }
  }
  v17 = 1LL;
  v18 = 0LL;
  v11 = 0LL;
LABEL_27:
  row[v18] = (char *)v17;
  *v11 = 0;
  result = res->row;
  ++res->row_count;
  res->current_row = result;
  return result;
};

// Line 4078: range 000000000CFA0D60-000000000CFA0D93
ulong *__fastcall mysql_fetch_lengths(MYSQL_RES *res)
{
  char **current_row; // rsi

  current_row = res->current_row;
  if ( !current_row )
    return 0LL;
  if ( res->data )
    res->methods->fetch_lengths(res->lengths, current_row, res->field_count);
  return res->lengths;
};

// Line 4094: range 000000000CFA0DA0-000000000CFA116C
int __fastcall mysql_options(MYSQL *mysql, mysql_option option, const void *arg)
{
  int result; // eax
  st_mysql_options_extention *v4; // rax
  st_mysql_options_extention *v5; // rax
  st_mysql_options_extention *v6; // rbx
  const char *v7; // rdx
  char *v8; // rax
  st_mysql_options_extention *extension; // rax
  st_mysql_options_extention *v10; // rbx
  const char *v11; // rdx
  char *v12; // rax
  st_mysql_options_extention *v13; // rax
  st_mysql_options_extention *v14; // rax
  const char *argc; // [rsp+0h] [rbp-10h]
  const char *argd; // [rsp+0h] [rbp-10h]
  const char *arge; // [rsp+0h] [rbp-10h]
  const char *argf; // [rsp+0h] [rbp-10h]
  const char *arga; // [rsp+0h] [rbp-10h]
  const char *argb; // [rsp+0h] [rbp-10h]
  const void *argg; // [rsp+0h] [rbp-10h]

  switch ( option )
  {
    case MYSQL_OPT_CONNECT_TIMEOUT:
      mysql->options.connect_timeout = *(_DWORD *)arg;
      result = 0;
      break;
    case MYSQL_OPT_COMPRESS:
      mysql->options.compress = 1;
      mysql->options.client_flag |= 0x20uLL;
      result = 0;
      break;
    case MYSQL_OPT_NAMED_PIPE:
      mysql->options.protocol = 3;
      result = 0;
      break;
    case MYSQL_INIT_COMMAND:
      add_init_command((st_mysql_options *)&mysql->options.init_commands, (const char *)arg);
      result = 0;
      break;
    case MYSQL_READ_DEFAULT_FILE:
      argf = (const char *)arg;
      my_free(mysql->options.my_cnf_file);
      mysql->options.my_cnf_file = my_strdup(argf, 16);
      result = 0;
      break;
    case MYSQL_READ_DEFAULT_GROUP:
      arge = (const char *)arg;
      my_free(mysql->options.my_cnf_group);
      mysql->options.my_cnf_group = my_strdup(arge, 16);
      result = 0;
      break;
    case MYSQL_SET_CHARSET_DIR:
      argd = (const char *)arg;
      my_free(mysql->options.charset_dir);
      mysql->options.charset_dir = my_strdup(argd, 16);
      result = 0;
      break;
    case MYSQL_SET_CHARSET_NAME:
      argc = (const char *)arg;
      my_free(mysql->options.charset_name);
      mysql->options.charset_name = my_strdup(argc, 16);
      result = 0;
      break;
    case MYSQL_OPT_LOCAL_INFILE:
      if ( !arg || *(_DWORD *)arg )
      {
        mysql->options.client_flag |= 0x80uLL;
        result = 0;
      }
      else
      {
        mysql->options.client_flag &= ~0x80uLL;
        result = 0;
      }
      break;
    case MYSQL_OPT_PROTOCOL:
      mysql->options.protocol = *(_DWORD *)arg;
      result = 0;
      break;
    case MYSQL_SHARED_MEMORY_BASE_NAME:
      result = 0;
      break;
    case MYSQL_OPT_READ_TIMEOUT:
      mysql->options.read_timeout = *(_DWORD *)arg;
      result = 0;
      break;
    case MYSQL_OPT_WRITE_TIMEOUT:
      mysql->options.write_timeout = *(_DWORD *)arg;
      result = 0;
      break;
    case MYSQL_OPT_USE_RESULT:
      result = 1;
      break;
    case MYSQL_OPT_USE_REMOTE_CONNECTION:
    case MYSQL_OPT_USE_EMBEDDED_CONNECTION:
    case MYSQL_OPT_GUESS_CONNECTION:
      mysql->options.methods_to_use = option;
      result = 0;
      break;
    case MYSQL_SET_CLIENT_IP:
      mysql->options.client_ip = my_strdup((const char *)arg, 16);
      result = 0;
      break;
    case MYSQL_SECURE_AUTH:
      mysql->options.secure_auth = *(_BYTE *)arg;
      result = 0;
      break;
    case MYSQL_REPORT_DATA_TRUNCATION:
      mysql->options.report_data_truncation = *(_BYTE *)arg != 0;
      result = 0;
      break;
    case MYSQL_OPT_RECONNECT:
      mysql->reconnect = *(_BYTE *)arg;
      result = 0;
      break;
    case MYSQL_OPT_SSL_VERIFY_SERVER_CERT:
      if ( *(_BYTE *)arg )
        mysql->options.client_flag |= 0x40000000uLL;
      else
        mysql->options.client_flag &= ~0x40000000uLL;
      result = 0;
      break;
    case MYSQL_PLUGIN_DIR:
      extension = mysql->options.extension;
      argb = (const char *)arg;
      if ( extension )
      {
        my_free(extension->plugin_dir);
        v10 = mysql->options.extension;
        v11 = argb;
      }
      else
      {
        v14 = (st_mysql_options_extention *)my_malloc(0x18uLL, 48);
        v11 = argb;
        mysql->options.extension = v14;
        v10 = v14;
      }
      v12 = 0LL;
      if ( v11 )
        v12 = my_strdup(v11, 16);
      v10->plugin_dir = v12;
      result = 0;
      break;
    case MYSQL_DEFAULT_AUTH:
      v5 = mysql->options.extension;
      arga = (const char *)arg;
      if ( v5 )
      {
        my_free(v5->default_auth);
        v6 = mysql->options.extension;
        v7 = arga;
      }
      else
      {
        v13 = (st_mysql_options_extention *)my_malloc(0x18uLL, 48);
        v7 = arga;
        mysql->options.extension = v13;
        v6 = v13;
      }
      v8 = 0LL;
      if ( v7 )
        v8 = my_strdup(v7, 16);
      v6->default_auth = v8;
      result = 0;
      break;
    case MYSQL_ENABLE_CLEARTEXT_PLUGIN:
      v4 = mysql->options.extension;
      if ( !v4 )
      {
        argg = arg;
        v4 = (st_mysql_options_extention *)my_malloc(0x18uLL, 48);
        arg = argg;
        mysql->options.extension = v4;
      }
      v4->enable_cleartext_plugin = *(_BYTE *)arg != 0;
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
};

// Line 4195: range 000000000CFA1180-000000000CFA1183
my_ulonglong __fastcall mysql_num_rows(MYSQL_RES *res)
{
  return res->row_count;
};

// Line 4200: range 000000000CFA1190-000000000CFA1196
unsigned int __fastcall mysql_num_fields(MYSQL_RES *res)
{
  return res->field_count;
};

// Line 4205: range 000000000CFA11A0-000000000CFA11B9
uint __fastcall mysql_errno(MYSQL *mysql)
{
  if ( mysql )
    return mysql->net.last_errno;
  else
    return mysql_server_last_errno;
};

// Line 4211: range 000000000CFA11C0-000000000CFA11D7
const char *__fastcall mysql_error(MYSQL *mysql)
{
  if ( mysql )
    return mysql->net.last_error;
  else
    return mysql_server_last_error;
};

// Line 4234: range 000000000CFA11E0-000000000CFA1253
ulong __fastcall mysql_get_server_version(MYSQL *mysql)
{
  __int64 v1; // rbp
  int v2; // r12d
  char *end_pos[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = 10000LL * (unsigned int)strtoul(mysql->server_version, end_pos, 10);
  v2 = strtoul(end_pos[0] + 1, end_pos, 10);
  return v1 + 100 * v2 + (unsigned int)strtoul(end_pos[0] + 1, end_pos, 10);
};

// Line 4251: range 000000000CFA1260-000000000CFA1387
int __fastcall mysql_set_character_set(MYSQL *mysql, const char *cs_name)
{
  const char *v2; // r13
  charset_info_st *charset_by_csname; // r14
  int result; // eax
  char *v5; // rdx
  int v6; // eax
  unsigned int v7; // ecx
  char cs_dir_name[512]; // [rsp+0h] [rbp-238h] BYREF

  v2 = charsets_dir;
  if ( mysql->options.charset_dir )
    charsets_dir = mysql->options.charset_dir;
  if ( strlen(cs_name) <= 0x1F && (charset_by_csname = get_charset_by_csname(cs_name, 0x20u, 0)) != 0LL )
  {
    charsets_dir = v2;
    if ( mysql_get_server_version(mysql) <= 0x9CA3 )
      return 0;
    sprintf(cs_dir_name, "SET NAMES %s", cs_name);
    v5 = cs_dir_name;
    do
    {
      v6 = *(_DWORD *)v5;
      v5 += 4;
      v7 = ~v6 & (v6 - 16843009) & 0x80808080;
    }
    while ( !v7 );
    if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
      LOBYTE(v7) = (~v6 & (v6 - 16843009) & 0x80808080) >> 16;
    if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
      LODWORD(v5) = (_DWORD)v5 + 2;
    if ( !mysql_real_query(
            mysql,
            cs_dir_name,
            (_DWORD)v5 - (__CFADD__((_BYTE)v7, (_BYTE)v7) + 3) - (unsigned int)cs_dir_name) )
      mysql->charset = charset_by_csname;
  }
  else
  {
    get_charsets_dir(cs_dir_name);
    set_mysql_extended_error(mysql, 2019, unknown_sqlstate, client_errors[19], cs_name, cs_dir_name);
  }
  result = mysql->net.last_errno;
  charsets_dir = v2;
  return result;
};

// Line 4288: range 000000000CF9D010-000000000CF9D0D6
int __fastcall native_password_auth_client(MYSQL_PLUGIN_VIO *vio, MYSQL *mysql)
{
  int read_packet; // ebx
  char *passwd; // rdx
  int v5; // eax
  uchar *v6; // rax
  uchar *pkt; // [rsp+8h] [rbp-40h] BYREF
  char scrambled[21]; // [rsp+10h] [rbp-38h] BYREF

  read_packet = (int)vio[3].read_packet;
  if ( read_packet )
  {
    pkt = (uchar *)mysql->scramble;
  }
  else
  {
    v5 = vio->read_packet(vio, &pkt);
    if ( v5 < 0 )
      return read_packet;
    read_packet = 2012;
    if ( v5 != 21 )
      return read_packet;
    v6 = pkt;
    *(_QWORD *)mysql->scramble = *(_QWORD *)pkt;
    *(_QWORD *)&mysql->scramble[8] = *((_QWORD *)v6 + 1);
    LODWORD(v6) = *((_DWORD *)v6 + 4);
    mysql->scramble[20] = 0;
    *(_DWORD *)&mysql->scramble[16] = (_DWORD)v6;
  }
  passwd = mysql->passwd;
  if ( !*passwd )
    return -(vio->write_packet(vio, 0LL, 0) == 0);
  scramble(scrambled, (const char *)pkt, passwd);
  return -(vio->write_packet(vio, (const unsigned __int8 *)scrambled, 20) == 0);
};

// Line 4341: range 000000000CF9CF40-000000000CF9CFFC
int __fastcall old_password_auth_client(MYSQL_PLUGIN_VIO *vio, MYSQL *mysql)
{
  int read_packet; // ebx
  char *passwd; // rdx
  int v5; // eax
  __int64 v6; // rbx
  uchar *pkt; // [rsp+8h] [rbp-30h] BYREF
  char scrambled[9]; // [rsp+10h] [rbp-28h] BYREF

  read_packet = (int)vio[3].read_packet;
  if ( read_packet )
  {
    pkt = (uchar *)mysql->scramble;
  }
  else
  {
    v5 = vio->read_packet(vio, &pkt);
    if ( v5 < 0 )
      return read_packet;
    if ( v5 != 21 )
    {
      read_packet = 2012;
      if ( v5 != 9 )
        return read_packet;
    }
    v6 = v5;
    memcpy(mysql->scramble, pkt, v5);
    mysql->scramble[v6] = 0;
  }
  passwd = mysql->passwd;
  if ( !*passwd )
    return -(vio->write_packet(vio, 0LL, 0) == 0);
  scramble_323(scrambled, (const char *)pkt, passwd);
  return -(vio->write_packet(vio, (const unsigned __int8 *)scrambled, 9) == 0);
};

// Line 4390: range 000000000CF9CF00-000000000CF9CF34
int __fastcall clear_password_auth_client(MYSQL_PLUGIN_VIO *vio, MYSQL *mysql)
{
  char *passwd; // rbp
  int v3; // eax

  passwd = mysql->passwd;
  v3 = strlen(passwd);
  return -(vio->write_packet(vio, (const unsigned __int8 *)passwd, v3 + 1) == 0);
};
