// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/event/player_event_comp.cpp

// Line 19: range 000000001661A7D2-000000001661A7E5
int32_t __cdecl PlayerEventComp::onLogin(PlayerEventComp *const this, bool is_new_player)
{
  return 0;
};

// Line 24: range 000000001661A7E6-000000001661A838
int32_t __cdecl PlayerEventComp::start(PlayerEventComp *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_, v1, &this->is_started_);
  this->is_started_ = 1;
  return 0;
};

// Line 30: range 000000001661A83A-000000001661A8A5
void __cdecl PlayerEventComp::notifyEvent(PlayerEventComp *const this, BaseEventPtr *p_event_ptr)
{
  std::shared_ptr<BaseEvent> v2; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<BaseEvent>::shared_ptr(&v2, p_event_ptr);
  EventCenter::notifyEvent(&this->event_center_, &v2);
  std::shared_ptr<BaseEvent>::~shared_ptr(&v2);
};
