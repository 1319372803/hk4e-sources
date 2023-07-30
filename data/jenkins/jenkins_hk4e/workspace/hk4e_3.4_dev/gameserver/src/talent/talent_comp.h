// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/talent_comp.h

// Line 35: range 0000000014B7B012-0000000014B7B084
void __cdecl SkillDepot::~SkillDepot(SkillDepot *const this)
{
  std::vector<unsigned int>::~vector(&this->bin_proud_skill_vec);
  std::vector<unsigned int>::~vector(&this->bin_talent_vec);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::~map(&this->skill_talent_map);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::~map(&this->proud_skill_map);
  std::shared_ptr<BaseTalent>::~shared_ptr(&this->core_proud_skill_ptr);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::~map(&this->unlocked_talent_map);
};

// Line 67: range 0000000014D2494A-0000000014D249D9
void __cdecl TalentComp::~TalentComp(TalentComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<std::string,std::shared_ptr<BaseTalent>>::~map(&this->dynamic_talent_map_);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::~map(&this->team_resonance_talent_map_);
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::~map(&this->team_talent_map_);
  std::map<unsigned int,SkillDepot>::~map(&this->skill_depot_map_);
  AvatarCompBase::~AvatarCompBase(this);
};

// Line 67: range 0000000014D249DA-0000000014D24A04
void __cdecl TalentComp::~TalentComp(TalentComp *const this)
{
  TalentComp::~TalentComp(this);
  operator delete(this, 0xD0uLL);
};

// Line 73: range 0000000013CCC0F8-0000000013CCC192
void __cdecl ZN10TalentCompCI214AvatarCompBaseER6Avatar(TalentComp *const this, Avatar *a2)
{
  int (**v2)(...); // rdx

  AvatarCompBase::AvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'TalentComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,SkillDepot>::map(&this->skill_depot_map_);
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::map(&this->team_talent_map_);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::map(&this->team_resonance_talent_map_);
  std::map<std::string,std::shared_ptr<BaseTalent>>::map(&this->dynamic_talent_map_);
};

// Line 213: range 0000000013843D76-0000000013843D87
const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__cdecl TalentComp::getTeamResonanceTalentMap(
        const TalentComp *const this)
{
  return &this->team_resonance_talent_map_;
};

// Line 234: range 00000000149F1AE2-00000000149F1AF3
std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *__cdecl TalentComp::getTeamTalentMap(
        TalentComp *const this)
{
  return &this->team_talent_map_;
};

// Line 353: range 0000000014C34082-0000000014C34170
void __cdecl SkillDepot::SkillDepot(SkillDepot *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->depot_id = 0;
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::map(&this->unlocked_talent_map);
  std::shared_ptr<BaseTalent>::shared_ptr(&this->core_proud_skill_ptr);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::map(&this->proud_skill_map);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::map(&this->skill_talent_map);
  std::vector<unsigned int>::vector(&this->bin_talent_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bin_core_proud_skill_level, v1, (_BYTE)this - 64);
  }
  this->bin_core_proud_skill_level = 0;
  std::vector<unsigned int>::vector(&this->bin_proud_skill_vec);
};
