// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strmov.c

// Line 33: range 000000000CFC66F0-000000000CFC670D
char *__fastcall strmov_overlapp(char *dst, const char *src)
{
  char *result; // rax
  char v3; // dl

  for ( result = dst; ; ++result )
  {
    v3 = *src++;
    *result = v3;
    if ( !v3 )
      break;
  }
  return result;
};
