// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioQuest.h

// Line 21: range 0000000013C1C4B4-0000000013C1C576
void __cdecl data::ConfigAudioQuestOps::ConfigAudioQuestOps(data::ConfigAudioQuestOps *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->quest_id = 0;
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_start);
  std::vector<data::AudioStateOp>::vector(&this->states_on_start);
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_finish);
  std::vector<data::AudioStateOp>::vector(&this->states_on_finish);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 0000000013E85172-0000000013E852D1
void __cdecl data::ConfigAudioQuestOps::ConfigAudioQuestOps(
        data::ConfigAudioQuestOps *const this,
        data::ConfigAudioQuestOps *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  data::AudioStateOpArray *p_states_on_finish; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigAudioQuestOps *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->quest_id = quest_id;
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_start, &v7->events_on_start);
  std::vector<data::AudioStateOp>::vector(&this->states_on_start, &v7->states_on_start);
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_finish, &v7->events_on_finish);
  p_states_on_finish = &v7->states_on_finish;
  std::vector<data::AudioStateOp>::vector(&this->states_on_finish, &v7->states_on_finish);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_states_on_finish, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_states_on_finish) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_states_on_finish, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 21: range 0000000013C1C578-0000000013C1C5C6
void __cdecl data::ConfigAudioQuestOps::~ConfigAudioQuestOps(data::ConfigAudioQuestOps *const this)
{
  std::vector<data::AudioStateOp>::~vector(&this->states_on_finish);
  std::vector<data::ConfigWwiseString>::~vector(&this->events_on_finish);
  std::vector<data::AudioStateOp>::~vector(&this->states_on_start);
  std::vector<data::ConfigWwiseString>::~vector(&this->events_on_start);
};
