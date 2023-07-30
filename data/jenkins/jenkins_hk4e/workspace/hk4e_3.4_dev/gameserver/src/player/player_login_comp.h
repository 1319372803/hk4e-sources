// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_login_comp.h

// Line 21: range 0000000017B8D950-0000000017B8D9BD
void __cdecl PlayerLoginComp::~PlayerLoginComp(PlayerLoginComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerLoginComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->recv_questionnaire_mail_config_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->taken_login_reward_config_set_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 21: range 0000000017B8D9BE-0000000017B8D9E8
void __cdecl PlayerLoginComp::~PlayerLoginComp(PlayerLoginComp *const this)
{
  PlayerLoginComp::~PlayerLoginComp(this);
  operator delete(this, 0xA0uLL);
};

// Line 24: range 0000000017213F35-0000000017213F3F
uint32_t __cdecl PlayerLoginComp::getType()
{
  return 16;
};

// Line 28: range 000000001747D8C8-000000001747D9C1
void __cdecl ZN15PlayerLoginCompCI214PlayerCompBaseER6Player(PlayerLoginComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerLoginComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::unordered_set(&this->taken_login_reward_config_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_login_refresh_time_, a2, &this->last_login_refresh_time_);
  }
  this->last_login_refresh_time_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->recv_questionnaire_mail_config_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_questionnaire_mail_time_, a2, &this->last_recv_questionnaire_mail_time_);
  }
  this->last_recv_questionnaire_mail_time_ = 0;
};
