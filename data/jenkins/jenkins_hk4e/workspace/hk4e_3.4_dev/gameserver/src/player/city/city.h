// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/city/city.h

// Line 28: range 0000000015D3791E-0000000015D379FB
void __cdecl City::City(City *const this, uint32_t city_id)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->city_id_ = city_id;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->level_, (((_BYTE)this + 4) & 7u) + 3, v3);
  this->level_ = 1;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->crystal_num_, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->crystal_num_ = 0;
};

// Line 33: range 0000000013EBF2F2-0000000013EBF33C
uint32_t __cdecl City::getCityId(const City *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->city_id_;
};

// Line 34: range 00000000131E50EE-00000000131E513D
uint32_t __cdecl City::getLevel(const City *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 35: range 0000000013EBF33E-0000000013EBF38D
uint32_t __cdecl City::getCrystalNum(const City *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->crystal_num_);
  }
  return this->crystal_num_;
};
