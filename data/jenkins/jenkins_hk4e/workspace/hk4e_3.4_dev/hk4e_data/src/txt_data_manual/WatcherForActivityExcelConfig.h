// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WatcherForActivityExcelConfig.h

// Line 73: range 000000000CE0E066-000000000CE0E0BD
void __cdecl MechanicusBattleEndBuildGearMoreThanWatcherParam::MechanicusBattleEndBuildGearMoreThanWatcherParam(
        MechanicusBattleEndBuildGearMoreThanWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->limit = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_set);
};

// Line 73: range 000000000D0432EA-000000000D043382
void __cdecl MechanicusBattleEndBuildGearMoreThanWatcherParam::MechanicusBattleEndBuildGearMoreThanWatcherParam(
        MechanicusBattleEndBuildGearMoreThanWatcherParam *const this,
        const MechanicusBattleEndBuildGearMoreThanWatcherParam *a2)
{
  uint32_t limit; // ecx
  char v3; // al
  const MechanicusBattleEndBuildGearMoreThanWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  limit = a2->limit;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->limit = limit;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_set, &v4->gadget_set);
};

// Line 73: range 000000000CE0E0BE-000000000CE0E0DC
void __cdecl MechanicusBattleEndBuildGearMoreThanWatcherParam::~MechanicusBattleEndBuildGearMoreThanWatcherParam(
        MechanicusBattleEndBuildGearMoreThanWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_set);
};

// Line 205: range 000000000D04398C-000000000D0439B1
void __cdecl FleurFairMusicGameReachScoreWatcherParam::FleurFairMusicGameReachScoreWatcherParam(
        FleurFairMusicGameReachScoreWatcherParam *const this,
        const FleurFairMusicGameReachScoreWatcherParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->music_basic_id_2_score_map, &a2->music_basic_id_2_score_map);
};

// Line 213: range 000000000D043D1C-000000000D043D41
void __cdecl FleurFairMusicGameReachScoreWatcherParam::FleurFairMusicGameReachScoreWatcherParam(
        FleurFairMusicGameReachScoreWatcherParam *const this,
        FleurFairMusicGameReachScoreWatcherParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->music_basic_id_2_score_map, &a2->music_basic_id_2_score_map);
};

// Line 223: range 000000000CE0DF76-000000000CE0DFCD
void __cdecl MechanicusBattleEndCardPickGteqWatcherParam::MechanicusBattleEndCardPickGteqWatcherParam(
        MechanicusBattleEndCardPickGteqWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->limit = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->card_set);
};

// Line 223: range 000000000D0425A4-000000000D04263C
void __cdecl MechanicusBattleEndCardPickGteqWatcherParam::MechanicusBattleEndCardPickGteqWatcherParam(
        MechanicusBattleEndCardPickGteqWatcherParam *const this,
        const MechanicusBattleEndCardPickGteqWatcherParam *a2)
{
  uint32_t limit; // ecx
  char v3; // al
  const MechanicusBattleEndCardPickGteqWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  limit = a2->limit;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->limit = limit;
  std::unordered_set<unsigned int>::unordered_set(&this->card_set, &v4->card_set);
};

// Line 223: range 000000000CE0DFCE-000000000CE0DFEC
void __cdecl MechanicusBattleEndCardPickGteqWatcherParam::~MechanicusBattleEndCardPickGteqWatcherParam(
        MechanicusBattleEndCardPickGteqWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->card_set);
};

// Line 231: range 000000000D0462B8-000000000D0462DD
void __cdecl BartenderFinishStoryModuleWatcherParam::BartenderFinishStoryModuleWatcherParam(
        BartenderFinishStoryModuleWatcherParam *const this,
        BartenderFinishStoryModuleWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->task_set, &a2->task_set);
};

// Line 231: range 000000000CE0DFEE-000000000CE0E045
void __cdecl MechanicusBattleEndCardTargetGteqWatcherParam::MechanicusBattleEndCardTargetGteqWatcherParam(
        MechanicusBattleEndCardTargetGteqWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->limit = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->effect_set);
};

// Line 231: range 000000000D042996-000000000D042A2E
void __cdecl MechanicusBattleEndCardTargetGteqWatcherParam::MechanicusBattleEndCardTargetGteqWatcherParam(
        MechanicusBattleEndCardTargetGteqWatcherParam *const this,
        const MechanicusBattleEndCardTargetGteqWatcherParam *a2)
{
  uint32_t limit; // ecx
  char v3; // al
  const MechanicusBattleEndCardTargetGteqWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  limit = a2->limit;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->limit = limit;
  std::unordered_set<unsigned int>::unordered_set(&this->effect_set, &v4->effect_set);
};

// Line 231: range 000000000CE0E046-000000000CE0E064
void __cdecl MechanicusBattleEndCardTargetGteqWatcherParam::~MechanicusBattleEndCardTargetGteqWatcherParam(
        MechanicusBattleEndCardTargetGteqWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->effect_set);
};

// Line 303: range 000000000CE0E0DE-000000000CE0E0F8
void __cdecl FleurFairMusicGameReachScoreWatcherParam::FleurFairMusicGameReachScoreWatcherParam(
        FleurFairMusicGameReachScoreWatcherParam *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->music_basic_id_2_score_map);
};

// Line 303: range 000000000CE0E0FA-000000000CE0E114
void __cdecl FleurFairMusicGameReachScoreWatcherParam::~FleurFairMusicGameReachScoreWatcherParam(
        FleurFairMusicGameReachScoreWatcherParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->music_basic_id_2_score_map);
};

// Line 325: range 000000000CE0E116-000000000CE0E1AB
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcherParam::FleurFairDungeonFinishWithGroupVariableWatcherParam(
        FleurFairDungeonFinishWithGroupVariableWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->gallery_id = 0;
  std::string::basic_string(&this->variable_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->variable_value, v1);
  }
  this->variable_value = 0;
};

// Line 325: range 000000000D044310-000000000D0444A2
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcherParam::FleurFairDungeonFinishWithGroupVariableWatcherParam(
        FleurFairDungeonFinishWithGroupVariableWatcherParam *const this,
        FleurFairDungeonFinishWithGroupVariableWatcherParam *a2)
{
  uint32_t gallery_id; // ecx
  char v3; // al
  std::string *p_variable_name; // rsi
  int32_t variable_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  data::OrderingType ordering_type; // ecx
  char v9; // dl
  FleurFairDungeonFinishWithGroupVariableWatcherParam *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  gallery_id = a2->gallery_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->gallery_id = gallery_id;
  p_variable_name = &v10->variable_name;
  std::string::basic_string(&this->variable_name, &v10->variable_name);
  if ( *(_BYTE *)(((unsigned __int64)&v10->variable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->variable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->variable_value);
  }
  variable_value = v10->variable_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_variable_name) = v6 != 0;
    __asan_report_store4(&this->variable_value, p_variable_name);
  }
  this->variable_value = variable_value;
  v7 = (((_BYTE)v10 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->ordering_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->ordering_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->ordering_type);
  }
  ordering_type = v10->ordering_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ordering_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->ordering_type, v7);
  }
  this->ordering_type = ordering_type;
};

// Line 325: range 000000000D043EB2-000000000D044044
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcherParam::FleurFairDungeonFinishWithGroupVariableWatcherParam(
        FleurFairDungeonFinishWithGroupVariableWatcherParam *const this,
        const FleurFairDungeonFinishWithGroupVariableWatcherParam *a2)
{
  uint32_t gallery_id; // ecx
  char v3; // al
  std::string *p_variable_name; // rsi
  int32_t variable_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  data::OrderingType ordering_type; // ecx
  char v9; // dl
  const FleurFairDungeonFinishWithGroupVariableWatcherParam *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  gallery_id = a2->gallery_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->gallery_id = gallery_id;
  p_variable_name = &v10->variable_name;
  std::string::basic_string(&this->variable_name, &v10->variable_name);
  if ( *(_BYTE *)(((unsigned __int64)&v10->variable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->variable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->variable_value);
  }
  variable_value = v10->variable_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_variable_name) = v6 != 0;
    __asan_report_store4(&this->variable_value, p_variable_name);
  }
  this->variable_value = variable_value;
  v7 = (((_BYTE)v10 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->ordering_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->ordering_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->ordering_type);
  }
  ordering_type = v10->ordering_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ordering_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->ordering_type, v7);
  }
  this->ordering_type = ordering_type;
};

// Line 325: range 000000000CE0E1AC-000000000CE0E1CA
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcherParam::~FleurFairDungeonFinishWithGroupVariableWatcherParam(
        FleurFairDungeonFinishWithGroupVariableWatcherParam *const this)
{
  std::string::~string(&this->variable_name);
};

// Line 348: range 000000000CE0E1CC-000000000CE0E223
void __cdecl FinishAllArenaChallengeWatcherInScheduleWatcherParam::FinishAllArenaChallengeWatcherInScheduleWatcherParam(
        FinishAllArenaChallengeWatcherInScheduleWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->arena_challenge_schedule_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->watcher_id_set);
};

// Line 348: range 000000000D13A12E-000000000D13A1C6
void __cdecl FinishAllArenaChallengeWatcherInScheduleWatcherParam::FinishAllArenaChallengeWatcherInScheduleWatcherParam(
        FinishAllArenaChallengeWatcherInScheduleWatcherParam *const this,
        const FinishAllArenaChallengeWatcherInScheduleWatcherParam *a2)
{
  uint32_t arena_challenge_schedule_id; // ecx
  char v3; // al
  const FinishAllArenaChallengeWatcherInScheduleWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  arena_challenge_schedule_id = a2->arena_challenge_schedule_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->arena_challenge_schedule_id = arena_challenge_schedule_id;
  std::unordered_set<unsigned int>::unordered_set(&this->watcher_id_set, &v4->watcher_id_set);
};

// Line 348: range 000000000CE0E224-000000000CE0E242
void __cdecl FinishAllArenaChallengeWatcherInScheduleWatcherParam::~FinishAllArenaChallengeWatcherInScheduleWatcherParam(
        FinishAllArenaChallengeWatcherInScheduleWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->watcher_id_set);
};

// Line 364: range 000000000CE0E244-000000000CE0E31F
void __cdecl FinishDungeonMistTrialStatWatcherParam::FinishDungeonMistTrialStatWatcherParam(
        FinishDungeonMistTrialStatWatcherParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stat_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stat_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->stat_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stat_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stat_value, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->stat_value = 0;
};

// Line 634: range 000000000CE0E320-000000000CE0E33A
void __cdecl BartenderFinishStoryModuleWatcherParam::BartenderFinishStoryModuleWatcherParam(
        BartenderFinishStoryModuleWatcherParam *const this)
{
  std::set<unsigned int>::set(&this->task_set);
};

// Line 634: range 000000000D045F28-000000000D045F4D
void __cdecl BartenderFinishStoryModuleWatcherParam::BartenderFinishStoryModuleWatcherParam(
        BartenderFinishStoryModuleWatcherParam *const this,
        const BartenderFinishStoryModuleWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->task_set, &a2->task_set);
};

// Line 634: range 000000000CE0E33C-000000000CE0E356
void __cdecl BartenderFinishStoryModuleWatcherParam::~BartenderFinishStoryModuleWatcherParam(
        BartenderFinishStoryModuleWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->task_set);
};

// Line 863: range 000000000CE0E358-000000000CE0E372
void __cdecl GravenInnocencePhotoFinishWatcherParam::GravenInnocencePhotoFinishWatcherParam(
        GravenInnocencePhotoFinishWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->object_id_set);
};

// Line 863: range 000000000D047704-000000000D047729
void __cdecl GravenInnocencePhotoFinishWatcherParam::GravenInnocencePhotoFinishWatcherParam(
        GravenInnocencePhotoFinishWatcherParam *const this,
        GravenInnocencePhotoFinishWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->object_id_set, &a2->object_id_set);
};

// Line 863: range 000000000D047414-000000000D047439
void __cdecl GravenInnocencePhotoFinishWatcherParam::GravenInnocencePhotoFinishWatcherParam(
        GravenInnocencePhotoFinishWatcherParam *const this,
        const GravenInnocencePhotoFinishWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->object_id_set, &a2->object_id_set);
};

// Line 863: range 000000000CE0E374-000000000CE0E38E
void __cdecl GravenInnocencePhotoFinishWatcherParam::~GravenInnocencePhotoFinishWatcherParam(
        GravenInnocencePhotoFinishWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->object_id_set);
};

// Line 1019: range 000000000CE0E390-000000000CE0E3AA
void __cdecl TeamChainFinishStageCntWatcherParam::TeamChainFinishStageCntWatcherParam(
        TeamChainFinishStageCntWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->stage_id_set);
};

// Line 1019: range 000000000D048240-000000000D048265
void __cdecl TeamChainFinishStageCntWatcherParam::TeamChainFinishStageCntWatcherParam(
        TeamChainFinishStageCntWatcherParam *const this,
        const TeamChainFinishStageCntWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->stage_id_set, &a2->stage_id_set);
};

// Line 1019: range 000000000CE0E3AC-000000000CE0E3C6
void __cdecl TeamChainFinishStageCntWatcherParam::~TeamChainFinishStageCntWatcherParam(
        TeamChainFinishStageCntWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->stage_id_set);
};
