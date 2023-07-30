// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_arr_appstr.c

// Line 35: range 000000000CFB8890-000000000CFB88F1
my_bool __fastcall array_append_string_unique(const char *str, const char **array, size_t size)
{
  const char **v3; // r12
  const char *v5; // rdi
  const char **i; // rbx
  my_bool result; // al
  const char *v8; // rax

  v3 = &array[size - 1];
  v5 = *array;
  for ( i = array; *i; v5 = *i )
  {
    if ( !strcmp(v5, str) )
      break;
    ++i;
  }
  result = 1;
  if ( v3 > i )
  {
    while ( 1 )
    {
      v8 = i[1];
      if ( !v8 )
        break;
      *i++ = v8;
    }
    *i = str;
    return 0;
  }
  return result;
};
