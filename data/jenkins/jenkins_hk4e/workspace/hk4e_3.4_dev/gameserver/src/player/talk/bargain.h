// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/talk/bargain.h

// Line 22: range 00000000170FB1C2-00000000170FB1EC
void __cdecl Bargain::~Bargain(Bargain *const this)
{
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::enable_shared_from_this<Bargain>::~enable_shared_from_this(this);
};

// Line 49: range 0000000016D76018-0000000016D76066
PlayerPtr __cdecl Bargain::getOwner(Bargain *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 59: range 0000000016D76068-0000000016D760B5
bool __cdecl Bargain::isStarted(Bargain *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_state_);
  }
  return this->cur_state_ == BARGAIN_START;
};

// Line 71: range 0000000016D760B6-0000000016D76105
int32_t __cdecl Bargain::getCurMood(const Bargain *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_mood_);
  }
  return this->cur_mood_;
};
