// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strmake.c

// Line 32: range 000000000CFB44B0-000000000CFB44DD
char *__fastcall strmake(char *dst, const char *src, size_t length)
{
  char *result; // rax
  const char *v4; // rdx
  char v5; // cl

  result = dst;
  v4 = &src[length];
  while ( src != v4 )
  {
    v5 = *src++;
    *result = v5;
    if ( !v5 )
      return result;
    ++result;
  }
  *result = 0;
  return result;
};
