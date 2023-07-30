// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/hachi_activity.h

// Line 20: range 000000001518E7DC-000000001518E8F1
void __cdecl HachiStageData::HachiStageData(HachiStageData *const this)
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
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_pass_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_pass_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_pass_times);
  }
  this->dungeon_pass_times = 0;
};

// Line 32: range 00000000154CC17E-00000000154CC201
void __cdecl HachiActivity::~HachiActivity(HachiActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HachiActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->finish_quest_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->dungeon_finish_wtr_);
  std::map<unsigned int,HachiStageData>::~map(&this->stage_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 32: range 00000000154CC202-00000000154CC22C
void __cdecl HachiActivity::~HachiActivity(HachiActivity *const this)
{
  HachiActivity::~HachiActivity(this);
  operator delete(this, 0x408uLL);
};

// Line 37: range 0000000016D65604-0000000016D65766
void __cdecl HachiActivity::HachiActivity(HachiActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'HachiActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  std::map<unsigned int,HachiStageData>::map(&this->stage_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_finish_steal_stage_id_);
  }
  this->cur_finish_steal_stage_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_finish_battle_stage_id_);
  }
  this->cur_finish_battle_stage_id_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->dungeon_finish_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->finish_quest_obs_wtr_);
};

// Line 39: range 0000000016D65767-0000000016D65771
data::NewActivityType __cdecl HachiActivity::getActivityStaticType()
{
  return 2302;
};
