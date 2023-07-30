// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/investigation/player_investigation_comp.h

// Line 34: range 0000000016D6EB64-0000000016D6EB7E
void __cdecl InvestigationMonsterStatus::~InvestigationMonsterStatus(InvestigationMonsterStatus *const this)
{
  proto::InvestigationMonster::~InvestigationMonster(&this->proto_investigation_monster);
};

// Line 41: range 0000000016D6E93C-0000000016D6EA5D
void __cdecl TrackingInvestigationMonsterInfo::TrackingInvestigationMonsterInfo(
        TrackingInvestigationMonsterInfo *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->investigation_monster_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->scene_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->scene_id = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->group_id = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->monster_id, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->monster_id = 0;
};

// Line 52: range 00000000170947C6-0000000017094845
void __cdecl PlayerInvestigationComp::~PlayerInvestigationComp(PlayerInvestigationComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerInvestigationComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->reward_taken_target_id_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->finished_target_id_set_);
  std::map<unsigned int,Investigation>::~map(&this->investigation_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 52: range 0000000017094846-0000000017094870
void __cdecl PlayerInvestigationComp::~PlayerInvestigationComp(PlayerInvestigationComp *const this)
{
  PlayerInvestigationComp::~PlayerInvestigationComp(this);
  operator delete(this, 0xD8uLL);
};

// Line 55: range 0000000017213FD0-0000000017213FDA
uint32_t __cdecl PlayerInvestigationComp::getType()
{
  return 23;
};

// Line 58: range 000000001747F59A-000000001747F6BB
void __cdecl ZN23PlayerInvestigationCompCI214PlayerCompBaseER6Player(PlayerInvestigationComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerInvestigationComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,Investigation>::map(&this->investigation_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->finished_target_id_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->reward_taken_target_id_set_);
  TrackingInvestigationMonsterInfo::TrackingInvestigationMonsterInfo(&this->current_tracking_info_);
  if ( *(char *)(((unsigned __int64)&this->quest_daily_notify_login_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->quest_daily_notify_login_sent_, a2, &this->quest_daily_notify_login_sent_);
  this->quest_daily_notify_login_sent_ = 0;
  v3 = ((_BYTE)this - 47) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->quest_daily_notify_today_ack_, v3, v4);
  this->quest_daily_notify_today_ack_ = 0;
};

// Line 120: range 0000000015195A8E-0000000015195AE0
void __cdecl PlayerInvestigationComp::clientAckQuestDailyNotify(PlayerInvestigationComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = ((_BYTE)this - 47) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->quest_daily_notify_today_ack_, v1, v2);
  this->quest_daily_notify_today_ack_ = 1;
};

// Line 122: range 0000000017D691E6-0000000017D691FF
void __cdecl PlayerInvestigationComp::sendQuestDailyNotifyByGm(PlayerInvestigationComp *const this)
{
  PlayerInvestigationComp::sendQuestDailyNotify(this);
};

// Line 230: range 0000000016D6EAC6-0000000016D6EB63
void __cdecl InvestigationMonsterStatus::InvestigationMonsterStatus(InvestigationMonsterStatus *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  proto::InvestigationMonster::InvestigationMonster(&this->proto_investigation_monster);
  if ( *(char *)(((unsigned __int64)&this->is_target_scene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_target_scene, v1, &this->is_target_scene);
  this->is_target_scene = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->dist >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dist >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->dist, (((_BYTE)this + 100) & 7u) + 3, v2);
  this->dist = 0.0;
};

// Line 3602: range 00000000151959CC-0000000015195A8D
void __cdecl PlayerInvestigationComp::setTrackingInvestigationMonsterInfo(
        PlayerInvestigationComp *const this,
        const TrackingInvestigationMonsterInfo *tracking_info)
{
  __int64 v2; // rdx

  if ( *(_WORD *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->current_tracking_info_);
  if ( ((unsigned __int8)tracking_info & 7) >= *(_BYTE *)(((unsigned __int64)tracking_info >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)tracking_info >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&tracking_info->monster_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)tracking_info + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&tracking_info->monster_id + 3) >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load_n(tracking_info, 16LL);
  }
  v2 = *(_QWORD *)&tracking_info->group_id;
  *(_QWORD *)&this->current_tracking_info_.investigation_monster_id = *(_QWORD *)&tracking_info->investigation_monster_id;
  *(_QWORD *)&this->current_tracking_info_.group_id = v2;
};
