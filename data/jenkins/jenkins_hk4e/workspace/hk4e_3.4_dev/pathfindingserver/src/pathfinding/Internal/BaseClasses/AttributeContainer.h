// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/BaseClasses/AttributeContainer.h

// Line 123: range 000000000CD6EF5E-000000000CD6EFD1
void __cdecl Unity::TypeAttributes::TypeAttributes(
        Unity::TypeAttributes *const this,
        const Unity::Type *type,
        size_t attributeCount)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Type = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_AttributeCount >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_AttributeCount = attributeCount;
};
