// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_div.c

// Line 29: range 000000000CFC8A40-000000000CFC8A78
char *__fastcall my_filename(File fd)
{
  char *result; // rax
  st_my_file_info *v2; // rdi

  result = "UNKNOWN";
  if ( fd < my_file_limit )
  {
    result = "UNOPENED";
    if ( fd >= 0 )
    {
      v2 = &my_file_info[fd];
      if ( v2->type )
        return v2->name;
    }
  }
  return result;
};
