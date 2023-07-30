// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/skill/skill_comp.h

// Line 21: range 00000000183271A8-0000000018327225
void __cdecl SkillComp::~SkillComp(SkillComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SkillComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,proto::AvatarSkillBin>::~unordered_map(&this->cached_skill_bin_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->depot_skill_level_map_);
  std::map<unsigned int,std::shared_ptr<Skill>>::~map(&this->skill_map_);
  AvatarCompBase::~AvatarCompBase(this);
};

// Line 21: range 0000000018327226-0000000018327250
void __cdecl SkillComp::~SkillComp(SkillComp *const this)
{
  SkillComp::~SkillComp(this);
  operator delete(this, 0xB0uLL);
};

// Line 27: range 0000000013CCBA86-0000000013CCBB4C
void __cdecl ZN9SkillCompCI214AvatarCompBaseER6Avatar(SkillComp *const this, Avatar *a2)
{
  int (**v2)(...); // rdx

  AvatarCompBase::AvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SkillComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_used_skill_id_, a2, (_BYTE)this + 16);
  }
  this->last_used_skill_id_ = 0;
  std::map<unsigned int,std::shared_ptr<Skill>>::map(&this->skill_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->depot_skill_level_map_);
  std::unordered_map<unsigned int,proto::AvatarSkillBin>::unordered_map(&this->cached_skill_bin_map_);
};

// Line 103: range 0000000013843D64-0000000013843D75
const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__cdecl SkillComp::getDepotSkillLevelMap(
        const SkillComp *const this)
{
  return &this->depot_skill_level_map_;
};

// Line 106: range 0000000016915170-00000000169151B7
uint32_t __cdecl SkillComp::getLastUsedSkillId(const SkillComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->last_used_skill_id_;
};
