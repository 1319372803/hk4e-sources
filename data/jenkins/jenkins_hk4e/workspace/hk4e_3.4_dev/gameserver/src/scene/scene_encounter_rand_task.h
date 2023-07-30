// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_encounter_rand_task.h

// Line 21: range 0000000015D85822-0000000015D8588F
void __cdecl SceneEncounterRandTask::~SceneEncounterRandTask(SceneEncounterRandTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneEncounterRandTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneEncounterBase = v2;
  std::vector<unsigned int>::~vector(&this->leftover_group_vec_);
  std::vector<SceneEncounterRandTask::RandTaskInfo>::~vector(&this->rand_task_vec_);
  SceneEncounterBase::~SceneEncounterBase(this);
};

// Line 21: range 0000000015D85890-0000000015D858BA
void __cdecl SceneEncounterRandTask::~SceneEncounterRandTask(SceneEncounterRandTask *const this)
{
  SceneEncounterRandTask::~SceneEncounterRandTask(this);
  operator delete(this, 0x50uLL);
};

// Line 24: range 0000000015D38440-0000000015D385C3
void __cdecl SceneEncounterRandTask::RandTaskInfo::RandTaskInfo(SceneEncounterRandTask::RandTaskInfo *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl
  bool v5; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->rand_task_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->zone_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_level >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->zone_level, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->zone_level = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->revise_level, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->revise_level = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->group_id = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->uid, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->uid = 0;
  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
};

// Line 35: range 0000000015D4BE96-0000000015D4BF6A
void __cdecl ZN22SceneEncounterRandTaskCI218SceneEncounterBaseER16PlayerWorldScene(
        SceneEncounterRandTask *const this,
        PlayerWorldScene *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  SceneEncounterBase::SceneEncounterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneEncounterRandTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneEncounterBase = v2;
  std::vector<SceneEncounterRandTask::RandTaskInfo>::vector(&this->rand_task_vec_);
  Vector3::Vector3(&this->last_pos_, 0.0, 0.0, 0.0);
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_last_pos_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_last_pos_valid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_last_pos_valid_, v3, v4);
  this->is_last_pos_valid_ = 0;
  std::vector<unsigned int>::vector(&this->leftover_group_vec_);
};

// Line 38: range 0000000015D37CD2-0000000015D37CEF
uint32_t __cdecl SceneEncounterRandTask::getSlotNum(const SceneEncounterRandTask *const this)
{
  return std::vector<SceneEncounterRandTask::RandTaskInfo>::size(&this->rand_task_vec_);
};

// Line 55: range 0000000017D687C6-0000000017D687D7
std::vector<SceneEncounterRandTask::RandTaskInfo> *__cdecl SceneEncounterRandTask::getRandTaskVec(
        SceneEncounterRandTask *const this)
{
  return &this->rand_task_vec_;
};
