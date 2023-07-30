// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CDataSerialize.cpp

// Line 4: range 000000000CF4FC78-000000000CF4FE2B
void __cdecl CDataSerialize::CDataSerialize(CDataSerialize *const this)
{
  DWORD v1; // rdx
  BYTE *v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_EndingType = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_buffer = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwMaxLength >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_dwMaxLength = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_dwCurLength = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_bNeedDelete >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_bNeedDelete = 0LL;
  v1 = CDataSerialize::CheckEndingType(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_EndingType = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwMaxLength >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dwMaxLength);
  if ( !this->m_dwMaxLength )
  {
    this->m_dwMaxLength = 32LL;
    v2 = (BYTE *)operator new[](this->m_dwMaxLength);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_buffer = v2;
  }
};

// Line 14: range 000000000CF4FE2C-000000000CF4FF69
void __cdecl CDataSerialize::CDataSerialize(CDataSerialize *const this, BYTE *pBuffer, DWORD dwLength)
{
  DWORD v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_EndingType = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_buffer = pBuffer;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwMaxLength >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_dwMaxLength = dwLength;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_dwCurLength = dwLength;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_bNeedDelete >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_bNeedDelete = 0LL;
  v3 = CDataSerialize::CheckEndingType(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_EndingType = v3;
};

// Line 20: range 000000000CF4FF6A-000000000CF5002E
void __cdecl CDataSerialize::~CDataSerialize(CDataSerialize *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_bNeedDelete >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_bNeedDelete);
  if ( this->m_bNeedDelete )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_buffer);
    if ( this->m_buffer )
    {
      operator delete[](this->m_buffer);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_buffer = 0LL;
    }
  }
};

// Line 30: range 000000000CF50030-000000000CF5036F
int __cdecl CDataSerialize::Grows(CDataSerialize *const this, DWORD dwSize)
{
  DWORD m_dwMaxLength; // rcx
  BYTE *v3; // rcx
  size_t v4; // rdx
  size_t m_dwCurLength; // rdx
  BYTE *pBuffer_0; // [rsp+10h] [rbp-10h]
  BYTE *pBuffer; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_bNeedDelete >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_bNeedDelete = 1LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dwMaxLength >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dwMaxLength);
    m_dwMaxLength = this->m_dwMaxLength;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dwCurLength);
    if ( m_dwMaxLength >= this->m_dwCurLength + dwSize )
      break;
    if ( this->m_dwMaxLength )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dwMaxLength >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dwMaxLength);
      if ( this->m_dwMaxLength > 0x3FF )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dwMaxLength >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dwMaxLength);
        this->m_dwMaxLength += this->m_dwMaxLength >> 1;
        pBuffer_0 = (BYTE *)operator new[](this->m_dwMaxLength);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dwCurLength);
        m_dwCurLength = this->m_dwCurLength;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_buffer);
        memcpy(pBuffer_0, this->m_buffer, m_dwCurLength);
        if ( this->m_buffer )
          operator delete[](this->m_buffer);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_buffer = pBuffer_0;
      }
      else
      {
        this->m_dwMaxLength *= 2LL;
        pBuffer = (BYTE *)operator new[](this->m_dwMaxLength);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dwCurLength);
        v4 = this->m_dwCurLength;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_buffer);
        memcpy(pBuffer, this->m_buffer, v4);
        if ( this->m_buffer )
          operator delete[](this->m_buffer);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_buffer = pBuffer;
      }
    }
    else
    {
      this->m_dwMaxLength = 32LL;
      v3 = (BYTE *)operator new[](this->m_dwMaxLength);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_buffer = v3;
    }
  }
  return 0;
};

// Line 60: range 000000000CF50370-000000000CF50433
int __cdecl CDataSerialize::CheckEndingType(CDataSerialize *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  int v4; // edx
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 check:61";
  *(_QWORD *)(v1 + 16) = CDataSerialize::CheckEndingType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 1;
  if ( *(_BYTE *)(v1 + 32) == 1 )
    v4 = 2;
  else
    v4 = 1;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 74: range 000000000CF50434-000000000CF504F5
int __cdecl CDataSerialize::PushData(CDataSerialize *const this, void *pBuffer, DWORD dwSize)
{
  BYTE *m_buffer; // rcx

  CDataSerialize::Grows(this, dwSize);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_buffer);
  if ( this->m_buffer )
  {
    m_buffer = this->m_buffer;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dwCurLength);
    memcpy(&m_buffer[this->m_dwCurLength], pBuffer, dwSize);
    this->m_dwCurLength += dwSize;
  }
  return 0;
};

// Line 85: range 000000000CF504F6-000000000CF505B3
int __cdecl CDataSerialize::PopData(CDataSerialize *const this, void *pBuffer, DWORD dwSize)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_buffer);
  if ( this->m_buffer )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dwCurLength);
    if ( dwSize <= this->m_dwCurLength )
    {
      this->m_dwCurLength -= dwSize;
      memcpy(pBuffer, &this->m_buffer[this->m_dwCurLength], dwSize);
    }
  }
  return 0;
};

// Line 97: range 000000000CF505B4-000000000CF50652
const BYTE *__cdecl CDataSerialize::GetBufferAndLength(CDataSerialize *const this, DWORD *dwSize)
{
  DWORD v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dwCurLength);
  v2 = (this->m_dwCurLength + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_BYTE *)(((unsigned __int64)dwSize >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *dwSize = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_buffer);
  return this->m_buffer;
};

// Line 103: range 000000000CF50654-000000000CF506E7
const BYTE *__cdecl CDataSerialize::GetBufferAndRealLength(CDataSerialize *const this, DWORD *dwSize)
{
  DWORD m_dwCurLength; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwCurLength >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dwCurLength);
  m_dwCurLength = this->m_dwCurLength;
  if ( *(_BYTE *)(((unsigned __int64)dwSize >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *dwSize = m_dwCurLength;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_buffer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_buffer);
  return this->m_buffer;
};
