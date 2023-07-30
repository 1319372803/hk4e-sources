// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/battle_pass/player_battle_pass_comp.h

// Line 18: range 00000000153BFF46-00000000153C03D3
void __cdecl BattlePassSchedule::BattlePassSchedule(BattlePassSchedule *const this, BattlePassSchedule *a2)
{
  uint32_t schedule_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t level; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t point; // ecx
  char v9; // al
  __int64 v10; // rsi
  proto::BattlePassUnlockStatus unlock_status; // ecx
  char v12; // dl
  __int64 v13; // rdx
  std::unordered_set<BattlePassRewardTag> *p_reward_taken_set; // rsi
  bool is_extra_paid_reward_taken; // cl
  char v16; // al
  __int64 v17; // rsi
  bool is_viewed; // cl
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rsi
  uint32_t cur_cycle_points; // ecx
  char v23; // dl
  __int64 v24; // rdx
  bool is_notify_mail_sent; // cl
  char v26; // al
  __int64 v27; // rsi
  uint32_t paid_platform_flags; // ecx
  char v29; // dl
  __int64 v30; // rdx
  BattlePassSchedule *v31; // [rsp+0h] [rbp-10h]

  v31 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->schedule_id = schedule_id;
  v4 = (((_BYTE)v31 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->level);
  }
  level = v31->level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->level, v4, v7);
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v31->point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->point);
  }
  point = v31->point;
  v9 = *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->point, v4, &this->point);
  }
  this->point = point;
  v10 = (((_BYTE)v31 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->unlock_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->unlock_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->unlock_status);
  }
  unlock_status = v31->unlock_status;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->unlock_status, v10, v13);
  this->unlock_status = unlock_status;
  p_reward_taken_set = &v31->reward_taken_set;
  std::unordered_set<BattlePassRewardTag>::unordered_set(&this->reward_taken_set, &v31->reward_taken_set);
  if ( *(char *)(((unsigned __int64)&v31->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v31->is_extra_paid_reward_taken);
  is_extra_paid_reward_taken = v31->is_extra_paid_reward_taken;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_extra_paid_reward_taken >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_reward_taken_set) = v16 != 0;
    __asan_report_store1(&this->is_extra_paid_reward_taken, p_reward_taken_set, &this->is_extra_paid_reward_taken);
  }
  this->is_extra_paid_reward_taken = is_extra_paid_reward_taken;
  v17 = ((_BYTE)v31 + 73) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v31->is_viewed >> 3) + 0x7FFF8000) != 0
    && (char)v17 >= *(_BYTE *)(((unsigned __int64)&v31->is_viewed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v31->is_viewed);
  }
  is_viewed = v31->is_viewed;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_viewed, v17, v20);
  this->is_viewed = is_viewed;
  v21 = (((_BYTE)v31 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->cur_cycle_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->cur_cycle_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->cur_cycle_points);
  }
  cur_cycle_points = v31->cur_cycle_points;
  v23 = *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->cur_cycle_points, v21, v24);
  this->cur_cycle_points = cur_cycle_points;
  if ( *(char *)(((unsigned __int64)&v31->is_notify_mail_sent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v31->is_notify_mail_sent);
  is_notify_mail_sent = v31->is_notify_mail_sent;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_notify_mail_sent >> 3) + 0x7FFF8000);
  if ( v26 < 0 )
  {
    LOBYTE(v21) = v26 != 0;
    __asan_report_store1(&this->is_notify_mail_sent, v21, &this->is_notify_mail_sent);
  }
  this->is_notify_mail_sent = is_notify_mail_sent;
  v27 = (((_BYTE)v31 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->paid_platform_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->paid_platform_flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->paid_platform_flags);
  }
  paid_platform_flags = v31->paid_platform_flags;
  v29 = *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3) + 0x7FFF8000);
  LOBYTE(v27) = v29 != 0;
  v30 = (v29 != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= v29);
  if ( (_BYTE)v30 )
    __asan_report_store4(&this->paid_platform_flags, v27, v30);
  this->paid_platform_flags = paid_platform_flags;
};

// Line 18: range 0000000015190448-0000000015190466
void __cdecl BattlePassSchedule::~BattlePassSchedule(BattlePassSchedule *const this)
{
  std::unordered_set<BattlePassRewardTag>::~unordered_set(&this->reward_taken_set);
};

// Line 20: range 000000001518FE8A-00000000151900EF
// local variable allocation has failed, the output may be wrong!
void __cdecl BattlePassSchedule::BattlePassSchedule(BattlePassSchedule *const this, uint32_t schedule_id)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&schedule_id, this);
  }
  this->schedule_id = schedule_id;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->level, v2, v3);
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point, v2, &this->point);
  }
  this->point = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->unlock_status, v4, v5);
  this->unlock_status = BATTLE_PASS_UNLOCK_INVALID;
  std::unordered_set<BattlePassRewardTag>::unordered_set(&this->reward_taken_set);
  if ( *(char *)(((unsigned __int64)&this->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_extra_paid_reward_taken, v4, &this->is_extra_paid_reward_taken);
  this->is_extra_paid_reward_taken = 0;
  v6 = ((_BYTE)this + 73) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_viewed, v6, v7);
  this->is_viewed = 0;
  v8 = (((_BYTE)this + 76) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->cur_cycle_points, v8, v9);
  this->cur_cycle_points = 0;
  if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify_mail_sent, v8, &this->is_notify_mail_sent);
  this->is_notify_mail_sent = 0;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->paid_platform_flags, (((_BYTE)this + 84) & 7u) + 3, v10);
  this->paid_platform_flags = 0;
};

// Line 52: range 00000000154CBE9A-00000000154CBF19
void __cdecl PlayerBattlePassComp::~PlayerBattlePassComp(PlayerBattlePassComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerBattlePassComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::~set(&this->cross_schedule_weekly_watcher_set_);
  std::unordered_map<unsigned int,BattlePassMission>::~unordered_map(&this->cur_mission_map_);
  std::unordered_map<unsigned int,BattlePassSchedule>::~unordered_map(&this->schedule_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 52: range 00000000154CBF1A-00000000154CBF44
void __cdecl PlayerBattlePassComp::~PlayerBattlePassComp(PlayerBattlePassComp *const this)
{
  PlayerBattlePassComp::~PlayerBattlePassComp(this);
  operator delete(this, 0xD0uLL);
};

// Line 55: range 0000000017214042-000000001721404C
uint32_t __cdecl PlayerBattlePassComp::getType()
{
  return 29;
};

// Line 57: range 0000000017483AB4-0000000017483C05
void __cdecl ZN20PlayerBattlePassCompCI214PlayerCompBaseER6Player(PlayerBattlePassComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerBattlePassComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,BattlePassSchedule>::unordered_map(&this->schedule_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_schedule_id_, a2, &this->cur_schedule_id_);
  }
  this->cur_schedule_id_ = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->last_mission_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_mission_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->last_mission_refresh_time_, v3, v4);
  this->last_mission_refresh_time_ = 0;
  std::unordered_map<unsigned int,BattlePassMission>::unordered_map(&this->cur_mission_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->weekly_last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weekly_last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weekly_last_refresh_time_, v3, &this->weekly_last_refresh_time_);
  }
  this->weekly_last_refresh_time_ = 0;
  std::set<unsigned int>::set(&this->cross_schedule_weekly_watcher_set_);
};

// Line 147: range 0000000013EC177A-0000000013EC17C1
uint32_t __cdecl PlayerBattlePassComp::getCurScheduleId(const PlayerBattlePassComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_schedule_id_);
  }
  return this->cur_schedule_id_;
};

// Line 147: range 00000000151900F0-000000001519013E
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBattlePassComp::setCurScheduleId(PlayerBattlePassComp *const this, uint32_t cur_schedule_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_schedule_id_, *(_QWORD *)&cur_schedule_id__out, &this->cur_schedule_id_);
  }
  this->cur_schedule_id_ = cur_schedule_id__out;
};

// Line 148: range 0000000015190140-000000001519018F
uint32_t __cdecl PlayerBattlePassComp::getLastRefreshTime(const PlayerBattlePassComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_mission_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_mission_refresh_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_mission_refresh_time_);
  }
  return this->last_mission_refresh_time_;
};

// Line 148: range 0000000015190190-00000000151901E6
void __cdecl PlayerBattlePassComp::setLastRefreshTime(
        PlayerBattlePassComp *const this,
        uint32_t last_mission_refresh_time__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_mission_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_mission_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_mission_refresh_time_, (((_BYTE)this + 92) & 7u) + 3, v2);
  this->last_mission_refresh_time_ = last_mission_refresh_time__out;
};

// Line 150: range 00000000151901E8-0000000015190234
uint32_t __cdecl PlayerBattlePassComp::getWeeklyLastRefreshTime(const PlayerBattlePassComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weekly_last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weekly_last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->weekly_last_refresh_time_);
  }
  return this->weekly_last_refresh_time_;
};

// Line 150: range 0000000015190236-0000000015190289
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBattlePassComp::setWeeklyLastRefreshTime(
        PlayerBattlePassComp *const this,
        uint32_t weekly_last_refresh_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weekly_last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weekly_last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->weekly_last_refresh_time_,
      *(_QWORD *)&weekly_last_refresh_time__out,
      &this->weekly_last_refresh_time_);
  }
  this->weekly_last_refresh_time_ = weekly_last_refresh_time__out;
};
