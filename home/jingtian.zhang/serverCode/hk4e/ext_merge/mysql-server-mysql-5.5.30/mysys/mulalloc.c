// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mulalloc.c

// Line 35: range 000000000CFB9590-000000000CFB96DD
void *my_multi_malloc(myf myFlags, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  char *v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  size_t v10; // rdi
  char *v11; // r8
  char *v12; // r8
  void *result; // rax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  char *v16; // rdi
  char *v17; // rsi
  _QWORD *v18; // rdx
  char *v19; // r8
  char *v20; // r8
  char v21[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+38h] [rbp-20h]
  __int64 v25; // [rsp+40h] [rbp-18h]
  __int64 v26; // [rsp+48h] [rbp-10h]
  char v27; // [rsp+60h] [rbp+8h] BYREF

  v22 = v3;
  v23 = v1;
  v24 = v2;
  v26 = v5;
  v25 = v4;
  v7 = &v27;
  v8 = 8;
  v9 = 8;
  v10 = 0LL;
  while ( v9 <= 0x2F )
  {
    v8 = v9 + 8;
    if ( !*(_QWORD *)&v21[v9] )
      goto LABEL_8;
LABEL_3:
    if ( v8 > 0x2F )
    {
      v11 = v7;
      v9 = v8;
      v7 += 8;
    }
    else
    {
      v9 = v8 + 8;
      v11 = &v21[v8];
    }
    v10 += (*(unsigned int *)v11 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v9;
  }
  v12 = v7;
  v7 += 8;
  if ( *(_QWORD *)v12 )
    goto LABEL_3;
LABEL_8:
  result = my_malloc(v10, myFlags);
  if ( result )
  {
    v14 = 8;
    v15 = 8;
    v16 = (char *)result;
    v17 = &v27;
    while ( 1 )
    {
      if ( v14 <= 0x2F )
      {
        v15 = v14 + 8;
        v18 = *(_QWORD **)&v21[v14];
        if ( !v18 )
          return result;
      }
      else
      {
        v20 = v17;
        v17 += 8;
        v18 = *(_QWORD **)v20;
        if ( !*(_QWORD *)v20 )
          return result;
      }
      *v18 = v16;
      if ( v15 > 0x2F )
      {
        v19 = v17;
        v14 = v15;
        v17 += 8;
      }
      else
      {
        v14 = v15 + 8;
        v19 = &v21[v15];
      }
      v16 += (*(unsigned int *)v19 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v14;
    }
  }
  return 0LL;
};
