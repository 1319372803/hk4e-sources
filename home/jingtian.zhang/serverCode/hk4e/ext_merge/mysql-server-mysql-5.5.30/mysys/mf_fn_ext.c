// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_fn_ext.c

// Line 37: range 000000000CFB89D0-000000000CFB8A19
char *__fastcall fn_ext(const char *name)
{
  const char *v1; // rbx
  char *result; // rax

  v1 = strrchr(name, 47);
  if ( !v1 )
    v1 = name;
  result = strchr(v1, 46);
  if ( !result )
    return strend(v1);
  return result;
};
