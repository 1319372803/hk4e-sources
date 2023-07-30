// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/home_world.h

// Line 31: range 0000000013611212-0000000013611295
void __cdecl HomeWorld::~HomeWorld(HomeWorld *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_World = v2;
  std::list<std::shared_ptr<Scene>>::~list(&this->wait_for_destroy_scene_list_);
  std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::~unordered_map(&this->allow_enter_map_);
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr_);
  World::~World(this);
};

// Line 31: range 0000000013611296-00000000136112C0
void __cdecl HomeWorld::~HomeWorld(HomeWorld *const this)
{
  HomeWorld::~HomeWorld(this);
  operator delete(this, 0x1E8uLL);
};

// Line 62: range 00000000131E8BC0-00000000131E8C11
HomePtr __cdecl HomeWorld::getOwnHome(const HomeWorld *const this)
{
  __int64 v1; // rsi
  HomePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)this);
  result._M_ptr = (std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 62: range 00000000131E8C12-00000000131E8C20
bool __cdecl HomeWorld::isInMpMode(HomeWorld *const this)
{
  return 1;
};

// Line 68: range 00000000131E8BB0-00000000131E8BBE
data::WorldType __cdecl HomeWorld::getWorldType(const HomeWorld *const this)
{
  return 2;
};

// Line 69: range 000000001350F106-000000001350F19B
void __cdecl HomeAllowEnterPlayerInfo::HomeAllowEnterPlayerInfo(HomeAllowEnterPlayerInfo *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->uid = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->allow_enter_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->allow_enter_time >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->allow_enter_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->allow_enter_time = 0;
};

// Line 100: range 000000001462143E-000000001462148A
uint32_t __cdecl HomeWorld::getLastHasPlayerTime(const HomeWorld *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_has_player_time_);
  }
  return this->last_has_player_time_;
};
