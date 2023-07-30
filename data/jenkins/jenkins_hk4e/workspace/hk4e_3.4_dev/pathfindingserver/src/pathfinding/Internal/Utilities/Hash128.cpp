// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/Hash128.cpp

// Line 78: range 000000000CCA091E-000000000CCA094B
void __cdecl Hash128::Hash128(Hash128 *const this, const uint8_t *dataBytes, size_t dataBytesLength)
{
  Hash128::SetData(this, dataBytes, dataBytesLength);
};

// Line 84: range 000000000CCA094C-000000000CCA0A6D
uint32_t __cdecl Hash128::PackTouint32_t(const Hash128 *const this)
{
  uint32_t v1; // esi
  uint32_t *v2; // rcx
  int v3; // esi
  uint64_t *v4; // rcx
  int v5; // esi
  uint32_t *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v1 = this->hashData.u32[0];
  v2 = &this->hashData.u32[1];
  if ( *(_BYTE *)((((unsigned __int64)this->hashData.u64 + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)this->hashData.u64 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hashData.u32[1]);
  }
  v3 = *v2 ^ v1;
  v4 = &this->hashData.u64[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->hashData.u64[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hashData.u64[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hashData.u32[2]);
  }
  v5 = *(_DWORD *)v4 ^ v3;
  v6 = &this->hashData.u32[3];
  if ( *(_BYTE *)((((unsigned __int64)&this->hashData.u64[1] + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&this->hashData.u64[1] + 4) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hashData.u32[3]);
  }
  return v5 ^ *v6;
};

// Line 90: range 000000000CCA0A6E-000000000CCA0BB7
void __fastcall Hash128::SetData(Hash128 *const this, const uint8_t *dataBytes, size_t dataBytesLength)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 __b; // [rsp+28h] [rbp-68h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 dataBytesLength:89";
  *(_QWORD *)(v3 + 16) = Hash128::SetData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = dataBytesLength;
  __b = 16LL;
  v6 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)(v3 + 32), &__b);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6, &__b);
  *(_QWORD *)(v3 + 32) = *(_QWORD *)v6;
  memcpy(this, dataBytes, *(_QWORD *)(v3 + 32));
  memset(&this->hashData.bytes[*(_QWORD *)(v3 + 32)], 0, 16LL - *(_QWORD *)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 99: range 000000000CCA0BB8-000000000CCA0BDC
void __cdecl Hash128::Reset(Hash128 *const this)
{
  memset(this, 0, sizeof(Hash128));
};
