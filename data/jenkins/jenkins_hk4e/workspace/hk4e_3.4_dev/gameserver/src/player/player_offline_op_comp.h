// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_offline_op_comp.h

// Line 37: range 0000000017B8D880-0000000017B8D923
void __cdecl PlayerOfflineOpComp::~PlayerOfflineOpComp(PlayerOfflineOpComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerOfflineOpComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->timer_);
  std::unordered_set<unsigned int>::~unordered_set(&this->type_dirty_set_);
  std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::~unordered_map(&this->exec_func_map_);
  std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::~unordered_map(&this->send_cb_func_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->cur_index_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 37: range 0000000017B8D924-0000000017B8D94E
void __cdecl PlayerOfflineOpComp::~PlayerOfflineOpComp(PlayerOfflineOpComp *const this)
{
  PlayerOfflineOpComp::~PlayerOfflineOpComp(this);
  operator delete(this, 0x160uLL);
};

// Line 44: range 0000000017214A4F-0000000017214A59
uint32_t __cdecl PlayerOfflineOpComp::getType()
{
  return 55;
};

// Line 46: range 000000001748B946-000000001748BC02
void __cdecl ZN19PlayerOfflineOpCompCI214PlayerCompBaseER6Player(PlayerOfflineOpComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerOfflineOpComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  __int64 v5; // rdx
  PlayerOfflineOpComp *v6; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerOfflineOpComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerOfflineOpComp::*)(long unsigned int),PlayerOfflineOpComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerOfflineOpComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->cur_index_map_);
  std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::unordered_map(&this->send_cb_func_map_);
  std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::unordered_map(&this->exec_func_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->type_dirty_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v6 = this;
  __f[0] = (void (*)(PlayerOfflineOpComp *, unsigned __int64))PlayerOfflineOpComp::onTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerOfflineOpComp::*)(unsigned long),PlayerOfflineOpComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v6,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerOfflineOpComp::*)(unsigned long) ()(PlayerOfflineOpComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timer_interval_, &p_player_ptr, &this->timer_interval_);
  }
  this->timer_interval_ = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->need_save_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_save_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->need_save_time_, (((_BYTE)this + 92) & 7u) + 3, v5);
  this->need_save_time_ = 0;
};
