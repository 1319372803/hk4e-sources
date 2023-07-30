// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/plant_flower_activity.h

// Line 34: range 0000000016F7B3E8-0000000016F7B402
void __cdecl RecvFlowerRecord::RecvFlowerRecord(RecvFlowerRecord *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->flower_num_map);
};

// Line 34: range 0000000016F1E26A-0000000016F1E284
void __cdecl RecvFlowerRecord::~RecvFlowerRecord(RecvFlowerRecord *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->flower_num_map);
};

// Line 45: range 0000000017095898-00000000170959BD
void __cdecl PlantFlowerActivity::~PlantFlowerActivity(PlantFlowerActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlantFlowerActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->common_obtained_flower_type_set_);
  std::set<unsigned int>::~set(&this->plant_obtained_flower_type_set_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->seed_home_gather_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->flower_shelf_used_flower_data_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->home_mudule_used_flower_data_map_);
  std::unordered_map<unsigned int,RecvFlowerRecord>::~unordered_map(&this->recv_flower_record_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->wish_flower_num_map_);
  std::vector<unsigned int>::~vector(&this->seed_reward_vec_);
  std::weak_ptr<Observer>::~weak_ptr(&this->obtain_item_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->home_gather_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->home_plant_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->home_custom_furniture_change_obs_wtr_);
  BaseActivity::~BaseActivity(this);
};

// Line 45: range 00000000170959BE-00000000170959E8
void __cdecl PlantFlowerActivity::~PlantFlowerActivity(PlantFlowerActivity *const this)
{
  PlantFlowerActivity::~PlantFlowerActivity(this);
  operator delete(this, 0x588uLL);
};

// Line 50: range 0000000016D61DE4-0000000016D61FE8
void __cdecl PlantFlowerActivity::PlantFlowerActivity(
        PlantFlowerActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'PlantFlowerActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  std::weak_ptr<Observer>::weak_ptr(&this->home_custom_furniture_change_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->home_plant_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->home_gather_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->obtain_item_obs_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_awarded_day_index_);
  }
  this->last_awarded_day_index_ = 0;
  std::vector<unsigned int>::vector(&this->seed_reward_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->wish_flower_num_map_);
  std::unordered_map<unsigned int,RecvFlowerRecord>::unordered_map(&this->recv_flower_record_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->home_mudule_used_flower_data_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->flower_shelf_used_flower_data_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->seed_home_gather_map_);
  std::set<unsigned int>::set(&this->plant_obtained_flower_type_set_);
  std::set<unsigned int>::set(&this->common_obtained_flower_type_set_);
};

// Line 52: range 000000001639437B-0000000016394385
data::NewActivityType __cdecl PlantFlowerActivity::getActivityStaticType()
{
  return 2200;
};

// Line 52: range 0000000016394386-00000000163943A5
uint32_t __cdecl PlantFlowerActivity::getPlantObtainedFlowerTypeNum(const PlantFlowerActivity *const this)
{
  return std::set<unsigned int>::size(&this->plant_obtained_flower_type_set_);
};

// Line 116: range 00000000163943A6-00000000163943C5
uint32_t __cdecl PlantFlowerActivity::getCommonObtainedFlowerTypeNum(const PlantFlowerActivity *const this)
{
  return std::set<unsigned int>::size(&this->common_obtained_flower_type_set_);
};
