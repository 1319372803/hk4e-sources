// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strend.c

// Line 33: range 000000000CFB4490-000000000CFB44A4
char *__fastcall strend(const char *s)
{
  char *result; // rax

  for ( result = (char *)s; *result; ++result )
    ;
  return result;
};
