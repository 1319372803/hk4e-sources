// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializationCaching/CacheReaderBase.cpp

// Line 4: range 000000000CC90740-000000000CC90781
void __cdecl CacheReaderBase::~CacheReaderBase(CacheReaderBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CacheReaderBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_CacheReaderBase = v1;
};

// Line 4: range 000000000CC90782-000000000CC907AC
void __cdecl CacheReaderBase::~CacheReaderBase(CacheReaderBase *const this)
{
  CacheReaderBase::~CacheReaderBase(this);
  operator delete(this, 8uLL);
};

// Line 8: range 000000000CC907AE-000000000CC90834
uint8_t *__cdecl CacheReaderBase::GetAddressOfMemory(CacheReaderBase *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/pathfinding/Internal/Serialize/SerializationCaching/CacheReaderBase.cpp",
    "GetAddressOfMemory",
    9);
  common::milog::MiLogStream::operator()(&v2, "GetAddressOfMemory called on CacheReaderBase which does not support it");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return 0LL;
};
