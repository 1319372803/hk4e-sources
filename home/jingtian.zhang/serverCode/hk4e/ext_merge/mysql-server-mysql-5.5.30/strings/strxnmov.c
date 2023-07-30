// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/strxnmov.c

// Line 48: range 000000000CFB4510-000000000CFB45C1
char *strxnmov(char *dst, size_t len, const char *src, ...)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rsi
  const char *v7; // rcx
  char *v8; // r9
  unsigned int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  char *result; // rax
  char v13; // cl
  __int64 v14; // rdx
  const char **v15; // rdx
  char v16[24]; // [rsp+18h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+38h] [rbp-10h]
  __int64 v19; // [rsp+40h] [rbp-8h]
  char v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = &dst[len];
  v17 = v3;
  v18 = v4;
  v7 = src;
  v19 = v5;
  if ( src )
  {
    v8 = &v20;
    v9 = 24;
    while ( 1 )
    {
      if ( v6 == dst )
      {
        result = v6;
        goto end;
      }
      v10 = (char *)(v7 + 1);
      v11 = *v7;
      result = dst + 1;
      *dst = v11;
      if ( v11 )
        break;
      result = dst;
LABEL_10:
      if ( v9 > 0x2F )
      {
        v15 = (const char **)v8;
        v8 += 8;
      }
      else
      {
        v14 = v9;
        v9 += 8;
        v15 = (const char **)&v16[v14];
      }
      v7 = *v15;
      if ( !*v15 )
        goto end;
      dst = result;
    }
    while ( result != v6 )
    {
      v13 = *v10++;
      *result = v13;
      if ( !v13 )
        goto LABEL_10;
      ++result;
    }
  }
  else
  {
    result = dst;
  }
end:
  *result = 0;
  return result;
};
