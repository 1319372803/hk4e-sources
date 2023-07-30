// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/challenge/gcg_challenge.h

// Line 20: range 000000000E2BA6FC-000000000E2BA855
void __cdecl GCGChallenge::GCGChallenge(GCGChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id_);
  }
  this->challenge_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_type_);
  }
  this->challenge_type_ = GCG_CHALLENGE_NONE;
  std::vector<unsigned int>::vector(&this->param_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_progress_);
  }
  this->cur_progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_progress_);
  }
  this->total_progress_ = 0;
};

// Line 20: range 000000000E2BA856-000000000E2BA8A7
void __cdecl GCGChallenge::~GCGChallenge(GCGChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  std::vector<unsigned int>::~vector(&this->param_vec_);
};

// Line 23: range 000000000DF45AD8-000000000DF45B27
data::GCGChallengeType __cdecl GCGChallenge::getChallengeType(GCGChallenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_type_);
  }
  return this->challenge_type_;
};

// Line 26: range 000000000E1D4FC6-000000000E1D4FD0
void __cdecl GCGChallenge::init(GCGChallenge *const this)
{
  ;
};

// Line 34: range 000000000DF45B28-000000000DF45B6F
uint32_t __cdecl GCGChallenge::getProgress(const GCGChallenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  return this->cur_progress_;
};

// Line 44: range 000000000DF45B70-000000000DF45BB7
uint32_t __cdecl GCGChallenge::getChallengeId(const GCGChallenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_id_);
  }
  return this->challenge_id_;
};

// Line 52: range 000000000E2BA8A8-000000000E2BA8F5
void __cdecl GCGChallengeWin::GCGChallengeWin(GCGChallengeWin *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeWin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 52: range 000000000E2E8378-000000000E2E83C5
void __cdecl GCGChallengeWin::~GCGChallengeWin(GCGChallengeWin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeWin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 59: range 000000000E2BABC2-000000000E2BAC0F
void __cdecl GCGChallengeCharacterAliveNum::GCGChallengeCharacterAliveNum(GCGChallengeCharacterAliveNum *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeCharacterAliveNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 59: range 000000000E2E82FC-000000000E2E8349
void __cdecl GCGChallengeCharacterAliveNum::~GCGChallengeCharacterAliveNum(GCGChallengeCharacterAliveNum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeCharacterAliveNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 66: range 000000000E2BAEDC-000000000E2BAF29
void __cdecl GCGChallengeBeingHealSum::GCGChallengeBeingHealSum(GCGChallengeBeingHealSum *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeBeingHealSum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 66: range 000000000E2E8280-000000000E2E82CD
void __cdecl GCGChallengeBeingHealSum::~GCGChallengeBeingHealSum(GCGChallengeBeingHealSum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeBeingHealSum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 73: range 000000000E2BB1F6-000000000E2BB243
void __cdecl GCGChallengeShieldReduceSum::GCGChallengeShieldReduceSum(GCGChallengeShieldReduceSum *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeShieldReduceSum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 73: range 000000000E2E8204-000000000E2E8251
void __cdecl GCGChallengeShieldReduceSum::~GCGChallengeShieldReduceSum(GCGChallengeShieldReduceSum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeShieldReduceSum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 80: range 000000000E2BB510-000000000E2BB55D
void __cdecl GCGChallengeElementReactionTimes::GCGChallengeElementReactionTimes(
        GCGChallengeElementReactionTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeElementReactionTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 80: range 000000000E2E8188-000000000E2E81D5
void __cdecl GCGChallengeElementReactionTimes::~GCGChallengeElementReactionTimes(
        GCGChallengeElementReactionTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeElementReactionTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 87: range 000000000E2BB82A-000000000E2BB877
void __cdecl GCGChallengeOneHitDamageTimes::GCGChallengeOneHitDamageTimes(GCGChallengeOneHitDamageTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeOneHitDamageTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 87: range 000000000E2E810C-000000000E2E8159
void __cdecl GCGChallengeOneHitDamageTimes::~GCGChallengeOneHitDamageTimes(GCGChallengeOneHitDamageTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeOneHitDamageTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 94: range 000000000E2BBB44-000000000E2BBB91
void __cdecl GCGChallengePlayCardTimes::GCGChallengePlayCardTimes(GCGChallengePlayCardTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengePlayCardTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 94: range 000000000E2E8090-000000000E2E80DD
void __cdecl GCGChallengePlayCardTimes::~GCGChallengePlayCardTimes(GCGChallengePlayCardTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengePlayCardTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 101: range 000000000E2BBE5E-000000000E2BBEAB
void __cdecl GCGChallengeSummonTimes::GCGChallengeSummonTimes(GCGChallengeSummonTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeSummonTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 101: range 000000000E2E8014-000000000E2E8061
void __cdecl GCGChallengeSummonTimes::~GCGChallengeSummonTimes(GCGChallengeSummonTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeSummonTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 108: range 000000000E2BC178-000000000E2BC1C5
void __cdecl GCGChallengeSettleWithSkillTagQTimes::GCGChallengeSettleWithSkillTagQTimes(
        GCGChallengeSettleWithSkillTagQTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeSettleWithSkillTagQTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 108: range 000000000E2E7F98-000000000E2E7FE5
void __cdecl GCGChallengeSettleWithSkillTagQTimes::~GCGChallengeSettleWithSkillTagQTimes(
        GCGChallengeSettleWithSkillTagQTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeSettleWithSkillTagQTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 115: range 000000000E2BC492-000000000E2BC4DF
void __cdecl GCGChallengeOneOperationKillCountTimes::GCGChallengeOneOperationKillCountTimes(
        GCGChallengeOneOperationKillCountTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeOneOperationKillCountTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 115: range 000000000E2E7F1C-000000000E2E7F69
void __cdecl GCGChallengeOneOperationKillCountTimes::~GCGChallengeOneOperationKillCountTimes(
        GCGChallengeOneOperationKillCountTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeOneOperationKillCountTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 122: range 000000000E2BC7AC-000000000E2BC7F9
void __cdecl GCGChallengeDeadCharacterNum::GCGChallengeDeadCharacterNum(GCGChallengeDeadCharacterNum *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeDeadCharacterNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 122: range 000000000E2E7EA0-000000000E2E7EED
void __cdecl GCGChallengeDeadCharacterNum::~GCGChallengeDeadCharacterNum(GCGChallengeDeadCharacterNum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeDeadCharacterNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 129: range 000000000E2BCAC6-000000000E2BCB13
void __cdecl GCGChallengeRoundNum::GCGChallengeRoundNum(GCGChallengeRoundNum *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeRoundNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 129: range 000000000E2E7E24-000000000E2E7E71
void __cdecl GCGChallengeRoundNum::~GCGChallengeRoundNum(GCGChallengeRoundNum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeRoundNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 136: range 000000000E2BCDE0-000000000E2BCE2D
void __cdecl GCGChallengeReactionWithTargetElementTimes::GCGChallengeReactionWithTargetElementTimes(
        GCGChallengeReactionWithTargetElementTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeReactionWithTargetElementTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 136: range 000000000E2E7DA8-000000000E2E7DF5
void __cdecl GCGChallengeReactionWithTargetElementTimes::~GCGChallengeReactionWithTargetElementTimes(
        GCGChallengeReactionWithTargetElementTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeReactionWithTargetElementTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 143: range 000000000E2BD0FA-000000000E2BD147
void __cdecl GCGChallengeSkillTagQTimes::GCGChallengeSkillTagQTimes(GCGChallengeSkillTagQTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeSkillTagQTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 143: range 000000000E2E7D2C-000000000E2E7D79
void __cdecl GCGChallengeSkillTagQTimes::~GCGChallengeSkillTagQTimes(GCGChallengeSkillTagQTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeSkillTagQTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 150: range 000000000E2BD414-000000000E2BD461
void __cdecl GCGChallengeSummonTimesEqualOrLargeThanParam::GCGChallengeSummonTimesEqualOrLargeThanParam(
        GCGChallengeSummonTimesEqualOrLargeThanParam *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengeSummonTimesEqualOrLargeThanParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
};

// Line 150: range 000000000E2E7CB0-000000000E2E7CFD
void __cdecl GCGChallengeSummonTimesEqualOrLargeThanParam::~GCGChallengeSummonTimesEqualOrLargeThanParam(
        GCGChallengeSummonTimesEqualOrLargeThanParam *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengeSummonTimesEqualOrLargeThanParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  GCGChallenge::~GCGChallenge(this);
};

// Line 157: range 000000000E2BD72E-000000000E2BD79B
void __cdecl GCGChallengePlayCardWithTagTimes::GCGChallengePlayCardWithTagTimes(
        GCGChallengePlayCardWithTagTimes *const this)
{
  int (**v1)(...); // rdx

  GCGChallenge::GCGChallenge(this);
  v1 = (int (**)(...))(&`vtable for'GCGChallengePlayCardWithTagTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  std::set<unsigned int>::set(&this->valid_card_type_set);
  std::set<unsigned int>::set(&this->valid_card_tag_set);
};

// Line 157: range 000000000E2E7C14-000000000E2E7C81
void __cdecl GCGChallengePlayCardWithTagTimes::~GCGChallengePlayCardWithTagTimes(
        GCGChallengePlayCardWithTagTimes *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGChallengePlayCardWithTagTimes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGChallenge = v1;
  std::set<unsigned int>::~set(&this->valid_card_tag_set);
  std::set<unsigned int>::~set(&this->valid_card_type_set);
  GCGChallenge::~GCGChallenge(this);
};
