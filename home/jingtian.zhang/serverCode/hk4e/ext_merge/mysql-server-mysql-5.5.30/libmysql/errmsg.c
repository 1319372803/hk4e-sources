// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/libmysql/errmsg.c

// Line 94: range 000000000CFA2060-000000000CFA2067
const char **__cdecl get_client_errmsgs()
{
  return client_errors;
};

// Line 108: range 000000000CFA2070-000000000CFA2081
void __cdecl init_client_errs()
{
  my_error_register((const char **(*)(...))get_client_errmsgs, 2000, 2059);
};

// Line 124: range 000000000CFA2090-000000000CFA209A
void __cdecl finish_client_errs()
{
  my_error_unregister(2000, 2059);
};
