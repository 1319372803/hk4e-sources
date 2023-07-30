// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/BaseClasses/TypeInfo.cpp

// Line 12: range 000000000CB76FFA-000000000CB7702B
const Unity::Type *__cdecl Unity::Type::FindTypeByName(const char *name, Unity::Type::CaseSensitivityOptions options)
{
  TypeManager *v2; // rcx

  v2 = TypeManager::Get();
  return (const Unity::Type *)TypeManager::ClassNameToRTTI(v2, name, options == kCaseInSensitive);
};

// Line 17: range 000000000CB7702C-000000000CB7704D
const Unity::Type *__cdecl Unity::Type::FindTypeByPersistentTypeID(PersistentTypeID id)
{
  TypeManager *v1; // rax

  v1 = TypeManager::Get();
  return (const Unity::Type *)TypeManager::PersistentTypeIDToRTTI(v1, id);
};

// Line 22: range 000000000CB7704E-000000000CB7706F
const Unity::Type *__cdecl Unity::Type::GetDeserializationStubForPersistentTypeID(PersistentTypeID id)
{
  TypeManager *v1; // rax

  v1 = TypeManager::Get();
  return (const Unity::Type *)TypeManager::GetDeserializationRTTIStubForPersistentTypeID(v1, id);
};

// Line 27: range 000000000CB77070-000000000CB770A7
void __cdecl Unity::Type::FindAllDerivedClasses(
        const Unity::Type *const this,
        dynamic_array<const Unity::Type*,false,8> *result,
        Unity::Type::TypeFilterOptions options)
{
  TypeManager *v3; // rdi

  v3 = TypeManager::Get();
  TypeManager::FindAllRTTIDerivedTypes(
    v3,
    &this->m_internal,
    (dynamic_array<const RTTI*,false,8> *)result,
    options == kOnlyNonAbstract);
};

// Line 32: range 000000000CB770A8-000000000CB77111
void __cdecl Unity::Type::GetAttributes(const Unity::Type *const this, Unity::TypeAttributes *result)
{
  size_t AttributeCount; // rax
  size_t m_AttributeCount; // rdx
  Unity::TypeAttributes v4; // [rsp+10h] [rbp-10h] BYREF

  AttributeCount = Unity::Type::GetAttributeCount(this);
  Unity::TypeAttributes::TypeAttributes(&v4, this, AttributeCount);
  if ( *(_WORD *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
    __asan_report_store16(result, this);
  m_AttributeCount = v4.m_AttributeCount;
  result->m_Type = v4.m_Type;
  result->m_AttributeCount = m_AttributeCount;
};
