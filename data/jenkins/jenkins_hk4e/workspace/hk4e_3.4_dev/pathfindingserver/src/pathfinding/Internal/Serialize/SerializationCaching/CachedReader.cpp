// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp

// Line 30: range 000000000CC90836-000000000CC90A0F
void __cdecl CachedReader::CachedReader(CachedReader *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_CachePosition = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheStart >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_CacheStart = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_CacheEnd = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Cacher = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Block);
  }
  this->m_Block = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_CacheSize = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MinimumPosition >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_MinimumPosition = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MaximumPosition >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_MaximumPosition = 0LL;
  if ( *(char *)(((unsigned __int64)&this->m_OutOfBoundsRead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->m_OutOfBoundsRead);
  this->m_OutOfBoundsRead = 0;
};

// Line 44: range 000000000CC90A10-000000000CC90C7B
void __cdecl CachedReader::InitRead(
        CachedReader *const this,
        CacheReaderBase *cacher,
        size_t position,
        size_t readSize)
{
  CacheReaderBase *m_Cacher; // rdx
  _QWORD *p_vptr_CacheReaderBase; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  int32_t v10; // esi
  size_t v11; // rcx
  CachedReader *thisa; // [rsp+18h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (CachedReader *const)((char *)this + 32);
    __asan_report_load4(this);
  }
  if ( thisa->m_Block != -1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_Block == -1",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
      0x2Du,
      "void CachedReader::InitRead(CacheReaderBase&, size_t, size_t)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Cacher >> 3) + 0x7FFF8000) )
  {
    this = (CachedReader *const)&thisa->m_Cacher;
    __asan_report_store8();
  }
  thisa->m_Cacher = cacher;
  if ( !thisa->m_Cacher )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_Cacher != __null",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
      0x2Fu,
      "void CachedReader::InitRead(CacheReaderBase&, size_t, size_t)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Cacher >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_Cacher, cacher);
  m_Cacher = thisa->m_Cacher;
  p_vptr_CacheReaderBase = &m_Cacher->_vptr_CacheReaderBase;
  v6 = *(unsigned __int8 *)(((unsigned __int64)m_Cacher >> 3) + 0x7FFF8000);
  if ( (_BYTE)v6 )
    p_vptr_CacheReaderBase = (_QWORD *)__asan_report_load8(thisa->m_Cacher, v6);
  v7 = *p_vptr_CacheReaderBase + 40LL;
  v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v8 )
    v7 = __asan_report_load8(v7, v8);
  v9 = (*(__int64 (__fastcall **)(CacheReaderBase *))v7)(m_Cacher);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheSize >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  thisa->m_CacheSize = v9;
  v10 = position / thisa->m_CacheSize;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->m_Block);
  }
  thisa->m_Block = v10;
  v11 = position + readSize;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_MaximumPosition >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_MaximumPosition = v11;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_MinimumPosition >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_MinimumPosition = position;
  CachedReader::LockCacheBlockBounded(thisa);
  CachedReader::SetPosition(thisa, position);
};

// Line 64: range 000000000CC90C7C-000000000CC90F43
void __cdecl CachedReader::LockCacheBlockBounded(CachedReader *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 m_Cacher; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(unsigned __int64, __int64, uint8_t **, uint8_t **); // r8
  uint8_t **p_m_CacheEnd; // rcx
  __int64 m_Block; // rsi
  uint8_t *m_CacheStart; // rcx
  size_t m_MaximumPosition; // rsi
  size_t *p_m_CacheSize; // rdi
  unsigned __int64 v14; // rax
  uint8_t *v15; // rdx
  char v17[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 maxPos:66";
  *(_QWORD *)(v2 + 16) = CachedReader::LockCacheBlockBounded;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Cacher, v1);
  m_Cacher = (unsigned __int64)this->m_Cacher;
  v6 = (unsigned __int64)this->m_Cacher;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    m_Cacher = (unsigned __int64)this->m_Cacher;
    v6 = __asan_report_load8(m_Cacher, v1);
  }
  v7 = *(_QWORD *)v6 + 24LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    m_Cacher = v7;
    v7 = __asan_report_load8(v7, v1);
  }
  v8 = *(void (__fastcall **)(unsigned __int64, __int64, uint8_t **, uint8_t **))v7;
  p_m_CacheEnd = &this->m_CacheEnd;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    m_Cacher = (unsigned __int64)&this->m_Block;
    __asan_report_load4(&this->m_Block);
  }
  m_Block = this->m_Block;
  v8(m_Cacher, m_Block, &this->m_CacheStart, p_m_CacheEnd);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheStart >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheStart, m_Block);
  m_CacheStart = this->m_CacheStart;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MaximumPosition >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_MaximumPosition, m_Block);
  m_MaximumPosition = this->m_MaximumPosition;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Block);
  }
  p_m_CacheSize = (size_t *)this->m_Block;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
  {
    p_m_CacheSize = &this->m_CacheSize;
    __asan_report_load8(&this->m_CacheSize, m_MaximumPosition);
  }
  *(_QWORD *)(v2 + 32) = &m_CacheStart[m_MaximumPosition - (_QWORD)p_m_CacheSize * this->m_CacheSize];
  v14 = (unsigned __int64)std::min<unsigned char *>(&this->m_CacheEnd, (unsigned __int8 *const *)(v2 + 32));
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    v14 = __asan_report_load8(v14, v2 + 32);
  v15 = *(uint8_t **)v14;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_CacheEnd = v15;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 71: range 000000000CC90F44-000000000CC910E5
size_t __cdecl CachedReader::End(CachedReader *const this)
{
  CacheReaderBase *m_Cacher; // rdx
  _QWORD *p_vptr_CacheReaderBase; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  void (__fastcall *v6)(CacheReaderBase *, _QWORD); // r8
  CachedReader *thisa; // [rsp+8h] [rbp-18h]
  size_t position; // [rsp+18h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (CachedReader *const)((char *)this + 32);
    __asan_report_load4(this);
  }
  if ( thisa->m_Block == -1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_Block != -1",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
      0x48u,
      "size_t CachedReader::End()");
  }
  position = CachedReader::GetPosition(thisa);
  CachedReader::OutOfBoundsError(thisa, position, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Cacher >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_Cacher, position);
  m_Cacher = thisa->m_Cacher;
  p_vptr_CacheReaderBase = &m_Cacher->_vptr_CacheReaderBase;
  v3 = *(unsigned __int8 *)(((unsigned __int64)m_Cacher >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 )
    p_vptr_CacheReaderBase = (_QWORD *)__asan_report_load8(thisa->m_Cacher, v3);
  v4 = *p_vptr_CacheReaderBase + 32LL;
  v5 = *(unsigned __int8 *)((v4 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v5 )
    v4 = __asan_report_load8(v4, v5);
  v6 = *(void (__fastcall **)(CacheReaderBase *, _QWORD))v4;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->m_Block);
  }
  v6(m_Cacher, thisa->m_Block);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->m_Block);
  }
  thisa->m_Block = -1;
  return position;
};

// Line 81: range 000000000CC910E6-000000000CC91157
void __cdecl CachedReader::~CachedReader(CachedReader *const this)
{
  CachedReader *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (CachedReader *const)((char *)this + 32);
    __asan_report_load4(this);
  }
  if ( thisa->m_Block != -1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_Block == -1",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
      0x53u,
      "CachedReader::~CachedReader()");
  }
};

// Line 99: range 000000000CC91158-000000000CC91ACF
void __fastcall CachedReader::Read(CachedReader *const this, void *data, size_t size)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint8_t *v6; // rcx
  size_t v7; // rsi
  unsigned __int64 v8; // rax
  uint8_t *m_CacheEnd; // rdx
  unsigned __int8 *m_CacheStart; // rcx
  int v11; // edi
  __int64 v12; // rsi
  unsigned __int8 *m_CachePosition; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  CacheReaderBase *m_Cacher; // rdx
  _QWORD *p_vptr_CacheReaderBase; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  size_t v33; // rsi
  unsigned __int64 v34; // rax
  void *v35; // rsi
  __int64 *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  size_t v39; // rsi
  unsigned __int8 *__val; // [rsp+30h] [rbp-100h] BYREF
  unsigned __int8 *__lo; // [rsp+38h] [rbp-F8h] BYREF
  unsigned __int64 __b; // [rsp+40h] [rbp-F0h] BYREF
  size_t position; // [rsp+48h] [rbp-E8h]
  size_t blockEnd; // [rsp+50h] [rbp-E0h]
  size_t curReadSize; // [rsp+58h] [rbp-D8h]
  size_t physicallyLimitedSize; // [rsp+60h] [rbp-D0h]
  size_t blocksToRead; // [rsp+68h] [rbp-C8h]
  size_t curReadSize_0; // [rsp+70h] [rbp-C0h]
  size_t curReadSize_1; // [rsp+78h] [rbp-B8h]
  __int64 v52; // [rsp+80h] [rbp-B0h]
  unsigned __int8 *v53; // [rsp+88h] [rbp-A8h]
  unsigned __int8 *v54; // [rsp+90h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+98h] [rbp-98h]
  __int64 v56; // [rsp+A0h] [rbp-90h]
  __int64 v57; // [rsp+A8h] [rbp-88h]
  char v58[128]; // [rsp+B0h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 data:98 64 8 7 size:98";
  *(_QWORD *)(v3 + 16) = CachedReader::Read;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 32) = data;
  *(_QWORD *)(v3 + 64) = size;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, data);
  v6 = &this->m_CachePosition[*(_QWORD *)(v3 + 64)];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, data);
  if ( v6 > this->m_CacheEnd )
  {
    position = CachedReader::GetPosition(this);
    v7 = position;
    CachedReader::OutOfBoundsError(this, position, *(_QWORD *)(v3 + 64));
    if ( *(char *)(((unsigned __int64)&this->m_OutOfBoundsRead >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->m_OutOfBoundsRead);
    if ( this->m_OutOfBoundsRead )
    {
      memset(*(void **)(v3 + 32), 0, *(_QWORD *)(v3 + 64));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_CacheSize, position);
      if ( position % this->m_CacheSize )
      {
        blockEnd = (position / this->m_CacheSize + 1) * this->m_CacheSize;
        __b = blockEnd - position;
        v8 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)(v3 + 64), &__b);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8, &__b);
        curReadSize = *(_QWORD *)v8;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_CacheEnd, &__b);
        m_CacheEnd = this->m_CacheEnd;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheStart >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_CacheStart, &__b);
        m_CacheStart = this->m_CacheStart;
        v11 = curReadSize;
        v12 = *(unsigned __int8 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
        if ( (_BYTE)v12 )
        {
          v11 = (int)this;
          __asan_report_load8(this, v12);
        }
        m_CachePosition = this->m_CachePosition;
        v52 = *(_QWORD *)(v3 + 32);
        v53 = m_CachePosition;
        v54 = m_CacheStart;
        v55 = (unsigned __int64)m_CacheEnd;
        __b = (unsigned __int64)m_CacheEnd;
        __lo = m_CacheStart;
        __val = m_CachePosition;
        v14 = (unsigned __int64)std::clamp<unsigned char *>(&__val, &__lo, (unsigned __int8 *const *)&__b);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14, &__lo);
        v56 = *(_QWORD *)v14;
        __b = v55;
        __lo = v54;
        __val = &v53[v11];
        v15 = (unsigned __int64)std::clamp<unsigned char *>(&__val, &__lo, (unsigned __int8 *const *)&__b);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v15, &__lo);
        v57 = *(_QWORD *)v15;
        v16 = &v53[(int)v56 - (int)v53];
        memcpy((void *)(v52 + (int)v56 - (int)v53), v16, (int)v57 - (int)v56);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, v16);
        this->m_CachePosition += curReadSize;
        position += curReadSize;
        v17 = (__int64 *)(v3 + 32);
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v17 = (__int64 *)__asan_report_load8(v3 + 32, v16);
        v18 = *v17;
        v19 = (_QWORD *)(v3 + 32);
        v7 = v18 + curReadSize;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v19 = (_QWORD *)__asan_report_store8();
        *v19 = v7;
        *(_QWORD *)(v3 + 64) -= curReadSize;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Cacher, v7);
      m_Cacher = this->m_Cacher;
      p_vptr_CacheReaderBase = &m_Cacher->_vptr_CacheReaderBase;
      v22 = *(unsigned __int8 *)(((unsigned __int64)m_Cacher >> 3) + 0x7FFF8000);
      if ( (_BYTE)v22 )
        p_vptr_CacheReaderBase = (_QWORD *)__asan_report_load8(this->m_Cacher, v22);
      v23 = *p_vptr_CacheReaderBase + 56LL;
      v24 = *(unsigned __int8 *)((v23 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v24 )
        v23 = __asan_report_load8(v23, v24);
      __b = (*(__int64 (__fastcall **)(CacheReaderBase *))v23)(m_Cacher);
      __lo = (unsigned __int8 *)(*(_QWORD *)(v3 + 64) + position);
      v25 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)&__lo, &__b);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(v25, &__b);
      physicallyLimitedSize = *(_QWORD *)v25 - position;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_CacheSize, &__b);
      blocksToRead = physicallyLimitedSize / this->m_CacheSize;
      if ( blocksToRead )
      {
        curReadSize_0 = blocksToRead * this->m_CacheSize;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Cacher, &__b);
        v26 = (unsigned __int64)this->m_Cacher;
        v27 = (_QWORD *)v26;
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        {
          v26 = (unsigned __int64)this->m_Cacher;
          v27 = (_QWORD *)__asan_report_load8(v26, &__b);
        }
        v28 = *v27 + 16LL;
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        {
          v26 = v28;
          v28 = __asan_report_load8(v28, &__b);
        }
        v29 = *(_QWORD *)(v3 + 32);
        (*(void (__fastcall **)(unsigned __int64, __int64, size_t, size_t))v28)(v26, v29, position, curReadSize_0);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, v29);
        this->m_CachePosition += curReadSize_0;
        v30 = (__int64 *)(v3 + 32);
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v30 = (__int64 *)__asan_report_load8(v3 + 32, v29);
        v31 = *v30;
        v32 = (_QWORD *)(v3 + 32);
        v33 = v31 + curReadSize_0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v32 = (_QWORD *)__asan_report_store8();
        *v32 = v33;
        *(_QWORD *)(v3 + 64) -= curReadSize_0;
      }
      while ( *(_QWORD *)(v3 + 64) )
      {
        v34 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)(v3 + 64), &this->m_CacheSize);
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8(v34, &this->m_CacheSize);
        curReadSize_1 = *(_QWORD *)v34;
        v35 = *(void **)(v3 + 32);
        CachedReader::UpdateReadCache(this, v35, curReadSize_1);
        v36 = (__int64 *)(v3 + 32);
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v36 = (__int64 *)__asan_report_load8(v3 + 32, v35);
        v37 = *v36;
        v38 = (_QWORD *)(v3 + 32);
        v39 = v37 + curReadSize_1;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v38 = (_QWORD *)__asan_report_store8();
        *v38 = v39;
        *(_QWORD *)(v3 + 64) -= curReadSize_1;
      }
    }
  }
  else
  {
    memcpy(*(void **)(v3 + 32), this->m_CachePosition, *(_QWORD *)(v3 + 64));
    this->m_CachePosition += *(_QWORD *)(v3 + 64);
  }
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 153: range 000000000CC91AD0-000000000CC91B85
void __cdecl CachedReader::Skip(CachedReader *const this, size_t size)
{
  uint8_t *v2; // rcx
  size_t v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, size);
  v2 = &this->m_CachePosition[size];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, size);
  if ( v2 > this->m_CacheEnd )
  {
    v3 = size + CachedReader::GetPosition(this);
    CachedReader::SetPosition(this, v3);
  }
  else
  {
    this->m_CachePosition += size;
  }
};

// Line 166: range 000000000CC91B86-000000000CC921F2
void __cdecl CachedReader::UpdateReadCache(CachedReader *const this, void *data, size_t size)
{
  CacheReaderBase **p_m_Cacher; // rax
  unsigned __int8 *m_CacheEnd; // rdx
  unsigned __int8 *m_CacheStart; // rcx
  int v6; // edi
  __int64 v7; // rsi
  unsigned __int8 *m_CachePosition; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int8 *v11; // rsi
  size_t v12; // rcx
  size_t v13; // rsi
  uint8_t *v14; // rcx
  __int64 m_Block; // rsi
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  CachedReader *thisa; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *__val; // [rsp+38h] [rbp-88h] BYREF
  unsigned __int8 *__lo; // [rsp+40h] [rbp-80h] BYREF
  unsigned __int8 *__hi; // [rsp+48h] [rbp-78h] BYREF
  size_t position; // [rsp+50h] [rbp-70h]
  uint8_t *cachePosition; // [rsp+58h] [rbp-68h]
  char *v28; // [rsp+60h] [rbp-60h]
  unsigned __int8 *v29; // [rsp+68h] [rbp-58h]
  unsigned __int8 *v30; // [rsp+70h] [rbp-50h]
  unsigned __int8 *v31; // [rsp+78h] [rbp-48h]
  __int64 v32; // [rsp+80h] [rbp-40h]
  __int64 v33; // [rsp+88h] [rbp-38h]
  char *v34; // [rsp+90h] [rbp-30h]
  uint8_t *v35; // [rsp+98h] [rbp-28h]
  unsigned __int8 *v36; // [rsp+A0h] [rbp-20h]
  unsigned __int8 *v37; // [rsp+A8h] [rbp-18h]
  __int64 v38; // [rsp+B0h] [rbp-10h]

  thisa = this;
  p_m_Cacher = &this->m_Cacher;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
  {
    this = (CachedReader *const)((char *)this + 24);
    __asan_report_load8(p_m_Cacher, data);
  }
  if ( !thisa->m_Cacher )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_Cacher != __null",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
      0xA7u,
      "void CachedReader::UpdateReadCache(void*, size_t)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheSize >> 3) + 0x7FFF8000) )
  {
    this = (CachedReader *const)&thisa->m_CacheSize;
    __asan_report_load8(&thisa->m_CacheSize, data);
  }
  if ( size > thisa->m_CacheSize )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "size <= m_CacheSize",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
      0xA8u,
      "void CachedReader::UpdateReadCache(void*, size_t)");
  }
  position = CachedReader::GetPosition(thisa);
  CachedReader::OutOfBoundsError(thisa, position, size);
  if ( *(char *)(((unsigned __int64)&thisa->m_OutOfBoundsRead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->m_OutOfBoundsRead);
  if ( thisa->m_OutOfBoundsRead )
  {
    memset(data, 0, size);
  }
  else
  {
    CachedReader::SetPosition(thisa, position);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheEnd >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_CacheEnd, position);
    m_CacheEnd = thisa->m_CacheEnd;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheStart >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_CacheStart, position);
    m_CacheStart = thisa->m_CacheStart;
    v6 = size;
    v7 = *(unsigned __int8 *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
    {
      v6 = (int)thisa;
      __asan_report_load8(thisa, v7);
    }
    m_CachePosition = thisa->m_CachePosition;
    v28 = (char *)data;
    v29 = m_CachePosition;
    v30 = m_CacheStart;
    v31 = m_CacheEnd;
    __hi = m_CacheEnd;
    __lo = m_CacheStart;
    __val = m_CachePosition;
    v9 = (unsigned __int64)std::clamp<unsigned char *>(&__val, &__lo, &__hi);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9, &__lo);
    v32 = *(_QWORD *)v9;
    __hi = v31;
    __lo = v30;
    __val = &v29[v6];
    v10 = (unsigned __int64)std::clamp<unsigned char *>(&__val, &__lo, &__hi);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10, &__lo);
    v33 = *(_QWORD *)v10;
    v11 = &v29[(int)v32 - (int)v29];
    memcpy(&v28[(int)v32 - (int)v29], v11, (int)v33 - (int)v32);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, v11);
    v12 = (size_t)&thisa->m_CachePosition[size];
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheEnd >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_CacheEnd, v11);
    if ( (uint8_t *)v12 <= thisa->m_CacheEnd )
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v11);
      thisa->m_CachePosition += size;
    }
    else
    {
      v13 = size + position;
      CachedReader::SetPosition(thisa, size + position);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheStart >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_CacheStart, v13);
      v14 = thisa->m_CacheStart;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->m_Block >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->m_Block);
      }
      m_Block = thisa->m_Block;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheSize >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_CacheSize, m_Block);
      cachePosition = &v14[position - m_Block * thisa->m_CacheSize];
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_CacheEnd >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_CacheEnd, m_Block);
      v16 = thisa->m_CacheEnd;
      v17 = thisa->m_CacheStart;
      v34 = (char *)data;
      v35 = cachePosition;
      v36 = v17;
      v37 = v16;
      __hi = v16;
      __lo = v17;
      __val = cachePosition;
      v18 = (unsigned __int64)std::clamp<unsigned char *>(&__val, &__lo, &__hi);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(v18, &__lo);
      v38 = *(_QWORD *)v18;
      __hi = v37;
      __lo = v36;
      __val = &v35[(int)size];
      v19 = (unsigned __int64)std::clamp<unsigned char *>(&__val, &__lo, &__hi);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v19, &__lo);
      memcpy(&v34[(int)v38 - (int)v35], &v35[(int)v38 - (int)v35], (int)(*(_QWORD *)v19 - v38));
    }
  }
};

// Line 199: range 000000000CC921F3-000000000CC92272
std::string *__cdecl GetNicePath[abi:cxx11](std::string *retstr, CacheReaderBase *cacher)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)cacher >> 3) + 0x7FFF8000) )
    __asan_report_load8(cacher, cacher);
  v2 = (unsigned __int64)(cacher->_vptr_CacheReaderBase + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(cacher->_vptr_CacheReaderBase + 6, cacher);
  v3 = (*(__int64 (__fastcall **)(CacheReaderBase *))v2)(cacher);
  std::string::basic_string(retstr, v3);
  return retstr;
};

// Line 214: range 000000000CC92274-000000000CC9298B
void __cdecl CachedReader::OutOfBoundsError(CachedReader *const this, size_t position, size_t size)
{
  CacheReaderBase *m_Cacher; // rdx
  _QWORD *p_vptr_CacheReaderBase; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  const char *v8; // rax
  size_t v9; // rcx
  const char *v10; // rax
  const char *v11; // rax
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-70h] BYREF
  std::string __lhs; // [rsp+70h] [rbp-50h] BYREF
  std::string v17; // [rsp+90h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->m_OutOfBoundsRead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_OutOfBoundsRead);
  if ( !this->m_OutOfBoundsRead )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Cacher, position);
    m_Cacher = this->m_Cacher;
    p_vptr_CacheReaderBase = &m_Cacher->_vptr_CacheReaderBase;
    v5 = *(unsigned __int8 *)(((unsigned __int64)m_Cacher >> 3) + 0x7FFF8000);
    if ( (_BYTE)v5 )
      p_vptr_CacheReaderBase = (_QWORD *)__asan_report_load8(this->m_Cacher, v5);
    v6 = *p_vptr_CacheReaderBase + 56LL;
    v7 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      v6 = __asan_report_load8(v6, v7);
    if ( position + size > (*(__int64 (__fastcall **)(CacheReaderBase *))v6)(m_Cacher) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
        "OutOfBoundsError",
        220);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Cacher, &common::milog::MiLogDefault::default_log_obj_);
      GetNicePath[abi:cxx11](&__rhs, this->m_Cacher);
      std::operator+<char>(&__lhs, "The file '", &__rhs);
      std::operator+<char>(&v17, &__lhs, "' is corrupted! Remove it and launch unity again!\n[Position out of bounds!]");
      v8 = (const char *)std::string::c_str(&v17);
      common::milog::MiLogStream::operator()(&v14, v8);
      std::string::~string(&v17);
      std::string::~string(&__lhs);
      std::string::~string(&__rhs);
      common::milog::MiLogStream::~MiLogStream(&v14);
      __asan_handle_no_return(&v14);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
        0xDCu,
        "void CachedReader::OutOfBoundsError(size_t, size_t)");
    }
    v9 = position + size;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_MaximumPosition >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_MaximumPosition, v7);
    if ( v9 > this->m_MaximumPosition )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
        "OutOfBoundsError",
        226);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Cacher, &common::milog::MiLogDefault::default_log_obj_);
      GetNicePath[abi:cxx11](&__rhs, this->m_Cacher);
      std::operator+<char>(&__lhs, "The file '", &__rhs);
      std::operator+<char>(&v17, &__lhs, "' is corrupted! Remove it and launch unity again!\n[Position out of bounds!]");
      v10 = (const char *)std::string::c_str(&v17);
      common::milog::MiLogStream::operator()(&v14, v10);
      std::string::~string(&v17);
      std::string::~string(&__lhs);
      std::string::~string(&__rhs);
      common::milog::MiLogStream::~MiLogStream(&v14);
      __asan_handle_no_return(&v14);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
        0xE2u,
        "void CachedReader::OutOfBoundsError(size_t, size_t)");
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_MinimumPosition >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_MinimumPosition, v7);
    if ( position < this->m_MinimumPosition )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
        "OutOfBoundsError",
        232);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Cacher, &common::milog::MiLogDefault::default_log_obj_);
      GetNicePath[abi:cxx11](&__rhs, this->m_Cacher);
      std::operator+<char>(&__lhs, "The file '", &__rhs);
      std::operator+<char>(&v17, &__lhs, "' is corrupted! Remove it and launch unity again!\n[Position out of bounds!]");
      v11 = (const char *)std::string::c_str(&v17);
      common::milog::MiLogStream::operator()(&v14, v11);
      std::string::~string(&v17);
      std::string::~string(&__lhs);
      std::string::~string(&__rhs);
      common::milog::MiLogStream::~MiLogStream(&v14);
      __asan_handle_no_return(&v14);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.cpp",
        0xE8u,
        "void CachedReader::OutOfBoundsError(size_t, size_t)");
    }
  }
};

// Line 238: range 000000000CC9298C-000000000CC92CF2
void __cdecl CachedReader::SetPosition(CachedReader *const this, size_t position)
{
  size_t v2; // rsi
  CacheReaderBase *m_Cacher; // rdx
  _QWORD *p_vptr_CacheReaderBase; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 m_Block; // rsi
  __int64 v9; // rsi
  CacheReaderBase *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  uint8_t *m_CacheStart; // rcx
  __int64 v14; // rsi
  uint8_t *v15; // rcx

  CachedReader::OutOfBoundsError(this, position, 0LL);
  if ( *(char *)(((unsigned __int64)&this->m_OutOfBoundsRead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_OutOfBoundsRead);
  if ( !this->m_OutOfBoundsRead )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_CacheSize, position);
    v2 = position / this->m_CacheSize;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_Block);
    }
    if ( v2 != this->m_Block )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Cacher, v2);
      m_Cacher = this->m_Cacher;
      p_vptr_CacheReaderBase = &m_Cacher->_vptr_CacheReaderBase;
      v5 = *(unsigned __int8 *)(((unsigned __int64)m_Cacher >> 3) + 0x7FFF8000);
      if ( (_BYTE)v5 )
        p_vptr_CacheReaderBase = (_QWORD *)__asan_report_load8(this->m_Cacher, v5);
      v6 = *p_vptr_CacheReaderBase + 32LL;
      v7 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v7 )
        v6 = __asan_report_load8(v6, v7);
      m_Block = this->m_Block;
      (*(void (__fastcall **)(CacheReaderBase *, __int64))v6)(m_Cacher, m_Block);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_CacheSize, m_Block);
      v9 = (unsigned int)(position / this->m_CacheSize);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->m_Block);
      }
      this->m_Block = v9;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Cacher, v9);
      v10 = this->m_Cacher;
      v11 = (unsigned __int64)this->m_Cacher;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v10 = this->m_Cacher;
        v11 = __asan_report_load8(v10, v9);
      }
      v12 = *(_QWORD *)v11 + 24LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        v10 = (CacheReaderBase *)v12;
        v12 = __asan_report_load8(v12, v9);
      }
      v2 = this->m_Block;
      (*(void (__fastcall **)(CacheReaderBase *, size_t, uint8_t **, uint8_t **))v12)(
        v10,
        v2,
        &this->m_CacheStart,
        &this->m_CacheEnd);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheStart >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_CacheStart, v2);
    m_CacheStart = this->m_CacheStart;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_Block);
    }
    v14 = this->m_Block;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_CacheSize, v14);
    v15 = &m_CacheStart[position - v14 * this->m_CacheSize];
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_CachePosition = v15;
  }
};

// Line 253: range 000000000CC92CF4-000000000CC92D81
void __cdecl CachedReader::Align4Read(CachedReader *const this)
{
  __int64 v1; // rsi
  uint8_t *m_CachePosition; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  m_CachePosition = this->m_CachePosition;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheStart >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheStart, v1);
  this->m_CachePosition = &this->m_CacheStart[((_DWORD)m_CachePosition - LODWORD(this->m_CacheStart) + 3) & 0xFFFFFFFC];
};

// Line 260: range 000000000CC92D82-000000000CC92E1D
const char *__cdecl CachedReader::GetSerializedFilePathName(CachedReader *const this)
{
  __int64 v1; // rsi
  CacheReaderBase *m_Cacher; // rdx
  _QWORD *p_vptr_CacheReaderBase; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Cacher >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Cacher, v1);
  m_Cacher = this->m_Cacher;
  p_vptr_CacheReaderBase = &m_Cacher->_vptr_CacheReaderBase;
  v4 = *(unsigned __int8 *)(((unsigned __int64)m_Cacher >> 3) + 0x7FFF8000);
  if ( (_BYTE)v4 )
    p_vptr_CacheReaderBase = (_QWORD *)__asan_report_load8(this->m_Cacher, v4);
  v5 = *p_vptr_CacheReaderBase + 48LL;
  v6 = *(unsigned __int8 *)((v5 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v6 )
    v5 = __asan_report_load8(v5, v6);
  v7 = (*(__int64 (__fastcall **)(CacheReaderBase *))v5)(m_Cacher);
  return (const char *)std::string::c_str(v7);
};
