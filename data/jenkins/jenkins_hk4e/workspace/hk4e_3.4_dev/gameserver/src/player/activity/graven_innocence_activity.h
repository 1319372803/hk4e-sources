// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/graven_innocence_activity.h

// Line 20: range 000000001518DF34-000000001518E003
void __cdecl GravenInnocencePhotoStageData::GravenInnocencePhotoStageData(GravenInnocencePhotoStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
};

// Line 32: range 000000001518E004-000000001518E0DF
void __cdecl GravenInnocencePhotoObjectData::GravenInnocencePhotoObjectData(GravenInnocencePhotoObjectData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->object_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param);
  }
  this->param = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_time);
  }
  this->finish_time = 0;
};

// Line 44: range 0000000016D6784A-0000000016D67874
void __cdecl GravenInnocencePhotoData::GravenInnocencePhotoData(GravenInnocencePhotoData *const this)
{
  std::map<unsigned int,GravenInnocencePhotoStageData>::map(&this->stage_data_map);
  std::map<unsigned int,GravenInnocencePhotoObjectData>::map(&this->object_data_map);
};

// Line 44: range 000000001518DDC4-000000001518DDEE
void __cdecl GravenInnocencePhotoData::~GravenInnocencePhotoData(GravenInnocencePhotoData *const this)
{
  std::map<unsigned int,GravenInnocencePhotoObjectData>::~map(&this->object_data_map);
  std::map<unsigned int,GravenInnocencePhotoStageData>::~map(&this->stage_data_map);
};

// Line 58: range 000000001384A9FC-000000001384AA06
data::NewActivityType __cdecl GravenInnocenceActivity::getActivityStaticType()
{
  return 3000;
};

// Line 73: range 0000000016D678AE-0000000016D678C8
void __cdecl GravenInnocenceCampData::GravenInnocenceCampData(GravenInnocenceCampData *const this)
{
  std::map<unsigned int,GravenInnocenceCampStageData>::map(&this->stage_data_map);
};

// Line 73: range 000000001518DE28-000000001518DE42
void __cdecl GravenInnocenceCampData::~GravenInnocenceCampData(GravenInnocenceCampData *const this)
{
  std::map<unsigned int,GravenInnocenceCampStageData>::~map(&this->stage_data_map);
};

// Line 100: range 0000000016D67902-0000000016D6791C
void __cdecl GravenInnocenceRaceData::GravenInnocenceRaceData(GravenInnocenceRaceData *const this)
{
  std::map<unsigned int,GravenInnocenceRaceLevelData>::map(&this->level_data_map);
};

// Line 100: range 000000001518DE7C-000000001518DE96
void __cdecl GravenInnocenceRaceData::~GravenInnocenceRaceData(GravenInnocenceRaceData *const this)
{
  std::map<unsigned int,GravenInnocenceRaceLevelData>::~map(&this->level_data_map);
};

// Line 120: range 000000001541AC66-000000001541AC90
void __cdecl GravenInnocenceCarveUsedItemData::GravenInnocenceCarveUsedItemData(
        GravenInnocenceCarveUsedItemData *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->need_item_count_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->pass_item_count_map);
};

// Line 120: range 0000000015350696-00000000153506C0
void __cdecl GravenInnocenceCarveUsedItemData::~GravenInnocenceCarveUsedItemData(
        GravenInnocenceCarveUsedItemData *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->pass_item_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->need_item_count_map);
};

// Line 127: range 0000000016D6798E-0000000016D679B8
void __cdecl GravenInnocenceCarveData::GravenInnocenceCarveData(GravenInnocenceCarveData *const this)
{
  std::map<unsigned int,GravenInnocenceCarveStageData>::map(&this->stage_data_map);
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::map(&this->used_item_data_map);
};

// Line 127: range 000000001518DF08-000000001518DF32
void __cdecl GravenInnocenceCarveData::~GravenInnocenceCarveData(GravenInnocenceCarveData *const this)
{
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::~map(&this->used_item_data_map);
  std::map<unsigned int,GravenInnocenceCarveStageData>::~map(&this->stage_data_map);
};

// Line 140: range 00000000154CC22E-00000000154CC2E7
void __cdecl GravenInnocenceActivity::~GravenInnocenceActivity(GravenInnocenceActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GravenInnocenceActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  GravenInnocenceCarveData::~GravenInnocenceCarveData(&this->carve_data_);
  GravenInnocenceRaceData::~GravenInnocenceRaceData(&this->race_data_);
  GravenInnocenceCampData::~GravenInnocenceCampData(&this->camp_data_);
  GravenInnocencePhotoData::~GravenInnocencePhotoData(&this->photo_data_);
  std::unordered_map<proto::VirtualItem,unsigned int>::~unordered_map(&this->activity_coin_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 140: range 00000000154CC2E8-00000000154CC312
void __cdecl GravenInnocenceActivity::~GravenInnocenceActivity(GravenInnocenceActivity *const this)
{
  GravenInnocenceActivity::~GravenInnocenceActivity(this);
  operator delete(this, 0x538uLL);
};

// Line 144: range 0000000016D679BA-0000000016D67AC4
void __cdecl GravenInnocenceActivity::GravenInnocenceActivity(
        GravenInnocenceActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'GravenInnocenceActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::unordered_map<proto::VirtualItem,unsigned int>::unordered_map(&this->activity_coin_map_);
  GravenInnocencePhotoData::GravenInnocencePhotoData(&this->photo_data_);
  GravenInnocenceCampData::GravenInnocenceCampData(&this->camp_data_);
  GravenInnocenceRaceData::GravenInnocenceRaceData(&this->race_data_);
  GravenInnocenceCarveData::GravenInnocenceCarveData(&this->carve_data_);
};

// Line 230: range 000000001518E17C-000000001518E291
void __cdecl GravenInnocenceCampStageData::GravenInnocenceCampStageData(GravenInnocenceCampStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
};

// Line 230: range 000000001518E438-000000001518E4C7
void __cdecl GravenInnocenceCarveStageData::GravenInnocenceCarveStageData(GravenInnocenceCarveStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
};

// Line 230: range 000000001518E2FA-000000001518E3CF
void __cdecl GravenInnocenceRaceLevelData::GravenInnocenceRaceLevelData(GravenInnocenceRaceLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = 0;
};
