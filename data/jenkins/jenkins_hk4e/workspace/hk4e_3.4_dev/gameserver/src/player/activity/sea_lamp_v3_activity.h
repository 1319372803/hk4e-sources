// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/sea_lamp_v3_activity.h

// Line 20: range 00000000180AE18A-00000000180AE25F
void __cdecl SeaLampV3RaceLevelData::SeaLampV3RaceLevelData(SeaLampV3RaceLevelData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->level_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->max_score, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->max_score = 0;
};

// Line 34: range 0000000016D67E2E-0000000016D67E48
void __cdecl SeaLampV3RaceData::SeaLampV3RaceData(SeaLampV3RaceData *const this)
{
  std::map<unsigned int,SeaLampV3RaceLevelData>::map(&this->level_data_map);
};

// Line 34: range 00000000180AE11A-00000000180AE134
void __cdecl SeaLampV3RaceData::~SeaLampV3RaceData(SeaLampV3RaceData *const this)
{
  std::map<unsigned int,SeaLampV3RaceLevelData>::~map(&this->level_data_map);
};

// Line 57: range 00000000180AE442-00000000180AE4D9
void __cdecl SeaLampV3ShadowStageData::SeaLampV3ShadowStageData(SeaLampV3ShadowStageData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->stage_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  std::map<unsigned int,SeaLampV3ShadowLevelData>::map(&this->level_data_map);
};

// Line 57: range 0000000018243D6A-0000000018243E82
void __cdecl SeaLampV3ShadowStageData::SeaLampV3ShadowStageData(
        SeaLampV3ShadowStageData *const this,
        SeaLampV3ShadowStageData *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  SeaLampV3ShadowStageData *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->stage_id = stage_id;
  v4 = ((_BYTE)v8 + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v8->is_open >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&v8->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v8->is_open);
  }
  is_open = v8->is_open;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, v4, v7);
  this->is_open = is_open;
  std::map<unsigned int,SeaLampV3ShadowLevelData>::map(&this->level_data_map, &v8->level_data_map);
};

// Line 57: range 00000000180AE4DA-00000000180AE4F8
void __cdecl SeaLampV3ShadowStageData::~SeaLampV3ShadowStageData(SeaLampV3ShadowStageData *const this)
{
  std::map<unsigned int,SeaLampV3ShadowLevelData>::~map(&this->level_data_map);
};

// Line 63: range 000000001384AA80-000000001384AA8A
data::NewActivityType __cdecl SeaLampV3Activity::getActivityStaticType()
{
  return 3401;
};

// Line 68: range 0000000016D67E82-0000000016D67E9C
void __cdecl SeaLampV3ShadowData::SeaLampV3ShadowData(SeaLampV3ShadowData *const this)
{
  std::map<unsigned int,SeaLampV3ShadowStageData>::map(&this->stage_data_map);
};

// Line 68: range 00000000180AE16E-00000000180AE188
void __cdecl SeaLampV3ShadowData::~SeaLampV3ShadowData(SeaLampV3ShadowData *const this)
{
  std::map<unsigned int,SeaLampV3ShadowStageData>::~map(&this->stage_data_map);
};

// Line 80: range 0000000018327916-0000000018327999
void __cdecl SeaLampV3Activity::~SeaLampV3Activity(SeaLampV3Activity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SeaLampV3Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  SeaLampV3ShadowData::~SeaLampV3ShadowData(&this->shadow_data_);
  SeaLampV3RaceData::~SeaLampV3RaceData(&this->race_data_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 80: range 000000001832799A-00000000183279C4
void __cdecl SeaLampV3Activity::~SeaLampV3Activity(SeaLampV3Activity *const this)
{
  SeaLampV3Activity::~SeaLampV3Activity(this);
  operator delete(this, 0x440uLL);
};

// Line 84: range 0000000016D67E9E-0000000016D67FC0
void __cdecl SeaLampV3Activity::SeaLampV3Activity(SeaLampV3Activity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'SeaLampV3Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_map_id_, player, &this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->play_index_, (((_BYTE)this - 36) & 7u) + 3, v4);
  this->play_index_ = 0;
  SeaLampV3RaceData::SeaLampV3RaceData(&this->race_data_);
  SeaLampV3ShadowData::SeaLampV3ShadowData(&this->shadow_data_);
};

// Line 230: range 00000000180AE2C8-00000000180AE39D
void __cdecl SeaLampV3ShadowLevelData::SeaLampV3ShadowLevelData(SeaLampV3ShadowLevelData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->level_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->min_finish_time, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->min_finish_time = 0;
};
