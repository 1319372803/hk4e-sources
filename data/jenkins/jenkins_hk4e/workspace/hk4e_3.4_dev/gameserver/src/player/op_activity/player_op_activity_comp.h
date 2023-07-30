// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/op_activity/player_op_activity_comp.h

// Line 27: range 0000000016D71BAA-0000000016D71C85
void __cdecl OpActivityRecord::OpActivityRecord(OpActivityRecord *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->schedule_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->use_bonus_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_bonus_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->use_bonus_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->use_bonus_count = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->last_refresh_time, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->last_refresh_time = 0;
};

// Line 36: range 000000001709412E-000000001709419B
void __cdecl PlayerOpActivityComp::~PlayerOpActivityComp(PlayerOpActivityComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerOpActivityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->op_activity_timer);
  std::unordered_map<unsigned int,OpActivityRecord>::~unordered_map(&this->op_activity_record_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 36: range 000000001709419C-00000000170941C6
void __cdecl PlayerOpActivityComp::~PlayerOpActivityComp(PlayerOpActivityComp *const this)
{
  PlayerOpActivityComp::~PlayerOpActivityComp(this);
  operator delete(this, 0xB0uLL);
};

// Line 39: range 0000000017214906-0000000017214910
uint32_t __cdecl PlayerOpActivityComp::getType()
{
  return 50;
};

// Line 40: range 000000001748959E-0000000017489740
void __cdecl ZN20PlayerOpActivityCompCI214PlayerCompBaseER6Player(PlayerOpActivityComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerOpActivityComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerOpActivityComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerOpActivityComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerOpActivityComp::*)(long unsigned int),PlayerOpActivityComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerOpActivityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,OpActivityRecord>::unordered_map(&this->op_activity_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerOpActivityComp *, unsigned __int64))PlayerOpActivityComp::onOpActivityTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerOpActivityComp::*)(unsigned long),PlayerOpActivityComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerOpActivityComp::*)(unsigned long) ()(PlayerOpActivityComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->op_activity_timer, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};
