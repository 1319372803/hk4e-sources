// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/echo_shell_activity.h

// Line 21: range 000000001666DD66-000000001666DDFB
void __cdecl SummerTimeDungeonData::SummerTimeDungeonData(SummerTimeDungeonData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->taken_chest_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_shell_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->taken_shell_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->taken_shell_count);
  }
  this->taken_shell_count = 0;
};

// Line 27: range 0000000016833002-00000000168330A9
void __cdecl EchoShellActivity::~EchoShellActivity(EchoShellActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EchoShellActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->pass_dungeon_set_);
  std::unordered_map<unsigned int,SummerTimeDungeonData>::~unordered_map(&this->summer_time_dungeon_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->taken_voice_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->taken_reward_set_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 27: range 00000000168330AA-00000000168330D4
void __cdecl EchoShellActivity::~EchoShellActivity(EchoShellActivity *const this)
{
  EchoShellActivity::~EchoShellActivity(this);
  operator delete(this, 0x4B8uLL);
};

// Line 30: range 00000000170228BC-0000000017022A1C
void __fastcall ZN17EchoShellActivityCI212BaseActivityER6Playerj(EchoShellActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN17EchoShellActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'EchoShellActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->taken_reward_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->taken_voice_set_);
  std::unordered_map<unsigned int,SummerTimeDungeonData>::unordered_map(&this->summer_time_dungeon_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->pass_dungeon_set_);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 32: range 00000000131E5693-00000000131E569D
data::NewActivityType __cdecl EchoShellActivity::getActivityStaticType()
{
  return 1602;
};
