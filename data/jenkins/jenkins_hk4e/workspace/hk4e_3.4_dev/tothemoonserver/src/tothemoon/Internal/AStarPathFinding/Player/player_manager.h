// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Player/player_manager.h

// Line 12: range 000000000CFCEE46-000000000CFCEE70
void __cdecl PlayerManager::PlayerManager(PlayerManager *const this)
{
  std::unordered_map<int,std::shared_ptr<Player>>::unordered_map(&this->playerMap);
  std::shared_ptr<StatisticsCollector>::shared_ptr(&this->performanceDataCollector);
};

// Line 12: range 000000000D015EF6-000000000D015F20
void __cdecl PlayerManager::~PlayerManager(PlayerManager *const this)
{
  std::shared_ptr<StatisticsCollector>::~shared_ptr(&this->performanceDataCollector);
  std::unordered_map<int,std::shared_ptr<Player>>::~unordered_map(&this->playerMap);
};
