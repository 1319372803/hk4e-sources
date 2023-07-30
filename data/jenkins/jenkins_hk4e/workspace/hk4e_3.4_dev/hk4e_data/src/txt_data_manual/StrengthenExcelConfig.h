// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/StrengthenExcelConfig.h

// Line 21: range 000000000CE01CCC-000000000CE01DAD
void __cdecl StrengthenPointIndex::StrengthenPointIndex(
        StrengthenPointIndex *const this,
        data::StrengthenPointType type,
        uint32_t rank_level,
        uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank_level, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->rank_level = rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->level = level;
};

// Line 34: range 000000000CE01DAE-000000000CE01ECB
std::size_t __cdecl std::hash<StrengthenPointIndex>::operator()(
        const std::hash<StrengthenPointIndex> *const this,
        const StrengthenPointIndex *index)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(index);
  }
  v3 = 1000000007 * (v2 + (unsigned int)index->type);
  if ( *(_BYTE *)(((unsigned __int64)&index->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&index->rank_level);
  }
  v4 = 1000000007 * (v3 + index->rank_level);
  if ( *(_BYTE *)(((unsigned __int64)&index->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)index + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&index->level);
  }
  return v4 + index->level;
};

// Line 47: range 000000000CE01ECC-000000000CE02086
bool __cdecl std::equal_to<StrengthenPointIndex>::operator()(
        const std::equal_to<StrengthenPointIndex> *const this,
        const StrengthenPointIndex *lhs,
        const StrengthenPointIndex *rhs)
{
  data::StrengthenPointType type; // ecx
  uint32_t rank_level; // ecx
  uint32_t level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  type = lhs->type;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( type != rhs->type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->rank_level);
  }
  rank_level = lhs->rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->rank_level);
  }
  if ( rank_level != rhs->rank_level )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->level);
  }
  level = lhs->level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->level);
  }
  return level == rhs->level;
};
