// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializationCaching/MemoryCacheReader.h

// Line 21: range 000000000CD6E774-000000000CD6E834
void __cdecl MemoryCacheReader::MemoryCacheReader(
        MemoryCacheReader *const this,
        dynamic_array<unsigned char,false,1> *mem)
{
  int (**v2)(...); // rdx

  CacheReaderBase::CacheReaderBase(this);
  v2 = (int (**)(...))(&`vtable for'MemoryCacheReader + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_CacheReaderBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Memory = mem;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_LockCount);
  }
  this->m_LockCount = 0;
};

// Line 22: range 000000000CD6E836-000000000CD6E8E5
void __cdecl MemoryCacheReader::~MemoryCacheReader(MemoryCacheReader *const this)
{
  int (**v1)(...); // rdx
  MemoryCacheReader *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  v1 = (int (**)(...))(&`vtable for'MemoryCacheReader + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_CacheReaderBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (MemoryCacheReader *const)((char *)this + 16);
    __asan_report_load4(&thisa->m_LockCount);
  }
  if ( thisa->m_LockCount )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_LockCount == 0",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/MemoryCacheReader.h",
      0x16u,
      "virtual MemoryCacheReader::~MemoryCacheReader()");
  }
  CacheReaderBase::~CacheReaderBase(thisa);
};

// Line 22: range 000000000CD6E8E6-000000000CD6E910
void __cdecl MemoryCacheReader::~MemoryCacheReader(MemoryCacheReader *const this)
{
  MemoryCacheReader::~MemoryCacheReader(this);
  operator delete(this, 0x18uLL);
};

// Line 24: range 000000000CD6E912-000000000CD6EB1D
void __cdecl MemoryCacheReader::LockCacheBlock(
        MemoryCacheReader *const this,
        size_t block,
        uint8_t **startPos,
        uint8_t **endPos)
{
  unsigned __int8 *v4; // rdx
  uint8_t *v5; // rbx
  unsigned __int64 v6; // rax
  int *v7; // rax
  int *v8; // rdx
  uint8_t *v9; // rcx
  size_t blocka; // [rsp+10h] [rbp-30h]
  int __a; // [rsp+28h] [rbp-18h] BYREF
  int __b[5]; // [rsp+2Ch] [rbp-14h] BYREF

  blocka = block;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Memory, block);
  if ( dynamic_array<unsigned char,false,1ul>::size(this->m_Memory) <= block << 8 )
  {
    v4 = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Memory, block);
    block <<= 8;
    v4 = dynamic_array<unsigned char,false,1ul>::operator[](this->m_Memory, blocka << 8);
  }
  if ( *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *startPos = v4;
  v5 = *startPos;
  __b[0] = 256;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, block);
  v6 = (unsigned __int64)(this->_vptr_CacheReaderBase + 7);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_CacheReaderBase + 7, block);
  __a = (*(__int64 (__fastcall **)(MemoryCacheReader *const))v6)(this) - ((_DWORD)blocka << 8);
  v7 = (int *)std::min<int>(&__a, __b);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = &v5[*v8];
  if ( *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *endPos = v9;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_LockCount);
  }
  ++this->m_LockCount;
};

// Line 31: range 000000000CD6EB1E-000000000CD6EBED
void __cdecl MemoryCacheReader::DirectRead(MemoryCacheReader *const this, void *data, size_t position, size_t size)
{
  dynamic_array<unsigned char,false,1> *m_Memory; // rdi
  unsigned __int8 *v5; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Memory, data);
  m_Memory = this->m_Memory;
  if ( size > dynamic_array<unsigned char,false,1ul>::size(m_Memory) - position )
  {
    __asan_handle_no_return(m_Memory);
    __assert_fail(
      "m_Memory.size() - position >= size",
      "./src/pathfinding/Internal/Serialize/SerializationCaching/MemoryCacheReader.h",
      0x21u,
      "virtual void MemoryCacheReader::DirectRead(void*, size_t, size_t)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Memory, data);
  v5 = dynamic_array<unsigned char,false,1ul>::operator[](this->m_Memory, position);
  memcpy(data, v5, size);
};

// Line 37: range 000000000CD6EBEE-000000000CD6EC43
void __cdecl MemoryCacheReader::UnlockCacheBlock(MemoryCacheReader *const this, size_t block)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_LockCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_LockCount);
  }
  --this->m_LockCount;
};

// Line 39: range 000000000CD6EC44-000000000CD6EC86
size_t __cdecl MemoryCacheReader::GetFileLength(MemoryCacheReader *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Memory, v1);
  return dynamic_array<unsigned char,false,1ul>::size(this->m_Memory);
};

// Line 40: range 000000000CD6EC88-000000000CD6EC96
size_t __cdecl MemoryCacheReader::GetCacheSize(MemoryCacheReader *const this)
{
  return 256LL;
};

// Line 41: range 000000000CD6EC98-000000000CD6ECA8
const std::string *__cdecl MemoryCacheReader::GetPathName[abi:cxx11](MemoryCacheReader *const this)
{
  return &MemoryCacheReader::s_classname[abi:cxx11];
};

// Line 42: range 000000000CD6ECAA-000000000CD6ECF1
uint8_t *__cdecl MemoryCacheReader::GetAddressOfMemory(MemoryCacheReader *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Memory >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Memory, v1);
  return dynamic_array<unsigned char,false,1ul>::operator[](this->m_Memory, 0LL);
};
