// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/challenge_condition.h

// Line 45: range 00000000158AEFF0-00000000158AF01A
void __cdecl ChallengeCondition::~ChallengeCondition(ChallengeCondition *const this)
{
  ChallengeCondition::~ChallengeCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 45: range 00000000158AEFAE-00000000158AEFEF
void __cdecl ChallengeCondition::~ChallengeCondition(ChallengeCondition *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
};

// Line 50: range 0000000014F78B96-0000000014F78BE5
data::ChallengeCondType __cdecl ChallengeCondition::challengeCondType(const ChallengeCondition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_cond_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_cond_type_);
  }
  return this->challenge_cond_type_;
};

// Line 53: range 00000000155B7634-00000000155B7642
uint32_t __cdecl ChallengeCondition::getProgress(const ChallengeCondition *const this)
{
  return 0;
};

// Line 56: range 00000000155B7644-00000000155B7652
void __cdecl ChallengeCondition::notifyChallengeData(ChallengeCondition *const this, PlayerPtr *p_player_ptr)
{
  ;
};

// Line 59: range 0000000014F78BE6-0000000014F78C4A
bool __cdecl ChallengeCondition::isFinished(const ChallengeCondition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_cond_state_);
  }
  return this->challenge_cond_state_ == CHALLENGE_COND_STATE_MEET_FINISHED
      || this->challenge_cond_state_ == CHALLENGE_COND_STATE_NOT_MEET;
};

// Line 62: range 0000000014F78C4C-0000000014F78CB0
bool __cdecl ChallengeCondition::isMeet(const ChallengeCondition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_cond_state_);
  }
  return this->challenge_cond_state_ == CHALLENGE_COND_STATE_MEET
      || this->challenge_cond_state_ == CHALLENGE_COND_STATE_MEET_FINISHED;
};

// Line 65: range 00000000155B7654-00000000155B7665
bool __cdecl ChallengeCondition::isRecordTypeMatch(const ChallengeCondition *const this, uint32_t record_type)
{
  return 0;
};

// Line 69: range 00000000155B7666-00000000155B7677
bool __cdecl ChallengeCondition::isNeedRecord(const ChallengeCondition *const this, uint32_t cur_progress)
{
  return 0;
};

// Line 72: range 00000000155B7678-00000000155B7692
int32_t __cdecl ChallengeCondition::relaxTimeRestriction(
        ChallengeCondition *const this,
        uint32_t relax_secs,
        const ChallengeRelaxTimeType *relax_time_type,
        bool can_exceed_limit)
{
  return -1;
};

// Line 75: range 00000000155B7694-00000000155B76A6
bool __cdecl ChallengeCondition::checkAndGetLeftTime(ChallengeCondition *const this, uint32_t *left_time)
{
  return 0;
};

// Line 78: range 00000000155B76A8-00000000155B76BA
void __cdecl ChallengeCondition::onMonsterDie(
        ChallengeCondition *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  ;
};

// Line 81: range 00000000155B76BC-00000000155B76CA
void __cdecl ChallengeCondition::onTimer(ChallengeCondition *const this, uint64_t now_ms)
{
  ;
};

// Line 84: range 00000000155B76CC-00000000155B76DE
void __cdecl ChallengeCondition::onAvatarDie(ChallengeCondition *const this, ChangeHpContext *context, Avatar *avatar)
{
  ;
};

// Line 87: range 00000000155B76E0-00000000155B76EA
void __cdecl ChallengeCondition::onAvatarDown(ChallengeCondition *const this)
{
  ;
};

// Line 90: range 00000000155B76EC-00000000155B76F6
void __cdecl ChallengeCondition::onAvatarBeaten(ChallengeCondition *const this)
{
  ;
};

// Line 93: range 00000000155B76F8-00000000155B7702
void __cdecl ChallengeCondition::onAvatarFrozen(ChallengeCondition *const this)
{
  ;
};

// Line 96: range 00000000155B7704-00000000155B7716
void __cdecl ChallengeCondition::onGadgetHpPercentChange(
        ChallengeCondition *const this,
        Gadget *gadget,
        const ChangeHpContext *change_hp_context)
{
  ;
};

// Line 99: range 00000000155B7718-00000000155B7722
void __cdecl ChallengeCondition::onChallengeBegin(ChallengeCondition *const this)
{
  ;
};

// Line 102: range 00000000155B7724-00000000155B7736
void __cdecl ChallengeCondition::onTriggerFired(
        ChallengeCondition *const this,
        const std::vector<data::EventType> *trigger_event_vec,
        const std::string *trigger_source)
{
  ;
};

// Line 105: range 00000000155B7738-00000000155B774B
void __cdecl ChallengeCondition::onChildSettle(
        ChallengeCondition *const this,
        bool is_succ,
        const Challenge *child_challenge)
{
  ;
};

// Line 108: range 00000000155B774C-00000000155B7761
void __cdecl ChallengeCondition::onModifyProperty(
        ChallengeCondition *const this,
        data::FatherChallengeProperty property_type,
        int32_t mod_value,
        bool can_exceed_limit)
{
  ;
};

// Line 111: range 00000000155B7762-00000000155B776F
void __cdecl ChallengeCondition::onSetDuration(ChallengeCondition *const this, uint32_t left_time)
{
  ;
};

// Line 114: range 00000000155B7770-00000000155B7786
void __cdecl ChallengeCondition::onCreatureHurt(
        ChallengeCondition *const this,
        Creature *attacker,
        Creature *defenser,
        HurtContext *context)
{
  ;
};

// Line 117: range 00000000155B7788-00000000155B779B
void __cdecl ChallengeCondition::onShieldAbsorbDamage(
        ChallengeCondition *const this,
        CreaturePtr *p_actor_ptr,
        float delta_damage)
{
  ;
};

// Line 120: range 00000000155B779C-00000000155B77AD
void __cdecl ChallengeCondition::onTriggerElementReaction(
        ChallengeCondition *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  ;
};

// Line 123: range 00000000155B77AE-00000000155B77BB
void __cdecl ChallengeCondition::onAddChallengeProgress(ChallengeCondition *const this, uint32_t count)
{
  ;
};

// Line 126: range 00000000155B77BC-00000000155B77F2
std::pair<unsigned int,unsigned int> __cdecl ChallengeCondition::getTriggerFireCountAndLimit(
        const ChallengeCondition *const this)
{
  int __x; // [rsp+10h] [rbp-10h] BYREF
  int __y; // [rsp+14h] [rbp-Ch] BYREF
  std::pair<unsigned int,unsigned int> v4; // [rsp+18h] [rbp-8h] BYREF

  __x = 0;
  __y = 0;
  std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v4, &__x, &__y);
  return v4;
};

// Line 129: range 00000000155B77F4-00000000155B7802
uint32_t __cdecl ChallengeCondition::getTimestamp(const ChallengeCondition *const this)
{
  return 0;
};

// Line 131: range 00000000155B7804-00000000155B7846
std::tuple<long unsigned int,long unsigned int,long unsigned int> *__cdecl ChallengeCondition::getTimeInfo(
        std::tuple<long unsigned int,long unsigned int,long unsigned int> *retstr,
        const ChallengeCondition *const this)
{
  int *v2; // r8
  int *v3; // r9
  int v5; // [rsp+14h] [rbp-Ch] BYREF
  int v6; // [rsp+18h] [rbp-8h] BYREF
  int v7; // [rsp+1Ch] [rbp-4h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  std::tuple<unsigned long,unsigned long,unsigned long>::tuple<int,int,int,true>(
    retstr,
    &v5,
    &v6,
    &v7,
    v2,
    v3,
    (int *)this);
  return retstr;
};

// Line 138: range 00000000155B7848-00000000155B7856
data::EventType __cdecl ChallengeCondition::getTriggerEventType(const ChallengeCondition *const this)
{
  return 0;
};

// Line 141: range 00000000155B7858-00000000155B7865
void __cdecl ChallengeCondition::onSetDurationByGm(ChallengeCondition *const this, uint32_t left_time)
{
  ;
};

// Line 156: range 00000000155B7866-00000000155B78AD
uint32_t __cdecl ChallengeCondition::getParamIndex(const ChallengeCondition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->param_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->param_index_);
  }
  return this->param_index_;
};

// Line 157: range 0000000014F78CB2-0000000014F78D01
data::ChallengeCondType __cdecl ChallengeCondition::getChallengeCondType(const ChallengeCondition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_cond_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_cond_type_);
  }
  return this->challenge_cond_type_;
};

// Line 158: range 00000000155B78AE-00000000155B78FC
void __cdecl ChallengeCondition::setChallengeCondState(
        ChallengeCondition *const this,
        ChallengeConditionState challenge_cond_state__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_cond_state_);
  }
  this->challenge_cond_state_ = challenge_cond_state__out;
};

// Line 230: range 00000000155B74C0-00000000155B7632
void __cdecl ChallengeCondition::ChallengeCondition(
        ChallengeCondition *const this,
        ChallengeComp *challenge_comp,
        Challenge *challenge,
        uint32_t param_index,
        data::ChallengeCondType challenge_cond_type)
{
  int (**v5)(...); // rdx

  v5 = (int (**)(...))(&`vtable for'ChallengeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->challenge_comp_);
  this->challenge_comp_ = challenge_comp;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->challenge_);
  this->challenge_ = challenge;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_index_);
  }
  this->param_index_ = param_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_cond_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_cond_type_);
  }
  this->challenge_cond_type_ = challenge_cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_cond_state_);
  }
  this->challenge_cond_state_ = CHALLENGE_COND_STATE_NONE;
};
