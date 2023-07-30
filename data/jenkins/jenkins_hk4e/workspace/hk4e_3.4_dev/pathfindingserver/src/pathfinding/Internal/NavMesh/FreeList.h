// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/FreeList.h

// Line 17: range 000000000CDBA12C-000000000CDBA1EA
void __cdecl FreeList<NavMeshLink,false>::FreeList(FreeList<NavMeshLink,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
};

// Line 17: range 000000000CDCAC08-000000000CDCACC6
void __cdecl FreeList<NavMeshLink,true>::FreeList(FreeList<NavMeshLink,true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
};

// Line 17: range 000000000CDB9F90-000000000CDBA04E
void __cdecl FreeList<NavMeshTile,false>::FreeList(FreeList<NavMeshTile,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
};

// Line 17: range 000000000CDCAA18-000000000CDCAAD6
void __cdecl FreeList<NavMeshTile,true>::FreeList(FreeList<NavMeshTile,true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
};

// Line 17: range 000000000CDBA2AC-000000000CDBA36A
void __cdecl FreeList<OffMeshConnection,false>::FreeList(FreeList<OffMeshConnection,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
};

// Line 24: range 000000000CDBA1EC-000000000CDBA2AA
void __cdecl FreeList<NavMeshLink,false>::~FreeList(FreeList<NavMeshLink,false> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
};

// Line 24: range 000000000CDCACC8-000000000CDCADDE
void __cdecl FreeList<NavMeshLink,true>::~FreeList(FreeList<NavMeshLink,true> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, -16 * this->m_Capacity);
};

// Line 24: range 000000000CDBA050-000000000CDBA12B
void __cdecl FreeList<NavMeshTile,false>::~FreeList(FreeList<NavMeshTile,false> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
};

// Line 24: range 000000000CDCAAD8-000000000CDCAC07
void __cdecl FreeList<NavMeshTile,true>::~FreeList(FreeList<NavMeshTile,true> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, -152 * this->m_Capacity);
};

// Line 24: range 000000000CDBA36C-000000000CDBA45F
void __cdecl FreeList<OffMeshConnection,false>::~FreeList(FreeList<OffMeshConnection,false> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
    OffMeshConnection::~OffMeshConnection(&this->m_Data[i]);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
};

// Line 33: range 000000000CDB9B9E-000000000CDB9BE8
// local variable allocation has failed, the output may be wrong!
NavMeshLink *__cdecl FreeList<NavMeshLink,false>::operator[](FreeList<NavMeshLink,false> *const this, int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 33: range 000000000CDC9410-000000000CDC945A
// local variable allocation has failed, the output may be wrong!
NavMeshLink *__cdecl FreeList<NavMeshLink,true>::operator[](FreeList<NavMeshLink,true> *const this, int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 33: range 000000000CDB952A-000000000CDB9584
// local variable allocation has failed, the output may be wrong!
NavMeshTile *__cdecl FreeList<NavMeshTile,false>::operator[](FreeList<NavMeshTile,false> *const this, int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 33: range 000000000CDC8D04-000000000CDC8D5E
// local variable allocation has failed, the output may be wrong!
NavMeshTile *__cdecl FreeList<NavMeshTile,true>::operator[](FreeList<NavMeshTile,true> *const this, int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 33: range 000000000CDBBEF0-000000000CDBBF4F
// local variable allocation has failed, the output may be wrong!
OffMeshConnection *__cdecl FreeList<OffMeshConnection,false>::operator[](
        FreeList<OffMeshConnection,false> *const this,
        int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 39: range 000000000CD7E0BC-000000000CD7E106
// local variable allocation has failed, the output may be wrong!
const NavMeshLink *__cdecl FreeList<NavMeshLink,false>::operator[](
        const FreeList<NavMeshLink,false> *const this,
        int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 39: range 000000000CD7E010-000000000CD7E06A
// local variable allocation has failed, the output may be wrong!
const NavMeshTile *__cdecl FreeList<NavMeshTile,false>::operator[](
        const FreeList<NavMeshTile,false> *const this,
        int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 39: range 000000000CDC8D9C-000000000CDC8DF6
// local variable allocation has failed, the output may be wrong!
const NavMeshTile *__cdecl FreeList<NavMeshTile,true>::operator[](const FreeList<NavMeshTile,true> *const this, int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 39: range 000000000CDBBE2E-000000000CDBBE8D
// local variable allocation has failed, the output may be wrong!
const OffMeshConnection *__cdecl FreeList<OffMeshConnection,false>::operator[](
        const FreeList<OffMeshConnection,false> *const this,
        int i)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&i);
  return &this->m_Data[i];
};

// Line 45: range 000000000CDBBEB4-000000000CDBBEEE
const NavMeshTile *__cdecl FreeList<NavMeshTile,false>::begin(const FreeList<NavMeshTile,false> *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  return this->m_Data;
};

// Line 45: range 000000000CDC8D60-000000000CDC8D9A
const NavMeshTile *__cdecl FreeList<NavMeshTile,true>::begin(const FreeList<NavMeshTile,true> *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  return this->m_Data;
};

// Line 50: range 000000000CDB990A-000000000CDB9B9C
unsigned int __cdecl FreeList<NavMeshLink,false>::Alloc(FreeList<NavMeshLink,false> *const this)
{
  __int64 v1; // rsi
  NavMeshLink *v3; // rax
  NavMeshLink *v4; // rax
  unsigned int newCapacity; // [rsp+18h] [rbp-8h]
  unsigned int id; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->m_NextFree == -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->m_Capacity);
      }
      if ( this->m_Capacity > 0x270F )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        newCapacity = this->m_Capacity + 1024;
      }
      else
      {
        newCapacity = 2 * this->m_Capacity;
      }
    }
    else
    {
      newCapacity = 4;
    }
    v1 = newCapacity;
    FreeList<NavMeshLink,false>::Grow(this, newCapacity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
      return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  id = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  v3 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->next);
  }
  this->m_NextFree = v3->next;
  v4 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = (NavMeshLink *)__asan_report_store4(&v4->next);
  }
  v4->next = 0;
  return id;
};

// Line 50: range 000000000CDC917C-000000000CDC940E
unsigned int __cdecl FreeList<NavMeshLink,true>::Alloc(FreeList<NavMeshLink,true> *const this)
{
  __int64 v1; // rsi
  NavMeshLink *v3; // rax
  NavMeshLink *v4; // rax
  unsigned int newCapacity; // [rsp+18h] [rbp-8h]
  unsigned int id; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->m_NextFree == -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->m_Capacity);
      }
      if ( this->m_Capacity > 0x270F )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        newCapacity = this->m_Capacity + 1024;
      }
      else
      {
        newCapacity = 2 * this->m_Capacity;
      }
    }
    else
    {
      newCapacity = 4;
    }
    v1 = newCapacity;
    FreeList<NavMeshLink,true>::Grow(this, newCapacity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
      return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  id = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  v3 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->next);
  }
  this->m_NextFree = v3->next;
  v4 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = (NavMeshLink *)__asan_report_store4(&v4->next);
  }
  v4->next = 0;
  return id;
};

// Line 50: range 000000000CDB9586-000000000CDB9838
unsigned int __cdecl FreeList<NavMeshTile,false>::Alloc(FreeList<NavMeshTile,false> *const this)
{
  __int64 v1; // rsi
  NavMeshTile *v3; // rax
  NavMeshTile *v4; // rax
  unsigned int newCapacity; // [rsp+18h] [rbp-8h]
  unsigned int id; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->m_NextFree == -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->m_Capacity);
      }
      if ( this->m_Capacity > 0x270F )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        newCapacity = this->m_Capacity + 1024;
      }
      else
      {
        newCapacity = 2 * this->m_Capacity;
      }
    }
    else
    {
      newCapacity = 4;
    }
    v1 = newCapacity;
    FreeList<NavMeshTile,false>::Grow(this, newCapacity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
      return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  id = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  v3 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->next);
  }
  this->m_NextFree = v3->next;
  v4 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = (NavMeshTile *)__asan_report_store4(&v4->next);
  }
  v4->next = 0;
  return id;
};

// Line 50: range 000000000CDC8DF8-000000000CDC90AA
unsigned int __cdecl FreeList<NavMeshTile,true>::Alloc(FreeList<NavMeshTile,true> *const this)
{
  __int64 v1; // rsi
  NavMeshTile *v3; // rax
  NavMeshTile *v4; // rax
  unsigned int newCapacity; // [rsp+18h] [rbp-8h]
  unsigned int id; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->m_NextFree == -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->m_Capacity);
      }
      if ( this->m_Capacity > 0x270F )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        newCapacity = this->m_Capacity + 1024;
      }
      else
      {
        newCapacity = 2 * this->m_Capacity;
      }
    }
    else
    {
      newCapacity = 4;
    }
    v1 = newCapacity;
    FreeList<NavMeshTile,true>::Grow(this, newCapacity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
      return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  id = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  v3 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->next);
  }
  this->m_NextFree = v3->next;
  v4 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = (NavMeshTile *)__asan_report_store4(&v4->next);
  }
  v4->next = 0;
  return id;
};

// Line 50: range 000000000CDBBF50-000000000CDBC226
unsigned int __cdecl FreeList<OffMeshConnection,false>::Alloc(FreeList<OffMeshConnection,false> *const this)
{
  __int64 v1; // rsi
  OffMeshConnection *v3; // rdx
  OffMeshConnection *v4; // rdx
  unsigned int newCapacity; // [rsp+18h] [rbp-8h]
  unsigned int id; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->m_NextFree == -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->m_Capacity);
      }
      if ( this->m_Capacity > 0x270F )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        newCapacity = this->m_Capacity + 1024;
      }
      else
      {
        newCapacity = 2 * this->m_Capacity;
      }
    }
    else
    {
      newCapacity = 4;
    }
    v1 = newCapacity;
    FreeList<OffMeshConnection,false>::Grow(this, newCapacity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
      return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  id = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  v3 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(this->m_Data) - 56 * id - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v3->next >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&v3->next);
  }
  this->m_NextFree = v3->next;
  v4 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(this->m_Data) - 56 * id - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->next >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_store4(&v4->next);
  }
  v4->next = 0;
  return id;
};

// Line 71: range 000000000CDB9BEA-000000000CDB9CA8
// local variable allocation has failed, the output may be wrong!
void __cdecl FreeList<NavMeshLink,false>::Release(FreeList<NavMeshLink,false> *const this, unsigned int id)
{
  NavMeshLink *v2; // rax
  unsigned int m_NextFree; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&id);
  v2 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_NextFree = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = (NavMeshLink *)__asan_report_store4(&v2->next);
  }
  v2->next = m_NextFree;
  this->m_NextFree = id;
};

// Line 71: range 000000000CDC945C-000000000CDC951A
// local variable allocation has failed, the output may be wrong!
void __cdecl FreeList<NavMeshLink,true>::Release(FreeList<NavMeshLink,true> *const this, unsigned int id)
{
  NavMeshLink *v2; // rax
  unsigned int m_NextFree; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&id);
  v2 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_NextFree = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = (NavMeshLink *)__asan_report_store4(&v2->next);
  }
  v2->next = m_NextFree;
  this->m_NextFree = id;
};

// Line 71: range 000000000CDB983A-000000000CDB9908
// local variable allocation has failed, the output may be wrong!
void __cdecl FreeList<NavMeshTile,false>::Release(FreeList<NavMeshTile,false> *const this, unsigned int id)
{
  NavMeshTile *v2; // rax
  unsigned int m_NextFree; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&id);
  v2 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_NextFree = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = (NavMeshTile *)__asan_report_store4(&v2->next);
  }
  v2->next = m_NextFree;
  this->m_NextFree = id;
};

// Line 71: range 000000000CDC90AC-000000000CDC917A
// local variable allocation has failed, the output may be wrong!
void __cdecl FreeList<NavMeshTile,true>::Release(FreeList<NavMeshTile,true> *const this, unsigned int id)
{
  NavMeshTile *v2; // rax
  unsigned int m_NextFree; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&id);
  v2 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_NextFree = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = (NavMeshTile *)__asan_report_store4(&v2->next);
  }
  v2->next = m_NextFree;
  this->m_NextFree = id;
};

// Line 71: range 000000000CDBC228-000000000CDBC308
// local variable allocation has failed, the output may be wrong!
void __cdecl FreeList<OffMeshConnection,false>::Release(FreeList<OffMeshConnection,false> *const this, unsigned int id)
{
  OffMeshConnection *v2; // rdx
  unsigned int m_NextFree; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, *(_QWORD *)&id);
  v2 = &this->m_Data[id];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_NextFree = this->m_NextFree;
  if ( *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&v2->next);
  }
  v2->next = m_NextFree;
  this->m_NextFree = id;
};

// Line 83: range 000000000CD7E06C-000000000CD7E0BB
unsigned int __cdecl FreeList<NavMeshLink,false>::Capacity(const FreeList<NavMeshLink,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  return this->m_Capacity;
};

// Line 83: range 000000000CD7DFC0-000000000CD7E00F
unsigned int __cdecl FreeList<NavMeshTile,false>::Capacity(const FreeList<NavMeshTile,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  return this->m_Capacity;
};

// Line 83: range 000000000CDC8CB4-000000000CDC8D03
unsigned int __cdecl FreeList<NavMeshTile,true>::Capacity(const FreeList<NavMeshTile,true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  return this->m_Capacity;
};

// Line 83: range 000000000CDBBDDE-000000000CDBBE2D
unsigned int __cdecl FreeList<OffMeshConnection,false>::Capacity(const FreeList<OffMeshConnection,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  return this->m_Capacity;
};

// Line 85: range 000000000CDCB832-000000000CDCB9F8
void __cdecl FreeList<NavMeshLink,true>::Clear(FreeList<NavMeshLink,true> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, -16 * this->m_Capacity);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
};

// Line 85: range 000000000CDCB466-000000000CDCB645
void __cdecl FreeList<NavMeshTile,true>::Clear(FreeList<NavMeshTile,true> *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    if ( this->m_Capacity <= i )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  free_alloc_internal(this->m_Data);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, -152 * this->m_Capacity);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Data = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_NextFree = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Capacity);
  }
  this->m_Capacity = 0;
};

// Line 100: range 000000000CDCB9FA-000000000CDCBBC4
void __cdecl FreeList<NavMeshLink,true>::ClearNotResetCapacity(FreeList<NavMeshLink,true> *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  unsigned int v3; // ecx
  NavMeshLink *v4; // rax
  unsigned int v5; // edi
  char v6; // dl
  NavMeshLink *v7; // rax
  unsigned int i; // [rsp+18h] [rbp-8h]
  unsigned int last_index; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  if ( this->m_Data )
  {
    v2 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    last_index = this->m_Capacity - 1;
    for ( i = 0; last_index > i; ++i )
    {
      v3 = i + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      v4 = &this->m_Data[i];
      v5 = v3;
      v6 = *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000);
      LOBYTE(v2) = v6 != 0;
      if ( v6 != 0 && v6 <= 3 )
      {
        v5 = (_DWORD)v4 + 8;
        v4 = (NavMeshLink *)__asan_report_store4(&v4->next);
      }
      v4->next = v5;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v2);
    v7 = &this->m_Data[last_index];
    if ( *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (NavMeshLink *)__asan_report_store4(&v7->next);
    }
    v7->next = -1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->m_NextFree = 0;
  }
};

// Line 100: range 000000000CDCB646-000000000CDCB830
void __cdecl FreeList<NavMeshTile,true>::ClearNotResetCapacity(FreeList<NavMeshTile,true> *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  NavMeshTile *v3; // rax
  unsigned int v4; // edi
  char v5; // dl
  NavMeshTile *v6; // rax
  unsigned int i; // [rsp+18h] [rbp-8h]
  unsigned int last_index; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Data, v1);
  if ( this->m_Data )
  {
    v2 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_Capacity);
    }
    last_index = this->m_Capacity - 1;
    for ( i = 0; last_index > i; ++i )
    {
      v2 = i + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      v3 = &this->m_Data[i];
      v4 = i + 1;
      v5 = *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000);
      LOBYTE(v2) = v5 != 0;
      if ( v5 != 0 && v5 <= 3 )
      {
        v4 = (_DWORD)v3 + 96;
        v3 = (NavMeshTile *)__asan_report_store4(&v3->next);
      }
      v3->next = v4;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Data, v2);
    v6 = &this->m_Data[last_index];
    if ( *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (NavMeshTile *)__asan_report_store4(&v6->next);
    }
    v6->next = -1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->m_NextFree = 0;
  }
};

// Line 118: range 000000000CE4C3D0-000000000CE4C758
void __cdecl FreeList<NavMeshLink,false>::Grow(FreeList<NavMeshLink,false> *const this, unsigned int s)
{
  size_t v2; // rsi
  __int64 v3; // rsi
  NavMeshLink *v4; // rsi
  NavMeshLink *v5; // rax
  NavMeshLink *v6; // rsi
  NavMeshLink *v7; // rax
  unsigned int m_Capacity; // ecx
  unsigned int i; // [rsp+14h] [rbp-Ch]
  NavMeshLink *data; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  if ( s > this->m_Capacity )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
    {
      v2 = 16LL * s;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      data = (NavMeshLink *)realloc_internal(
                              this->m_Data,
                              v2,
                              0x10uLL,
                              kAllocateOptionNone,
                              "./src/pathfinding/Internal/NavMesh/FreeList.h",
                              122);
      if ( data )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_Data = data;
        v3 = (((_BYTE)this + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        for ( i = this->m_Capacity; i < s - 1; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v3);
          v4 = &this->m_Data[i];
          operator new(0x10uLL, v4);
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v4);
          v5 = &this->m_Data[i];
          v3 = i + 1;
          if ( *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) <= 3 )
          {
            v5 = (NavMeshLink *)__asan_report_store4(&v5->next);
          }
          v5->next = v3;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v3);
        v6 = &this->m_Data[s - 1];
        operator new(0x10uLL, v6);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v6);
        v7 = &this->m_Data[s - 1];
        if ( *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) <= 3 )
        {
          v7 = (NavMeshLink *)__asan_report_store4(&v7->next);
        }
        v7->next = -1;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        m_Capacity = this->m_Capacity;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->m_NextFree = m_Capacity;
        this->m_Capacity = s;
      }
    }
  }
};

// Line 118: range 000000000CE5979A-000000000CE59B7A
void __cdecl FreeList<NavMeshLink,true>::Grow(FreeList<NavMeshLink,true> *const this, unsigned int s)
{
  size_t v2; // rsi
  __int64 v3; // rsi
  NavMeshLink *v4; // rsi
  NavMeshLink *v5; // rax
  NavMeshLink *v6; // rsi
  NavMeshLink *v7; // rax
  unsigned int m_Capacity; // ecx
  unsigned int i; // [rsp+14h] [rbp-Ch]
  NavMeshLink *data; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  if ( s > this->m_Capacity )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
    {
      v2 = 16LL * s;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      data = (NavMeshLink *)realloc_internal(
                              this->m_Data,
                              v2,
                              0x10uLL,
                              kAllocateOptionNone,
                              "./src/pathfinding/Internal/NavMesh/FreeList.h",
                              122);
      if ( data )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, 16 * (s - this->m_Capacity));
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_Data = data;
        v3 = (((_BYTE)this + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        for ( i = this->m_Capacity; i < s - 1; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v3);
          v4 = &this->m_Data[i];
          operator new(0x10uLL, v4);
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v4);
          v5 = &this->m_Data[i];
          v3 = i + 1;
          if ( *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) <= 3 )
          {
            v5 = (NavMeshLink *)__asan_report_store4(&v5->next);
          }
          v5->next = v3;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v3);
        v6 = &this->m_Data[s - 1];
        operator new(0x10uLL, v6);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v6);
        v7 = &this->m_Data[s - 1];
        if ( *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) <= 3 )
        {
          v7 = (NavMeshLink *)__asan_report_store4(&v7->next);
        }
        v7->next = -1;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        m_Capacity = this->m_Capacity;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->m_NextFree = m_Capacity;
        this->m_Capacity = s;
      }
    }
  }
};

// Line 118: range 000000000CE4BFE6-000000000CE4C3CE
void __cdecl FreeList<NavMeshTile,false>::Grow(FreeList<NavMeshTile,false> *const this, unsigned int s)
{
  size_t v2; // rsi
  __int64 v3; // rsi
  NavMeshTile *v4; // rsi
  NavMeshTile *v5; // rax
  NavMeshTile *v6; // rax
  NavMeshTile *v7; // rsi
  NavMeshTile *v8; // rax
  NavMeshTile *v9; // rax
  unsigned int m_Capacity; // ecx
  unsigned int i; // [rsp+14h] [rbp-Ch]
  NavMeshTile *data; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  if ( s > this->m_Capacity )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
    {
      v2 = 152LL * s;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      data = (NavMeshTile *)realloc_internal(
                              this->m_Data,
                              v2,
                              0x10uLL,
                              kAllocateOptionNone,
                              "./src/pathfinding/Internal/NavMesh/FreeList.h",
                              122);
      if ( data )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_Data = data;
        v3 = (((_BYTE)this + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        for ( i = this->m_Capacity; i < s - 1; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v3);
          v4 = &this->m_Data[i];
          v5 = (NavMeshTile *)operator new(0x98uLL, v4);
          NavMeshTile::NavMeshTile(v5);
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v4);
          v6 = &this->m_Data[i];
          v3 = i + 1;
          if ( *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) <= 3 )
          {
            v6 = (NavMeshTile *)__asan_report_store4(&v6->next);
          }
          v6->next = v3;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v3);
        v7 = &this->m_Data[s - 1];
        v8 = (NavMeshTile *)operator new(0x98uLL, v7);
        NavMeshTile::NavMeshTile(v8);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v7);
        v9 = &this->m_Data[s - 1];
        if ( *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) <= 3 )
        {
          v9 = (NavMeshTile *)__asan_report_store4(&v9->next);
        }
        v9->next = -1;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        m_Capacity = this->m_Capacity;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->m_NextFree = m_Capacity;
        this->m_Capacity = s;
      }
    }
  }
};

// Line 118: range 000000000CE59356-000000000CE59799
void __cdecl FreeList<NavMeshTile,true>::Grow(FreeList<NavMeshTile,true> *const this, unsigned int s)
{
  size_t v2; // rsi
  __int64 v3; // rsi
  NavMeshTile *v4; // rsi
  NavMeshTile *v5; // rax
  NavMeshTile *v6; // rax
  NavMeshTile *v7; // rsi
  NavMeshTile *v8; // rax
  NavMeshTile *v9; // rax
  unsigned int m_Capacity; // ecx
  unsigned int i; // [rsp+14h] [rbp-Ch]
  NavMeshTile *data; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  if ( s > this->m_Capacity )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
    {
      v2 = 152LL * s;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      data = (NavMeshTile *)realloc_internal(
                              this->m_Data,
                              v2,
                              0x10uLL,
                              kAllocateOptionNone,
                              "./src/pathfinding/Internal/NavMesh/FreeList.h",
                              122);
      if ( data )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, 152 * (s - this->m_Capacity));
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_Data = data;
        v3 = (((_BYTE)this + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        for ( i = this->m_Capacity; i < s - 1; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v3);
          v4 = &this->m_Data[i];
          v5 = (NavMeshTile *)operator new(0x98uLL, v4);
          NavMeshTile::NavMeshTile(v5);
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v4);
          v6 = &this->m_Data[i];
          v3 = i + 1;
          if ( *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) <= 3 )
          {
            v6 = (NavMeshTile *)__asan_report_store4(&v6->next);
          }
          v6->next = v3;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v3);
        v7 = &this->m_Data[s - 1];
        v8 = (NavMeshTile *)operator new(0x98uLL, v7);
        NavMeshTile::NavMeshTile(v8);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v7);
        v9 = &this->m_Data[s - 1];
        if ( *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) <= 3 )
        {
          v9 = (NavMeshTile *)__asan_report_store4(&v9->next);
        }
        v9->next = -1;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        m_Capacity = this->m_Capacity;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->m_NextFree = m_Capacity;
        this->m_Capacity = s;
      }
    }
  }
};

// Line 118: range 000000000CE4F322-000000000CE4F73E
void __cdecl FreeList<OffMeshConnection,false>::Grow(FreeList<OffMeshConnection,false> *const this, unsigned int s)
{
  size_t v2; // rsi
  __int64 v3; // rsi
  OffMeshConnection *v4; // rsi
  OffMeshConnection *v5; // rax
  OffMeshConnection *v6; // rdx
  OffMeshConnection *v7; // rsi
  OffMeshConnection *v8; // rax
  OffMeshConnection *v9; // rdx
  unsigned int m_Capacity; // ecx
  unsigned int i; // [rsp+14h] [rbp-Ch]
  OffMeshConnection *data; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Capacity);
  }
  if ( s > this->m_Capacity )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->m_NextFree == -1 )
    {
      v2 = 200LL * s;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_Data, v2);
      data = (OffMeshConnection *)realloc_internal(
                                    this->m_Data,
                                    v2,
                                    0x10uLL,
                                    kAllocateOptionNone,
                                    "./src/pathfinding/Internal/NavMesh/FreeList.h",
                                    122);
      if ( data )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_Data = data;
        v3 = (((_BYTE)this + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        for ( i = this->m_Capacity; i < s - 1; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v3);
          v4 = &this->m_Data[i];
          v5 = (OffMeshConnection *)operator new(0xC8uLL, v4);
          OffMeshConnection::OffMeshConnection(v5);
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Data, v4);
          v6 = &this->m_Data[i];
          v3 = i + 1;
          if ( *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(this->m_Data) - 56 * i - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->next >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_store4(&v6->next);
          }
          v6->next = v3;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v3);
        v7 = &this->m_Data[s - 1];
        v8 = (OffMeshConnection *)operator new(0xC8uLL, v7);
        OffMeshConnection::OffMeshConnection(v8);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Data, v7);
        v9 = &this->m_Data[s - 1];
        if ( *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v9 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&v9->next);
        }
        v9->next = -1;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Capacity >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->m_Capacity);
        }
        m_Capacity = this->m_Capacity;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->m_NextFree = m_Capacity;
        this->m_Capacity = s;
      }
    }
  }
};
