// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_compress.c

// Line 41: range 000000000CFB9DF0-000000000CFB9E60
my_bool __fastcall my_compress(uchar *packet, size_t *len, size_t *complen)
{
  __int64 v4; // rax
  uchar *v5; // rax
  uchar *v6; // r13

  if ( *len > 0x31 )
  {
    v5 = my_compress_alloc(packet, len, complen);
    v6 = v5;
    if ( v5 )
    {
      memcpy(packet, v5, *len);
      my_free(v6);
      LOBYTE(v4) = 0;
    }
    else
    {
      return *complen == 0;
    }
  }
  else
  {
    *complen = 0LL;
    LOBYTE(v4) = 0;
  }
  return v4;
};

// Line 61: range 000000000CFB9D30-000000000CFB9DEA
uchar *__fastcall my_compress_alloc(const uchar *packet, size_t *len, size_t *complen)
{
  size_t v5; // rdi
  uchar *v6; // r12
  size_t v7; // rcx
  int v8; // eax
  uLongf v9; // rdx
  size_t v10; // rax
  uLongf tmp_complen[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = 120 * *len / 0x64 + 12;
  *complen = v5;
  v6 = (uchar *)my_malloc(v5, 16);
  if ( !v6 )
    return 0LL;
  v7 = *len;
  tmp_complen[0] = *(unsigned int *)complen;
  v8 = compress(v6, tmp_complen, packet, v7);
  v9 = tmp_complen[0];
  *complen = tmp_complen[0];
  if ( !v8 )
  {
    v10 = *len;
    if ( v9 < *len )
    {
      *len = v9;
      *complen = v10;
      return v6;
    }
    *complen = 0LL;
  }
  my_free(v6);
  return 0LL;
};

// Line 110: range 000000000CFB9E70-000000000CFB9F23
my_bool __fastcall my_uncompress(uchar *packet, size_t len, size_t *complen)
{
  my_bool v4; // bp
  void *v6; // r14
  int v7; // eax
  size_t v8; // rdx
  uLongf tmp_complen[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !*complen )
  {
    *complen = len;
    return 0;
  }
  v4 = 1;
  v6 = my_malloc(*complen, 16);
  if ( !v6 )
    return v4;
  tmp_complen[0] = *(unsigned int *)complen;
  v7 = uncompress(v6, tmp_complen, packet, len);
  v8 = tmp_complen[0];
  *complen = tmp_complen[0];
  if ( v7 )
  {
    my_free(v6);
    return 1;
  }
  else
  {
    memcpy(packet, v6, v8);
    my_free(v6);
    return 0;
  }
};

// Line 172: range 000000000CFB9F30-000000000CFB9FF8
int __fastcall packfrm(uchar *data, size_t len, uchar **pack_data, size_t *pack_len)
{
  my_bool v7; // al
  int v8; // edx
  size_t v10; // r15
  uchar *v11; // rax
  uchar *v12; // rbx
  void *v13; // rdi
  size_t v14; // rdx
  uchar v15; // ah
  size_t org_len; // [rsp+0h] [rbp-48h] BYREF
  size_t comp_len[8]; // [rsp+8h] [rbp-40h] BYREF

  org_len = len;
  v7 = my_compress(data, &org_len, comp_len);
  v8 = 1;
  if ( !v7 )
  {
    v10 = org_len + 12;
    v11 = (uchar *)my_malloc(org_len + 12, 16);
    v12 = v11;
    v8 = 2;
    if ( v11 )
    {
      v11[4] = len;
      *v11 = 1;
      v13 = v11 + 12;
      v11[1] = 0;
      v11[2] = 0;
      v11[3] = 0;
      v11[5] = BYTE1(len);
      v11[7] = BYTE3(len);
      v11[6] = BYTE2(len);
      v14 = org_len;
      v15 = BYTE1(org_len);
      v12[8] = org_len;
      v12[9] = v15;
      v12[10] = BYTE2(v14);
      v12[11] = BYTE3(v14);
      memcpy(v13, data, v14);
      *pack_data = v12;
      v8 = 0;
      *pack_len = v10;
    }
  }
  return v8;
};

// Line 230: range 000000000CFBA000-000000000CFBA105
int __fastcall unpackfrm(uchar **unpack_data, size_t *unpack_len, const uchar *pack_data)
{
  int v5; // r10d
  int v6; // r9d
  myf v7; // esi
  int v8; // edi
  size_t v9; // r8
  int v10; // ecx
  int result; // eax
  int v12; // ecx
  int v13; // r9d
  size_t v14; // rdi
  size_t v15; // r12
  void *v16; // r13
  size_t v17; // rax
  size_t orglen[6]; // [rsp+18h] [rbp-30h] BYREF

  v5 = pack_data[9];
  v6 = pack_data[10];
  v7 = (pack_data[3] << 24) + (pack_data[1] << 8) + (pack_data[2] << 16) + *pack_data;
  v8 = pack_data[8];
  v9 = pack_data[4] + (pack_data[6] << 16) + (pack_data[5] << 8) + (pack_data[7] << 24);
  v10 = pack_data[11];
  result = 1;
  orglen[0] = v9;
  if ( v7 == 1 )
  {
    v12 = v10 << 24;
    LOBYTE(v7) = 16;
    v13 = v8 + (v5 << 8) + (v6 << 16);
    v14 = v9;
    v15 = (unsigned int)(v13 + v12);
    if ( v15 >= v9 )
      v14 = (unsigned int)(v13 + v12);
    v16 = my_malloc(v14, v7);
    result = 2;
    if ( v16 )
    {
      memcpy(v16, pack_data + 12, v15);
      if ( my_uncompress((uchar *)v16, v15, orglen) )
      {
        my_free(v16);
        return 3;
      }
      else
      {
        v17 = orglen[0];
        *unpack_data = (uchar *)v16;
        *unpack_len = v17;
        return 0;
      }
    }
  }
  return result;
};
