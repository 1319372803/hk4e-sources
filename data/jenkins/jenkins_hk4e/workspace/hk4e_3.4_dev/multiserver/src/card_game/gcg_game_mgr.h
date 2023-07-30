// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/gcg_game_mgr.h

// Line 16: range 000000000DF3E0AC-000000000DF3E0FD
void __cdecl GCGGameMgr::GCGGameMgr(GCGGameMgr *const this)
{
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::map(&this->game_mode_map_);
  std::map<unsigned int,unsigned int>::map(&this->uid_map_);
  std::map<unsigned int,unsigned int>::map(&this->destroy_uid_map_);
  std::shared_ptr<common::tools::MiTimer>::shared_ptr(&this->timer_ptr_, 0LL);
};

// Line 16: range 000000000DF3E0FE-000000000DF3E14A
void __cdecl GCGGameMgr::~GCGGameMgr(GCGGameMgr *const this)
{
  std::shared_ptr<common::tools::MiTimer>::~shared_ptr(&this->timer_ptr_);
  std::map<unsigned int,unsigned int>::~map(&this->destroy_uid_map_);
  std::map<unsigned int,unsigned int>::~map(&this->uid_map_);
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::~map(&this->game_mode_map_);
};
