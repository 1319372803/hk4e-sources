// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializationCaching/CacheReaderBase.h

// Line 7: range 000000000CD6E732-000000000CD6E773
void __cdecl CacheReaderBase::CacheReaderBase(CacheReaderBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CacheReaderBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_CacheReaderBase = v1;
};
