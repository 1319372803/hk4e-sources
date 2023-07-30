// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/BaseClasses/TypeInfoManager.h

// Line 21: range 000000000CD6E016-000000000CD6E058
TypeManager *__cdecl TypeManager::Get()
{
  __int64 v0; // rdi

  if ( !TypeManager::ms_Instance )
  {
    __asan_handle_no_return(v0);
    __assert_fail(
      "ms_Instance != __null",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.h",
      0x17u,
      "static TypeManager& TypeManager::Get()");
  }
  return TypeManager::ms_Instance;
};

// Line 61: range 000000000CD6E05A-000000000CD6E0FE
void __cdecl TypeManager::TypeCallbackStruct::TypeCallbackStruct(TypeManager::TypeCallbackStruct *const this)
{
  TypeCallback *cleanupType; // rdx
  TypeCallback *postInitType; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->cleanupType >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->cleanupType = 0LL;
  cleanupType = this->cleanupType;
  if ( *(_BYTE *)(((unsigned __int64)&this->postInitType >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->postInitType = cleanupType;
  postInitType = this->postInitType;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->initType = postInitType;
};

// Line 69: range 000000000CD6E100-000000000CD6E195
size_t __cdecl TypeManager::HashFunctorPersistentTypeID::operator()(
        const TypeManager::HashFunctorPersistentTypeID *const this,
        PersistentTypeID data)
{
  unsigned int v3; // [rsp+18h] [rbp-4h]
  unsigned int v4; // [rsp+18h] [rbp-4h]

  v3 = 33 * ((4097 * data + 2127912214) ^ ((unsigned int)(4097 * data + 2127912214) >> 19) ^ 0xC761C23C) + 374761393;
  v4 = 9 * ((v3 - 744332180) ^ (v3 << 9)) - 42973499;
  return v4 ^ HIWORD(v4) ^ 0xB55A4F09;
};

// Line 77: range 000000000CD6E196-000000000CD6E1B5
size_t __cdecl TypeManager::ConstCharPtrHashFunctor::operator()(
        const TypeManager::ConstCharPtrHashFunctor *const this,
        const char *str)
{
  return ComputeShortStringHash32(str);
};

// Line 85: range 000000000CD6E1B6-000000000CD6E206
bool __cdecl TypeManager::ConstCharPtrEqualTo::operator()(
        const TypeManager::ConstCharPtrEqualTo *const this,
        const char *a,
        const char *b)
{
  return a == b || a && b && !strcmp(a, b);
};
