// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/miracle_ring/player_miracle_ring_comp.h

// Line 26: range 0000000016D6F364-0000000016D6F3B6
void __cdecl MiracleRingGadgetData::MiracleRingGadgetData(MiracleRingGadgetData *const this)
{
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  std::shared_ptr<Gadget>::shared_ptr(&this->gadget_ptr);
};

// Line 26: range 0000000016D6F3B8-0000000016D6F3D6
void __cdecl MiracleRingGadgetData::~MiracleRingGadgetData(MiracleRingGadgetData *const this)
{
  std::shared_ptr<Gadget>::~shared_ptr(&this->gadget_ptr);
};

// Line 34: range 0000000017094710-000000001709477D
void __cdecl PlayerMiracleRingComp::~PlayerMiracleRingComp(PlayerMiracleRingComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerMiracleRingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->miracle_ring_timer_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->drop_tag_to_count_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 34: range 000000001709477E-00000000170947A8
void __cdecl PlayerMiracleRingComp::~PlayerMiracleRingComp(PlayerMiracleRingComp *const this)
{
  PlayerMiracleRingComp::~PlayerMiracleRingComp(this);
  operator delete(this, 0xD0uLL);
};

// Line 37: range 00000000172148F0-00000000172148FA
uint32_t __cdecl PlayerMiracleRingComp::getType()
{
  return 48;
};

// Line 40: range 0000000017488B2C-0000000017488E02
void __cdecl ZN21PlayerMiracleRingCompCI214PlayerCompBaseER6Player(PlayerMiracleRingComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  PlayerMiracleRingComp **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  PlayerMiracleRingComp *v7; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerMiracleRingComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerMiracleRingComp::*)(long unsigned int),PlayerMiracleRingComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerMiracleRingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_take_reward_time_, a2, &this->last_take_reward_time_);
  }
  this->last_take_reward_time_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->drop_tag_to_count_map_);
  if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gadget_created_, a2, &this->is_gadget_created_);
  this->is_gadget_created_ = 0;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->gadget_entity_id_, v3, v4);
  this->gadget_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_use_time_, v3, &this->last_use_time_);
  }
  this->last_use_time_ = 0;
  Vector3::Vector3(&this->create_pos_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v7 = this;
  __f[0] = (void (*)(PlayerMiracleRingComp *, unsigned __int64))PlayerMiracleRingComp::onTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerMiracleRingComp::*)(unsigned long),PlayerMiracleRingComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v7,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerMiracleRingComp::*)(unsigned long) ()(PlayerMiracleRingComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->miracle_ring_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};
