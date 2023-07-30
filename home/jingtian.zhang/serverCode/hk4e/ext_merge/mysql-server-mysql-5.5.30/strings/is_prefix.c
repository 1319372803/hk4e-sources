// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/is_prefix.c

// Line 30: range 000000000CFC6460-000000000CFC648A
int __fastcall is_prefix(const char *s, const char *t)
{
  char v2; // al

  do
  {
    v2 = *t;
    if ( !*t )
      return 1;
    ++s;
    ++t;
  }
  while ( v2 == *(s - 1) );
  return 0;
};
