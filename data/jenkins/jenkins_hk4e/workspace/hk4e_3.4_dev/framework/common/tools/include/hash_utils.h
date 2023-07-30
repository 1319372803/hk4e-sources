// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/hash_utils.h

// Line 36: range 000000000D741251-000000000D7412F5
void __cdecl common::tools::HashUtils::appendHash(bool value, int32_t *current_hash)
{
  char v3; // dl
  __int64 v4; // rsi
  int v5; // ecx
  char v6; // dl

  v3 = *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000);
  v4 = ((unsigned __int8)current_hash & 7u) + 3;
  if ( v3 != 0 && (char)v4 >= v3 )
    __asan_report_load4(current_hash);
  v5 = *current_hash ^ value;
  v6 = *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((unsigned __int8)current_hash & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(current_hash, v4);
  }
  *current_hash = v5;
};

// Line 41: range 000000000CE38DA2-000000000CE38DFB
void __cdecl common::tools::HashUtils::appendHash(int32_t value, int32_t *current_hash)
{
  if ( *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)current_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(current_hash);
  }
  *current_hash ^= value;
};

// Line 46: range 000000000CE38DFC-000000000CE38F07
void __cdecl common::tools::HashUtils::appendHash(const std::string *value, int32_t *current_hash)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rax
  unsigned __int8 *v4; // rdx
  char v5; // cl
  int32_t hash_ix; // [rsp+14h] [rbp-1Ch]
  uint32_t ix; // [rsp+18h] [rbp-18h]
  uint32_t c; // [rsp+1Ch] [rbp-14h]

  hash_ix = 1;
  for ( ix = 0; ix < (unsigned __int64)std::string::length(value); ++ix )
  {
    v2 = ix;
    v3 = std::string::at(value, ix);
    v4 = (unsigned __int8 *)v3;
    v5 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
    if ( v5 != 0 && (char)(v3 & 7) >= v5 )
    {
      LOBYTE(v2) = v5 != 0;
      __asan_report_load1(v3, v2, v3);
    }
    c = *v4;
    if ( c != 32 )
    {
      ++hash_ix;
      if ( *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)current_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)current_hash >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(current_hash);
      }
      *current_hash ^= c << (hash_ix % 2);
    }
  }
};

// Line 59: range 000000000CE38F08-000000000CE391F9
void __fastcall common::tools::HashUtils::appendHash(float value, int32_t *current_hash)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  int v6; // edi
  int32_t v7; // edi
  __int64 v8; // rdi
  char v9; // si
  __int64 v10; // rsi
  char v11; // si
  __int64 v12; // rsi
  char v13; // si
  __int64 v14; // rsi
  char v16[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 96;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 byte_arr:63 64 4 8 value:59";
  *(_QWORD *)(v2 + 16) = common::tools::HashUtils::appendHash;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(float *)(v2 + 64) = value;
  if ( *(float *)(v2 + 64) != 0.0 )
  {
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0
      && (char)(((v2 + 64) & 7) + 3) >= *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_load4(v2 + 64);
    }
    v6 = *(_DWORD *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = v4 - 48;
      v4 = __asan_report_store4(v4 - 48, v4 - 48);
    }
    *(_DWORD *)(v4 - 48) = v6;
    if ( *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)current_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_load4(current_hash);
    }
    v7 = *current_hash;
    if ( *(char *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) < 0 )
    {
      v7 = v4 - 48;
      v4 = __asan_report_load1(v4 - 48, v4 - 48, v5);
    }
    *current_hash = *(unsigned __int8 *)(v4 - 48) ^ v7;
    LODWORD(v8) = *current_hash;
    v9 = *(_BYTE *)(((unsigned __int64)(v4 - 48 + 1) >> 3) + 0x7FFF8000);
    v10 = (v9 != 0) & (unsigned __int8)(((v4 - 48 + 1) & 7) >= v9);
    if ( (_BYTE)v10 )
    {
      v8 = v4 - 48 + 1;
      v4 = __asan_report_load1(v8, v10, v5);
    }
    *current_hash = (*(unsigned __int8 *)(v4 - 47) << 8) ^ v8;
    LODWORD(v8) = *current_hash;
    v11 = *(_BYTE *)(((unsigned __int64)(v4 - 48 + 2) >> 3) + 0x7FFF8000);
    v12 = (v11 != 0) & (unsigned __int8)(((v4 - 48 + 2) & 7) >= v11);
    if ( (_BYTE)v12 )
    {
      v8 = v4 - 48 + 2;
      v4 = __asan_report_load1(v8, v12, v5);
    }
    *current_hash = (*(unsigned __int8 *)(v4 - 46) << 16) ^ v8;
    LODWORD(v8) = *current_hash;
    v13 = *(_BYTE *)(((unsigned __int64)(v4 - 48 + 3) >> 3) + 0x7FFF8000);
    v14 = (v13 != 0) & (unsigned __int8)(((v4 - 48 + 3) & 7) >= v13);
    if ( (_BYTE)v14 )
    {
      v8 = v4 - 48 + 3;
      v4 = __asan_report_load1(v8, v14, v5);
    }
    *current_hash = (*(unsigned __int8 *)(v4 - 45) << 24) ^ v8;
  }
  if ( v16 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
};

// Line 76: range 000000000D7412F6-000000000D741355
void __cdecl common::tools::HashUtils::appendHash(uint32_t value, int32_t *current_hash)
{
  if ( *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)current_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)current_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(current_hash);
  }
  *current_hash ^= value;
};

// Line 82: range 000000000E699873-000000000E699899
void __cdecl common::tools::HashUtils::appendHash(uint64_t value, int32_t *current_hash)
{
  common::tools::HashUtils::appendHash(value, current_hash);
};

// Line 85: range 000000000E69989A-000000000E6998BF
void __cdecl common::tools::HashUtils::appendHash(int64_t value, int32_t *current_hash)
{
  common::tools::HashUtils::appendHash(value, current_hash);
};

// Line 259: range 000000000E69984E-000000000E699872
void __cdecl common::tools::HashUtils::appendHash(double value, int32_t *current_hash)
{
  float v2; // xmm0_4

  v2 = value;
  common::tools::HashUtils::appendHash(v2, current_hash);
};
