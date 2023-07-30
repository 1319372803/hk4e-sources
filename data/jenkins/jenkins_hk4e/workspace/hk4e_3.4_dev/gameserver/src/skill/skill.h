// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/skill/skill.h

// Line 34: range 00000000138453BC-00000000138453DA
void __cdecl SkillStartParam::~SkillStartParam(SkillStartParam *const this)
{
  ActionParam::~ActionParam(&this->ability_action_param);
};

// Line 42: range 000000001837BB20-000000001837BB3E
void __cdecl Skill::~Skill(Skill *const this)
{
  std::list<unsigned int>::~list(&this->full_cd_time_list_);
};

// Line 45: range 00000000180AEE90-00000000180AF167
// local variable allocation has failed, the output may be wrong!
void __cdecl Skill::Skill(Skill *const this, uint32_t skill_id, Avatar *avatar)
{
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl
  bool v9; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&skill_id, (_BYTE)this);
  }
  this->skill_id_ = skill_id;
  v3 = (((_BYTE)this + 4) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->type_, v3, v4);
  this->type_ = SKILL_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->slot_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slot_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slot_, v3, (_BYTE)this + 8);
  }
  this->slot_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cd_start_time_ms_, v3);
  this->cd_start_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pass_cd_time_ms_, v3, (_BYTE)this + 24);
  }
  this->pass_cd_time_ms_ = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3)
                                                        + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->max_charge_count_delta_, v5, v6);
  this->max_charge_count_delta_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_, v5);
  this->avatar_ = avatar;
  std::list<unsigned int>::list(&this->full_cd_time_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_time_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_time_delta_, v5, (_BYTE)this + 64);
  }
  this->cd_time_delta_ = 0.0;
  v7 = (((_BYTE)this + 68) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cd_time_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_time_ratio_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->cd_time_ratio_, v7, v8);
  this->cd_time_ratio_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_elem_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_elem_delta_, v7, (_BYTE)this + 72);
  }
  this->cost_elem_delta_ = 0.0;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cost_elem_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_elem_ratio_ >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->cost_elem_ratio_, (((_BYTE)this + 76) & 7u) + 3, v9);
  this->cost_elem_ratio_ = 0.0;
};

// Line 95: range 00000000180AF168-00000000180AF1AA
uint32_t __cdecl Skill::getSkillId(const Skill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->skill_id_;
};

// Line 96: range 00000000160507D0-000000001605081F
SkillType __cdecl Skill::getType(const Skill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->type_;
};

// Line 96: range 00000000180AF1AC-00000000180AF202
void __cdecl Skill::setType(Skill *const this, SkillType type__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->type_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->type_ = type__out;
};

// Line 97: range 00000000180AF204-00000000180AF24B
uint32_t __cdecl Skill::getSlot(const Skill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->slot_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slot_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->slot_;
};

// Line 97: range 00000000180AF24C-00000000180AF29A
// local variable allocation has failed, the output may be wrong!
void __cdecl Skill::setSlot(Skill *const this, uint32_t slot__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->slot_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slot_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slot_, *(_QWORD *)&slot__out, (_BYTE)this + 8);
  }
  this->slot_ = slot__out;
};

// Line 98: range 0000000017D690B2-0000000017D690EC
uint64_t __cdecl Skill::getCdStartTime(const Skill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->cd_start_time_ms_;
};

// Line 99: range 0000000017D690EE-0000000017D69135
uint32_t __cdecl Skill::getPassCdTime(const Skill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->pass_cd_time_ms_;
};

// Line 100: range 00000000180AF29C-00000000180AF2EB
int32_t __cdecl Skill::getMaxChargeCountDelta(const Skill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->max_charge_count_delta_;
};
