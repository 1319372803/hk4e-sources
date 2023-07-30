// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_mgr.h

// Line 26: range 000000000D831C30-000000000D831CFA
void __cdecl MatchMgr::MatchMgr(MatchMgr *const this)
{
  DungeonMatchPool::DungeonMatchPool(&this->dungeon_match_pool_);
  MpPlayMatchPool::MpPlayMatchPool(&this->mp_play_match_pool_);
  MechanicusMatchPool::MechanicusMatchPool(&this->mechanicus_match_pool_);
  GeneralMatchPool::GeneralMatchPool(&this->general_match_pool_);
  GCGMatchPool::GCGMatchPool(&this->gcg_match_pool_);
};

// Line 26: range 000000000D831CFC-000000000D831D5E
void __cdecl MatchMgr::~MatchMgr(MatchMgr *const this)
{
  GCGMatchPool::~GCGMatchPool(&this->gcg_match_pool_);
  GeneralMatchPool::~GeneralMatchPool(&this->general_match_pool_);
  MechanicusMatchPool::~MechanicusMatchPool(&this->mechanicus_match_pool_);
  MpPlayMatchPool::~MpPlayMatchPool(&this->mp_play_match_pool_);
  DungeonMatchPool::~DungeonMatchPool(&this->dungeon_match_pool_);
};
