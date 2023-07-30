// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/gacha_activity.h

// Line 19: range 000000001518CB18-000000001518CC33
GachaActivityStageData *__cdecl GachaActivityStageData::operator=(
        GachaActivityStageData *const this,
        const GachaActivityStageData *a2)
{
  uint32_t stage_id; // ecx
  bool is_open; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  std::map<unsigned int,unsigned int>::operator=(&this->target_num_map, &a2->target_num_map);
  return this;
};

// Line 19: range 000000001518CA60-000000001518CAF7
void __cdecl GachaActivityStageData::GachaActivityStageData(GachaActivityStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
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
  std::map<unsigned int,unsigned int>::map(&this->target_num_map);
};

// Line 19: range 00000000153AEF80-00000000153AF098
void __cdecl GachaActivityStageData::GachaActivityStageData(
        GachaActivityStageData *const this,
        GachaActivityStageData *a2)
{
  uint32_t stage_id; // ecx
  bool is_open; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  std::map<unsigned int,unsigned int>::map(&this->target_num_map, &a2->target_num_map);
};

// Line 19: range 000000001518CAF8-000000001518CB16
void __cdecl GachaActivityStageData::~GachaActivityStageData(GachaActivityStageData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->target_num_map);
};

// Line 29: range 00000000154CC3BC-00000000154CC499
void __cdecl GachaActivity::~GachaActivity(GachaActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GachaActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::string::~string(&this->gm_output_);
  std::map<unsigned int,unsigned int>::~map(&this->group_num_map_);
  std::set<unsigned int>::~set(&this->have_get_robot_set_);
  std::map<unsigned int,unsigned int>::~map(&this->have_reward_robot_num_map_);
  std::vector<unsigned int>::~vector(&this->create_robot_vec_);
  std::map<unsigned int,unsigned int>::~map(&this->robot_num_map_);
  std::map<unsigned int,GachaActivityStageData>::~map(&this->stage_data_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 29: range 00000000154CC49A-00000000154CC4C4
void __cdecl GachaActivity::~GachaActivity(GachaActivity *const this)
{
  GachaActivity::~GachaActivity(this);
  operator delete(this, 0x528uLL);
};

// Line 33: range 0000000016D668D6-0000000016D66CB9
void __cdecl GachaActivity::GachaActivity(GachaActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx
  std::allocator<char> __a; // [rsp+2Fh] [rbp-11h] BYREF

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'GachaActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_stage_);
  }
  this->item_stage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_stage_);
  }
  this->sub_stage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_finish_num_);
  }
  this->robot_finish_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hidden_robot_finish_num_);
  }
  this->hidden_robot_finish_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_create_hidden_robot_id_);
  }
  this->first_create_hidden_robot_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tech_create_robot_id_);
  }
  this->tech_create_robot_id_ = 0;
  std::map<unsigned int,GachaActivityStageData>::map(&this->stage_data_map_);
  std::map<unsigned int,unsigned int>::map(&this->robot_num_map_);
  std::vector<unsigned int>::vector(&this->create_robot_vec_);
  std::map<unsigned int,unsigned int>::map(&this->have_reward_robot_num_map_);
  std::set<unsigned int>::set(&this->have_get_robot_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_);
  }
  this->scale_ = 1;
  std::map<unsigned int,unsigned int>::map(&this->group_num_map_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->gm_output_, byte_25E9A5A0, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_robot_limit_);
  }
  this->gm_robot_limit_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
};

// Line 35: range 000000001384A6E0-000000001384A6EA
data::NewActivityType __cdecl GachaActivity::getActivityStaticType()
{
  return 2703;
};

// Line 51: range 000000001518CA50-000000001518CA5E
proto::FriendBriefRequestReason __cdecl GachaActivity::getGiveReasonType(GachaActivity *const this)
{
  return 4;
};

// Line 86: range 000000001384A6EC-000000001384A740
uint32_t __cdecl GachaActivity::getItemStage(GachaActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->item_stage_;
};

// Line 106: range 0000000017D71696-0000000017D716E8
void __cdecl GachaActivity::setSubStageIdByGM(GachaActivity *const this, uint32_t target_sub_stage_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_stage_);
  }
  this->sub_stage_ = target_sub_stage_id;
};

// Line 107: range 0000000017D716EA-0000000017D7173C
void __cdecl GachaActivity::setScaleByGM(GachaActivity *const this, uint32_t target_scale)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_);
  }
  this->scale_ = target_scale;
};

// Line 108: range 0000000017D7173E-0000000017D71790
void __cdecl GachaActivity::setRobotLimitByGM(GachaActivity *const this, uint32_t gm_robot_limit)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_robot_limit_);
  }
  this->gm_robot_limit_ = gm_robot_limit;
};
