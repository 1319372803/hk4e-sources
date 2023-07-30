// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.h

// Line 22: range 0000000013C1BE1A-0000000013C1BEAC
void __cdecl data::MusicEnemyCombatPhaseState::MusicEnemyCombatPhaseState(data::MusicEnemyCombatPhaseState *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->combat_phase = Default_7;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 22: range 0000000013E82FE2-0000000013E830F0
void __cdecl data::MusicEnemyCombatPhaseState::MusicEnemyCombatPhaseState(
        data::MusicEnemyCombatPhaseState *const this,
        data::MusicEnemyCombatPhaseState *a2)
{
  data::ConfigAICombatPhase combat_phase; // ecx
  char v3; // al
  data::ConfigWwiseString *p_state_value; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::MusicEnemyCombatPhaseState *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  combat_phase = a2->combat_phase;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->combat_phase = combat_phase;
  p_state_value = &v7->state_value;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_value, &v7->state_value);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_state_value, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_state_value) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_state_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 22: range 0000000013C1BEAE-0000000013C1BECC
void __cdecl data::MusicEnemyCombatPhaseState::~MusicEnemyCombatPhaseState(
        data::MusicEnemyCombatPhaseState *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->state_value);
};

// Line 51: range 0000000013C1BF22-0000000013C1BFE9
void __cdecl data::MusicEnemySettings::MusicEnemySettings(data::MusicEnemySettings *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->entity_id = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->main_state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->aux_state_group);
  data::ConfigWwiseString::ConfigWwiseString(&this->default_aux_state_value);
  std::vector<data::MusicEnemyCombatPhaseState>::vector(&this->combat_phase_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 51: range 0000000013E838E4-0000000013E83A4D
void __cdecl data::MusicEnemySettings::MusicEnemySettings(
        data::MusicEnemySettings *const this,
        data::MusicEnemySettings *a2)
{
  uint32_t entity_id; // ecx
  char v3; // al
  data::MusicEnemyCombatPhaseStateArray *p_combat_phase_states; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::MusicEnemySettings *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  entity_id = a2->entity_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->entity_id = entity_id;
  data::ConfigWwiseString::ConfigWwiseString(&this->main_state_value, &v7->main_state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->aux_state_group, &v7->aux_state_group);
  data::ConfigWwiseString::ConfigWwiseString(&this->default_aux_state_value, &v7->default_aux_state_value);
  p_combat_phase_states = &v7->combat_phase_states;
  std::vector<data::MusicEnemyCombatPhaseState>::vector(&this->combat_phase_states, &v7->combat_phase_states);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_combat_phase_states, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_combat_phase_states) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_combat_phase_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 51: range 0000000013C1BFEA-0000000013C1C038
void __cdecl data::MusicEnemySettings::~MusicEnemySettings(data::MusicEnemySettings *const this)
{
  std::vector<data::MusicEnemyCombatPhaseState>::~vector(&this->combat_phase_states);
  data::ConfigWwiseString::~ConfigWwiseString(&this->default_aux_state_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->aux_state_group);
  data::ConfigWwiseString::~ConfigWwiseString(&this->main_state_value);
};
