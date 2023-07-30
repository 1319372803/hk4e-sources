// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_mgr.h

// Line 19: range 0000000015857298-00000000158572B2
void __cdecl PlayerDungeonInfo::PlayerDungeonInfo(PlayerDungeonInfo *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->dungeon_map);
};

// Line 19: range 0000000015813482-000000001581349C
void __cdecl PlayerDungeonInfo::~PlayerDungeonInfo(PlayerDungeonInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->dungeon_map);
};

// Line 25: range 00000000176AE3F6-00000000176AE430
void __cdecl DungeonMgr::~DungeonMgr(DungeonMgr *const this)
{
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->timer_ptr_);
  std::unordered_map<unsigned int,PlayerDungeonInfo>::~unordered_map(&this->player_dungeon_map_);
  std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::~unordered_map(&this->dungeon_scene_map_);
};

// Line 28: range 00000000176AE37A-00000000176AE3F5
void __cdecl DungeonMgr::DungeonMgr(DungeonMgr *const this)
{
  std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::unordered_map(&this->dungeon_scene_map_);
  std::unordered_map<unsigned int,PlayerDungeonInfo>::unordered_map(&this->player_dungeon_map_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_entity_index_);
  }
  this->next_entity_index_ = 0;
};
