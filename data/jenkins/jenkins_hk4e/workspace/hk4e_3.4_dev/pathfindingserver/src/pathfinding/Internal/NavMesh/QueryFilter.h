// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/QueryFilter.h

// Line 44: range 000000000CD565D8-000000000CD56736
void __cdecl QueryFilter::QueryFilter(QueryFilter *const this)
{
  char v1; // dl
  int i; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 0x80) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_IncludeFlags);
  }
  this->m_IncludeFlags = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TypeID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_TypeID >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_TypeID);
  }
  this->m_TypeID = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_BindingSurfaceId >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 120) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_BindingSurfaceId >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_BindingSurfaceId);
  }
  this->m_BindingSurfaceId = 0;
  for ( i = 0; i <= 31; ++i )
  {
    v1 = *(_BYTE *)(((unsigned __int64)&this->m_AreaCost[i] >> 3) + 0x7FFF8000);
    if ( v1 != 0 && (char)(((4 * i + (_BYTE)this) & 7) + 3) >= v1 )
      __asan_report_store4(&this->m_AreaCost[i]);
    this->m_AreaCost[i] = 1.0;
  }
};

// Line 65: range 000000000CD56738-000000000CD56795
bool __cdecl QueryFilter::PassFilter(const QueryFilter *const this, unsigned int flags)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 0x80) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_IncludeFlags);
  }
  return (flags & this->m_IncludeFlags) != 0;
};

// Line 71: range 000000000CD56796-000000000CD56826
float __cdecl QueryFilter::GetAreaCost(const QueryFilter *const this, const int i)
{
  char v2; // dl

  if ( i > 31 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i < kMaxAreas",
      "./src/pathfinding/Internal/NavMesh/QueryFilter.h",
      0x47u,
      "float QueryFilter::GetAreaCost(int) const");
  }
  v2 = *(_BYTE *)(((unsigned __int64)&this->m_AreaCost[i] >> 3) + 0x7FFF8000);
  if ( v2 != 0 && (char)(((4 * i + (_BYTE)this) & 7) + 3) >= v2 )
    __asan_report_load4(&this->m_AreaCost[i]);
  return this->m_AreaCost[i];
};

// Line 74: range 000000000CD56828-000000000CD5687A
unsigned int __cdecl QueryFilter::GetIncludeFlags(const QueryFilter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 0x80) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_IncludeFlags);
  }
  return this->m_IncludeFlags;
};

// Line 75: range 000000000CD5687C-000000000CD568D5
void __cdecl QueryFilter::SetIncludeFlags(QueryFilter *const this, const unsigned int flags)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 0x80) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_IncludeFlags >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_IncludeFlags);
  }
  this->m_IncludeFlags = flags;
};

// Line 77: range 000000000CD568D6-000000000CD56931
void __cdecl QueryFilter::SetTypeID(QueryFilter *const this, const int typeID)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TypeID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_TypeID >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_TypeID);
  }
  this->m_TypeID = typeID;
};

// Line 78: range 000000000CD56932-000000000CD56986
int __cdecl QueryFilter::GetTypeID(const QueryFilter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TypeID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_TypeID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_TypeID);
  }
  return this->m_TypeID;
};

// Line 80: range 000000000CD56988-000000000CD569DC
int __cdecl QueryFilter::GetBindingSurfaceId(const QueryFilter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_BindingSurfaceId >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 120) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_BindingSurfaceId >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_BindingSurfaceId);
  }
  return this->m_BindingSurfaceId;
};
