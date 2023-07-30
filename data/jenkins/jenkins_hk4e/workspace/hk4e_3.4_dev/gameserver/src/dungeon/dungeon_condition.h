// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_condition.h

// Line 33: range 000000001616BD80-000000001616BDD1
void __cdecl DungeonCondition::~DungeonCondition(DungeonCondition *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  data::DungeonCondConfig::~DungeonCondConfig(&this->cond_config_);
};

// Line 40: range 00000000155C4D76-00000000155C4D88
void __cdecl DungeonCondition::onMonsterDie(DungeonCondition *const this, ChangeHpContext *context, Monster *monster)
{
  ;
};

// Line 43: range 00000000155C4D8A-00000000155C4D97
void __cdecl DungeonCondition::onQuestFinish(DungeonCondition *const this, uint32_t quest_id)
{
  ;
};

// Line 46: range 00000000155C4D98-00000000155C4DA5
void __cdecl DungeonCondition::onTimer(DungeonCondition *const this, uint32_t now)
{
  ;
};

// Line 49: range 00000000155C4DA6-00000000155C4DB8
void __cdecl DungeonCondition::onChallengeFinish(DungeonCondition *const this, uint32_t challenge_index, bool success)
{
  ;
};

// Line 52: range 00000000155C4DBA-00000000155C4DCF
void __cdecl DungeonCondition::onMultistagePlayEnd(
        DungeonCondition *const this,
        uint32_t group_id,
        uint32_t play_index,
        bool success)
{
  ;
};

// Line 55: range 00000000155C4DD0-00000000155C4E4F
void __cdecl DungeonCondition::clear(DungeonCondition *const this)
{
  uint32_t SceneTimeSeconds; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->dungeon_scene_);
  SceneTimeSeconds = Scene::getSceneTimeSeconds((Scene *const)this->dungeon_scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = SceneTimeSeconds;
};

// Line 58: range 00000000155C4E50-00000000155C4E61
int32_t __cdecl DungeonCondition::relaxTimeRestriction(DungeonCondition *const this, uint32_t relax_secs)
{
  return -1;
};

// Line 61: range 00000000155C4E62-00000000155C4E70
void __cdecl DungeonCondition::notifyDungeonData(DungeonCondition *const this, Player *player)
{
  ;
};

// Line 64: range 00000000155C4E72-00000000155C4E84
bool __cdecl DungeonCondition::checkAndGetLeftTime(DungeonCondition *const this, uint32_t *left_time)
{
  return 0;
};

// Line 78: range 000000001619F534-000000001619F581
void __cdecl DungeonCondKillMonster::~DungeonCondKillMonster(DungeonCondKillMonster *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondKillMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition((DungeonCondition *const)this);
};

// Line 81: range 000000001616BDD2-000000001616BF23
void __fastcall ZN22DungeonCondKillMonsterCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondKillMonster *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN22DungeonCondKillMonsterCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition((DungeonCondition *const)this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondKillMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 95: range 000000001619F4B8-000000001619F505
void __cdecl DungeonCondKillGroupMonster::~DungeonCondKillGroupMonster(DungeonCondKillGroupMonster *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondKillGroupMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition(this);
};

// Line 98: range 000000001616C268-000000001616C373
void __fastcall ZN27DungeonCondKillGroupMonsterCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondKillGroupMonster *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN27DungeonCondKillGroupMonsterCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition(this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondKillGroupMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 106: range 000000001619F43C-000000001619F489
void __cdecl DungeonCondKillTypeMonster::~DungeonCondKillTypeMonster(DungeonCondKillTypeMonster *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondKillTypeMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition((DungeonCondition *const)this);
};

// Line 109: range 000000001616C6B8-000000001616C809
void __fastcall ZN26DungeonCondKillTypeMonsterCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondKillTypeMonster *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN26DungeonCondKillTypeMonsterCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition((DungeonCondition *const)this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondKillTypeMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 123: range 000000001619F3C0-000000001619F40D
void __cdecl DungeonCondFinishQuest::~DungeonCondFinishQuest(DungeonCondFinishQuest *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondFinishQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition(this);
};

// Line 126: range 000000001616CB4E-000000001616CC59
void __fastcall ZN22DungeonCondFinishQuestCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondFinishQuest *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN22DungeonCondFinishQuestCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition(this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondFinishQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 134: range 000000001619F344-000000001619F391
void __cdecl DungeonCondKillMonsterCount::~DungeonCondKillMonsterCount(DungeonCondKillMonsterCount *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondKillMonsterCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition((DungeonCondition *const)this);
};

// Line 137: range 000000001616CF9E-000000001616D0EF
void __fastcall ZN27DungeonCondKillMonsterCountCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondKillMonsterCount *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN27DungeonCondKillMonsterCountCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition((DungeonCondition *const)this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondKillMonsterCount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 151: range 000000001619F2C8-000000001619F315
void __cdecl DungeonCondInTime::~DungeonCondInTime(DungeonCondInTime *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondInTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition((DungeonCondition *const)this);
};

// Line 175: range 000000001619F24C-000000001619F299
void __cdecl DungeonCondFinishChallenge::~DungeonCondFinishChallenge(DungeonCondFinishChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondFinishChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition(this);
};

// Line 178: range 000000001616D778-000000001616D883
void __fastcall ZN26DungeonCondFinishChallengeCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondFinishChallenge *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN26DungeonCondFinishChallengeCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition(this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondFinishChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 185: range 000000001619F1D0-000000001619F21D
void __cdecl DungeonCondEndMultistagePlay::~DungeonCondEndMultistagePlay(DungeonCondEndMultistagePlay *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonCondEndMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v1;
  DungeonCondition::~DungeonCondition(this);
};

// Line 188: range 000000001616DBC8-000000001616DCD3
void __fastcall ZN28DungeonCondEndMultistagePlayCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene(
        DungeonCondEndMultistagePlay *const this,
        const data::DungeonCondConfig *a2,
        int a3,
        DungeonScene *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN28DungeonCondEndMultistagePlayCI216DungeonConditionERKN4data17DungeonCondConfigEjR12DungeonScene;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a3;
  DungeonCondition::DungeonCondition(this, a2, *(_DWORD *)(v4 + 32), a4);
  v7 = (int (**)(...))(&`vtable for'DungeonCondEndMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 380: range 000000001604FD22-000000001604FD69
ConditionState __cdecl DungeonCondition::getCondState(const DungeonCondition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cond_state_);
  }
  return this->cond_state_;
};

// Line 546: range 00000000155C4BB4-00000000155C4D75
void __cdecl DungeonCondition::DungeonCondition(
        DungeonCondition *const this,
        const data::DungeonCondConfig *cond_config,
        uint32_t cond_index,
        DungeonScene *dungeon_scene)
{
  int (**v4)(...); // rdx
  uint32_t SceneTimeSeconds; // edx

  v4 = (int (**)(...))(&`vtable for'DungeonCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_state_);
  }
  this->cond_state_ = COND_STATE_NONE;
  data::DungeonCondConfig::DungeonCondConfig(&this->cond_config_, cond_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_index_);
  }
  this->cond_index_ = cond_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->dungeon_scene_);
  this->dungeon_scene_ = dungeon_scene;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = 0;
  SceneTimeSeconds = Scene::getSceneTimeSeconds((Scene *const)this->dungeon_scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = SceneTimeSeconds;
};
