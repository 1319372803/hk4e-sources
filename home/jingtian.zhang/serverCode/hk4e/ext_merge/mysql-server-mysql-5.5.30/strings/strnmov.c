// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strnmov.c

// Line 28: range 000000000CFB44E0-000000000CFB450A
char *__fastcall strnmov(char *dst, const char *src, size_t n)
{
  char *result; // rax
  const char *v4; // rdx
  char v5; // cl

  result = dst;
  v4 = &src[n];
  while ( src != v4 )
  {
    v5 = *src++;
    *result = v5;
    if ( !v5 )
      break;
    ++result;
  }
  return result;
};
