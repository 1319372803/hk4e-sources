// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/BaseClasses/AttributeContainer.cpp

// Line 7: range 000000000CB76F8C-000000000CB76FF9
const ConstVariantRef *__cdecl Unity::TypeAttributesIterator::GetCurrent(
        const Unity::TypeAttributesIterator *const this)
{
  __int64 v1; // rsi
  const Unity::Type *m_Type; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  m_Type = this->m_Type;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CurrentAttributeIndex >> 3) + 0x7FFF8000) )
    m_Type = (const Unity::Type *)__asan_report_load8(&this->m_CurrentAttributeIndex, v1);
  return Unity::Type::GetAttribute(m_Type, this->m_CurrentAttributeIndex);
};
