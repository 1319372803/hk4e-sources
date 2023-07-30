// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/int2str.c

// Line 55: range 000000000CFB2E20-000000000CFB2F2C
char *__fastcall int2str(__int64 val, char *dst, int radix, int upcase)
{
  int v5; // esi
  char *v6; // r13
  unsigned __int64 v7; // rcx
  char *v8; // rbx
  __int64 quot; // rdi
  char v10; // dl
  ldiv_t v11; // rax
  char v12; // dl
  char *v13; // rcx
  char buffer[65]; // [rsp+0h] [rbp-78h] BYREF

  v5 = radix;
  if ( upcase )
  {
    v6 = dig_vec_upper;
    v7 = val;
    if ( radix >= 0 )
      goto LABEL_3;
LABEL_11:
    if ( (unsigned int)(radix + 36) <= 0x22 )
    {
      if ( val < 0 )
      {
        *dst = 45;
        v7 = -(__int64)v7;
        ++dst;
      }
      v5 = -radix;
      goto LABEL_4;
    }
    return 0LL;
  }
  v6 = dig_vec_lower;
  v7 = val;
  if ( radix < 0 )
    goto LABEL_11;
LABEL_3:
  if ( (unsigned int)(radix - 2) > 0x22 )
    return 0LL;
LABEL_4:
  buffer[64] = 0;
  v8 = &buffer[63];
  quot = v7 / v5;
  v10 = v6[(unsigned __int8)(v7 % v5)];
  buffer[63] = v10;
  if ( !quot )
    goto LABEL_8;
  do
  {
    --v8;
    v11 = ldiv(quot, v5);
    v12 = v6[v11.rem];
    quot = v11.quot;
    *v8 = v12;
  }
  while ( v11.quot );
  ++v8;
  v13 = dst + 1;
  *dst = v12;
  if ( v12 )
  {
    do
    {
      v10 = *v8;
      dst = v13;
LABEL_8:
      ++v8;
      v13 = dst + 1;
      *dst = v10;
    }
    while ( v10 );
  }
  return dst;
};

// Line 140: range 000000000CFB2F30-000000000CFB2FF3
char *__fastcall int10_to_str(__int64 val, char *dst, int radix)
{
  char *v3; // rcx
  signed __int64 v4; // r8
  int v5; // edi
  int v6; // edi
  char *v7; // rdx
  char buffer[65]; // [rsp+0h] [rbp-58h] BYREF

  if ( radix < 0 && val < 0 )
  {
    *dst = 45;
    val = -val;
    ++dst;
  }
  buffer[64] = 0;
  v3 = &buffer[63];
  v4 = val / 0xAuLL;
  v5 = val + 48 - 10 * (val / 0xAuLL);
  buffer[63] = v5;
  if ( !v4 )
    goto LABEL_8;
  while ( 1 )
  {
    --v3;
    v6 = v4 + 48 - 10 * (v4 / 10);
    *v3 = v4 + 48 - 10 * (v4 / 10);
    if ( (__int64)((unsigned __int128)(0x6666666666666667LL * (__int128)v4) >> 64) >> 2 == v4 >> 63 )
      break;
    v4 /= 10LL;
  }
  ++v3;
  v7 = dst + 1;
  *dst = v6;
  if ( (_BYTE)v6 )
  {
    do
    {
      LOBYTE(v5) = *v3;
      dst = v7;
LABEL_8:
      ++v3;
      v7 = dst + 1;
      *dst = v5;
    }
    while ( (_BYTE)v5 );
  }
  return dst;
};
