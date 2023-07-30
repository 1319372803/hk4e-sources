// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_encounter_rand_quest.h

// Line 19: range 0000000015D85CCA-0000000015D85D57
void __cdecl SceneEncounterRandQuest::~SceneEncounterRandQuest(SceneEncounterRandQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneEncounterRandQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneEncounterBase = v2;
  std::vector<unsigned int>::~vector(&this->saved_parent_quest_id_vec_);
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::~vector(&this->rand_quest_vec_);
  std::weak_ptr<Observer>::~weak_ptr(&this->fail_observer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->finish_observer_);
  SceneEncounterBase::~SceneEncounterBase(this);
};

// Line 19: range 0000000015D85D58-0000000015D85D82
void __cdecl SceneEncounterRandQuest::~SceneEncounterRandQuest(SceneEncounterRandQuest *const this)
{
  SceneEncounterRandQuest::~SceneEncounterRandQuest(this);
  operator delete(this, 0x60uLL);
};

// Line 22: range 0000000015D38220-0000000015D38317
void __cdecl SceneEncounterRandQuest::RandQuestInfo::RandQuestInfo(SceneEncounterRandQuest::RandQuestInfo *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->zone_level = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->parent_quest_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->parent_quest_id = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->quest_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_config_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->quest_config_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->quest_config_id = 0;
  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
};

// Line 33: range 0000000015D4C144-0000000015D4C1DC
void __cdecl ZN23SceneEncounterRandQuestCI218SceneEncounterBaseER16PlayerWorldScene(
        SceneEncounterRandQuest *const this,
        PlayerWorldScene *a2)
{
  int (**v2)(...); // rdx

  SceneEncounterBase::SceneEncounterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneEncounterRandQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneEncounterBase = v2;
  std::weak_ptr<Observer>::weak_ptr(&this->finish_observer_);
  std::weak_ptr<Observer>::weak_ptr(&this->fail_observer_);
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::vector(&this->rand_quest_vec_);
  std::vector<unsigned int>::vector(&this->saved_parent_quest_id_vec_);
};

// Line 40: range 0000000015D37CF0-0000000015D37D0D
uint32_t __cdecl SceneEncounterRandQuest::getSlotNum(const SceneEncounterRandQuest *const this)
{
  return std::vector<SceneEncounterRandQuest::RandQuestInfo>::size(&this->rand_quest_vec_);
};
