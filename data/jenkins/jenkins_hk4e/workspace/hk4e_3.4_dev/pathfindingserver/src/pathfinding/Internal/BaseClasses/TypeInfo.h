// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/BaseClasses/TypeInfo.h

// Line 213: range 000000000CD6DF90-000000000CD6DFCA
size_t __cdecl Unity::Type::GetAttributeCount(const Unity::Type *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_internal.attributeCount >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_internal.attributeCount, v1);
  return this->m_internal.attributeCount;
};

// Line 214: range 000000000CD6DFCC-000000000CD6E015
const ConstVariantRef *__cdecl Unity::Type::GetAttribute(const Unity::Type *const this, size_t idx)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_internal.attributes >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_internal.attributes, idx);
  return &this->m_internal.attributes[idx];
};
