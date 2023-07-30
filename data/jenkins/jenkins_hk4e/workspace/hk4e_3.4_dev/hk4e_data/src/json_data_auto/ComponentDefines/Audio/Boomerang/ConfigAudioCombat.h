// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioCombat.h

// Line 24: range 0000000012138C4A-0000000012138CDC
void __cdecl data::AudioImpactOverrideEvent::AudioImpactOverrideEvent(data::AudioImpactOverrideEvent *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->entity_id = 0;
  data::AudioOneTimeEvent::AudioOneTimeEvent(&this->impact_event);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 24: range 00000000122F3CF6-00000000122F3E04
void __cdecl data::AudioImpactOverrideEvent::AudioImpactOverrideEvent(
        data::AudioImpactOverrideEvent *const this,
        data::AudioImpactOverrideEvent *a2)
{
  uint32_t entity_id; // ecx
  char v3; // al
  data::AudioOneTimeEvent *p_impact_event; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::AudioImpactOverrideEvent *v7; // [rsp+0h] [rbp-10h]

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
  p_impact_event = &v7->impact_event;
  data::AudioOneTimeEvent::AudioOneTimeEvent(&this->impact_event, &v7->impact_event);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_impact_event, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_impact_event) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_impact_event, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 24: range 0000000012138CDE-0000000012138CFC
void __cdecl data::AudioImpactOverrideEvent::~AudioImpactOverrideEvent(data::AudioImpactOverrideEvent *const this)
{
  data::AudioOneTimeEvent::~AudioOneTimeEvent(&this->impact_event);
};

// Line 94: range 0000000012138D66-0000000012138E08
void __cdecl data::AudioImpactOverrideEvent_AvatarAttacker::AudioImpactOverrideEvent_AvatarAttacker(
        data::AudioImpactOverrideEvent_AvatarAttacker *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->attaker_avatar_id = 0;
  std::string::basic_string(&this->attack_tag);
  data::AudioOneTimeEvent::AudioOneTimeEvent(&this->impact_event);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 94: range 0000000012606B5A-0000000012606CAA
void __cdecl data::AudioImpactOverrideEvent_AvatarAttacker::AudioImpactOverrideEvent_AvatarAttacker(
        data::AudioImpactOverrideEvent_AvatarAttacker *const this,
        const data::AudioImpactOverrideEvent_AvatarAttacker *a2)
{
  uint32_t attaker_avatar_id; // ecx
  char v3; // al
  data::AudioOneTimeEvent *p_impact_event; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::AudioImpactOverrideEvent_AvatarAttacker *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  attaker_avatar_id = a2->attaker_avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->attaker_avatar_id = attaker_avatar_id;
  std::string::basic_string(&this->attack_tag, &v7->attack_tag);
  p_impact_event = &v7->impact_event;
  data::AudioOneTimeEvent::AudioOneTimeEvent(&this->impact_event, &v7->impact_event);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_impact_event, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_impact_event) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_impact_event, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 94: range 0000000012138E0A-0000000012138E38
void __cdecl data::AudioImpactOverrideEvent_AvatarAttacker::~AudioImpactOverrideEvent_AvatarAttacker(
        data::AudioImpactOverrideEvent_AvatarAttacker *const this)
{
  data::AudioOneTimeEvent::~AudioOneTimeEvent(&this->impact_event);
  std::string::~string(&this->attack_tag);
};
