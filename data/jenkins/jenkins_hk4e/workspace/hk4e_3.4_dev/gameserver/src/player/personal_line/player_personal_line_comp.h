// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/personal_line/player_personal_line_comp.h

// Line 28: range 0000000017094044-00000000170940E5
void __cdecl PlayerPersonalLineComp::~PlayerPersonalLineComp(PlayerPersonalLineComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerPersonalLineComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_personal_line_set_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->personal_line_timer_);
  std::unordered_set<unsigned int>::~unordered_set(&this->cannot_unlock_personal_line_relay_quest_id_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->cannot_unlock_personal_line_set_);
  std::weak_ptr<Observer>::~weak_ptr(&this->daily_task_event_observer_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 28: range 00000000170940E6-0000000017094110
void __cdecl PlayerPersonalLineComp::~PlayerPersonalLineComp(PlayerPersonalLineComp *const this)
{
  PlayerPersonalLineComp::~PlayerPersonalLineComp(this);
  operator delete(this, 0x138uLL);
};

// Line 31: range 0000000017214154-000000001721415E
uint32_t __cdecl PlayerPersonalLineComp::getType()
{
  return 37;
};

// Line 33: range 000000001748544C-000000001748569B
void __cdecl ZN22PlayerPersonalLineCompCI214PlayerCompBaseER6Player(PlayerPersonalLineComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerPersonalLineComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerPersonalLineComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerPersonalLineComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerPersonalLineComp::*)(long unsigned int),PlayerPersonalLineComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerPersonalLineComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Observer>::weak_ptr(&this->daily_task_event_observer_);
  std::unordered_set<unsigned int>::unordered_set(&this->cannot_unlock_personal_line_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->cannot_unlock_personal_line_relay_quest_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerPersonalLineComp *, unsigned __int64))PlayerPersonalLineComp::onPersonalLineTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerPersonalLineComp::*)(unsigned long),PlayerPersonalLineComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerPersonalLineComp::*)(unsigned long) ()(PlayerPersonalLineComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->personal_line_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_personal_line_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_finished_daily_task_num_, &p_player_ptr, &this->cur_finished_daily_task_num_);
  }
  this->cur_finished_daily_task_num_ = 0;
};

// Line 56: range 0000000013EBFAB4-0000000013EBFB85
bool __fastcall PlayerPersonalLineComp::isPersonalLineUnlock(
        PlayerPersonalLineComp *const this,
        uint32_t personal_line_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 personal_line_id:56";
  *(_QWORD *)(v2 + 16) = PlayerPersonalLineComp::isPersonalLineUnlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = personal_line_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->unlock_personal_line_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 83: range 0000000017214160-00000000172141AC
uint32_t __cdecl PlayerPersonalLineComp::getCurFinishedDailyTaskNum(const PlayerPersonalLineComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_finished_daily_task_num_);
  }
  return this->cur_finished_daily_task_num_;
};
