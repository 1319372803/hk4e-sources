// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/challenge_condition.cpp

// Line 26: range 00000000159012E2-000000001590130C
void __cdecl ChallengeCondInTime::~ChallengeCondInTime(ChallengeCondInTime *const this)
{
  ChallengeCondInTime::~ChallengeCondInTime(this);
  operator delete(this, 0x50uLL);
};

// Line 26: range 0000000015901294-00000000159012E1
void __cdecl ChallengeCondInTime::~ChallengeCondInTime(ChallengeCondInTime *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondInTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition(this);
};

// Line 29: range 00000000158AF01C-00000000158AF29F
void __fastcall ZN19ChallengeCondInTimeCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondInTime *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN19ChallengeCondInTimeCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(this, a2, a3, *(_DWORD *)(v5 + 48), *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondInTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_ms_);
  this->start_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->time_limit_ms_);
  this->time_limit_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->relax_ms_);
  this->relax_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->reduce_ms_);
  this->reduce_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_inherit_father);
  this->is_inherit_father = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 31: range 00000000155B828E-00000000155B84AA
int32_t __cdecl ChallengeCondInTime::initChallengeCond(
        ChallengeCondInTime *const this,
        const std::vector<unsigned int> *param_vec)
{
  __int64 SceneTimeMs; // rax
  std::vector<unsigned int>::const_reference v4; // rax
  unsigned int *v5; // rdx
  uint64_t v6; // rdx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    SceneTimeMs = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
      SceneTimeMs = __asan_report_store8(&this->start_time_ms_);
    this->start_time_ms_ = SceneTimeMs;
    v4 = std::vector<unsigned int>::operator[](param_vec, 0LL);
    v5 = (unsigned int *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v6 = 1000LL * *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->time_limit_ms_);
    this->time_limit_ms_ = v6;
    if ( !this->time_limit_ms_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->challenge_);
      if ( Challenge::isChild(this->challenge_) )
      {
        if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_inherit_father);
        this->is_inherit_father = 1;
      }
    }
    ChallengeCondition::setChallengeCondState(this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      35);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v7,
      (const char (*)[39])"ChallengeCondInTime param_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 52: range 00000000155B84AC-00000000155B84BF
bool __cdecl ChallengeCondInTime::isRecordTypeMatch(const ChallengeCondInTime *const this, uint32_t record_type)
{
  return record_type == 1;
};

// Line 58: range 00000000155B84C0-00000000155B8536
bool __cdecl ChallengeCondInTime::isNeedRecord(const ChallengeCondInTime *const this, uint32_t cur_progress)
{
  ChallengeComp *challenge_comp; // rbx
  uint32_t ChallengeIndex; // eax
  uint32_t record_value; // [rsp+1Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  challenge_comp = this->challenge_comp_;
  ChallengeIndex = ChallengeCondition::getChallengeIndex(this);
  record_value = ChallengeComp::getRecordBestValue(challenge_comp, ChallengeIndex);
  return !record_value || cur_progress < record_value;
};

// Line 65: range 00000000155B8538-00000000155B8948
uint32_t __cdecl ChallengeCondInTime::getProgress(const ChallengeCondInTime *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  ChallengeComp *challenge_comp; // rax
  Challenge *challenge; // rax
  __int64 v6; // rax
  uint64_t v7; // rax
  uint64_t time_limit_ms; // rcx
  uint64_t v9; // rcx
  unsigned __int64 v10; // rax
  uint32_t father_progress; // [rsp+14h] [rbp-ACh]
  uint64_t now_ms; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 11 interval:75 64 8 15 max_interval:76";
  *(_QWORD *)(v1 + 16) = ChallengeCondInTime::getProgress;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inherit_father);
  if ( this->is_inherit_father )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      challenge_comp = (ChallengeComp *)__asan_report_load8(&this->challenge_);
    father_progress = ChallengeComp::getFatherTimeProgress(challenge_comp, this->challenge_);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "getProgress",
      70);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    challenge = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&challenge->father_index);
    }
    common::milog::MiLogStream::operator()(
      &v14,
      "inherit father's @index %u time progress: %u",
      challenge->father_index,
      father_progress);
    common::milog::MiLogStream::~MiLogStream(&v14);
    LODWORD(v6) = father_progress;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_time_ms_);
    if ( now_ms <= this->start_time_ms_ )
      v7 = 0LL;
    else
      v7 = now_ms - this->start_time_ms_;
    *(_QWORD *)(v1 + 32) = v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->time_limit_ms_);
    time_limit_ms = this->time_limit_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->relax_ms_);
    v9 = this->relax_ms_ + time_limit_ms;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->reduce_ms_);
    *(_QWORD *)(v1 + 64) = v9 - this->reduce_ms_;
    v10 = (unsigned __int64)std::min<unsigned long>(
                              (const unsigned __int64 *)(v1 + 32),
                              (const unsigned __int64 *)(v1 + 64));
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10);
    v6 = *(_QWORD *)v10;
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v6;
};

// Line 80: range 00000000155B894A-00000000155B8A2F
uint32_t __cdecl ChallengeCondInTime::getTimestamp(const ChallengeCondInTime *const this)
{
  uint64_t start_time_ms; // rcx
  uint64_t v2; // rcx
  uint64_t v3; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  start_time_ms = this->start_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->time_limit_ms_);
  v2 = this->time_limit_ms_ + start_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->relax_ms_);
  v3 = this->relax_ms_ + v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->reduce_ms_);
  return (v3 - this->reduce_ms_) / 0x3E8;
};

// Line 85: range 00000000155B8A30-00000000155B8CFD
void __cdecl ChallengeCondInTime::notifyChallengeData(ChallengeCondInTime *const this, PlayerPtr *p_player_ptr)
{
  ChallengeComp *challenge_comp; // rax
  Challenge *challenge; // rax
  uint64_t start_time_ms; // rcx
  uint64_t v5; // rcx
  uint64_t v6; // rcx
  uint32_t timestamp; // [rsp+1Ch] [rbp-44h]
  uint32_t timestampa; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inherit_father);
  if ( this->is_inherit_father )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      challenge_comp = (ChallengeComp *)__asan_report_load8(&this->challenge_);
    timestamp = ChallengeComp::getFatherTimestamp(challenge_comp, this->challenge_);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "notifyChallengeData",
      91);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    challenge = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&challenge->father_index);
    }
    common::milog::MiLogStream::operator()(
      &v10,
      "inherit father's @index %u timestamp=%u",
      challenge->father_index,
      timestamp);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_time_ms_);
    start_time_ms = this->start_time_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->time_limit_ms_);
    v5 = this->time_limit_ms_ + start_time_ms;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->relax_ms_);
    v6 = this->relax_ms_ + v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->reduce_ms_);
    timestampa = (v6 - this->reduce_ms_) / 0x3E8;
    std::shared_ptr<Player>::shared_ptr(&v9, p_player_ptr);
    ChallengeCondition::internalNotifyChallengeData(this, &v9, timestampa);
    std::shared_ptr<Player>::~shared_ptr(&v9);
  }
};

// Line 101: range 00000000155B8CFE-00000000155B91CF
int32_t __cdecl ChallengeCondInTime::relaxTimeRestriction(
        ChallengeCondInTime *const this,
        uint32_t relax_secs,
        const ChallengeRelaxTimeType *relax_time_type,
        bool can_exceed_limit)
{
  ChallengeComp *challenge_comp; // rax
  char v6; // di
  Challenge *challenge; // rax
  uint64_t start_time_ms; // rcx
  uint64_t v9; // rcx
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(ChallengeCondInTime *const, std::shared_ptr<Player> *); // rbx
  uint64_t now_ms; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Player> v19; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)relax_time_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)relax_time_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)relax_time_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(relax_time_type);
  }
  if ( *relax_time_type )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inherit_father);
  if ( this->is_inherit_father )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    v6 = can_exceed_limit;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
    {
      v6 = (_BYTE)this + 16;
      challenge_comp = (ChallengeComp *)__asan_report_load8(&this->challenge_);
    }
    ChallengeComp::relaxFatherTimeRestriction(challenge_comp, this->challenge_, relax_secs, relax_time_type, v6);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "relaxTimeRestriction",
      110);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    challenge = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&challenge->father_index);
    }
    common::milog::MiLogStream::operator()(
      &v20,
      "relex father's @index %u time by %u seconds",
      challenge->father_index,
      relax_secs);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->relax_ms_);
    this->relax_ms_ += 1000LL * relax_secs;
    if ( !can_exceed_limit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->challenge_comp_);
      now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
      if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->start_time_ms_);
      start_time_ms = this->start_time_ms_;
      if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->relax_ms_);
      v9 = this->relax_ms_ + start_time_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->reduce_ms_);
      if ( v9 > this->reduce_ms_ + now_ms )
      {
        this->reduce_ms_ = this->start_time_ms_ + this->relax_ms_ - now_ms;
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/challenge_condition.cpp",
          "relaxTimeRestriction",
          123);
        v10 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v20,
                (const char (*)[60])"exceed limit, set left time to time_limit_ms, challenge id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->challenge_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                &this->challenge_->challenge_id);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v11,
                (const char (*)[17])"challenge index:");
        if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->challenge_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->challenge_->challenge_index);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v13 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v14 = *(void (__fastcall **)(ChallengeCondInTime *const, std::shared_ptr<Player> *))v13;
    std::shared_ptr<Player>::shared_ptr(&v19, 0LL);
    v14(this, &v19);
    std::shared_ptr<Player>::~shared_ptr(&v19);
    return 0;
  }
};

// Line 130: range 00000000155B91D0-00000000155B97D1
void __fastcall ChallengeCondInTime::onModifyProperty(
        ChallengeCondInTime *const this,
        data::FatherChallengeProperty property_type,
        int32_t mod_value,
        bool can_exceed_limit)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  Challenge *challenge; // rdx
  __int64 challenge_index; // rcx
  Challenge *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(ChallengeCondInTime *const, _QWORD, int *, bool); // r8
  uint64_t start_time_ms; // rcx
  uint64_t v18; // rcx
  unsigned __int64 v19; // rax
  void (__fastcall *v20)(ChallengeCondInTime *const, std::shared_ptr<Player> *); // r12
  int v23; // [rsp+2Ch] [rbp-94h] BYREF
  std::shared_ptr<Player> v24; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-80h] BYREF
  char v26[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 mod_value:130";
  *(_QWORD *)(v4 + 16) = ChallengeCondInTime::onModifyProperty;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = mod_value;
  if ( property_type == DURATION && *(_DWORD *)(v4 + 32) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_inherit_father);
    if ( this->is_inherit_father )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_condition.cpp",
        "onModifyProperty",
        144);
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->challenge_);
      challenge = this->challenge_;
      if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&challenge->challenge_index);
      }
      challenge_index = challenge->challenge_index;
      v9 = this->challenge_;
      if ( *(_BYTE *)(((unsigned __int64)&v9->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->challenge_id);
      }
      common::milog::MiLogStream::operator()(&v25, &byte_257FD6C0, v9->challenge_id, challenge_index);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_condition.cpp",
        "onModifyProperty",
        148);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v25, (const char (*)[10])off_257FD740);
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" challenge id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->challenge_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->challenge_->challenge_id);
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])"challenge index:");
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->challenge_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->challenge_->challenge_index);
      common::milog::MiLogStream::~MiLogStream(&v25);
      if ( *(int *)(v4 + 32) > 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v15 = (unsigned __int64)(this->_vptr_ChallengeCondition + 7);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(this->_vptr_ChallengeCondition + 7);
        v16 = *(void (__fastcall **)(ChallengeCondInTime *const, _QWORD, int *, bool))v15;
        v23 = 0;
        v16(this, *(unsigned int *)(v4 + 32), &v23, can_exceed_limit);
      }
      if ( *(int *)(v4 + 32) < 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->reduce_ms_);
        this->reduce_ms_ += 1000LL * (int)abs32(*(_DWORD *)(v4 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->start_time_ms_);
        start_time_ms = this->start_time_ms_;
        if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->time_limit_ms_);
        v18 = this->time_limit_ms_ + start_time_ms;
        if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->relax_ms_);
        if ( v18 + this->relax_ms_ < this->reduce_ms_ )
          this->reduce_ms_ = this->relax_ms_ + this->time_limit_ms_ + this->start_time_ms_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v19 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
        v20 = *(void (__fastcall **)(ChallengeCondInTime *const, std::shared_ptr<Player> *))v19;
        std::shared_ptr<Player>::shared_ptr(&v24, 0LL);
        v20(this, &v24);
        std::shared_ptr<Player>::~shared_ptr(&v24);
      }
    }
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 166: range 00000000155B97D2-00000000155B9CEF
void __cdecl ChallengeCondInTime::onSetDuration(ChallengeCondInTime *const this, uint32_t left_time)
{
  Challenge *challenge; // rdx
  __int64 challenge_index; // rcx
  Challenge *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  uint64_t start_time_ms; // rcx
  uint64_t v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(ChallengeCondInTime *const, std::shared_ptr<Player> *); // rbx
  uint64_t now_ms; // [rsp+10h] [rbp-50h]
  uint64_t end_time_ms; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Player> v21; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inherit_father);
  if ( this->is_inherit_father )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "onSetDuration",
      170);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    challenge = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&challenge->challenge_index);
    }
    challenge_index = challenge->challenge_index;
    v4 = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&v4->challenge_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v4->challenge_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v4->challenge_id);
    }
    common::milog::MiLogStream::operator()(&v22, &byte_257FD6C0, v4->challenge_id, challenge_index);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "onSetDuration",
      173);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"before relax_ms:");
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &this->relax_ms_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" reduce_ms:");
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &this->reduce_ms_);
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])"challenge index:");
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->challenge_->challenge_index);
    common::milog::MiLogStream::~MiLogStream(&v22);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_time_ms_);
    start_time_ms = this->start_time_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->time_limit_ms_);
    v11 = this->time_limit_ms_ + start_time_ms;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->relax_ms_);
    end_time_ms = v11 + this->relax_ms_;
    this->relax_ms_ += 1000LL * left_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->reduce_ms_);
    if ( end_time_ms > this->reduce_ms_ + now_ms )
      this->reduce_ms_ = end_time_ms - now_ms;
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "onSetDuration",
      183);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v22, (const char (*)[16])"after relax_ms:");
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &this->relax_ms_);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" reduce_ms:");
    v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &this->reduce_ms_);
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])"challenge index:");
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->challenge_->challenge_index);
    common::milog::MiLogStream::~MiLogStream(&v22);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v17 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v18 = *(void (__fastcall **)(ChallengeCondInTime *const, std::shared_ptr<Player> *))v17;
    std::shared_ptr<Player>::shared_ptr(&v21, 0LL);
    v18(this, &v21);
    std::shared_ptr<Player>::~shared_ptr(&v21);
  }
};

// Line 187: range 00000000155B9CF0-00000000155B9D60
void __cdecl ChallengeCondInTime::onSetDurationByGm(ChallengeCondInTime *const this, uint32_t duration)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_ChallengeCondition + 20);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_ChallengeCondition + 20);
  (*(void (__fastcall **)(ChallengeCondInTime *const, _QWORD))v2)(this, duration);
};

// Line 192: range 00000000155B9D62-00000000155B9D9B
std::tuple<long unsigned int,long unsigned int,long unsigned int> *__cdecl ChallengeCondInTime::getTimeInfo(
        std::tuple<long unsigned int,long unsigned int,long unsigned int> *retstr,
        const ChallengeCondInTime *const this)
{
  std::tuple<unsigned long,unsigned long,unsigned long>::tuple<void,true>(
    retstr,
    &this->reduce_ms_,
    &this->time_limit_ms_,
    &this->relax_ms_);
  return retstr;
};

// Line 197: range 00000000155B9D9C-00000000155BA0D3
void __cdecl ChallengeCondInTime::onTimer(ChallengeCondInTime *const this, uint64_t now_ms)
{
  ChallengeComp *challenge_comp; // rcx
  unsigned __int64 *v3; // r8
  unsigned __int64 *v4; // r9
  uint64_t relax_ms; // r8
  uint64_t time_limit_ms; // rdi
  uint64_t reduce_ms; // rcx
  Challenge *challenge; // rax
  uint64_t v9; // rsi
  uint64_t start_time_ms; // rcx
  uint64_t v11; // rcx
  uint64_t now_msa; // [rsp+0h] [rbp-80h]
  std::tuple<long unsigned int&,long unsigned int&,long unsigned int&> v14; // [rsp+10h] [rbp-70h] BYREF
  std::tuple<long unsigned int,long unsigned int,long unsigned int> __in; // [rsp+30h] [rbp-50h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  now_msa = now_ms;
  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inherit_father);
  if ( this->is_inherit_father )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    ChallengeComp::getFatherTimeInfo(&__in, challenge_comp, this->challenge_);
    std::tie<unsigned long,unsigned long,unsigned long>(
      &v14,
      &this->reduce_ms_,
      &this->time_limit_ms_,
      &this->relax_ms_,
      v3,
      v4,
      (unsigned __int64 *)now_ms);
    std::tuple<unsigned long &,unsigned long &,unsigned long &>::operator=<unsigned long,unsigned long,unsigned long>(
      &v14,
      &__in);
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "onTimer",
      202);
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->relax_ms_);
    relax_ms = this->relax_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->time_limit_ms_);
    time_limit_ms = this->time_limit_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
    {
      time_limit_ms = (uint64_t)&this->reduce_ms_;
      __asan_report_load8(&this->reduce_ms_);
    }
    reduce_ms = this->reduce_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
    {
      time_limit_ms = (uint64_t)&this->challenge_;
      __asan_report_load8(&this->challenge_);
    }
    challenge = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
    {
      time_limit_ms = (uint64_t)&challenge->father_index;
      __asan_report_load4(&challenge->father_index);
    }
    common::milog::MiLogStream::operator()(
      &v16,
      off_257FD900,
      challenge->father_index,
      reduce_ms,
      time_limit_ms,
      relax_ms);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->reduce_ms_);
  v9 = this->reduce_ms_ + now_msa + 200;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  start_time_ms = this->start_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->time_limit_ms_);
  v11 = this->time_limit_ms_ + start_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->relax_ms_);
  if ( v9 > v11 + this->relax_ms_ )
    ChallengeCondition::setNotMeet(this, 1);
};

// Line 212: range 00000000155BA0D4-00000000155BA585
bool __cdecl ChallengeCondInTime::checkAndGetLeftTime(ChallengeCondInTime *const this, uint32_t *left_time)
{
  ChallengeComp *challenge_comp; // rcx
  unsigned __int64 *v3; // r8
  unsigned __int64 *v4; // r9
  uint64_t relax_ms; // r8
  uint64_t time_limit_ms; // rdi
  uint64_t reduce_ms; // rcx
  Challenge *challenge; // rax
  uint64_t start_time_ms; // rcx
  uint64_t v10; // rcx
  uint64_t v11; // rcx
  uint32_t v12; // edi
  uint32_t *left_timea; // [rsp+0h] [rbp-90h]
  uint64_t now_ms; // [rsp+10h] [rbp-80h]
  uint64_t end_time_ms; // [rsp+18h] [rbp-78h]
  std::tuple<long unsigned int&,long unsigned int&,long unsigned int&> v18; // [rsp+20h] [rbp-70h] BYREF
  std::tuple<long unsigned int,long unsigned int,long unsigned int> __in; // [rsp+40h] [rbp-50h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  left_timea = left_time;
  if ( *(char *)(((unsigned __int64)&this->is_inherit_father >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inherit_father);
  if ( this->is_inherit_father )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_);
    ChallengeComp::getFatherTimeInfo(&__in, challenge_comp, this->challenge_);
    std::tie<unsigned long,unsigned long,unsigned long>(
      &v18,
      &this->reduce_ms_,
      &this->time_limit_ms_,
      &this->relax_ms_,
      v3,
      v4,
      (unsigned __int64 *)left_time);
    std::tuple<unsigned long &,unsigned long &,unsigned long &>::operator=<unsigned long,unsigned long,unsigned long>(
      &v18,
      &__in);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "checkAndGetLeftTime",
      217);
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->relax_ms_);
    relax_ms = this->relax_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->time_limit_ms_);
    time_limit_ms = this->time_limit_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
    {
      time_limit_ms = (uint64_t)&this->reduce_ms_;
      __asan_report_load8(&this->reduce_ms_);
    }
    reduce_ms = this->reduce_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
    {
      time_limit_ms = (uint64_t)&this->challenge_;
      __asan_report_load8(&this->challenge_);
    }
    challenge = this->challenge_;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
    {
      time_limit_ms = (uint64_t)&challenge->father_index;
      __asan_report_load4(&challenge->father_index);
    }
    common::milog::MiLogStream::operator()(
      &v20,
      off_257FD900,
      challenge->father_index,
      reduce_ms,
      time_limit_ms,
      relax_ms);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  start_time_ms = this->start_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->time_limit_ms_);
  v10 = this->time_limit_ms_ + start_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->relax_ms_);
  end_time_ms = v10 + this->relax_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->reduce_ms_);
  if ( end_time_ms > this->reduce_ms_ + now_ms )
  {
    v11 = end_time_ms - now_ms;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->reduce_ms_);
    v12 = (v11 - this->reduce_ms_ + 500) / 0x3E8;
    if ( *(_BYTE *)(((unsigned __int64)left_timea >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_timea & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_timea >> 3) + 0x7FFF8000) )
    {
      v12 = (unsigned int)left_timea;
      __asan_report_store4(left_timea);
    }
    *left_timea = v12;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)left_timea >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_timea & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_timea >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(left_timea);
    }
    *left_timea = 0;
  }
  return 1;
};

// Line 241: range 0000000015901268-0000000015901292
void __cdecl ChallengeCondAllTime::~ChallengeCondAllTime(ChallengeCondAllTime *const this)
{
  ChallengeCondAllTime::~ChallengeCondAllTime(this);
  operator delete(this, 0x40uLL);
};

// Line 241: range 000000001590121A-0000000015901267
void __cdecl ChallengeCondAllTime::~ChallengeCondAllTime(ChallengeCondAllTime *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondAllTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition(this);
};

// Line 244: range 00000000158AF630-00000000158AF83B
void __fastcall ZN20ChallengeCondAllTimeCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondAllTime *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondAllTimeCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(this, a2, a3, *(_DWORD *)(v5 + 48), *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondAllTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_ms_);
  this->start_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->time_limit_ms_);
  this->time_limit_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->relax_ms_);
  this->relax_ms_ = 0LL;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 246: range 00000000155BA586-00000000155BA713
int32_t __cdecl ChallengeCondAllTime::initChallengeCond(
        ChallengeCondAllTime *const this,
        const std::vector<unsigned int> *param_vec)
{
  __int64 SceneTimeMs; // rax
  std::vector<unsigned int>::const_reference v4; // rax
  unsigned int *v5; // rdx
  uint64_t v6; // rcx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    SceneTimeMs = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
      SceneTimeMs = __asan_report_store8(&this->start_time_ms_);
    this->start_time_ms_ = SceneTimeMs;
    v4 = std::vector<unsigned int>::operator[](param_vec, 0LL);
    v5 = (unsigned int *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v6 = 1000LL * *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->time_limit_ms_);
    this->time_limit_ms_ = v6;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      250);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v7,
      (const char (*)[40])"ChallengeCondAllTime param_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 259: range 00000000155BA714-00000000155BA7A6
uint32_t __cdecl ChallengeCondAllTime::getProgress(const ChallengeCondAllTime *const this)
{
  uint64_t now_ms; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  if ( now_ms <= this->start_time_ms_ )
    return 0;
  else
    return now_ms - this->start_time_ms_;
};

// Line 265: range 00000000155BA7A8-00000000155BA8BD
void __cdecl ChallengeCondAllTime::notifyChallengeData(ChallengeCondAllTime *const this, PlayerPtr *p_player_ptr)
{
  uint64_t start_time_ms; // rcx
  uint64_t v3; // rcx
  uint32_t timestamp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Player> v5; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  start_time_ms = this->start_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->time_limit_ms_);
  v3 = this->time_limit_ms_ + start_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->relax_ms_);
  timestamp = (v3 - this->relax_ms_) / 0x3E8;
  std::shared_ptr<Player>::shared_ptr(&v5, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData(this, &v5, timestamp);
  std::shared_ptr<Player>::~shared_ptr(&v5);
};

// Line 272: range 00000000155BA8BE-00000000155BAAA2
int32_t __cdecl ChallengeCondAllTime::relaxTimeRestriction(
        ChallengeCondAllTime *const this,
        uint32_t relax_secs,
        const ChallengeRelaxTimeType *relax_time_type,
        bool can_exceed_limit)
{
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(ChallengeCondAllTime *const, std::shared_ptr<Player> *); // rbx
  unsigned __int64 v7; // rax
  uint64_t now_ms; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Player> v10; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)relax_time_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)relax_time_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)relax_time_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(relax_time_type);
  }
  if ( *relax_time_type != DEC )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->relax_ms_);
  this->relax_ms_ += 1000LL * relax_secs;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  v6 = *(void (__fastcall **)(ChallengeCondAllTime *const, std::shared_ptr<Player> *))v5;
  std::shared_ptr<Player>::shared_ptr(&v10, 0LL);
  v6(this, &v10);
  std::shared_ptr<Player>::~shared_ptr(&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (unsigned __int64)(this->_vptr_ChallengeCondition + 10);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(this->_vptr_ChallengeCondition + 10);
  (*(void (__fastcall **)(ChallengeCondAllTime *const, uint64_t))v7)(this, now_ms);
  return 0;
};

// Line 285: range 00000000155BAAA4-00000000155BAB58
void __cdecl ChallengeCondAllTime::onTimer(ChallengeCondAllTime *const this, uint64_t now_ms)
{
  uint64_t start_time_ms; // rcx
  uint64_t v3; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  start_time_ms = this->start_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->time_limit_ms_);
  v3 = this->time_limit_ms_ + start_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->relax_ms_);
  if ( now_ms > v3 - this->relax_ms_ )
    ChallengeCondition::setMeet(this);
};

// Line 300: range 00000000159011A0-00000000159011ED
void __cdecl ChallengeCondKillCount::~ChallengeCondKillCount(ChallengeCondKillCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondKillCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 300: range 00000000159011EE-0000000015901218
void __cdecl ChallengeCondKillCount::~ChallengeCondKillCount(ChallengeCondKillCount *const this)
{
  ChallengeCondKillCount::~ChallengeCondKillCount(this);
  operator delete(this, 0x30uLL);
};

// Line 303: range 00000000158AFBCC-00000000158AFE0E
void __fastcall ZN22ChallengeCondKillCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondKillCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN22ChallengeCondKillCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondKillCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_group_id_);
  }
  this->target_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_limit_);
  }
  this->kill_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 305: range 00000000155BAB5A-00000000155BAD18
int32_t __cdecl ChallengeCondKillCount::initChallengeCond(
        ChallengeCondKillCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_group_id_);
    }
    this->target_group_id_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->kill_limit_);
    }
    this->kill_limit_ = v8;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      309);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v9,
      (const char (*)[55])"ChallengeCondKillCount param_vec's size is less than 2");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 317: range 00000000155BAD1A-00000000155BAD69
uint32_t __cdecl ChallengeCondKillCount::getProgress(const ChallengeCondKillCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  return this->kill_count_;
};

// Line 322: range 00000000155BAD6A-00000000155BAE1B
void __cdecl ChallengeCondKillCount::notifyChallengeData(ChallengeCondKillCount *const this, PlayerPtr *p_player_ptr)
{
  uint32_t kill_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  kill_count = this->kill_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, kill_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 327: range 00000000155BAE1C-00000000155BB05A
void __cdecl ChallengeCondKillCount::onMonsterDie(
        ChallengeCondKillCount *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t GroupId; // ecx
  char v4; // al
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(ChallengeCondKillCount *const, std::shared_ptr<Player> *); // rbx
  uint32_t kill_count; // ecx
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( !this->target_group_id_ )
    goto LABEL_8;
  GroupId = Entity::getGroupId((const Entity *const)monster);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( GroupId == this->target_group_id_ )
LABEL_8:
    v4 = 0;
  else
    v4 = 1;
  if ( !v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->kill_count_);
    }
    ++this->kill_count_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v6 = *(void (__fastcall **)(ChallengeCondKillCount *const, std::shared_ptr<Player> *))v5;
    std::shared_ptr<Player>::shared_ptr(&v9, 0LL);
    v6(this, &v9);
    std::shared_ptr<Player>::~shared_ptr(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->kill_count_);
    }
    kill_count = this->kill_count_;
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->kill_limit_);
    }
    if ( kill_count >= this->kill_limit_ )
      ChallengeCondition::setMeet((ChallengeCondition *const)this);
  }
};

// Line 348: range 0000000015901174-000000001590119E
void __cdecl ChallengeCondSurvive::~ChallengeCondSurvive(ChallengeCondSurvive *const this)
{
  ChallengeCondSurvive::~ChallengeCondSurvive(this);
  operator delete(this, 0x28uLL);
};

// Line 348: range 0000000015901126-0000000015901173
void __cdecl ChallengeCondSurvive::~ChallengeCondSurvive(ChallengeCondSurvive *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondSurvive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 351: range 00000000158B0196-00000000158B0348
void __fastcall ZN20ChallengeCondSurviveCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondSurvive *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondSurviveCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondSurvive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->all_dead_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->all_dead_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->all_dead_);
  }
  this->all_dead_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 353: range 00000000155BB05C-00000000155BB083
int32_t __cdecl ChallengeCondSurvive::initChallengeCond(
        ChallengeCondSurvive *const this,
        const std::vector<unsigned int> *param_vec)
{
  ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
  return 0;
};

// Line 359: range 00000000155BB084-00000000155BB0D3
uint32_t __cdecl ChallengeCondSurvive::getProgress(const ChallengeCondSurvive *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->all_dead_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->all_dead_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->all_dead_);
  }
  return this->all_dead_;
};

// Line 364: range 00000000155BB0D4-00000000155BB348
void __cdecl ChallengeCondSurvive::onAvatarDie(
        ChallengeCondSurvive *const this,
        ChangeHpContext *context,
        Avatar *avatar)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:366";
  *(_QWORD *)(v3 + 16) = ChallengeCondSurvive::onAvatarDie;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8(avatar);
  v6 = *(_QWORD *)avatar->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)avatar->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v6)(v3 + 32, avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "onAvatarDie",
      369);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v10,
      (const char (*)[30])"avatar.getPlayer() is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    AvatarComp = Player::getAvatarComp(v7);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->all_dead_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->all_dead_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->all_dead_);
      }
      this->all_dead_ = 1;
      ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 384: range 00000000159010AC-00000000159010F9
void __cdecl ChallengeCondTimeInc::~ChallengeCondTimeInc(ChallengeCondTimeInc *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondTimeInc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 384: range 00000000159010FA-0000000015901124
void __cdecl ChallengeCondTimeInc::~ChallengeCondTimeInc(ChallengeCondTimeInc *const this)
{
  ChallengeCondTimeInc::~ChallengeCondTimeInc(this);
  operator delete(this, 0x30uLL);
};

// Line 387: range 00000000158B06DA-00000000158B091C
void __fastcall ZN20ChallengeCondTimeIncCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondTimeInc *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondTimeIncCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondTimeInc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_group_id_);
  }
  this->target_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_seconds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->relax_seconds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->relax_seconds_);
  }
  this->relax_seconds_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 389: range 00000000155BB34A-00000000155BB519
int32_t __cdecl ChallengeCondTimeInc::initChallengeCond(
        ChallengeCondTimeInc *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_group_id_);
    }
    this->target_group_id_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_seconds_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->relax_seconds_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->relax_seconds_);
    }
    this->relax_seconds_ = v8;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      393);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v9,
      (const char (*)[46])"ChallengeCondTimeInc param_vec is less than 2");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 402: range 00000000155BB51A-00000000155BB569
uint32_t __cdecl ChallengeCondTimeInc::getProgress(const ChallengeCondTimeInc *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  return this->kill_count_;
};

// Line 407: range 00000000155BB56A-00000000155BB61B
void __cdecl ChallengeCondTimeInc::notifyChallengeData(ChallengeCondTimeInc *const this, PlayerPtr *p_player_ptr)
{
  uint32_t kill_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  kill_count = this->kill_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, kill_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 413: range 00000000155BB61C-00000000155BB857
void __cdecl ChallengeCondTimeInc::onMonsterDie(
        ChallengeCondTimeInc *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t GroupId; // ecx
  char v4; // al
  ChallengeComp *challenge_comp; // rbx
  uint32_t relax_seconds; // r12d
  uint32_t ChallengeIndex; // eax
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(ChallengeCondTimeInc *const, std::shared_ptr<Player> *); // rbx
  std::shared_ptr<Player> v11; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( !this->target_group_id_ )
    goto LABEL_8;
  GroupId = Entity::getGroupId((const Entity *const)monster);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( GroupId == this->target_group_id_ )
LABEL_8:
    v4 = 0;
  else
    v4 = 1;
  if ( !v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_seconds_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->relax_seconds_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->relax_seconds_);
    }
    relax_seconds = this->relax_seconds_;
    ChallengeIndex = ChallengeCondition::getChallengeIndex((const ChallengeCondition *const)this);
    ChallengeComp::relaxChallengeTimeRestriction(challenge_comp, ChallengeIndex, relax_seconds, INC);
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->kill_count_);
    }
    ++this->kill_count_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v9 = *(void (__fastcall **)(ChallengeCondTimeInc *const, std::shared_ptr<Player> *))v8;
    std::shared_ptr<Player>::shared_ptr(&v11, 0LL);
    v9(this, &v11);
    std::shared_ptr<Player>::~shared_ptr(&v11);
  }
};

// Line 431: range 0000000015901080-00000000159010AA
void __cdecl ChallengeCondKillFast::~ChallengeCondKillFast(ChallengeCondKillFast *const this)
{
  ChallengeCondKillFast::~ChallengeCondKillFast(this);
  operator delete(this, 0x38uLL);
};

// Line 431: range 0000000015901032-000000001590107F
void __cdecl ChallengeCondKillFast::~ChallengeCondKillFast(ChallengeCondKillFast *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondKillFast + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 434: range 00000000158B0CA4-00000000158B0EC4
void __fastcall ZN21ChallengeCondKillFastCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondKillFast *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN21ChallengeCondKillFastCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondKillFast + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_group_id_);
  }
  this->target_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->interval_ms_);
  this->interval_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_kill_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_kill_time_ms_);
  this->last_kill_time_ms_ = 0LL;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 436: range 00000000155BB858-00000000155BBA87
int32_t __cdecl ChallengeCondKillFast::initChallengeCond(
        ChallengeCondKillFast *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  std::vector<unsigned int>::const_reference v6; // rax
  unsigned int *v7; // rdx
  uint64_t v8; // rcx
  __int64 SceneTimeMs; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_group_id_);
    }
    this->target_group_id_ = v5;
    v6 = std::vector<unsigned int>::operator[](param_vec, 1uLL);
    v7 = (unsigned int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = 1000LL * *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->interval_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->interval_ms_);
    this->interval_ms_ = v8;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    SceneTimeMs = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_kill_time_ms_ >> 3) + 0x7FFF8000) )
      SceneTimeMs = __asan_report_store8(&this->last_kill_time_ms_);
    this->last_kill_time_ms_ = SceneTimeMs;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      440);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v10,
      (const char (*)[47])"ChallengeCondKillFast param_vec is less than 2");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 450: range 00000000155BBA88-00000000155BBB1A
uint32_t __cdecl ChallengeCondKillFast::getProgress(const ChallengeCondKillFast *const this)
{
  uint64_t now_ms; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  now_ms = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_kill_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_kill_time_ms_);
  if ( now_ms <= this->last_kill_time_ms_ )
    return 0;
  else
    return now_ms - this->last_kill_time_ms_;
};

// Line 456: range 00000000155BBB1C-00000000155BBBFE
void __cdecl ChallengeCondKillFast::notifyChallengeData(ChallengeCondKillFast *const this, PlayerPtr *p_player_ptr)
{
  uint64_t last_kill_time_ms; // rcx
  uint32_t timestamp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Player> v4; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->last_kill_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_kill_time_ms_);
  last_kill_time_ms = this->last_kill_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->interval_ms_);
  timestamp = (last_kill_time_ms + this->interval_ms_) / 0x3E8;
  std::shared_ptr<Player>::shared_ptr(&v4, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v4, timestamp);
  std::shared_ptr<Player>::~shared_ptr(&v4);
};

// Line 462: range 00000000155BBC00-00000000155BBDC7
void __cdecl ChallengeCondKillFast::onMonsterDie(
        ChallengeCondKillFast *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t GroupId; // ecx
  char v4; // al
  __int64 SceneTimeMs; // rax
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(ChallengeCondKillFast *const, std::shared_ptr<Player> *); // rbx
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( !this->target_group_id_ )
    goto LABEL_8;
  GroupId = Entity::getGroupId((const Entity *const)monster);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( GroupId == this->target_group_id_ )
LABEL_8:
    v4 = 0;
  else
    v4 = 1;
  if ( !v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    SceneTimeMs = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_kill_time_ms_ >> 3) + 0x7FFF8000) )
      SceneTimeMs = __asan_report_store8(&this->last_kill_time_ms_);
    this->last_kill_time_ms_ = SceneTimeMs;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v7 = *(void (__fastcall **)(ChallengeCondKillFast *const, std::shared_ptr<Player> *))v6;
    std::shared_ptr<Player>::shared_ptr(&v9, 0LL);
    v7(this, &v9);
    std::shared_ptr<Player>::~shared_ptr(&v9);
  }
};

// Line 472: range 00000000155BBDC8-00000000155BBE5B
void __cdecl ChallengeCondKillFast::onTimer(ChallengeCondKillFast *const this, uint64_t now_ms)
{
  uint64_t last_kill_time_ms; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->last_kill_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_kill_time_ms_);
  if ( this->last_kill_time_ms_ )
  {
    last_kill_time_ms = this->last_kill_time_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->interval_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->interval_ms_);
    if ( now_ms > last_kill_time_ms + this->interval_ms_ )
      ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
  }
};

// Line 487: range 0000000015901006-0000000015901030
void __cdecl ChallengeCondDownLess::~ChallengeCondDownLess(ChallengeCondDownLess *const this)
{
  ChallengeCondDownLess::~ChallengeCondDownLess(this);
  operator delete(this, 0x30uLL);
};

// Line 487: range 0000000015900FB8-0000000015901005
void __cdecl ChallengeCondDownLess::~ChallengeCondDownLess(ChallengeCondDownLess *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondDownLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 490: range 00000000158B1256-00000000158B144C
void __fastcall ZN21ChallengeCondDownLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondDownLess *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN21ChallengeCondDownLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondDownLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->down_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->down_limit_);
  }
  this->down_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->down_count_);
  }
  this->down_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 492: range 00000000155BBE5C-00000000155BBFA2
int32_t __cdecl ChallengeCondDownLess::initChallengeCond(
        ChallengeCondDownLess *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->down_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->down_limit_);
    }
    this->down_limit_ = v5;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      496);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v6,
      (const char (*)[41])"ChallengeCondDownLess param_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 504: range 00000000155BBFA4-00000000155BBFEB
uint32_t __cdecl ChallengeCondDownLess::getProgress(const ChallengeCondDownLess *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->down_count_);
  }
  return this->down_count_;
};

// Line 509: range 00000000155BBFEC-00000000155BC095
void __cdecl ChallengeCondDownLess::notifyChallengeData(ChallengeCondDownLess *const this, PlayerPtr *p_player_ptr)
{
  uint32_t down_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->down_count_);
  }
  down_count = this->down_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, down_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 514: range 00000000155BC096-00000000155BC21A
void __cdecl ChallengeCondDownLess::onAvatarDown(ChallengeCondDownLess *const this)
{
  unsigned __int64 v1; // rax
  void (__fastcall *v2)(ChallengeCondDownLess *const, std::shared_ptr<Player> *); // rbx
  uint32_t down_count; // ecx
  std::shared_ptr<Player> v4; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->down_count_);
  }
  ++this->down_count_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  v2 = *(void (__fastcall **)(ChallengeCondDownLess *const, std::shared_ptr<Player> *))v1;
  std::shared_ptr<Player>::shared_ptr(&v4, 0LL);
  v2(this, &v4);
  std::shared_ptr<Player>::~shared_ptr(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->down_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->down_count_);
  }
  down_count = this->down_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->down_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->down_limit_);
  }
  if ( down_count >= this->down_limit_ )
    ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
};

// Line 530: range 0000000015900F8C-0000000015900FB6
void __cdecl ChallengeCondBeatenLess::~ChallengeCondBeatenLess(ChallengeCondBeatenLess *const this)
{
  ChallengeCondBeatenLess::~ChallengeCondBeatenLess(this);
  operator delete(this, 0x30uLL);
};

// Line 530: range 0000000015900F3E-0000000015900F8B
void __cdecl ChallengeCondBeatenLess::~ChallengeCondBeatenLess(ChallengeCondBeatenLess *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondBeatenLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 533: range 00000000158B17D4-00000000158B19CA
void __fastcall ZN23ChallengeCondBeatenLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondBeatenLess *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN23ChallengeCondBeatenLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondBeatenLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->beaten_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->beaten_limit_);
  }
  this->beaten_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->beaten_count_);
  }
  this->beaten_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 535: range 00000000155BC21C-00000000155BC35A
int32_t __cdecl ChallengeCondBeatenLess::initChallengeCond(
        ChallengeCondBeatenLess *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->beaten_count_);
    }
    this->beaten_count_ = v5;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      539);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v6,
      (const char (*)[43])"ChallengeCondBeatenLess param_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 547: range 00000000155BC35C-00000000155BC3A3
uint32_t __cdecl ChallengeCondBeatenLess::getProgress(const ChallengeCondBeatenLess *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->beaten_count_);
  }
  return this->beaten_count_;
};

// Line 552: range 00000000155BC3A4-00000000155BC44D
void __cdecl ChallengeCondBeatenLess::notifyChallengeData(ChallengeCondBeatenLess *const this, PlayerPtr *p_player_ptr)
{
  uint32_t beaten_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->beaten_count_);
  }
  beaten_count = this->beaten_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, beaten_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 557: range 00000000155BC44E-00000000155BC5D2
void __cdecl ChallengeCondBeatenLess::onAvatarBeaten(ChallengeCondBeatenLess *const this)
{
  unsigned __int64 v1; // rax
  void (__fastcall *v2)(ChallengeCondBeatenLess *const, std::shared_ptr<Player> *); // rbx
  uint32_t beaten_count; // ecx
  std::shared_ptr<Player> v4; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->beaten_count_);
  }
  ++this->beaten_count_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  v2 = *(void (__fastcall **)(ChallengeCondBeatenLess *const, std::shared_ptr<Player> *))v1;
  std::shared_ptr<Player>::shared_ptr(&v4, 0LL);
  v2(this, &v4);
  std::shared_ptr<Player>::~shared_ptr(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->beaten_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->beaten_count_);
  }
  beaten_count = this->beaten_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->beaten_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->beaten_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->beaten_limit_);
  }
  if ( beaten_count >= this->beaten_limit_ )
    ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
};

// Line 573: range 0000000015900EC4-0000000015900F11
void __cdecl ChallengeCondUnnaturalCount::~ChallengeCondUnnaturalCount(ChallengeCondUnnaturalCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondUnnaturalCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 573: range 0000000015900F12-0000000015900F3C
void __cdecl ChallengeCondUnnaturalCount::~ChallengeCondUnnaturalCount(ChallengeCondUnnaturalCount *const this)
{
  ChallengeCondUnnaturalCount::~ChallengeCondUnnaturalCount(this);
  operator delete(this, 0x30uLL);
};

// Line 576: range 00000000158B1D52-00000000158B1F94
void __fastcall ZN27ChallengeCondUnnaturalCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondUnnaturalCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN27ChallengeCondUnnaturalCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondUnnaturalCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_group_id_);
  }
  this->target_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_limit_);
  }
  this->kill_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 578: range 00000000155BC5D4-00000000155BC79E
int32_t __cdecl ChallengeCondUnnaturalCount::initChallengeCond(
        ChallengeCondUnnaturalCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_group_id_);
    }
    this->target_group_id_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->kill_limit_);
    }
    this->kill_limit_ = v8;
    ChallengeCondition::setMeet((ChallengeCondition *const)this);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      582);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v9,
      (const char (*)[60])"ChallengeCondUnnaturalCount param_vec's size is less than 2");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 592: range 00000000155BC7A0-00000000155BC7EF
uint32_t __cdecl ChallengeCondUnnaturalCount::getProgress(const ChallengeCondUnnaturalCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  return this->kill_count_;
};

// Line 597: range 00000000155BC7F0-00000000155BC8A1
void __cdecl ChallengeCondUnnaturalCount::notifyChallengeData(
        ChallengeCondUnnaturalCount *const this,
        PlayerPtr *p_player_ptr)
{
  uint32_t kill_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  kill_count = this->kill_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, kill_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 602: range 00000000155BC8A2-00000000155BCAE0
void __cdecl ChallengeCondUnnaturalCount::onMonsterDie(
        ChallengeCondUnnaturalCount *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t GroupId; // ecx
  char v4; // al
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(ChallengeCondUnnaturalCount *const, std::shared_ptr<Player> *); // rbx
  uint32_t kill_count; // ecx
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( !this->target_group_id_ )
    goto LABEL_8;
  GroupId = Entity::getGroupId((const Entity *const)monster);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( GroupId == this->target_group_id_ )
LABEL_8:
    v4 = 0;
  else
    v4 = 1;
  if ( !v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->kill_count_);
    }
    ++this->kill_count_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v6 = *(void (__fastcall **)(ChallengeCondUnnaturalCount *const, std::shared_ptr<Player> *))v5;
    std::shared_ptr<Player>::shared_ptr(&v9, 0LL);
    v6(this, &v9);
    std::shared_ptr<Player>::~shared_ptr(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->kill_count_);
    }
    kill_count = this->kill_count_;
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->kill_limit_);
    }
    if ( kill_count >= this->kill_limit_ )
      ChallengeCondition::setMeet((ChallengeCondition *const)this);
  }
};

// Line 624: range 0000000015900E4A-0000000015900E97
void __cdecl ChallengeCondFrozenLess::~ChallengeCondFrozenLess(ChallengeCondFrozenLess *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondFrozenLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 624: range 0000000015900E98-0000000015900EC2
void __cdecl ChallengeCondFrozenLess::~ChallengeCondFrozenLess(ChallengeCondFrozenLess *const this)
{
  ChallengeCondFrozenLess::~ChallengeCondFrozenLess(this);
  operator delete(this, 0x30uLL);
};

// Line 627: range 00000000158B231C-00000000158B2512
void __fastcall ZN23ChallengeCondFrozenLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondFrozenLess *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN23ChallengeCondFrozenLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondFrozenLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->frozen_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->frozen_limit_);
  }
  this->frozen_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frozen_count_);
  }
  this->frozen_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 629: range 00000000155BCAE2-00000000155BCC28
int32_t __cdecl ChallengeCondFrozenLess::initChallengeCond(
        ChallengeCondFrozenLess *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->frozen_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->frozen_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->frozen_limit_);
    }
    this->frozen_limit_ = v5;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      633);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v6,
      (const char (*)[43])"ChallengeCondFrozenLess param_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 641: range 00000000155BCC2A-00000000155BCC71
uint32_t __cdecl ChallengeCondFrozenLess::getProgress(const ChallengeCondFrozenLess *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->frozen_count_);
  }
  return this->frozen_count_;
};

// Line 646: range 00000000155BCC72-00000000155BCD1B
void __cdecl ChallengeCondFrozenLess::notifyChallengeData(ChallengeCondFrozenLess *const this, PlayerPtr *p_player_ptr)
{
  uint32_t frozen_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->frozen_count_);
  }
  frozen_count = this->frozen_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, frozen_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 651: range 00000000155BCD1C-00000000155BCEA0
void __cdecl ChallengeCondFrozenLess::onAvatarFrozen(ChallengeCondFrozenLess *const this)
{
  unsigned __int64 v1; // rax
  void (__fastcall *v2)(ChallengeCondFrozenLess *const, std::shared_ptr<Player> *); // rbx
  uint32_t frozen_count; // ecx
  std::shared_ptr<Player> v4; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->frozen_count_);
  }
  ++this->frozen_count_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  v2 = *(void (__fastcall **)(ChallengeCondFrozenLess *const, std::shared_ptr<Player> *))v1;
  std::shared_ptr<Player>::shared_ptr(&v4, 0LL);
  v2(this, &v4);
  std::shared_ptr<Player>::~shared_ptr(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frozen_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->frozen_count_);
  }
  frozen_count = this->frozen_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->frozen_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->frozen_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->frozen_limit_);
  }
  if ( frozen_count >= this->frozen_limit_ )
    ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
};

// Line 667: range 0000000015900E1E-0000000015900E48
void __cdecl ChallengeCondKillMonster::~ChallengeCondKillMonster(ChallengeCondKillMonster *const this)
{
  ChallengeCondKillMonster::~ChallengeCondKillMonster(this);
  operator delete(this, 0x30uLL);
};

// Line 667: range 0000000015900DD0-0000000015900E1D
void __cdecl ChallengeCondKillMonster::~ChallengeCondKillMonster(ChallengeCondKillMonster *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondKillMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 670: range 00000000158B289A-00000000158B2ADC
void __fastcall ZN24ChallengeCondKillMonsterCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondKillMonster *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN24ChallengeCondKillMonsterCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondKillMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_group_id_);
  }
  this->target_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_monster_config_id_);
  }
  this->target_monster_config_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 672: range 00000000155BCEA2-00000000155BD060
int32_t __cdecl ChallengeCondKillMonster::initChallengeCond(
        ChallengeCondKillMonster *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_group_id_);
    }
    this->target_group_id_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_monster_config_id_);
    }
    this->target_monster_config_id_ = v8;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      676);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v9,
      (const char (*)[54])"ChallengeCondKillMonster param_vec's size less than 2");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 684: range 00000000155BD062-00000000155BD0B1
uint32_t __cdecl ChallengeCondKillMonster::getProgress(const ChallengeCondKillMonster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->kill_count_);
  }
  return this->kill_count_;
};

// Line 689: range 00000000155BD0B2-00000000155BD26F
void __cdecl ChallengeCondKillMonster::onMonsterDie(
        ChallengeCondKillMonster *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t GroupId; // ecx
  char v4; // al
  uint32_t ConfigId; // ecx
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( !this->target_group_id_ )
    goto LABEL_8;
  GroupId = Entity::getGroupId((const Entity *const)monster);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_group_id_);
  }
  if ( GroupId == this->target_group_id_ )
LABEL_8:
    v4 = 0;
  else
    v4 = 1;
  if ( !v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_monster_config_id_);
    }
    if ( !this->target_monster_config_id_ )
      goto LABEL_17;
    ConfigId = Entity::getConfigId((const Entity *const)monster);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_monster_config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_monster_config_id_);
    }
    if ( ConfigId == this->target_monster_config_id_ )
LABEL_17:
      v6 = 0;
    else
      v6 = 1;
    if ( !v6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->kill_count_);
      }
      ++this->kill_count_;
      ChallengeCondition::setMeet((ChallengeCondition *const)this);
    }
  }
};

// Line 710: range 0000000015900D46-0000000015900DA3
void __cdecl ChallengeCondTrigger::~ChallengeCondTrigger(ChallengeCondTrigger *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  std::string::~string(&this->target_tag_str_);
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 710: range 0000000015900DA4-0000000015900DCE
void __cdecl ChallengeCondTrigger::~ChallengeCondTrigger(ChallengeCondTrigger *const this)
{
  ChallengeCondTrigger::~ChallengeCondTrigger(this);
  operator delete(this, 0x60uLL);
};

// Line 713: range 00000000158B2E64-00000000158B313E
void __fastcall ZN20ChallengeCondTriggerCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondTrigger *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondTriggerCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_trigger_event_);
  }
  this->target_trigger_event_ = EVENT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_tag_);
  }
  this->target_tag_ = 0;
  std::string::basic_string(&this->target_tag_str_);
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_count_);
  }
  this->fire_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_limit_);
  }
  this->fire_limit_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ_);
  this->is_succ_ = 1;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 715: range 00000000155BD270-00000000155BD73A
int32_t __cdecl ChallengeCondTrigger::initChallengeCond(
        ChallengeCondTrigger *const this,
        const std::vector<unsigned int> *param_vec)
{
  data::EventType *v3; // rax
  data::EventType *v4; // rdx
  data::EventType v5; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  unsigned int *v10; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  uint32_t v13; // ecx
  std::vector<unsigned int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  bool v16; // cl
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  uint32_t fire_count; // ecx
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 3 )
  {
    v3 = (data::EventType *)std::vector<unsigned int>::operator[](param_vec, 0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_trigger_event_);
    }
    this->target_trigger_event_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_tag_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_tag_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_tag_);
    }
    this->target_tag_ = v8;
    v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    common::tools::StringUtils::numToStr<unsigned int>((std::string *)&v22, *v10);
    std::string::operator=(&this->target_tag_str_, &v22);
    std::string::~string(&v22);
    v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                param_vec,
                                                                                                2uLL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v13 = *v12;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->fire_limit_);
    }
    this->fire_limit_ = v13;
    v14 = std::vector<unsigned int>::operator[](param_vec, 3uLL);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    v16 = *v15 != 0;
    if ( *(char *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_succ_);
    this->is_succ_ = v16;
    if ( std::vector<unsigned int>::size(param_vec) <= 4 )
      return 0;
    v17 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                param_vec,
                                                                                                4uLL);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    v19 = *v18;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->fire_count_);
    }
    this->fire_count_ = v19;
    fire_count = this->fire_count_;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->fire_limit_);
    }
    if ( fire_count < this->fire_limit_ )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_condition.cpp",
        "initChallengeCond",
        732);
      v21 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
              &v22,
              (const char (*)[80])"ChallengeCondTrigger param_vec. fire_count_ larger than fire_limit_. param_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v21, param_vec);
      common::milog::MiLogStream::~MiLogStream(&v22);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      719);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v22,
      (const char (*)[50])"ChallengeCondTrigger param_vec's size less than 4");
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
};

// Line 739: range 00000000155BD73C-00000000155BD783
uint32_t __cdecl ChallengeCondTrigger::getProgress(const ChallengeCondTrigger *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fire_count_);
  }
  return this->fire_count_;
};

// Line 744: range 00000000155BD784-00000000155BD82D
void __cdecl ChallengeCondTrigger::notifyChallengeData(ChallengeCondTrigger *const this, PlayerPtr *p_player_ptr)
{
  uint32_t fire_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fire_count_);
  }
  fire_count = this->fire_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, fire_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 749: range 00000000155BD82E-00000000155BD856
bool __cdecl ChallengeCondTrigger::isTriggerEventMatch(
        ChallengeCondTrigger *const this,
        const std::vector<data::EventType> *trigger_event_vec)
{
  return common::tools::MiscUtils::isContains<data::EventType>(trigger_event_vec, &this->target_trigger_event_);
};

// Line 754: range 00000000155BD858-00000000155BD8F7
bool __cdecl ChallengeCondTrigger::isTriggerTagMatch(ChallengeCondTrigger *const this, const std::string *trigger_tag)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_tag_);
  }
  if ( this->target_tag_ )
    return std::operator==<char>(trigger_tag, &this->target_tag_str_);
  return (unsigned __int8)std::string::empty(trigger_tag) || std::operator==<char>(trigger_tag, &this->target_tag_str_);
};

// Line 763: range 00000000155BD8F8-00000000155BDBDF
void __cdecl ChallengeCondTrigger::onTriggerFired(
        ChallengeCondTrigger *const this,
        const std::vector<data::EventType> *trigger_event_vec,
        const std::string *trigger_tag)
{
  bool v3; // al
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(ChallengeCondTrigger *const, std::shared_ptr<Player> *); // rbx
  ChallengeComp *challenge_comp; // rax
  uint32_t fire_count; // ecx
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_trigger_event_);
  }
  v3 = this->target_trigger_event_ && !ChallengeCondTrigger::isTriggerEventMatch(this, trigger_event_vec);
  if ( !v3 && ChallengeCondTrigger::isTriggerTagMatch(this, trigger_tag) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->fire_count_);
    }
    ++this->fire_count_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v4 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v5 = *(void (__fastcall **)(ChallengeCondTrigger *const, std::shared_ptr<Player> *))v4;
    std::shared_ptr<Player>::shared_ptr(&v9, 0LL);
    v5(this, &v9);
    std::shared_ptr<Player>::~shared_ptr(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
      challenge_comp = (ChallengeComp *)__asan_report_load8(&this->challenge_);
    ChallengeComp::tryTriggerMarkedEvent(challenge_comp, this->challenge_, NONE, 0, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->fire_count_);
    }
    fire_count = this->fire_count_;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->fire_limit_);
    }
    if ( fire_count >= this->fire_limit_ )
    {
      if ( *(char *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_succ_);
      if ( this->is_succ_ )
        ChallengeCondition::setMeet((ChallengeCondition *const)this);
      else
        ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
    }
  }
};

// Line 790: range 00000000155BDBE0-00000000155BDC10
std::pair<unsigned int,unsigned int> __cdecl ChallengeCondTrigger::getTriggerFireCountAndLimit(
        const ChallengeCondTrigger *const this)
{
  std::pair<unsigned int,unsigned int> v2; // [rsp+18h] [rbp-8h] BYREF

  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
    &v2,
    &this->fire_count_,
    &this->fire_limit_);
  return v2;
};

// Line 795: range 00000000155BDC12-00000000155BDC61
data::EventType __cdecl ChallengeCondTrigger::getTriggerEventType(const ChallengeCondTrigger *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_trigger_event_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_trigger_event_);
  }
  return this->target_trigger_event_;
};

// Line 810: range 0000000015900D1A-0000000015900D44
void __cdecl ChallengeCondGuardHp::~ChallengeCondGuardHp(ChallengeCondGuardHp *const this)
{
  ChallengeCondGuardHp::~ChallengeCondGuardHp(this);
  operator delete(this, 0x38uLL);
};

// Line 810: range 0000000015900CCC-0000000015900D19
void __cdecl ChallengeCondGuardHp::~ChallengeCondGuardHp(ChallengeCondGuardHp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondGuardHp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 813: range 00000000158B34D0-00000000158B3758
void __fastcall ZN20ChallengeCondGuardHpCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondGuardHp *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondGuardHpCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondGuardHp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id_);
  }
  this->config_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_percent_limit_);
  }
  this->hp_percent_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_hp_percent_);
  }
  this->cur_hp_percent_ = 0.0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 815: range 00000000155BDC62-00000000155BE205
int32_t __cdecl ChallengeCondGuardHp::initChallengeCond(
        ChallengeCondGuardHp *const this,
        const std::vector<unsigned int> *param_vec)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  uint32_t *v8; // rdx
  uint32_t v9; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v10; // rax
  uint32_t *v11; // rdx
  uint32_t v12; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  uint32_t v16; // ecx
  uint32_t v17; // ecx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float v19; // edx
  int32_t result; // eax
  common::milog::MiLogStream v21; // [rsp+10h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 scene_ptr:825 64 16 13 group_ptr:828 96 16 14 gadget_ptr:831";
  *(_QWORD *)(v3 + 16) = ChallengeCondGuardHp::initChallengeCond;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( std::vector<unsigned int>::size(param_vec) > 2 )
  {
    v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      *(double *)v2.m128i_i64 = __asan_report_load4(v7);
    }
    v9 = *v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->group_id_);
    }
    this->group_id_ = v9;
    v10 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                param_vec,
                                                                                                1uLL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      *(double *)v2.m128i_i64 = __asan_report_load4(v10);
    }
    v12 = *v11;
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->config_id_);
    }
    this->config_id_ = v12;
    v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                param_vec,
                                                                                                2uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      *(double *)v2.m128i_i64 = __asan_report_load4(v13);
    }
    v15 = *v14;
    if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->hp_percent_limit_);
    }
    this->hp_percent_limit_ = v15;
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    ChallengeComp::getGroup(this->challenge_comp_);
    Group::getScene((const Group *const)(v3 + 32));
    if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
    {
      v16 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4(&this->group_id_);
      }
      Scene::findGroup((Scene *const)(v3 + 64), v16);
      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 64)) )
      {
        v17 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v2.m128i_i64 = __asan_report_load4(&this->config_id_);
        }
        Group::findEntityByConfigId<Gadget>((Group *const)(v3 + 96), v17);
        if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
        {
          v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          *(float *)v2.m128i_i32 = ChallengeCondGuardHp::calcCreatureHpPercent(this, v18);
          v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cur_hp_percent_);
          }
          this->cur_hp_percent_ = v19;
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
    }
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    v6 = 0;
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      819);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v21,
      (const char (*)[50])"ChallengeCondGuardHp param_vec's size less than 3");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  result = v6;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 842: range 00000000155BE206-00000000155BE27A
float __cdecl ChallengeCondGuardHp::calcCreatureHpPercent(const ChallengeCondGuardHp *const this, Creature *creature)
{
  __m128i v2; // xmm0
  float cur_hp; // [rsp+18h] [rbp-8h]
  float max_hp; // [rsp+1Ch] [rbp-4h]

  *(float *)v2.m128i_i32 = Creature::getCurHp(creature);
  cur_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  *(float *)v2.m128i_i32 = Creature::getMaxHp(creature);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( std::fabs(max_hp) > 0.00000011920929 )
    return 100.0 * (float)(cur_hp / max_hp);
  else
    return 0.0;
};

// Line 853: range 00000000155BE27C-00000000155BE351
uint32_t __cdecl ChallengeCondGuardHp::getProgress(const ChallengeCondGuardHp *const this)
{
  uint32_t *v1; // rax
  uint32_t *v2; // rdx
  unsigned int __a; // [rsp+18h] [rbp-8h] BYREF
  unsigned int __b; // [rsp+1Ch] [rbp-4h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_hp_percent_);
  }
  if ( this->cur_hp_percent_ == 0.0 )
    return 0;
  __b = (int)(float)(this->cur_hp_percent_ + 0.00000011920929);
  __a = 1;
  v1 = (uint32_t *)std::max<unsigned int>(&__a, &__b);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  return *v2;
};

// Line 858: range 00000000155BE352-00000000155BE41B
void __cdecl ChallengeCondGuardHp::notifyChallengeData(ChallengeCondGuardHp *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // rax
  uint32_t v3; // r12d
  std::shared_ptr<Player> v4; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_ChallengeCondition + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_ChallengeCondition + 3);
  v3 = (*(__int64 (__fastcall **)(ChallengeCondGuardHp *const))v2)(this);
  std::shared_ptr<Player>::shared_ptr(&v4, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v4, v3);
  std::shared_ptr<Player>::~shared_ptr(&v4);
};

// Line 864: range 00000000155BE41C-00000000155BE8AF
void __cdecl ChallengeCondGuardHp::onGadgetHpPercentChange(
        ChallengeCondGuardHp *const this,
        Gadget *gadget,
        const ChangeHpContext *change_hp_context)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t GroupId; // ecx
  uint32_t ConfigId; // ecx
  char v10; // al
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(ChallengeCondGuardHp *const, std::shared_ptr<Player> *); // r14
  float v13; // xmm1_4
  float cur_hp_percent; // [rsp+2Ch] [rbp-84h]
  std::shared_ptr<Player> v16; // [rsp+30h] [rbp-80h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 group_ptr:866";
  *(_QWORD *)(v4 + 16) = ChallengeCondGuardHp::onGadgetHpPercentChange;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v4 + 32));
  if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    GroupId = Group::getGroupId(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(&this->group_id_);
    }
    if ( GroupId != this->group_id_ )
      goto LABEL_11;
    ConfigId = Entity::getConfigId((const Entity *const)gadget);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(&this->config_id_);
    }
    if ( ConfigId == this->config_id_ )
      v10 = 0;
    else
LABEL_11:
      v10 = 1;
    if ( !v10 )
    {
      if ( *(char *)(((unsigned __int64)&change_hp_context->is_die >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&change_hp_context->is_die);
      if ( change_hp_context->is_die )
      {
        ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
      }
      else
      {
        *(float *)v3.m128i_i32 = ChallengeCondGuardHp::calcCreatureHpPercent(this, gadget);
        cur_hp_percent = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_hp_percent_);
        }
        if ( this->cur_hp_percent_ != cur_hp_percent )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cur_hp_percent_);
          }
          this->cur_hp_percent_ = cur_hp_percent;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v11 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
          v12 = *(void (__fastcall **)(ChallengeCondGuardHp *const, std::shared_ptr<Player> *))v11;
          std::shared_ptr<Player>::shared_ptr(&v16, 0LL);
          v12(this, &v16);
          std::shared_ptr<Player>::~shared_ptr(&v16);
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_hp_percent_);
          }
          v13 = this->cur_hp_percent_;
          if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->hp_percent_limit_);
          }
          if ( (float)(int)this->hp_percent_limit_ > v13 )
            ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
        }
      }
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 897: range 00000000155BE8B0-00000000155BE977
void __cdecl ChallengeCondGuardHp::onChallengeBegin(ChallengeCondGuardHp *const this)
{
  float cur_hp_percent; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_hp_percent_);
  }
  cur_hp_percent = this->cur_hp_percent_;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hp_percent_limit_);
  }
  if ( (float)(int)this->hp_percent_limit_ > cur_hp_percent )
    ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
};

// Line 912: range 0000000015900CA0-0000000015900CCA
void __cdecl ChallengeCondTimeDec::~ChallengeCondTimeDec(ChallengeCondTimeDec *const this)
{
  ChallengeCondTimeDec::~ChallengeCondTimeDec(this);
  operator delete(this, 0x28uLL);
};

// Line 912: range 0000000015900C52-0000000015900C9F
void __cdecl ChallengeCondTimeDec::~ChallengeCondTimeDec(ChallengeCondTimeDec *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondTimeDec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 915: range 00000000158B3AEA-00000000158B3C9C
void __fastcall ZN20ChallengeCondTimeDecCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondTimeDec *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondTimeDecCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondTimeDec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_seconds_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reduce_seconds_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reduce_seconds_);
  }
  this->reduce_seconds_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 917: range 00000000155BE978-00000000155BEABE
int32_t __cdecl ChallengeCondTimeDec::initChallengeCond(
        ChallengeCondTimeDec *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_seconds_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reduce_seconds_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->reduce_seconds_);
    }
    this->reduce_seconds_ = v5;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      921);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v6,
      (const char (*)[50])"ChallengeCondTimeDec param_vec's size less than 1");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 932: range 00000000155BEAC0-00000000155BEBC6
void __cdecl ChallengeCondTimeDec::onMonsterDie(
        ChallengeCondTimeDec *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t GroupId; // ebx
  Group *Group; // rax
  ChallengeComp *challenge_comp; // rbx
  uint32_t reduce_seconds; // r12d
  uint32_t ChallengeIndex; // eax

  GroupId = Entity::getGroupId((const Entity *const)monster);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  Group = ChallengeComp::getGroup(this->challenge_comp_);
  if ( GroupId == Group::getGroupId(Group) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->challenge_comp_);
    challenge_comp = this->challenge_comp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reduce_seconds_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reduce_seconds_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->reduce_seconds_);
    }
    reduce_seconds = this->reduce_seconds_;
    ChallengeIndex = ChallengeCondition::getChallengeIndex((const ChallengeCondition *const)this);
    ChallengeComp::relaxChallengeTimeRestriction(challenge_comp, ChallengeIndex, reduce_seconds, DEC);
  }
};

// Line 944: range 0000000015900BD8-0000000015900C25
void __cdecl ChallengeCondChildSucc::~ChallengeCondChildSucc(ChallengeCondChildSucc *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondChildSucc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 944: range 0000000015900C26-0000000015900C50
void __cdecl ChallengeCondChildSucc::~ChallengeCondChildSucc(ChallengeCondChildSucc *const this)
{
  ChallengeCondChildSucc::~ChallengeCondChildSucc(this);
  operator delete(this, 0x30uLL);
};

// Line 947: range 00000000158B402E-00000000158B4224
void __fastcall ZN22ChallengeCondChildSuccCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondChildSucc *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN22ChallengeCondChildSuccCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondChildSucc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_point_);
  }
  this->cur_point_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_limit_);
  }
  this->point_limit_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 949: range 00000000155BEBC8-00000000155BED06
int32_t __cdecl ChallengeCondChildSucc::initChallengeCond(
        ChallengeCondChildSucc *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->point_limit_);
    }
    this->point_limit_ = v5;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      953);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v6,
      (const char (*)[52])"ChallengeCondChildSucc param_vec's size less than 1");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 961: range 00000000155BED08-00000000155BED57
uint32_t __cdecl ChallengeCondChildSucc::getProgress(const ChallengeCondChildSucc *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_point_);
  }
  return this->cur_point_;
};

// Line 966: range 00000000155BED58-00000000155BEE09
void __cdecl ChallengeCondChildSucc::notifyChallengeData(ChallengeCondChildSucc *const this, PlayerPtr *p_player_ptr)
{
  uint32_t cur_point; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_point_);
  }
  cur_point = this->cur_point_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_point);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 971: range 00000000155BEE0A-00000000155BF1C7
void __cdecl ChallengeCondChildSucc::onChildSettle(
        ChallengeCondChildSucc *const this,
        bool is_succ,
        const Challenge *child_challenge)
{
  uint32_t v3; // ecx
  uint32_t cur_point; // ecx
  uint32_t v5; // edi
  __int64 challenge_id; // rcx
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(ChallengeCondChildSucc *const, std::shared_ptr<Player> *); // rbx
  uint32_t v9; // ecx
  uint32_t old_point; // [rsp+2Ch] [rbp-44h]
  std::shared_ptr<Player> v13; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  if ( is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&child_challenge->succ_points_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_challenge->succ_points_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&child_challenge->succ_points_);
    }
    if ( child_challenge->succ_points_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      old_point = this->cur_point_;
      v3 = old_point;
      if ( *(_BYTE *)(((unsigned __int64)&child_challenge->succ_points_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_challenge->succ_points_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_challenge->succ_points_);
      }
      this->cur_point_ = v3 + child_challenge->succ_points_;
      cur_point = this->cur_point_;
      if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->point_limit_);
      }
      if ( cur_point > this->point_limit_ )
        this->cur_point_ = this->point_limit_;
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_condition.cpp",
        "onChildSettle",
        988);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      v5 = this->cur_point_;
      if ( *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v5 = (_DWORD)child_challenge + 32;
        __asan_report_load4(&child_challenge->challenge_id);
      }
      challenge_id = child_challenge->challenge_id;
      if ( *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)child_challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_index >> 3)
                                                                       + 0x7FFF8000) )
      {
        v5 = (_DWORD)child_challenge + 28;
        __asan_report_load4(&child_challenge->challenge_index);
      }
      common::milog::MiLogStream::operator()(
        &v14,
        "child @index=%u @id=%u success. point change %u => %u",
        child_challenge->challenge_index,
        challenge_id,
        old_point,
        v5);
      common::milog::MiLogStream::~MiLogStream(&v14);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v8 = *(void (__fastcall **)(ChallengeCondChildSucc *const, std::shared_ptr<Player> *))v7;
      std::shared_ptr<Player>::shared_ptr(&v13, 0LL);
      v8(this, &v13);
      std::shared_ptr<Player>::~shared_ptr(&v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      v9 = this->cur_point_;
      if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->point_limit_);
      }
      if ( v9 >= this->point_limit_ )
        ChallengeCondition::setMeet((ChallengeCondition *const)this);
    }
  }
};

// Line 997: range 00000000155BF1C8-00000000155BF54F
void __cdecl ChallengeCondChildSucc::onModifyProperty(
        ChallengeCondChildSucc *const this,
        data::FatherChallengeProperty property_type,
        int32_t mod_value,
        bool can_exceed_limit)
{
  uint32_t v4; // edi
  uint32_t cur_point; // ecx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(ChallengeCondChildSucc *const, std::shared_ptr<Player> *); // rbx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(ChallengeCondChildSucc *const, std::shared_ptr<Player> *); // rbx
  bool is_meet; // [rsp+2Fh] [rbp-31h]
  int64_t mod_result_0; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Player> v14; // [rsp+40h] [rbp-20h] BYREF

  if ( mod_value )
  {
    is_meet = 0;
    if ( property_type == CUR_SUCC )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      if ( this->cur_point_ + (__int64)mod_value >= 0 )
      {
        v4 = this->cur_point_ + mod_value;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
        {
          v4 = (_DWORD)this + 36;
          __asan_report_store4(&this->cur_point_);
        }
        this->cur_point_ = v4;
        cur_point = this->cur_point_;
        if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->point_limit_);
        }
        if ( cur_point >= this->point_limit_ )
        {
          this->cur_point_ = this->point_limit_;
          is_meet = 1;
        }
      }
      else
      {
        this->cur_point_ = 0;
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v7 = *(void (__fastcall **)(ChallengeCondChildSucc *const, std::shared_ptr<Player> *))v6;
      std::shared_ptr<Player>::shared_ptr(&v14, 0LL);
      v7(this, &v14);
      std::shared_ptr<Player>::~shared_ptr(&v14);
    }
    if ( property_type == SUM_SUCC )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->point_limit_);
      }
      mod_result_0 = this->point_limit_ + (__int64)mod_value;
      if ( mod_result_0 > 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->point_limit_);
        }
        this->point_limit_ = mod_result_0;
      }
      else
      {
        this->point_limit_ = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_point_);
        }
        if ( this->cur_point_ >= this->point_limit_ )
        {
          this->cur_point_ = this->point_limit_;
          is_meet = 1;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v8 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v9 = *(void (__fastcall **)(ChallengeCondChildSucc *const, std::shared_ptr<Player> *))v8;
      std::shared_ptr<Player>::shared_ptr(&v14, 0LL);
      v9(this, &v14);
      std::shared_ptr<Player>::~shared_ptr(&v14);
    }
    if ( is_meet )
      ChallengeCondition::setMeet((ChallengeCondition *const)this);
  }
};

// Line 1054: range 0000000015900BAC-0000000015900BD6
void __cdecl ChallengeCondChildFail::~ChallengeCondChildFail(ChallengeCondChildFail *const this)
{
  ChallengeCondChildFail::~ChallengeCondChildFail(this);
  operator delete(this, 0x30uLL);
};

// Line 1054: range 0000000015900B5E-0000000015900BAB
void __cdecl ChallengeCondChildFail::~ChallengeCondChildFail(ChallengeCondChildFail *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondChildFail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1057: range 00000000158B45AC-00000000158B47A2
void __fastcall ZN22ChallengeCondChildFailCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondChildFail *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN22ChallengeCondChildFailCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondChildFail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_point_);
  }
  this->cur_point_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_limit_);
  }
  this->point_limit_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1059: range 00000000155BF550-00000000155BF68E
int32_t __cdecl ChallengeCondChildFail::initChallengeCond(
        ChallengeCondChildFail *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->point_limit_);
    }
    this->point_limit_ = v5;
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1063);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v6,
      (const char (*)[52])"ChallengeCondChildFail param_vec's size less than 1");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 1071: range 00000000155BF690-00000000155BF6DF
uint32_t __cdecl ChallengeCondChildFail::getProgress(const ChallengeCondChildFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_point_);
  }
  return this->cur_point_;
};

// Line 1076: range 00000000155BF6E0-00000000155BF791
void __cdecl ChallengeCondChildFail::notifyChallengeData(ChallengeCondChildFail *const this, PlayerPtr *p_player_ptr)
{
  uint32_t cur_point; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_point_);
  }
  cur_point = this->cur_point_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_point);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1081: range 00000000155BF792-00000000155BFB5F
void __cdecl ChallengeCondChildFail::onChildSettle(
        ChallengeCondChildFail *const this,
        bool is_succ,
        const Challenge *child_challenge)
{
  uint32_t v3; // ecx
  uint32_t cur_point; // ecx
  uint32_t v5; // edi
  __int64 challenge_id; // rcx
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(ChallengeCondChildFail *const, std::shared_ptr<Player> *); // rbx
  uint32_t v9; // ecx
  uint32_t old_point; // [rsp+2Ch] [rbp-44h]
  std::shared_ptr<Player> v13; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  if ( !is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&child_challenge->fail_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)child_challenge + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_challenge->fail_points_ >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&child_challenge->fail_points_);
    }
    if ( child_challenge->fail_points_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      old_point = this->cur_point_;
      v3 = old_point;
      if ( *(_BYTE *)(((unsigned __int64)&child_challenge->fail_points_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)child_challenge + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_challenge->fail_points_ >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&child_challenge->fail_points_);
      }
      this->cur_point_ = v3 + child_challenge->fail_points_;
      cur_point = this->cur_point_;
      if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->point_limit_);
      }
      if ( cur_point > this->point_limit_ )
        this->cur_point_ = this->point_limit_;
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_condition.cpp",
        "onChildSettle",
        1098);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      v5 = this->cur_point_;
      if ( *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v5 = (_DWORD)child_challenge + 32;
        __asan_report_load4(&child_challenge->challenge_id);
      }
      challenge_id = child_challenge->challenge_id;
      if ( *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)child_challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_index >> 3)
                                                                       + 0x7FFF8000) )
      {
        v5 = (_DWORD)child_challenge + 28;
        __asan_report_load4(&child_challenge->challenge_index);
      }
      common::milog::MiLogStream::operator()(
        &v14,
        "child @index=%u @id=%u fail. point change %u => %u",
        child_challenge->challenge_index,
        challenge_id,
        old_point,
        v5);
      common::milog::MiLogStream::~MiLogStream(&v14);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v8 = *(void (__fastcall **)(ChallengeCondChildFail *const, std::shared_ptr<Player> *))v7;
      std::shared_ptr<Player>::shared_ptr(&v13, 0LL);
      v8(this, &v13);
      std::shared_ptr<Player>::~shared_ptr(&v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      v9 = this->cur_point_;
      if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->point_limit_);
      }
      if ( v9 >= this->point_limit_ )
        ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
    }
  }
};

// Line 1107: range 00000000155BFB60-00000000155BFEEC
void __cdecl ChallengeCondChildFail::onModifyProperty(
        ChallengeCondChildFail *const this,
        data::FatherChallengeProperty property_type,
        int32_t mod_value,
        bool can_exceed_limit)
{
  uint32_t v4; // edi
  uint32_t cur_point; // ecx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(ChallengeCondChildFail *const, std::shared_ptr<Player> *); // rbx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(ChallengeCondChildFail *const, std::shared_ptr<Player> *); // rbx
  bool is_fail; // [rsp+2Fh] [rbp-31h]
  int64_t mod_result_0; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Player> v14; // [rsp+40h] [rbp-20h] BYREF

  if ( mod_value )
  {
    is_fail = 0;
    if ( property_type == CUR_FAIL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_point_);
      }
      if ( this->cur_point_ + (__int64)mod_value >= 0 )
      {
        v4 = this->cur_point_ + mod_value;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
        {
          v4 = (_DWORD)this + 36;
          __asan_report_store4(&this->cur_point_);
        }
        this->cur_point_ = v4;
        cur_point = this->cur_point_;
        if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->point_limit_);
        }
        if ( cur_point >= this->point_limit_ )
        {
          this->cur_point_ = this->point_limit_;
          is_fail = 1;
        }
      }
      else
      {
        this->cur_point_ = 0;
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v7 = *(void (__fastcall **)(ChallengeCondChildFail *const, std::shared_ptr<Player> *))v6;
      std::shared_ptr<Player>::shared_ptr(&v14, 0LL);
      v7(this, &v14);
      std::shared_ptr<Player>::~shared_ptr(&v14);
    }
    if ( property_type == SUM_FAIL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->point_limit_);
      }
      mod_result_0 = this->point_limit_ + (__int64)mod_value;
      if ( mod_result_0 > 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point_limit_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->point_limit_);
        }
        this->point_limit_ = mod_result_0;
      }
      else
      {
        this->point_limit_ = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_point_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_point_);
        }
        if ( this->cur_point_ >= this->point_limit_ )
        {
          this->cur_point_ = this->point_limit_;
          is_fail = 1;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v8 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v9 = *(void (__fastcall **)(ChallengeCondChildFail *const, std::shared_ptr<Player> *))v8;
      std::shared_ptr<Player>::shared_ptr(&v14, 0LL);
      v9(this, &v14);
      std::shared_ptr<Player>::~shared_ptr(&v14);
    }
    if ( is_fail )
      ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
  }
};

// Line 1164: range 0000000015900B32-0000000015900B5C
void __cdecl ChallengeCondMonsterDamageCount::~ChallengeCondMonsterDamageCount(
        ChallengeCondMonsterDamageCount *const this)
{
  ChallengeCondMonsterDamageCount::~ChallengeCondMonsterDamageCount(this);
  operator delete(this, 0x30uLL);
};

// Line 1164: range 0000000015900AE4-0000000015900B31
void __cdecl ChallengeCondMonsterDamageCount::~ChallengeCondMonsterDamageCount(
        ChallengeCondMonsterDamageCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondMonsterDamageCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1167: range 00000000158B4B2A-00000000158B4D20
void __fastcall ZN31ChallengeCondMonsterDamageCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondMonsterDamageCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN31ChallengeCondMonsterDamageCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondMonsterDamageCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_damage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_damage_);
  }
  this->target_damage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_damage_);
  }
  this->cur_damage_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1169: range 00000000155BFEEE-00000000155C0023
int32_t __cdecl ChallengeCondMonsterDamageCount::initChallengeCond(
        ChallengeCondMonsterDamageCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_damage_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_damage_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_damage_);
    }
    this->target_damage_ = v5;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1173);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      &v6,
      (const char (*)[61])"ChallengeCondMonsterDamageCount param_vec's size less than 1");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 1180: range 00000000155C0024-00000000155C006B
uint32_t __cdecl ChallengeCondMonsterDamageCount::getProgress(const ChallengeCondMonsterDamageCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_damage_);
  }
  return this->cur_damage_;
};

// Line 1185: range 00000000155C006C-00000000155C0115
void __cdecl ChallengeCondMonsterDamageCount::notifyChallengeData(
        ChallengeCondMonsterDamageCount *const this,
        PlayerPtr *p_player_ptr)
{
  uint32_t cur_damage; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_damage_);
  }
  cur_damage = this->cur_damage_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_damage);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1190: range 00000000155C0116-00000000155C0503
void __cdecl ChallengeCondMonsterDamageCount::onCreatureHurt(
        ChallengeCondMonsterDamageCount *const this,
        Creature *attacker,
        Creature *defenser,
        HurtContext *context)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  double v7; // xmm0_8
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(ChallengeCondMonsterDamageCount *const, std::shared_ptr<Creature> *, double); // r14
  uint32_t cur_damage; // ecx
  int32_t damage_count; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Creature> v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 15 avatar_ptr:1192 64 16 16 monster_ptr:1193";
  *(_QWORD *)(v4 + 16) = ChallengeCondMonsterDamageCount::onCreatureHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  Creature::findTopOwnerOrSelf((Creature *const)&v14);
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 32));
  std::shared_ptr<Creature>::~shared_ptr(&v14);
  toPtr<Monster,Creature>((Creature *)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&context->final_damage);
  }
  *(_QWORD *)&v7 = LODWORD(context->final_damage);
  damage_count = (int)*(float *)&v7;
  if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 32), 0LL)
    && !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v4 + 64), 0LL)
    && damage_count > 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = __asan_report_load4(&this->cur_damage_);
    }
    this->cur_damage_ += damage_count;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    v10 = *(void (__fastcall **)(ChallengeCondMonsterDamageCount *const, std::shared_ptr<Creature> *, double))v9;
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&v14, 0LL);
    v10(this, &v14, v7);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_damage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_damage_);
    }
    cur_damage = this->cur_damage_;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_damage_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_damage_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->target_damage_);
    }
    if ( cur_damage >= this->target_damage_ )
      ChallengeCondition::setMeet((ChallengeCondition *const)this);
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 64));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1213: range 0000000015900A6A-0000000015900AB7
void __cdecl ChallengeCondElementReactionCount::~ChallengeCondElementReactionCount(
        ChallengeCondElementReactionCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondElementReactionCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1213: range 0000000015900AB8-0000000015900AE2
void __cdecl ChallengeCondElementReactionCount::~ChallengeCondElementReactionCount(
        ChallengeCondElementReactionCount *const this)
{
  ChallengeCondElementReactionCount::~ChallengeCondElementReactionCount(this);
  operator delete(this, 0x30uLL);
};

// Line 1216: range 00000000158B50A8-00000000158B52EA
void __fastcall ZN33ChallengeCondElementReactionCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondElementReactionCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN33ChallengeCondElementReactionCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondElementReactionCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_reaction_type_);
  }
  this->target_reaction_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_reaction_count_);
  }
  this->target_reaction_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_reaction_count_);
  }
  this->cur_reaction_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1218: range 00000000155C0504-00000000155C08AC
int32_t __cdecl ChallengeCondElementReactionCount::initChallengeCond(
        ChallengeCondElementReactionCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_reaction_type_);
    }
    this->target_reaction_type_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_reaction_count_);
    }
    this->target_reaction_count_ = v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->target_reaction_type_);
    }
    if ( data::enumValToStr((data::ElementReactionType)this->target_reaction_type_) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_condition.cpp",
        "initChallengeCond",
        1232);
      v10 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
              &v16,
              (const char (*)[71])"ChallengeCondElementReactionCount initParam, ElementReactionTypeValue:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->target_reaction_type_);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v11,
              (const char (*)[23])", ElementReactionType:");
      if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->target_reaction_type_);
      }
      val = (char *)data::enumValToStr((data::ElementReactionType)this->target_reaction_type_);
      v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&val);
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])", count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->target_reaction_count_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_condition.cpp",
        "initChallengeCond",
        1229);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v16,
             (const char (*)[27])"error ElementReactionType:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->target_reaction_type_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1222);
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      &v16,
      (const char (*)[63])"ChallengeCondElementReactionCount param_vec's size less than 2");
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
};

// Line 1238: range 00000000155C08AE-00000000155C08FD
uint32_t __cdecl ChallengeCondElementReactionCount::getProgress(const ChallengeCondElementReactionCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  return this->cur_reaction_count_;
};

// Line 1243: range 00000000155C08FE-00000000155C09AF
void __cdecl ChallengeCondElementReactionCount::notifyChallengeData(
        ChallengeCondElementReactionCount *const this,
        PlayerPtr *p_player_ptr)
{
  uint32_t cur_reaction_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  cur_reaction_count = this->cur_reaction_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_reaction_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1248: range 00000000155C09B0-00000000155C0D07
void __cdecl ChallengeCondElementReactionCount::onTriggerElementReaction(
        ChallengeCondElementReactionCount *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(ChallengeCondElementReactionCount *const, std::shared_ptr<Creature> *); // r14
  uint32_t cur_reaction_count; // ecx
  std::shared_ptr<Creature> v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 avatar_ptr:1258";
  *(_QWORD *)(v3 + 16) = ChallengeCondElementReactionCount::onTriggerElementReaction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Creature>(p_attacker_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_reaction_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->target_reaction_type_);
    }
    if ( reaction_type == this->target_reaction_type_ )
    {
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
      Creature::findTopOwnerOrSelf((Creature *const)&v10);
      std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 32));
      std::shared_ptr<Creature>::~shared_ptr(&v10);
      if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_reaction_count_);
        }
        ++this->cur_reaction_count_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
        v7 = *(void (__fastcall **)(ChallengeCondElementReactionCount *const, std::shared_ptr<Creature> *))v6;
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&v10, 0LL);
        v7(this, &v10);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v10);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_reaction_count_);
        }
        cur_reaction_count = this->cur_reaction_count_;
        if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->target_reaction_count_);
        }
        if ( cur_reaction_count >= this->target_reaction_count_ )
          ChallengeCondition::setMeet((ChallengeCondition *const)this);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    }
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1277: range 00000000159009E0-0000000015900A3D
void __cdecl ChallengeCondFreezeEnemyInTime::~ChallengeCondFreezeEnemyInTime(
        ChallengeCondFreezeEnemyInTime *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondFreezeEnemyInTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  std::vector<unsigned long>::~vector(&this->freeze_time_vec_);
  ChallengeCondition::~ChallengeCondition(this);
};

// Line 1277: range 0000000015900A3E-0000000015900A68
void __cdecl ChallengeCondFreezeEnemyInTime::~ChallengeCondFreezeEnemyInTime(
        ChallengeCondFreezeEnemyInTime *const this)
{
  ChallengeCondFreezeEnemyInTime::~ChallengeCondFreezeEnemyInTime(this);
  operator delete(this, 0x50uLL);
};

// Line 1280: range 00000000158B5672-00000000158B5866
void __fastcall ZN30ChallengeCondFreezeEnemyInTimeCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondFreezeEnemyInTime *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN30ChallengeCondFreezeEnemyInTimeCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(this, a2, a3, *(_DWORD *)(v5 + 48), *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondFreezeEnemyInTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->time_interval_ms_);
  this->time_interval_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_freeze_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_freeze_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_freeze_count_);
  }
  this->target_freeze_count_ = 0;
  std::vector<unsigned long>::vector(&this->freeze_time_vec_);
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1282: range 00000000155C0D08-00000000155C0EBE
int32_t __cdecl ChallengeCondFreezeEnemyInTime::initChallengeCond(
        ChallengeCondFreezeEnemyInTime *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  unsigned int *v4; // rdx
  uint64_t v5; // rcx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = SAFE_MULTIPLY<unsigned int,int>(*v4, 1000);
    if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->time_interval_ms_);
    this->time_interval_ms_ = v5;
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_freeze_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_freeze_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_freeze_count_);
    }
    this->target_freeze_count_ = v8;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1286);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v9,
      (const char (*)[60])"ChallengeCondFreezeEnemyInTime param_vec's size less than 2");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 1294: range 00000000155C0EC0-00000000155C10C9
void __cdecl ChallengeCondFreezeEnemyInTime::onTriggerElementReaction(
        ChallengeCondFreezeEnemyInTime *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::vector<long unsigned int>::size_type v6; // rcx
  std::shared_ptr<Creature> v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 avatar_ptr:1304";
  *(_QWORD *)(v3 + 16) = ChallengeCondFreezeEnemyInTime::onTriggerElementReaction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Creature>(p_attacker_ptr, 0LL) && reaction_type == Freeze )
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
    Creature::findTopOwnerOrSelf((Creature *const)&v8);
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 32));
    std::shared_ptr<Creature>::~shared_ptr(&v8);
    if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
      ChallengeCondFreezeEnemyInTime::processFreezeReaction(this);
      v6 = std::vector<unsigned long>::size(&this->freeze_time_vec_);
      if ( *(_BYTE *)(((unsigned __int64)&this->target_freeze_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->target_freeze_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->target_freeze_count_);
      }
      if ( v6 >= this->target_freeze_count_ )
        ChallengeCondition::setMeet(this);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1316: range 00000000155C10CA-00000000155C1419
void __cdecl ChallengeCondFreezeEnemyInTime::processFreezeReaction(ChallengeCondFreezeEnemyInTime *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v5; // rax
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __i; // [rsp+18h] [rbp-C8h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > __first; // [rsp+20h] [rbp-C0h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __rhs; // [rsp+28h] [rbp-B8h] BYREF
  char v9[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 11 now_ms:1318 64 8 16 pre_time_ms:1325 96 8 9 iter:1330";
  *(_QWORD *)(v1 + 16) = ChallengeCondFreezeEnemyInTime::processFreezeReaction;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  *(_QWORD *)(v1 + 32) = ChallengeComp::getSceneTimeMs(this->challenge_comp_);
  if ( std::vector<unsigned long>::empty(&this->freeze_time_vec_) )
  {
    std::vector<unsigned long>::push_back(
      &this->freeze_time_vec_,
      (const std::vector<long unsigned int>::value_type *)(v1 + 32));
  }
  else
  {
    *(_QWORD *)(v1 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->time_interval_ms_);
    if ( this->time_interval_ms_ < *(_QWORD *)(v1 + 32) )
      *(_QWORD *)(v1 + 64) = *(_QWORD *)(v1 + 32) - this->time_interval_ms_;
    M_current = std::vector<unsigned long>::end(&this->freeze_time_vec_)._M_current;
    v5._M_current = std::vector<unsigned long>::begin(&this->freeze_time_vec_)._M_current;
    *(__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v1 + 96) = std::lower_bound<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(v5, (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current, (const unsigned __int64 *)(v1 + 64));
    __rhs._M_current = std::vector<unsigned long>::end(&this->freeze_time_vec_)._M_current;
    if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
           (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v1 + 96),
           &__rhs) )
    {
      std::vector<unsigned long>::clear(&this->freeze_time_vec_);
      std::vector<unsigned long>::push_back(
        &this->freeze_time_vec_,
        (const std::vector<long unsigned int>::value_type *)(v1 + 32));
    }
    else
    {
      __rhs._M_current = std::vector<unsigned long>::begin(&this->freeze_time_vec_)._M_current;
      if ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
             (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v1 + 96),
             &__rhs) )
      {
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
          (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__rhs,
          (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v1 + 96));
        __i._M_current = std::vector<unsigned long>::begin(&this->freeze_time_vec_)._M_current;
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
          &__first,
          &__i);
        std::vector<unsigned long>::erase(
          &this->freeze_time_vec_,
          __first,
          (std::vector<long unsigned int>::const_iterator)__rhs._M_current);
        std::vector<unsigned long>::push_back(
          &this->freeze_time_vec_,
          (const std::vector<long unsigned int>::value_type *)(v1 + 32));
      }
      else
      {
        std::vector<unsigned long>::push_back(
          &this->freeze_time_vec_,
          (const std::vector<long unsigned int>::value_type *)(v1 + 32));
      }
    }
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1353: range 0000000015900966-00000000159009B3
void __cdecl ChallengeCondCrystalElementReactionCount::~ChallengeCondCrystalElementReactionCount(
        ChallengeCondCrystalElementReactionCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondCrystalElementReactionCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1353: range 00000000159009B4-00000000159009DE
void __cdecl ChallengeCondCrystalElementReactionCount::~ChallengeCondCrystalElementReactionCount(
        ChallengeCondCrystalElementReactionCount *const this)
{
  ChallengeCondCrystalElementReactionCount::~ChallengeCondCrystalElementReactionCount(this);
  operator delete(this, 0x30uLL);
};

// Line 1356: range 00000000158B5BF8-00000000158B5F06
void __fastcall ZN40ChallengeCondCrystalElementReactionCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondCrystalElementReactionCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN40ChallengeCondCrystalElementReactionCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondCrystalElementReactionCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_fire_include_);
  }
  this->is_fire_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_water_include_);
  }
  this->is_water_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_eletric_include_);
  }
  this->is_eletric_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ice_include_);
  }
  this->is_ice_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_reaction_count_);
  }
  this->target_reaction_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_reaction_count_);
  }
  this->cur_reaction_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1358: range 00000000155C141A-00000000155C19B6
int32_t __cdecl ChallengeCondCrystalElementReactionCount::initChallengeCond(
        ChallengeCondCrystalElementReactionCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  std::vector<unsigned int>::const_reference v3; // rax
  _DWORD *v4; // rdx
  bool v5; // cl
  std::vector<unsigned int>::const_reference v6; // rax
  _DWORD *v7; // rdx
  bool v8; // cl
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  bool v11; // cl
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  bool v14; // cl
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream v29; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 4 )
  {
    v3 = std::vector<unsigned int>::operator[](param_vec, 0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_fire_include_);
    }
    this->is_fire_include_ = v5;
    v6 = std::vector<unsigned int>::operator[](param_vec, 1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_water_include_);
    }
    this->is_water_include_ = v8;
    v9 = std::vector<unsigned int>::operator[](param_vec, 2uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_eletric_include_);
    }
    this->is_eletric_include_ = v11;
    v12 = std::vector<unsigned int>::operator[](param_vec, 3uLL);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v14 = *v13 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_ice_include_);
    }
    this->is_ice_include_ = v14;
    v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                param_vec,
                                                                                                4uLL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v17 = *v16;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_reaction_count_);
    }
    this->target_reaction_count_ = v17;
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1370);
    v18 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v29,
            (const char (*)[63])"ChallengeCondCrystalElementReactionCount initParam, param_idx:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->param_index_);
    v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v19, (const char (*)[19])", is_fire_include:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_fire_include_);
    }
    v21 = common::milog::MiLogStream::operator<<(v20, this->is_fire_include_);
    v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v21,
            (const char (*)[20])", is_water_include:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_water_include_);
    }
    v23 = common::milog::MiLogStream::operator<<(v22, this->is_water_include_);
    v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v23,
            (const char (*)[22])", is_eletric_include:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_eletric_include_);
    }
    v25 = common::milog::MiLogStream::operator<<(v24, this->is_eletric_include_);
    v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v25, (const char (*)[19])", is_ice_include_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_ice_include_);
    }
    v27 = common::milog::MiLogStream::operator<<(v26, this->is_ice_include_);
    v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])", count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->target_reaction_count_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1362);
    common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
      &v29,
      (const char (*)[70])"ChallengeCondCrystalElementReactionCount param_vec's size less than 5");
    common::milog::MiLogStream::~MiLogStream(&v29);
    return -1;
  }
};

// Line 1378: range 00000000155C19B8-00000000155C1A07
uint32_t __cdecl ChallengeCondCrystalElementReactionCount::getProgress(
        const ChallengeCondCrystalElementReactionCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  return this->cur_reaction_count_;
};

// Line 1383: range 00000000155C1A08-00000000155C1AB9
void __cdecl ChallengeCondCrystalElementReactionCount::notifyChallengeData(
        ChallengeCondCrystalElementReactionCount *const this,
        PlayerPtr *p_player_ptr)
{
  uint32_t cur_reaction_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  cur_reaction_count = this->cur_reaction_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_reaction_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1388: range 00000000155C1ABA-00000000155C222B
void __cdecl ChallengeCondCrystalElementReactionCount::onTriggerElementReaction(
        ChallengeCondCrystalElementReactionCount *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(ChallengeCondCrystalElementReactionCount *const, std::shared_ptr<Creature> *); // r14
  uint32_t cur_reaction_count; // ecx
  std::shared_ptr<Creature> v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 avatar_ptr:1394";
  *(_QWORD *)(v3 + 16) = ChallengeCondCrystalElementReactionCount::onTriggerElementReaction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Creature>(p_attacker_ptr, 0LL) )
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
    Creature::findTopOwnerOrSelf((Creature *const)&v10);
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 32));
    std::shared_ptr<Creature>::~shared_ptr(&v10);
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
LABEL_59:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
      goto LABEL_60;
    }
    if ( reaction_type == CrystallizeIce )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ice_include_);
      }
      if ( !this->is_ice_include_ )
        goto LABEL_53;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_reaction_count_);
      }
      ++this->cur_reaction_count_;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
    }
    else
    {
      if ( reaction_type > CrystallizeIce )
        goto LABEL_59;
      switch ( reaction_type )
      {
        case CrystallizeElectric:
          if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_eletric_include_);
          }
          if ( !this->is_eletric_include_ )
            goto LABEL_53;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_reaction_count_);
          }
          ++this->cur_reaction_count_;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
          break;
        case CrystallizeFire:
          if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_fire_include_);
          }
          if ( !this->is_fire_include_ )
            goto LABEL_53;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_reaction_count_);
          }
          ++this->cur_reaction_count_;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
          break;
        case CrystallizeWater:
          if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_water_include_);
          }
          if ( !this->is_water_include_ )
          {
LABEL_53:
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_reaction_count_);
            }
            cur_reaction_count = this->cur_reaction_count_;
            if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->target_reaction_count_);
            }
            if ( cur_reaction_count >= this->target_reaction_count_ )
              ChallengeCondition::setMeet((ChallengeCondition *const)this);
            goto LABEL_59;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_reaction_count_);
          }
          ++this->cur_reaction_count_;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v6 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            v6 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
          break;
        default:
          goto LABEL_59;
      }
    }
    v7 = *(void (__fastcall **)(ChallengeCondCrystalElementReactionCount *const, std::shared_ptr<Creature> *))v6;
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&v10, 0LL);
    v7(this, &v10);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v10);
    goto LABEL_53;
  }
LABEL_60:
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1456: range 00000000159008EC-0000000015900939
void __cdecl ChallengeCondSheildAbsorbDamageCount::~ChallengeCondSheildAbsorbDamageCount(
        ChallengeCondSheildAbsorbDamageCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondSheildAbsorbDamageCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1456: range 000000001590093A-0000000015900964
void __cdecl ChallengeCondSheildAbsorbDamageCount::~ChallengeCondSheildAbsorbDamageCount(
        ChallengeCondSheildAbsorbDamageCount *const this)
{
  ChallengeCondSheildAbsorbDamageCount::~ChallengeCondSheildAbsorbDamageCount(this);
  operator delete(this, 0x30uLL);
};

// Line 1459: range 00000000158B628E-00000000158B6484
void __fastcall ZN36ChallengeCondSheildAbsorbDamageCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondSheildAbsorbDamageCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN36ChallengeCondSheildAbsorbDamageCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondSheildAbsorbDamageCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_absorb_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_absorb_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_absorb_count_);
  }
  this->target_absorb_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_absorb_count_);
  }
  this->cur_absorb_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1461: range 00000000155C222C-00000000155C23DE
int32_t __cdecl ChallengeCondSheildAbsorbDamageCount::initChallengeCond(
        ChallengeCondSheildAbsorbDamageCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_absorb_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_absorb_count_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->target_absorb_count_);
    }
    this->target_absorb_count_ = v5;
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1469);
    v6 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v7,
           (const char (*)[69])"ChallengeCondSheildAbsorbDamageCount initParam, target_absorb_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->target_absorb_count_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1465);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      &v7,
      (const char (*)[66])"ChallengeCondSheildAbsorbDamageCount param_vec's size less than 2");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 1473: range 00000000155C23E0-00000000155C2427
uint32_t __cdecl ChallengeCondSheildAbsorbDamageCount::getProgress(
        const ChallengeCondSheildAbsorbDamageCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_absorb_count_);
  }
  return this->cur_absorb_count_;
};

// Line 1478: range 00000000155C2428-00000000155C24D1
void __cdecl ChallengeCondSheildAbsorbDamageCount::notifyChallengeData(
        ChallengeCondSheildAbsorbDamageCount *const this,
        PlayerPtr *p_player_ptr)
{
  uint32_t cur_absorb_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_absorb_count_);
  }
  cur_absorb_count = this->cur_absorb_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_absorb_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1483: range 00000000155C24D2-00000000155C27D8
void __cdecl ChallengeCondSheildAbsorbDamageCount::onShieldAbsorbDamage(
        ChallengeCondSheildAbsorbDamageCount *const this,
        CreaturePtr *p_actor_ptr,
        float delta_damage)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(ChallengeCondSheildAbsorbDamageCount *const, std::shared_ptr<Player> *); // r14
  uint32_t cur_absorb_count; // ecx
  int32_t absorb_damage_count; // [rsp+2Ch] [rbp-84h]
  std::shared_ptr<Player> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 avatar_ptr:1489";
  *(_QWORD *)(v3 + 16) = ChallengeCondSheildAbsorbDamageCount::onShieldAbsorbDamage;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Creature>(p_actor_ptr, 0LL) )
  {
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 32));
    absorb_damage_count = (int)delta_damage;
    if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) && absorb_damage_count > 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_absorb_count_);
      }
      this->cur_absorb_count_ += absorb_damage_count;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
      v8 = *(void (__fastcall **)(ChallengeCondSheildAbsorbDamageCount *const, std::shared_ptr<Player> *))v7;
      std::shared_ptr<Player>::shared_ptr(&v11, 0LL);
      v8(this, &v11);
      std::shared_ptr<Player>::~shared_ptr(&v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_absorb_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_absorb_count_);
      }
      cur_absorb_count = this->cur_absorb_count_;
      if ( *(_BYTE *)(((unsigned __int64)&this->target_absorb_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_absorb_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->target_absorb_count_);
      }
      if ( cur_absorb_count >= this->target_absorb_count_ )
        ChallengeCondition::setMeet((ChallengeCondition *const)this);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1509: range 0000000015900872-00000000159008BF
void __cdecl ChallengeCondSwirlElementReactionCount::~ChallengeCondSwirlElementReactionCount(
        ChallengeCondSwirlElementReactionCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondSwirlElementReactionCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1509: range 00000000159008C0-00000000159008EA
void __cdecl ChallengeCondSwirlElementReactionCount::~ChallengeCondSwirlElementReactionCount(
        ChallengeCondSwirlElementReactionCount *const this)
{
  ChallengeCondSwirlElementReactionCount::~ChallengeCondSwirlElementReactionCount(this);
  operator delete(this, 0x30uLL);
};

// Line 1512: range 00000000158B680C-00000000158B6B1A
void __fastcall ZN38ChallengeCondSwirlElementReactionCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondSwirlElementReactionCount *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN38ChallengeCondSwirlElementReactionCountCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondSwirlElementReactionCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_fire_include_);
  }
  this->is_fire_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_water_include_);
  }
  this->is_water_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_eletric_include_);
  }
  this->is_eletric_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ice_include_);
  }
  this->is_ice_include_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_reaction_count_);
  }
  this->target_reaction_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_reaction_count_);
  }
  this->cur_reaction_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1514: range 00000000155C27DA-00000000155C2D76
int32_t __cdecl ChallengeCondSwirlElementReactionCount::initChallengeCond(
        ChallengeCondSwirlElementReactionCount *const this,
        const std::vector<unsigned int> *param_vec)
{
  std::vector<unsigned int>::const_reference v3; // rax
  _DWORD *v4; // rdx
  bool v5; // cl
  std::vector<unsigned int>::const_reference v6; // rax
  _DWORD *v7; // rdx
  bool v8; // cl
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  bool v11; // cl
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  bool v14; // cl
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream v29; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 4 )
  {
    v3 = std::vector<unsigned int>::operator[](param_vec, 0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_fire_include_);
    }
    this->is_fire_include_ = v5;
    v6 = std::vector<unsigned int>::operator[](param_vec, 1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_water_include_);
    }
    this->is_water_include_ = v8;
    v9 = std::vector<unsigned int>::operator[](param_vec, 2uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_eletric_include_);
    }
    this->is_eletric_include_ = v11;
    v12 = std::vector<unsigned int>::operator[](param_vec, 3uLL);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v14 = *v13 == 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_ice_include_);
    }
    this->is_ice_include_ = v14;
    v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                param_vec,
                                                                                                4uLL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v17 = *v16;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_reaction_count_);
    }
    this->target_reaction_count_ = v17;
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1526);
    v18 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v29,
            (const char (*)[61])"ChallengeCondSwirlElementReactionCount initParam, param_idx:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->param_index_);
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])"is_fire_include:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_fire_include_);
    }
    v21 = common::milog::MiLogStream::operator<<(v20, this->is_fire_include_);
    v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v21, (const char (*)[18])"is_water_include:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_water_include_);
    }
    v23 = common::milog::MiLogStream::operator<<(v22, this->is_water_include_);
    v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v23,
            (const char (*)[20])"is_eletric_include:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_eletric_include_);
    }
    v25 = common::milog::MiLogStream::operator<<(v24, this->is_eletric_include_);
    v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])"is_ice_include_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_ice_include_);
    }
    v27 = common::milog::MiLogStream::operator<<(v26, this->is_ice_include_);
    v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])", count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->target_reaction_count_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1518);
    common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
      &v29,
      (const char (*)[68])"ChallengeCondSwirlElementReactionCount param_vec's size less than 5");
    common::milog::MiLogStream::~MiLogStream(&v29);
    return -1;
  }
};

// Line 1534: range 00000000155C2D78-00000000155C2DC7
uint32_t __cdecl ChallengeCondSwirlElementReactionCount::getProgress(
        const ChallengeCondSwirlElementReactionCount *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  return this->cur_reaction_count_;
};

// Line 1539: range 00000000155C2DC8-00000000155C2E79
void __cdecl ChallengeCondSwirlElementReactionCount::notifyChallengeData(
        ChallengeCondSwirlElementReactionCount *const this,
        PlayerPtr *p_player_ptr)
{
  uint32_t cur_reaction_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  cur_reaction_count = this->cur_reaction_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, cur_reaction_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1544: range 00000000155C2E7A-00000000155C344C
void __cdecl ChallengeCondSwirlElementReactionCount::onTriggerElementReaction(
        ChallengeCondSwirlElementReactionCount *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(ChallengeCondSwirlElementReactionCount *const, std::shared_ptr<Player> *); // rbx
  uint32_t cur_reaction_count; // ecx
  std::shared_ptr<Player> v7; // [rsp+20h] [rbp-20h] BYREF

  if ( std::operator==<Creature>(p_attacker_ptr, 0LL) )
    return;
  if ( reaction_type == SwirlIce )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ice_include_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_ice_include_);
    }
    if ( !this->is_ice_include_ )
      goto LABEL_48;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_reaction_count_);
    }
    ++this->cur_reaction_count_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v3 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  }
  else
  {
    if ( reaction_type > SwirlIce )
      return;
    switch ( reaction_type )
    {
      case SwirlElectric:
        if ( *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_eletric_include_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_eletric_include_);
        }
        if ( !this->is_eletric_include_ )
          goto LABEL_48;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_reaction_count_);
        }
        ++this->cur_reaction_count_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v3 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          v3 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
        break;
      case SwirlFire:
        if ( *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_fire_include_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_fire_include_);
        }
        if ( !this->is_fire_include_ )
          goto LABEL_48;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_reaction_count_);
        }
        ++this->cur_reaction_count_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v3 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          v3 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
        break;
      case SwirlWater:
        if ( *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_water_include_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_water_include_);
        }
        if ( !this->is_water_include_ )
          goto LABEL_48;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_reaction_count_);
        }
        ++this->cur_reaction_count_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v3 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          v3 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
        break;
      default:
        return;
    }
  }
  v4 = *(void (__fastcall **)(ChallengeCondSwirlElementReactionCount *const, std::shared_ptr<Player> *))v3;
  std::shared_ptr<Player>::shared_ptr(&v7, 0LL);
  v4(this, &v7);
  std::shared_ptr<Player>::~shared_ptr(&v7);
LABEL_48:
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_reaction_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_reaction_count_);
  }
  cur_reaction_count = this->cur_reaction_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_reaction_count_);
  }
  if ( cur_reaction_count >= this->target_reaction_count_ )
    ChallengeCondition::setMeet((ChallengeCondition *const)this);
};

// Line 1607: range 00000000159007F8-0000000015900845
void __cdecl ChallengeCondDieLess::~ChallengeCondDieLess(ChallengeCondDieLess *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondDieLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1607: range 0000000015900846-0000000015900870
void __cdecl ChallengeCondDieLess::~ChallengeCondDieLess(ChallengeCondDieLess *const this)
{
  ChallengeCondDieLess::~ChallengeCondDieLess(this);
  operator delete(this, 0x30uLL);
};

// Line 1610: range 00000000158B6EA2-00000000158B7098
void __fastcall ZN20ChallengeCondDieLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondDieLess *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN20ChallengeCondDieLessCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondDieLess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_count_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_count_limit_);
  }
  this->die_count_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_count_);
  }
  this->die_count_ = 0;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1612: range 00000000155C344E-00000000155C3611
int32_t __cdecl ChallengeCondDieLess::initChallengeCond(
        ChallengeCondDieLess *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->die_count_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_count_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->die_count_limit_);
    }
    this->die_count_limit_ = v5;
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1620);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v7,
           (const char (*)[49])"ChallengeCondDieLess initParam, die_count_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->die_count_limit_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    ChallengeCondition::setChallengeCondState((ChallengeCondition *const)this, CHALLENGE_COND_STATE_MEET);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1616);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v7,
      (const char (*)[50])"ChallengeCondDieLess param_vec's size less than 1");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 1625: range 00000000155C3612-00000000155C3659
uint32_t __cdecl ChallengeCondDieLess::getProgress(const ChallengeCondDieLess *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->die_count_);
  }
  return this->die_count_;
};

// Line 1630: range 00000000155C365A-00000000155C3703
void __cdecl ChallengeCondDieLess::notifyChallengeData(ChallengeCondDieLess *const this, PlayerPtr *p_player_ptr)
{
  uint32_t die_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->die_count_);
  }
  die_count = this->die_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, die_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1635: range 00000000155C3704-00000000155C3890
void __cdecl ChallengeCondDieLess::onAvatarDie(
        ChallengeCondDieLess *const this,
        ChangeHpContext *context,
        Avatar *avatar)
{
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(ChallengeCondDieLess *const, std::shared_ptr<Player> *); // rbx
  uint32_t die_count; // ecx
  std::shared_ptr<Player> v6; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->die_count_);
  }
  ++this->die_count_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  v4 = *(void (__fastcall **)(ChallengeCondDieLess *const, std::shared_ptr<Player> *))v3;
  std::shared_ptr<Player>::shared_ptr(&v6, 0LL);
  v4(this, &v6);
  std::shared_ptr<Player>::~shared_ptr(&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->die_count_);
  }
  die_count = this->die_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_count_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_count_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_count_limit_);
  }
  if ( die_count > this->die_count_limit_ )
    ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
};

// Line 1650: range 000000001590077E-00000000159007CB
void __cdecl ChallengeCondLua::~ChallengeCondLua(ChallengeCondLua *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChallengeCondLua + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v1;
  ChallengeCondition::~ChallengeCondition((ChallengeCondition *const)this);
};

// Line 1650: range 00000000159007CC-00000000159007F6
void __cdecl ChallengeCondLua::~ChallengeCondLua(ChallengeCondLua *const this)
{
  ChallengeCondLua::~ChallengeCondLua(this);
  operator delete(this, 0x30uLL);
};

// Line 1653: range 00000000158B7420-00000000158B765C
void __fastcall ZN16ChallengeCondLuaCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE(
        ChallengeCondLua *const this,
        ChallengeComp *a2,
        Challenge *a3,
        int a4,
        data::ChallengeCondType a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN16ChallengeCondLuaCI218ChallengeConditionER13ChallengeCompR9ChallengejN4data17ChallengeCondTypeE;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ChallengeCondition::ChallengeCondition(
    (ChallengeCondition *const)this,
    a2,
    a3,
    *(_DWORD *)(v5 + 48),
    *(data::ChallengeCondType *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'ChallengeCondLua + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ChallengeCondition = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_count_);
  }
  this->fire_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_limit_);
  }
  this->fire_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_succ_);
  }
  this->is_succ_ = 1;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1655: range 00000000155C3892-00000000155C3BC3
int32_t __cdecl ChallengeCondLua::initChallengeCond(
        ChallengeCondLua *const this,
        const std::vector<unsigned int> *param_vec)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ecx
  std::vector<unsigned int>::const_reference v6; // rax
  _DWORD *v7; // rdx
  bool v8; // cl
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  uint32_t *v10; // rdx
  uint32_t v11; // ecx
  uint32_t fire_count; // ecx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(param_vec) > 1 )
  {
    v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->fire_limit_);
    }
    this->fire_limit_ = v5;
    v6 = std::vector<unsigned int>::operator[](param_vec, 1uLL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7 != 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_succ_);
    }
    this->is_succ_ = v8;
    if ( std::vector<unsigned int>::size(param_vec) <= 2 )
      return 0;
    v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               param_vec,
                                                                                               2uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->fire_count_);
    }
    this->fire_count_ = v11;
    fire_count = this->fire_count_;
    if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->fire_limit_);
    }
    if ( fire_count < this->fire_limit_ )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_condition.cpp",
        "initChallengeCond",
        1669);
      v13 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
              &v14,
              (const char (*)[76])"ChallengeCondLua param_vec. fire_count_ larger than fire_limit_. param_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v13, param_vec);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_condition.cpp",
      "initChallengeCond",
      1659);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v14,
      (const char (*)[46])"ChallengeCondLua param_vec's size less than 2");
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};

// Line 1676: range 00000000155C3BC4-00000000155C3C13
uint32_t __cdecl ChallengeCondLua::getProgress(const ChallengeCondLua *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fire_count_);
  }
  return this->fire_count_;
};

// Line 1681: range 00000000155C3C14-00000000155C3CC5
void __cdecl ChallengeCondLua::notifyChallengeData(ChallengeCondLua *const this, PlayerPtr *p_player_ptr)
{
  uint32_t fire_count; // r12d
  std::shared_ptr<Player> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fire_count_);
  }
  fire_count = this->fire_count_;
  std::shared_ptr<Player>::shared_ptr(&v3, p_player_ptr);
  ChallengeCondition::internalNotifyChallengeData((ChallengeCondition *const)this, &v3, fire_count);
  std::shared_ptr<Player>::~shared_ptr(&v3);
};

// Line 1686: range 00000000155C3CC6-00000000155C3EAD
void __cdecl ChallengeCondLua::onAddChallengeProgress(ChallengeCondLua *const this, uint32_t count)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondLua *const, std::shared_ptr<Player> *); // rbx
  uint32_t fire_count; // ecx
  std::shared_ptr<Player> v5; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fire_count_);
  }
  this->fire_count_ += count;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_ChallengeCondition + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_ChallengeCondition + 4);
  v3 = *(void (__fastcall **)(ChallengeCondLua *const, std::shared_ptr<Player> *))v2;
  std::shared_ptr<Player>::shared_ptr(&v5, 0LL);
  v3(this, &v5);
  std::shared_ptr<Player>::~shared_ptr(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fire_count_);
  }
  fire_count = this->fire_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fire_limit_);
  }
  if ( fire_count >= this->fire_limit_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_succ_);
    }
    if ( this->is_succ_ )
      ChallengeCondition::setMeet((ChallengeCondition *const)this);
    else
      ChallengeCondition::setNotMeet((ChallengeCondition *const)this, 0);
  }
};

// Line 1711: range 000000001555F7AA-0000000015560232
std::shared_ptr<ChallengeCondition> *__fastcall ChallengeCondition::createChallengeCond(
        std::shared_ptr<ChallengeCondition> *challenge_cond_type,
        uint32_t param_index,
        ChallengeComp *challenge_comp,
        Challenge *challenge,
        std::vector<unsigned int> *param_vec,
        Challenge *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  unsigned int (__fastcall **v11)(unsigned __int64, const std::vector<unsigned int> *); // rdx
  unsigned int *v13; // [rsp+0h] [rbp-250h]
  const std::vector<unsigned int> *param_vecb; // [rsp+8h] [rbp-248h]
  int v18; // [rsp+20h] [rbp-230h]
  ChallengeComp v19; // [rsp+30h] [rbp-220h] BYREF
  ChallengeComp v20; // [rsp+B0h] [rbp-1A0h] BYREF
  ChallengeComp v21; // [rsp+130h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+1B0h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+1D0h] [rbp-80h] BYREF

  v18 = (int)challenge_comp;
  v6 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 24 challenge_cond_type:1710 48 4 16 param_index:1710 64 16 28 challenge_condition_ptr:1716";
  *(_QWORD *)(v6 + 16) = ChallengeCondition::createChallengeCond;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 32) = param_index;
  *(_DWORD *)(v6 + 48) = v18;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  switch ( *(_DWORD *)(v6 + 32) )
  {
    case 1:
      common::tools::perf::make_shared<ChallengeCondInTime,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        &v19,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondInTime>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondInTime> *)&v19);
      std::shared_ptr<ChallengeCondInTime>::~shared_ptr((std::shared_ptr<ChallengeCondInTime> *const)&v19);
      goto LABEL_30;
    case 2:
      common::tools::perf::make_shared<ChallengeCondAllTime,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.challenge_map_._M_t._M_impl._M_header._M_parent,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondAllTime>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondAllTime> *)&v19.challenge_map_._M_t._M_impl._M_header._M_parent);
      std::shared_ptr<ChallengeCondAllTime>::~shared_ptr((std::shared_ptr<ChallengeCondAllTime> *const)&v19.challenge_map_._M_t._M_impl._M_header._M_parent);
      goto LABEL_30;
    case 3:
      common::tools::perf::make_shared<ChallengeCondKillCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.challenge_map_._M_t._M_impl._M_header._M_right,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondKillCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondKillCount> *)&v19.challenge_map_._M_t._M_impl._M_header._M_right);
      std::shared_ptr<ChallengeCondKillCount>::~shared_ptr((std::shared_ptr<ChallengeCondKillCount> *const)&v19.challenge_map_._M_t._M_impl._M_header._M_right);
      goto LABEL_30;
    case 4:
      common::tools::perf::make_shared<ChallengeCondSurvive,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.group_,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondSurvive>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondSurvive> *)&v19.group_);
      std::shared_ptr<ChallengeCondSurvive>::~shared_ptr((std::shared_ptr<ChallengeCondSurvive> *const)&v19.group_);
      goto LABEL_30;
    case 5:
      common::tools::perf::make_shared<ChallengeCondTimeInc,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.challenge_timer_ptr_._M_refcount,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondTimeInc>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondTimeInc> *)&v19.challenge_timer_ptr_._M_refcount);
      std::shared_ptr<ChallengeCondTimeInc>::~shared_ptr((std::shared_ptr<ChallengeCondTimeInc> *const)&v19.challenge_timer_ptr_._M_refcount);
      goto LABEL_30;
    case 6:
      common::tools::perf::make_shared<ChallengeCondKillFast,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondKillFast>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondKillFast> *)&v19.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header);
      std::shared_ptr<ChallengeCondKillFast>::~shared_ptr((std::shared_ptr<ChallengeCondKillFast> *const)&v19.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header);
      goto LABEL_30;
    case 7:
      common::tools::perf::make_shared<ChallengeCondDownLess,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.challenge_record_map_._M_t._M_impl._M_header._M_left,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondDownLess>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondDownLess> *)&v19.challenge_record_map_._M_t._M_impl._M_header._M_left);
      std::shared_ptr<ChallengeCondDownLess>::~shared_ptr((std::shared_ptr<ChallengeCondDownLess> *const)&v19.challenge_record_map_._M_t._M_impl._M_header._M_left);
      goto LABEL_30;
    case 8:
      common::tools::perf::make_shared<ChallengeCondBeatenLess,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v19.challenge_record_map_._M_t._M_impl._M_node_count,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondBeatenLess>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondBeatenLess> *)&v19.challenge_record_map_._M_t._M_impl._M_node_count);
      std::shared_ptr<ChallengeCondBeatenLess>::~shared_ptr((std::shared_ptr<ChallengeCondBeatenLess> *const)&v19.challenge_record_map_._M_t._M_impl._M_node_count);
      goto LABEL_30;
    case 9:
      common::tools::perf::make_shared<ChallengeCondUnnaturalCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        &v20,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondUnnaturalCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondUnnaturalCount> *)&v20);
      std::shared_ptr<ChallengeCondUnnaturalCount>::~shared_ptr((std::shared_ptr<ChallengeCondUnnaturalCount> *const)&v20);
      goto LABEL_30;
    case 0xA:
      common::tools::perf::make_shared<ChallengeCondFrozenLess,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.challenge_map_._M_t._M_impl._M_header._M_parent,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondFrozenLess>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondFrozenLess> *)&v20.challenge_map_._M_t._M_impl._M_header._M_parent);
      std::shared_ptr<ChallengeCondFrozenLess>::~shared_ptr((std::shared_ptr<ChallengeCondFrozenLess> *const)&v20.challenge_map_._M_t._M_impl._M_header._M_parent);
      goto LABEL_30;
    case 0xB:
      common::tools::perf::make_shared<ChallengeCondKillMonster,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.challenge_map_._M_t._M_impl._M_header._M_right,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondKillMonster>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondKillMonster> *)&v20.challenge_map_._M_t._M_impl._M_header._M_right);
      std::shared_ptr<ChallengeCondKillMonster>::~shared_ptr((std::shared_ptr<ChallengeCondKillMonster> *const)&v20.challenge_map_._M_t._M_impl._M_header._M_right);
      goto LABEL_30;
    case 0xC:
      common::tools::perf::make_shared<ChallengeCondTrigger,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.group_,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondTrigger>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondTrigger> *)&v20.group_);
      std::shared_ptr<ChallengeCondTrigger>::~shared_ptr((std::shared_ptr<ChallengeCondTrigger> *const)&v20.group_);
      goto LABEL_30;
    case 0xD:
      common::tools::perf::make_shared<ChallengeCondGuardHp,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.challenge_timer_ptr_._M_refcount,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondGuardHp>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondGuardHp> *)&v20.challenge_timer_ptr_._M_refcount);
      std::shared_ptr<ChallengeCondGuardHp>::~shared_ptr((std::shared_ptr<ChallengeCondGuardHp> *const)&v20.challenge_timer_ptr_._M_refcount);
      goto LABEL_30;
    case 0xE:
      common::tools::perf::make_shared<ChallengeCondTimeDec,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondTimeDec>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondTimeDec> *)&v20.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header);
      std::shared_ptr<ChallengeCondTimeDec>::~shared_ptr((std::shared_ptr<ChallengeCondTimeDec> *const)&v20.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header);
      goto LABEL_30;
    case 0xF:
      common::tools::perf::make_shared<ChallengeCondChildSucc,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.challenge_record_map_._M_t._M_impl._M_header._M_left,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondChildSucc>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondChildSucc> *)&v20.challenge_record_map_._M_t._M_impl._M_header._M_left);
      std::shared_ptr<ChallengeCondChildSucc>::~shared_ptr((std::shared_ptr<ChallengeCondChildSucc> *const)&v20.challenge_record_map_._M_t._M_impl._M_header._M_left);
      goto LABEL_30;
    case 0x10:
      common::tools::perf::make_shared<ChallengeCondChildFail,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v20.challenge_record_map_._M_t._M_impl._M_node_count,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondChildFail>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondChildFail> *)&v20.challenge_record_map_._M_t._M_impl._M_node_count);
      std::shared_ptr<ChallengeCondChildFail>::~shared_ptr((std::shared_ptr<ChallengeCondChildFail> *const)&v20.challenge_record_map_._M_t._M_impl._M_node_count);
      goto LABEL_30;
    case 0x12:
      common::tools::perf::make_shared<ChallengeCondMonsterDamageCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        &v21,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondMonsterDamageCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondMonsterDamageCount> *)&v21);
      std::shared_ptr<ChallengeCondMonsterDamageCount>::~shared_ptr((std::shared_ptr<ChallengeCondMonsterDamageCount> *const)&v21);
      goto LABEL_30;
    case 0x13:
      common::tools::perf::make_shared<ChallengeCondElementReactionCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.challenge_map_._M_t._M_impl._M_header._M_parent,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondElementReactionCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondElementReactionCount> *)&v21.challenge_map_._M_t._M_impl._M_header._M_parent);
      std::shared_ptr<ChallengeCondElementReactionCount>::~shared_ptr((std::shared_ptr<ChallengeCondElementReactionCount> *const)&v21.challenge_map_._M_t._M_impl._M_header._M_parent);
      goto LABEL_30;
    case 0x14:
      common::tools::perf::make_shared<ChallengeCondFreezeEnemyInTime,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.challenge_map_._M_t._M_impl._M_header._M_right,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondFreezeEnemyInTime>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondFreezeEnemyInTime> *)&v21.challenge_map_._M_t._M_impl._M_header._M_right);
      std::shared_ptr<ChallengeCondFreezeEnemyInTime>::~shared_ptr((std::shared_ptr<ChallengeCondFreezeEnemyInTime> *const)&v21.challenge_map_._M_t._M_impl._M_header._M_right);
      goto LABEL_30;
    case 0x15:
      common::tools::perf::make_shared<ChallengeCondCrystalElementReactionCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.group_,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondCrystalElementReactionCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondCrystalElementReactionCount> *)&v21.group_);
      std::shared_ptr<ChallengeCondCrystalElementReactionCount>::~shared_ptr((std::shared_ptr<ChallengeCondCrystalElementReactionCount> *const)&v21.group_);
      goto LABEL_30;
    case 0x16:
      common::tools::perf::make_shared<ChallengeCondSheildAbsorbDamageCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.challenge_timer_ptr_._M_refcount,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondSheildAbsorbDamageCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondSheildAbsorbDamageCount> *)&v21.challenge_timer_ptr_._M_refcount);
      std::shared_ptr<ChallengeCondSheildAbsorbDamageCount>::~shared_ptr((std::shared_ptr<ChallengeCondSheildAbsorbDamageCount> *const)&v21.challenge_timer_ptr_._M_refcount);
      goto LABEL_30;
    case 0x17:
      common::tools::perf::make_shared<ChallengeCondSwirlElementReactionCount,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondSwirlElementReactionCount>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondSwirlElementReactionCount> *)&v21.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header);
      std::shared_ptr<ChallengeCondSwirlElementReactionCount>::~shared_ptr((std::shared_ptr<ChallengeCondSwirlElementReactionCount> *const)&v21.challenge_record_map_._M_t._M_impl.std::_Rb_tree_header);
      goto LABEL_30;
    case 0x18:
      common::tools::perf::make_shared<ChallengeCondDieLess,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.challenge_record_map_._M_t._M_impl._M_header._M_left,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondDieLess>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondDieLess> *)&v21.challenge_record_map_._M_t._M_impl._M_header._M_left);
      std::shared_ptr<ChallengeCondDieLess>::~shared_ptr((std::shared_ptr<ChallengeCondDieLess> *const)&v21.challenge_record_map_._M_t._M_impl._M_header._M_left);
      goto LABEL_30;
    case 0x19:
      common::tools::perf::make_shared<ChallengeCondLua,ChallengeComp &,Challenge &,unsigned int &,data::ChallengeCondType &>(
        (ChallengeComp *)&v21.challenge_record_map_._M_t._M_impl._M_node_count,
        challenge,
        (unsigned int *)param_vec,
        (data::ChallengeCondType *)(v6 + 48),
        (ChallengeComp *)(v6 + 32),
        a6,
        v13,
        (data::ChallengeCondType *)a6);
      std::shared_ptr<ChallengeCondition>::operator=<ChallengeCondLua>(
        (std::shared_ptr<ChallengeCondition> *const)(v6 + 64),
        (std::shared_ptr<ChallengeCondLua> *)&v21.challenge_record_map_._M_t._M_impl._M_node_count);
      std::shared_ptr<ChallengeCondLua>::~shared_ptr((std::shared_ptr<ChallengeCondLua> *const)&v21.challenge_record_map_._M_t._M_impl._M_node_count);
LABEL_30:
      if ( std::operator==<ChallengeCondition>(0LL, (const std::shared_ptr<ChallengeCondition> *)(v6 + 64)) )
        goto LABEL_31;
      v10 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      v11 = *(unsigned int (__fastcall ***)(unsigned __int64, const std::vector<unsigned int> *))v10;
      if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
        v10 = __asan_report_load8(*(_QWORD *)v10);
      if ( (*v11)(v10, param_vecb) )
LABEL_31:
        std::shared_ptr<ChallengeCondition>::shared_ptr(challenge_cond_type, 0LL);
      else
        std::shared_ptr<ChallengeCondition>::shared_ptr(
          challenge_cond_type,
          (std::shared_ptr<ChallengeCondition> *)(v6 + 64));
      break;
    default:
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_condition.cpp",
        "createChallengeCond",
        1745);
      v9 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v22,
             (const char (*)[70])"Dungeon challenge condition type not implemented challenge_cond_type:");
      common::milog::MiLogStream::operator<<<data::ChallengeCondType,(data::ChallengeCondType*)0>(
        v9,
        (const data::ChallengeCondType *)(v6 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
      std::shared_ptr<ChallengeCondition>::shared_ptr(challenge_cond_type, 0LL);
      break;
  }
  std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v6 + 64));
  if ( v23 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return challenge_cond_type;
};

// Line 1762: range 0000000015560234-00000000155602B2
void __cdecl ChallengeCondition::setMeet(ChallengeCondition *const this)
{
  ChallengeComp *challenge_comp; // rbx
  data::ChallengeCondType ChallengeCondType; // r12d
  uint32_t ChallengeIndex; // eax

  ChallengeCondition::setChallengeCondState(this, CHALLENGE_COND_STATE_MEET_FINISHED);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  challenge_comp = this->challenge_comp_;
  ChallengeCondType = ChallengeCondition::getChallengeCondType(this);
  ChallengeIndex = ChallengeCondition::getChallengeIndex(this);
  ChallengeComp::onConditionMeet(challenge_comp, ChallengeIndex, ChallengeCondType);
};

// Line 1769: range 00000000155602B4-0000000015560343
void __cdecl ChallengeCondition::setNotMeet(ChallengeCondition *const this, bool is_timeout)
{
  ChallengeComp *challenge_comp; // rbx
  data::ChallengeCondType ChallengeCondType; // r13d
  uint32_t ChallengeIndex; // eax

  ChallengeCondition::setChallengeCondState(this, CHALLENGE_COND_STATE_NOT_MEET);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  challenge_comp = this->challenge_comp_;
  ChallengeCondType = ChallengeCondition::getChallengeCondType(this);
  ChallengeIndex = ChallengeCondition::getChallengeIndex(this);
  ChallengeComp::onConditionNotMeet(challenge_comp, ChallengeIndex, ChallengeCondType, is_timeout);
};

// Line 1776: range 0000000015560344-0000000015560641
void __cdecl ChallengeCondition::internalNotifyChallengeData(
        ChallengeCondition *const this,
        PlayerPtr *p_player_ptr,
        uint32_t value)
{
  proto::ChallengeDataNotify *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t ChallengeIndex; // eax
  uint32_t ParamIndex; // eax
  common::milog::MiLogStream *v8; // r14
  ChallengeComp *challenge_comp; // rax
  Player *v10; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  std::string val; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (proto::ChallengeDataNotify *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (proto::ChallengeDataNotify *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 32 32 26 challenge_data_notify:1781";
  *(_QWORD *)&v3->param_index_ = ChallengeCondition::internalNotifyChallengeData;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( ChallengeCondition::getParamIndex(this) )
  {
    proto::ChallengeDataNotify::ChallengeDataNotify(v3 + 1);
    ChallengeIndex = ChallengeCondition::getChallengeIndex(this);
    proto::ChallengeDataNotify::set_challenge_index(v3 + 1, ChallengeIndex);
    ParamIndex = ChallengeCondition::getParamIndex(this);
    proto::ChallengeDataNotify::set_param_index(v3 + 1, ParamIndex);
    proto::ChallengeDataNotify::set_value(v3 + 1, value);
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_condition.cpp",
      "internalNotifyChallengeData",
      1785);
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v12,
           (const char (*)[22])"notifyChallengeData: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, v3 + 1);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    if ( std::operator==<Player>(p_player_ptr, 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->challenge_comp_);
      challenge_comp = this->challenge_comp_;
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
        challenge_comp = (ChallengeComp *)__asan_report_load8(&this->challenge_);
      ChallengeComp::notifyToAll(challenge_comp, v3 + 1, &this->challenge_->uid_set);
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      Player::sendProto(v10, v3 + 1);
    }
    proto::ChallengeDataNotify::~ChallengeDataNotify(v3 + 1);
  }
  if ( v14 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1797: range 0000000015560642-00000000155606B7
uint32_t __cdecl ChallengeCondition::getChallengeIndex(const ChallengeCondition *const this)
{
  Challenge *challenge; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_);
  challenge = this->challenge_;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  return challenge->challenge_index;
};

// Line 1802: range 00000000155606B8-0000000015560702
uint32_t __cdecl ChallengeCondition::getGroupId(const ChallengeCondition *const this)
{
  Group *Group; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->challenge_comp_);
  Group = ChallengeComp::getGroup(this->challenge_comp_);
  return Group::getGroupId(Group);
};
