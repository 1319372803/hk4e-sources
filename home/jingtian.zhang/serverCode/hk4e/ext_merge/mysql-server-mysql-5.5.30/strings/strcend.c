// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strcend.c

// Line 29: range 000000000CFB4470-000000000CFB448B
char *__fastcall strcend(const char *s, pchar c)
{
  char *result; // rax

  for ( result = (char *)s; *result != c && *result; ++result )
    ;
  return result;
};
