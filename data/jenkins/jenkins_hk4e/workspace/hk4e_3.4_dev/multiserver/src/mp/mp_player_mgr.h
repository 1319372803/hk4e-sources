// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/mp/mp_player_mgr.h

// Line 23: range 000000000E07BB9E-000000000E07BC30
void __cdecl MpOnlinePlayerInfo::MpOnlinePlayerInfo(MpOnlinePlayerInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = 0;
  proto::OnlinePlayerInfo::OnlinePlayerInfo(&this->online_player_info);
  if ( *(char *)(((unsigned __int64)&this->is_only_mp_with_ps_player >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_only_mp_with_ps_player);
  this->is_only_mp_with_ps_player = 0;
};

// Line 31: range 000000000D837234-000000000D837292
void __cdecl MpPlayerMgr::MpPlayerMgr(MpPlayerMgr *const this)
{
  std::unordered_map<unsigned int,MpOnlinePlayerInfo>::unordered_map(&this->mp_player_map);
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->psn_id_map);
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->online_id_map);
  common::tools::RandomSet<unsigned int>::RandomSet(&this->uid_random_set_);
  common::tools::RandomSet<unsigned int>::RandomSet(&this->ps_uid_random_set_);
};

// Line 31: range 000000000DF3E1A0-000000000DF3E1FE
void __cdecl MpPlayerMgr::~MpPlayerMgr(MpPlayerMgr *const this)
{
  common::tools::RandomSet<unsigned int>::~RandomSet(&this->ps_uid_random_set_);
  common::tools::RandomSet<unsigned int>::~RandomSet(&this->uid_random_set_);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->online_id_map);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->psn_id_map);
  std::unordered_map<unsigned int,MpOnlinePlayerInfo>::~unordered_map(&this->mp_player_map);
};

// Line 129: range 000000000E03538A-000000000E0353A8
void __cdecl MpOnlinePlayerInfo::~MpOnlinePlayerInfo(MpOnlinePlayerInfo *const this)
{
  proto::OnlinePlayerInfo::~OnlinePlayerInfo(&this->online_player_info);
};
