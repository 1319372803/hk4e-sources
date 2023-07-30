// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_basic_comp.h

// Line 24: range 0000000014838004-0000000014838071
void __cdecl HomeBasicComp::~HomeBasicComp(HomeBasicComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeBasicComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  HomeUnixTimer::~HomeUnixTimer(&this->gametime_timer_);
  std::string::~string(&this->owner_nick_name_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 24: range 0000000014838072-000000001483809C
void __cdecl HomeBasicComp::~HomeBasicComp(HomeBasicComp *const this)
{
  HomeBasicComp::~HomeBasicComp(this);
  operator delete(this, 0xC8uLL);
};

// Line 54: range 000000001462148C-00000000146214C6
uint64_t __cdecl HomeBasicComp::getExp(const HomeBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->exp_;
};

// Line 57: range 00000000146214C8-000000001462150F
uint32_t __cdecl HomeBasicComp::getLevel(const HomeBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->level_;
};

// Line 57: range 0000000014621510-0000000014621560
void __cdecl HomeBasicComp::setIsInEditMode(HomeBasicComp *const this, bool is_in_edit_mode)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_edit_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_edit_mode_);
  this->is_in_edit_mode_ = is_in_edit_mode;
};

// Line 63: range 0000000014621562-00000000146215B1
uint32_t __cdecl HomeBasicComp::getEditSceneId(const HomeBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->edit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->edit_scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->edit_scene_id_;
};

// Line 63: range 00000000146215B2-0000000014621607
void __cdecl HomeBasicComp::setEditSceneId(HomeBasicComp *const this, uint32_t scene_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->edit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->edit_scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->edit_scene_id_);
  }
  this->edit_scene_id_ = scene_id;
};

// Line 66: range 0000000014621608-0000000014621619
const std::string *__cdecl HomeBasicComp::getOwnerNickName[abi:cxx11](const HomeBasicComp *const this)
{
  return &this->owner_nick_name_;
};

// Line 67: range 000000001462161A-0000000014621642
void __cdecl HomeBasicComp::setOwnerNickName(HomeBasicComp *const this, const std::string *nick_name)
{
  std::string::operator=(&this->owner_nick_name_, nick_name);
};

// Line 86: range 00000000155C580E-00000000155C585B
bool __cdecl HomeBasicComp::isPaused(const HomeBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_paused_);
  }
  return this->is_paused_;
};

// Line 94: range 0000000014621644-0000000014621691
void __cdecl HomeBasicComp::setLevel(HomeBasicComp *const this, uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = level;
};

// Line 110: range 00000000155C585C-00000000155C5896
uint64_t __cdecl HomeBasicComp::getHomeTimeMs(const HomeBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->home_time_ms_;
};

// Line 110: range 00000000155C5898-00000000155C58DB
void __cdecl HomeBasicComp::setHomeTimeMs(HomeBasicComp *const this, uint64_t home_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->home_time_ms_);
  this->home_time_ms_ = home_time_ms__out;
};

// Line 139: range 0000000014820C82-0000000014821031
void __cdecl ZN13HomeBasicCompCI212HomeCompBaseER4Home(HomeBasicComp *const this, Home *a2)
{
  int (**v2)(...); // rdx
  HomeBasicComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  HomeBasicComp *v5; // [rsp+18h] [rbp-78h] BYREF
  HomePtr p_home_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(HomeBasicComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (HomeBasicComp::*)(long unsigned int),HomeBasicComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeBasicComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->exp_);
  this->exp_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 0;
  std::string::basic_string(&this->owner_nick_name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_time_);
  }
  this->game_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_paused_);
  }
  this->is_paused_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->home_time_ms_);
  this->home_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_in_edit_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_edit_mode_);
  this->is_in_edit_mode_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->edit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->edit_scene_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->edit_scene_id_);
  }
  this->edit_scene_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_game_time_update_time_);
  }
  this->last_game_time_update_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Home,Home>((Home *)&p_home_ptr);
  v5 = this;
  __f[0] = (void (*)(HomeBasicComp *, unsigned __int64))HomeBasicComp::onGameTimer;
  __f[1] = 0LL;
  std::bind<void (HomeBasicComp::*)(unsigned long),HomeBasicComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (HomeBasicComp::*)(unsigned long) ()(HomeBasicComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  HomeUnixTimer::HomeUnixTimer(&this->gametime_timer_, &p_home_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Home>::~shared_ptr(&p_home_ptr);
};

// Line 314: range 00000000131E8FD0-00000000131E9018
bool __cdecl HomeBasicComp::getIsInEditMode(const HomeBasicComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_edit_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_edit_mode_);
  return this->is_in_edit_mode_;
};
