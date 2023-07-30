// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/auto_recover_item_proxy.h

// Line 26: range 000000001750E772-000000001750E7AC
void __cdecl AutoRecoverItemProxy::~AutoRecoverItemProxy(AutoRecoverItemProxy *const this)
{
  PlayerUnixTimer::~PlayerUnixTimer(&this->refresh_timer_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::enable_shared_from_this<AutoRecoverItemProxy>::~enable_shared_from_this(this);
};

// Line 58: range 0000000017D68A3E-0000000017D68A85
uint32_t __cdecl AutoRecoverItemProxy::getValue(const AutoRecoverItemProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value_);
  }
  return this->value_;
};

// Line 59: range 0000000017D68A86-0000000017D68AD5
uint32_t __cdecl AutoRecoverItemProxy::getNextRefreshTime(const AutoRecoverItemProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->next_refresh_time_);
  }
  return this->next_refresh_time_;
};

// Line 156: range 0000000016D6203A-0000000016D62088
PlayerPtr __cdecl AutoRecoverItemProxy::getOwner(AutoRecoverItemProxy *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
