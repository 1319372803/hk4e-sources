// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/rock_board_explore_activity.h

// Line 19: range 0000000016D69436-0000000016D69505
void __cdecl RockBoardExploreStageData::RockBoardExploreStageData(RockBoardExploreStageData *const this)
{
  __int64 v1; // rcx
  char v2; // dl
  bool v3; // cl
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx

  v2 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  v4 = (v2 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v2);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v4, v3);
  this->stage_id = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v5 != 0;
  v6 = ((_BYTE)this + 4) & 7;
  v7 = (v5 != 0) & (unsigned __int8)((char)v6 >= v5);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, v6, v7, v1);
  this->is_open = 0;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v8 != 0;
  v9 = ((_BYTE)this + 5) & 7;
  v10 = (v8 != 0) & (unsigned __int8)((char)v9 >= v8);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_finish, v9, v10, v1);
  this->is_finish = 0;
};

// Line 30: range 0000000017094F0A-0000000017094F7B
void __cdecl RockBoardExploreActivity::~RockBoardExploreActivity(RockBoardExploreActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RockBoardExploreActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1, v2);
  this->_vptr_DescribalBase = v2;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::map<unsigned int,RockBoardExploreStageData>::~map(&this->stage_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 30: range 0000000017094F7C-0000000017094FA6
void __cdecl RockBoardExploreActivity::~RockBoardExploreActivity(RockBoardExploreActivity *const this)
{
  RockBoardExploreActivity::~RockBoardExploreActivity(this);
  operator delete(this, 0x408uLL);
};

// Line 34: range 0000000016D67B36-0000000016D67BB8
void __cdecl RockBoardExploreActivity::RockBoardExploreActivity(
        RockBoardExploreActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'RockBoardExploreActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player, v3);
  this->_vptr_DescribalBase = v3;
  std::map<unsigned int,RockBoardExploreStageData>::map(&this->stage_data_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
};

// Line 36: range 0000000017D71904-0000000017D7190E
data::NewActivityType __cdecl RockBoardExploreActivity::getActivityStaticType()
{
  return 3102;
};
