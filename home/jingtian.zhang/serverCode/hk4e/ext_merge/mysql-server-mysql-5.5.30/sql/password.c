// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/sql/password.c

// Line 87: range 000000000CFAA0A0-000000000CFAA111
void __fastcall randominit(rand_struct *rand_st, ulong seed1, ulong seed2)
{
  rand_st->max_value = 0x3FFFFFFFLL;
  rand_st->max_value_dbl = 1073741823.0;
  rand_st->seed1 = seed1 % 0x3FFFFFFF;
  rand_st->seed2 = seed2 % 0x3FFFFFFF;
};

// Line 103: range 000000000CFAA120-000000000CFAA17A
double __fastcall my_rnd(rand_struct *rand_st)
{
  unsigned __int64 seed2; // r8
  unsigned __int64 max_value; // rsi
  __int64 v3; // rcx

  seed2 = rand_st->seed2;
  max_value = rand_st->max_value;
  v3 = (seed2 + 3 * rand_st->seed1) % max_value;
  rand_st->seed1 = v3;
  rand_st->seed2 = (seed2 + v3 + 33) % max_value;
  if ( v3 < 0 )
    return ((double)(int)(v3 & 1 | ((unsigned __int64)v3 >> 1)) + (double)(int)(v3 & 1 | ((unsigned __int64)v3 >> 1)))
         / rand_st->max_value_dbl;
  else
    return (double)(int)v3 / rand_st->max_value_dbl;
};

// Line 123: range 000000000CFAA180-000000000CFAA1F9
void __fastcall hash_password(ulong *result, const char *password, uint password_len)
{
  ulong v3; // r9
  const char *v4; // rdx
  __int64 v5; // r10
  int v6; // ecx
  __int64 v7; // rax
  int v8; // r8d
  ulong v9; // rcx

  v3 = 305419889LL;
  v4 = &password[password_len];
  if ( password >= v4 )
  {
    v9 = 1345345333LL;
  }
  else
  {
    v5 = 7LL;
    v6 = 1345345333;
    do
    {
      v7 = *(unsigned __int8 *)password;
      if ( (_BYTE)v7 != 9 && (_BYTE)v7 != 32 )
      {
        v8 = v5 + (v6 & 0x3F);
        v5 += v7;
        v6 ^= (v6 << 8) + v7 * v8;
        LODWORD(v3) = (v6 ^ ((_DWORD)v3 << 8)) + v3;
      }
      ++password;
    }
    while ( password != v4 );
    v9 = v6 & 0x7FFFFFFF;
    v3 &= 0x7FFFFFFFu;
  }
  *result = v9;
  result[1] = v3;
};

// Line 150: range 000000000CFAA200-000000000CFAA22F
void __fastcall my_make_scrambled_password_323(char *to, const char *password, size_t pass_len)
{
  ulong hash_res[2]; // [rsp+0h] [rbp-18h] BYREF

  hash_password(hash_res, password, pass_len);
  sprintf(to, "%08lx%08lx", hash_res[0], hash_res[1]);
};

// Line 169: range 000000000CFAA230-000000000CFAA253
void __fastcall make_scrambled_password_323(char *to, const char *password)
{
  size_t v2; // rax

  v2 = strlen(password);
  my_make_scrambled_password_323(to, password, v2);
};

// Line 187: range 000000000CFAA260-000000000CFAA349
void __fastcall scramble_323(char *to, const char *message, const char *password)
{
  char *v4; // rbx
  uint v5; // eax
  char *v6; // r12
  char *v7; // rbp
  double v8; // xmm0_8
  double v9; // xmm0_8
  int v10; // eax
  ulong hash_pass[2]; // [rsp+0h] [rbp-68h] BYREF
  ulong hash_message[2]; // [rsp+10h] [rbp-58h] BYREF
  rand_struct rand_st; // [rsp+20h] [rbp-48h] BYREF

  v4 = to;
  if ( password && *password )
  {
    v5 = strlen(password);
    hash_password(hash_pass, password, v5);
    v6 = to + 8;
    v7 = to;
    hash_password(hash_message, message, 8u);
    randominit(&rand_st, hash_pass[0] ^ hash_message[0], hash_pass[1] ^ hash_message[1]);
    do
    {
      ++v7;
      v8 = my_rnd(&rand_st);
      *(v7 - 1) = (int)(floor(v8 * 31.0) + 64.0);
    }
    while ( v7 != v6 );
    v9 = my_rnd(&rand_st);
    v10 = (int)floor(v9 * 31.0);
    do
      *v4++ ^= v10;
    while ( v6 != v4 );
    *v4 = 0;
  }
  else
  {
    *to = 0;
  }
};

// Line 224: range 000000000CFAA350-000000000CFAA46C
my_bool __fastcall check_scramble_323(const unsigned __int8 *scrambled, const char *message, ulong *hash_pass)
{
  __int64 v4; // rax
  uchar *v5; // r14
  uchar *v6; // r13
  uchar *v7; // r15
  uchar *v8; // rbx
  double v9; // xmm0_8
  double v10; // xmm0_8
  bool v11; // zf
  double v13; // xmm0_8
  int v14; // edx
  uchar v15; // r15
  uchar v16; // [rsp+Fh] [rbp-89h]
  uchar scrambled_buff[9]; // [rsp+10h] [rbp-88h] BYREF
  ulong hash_message[2]; // [rsp+20h] [rbp-78h] BYREF
  uchar buff[16]; // [rsp+30h] [rbp-68h] BYREF
  rand_struct rand_st; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)scrambled;
  scrambled_buff[8] = 0;
  v5 = scrambled_buff;
  *(_QWORD *)scrambled_buff = v4;
  hash_password(hash_message, message, 8u);
  randominit(&rand_st, hash_message[0] ^ *hash_pass, hash_message[1] ^ hash_pass[1]);
  v16 = scrambled_buff[0];
  if ( scrambled_buff[0] )
  {
    v6 = buff;
    v7 = scrambled_buff;
    v8 = buff;
    do
    {
      ++v7;
      ++v8;
      v9 = my_rnd(&rand_st);
      v10 = floor(v9 * 31.0);
      v11 = *v7 == 0;
      *(v8 - 1) = (int)(v10 + 64.0);
    }
    while ( !v11 && v8 != (uchar *)&rand_st );
    if ( v7 - scrambled_buff == 8 )
    {
      v13 = my_rnd(&rand_st);
      v14 = (int)floor(v13 * 31.0);
      v15 = v16;
      while ( 1 )
      {
        ++v6;
        ++v5;
        if ( (*(v6 - 1) ^ (unsigned __int8)v14) != v15 )
          break;
        v15 = *v5;
        if ( !*v5 )
          return 0;
      }
    }
  }
  return 1;
};

// Line 277: range 000000000CFAA470-000000000CFAA4E0
void __fastcall get_salt_from_password_323(ulong *res, const char *password)
{
  char i; // dl
  const char *v3; // r8
  ulong v4; // rax
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // dl

  res[1] = 0LL;
  *res = 0LL;
  if ( password )
  {
    for ( i = *password; *password; i = *password )
    {
      v3 = password + 8;
      v4 = 0LL;
      while ( 1 )
      {
        ++password;
        v5 = 16 * v4;
        v6 = i - 48;
        if ( (unsigned __int8)(i - 48) > 9u )
        {
          v7 = i - 65;
          v6 = i - 55;
          v8 = i - 87;
          if ( v7 > 0x19u )
            v6 = v8;
        }
        v4 = v5 + v6;
        if ( password == v3 )
          break;
        i = *password;
      }
      *res++ = v4;
    }
  }
};

// Line 301: range 000000000CFAA4F0-000000000CFAA500
void __fastcall make_password_from_salt_323(char *to, const ulong *salt)
{
  sprintf(to, "%08lx%08lx", *salt, salt[1]);
};

// Line 320: range 000000000CFAA510-000000000CFAA55A
void __fastcall create_random_string(char *to, uint length, rand_struct *rand_st)
{
  char *v3; // rbp
  char *v5; // rbx

  v3 = &to[length];
  if ( to < v3 )
  {
    v5 = to;
    do
      *v5++ = (int)(my_rnd(rand_st) * 94.0 + 33.0);
    while ( v5 != v3 );
    to = v5;
  }
  *to = 0;
};

// Line 348: range 000000000CFAA560-000000000CFAA5BE
char *__fastcall octet2hex(char *to, const char *str, uint len)
{
  char *result; // rax
  const char *v4; // rdx
  const char *v5; // rcx
  char *v6; // r8
  unsigned __int8 v7; // r9

  result = to;
  v4 = &str[len];
  if ( str != v4 )
  {
    v5 = str;
    v6 = to;
    do
    {
      v7 = *v5++;
      v6 += 2;
      *(v6 - 2) = dig_vec_upper[v7 >> 4];
      *(v6 - 1) = dig_vec_upper[*(v5 - 1) & 0xF];
    }
    while ( v5 != v4 );
    result = &to[2 * (v5 - str)];
  }
  *result = 0;
  return result;
};

// Line 417: range 000000000CFAA5C0-000000000CFAA641
void __fastcall my_make_scrambled_password(char *to, const char *password, size_t pass_len)
{
  unsigned int v3; // r13d
  uint8 hash_stage2[20]; // [rsp+0h] [rbp-B8h] BYREF
  SHA1_CONTEXT_0 sha1_context; // [rsp+20h] [rbp-98h] BYREF

  v3 = pass_len;
  mysql_sha1_reset(&sha1_context);
  mysql_sha1_input(&sha1_context, (const uint8 *)password, v3);
  mysql_sha1_result(&sha1_context, (uint8 *)to);
  mysql_sha1_reset(&sha1_context);
  mysql_sha1_input(&sha1_context, (const uint8 *)to, 0x14u);
  mysql_sha1_result(&sha1_context, hash_stage2);
  *to = 42;
  octet2hex(to + 1, (const char *)hash_stage2, 0x14u);
};

// Line 448: range 000000000CFAA650-000000000CFAA673
void __fastcall make_scrambled_password(char *to, const char *password)
{
  size_t v2; // rax

  v2 = strlen(password);
  my_make_scrambled_password(to, password, v2);
};

// Line 472: range 000000000CFAA680-000000000CFAA749
void __fastcall scramble(char *to, const char *message, const char *password)
{
  unsigned int v4; // eax
  __int64 i; // rax
  uint8 hash_stage1[20]; // [rsp+0h] [rbp-D8h] BYREF
  uint8 hash_stage2[20]; // [rsp+20h] [rbp-B8h] BYREF
  SHA1_CONTEXT_0 sha1_context; // [rsp+40h] [rbp-98h] BYREF

  mysql_sha1_reset(&sha1_context);
  v4 = strlen(password);
  mysql_sha1_input(&sha1_context, (const uint8 *)password, v4);
  mysql_sha1_result(&sha1_context, hash_stage1);
  mysql_sha1_reset(&sha1_context);
  mysql_sha1_input(&sha1_context, hash_stage1, 0x14u);
  mysql_sha1_result(&sha1_context, hash_stage2);
  mysql_sha1_reset(&sha1_context);
  mysql_sha1_input(&sha1_context, (const uint8 *)message, 0x14u);
  mysql_sha1_input(&sha1_context, hash_stage2, 0x14u);
  mysql_sha1_result(&sha1_context, (uint8 *)to);
  for ( i = 0LL; i != 20; ++i )
    to[i] ^= hash_stage1[i];
};

// Line 518: range 000000000CFAA750-000000000CFAA80E
my_bool __fastcall check_scramble(const uchar *scramble_arg, const char *message, const uint8 *hash_stage2)
{
  char *v5; // rax
  uint8 buf[20]; // [rsp+0h] [rbp-D8h] BYREF
  char v8; // [rsp+14h] [rbp-C4h] BYREF
  uint8 hash_stage2_reassured[20]; // [rsp+20h] [rbp-B8h] BYREF
  SHA1_CONTEXT_0 sha1_context; // [rsp+40h] [rbp-98h] BYREF

  mysql_sha1_reset(&sha1_context);
  mysql_sha1_input(&sha1_context, (const uint8 *)message, 0x14u);
  mysql_sha1_input(&sha1_context, hash_stage2, 0x14u);
  mysql_sha1_result(&sha1_context, buf);
  v5 = (char *)buf;
  do
    *v5++ ^= *scramble_arg++;
  while ( v5 != &v8 );
  mysql_sha1_reset(&sha1_context);
  mysql_sha1_input(&sha1_context, buf, 0x14u);
  mysql_sha1_result(&sha1_context, hash_stage2_reassured);
  return memcmp(hash_stage2, hash_stage2_reassured, 0x14uLL) != 0;
};

// Line 550: range 000000000CFAA810-000000000CFAA876
void __fastcall get_salt_from_password(uint8 *hash_stage2, const char *password)
{
  const char *v2; // r9
  const char *v3; // rsi
  char v4; // dl
  unsigned __int8 v5; // al
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // dl
  const char *v8; // rdx
  char v9; // r8
  char v10; // cl
  char v11; // al
  unsigned __int8 v12; // r10
  char v13; // r8

  v2 = password + 1;
  v3 = password + 41;
  if ( v2 < v3 )
  {
    do
    {
      v4 = *v2;
      v5 = *v2 - 48;
      if ( v5 > 9u )
      {
        v6 = v4 - 65;
        v5 = v4 - 55;
        v7 = v4 - 87;
        if ( v6 > 0x19u )
          v5 = v7;
      }
      v8 = v2 + 2;
      v9 = v2[1];
      ++hash_stage2;
      v10 = 16 * v5;
      v2 += 2;
      v11 = v9 - 48;
      if ( (unsigned __int8)(v9 - 48) > 9u )
      {
        v12 = v9 - 65;
        v11 = v9 - 55;
        v13 = v9 - 87;
        if ( v12 > 0x19u )
          v11 = v13;
      }
      *(hash_stage2 - 1) = v10 | v11;
    }
    while ( v3 > v8 );
  }
};

// Line 563: range 000000000CFAA880-000000000CFAA88C
void __fastcall make_password_from_salt(char *to, const uint8 *hash_stage2)
{
  *to = 42;
  octet2hex(to + 1, (const char *)hash_stage2, 0x14u);
};
