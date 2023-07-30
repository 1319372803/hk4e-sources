// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mp/player_mp_comp.h

// Line 28: range 00000000170943F8-000000001709449B
void __cdecl PlayerMpComp::~PlayerMpComp(PlayerMpComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerMpComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->mp_apply_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->mp_update_timer_);
  proto::UpdateMpStatusNotify::~UpdateMpStatusNotify(&this->last_update_mp_status_notify_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->apply_uid_app_id_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->allow_enter_uid_timestamp_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 28: range 000000001709449C-00000000170944C6
void __cdecl PlayerMpComp::~PlayerMpComp(PlayerMpComp *const this)
{
  PlayerMpComp::~PlayerMpComp(this);
  operator delete(this, 0x190uLL);
};

// Line 31: range 000000001747C974-000000001747CE6F
void __cdecl ZN12PlayerMpCompCI214PlayerCompBaseER6Player(PlayerMpComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  PlayerMpComp **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  PlayerMpComp **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  PlayerMpComp *v11; // [rsp+10h] [rbp-90h] BYREF
  PlayerMpComp *v12; // [rsp+18h] [rbp-88h] BYREF
  void (*__f[2])(PlayerMpComp *, unsigned __int64); // [rsp+20h] [rbp-80h] BYREF
  PlayerPtr v14; // [rsp+30h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+40h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerMpComp::*)(long unsigned int),PlayerMpComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerMpComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_only_mp_with_ps_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_only_mp_with_ps_player_, a2, &this->is_only_mp_with_ps_player_);
  this->is_only_mp_with_ps_player_ = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->mp_setting_type_, v3, v4);
  this->mp_setting_type_ = MP_SETTING_NO_ENTER;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_mode_availability_, v3, &this->mp_mode_availability_);
  }
  this->mp_mode_availability_ = 0;
  v5 = ((_BYTE)this + 44) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_mp_scene_enterable_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_mp_scene_enterable_, v5, v6);
  this->is_mp_scene_enterable_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->allow_enter_uid_timestamp_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->apply_uid_app_id_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->type_before_enter_plot_dungeon_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_before_enter_plot_dungeon_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_before_enter_plot_dungeon_, v5, &this->type_before_enter_plot_dungeon_);
  }
  this->type_before_enter_plot_dungeon_ = MP_SETTING_NO_ENTER;
  proto::UpdateMpStatusNotify::UpdateMpStatusNotify(&this->last_update_mp_status_notify_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v11 = this;
  __f[0] = (void (*)(PlayerMpComp *, unsigned __int64))PlayerMpComp::onMpUpdateTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerMpComp::*)(unsigned long),PlayerMpComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v11,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v7,
    v8);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerMpComp::*)(unsigned long) ()(PlayerMpComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->mp_update_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(char *)(((unsigned __int64)&this->is_applying_enter_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_applying_enter_mp_, &p_player_ptr, &this->is_applying_enter_mp_);
  this->is_applying_enter_mp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&v14);
  v12 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerMpComp::onApplyEnterMpEnd;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerMpComp::*)(unsigned long),PlayerMpComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerMpComp *, unsigned __int64))&p_player_ptr,
    &v12,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v9,
    v10);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerMpComp::*)(unsigned long) ()(PlayerMpComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->mp_apply_timer_, &v14, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_block_end_time_, &v14, &this->mp_block_end_time_);
  }
  this->mp_block_end_time_ = 0;
};

// Line 91: range 0000000017D68C12-0000000017D68C2F
void __cdecl PlayerMpComp::clearAllowPlayerUidByGm(PlayerMpComp *const this)
{
  std::unordered_map<unsigned int,unsigned int>::clear(&this->allow_enter_uid_timestamp_map_);
};

// Line 94: range 00000000169086FE-000000001690874D
proto::MpSettingType __cdecl PlayerMpComp::getMpSettingType(PlayerMpComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_setting_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mp_setting_type_);
  }
  return this->mp_setting_type_;
};

// Line 138: range 0000000016D60B24-0000000016D60B6B
uint32_t __cdecl PlayerMpComp::getMpModeAvailabilty(const PlayerMpComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_mode_availability_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_mode_availability_);
  }
  return this->mp_mode_availability_;
};

// Line 147: range 0000000017D68C30-0000000017D68C7D
bool __cdecl PlayerMpComp::getIsApplyingEnterMp(const PlayerMpComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_applying_enter_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_applying_enter_mp_);
  return this->is_applying_enter_mp_;
};

// Line 147: range 0000000016D60B6C-0000000016D60BC2
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerMpComp::setIsApplyingEnterMp(PlayerMpComp *const this, bool is_applying_enter_mp__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_applying_enter_mp_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_applying_enter_mp_, is_applying_enter_mp__out, &this->is_applying_enter_mp_);
  this->is_applying_enter_mp_ = is_applying_enter_mp__out;
};

// Line 151: range 000000001690874E-000000001690879A
uint32_t __cdecl PlayerMpComp::getMpBlockEndTime(const PlayerMpComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_block_end_time_);
  }
  return this->mp_block_end_time_;
};

// Line 151: range 000000001690879C-00000000169087EF
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerMpComp::setMpBlockEndTime(PlayerMpComp *const this, uint32_t mp_block_end_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_block_end_time_, *(_QWORD *)&mp_block_end_time__out, &this->mp_block_end_time_);
  }
  this->mp_block_end_time_ = mp_block_end_time__out;
};

// Line 154: range 0000000017213F14-0000000017213F1E
uint32_t __cdecl PlayerMpComp::getType()
{
  return 12;
};
