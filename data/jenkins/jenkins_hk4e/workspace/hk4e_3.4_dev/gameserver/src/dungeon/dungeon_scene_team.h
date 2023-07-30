// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_scene_team.h

// Line 22: range 0000000015F2D6C8-0000000015F2D6F2
void __cdecl DungeonSceneTeam::~DungeonSceneTeam(DungeonSceneTeam *const this)
{
  std::unordered_map<unsigned int,std::vector<unsigned long>>::~unordered_map(&this->candidate_team_player_map_);
  std::shared_ptr<SceneTeam>::~shared_ptr(&this->scene_team_ptr_);
};

// Line 25: range 0000000015D35F8E-0000000015D36016
void __cdecl DungeonSceneTeam::DungeonSceneTeam(DungeonSceneTeam *const this)
{
  std::shared_ptr<SceneTeam> __r; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<SceneTeam>::shared_ptr(&this->scene_team_ptr_);
  std::unordered_map<unsigned int,std::vector<unsigned long>>::unordered_map(&this->candidate_team_player_map_);
  common::tools::perf::make_shared<SceneTeam>();
  std::shared_ptr<SceneTeam>::operator=(&this->scene_team_ptr_, &__r);
  std::shared_ptr<SceneTeam>::~shared_ptr(&__r);
};

// Line 30: range 00000000141F50A4-00000000141F50CC
void __cdecl DungeonSceneTeam::setCandidateTeamPlayerMap(
        DungeonSceneTeam *const this,
        const DungeonSceneTeam::DungeonCandidateTeamPlayerMap *player_map)
{
  std::unordered_map<unsigned int,std::vector<unsigned long>>::operator=(&this->candidate_team_player_map_, player_map);
};

// Line 32: range 00000000141F50CE-00000000141F5112
void __cdecl DungeonSceneTeam::setSceneTeamIsInMpMode(DungeonSceneTeam *const this, bool is_in_mp_mode)
{
  SceneTeam *v2; // rax

  if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    SceneTeam::setIsInMpMode(v2, is_in_mp_mode);
  }
};

// Line 33: range 00000000141F5114-00000000141F51B9
void __cdecl DungeonSceneTeam::initSceneTeam(DungeonSceneTeam *const this, Player *player, uint32_t scene_id)
{
  SceneTeam *v3; // rbx
  uint32_t Uid; // r12d
  PlayerPtr p_host_player_ptr; // [rsp+20h] [rbp-20h] BYREF

  if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
  {
    v3 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    Uid = Player::getUid(player);
    toThisPtr<Player>((Player *)&p_host_player_ptr);
    SceneTeam::init(v3, &p_host_player_ptr, Uid, scene_id);
    std::shared_ptr<Player>::~shared_ptr(&p_host_player_ptr);
  }
};

// Line 38: range 000000001604F63C-000000001604F65F
bool __cdecl DungeonSceneTeam::isEnterByCandidateTeam(DungeonSceneTeam *const this)
{
  return std::unordered_map<unsigned int,std::vector<unsigned long>>::size(&this->candidate_team_player_map_) != 0;
};

// Line 38: range 000000001604F660-000000001604F67D
uint32_t __cdecl DungeonSceneTeam::getCandidatePlayerMapSize(DungeonSceneTeam *const this)
{
  return std::unordered_map<unsigned int,std::vector<unsigned long>>::size(&this->candidate_team_player_map_);
};

// Line 45: range 00000000131DA01C-00000000131DA061
bool __cdecl DungeonSceneTeam::isInMpMode(const DungeonSceneTeam *const this)
{
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax

  if ( !std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
    return 0;
  v1 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  return SceneTeam::isInMpMode(v1);
};

// Line 129: range 00000000141F525E-00000000141F5286
SceneTeamPtr __cdecl DungeonSceneTeam::getSceneTeam(DungeonSceneTeam *const this)
{
  const std::shared_ptr<SceneTeam> *v1; // rsi
  SceneTeamPtr result; // rax

  std::shared_ptr<SceneTeam>::shared_ptr(&this->scene_team_ptr_, v1);
  result._M_ptr = (std::__shared_ptr<SceneTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
