// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strxmov.c

// Line 39: range 000000000CFC6710-000000000CFC6797
char *strxmov(char *dst, const char *src, ...)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *result; // rax
  char *v7; // r8
  unsigned int v8; // edi
  char *v9; // rdx
  char v10; // cl
  __int64 v11; // rcx
  const char **v12; // rcx
  char v13[16]; // [rsp+18h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+40h] [rbp-8h]
  char v18; // [rsp+50h] [rbp+8h] BYREF

  result = dst;
  v14 = v2;
  v15 = v3;
  v16 = v4;
  v17 = v5;
  if ( src )
  {
    v7 = &v18;
    v8 = 16;
    v9 = result + 1;
    do
    {
      while ( 1 )
      {
        v10 = *src++;
        *(v9 - 1) = v10;
        if ( !v10 )
          break;
        result = v9++;
      }
      if ( v8 > 0x2F )
      {
        v12 = (const char **)v7;
        v7 += 8;
      }
      else
      {
        v11 = v8;
        v8 += 8;
        v12 = (const char **)&v13[v11];
      }
      src = *v12;
    }
    while ( *v12 );
  }
  *result = 0;
  return result;
};
