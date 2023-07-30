// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/sql-common/client_plugin.c

// Line 68: range 000000000CFA19F0-000000000CFA1A2B
int __fastcall is_not_initialized(MYSQL *mysql, const char *name)
{
  set_mysql_extended_error(mysql, 2059, unknown_sqlstate, client_errors[59], name, "not initialized");
  return 1;
};

// Line 91: range 000000000CFA1990-000000000CFA19E9
st_mysql_client_plugin *__fastcall find_plugin(const char *name, int type)
{
  st_client_plugin_int *v2; // rbx
  st_mysql_client_plugin *plugin; // rbp

  if ( (unsigned int)type > 2 )
    return 0LL;
  v2 = plugin_list[type];
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    plugin = v2->plugin;
    if ( !strcmp(plugin->name, name) )
      break;
    v2 = v2->next;
    if ( !v2 )
      return 0LL;
  }
  return plugin;
};

// Line 122: range 000000000CFA1860-000000000CFA1984
st_mysql_client_plugin *__fastcall add_plugin(
        MYSQL *mysql,
        st_mysql_client_plugin *plugin,
        void *dlhandle,
        int argc,
        __va_list_tag *args)
{
  st_mysql_client_plugin *v6; // rbx
  __int64 type; // rax
  unsigned int interface_version; // esi
  uint v9; // eax
  char *v10; // r9
  const char *name; // r8
  int (*init)(char *, size_t, int, __va_list_tag *); // rax
  st_client_plugin_int *v14; // rax
  __int64 v15; // rcx
  void (*deinit)(void); // rdx
  st_client_plugin_int plugin_int; // [rsp+0h] [rbp-448h] BYREF
  char errbuf[1024]; // [rsp+20h] [rbp-428h] BYREF

  v6 = plugin;
  type = plugin->type;
  plugin_int.plugin = plugin;
  plugin_int.dlhandle = dlhandle;
  if ( (int)type > 2 )
  {
    v10 = "Unknown client plugin type";
  }
  else
  {
    interface_version = plugin->interface_version;
    v9 = plugin_version[type];
    if ( interface_version < v9 || interface_version >> 8 > v9 >> 8 )
    {
      v10 = "Incompatible client plugin interface";
    }
    else
    {
      init = v6->init;
      if ( init && init(errbuf, 1024LL, argc, args) )
      {
        v10 = errbuf;
      }
      else
      {
        v14 = (st_client_plugin_int *)memdup_root(&mem_root, &plugin_int, 0x18uLL);
        if ( v14 )
        {
          v15 = v6->type;
          v14->next = plugin_list[v15];
          plugin_list[v15] = v14;
          net_clear_error(&mysql->net);
          return v6;
        }
        deinit = (void (*)(void))v6->deinit;
        if ( deinit )
          deinit();
        v10 = "Out of memory";
      }
    }
  }
  name = v6->name;
  v6 = 0LL;
  set_mysql_extended_error(mysql, 2059, unknown_sqlstate, client_errors[59], name, v10);
  if ( dlhandle )
    dlclose(dlhandle);
  return v6;
};

// Line 237: range 000000000CFA1E20-000000000CFA1F9B
int __cdecl mysql_client_plugin_init()
{
  st_mysql_client_plugin **v1; // rbx
  st_mysql_client_plugin *i; // rsi
  char *v3; // rbx
  char *v4; // rax
  char *v5; // r13
  const char *v6; // rbp
  const char *v7; // rsi
  char *v8; // rax
  MYSQL mysql; // [rsp+0h] [rbp-528h] BYREF

  if ( initialized_0 )
    return 0;
  memset(&mysql, 0, sizeof(mysql));
  pthread_mutex_init((pthread_mutex_t *)&LOCK_load_client_plugin, 0LL);
  init_alloc_root(&mem_root, 0x80uLL, 0x80uLL);
  initialized_0 = 1;
  plugin_list[0] = 0LL;
  plugin_list[1] = 0LL;
  plugin_list[2] = 0LL;
  pthread_mutex_lock((pthread_mutex_t *)&LOCK_load_client_plugin);
  v1 = mysql_client_builtins;
  for ( i = mysql_client_builtins[0]; *v1; i = *v1 )
  {
    ++v1;
    add_plugin(&mysql, i, 0LL, 0, 0LL);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&LOCK_load_client_plugin);
  v3 = getenv("LIBMYSQL_PLUGINS");
  v4 = getenv("LIBMYSQL_ENABLE_CLEARTEXT_PLUGIN");
  if ( v4 && strchr(off_1A2D9C38, *v4) )
    libmysql_cleartext_plugin_enabled[0] = 1;
  if ( v3 )
  {
    v5 = my_strdup(v3, 16);
    v6 = v5;
    while ( 1 )
    {
      v8 = strchr(v6, 59);
      if ( !v8 )
        break;
      v7 = v6;
      v6 = v8 + 1;
      *v8 = 0;
      mysql_load_plugin(&mysql, v7, -1, 0);
    }
    mysql_load_plugin(&mysql, v6, -1, 0);
    my_free(v5);
  }
  return 0;
};

// Line 271: range 000000000CFA1A30-000000000CFA1AD8
void __cdecl mysql_client_plugin_deinit()
{
  st_client_plugin_int **v0; // rbp
  st_client_plugin_int *i; // rbx
  void (*deinit)(void); // rdx
  void *dlhandle; // rdi

  if ( initialized_0 )
  {
    v0 = plugin_list;
    do
    {
      for ( i = *v0; i; i = i->next )
      {
        deinit = (void (*)(void))i->plugin->deinit;
        if ( deinit )
          deinit();
        dlhandle = i->dlhandle;
        if ( dlhandle )
          dlclose(dlhandle);
      }
      ++v0;
    }
    while ( v0 != &plugin_list[3] );
    plugin_list[0] = 0LL;
    plugin_list[1] = 0LL;
    plugin_list[2] = 0LL;
    initialized_0 = 0;
    free_root(&mem_root, 0);
    pthread_mutex_destroy((pthread_mutex_t *)&LOCK_load_client_plugin);
  }
};

// Line 295: range 000000000CFA1AE0-000000000CFA1B8D
st_mysql_client_plugin *__fastcall mysql_client_register_plugin(MYSQL *mysql, st_mysql_client_plugin *plugin)
{
  const char *name; // rsi
  const char *v4; // rbp
  st_mysql_client_plugin *v5; // rbx
  st_mysql_client_plugin *result; // rax
  int v7; // edx

  name = plugin->name;
  if ( initialized_0 || (v7 = is_not_initialized(mysql, name), result = 0LL, !v7) )
  {
    pthread_mutex_lock((pthread_mutex_t *)&LOCK_load_client_plugin);
    v4 = plugin->name;
    if ( find_plugin(v4, plugin->type) )
    {
      v5 = 0LL;
      set_mysql_extended_error(mysql, 2059, unknown_sqlstate, client_errors[59], v4, "it is already loaded");
    }
    else
    {
      v5 = add_plugin(mysql, plugin, 0LL, 0, 0LL);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&LOCK_load_client_plugin);
    return v5;
  }
  return result;
};

// Line 320: range 000000000CFA1B90-000000000CFA1D86
st_mysql_client_plugin *__fastcall mysql_load_plugin_v(
        MYSQL *mysql,
        const char *name,
        int type,
        int argc,
        __va_list_tag *args)
{
  st_mysql_options_extention *extension; // rax
  const char *v9; // rdx
  char *plugin_dir; // rax
  void *v11; // rax
  void *v12; // r15
  st_mysql_client_plugin *v13; // rax
  int v14; // eax
  st_mysql_client_plugin *v15; // r9
  st_mysql_client_plugin *v16; // rbx
  st_mysql_client_plugin *result; // rax
  st_mysql_client_plugin *v18; // rax
  char *v19; // rbx
  int v20; // edx
  st_mysql_client_plugin *plugina; // [rsp+8h] [rbp-250h]
  st_mysql_client_plugin *plugin; // [rsp+8h] [rbp-250h]
  char dlpath[513]; // [rsp+10h] [rbp-248h] BYREF

  if ( initialized_0 || (v20 = is_not_initialized(mysql, name), result = 0LL, !v20) )
  {
    pthread_mutex_lock((pthread_mutex_t *)&LOCK_load_client_plugin);
    if ( type < 0 || !find_plugin(name, type) )
    {
      extension = mysql->options.extension;
      v9 = "/usr/local/mysql/lib/plugin";
      if ( extension )
      {
        plugin_dir = extension->plugin_dir;
        if ( plugin_dir )
          v9 = plugin_dir;
      }
      strxnmov(dlpath, 0x200uLL, v9, dirsep, name, &off_1A199E8F, 0LL);
      v11 = dlopen(dlpath, 2);
      v12 = v11;
      if ( !v11 )
      {
        v19 = dlerror();
        goto err;
      }
      v13 = (st_mysql_client_plugin *)dlsym(v11, "_mysql_client_plugin_declaration_");
      if ( !v13 )
      {
        v19 = "not a plugin";
        dlclose(v12);
        goto err;
      }
      if ( type >= 0 )
      {
        if ( v13->type == type )
        {
          plugina = v13;
          v14 = strcmp(name, v13->name);
          v15 = plugina;
          if ( !v14 )
          {
LABEL_12:
            v16 = add_plugin(mysql, v15, v12, argc, args);
            pthread_mutex_unlock((pthread_mutex_t *)&LOCK_load_client_plugin);
            return v16;
          }
          goto LABEL_23;
        }
        v19 = "type mismatch";
err:
        pthread_mutex_unlock((pthread_mutex_t *)&LOCK_load_client_plugin);
        set_mysql_extended_error(mysql, 2059, unknown_sqlstate, client_errors[59], name, v19);
        return 0LL;
      }
      plugin = v13;
      if ( strcmp(name, v13->name) )
      {
LABEL_23:
        v19 = "name mismatch";
        goto err;
      }
      v18 = find_plugin(name, plugin->type);
      v15 = plugin;
      if ( !v18 )
        goto LABEL_12;
    }
    v19 = "it is already loaded";
    goto err;
  }
  return result;
};

// Line 427: range 000000000CFA1D90-000000000CFA1E14
st_mysql_client_plugin *mysql_load_plugin(MYSQL *mysql, const char *name, int type, int argc, ...)
{
  va_list args; // [rsp+8h] [rbp-D0h] BYREF

  va_start(args, argc);
  return mysql_load_plugin_v(mysql, name, type, argc, (__va_list_tag *)args);
};

// Line 439: range 000000000CFA1FA0-000000000CFA2026
st_mysql_client_plugin *__fastcall mysql_client_find_plugin(MYSQL *mysql, const char *name, int type)
{
  st_mysql_client_plugin *result; // rax

  if ( !initialized_0 && is_not_initialized(mysql, name) )
    return 0LL;
  if ( (unsigned int)type > 2 )
    set_mysql_extended_error(mysql, 2059, unknown_sqlstate, client_errors[59], name, &off_1A2D9C38[4]);
  result = find_plugin(name, type);
  if ( !result )
    return mysql_load_plugin(mysql, name, type, 0);
  return result;
};

// Line 474: range 000000000CFA2030-000000000CFA2055
int __fastcall mysql_plugin_options(st_mysql_client_plugin *plugin, const char *option, const void *value)
{
  int (*options)(const char *, const void *); // rax

  if ( plugin && (options = plugin->options) != 0LL )
    return options(option, value);
  else
    return 1;
};
