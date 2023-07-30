// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializationCaching/CachedReader.h

// Line 133: range 000000000CFA2D36-000000000CFA2E57
void __cdecl CachedReader::Read<float>(CachedReader *const this, float *data)
{
  uint8_t *v2; // rcx
  uint8_t *m_CachePosition; // rdx
  int v4; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, data);
  v2 = this->m_CachePosition + 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, data);
  if ( v2 > this->m_CacheEnd )
  {
    CachedReader::UpdateReadCache(this, data, 4uLL);
  }
  else
  {
    m_CachePosition = this->m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)this->m_CachePosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(this->m_CachePosition);
    }
    v4 = *(_DWORD *)m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(data);
    }
    *(_DWORD *)data = v4;
    this->m_CachePosition += 4;
  }
};

// Line 133: range 000000000CFA2AF6-000000000CFA2C14
void __cdecl CachedReader::Read<int>(CachedReader *const this, int *data)
{
  uint8_t *v2; // rcx
  uint8_t *m_CachePosition; // rdx
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, data);
  v2 = this->m_CachePosition + 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, data);
  if ( v2 > this->m_CacheEnd )
  {
    CachedReader::UpdateReadCache(this, data, 4uLL);
  }
  else
  {
    m_CachePosition = this->m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)this->m_CachePosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(this->m_CachePosition);
    }
    v4 = *(_DWORD *)m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(data);
    }
    *data = v4;
    this->m_CachePosition += 4;
  }
};

// Line 133: range 000000000D0B207E-000000000D0B2197
void __cdecl CachedReader::Read<unsigned char>(CachedReader *const this, unsigned __int8 *data)
{
  uint8_t *v2; // rcx
  uint8_t *m_CachePosition; // rdx
  unsigned __int8 v4; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, data);
  v2 = this->m_CachePosition + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, data);
  if ( v2 > this->m_CacheEnd )
  {
    CachedReader::UpdateReadCache(this, data, 1uLL);
  }
  else
  {
    m_CachePosition = this->m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->m_CachePosition & 7) >= *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->m_CachePosition);
    }
    v4 = *m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)data & 7) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(data);
    }
    *data = v4;
    ++this->m_CachePosition;
  }
};

// Line 133: range 000000000CFA2C16-000000000CFA2D34
void __cdecl CachedReader::Read<unsigned int>(CachedReader *const this, unsigned int *data)
{
  uint8_t *v2; // rcx
  uint8_t *m_CachePosition; // rdx
  unsigned int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, data);
  v2 = this->m_CachePosition + 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, data);
  if ( v2 > this->m_CacheEnd )
  {
    CachedReader::UpdateReadCache(this, data, 4uLL);
  }
  else
  {
    m_CachePosition = this->m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)this->m_CachePosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(this->m_CachePosition);
    }
    v4 = *(_DWORD *)m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(data);
    }
    *data = v4;
    this->m_CachePosition += 4;
  }
};

// Line 133: range 000000000D0B1F5C-000000000D0B207C
void __cdecl CachedReader::Read<unsigned short>(CachedReader *const this, unsigned __int16 *data)
{
  uint8_t *v2; // rcx
  uint8_t *m_CachePosition; // rdx
  unsigned __int16 v4; // cx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, data);
  v2 = this->m_CachePosition + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheEnd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheEnd, data);
  if ( v2 > this->m_CacheEnd )
  {
    CachedReader::UpdateReadCache(this, data, 2uLL);
  }
  else
  {
    m_CachePosition = this->m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)this->m_CachePosition & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this->m_CachePosition >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load2(this->m_CachePosition);
    }
    v4 = *(_WORD *)m_CachePosition;
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)data & 7) + 1) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(data);
    }
    *data = v4;
    this->m_CachePosition += 2;
  }
};

// Line 146: range 000000000CD6E212-000000000CD6E2EE
size_t __cdecl CachedReader::GetPosition(const CachedReader *const this)
{
  __int64 v1; // rsi
  uint8_t *m_CachePosition; // rcx
  signed __int64 v3; // rsi
  __int64 m_Block; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  m_CachePosition = this->m_CachePosition;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheStart >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheStart, v1);
  v3 = m_CachePosition - this->m_CacheStart;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Block >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Block);
  }
  m_Block = this->m_Block;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CacheSize >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_CacheSize, v3);
  return v3 + m_Block * this->m_CacheSize;
};
