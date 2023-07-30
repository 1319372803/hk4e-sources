// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/game_timer.h

// Line 23: range 0000000014839D24-0000000014839D71
void __cdecl UnixTimer::~UnixTimer(UnixTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  common::tools::MiTimer::~MiTimer(this);
};

// Line 23: range 0000000014839D72-0000000014839D9C
void __cdecl UnixTimer::~UnixTimer(UnixTimer *const this)
{
  UnixTimer::~UnixTimer(this);
  operator delete(this, 0x48uLL);
};

// Line 33: range 00000000159015B4-0000000015901613
void __cdecl UnixTimerMgr::~UnixTimerMgr(UnixTimerMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UnixTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v1;
  UnixTimer::~UnixTimer(&this->update_timer_);
  common::tools::TimerMgr::~TimerMgr(this);
};

// Line 33: range 0000000015901614-000000001590163E
void __cdecl UnixTimerMgr::~UnixTimerMgr(UnixTimerMgr *const this)
{
  UnixTimerMgr::~UnixTimerMgr(this);
  operator delete(this, 0xE8uLL);
};

// Line 46: range 00000000155C5918-00000000155C5977
void __cdecl PausableTimerMgr::~PausableTimerMgr(PausableTimerMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PausableTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v1;
  UnixTimer::~UnixTimer(&this->update_timer_);
  common::tools::TimerMgr::~TimerMgr(this);
};

// Line 46: range 00000000155C5978-00000000155C59A2
void __cdecl PausableTimerMgr::~PausableTimerMgr(PausableTimerMgr *const this)
{
  PausableTimerMgr::~PausableTimerMgr(this);
  operator delete(this, 0x100uLL);
};

// Line 71: range 00000000140FCC3C-00000000140FCC66
void __cdecl PlayerUnixTimer::~PlayerUnixTimer(PlayerUnixTimer *const this)
{
  PlayerUnixTimer::~PlayerUnixTimer(this);
  operator delete(this, 0x58uLL);
};

// Line 71: range 00000000140FCBDE-00000000140FCC3B
void __cdecl PlayerUnixTimer::~PlayerUnixTimer(PlayerUnixTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerUnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 94: range 00000000144F0E02-00000000144F0E2C
void __cdecl PlayerTimer::~PlayerTimer(PlayerTimer *const this)
{
  PlayerTimer::~PlayerTimer(this);
  operator delete(this, 0x58uLL);
};

// Line 94: range 00000000144F0DA4-00000000144F0E01
void __cdecl PlayerTimer::~PlayerTimer(PlayerTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 107: range 00000000159006F2-0000000015900751
void __cdecl PlayerTimerMgr::~PlayerTimerMgr(PlayerTimerMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v1;
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  PausableTimerMgr::~PausableTimerMgr(this);
};

// Line 107: range 0000000015900752-000000001590077C
void __cdecl PlayerTimerMgr::~PlayerTimerMgr(PlayerTimerMgr *const this)
{
  PlayerTimerMgr::~PlayerTimerMgr(this);
  operator delete(this, 0x110uLL);
};

// Line 126: range 0000000015901588-00000000159015B2
void __cdecl SceneUnixTimer::~SceneUnixTimer(SceneUnixTimer *const this)
{
  SceneUnixTimer::~SceneUnixTimer(this);
  operator delete(this, 0x58uLL);
};

// Line 126: range 000000001590152A-0000000015901587
void __cdecl SceneUnixTimer::~SceneUnixTimer(SceneUnixTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SceneUnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 139: range 00000000159014A0-00000000159014FD
void __cdecl SceneTimer::~SceneTimer(SceneTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SceneTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 139: range 00000000159014FE-0000000015901528
void __cdecl SceneTimer::~SceneTimer(SceneTimer *const this)
{
  SceneTimer::~SceneTimer(this);
  operator delete(this, 0x58uLL);
};

// Line 151: range 0000000015900666-00000000159006C5
void __cdecl SceneTimerMgr::~SceneTimerMgr(SceneTimerMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SceneTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v1;
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  PausableTimerMgr::~PausableTimerMgr(this);
};

// Line 151: range 00000000159006C6-00000000159006F0
void __cdecl SceneTimerMgr::~SceneTimerMgr(SceneTimerMgr *const this)
{
  SceneTimerMgr::~SceneTimerMgr(this);
  operator delete(this, 0x110uLL);
};

// Line 170: range 0000000014839DFC-0000000014839E26
void __cdecl HomeUnixTimer::~HomeUnixTimer(HomeUnixTimer *const this)
{
  HomeUnixTimer::~HomeUnixTimer(this);
  operator delete(this, 0x58uLL);
};

// Line 170: range 0000000014839D9E-0000000014839DFB
void __cdecl HomeUnixTimer::~HomeUnixTimer(HomeUnixTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeUnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr_);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 193: range 0000000015901474-000000001590149E
void __cdecl HomeTimer::~HomeTimer(HomeTimer *const this)
{
  HomeTimer::~HomeTimer(this);
  operator delete(this, 0x58uLL);
};

// Line 193: range 0000000015901416-0000000015901473
void __cdecl HomeTimer::~HomeTimer(HomeTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v1;
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr_);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 206: range 000000001590063A-0000000015900664
void __cdecl HomeTimerMgr::~HomeTimerMgr(HomeTimerMgr *const this)
{
  HomeTimerMgr::~HomeTimerMgr(this);
  operator delete(this, 0x110uLL);
};

// Line 206: range 00000000159005DA-0000000015900639
void __cdecl HomeTimerMgr::~HomeTimerMgr(HomeTimerMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v1;
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr_);
  PausableTimerMgr::~PausableTimerMgr(this);
};
