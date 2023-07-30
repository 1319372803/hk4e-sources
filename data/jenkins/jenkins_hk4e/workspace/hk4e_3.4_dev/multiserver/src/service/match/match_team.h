// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_team.h

// Line 21: range 000000000D83093E-000000000D83099F
void __cdecl MatchTeam::~MatchTeam(MatchTeam *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::~unordered_map(&this->match_unit_map_);
  std::enable_shared_from_this<MatchTeam>::~enable_shared_from_this(&this->std::enable_shared_from_this<MatchTeam>);
};

// Line 26: range 000000000D8308C6-000000000D8308E3
uint32_t __cdecl MatchTeam::getMatchUnitCount(const MatchTeam *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::size(&this->match_unit_map_);
};

// Line 26: range 000000000D83081A-000000000D8308C5
void __cdecl MatchTeam::MatchTeam(MatchTeam *const this)
{
  int (**v1)(...); // rdx

  std::enable_shared_from_this<MatchTeam>::enable_shared_from_this(&this->std::enable_shared_from_this<MatchTeam>);
  common::milog::DescribalBase::DescribalBase(this);
  v1 = (int (**)(...))(&`vtable for'MatchTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time_);
  }
  this->create_time_ = 0;
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::unordered_map(&this->match_unit_map_);
};

// Line 67: range 000000000D8308E4-000000000D8308F5
std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__cdecl MatchTeam::getMatchUnitMap(
        MatchTeam *const this)
{
  return &this->match_unit_map_;
};

// Line 79: range 000000000D8308F6-000000000D83093D
uint32_t __cdecl MatchTeam::getCreateTime(const MatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time_);
  }
  return this->create_time_;
};
