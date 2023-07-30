// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/sha1.c

// Line 133: range 000000000CFBD960-000000000CFBD9A0
int __fastcall mysql_sha1_reset(SHA1_CONTEXT_0 *context)
{
  int result; // eax

  context->Length = 0LL;
  context->Intermediate_Hash[0] = 1732584193;
  context->Message_Block_Index = 0;
  context->Intermediate_Hash[1] = -271733879;
  result = 0;
  context->Intermediate_Hash[2] = -1732584194;
  context->Intermediate_Hash[3] = 271733878;
  context->Intermediate_Hash[4] = -1009589776;
  context->Computed = 0;
  context->Corrupted = 0;
  return result;
};

// Line 167: range 000000000CFBD9B0-000000000CFBDBED
int __fastcall mysql_sha1_result(SHA1_CONTEXT_0 *context, uint8 *Message_Digest)
{
  __int64 i; // rax
  int Message_Block_Index; // eax
  uint8 *v6; // r12
  ulonglong Length; // rax
  _DWORD *v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  uint8 *Message_Block; // rdi
  unsigned int v13; // esi
  __int64 v14; // rcx
  uint8 *v15; // rdi

  if ( !context->Computed )
  {
    Message_Block_Index = context->Message_Block_Index;
    context->Message_Block[context->Message_Block_Index] = 0x80;
    if ( Message_Block_Index > 55 )
    {
      memset(&context->Message_Block[Message_Block_Index + 1], 0, 63 - Message_Block_Index);
      context->Message_Block_Index = 64;
      SHA1ProcessMessageBlock(context);
      Message_Block = context->Message_Block;
      v6 = Message_Block;
      v13 = 56;
      if ( ((unsigned __int8)Message_Block & 1) != 0 )
      {
        context->Message_Block[0] = 0;
        Message_Block = &context->Message_Block[1];
        LOBYTE(v13) = 55;
      }
      if ( ((unsigned __int8)Message_Block & 2) != 0 )
      {
        Message_Block += 2;
        v13 -= 2;
        *((_WORD *)Message_Block - 1) = 0;
      }
      if ( ((unsigned __int8)Message_Block & 4) != 0 )
      {
        *(_DWORD *)Message_Block = 0;
        v13 -= 4;
        Message_Block += 4;
      }
      v14 = v13 >> 3;
      memset(Message_Block, 0, 8 * v14);
      v15 = &Message_Block[8 * v14];
      if ( (v13 & 4) != 0 )
      {
        *(_DWORD *)v15 = 0;
        v15 += 4;
      }
      if ( (v13 & 2) != 0 )
      {
        v15 += 2;
        *((_WORD *)v15 - 1) = 0;
      }
      if ( (v13 & 1) != 0 )
        *v15 = 0;
      context->Message_Block_Index = 56;
    }
    else
    {
      v6 = context->Message_Block;
      memset(&context->Message_Block[Message_Block_Index + 1], 0, 55 - Message_Block_Index);
      context->Message_Block_Index = 56;
    }
    Length = context->Length;
    context->Message_Block[63] = context->Length;
    context->Message_Block[56] = HIBYTE(Length);
    context->Message_Block[57] = BYTE6(Length);
    context->Message_Block[58] = BYTE5(Length);
    context->Message_Block[59] = BYTE4(Length);
    context->Message_Block[60] = BYTE3(Length);
    context->Message_Block[61] = BYTE2(Length);
    context->Message_Block[62] = BYTE1(Length);
    SHA1ProcessMessageBlock(context);
    v8 = v6;
    v9 = 64;
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      *v6 = 0;
      v8 = v6 + 1;
      LOBYTE(v9) = 63;
    }
    if ( ((unsigned __int8)v8 & 2) != 0 )
    {
      v8 = (_DWORD *)((char *)v8 + 2);
      v9 -= 2;
      *((_WORD *)v8 - 1) = 0;
    }
    if ( ((unsigned __int8)v8 & 4) != 0 )
    {
      *v8 = 0;
      v9 -= 4;
      ++v8;
    }
    v10 = v9 >> 3;
    memset(v8, 0, 8 * v10);
    v11 = &v8[2 * v10];
    if ( (v9 & 4) != 0 )
      *v11++ = 0;
    if ( (v9 & 2) != 0 )
    {
      v11 = (_DWORD *)((char *)v11 + 2);
      *((_WORD *)v11 - 1) = 0;
    }
    if ( (v9 & 1) != 0 )
      *(_BYTE *)v11 = 0;
    context->Length = 0LL;
    context->Computed = 1;
  }
  for ( i = 0LL; i != 20; ++i )
    Message_Digest[i] = context->Intermediate_Hash[(int)i >> 2] >> (8 * (~(_BYTE)i & 3));
  LOBYTE(i) = 0;
  return i;
};

// Line 212: range 000000000CFBDC00-000000000CFBDC72
int __fastcall mysql_sha1_input(SHA1_CONTEXT_0 *context, const uint8 *message_array, unsigned int length)
{
  const uint8 *v3; // r12
  const uint8 *v4; // rbp
  __int64 Message_Block_Index; // rdx

  if ( !length )
    return 0;
  v3 = &message_array[length];
  v4 = message_array;
  do
  {
    while ( 1 )
    {
      Message_Block_Index = context->Message_Block_Index;
      context->Message_Block_Index = Message_Block_Index + 1;
      context->Message_Block[Message_Block_Index] = *v4;
      context->Length += 8LL;
      if ( (_WORD)Message_Block_Index == 63 )
        break;
      if ( ++v4 == v3 )
        return 0;
    }
    ++v4;
    SHA1ProcessMessageBlock(context);
  }
  while ( v4 != v3 );
  return 0;
};

// Line 273: range 000000000CFBD750-000000000CFBD95F
void __fastcall SHA1ProcessMessageBlock(SHA1_CONTEXT_0 *context)
{
  unsigned __int8 *v1; // rdx
  uint32 *v2; // rcx
  int v3; // eax
  int v4; // esi
  uint32 *v5; // rdx
  int v6; // eax
  uint32 v7; // ebp
  uint32 *v8; // r10
  uint32 v9; // ebx
  uint32 v10; // r9d
  uint32 v11; // r13d
  uint32 v12; // eax
  uint32 v13; // edx
  uint32 v14; // r8d
  int v15; // esi
  int v16; // ecx
  uint32 v17; // eax
  uint32 v18; // ecx
  uint32 v19; // esi
  uint32 *v20; // r10
  int v21; // ecx
  uint32 v22; // edx
  uint32 v23; // ecx
  uint32 *v24; // r10
  int v25; // r13d
  int v26; // r9d
  uint32 v27; // esi
  uint32 v28; // r9d
  uint32 *v29; // r8
  int v30; // r10d
  uint32 v31; // ecx
  uint32 v32; // r10d
  uint32 v33; // [rsp+0h] [rbp-180h]
  uint32 v34; // [rsp+4h] [rbp-17Ch]
  uint32 W[80]; // [rsp+8h] [rbp-178h] BYREF
  __int64 v36; // [rsp+148h] [rbp-38h] BYREF

  v1 = (unsigned __int8 *)context;
  v2 = W;
  do
  {
    v3 = v1[38];
    v4 = v1[39];
    ++v2;
    v1 += 4;
    *(v2 - 1) = (v1[36] << 8) | v1[37] | (v4 << 16) | (v3 << 24);
  }
  while ( v2 != &W[16] );
  v5 = &W[13];
  do
  {
    v6 = *v5 ^ *(v5 - 5);
    ++v5;
    v5[2] = __ROR4__(*(v5 - 14) ^ *(v5 - 12) ^ v6, 31);
  }
  while ( v5 != &W[77] );
  v7 = context->Intermediate_Hash[1];
  v8 = W;
  v9 = context->Intermediate_Hash[2];
  v33 = context->Intermediate_Hash[3];
  v10 = v33;
  v34 = context->Intermediate_Hash[4];
  v11 = v34;
  v12 = v7;
  v13 = context->Intermediate_Hash[0];
  v14 = v9;
  while ( 1 )
  {
    v15 = *v8++ + __ROR4__(v13, 27);
    v16 = v12 & v14 | v10 & ~v12;
    v17 = __ROR4__(v12, 2);
    v18 = v11 + v15 + v16 + 1518500249;
    if ( v8 == &W[20] )
      break;
    v11 = v10;
    v10 = v14;
    v14 = v17;
    v12 = v13;
    v13 = v18;
  }
  v19 = v18;
  v20 = &W[20];
  while ( 1 )
  {
    ++v20;
    v21 = v13 ^ v17;
    v22 = __ROR4__(v13, 2);
    v23 = v10 + *(v20 - 1) + __ROR4__(v19, 27) + (v14 ^ v21) + 1859775393;
    if ( v20 == &W[40] )
      break;
    v10 = v14;
    v14 = v17;
    v17 = v22;
    v13 = v19;
    v19 = v23;
  }
  v24 = &W[40];
  while ( 1 )
  {
    v25 = *v24++ + __ROR4__(v23, 27);
    v26 = v22 & v17 | v19 & (v22 | v17);
    v27 = __ROR4__(v19, 2);
    v28 = v14 + v25 + v26 - 1894007588;
    if ( v24 == &W[60] )
      break;
    v14 = v17;
    v17 = v22;
    v22 = v27;
    v19 = v23;
    v23 = v28;
  }
  v29 = &W[60];
  while ( 1 )
  {
    ++v29;
    v30 = v23 ^ v27;
    v31 = __ROR4__(v23, 2);
    v32 = v17 + *(v29 - 1) + __ROR4__(v28, 27) + (v22 ^ v30) - 899497514;
    if ( v29 == (uint32 *)&v36 )
      break;
    v17 = v22;
    v22 = v27;
    v27 = v31;
    v23 = v28;
    v28 = v32;
  }
  context->Intermediate_Hash[0] += v32;
  context->Intermediate_Hash[1] = v7 + v28;
  context->Intermediate_Hash[2] = v9 + v31;
  context->Message_Block_Index = 0;
  context->Intermediate_Hash[3] = v33 + v27;
  context->Intermediate_Hash[4] = v34 + v22;
};
