// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_session.h

// Line 41: range 00000000178CBF2C-00000000178CBF76
void __cdecl HomeSession::~HomeSession(HomeSession *const this)
{
  std::map<unsigned int,HomeTryEnterPlayerInfo>::~map(&this->try_enter_player_map_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->timer_ptr_);
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr_);
  std::enable_shared_from_this<HomeSession>::~enable_shared_from_this(this);
};

// Line 52: range 0000000014621362-00000000146213B0
HomePtr __cdecl HomeSession::getHome(HomeSession *const this)
{
  HomePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)this);
  result._M_ptr = (std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 57: range 00000000146213B2-0000000014621401
uint32_t __cdecl HomeSession::getThreadIndex(HomeSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->thread_index_;
};

// Line 57: range 0000000014621402-000000001462143C
uint64_t __cdecl HomeSession::getLoadRand(const HomeSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->load_rand_;
};

// Line 60: range 0000000015194ADE-0000000015194B20
void __cdecl HomeSession::setLastLoadRand(HomeSession *const this, uint64_t load_rand)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_load_rand_);
  this->last_load_rand_ = load_rand;
};

// Line 89: range 00000000131E8CEE-00000000131E8D38
uint32_t __cdecl HomeSession::getInitModuleId(const HomeSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->init_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->init_module_id_;
};
