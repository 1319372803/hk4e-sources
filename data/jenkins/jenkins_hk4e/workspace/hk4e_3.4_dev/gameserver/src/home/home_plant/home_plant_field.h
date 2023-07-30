// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_plant/home_plant_field.h

// Line 32: range 000000001697B7F8-000000001697B8D3
void __cdecl HomePlantCancelLogBody::HomePlantCancelLogBody(HomePlantCancelLogBody *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->seed_id);
  }
  this->seed_id = 0;
};

// Line 40: range 0000000016A17E4C-0000000016A180B7
void __cdecl HomeSubFieldData::HomeSubFieldData(HomeSubFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->seed_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grow_time_);
  }
  this->grow_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_time_);
  }
  this->last_update_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_gather_id_);
  }
  this->home_gather_id_ = 0;
  std::set<unsigned int>::set(&this->bundle_index_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_guid);
  }
  this->field_guid = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  std::vector<std::weak_ptr<Gadget>>::vector(&this->gadget_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->log_status_);
  }
  this->log_status_ = HOME_FIELD_STATUE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_pause_);
  }
  this->is_pause_ = 0;
};

// Line 40: range 0000000016B26D02-0000000016B272FD
void __cdecl HomeSubFieldData::HomeSubFieldData(HomeSubFieldData *const this, HomeSubFieldData *a2)
{
  uint32_t seed_id; // ecx
  uint32_t grow_time; // ecx
  uint32_t last_update_time; // ecx
  uint32_t home_gather_id; // ecx
  uint32_t index; // ecx
  uint32_t field_guid; // ecx
  proto::HomePlantFieldStatus log_status; // ecx
  bool is_pause; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  seed_id = a2->seed_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->seed_id_ = seed_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  grow_time = a2->grow_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grow_time_);
  }
  this->grow_time_ = grow_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_update_time = a2->last_update_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_time_);
  }
  this->last_update_time_ = last_update_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  home_gather_id = a2->home_gather_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_gather_id_);
  }
  this->home_gather_id_ = home_gather_id;
  std::set<unsigned int>::set(&this->bundle_index_set_, &a2->bundle_index_set_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  index = a2->index;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->field_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->field_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  field_guid = a2->field_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_guid);
  }
  this->field_guid = field_guid;
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos, 12LL);
  }
  this->pos = a2->pos;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)a2 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot, 12LL);
  }
  this->rot = a2->rot;
  std::vector<std::weak_ptr<Gadget>>::vector(&this->gadget_vec_, &a2->gadget_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->log_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->log_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  log_status = a2->log_status_;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->log_status_);
  }
  this->log_status_ = log_status;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_pause_);
  }
  is_pause = a2->is_pause_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_pause_);
  }
  this->is_pause_ = is_pause;
};

// Line 40: range 0000000016A165BA-0000000016A165E8
void __cdecl HomeSubFieldData::~HomeSubFieldData(HomeSubFieldData *const this)
{
  std::vector<std::weak_ptr<Gadget>>::~vector(&this->gadget_vec_);
  std::set<unsigned int>::~set(&this->bundle_index_set_);
};

// Line 44: range 0000000016907328-00000000169073C7
void __cdecl HomeSubFieldData::init(HomeSubFieldData *const this, bool is_pause)
{
  proto::HomePlantFieldStatus FieldStatus; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_pause_);
  }
  this->is_pause_ = is_pause;
  FieldStatus = HomeSubFieldData::getFieldStatus(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->log_status_);
  }
  this->log_status_ = FieldStatus;
};

// Line 55: range 00000000169073C8-00000000169074EF
uint32_t __cdecl HomeSubFieldData::getGrowTime(const HomeSubFieldData *const this)
{
  uint32_t grow_time; // ebx
  int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_pause_);
  }
  if ( this->is_pause_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return this->grow_time_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    grow_time = this->grow_time_;
    v3 = grow_time + common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return v3 - this->last_update_time_;
  }
};

// Line 63: range 0000000015D41256-0000000015D41298
uint32_t __cdecl HomeSubFieldData::getSeedId(const HomeSubFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->seed_id_;
};

// Line 64: range 00000000169074F0-000000001690753F
uint32_t __cdecl HomeSubFieldData::getHomeGatherId(const HomeSubFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->home_gather_id_;
};

// Line 66: range 0000000015D4129A-0000000015D412AB
const void *__cdecl HomeSubFieldData::getBundleIndexSet(HomeSubFieldData *const this)
{
  return &this->bundle_index_set_;
};

// Line 66: range 0000000015D412AC-0000000015D412D5
void __cdecl HomeSubFieldData::logGadget(HomeSubFieldData *const this, GadgetWtr *p_gadget_wtr)
{
  std::vector<std::weak_ptr<Gadget>>::push_back(&this->gadget_vec_, p_gadget_wtr);
};

// Line 67: range 0000000016907540-0000000016907587
bool __cdecl HomeSubFieldData::isEmpty(const HomeSubFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->seed_id_ == 0;
};

// Line 95: range 0000000016907588-00000000169075E7
void __cdecl HomeSubFieldData::onGMSetGrowTime(HomeSubFieldData *const this, uint32_t time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->grow_time_ += time;
};

// Line 132: range 0000000016A72CFC-0000000016A72E0F
void __cdecl HomeFieldData::HomeFieldData(HomeFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  std::vector<HomeSubFieldData>::vector(&this->sub_field_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
};

// Line 132: range 0000000016A16A52-0000000016A16A70
void __cdecl HomeFieldData::~HomeFieldData(HomeFieldData *const this)
{
  std::vector<HomeSubFieldData>::~vector(&this->sub_field_vec);
};

// Line 148: range 00000000169075E8-0000000016907674
void __cdecl HomeFieldData::setPause(HomeFieldData *const this, bool is_pause, uint32_t now)
{
  std::vector<HomeSubFieldData>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<HomeSubFieldData> *__for_range; // [rsp+20h] [rbp-10h]
  HomeSubFieldData *sub_field; // [rsp+28h] [rbp-8h]

  __for_range = &this->sub_field_vec;
  __for_begin._M_current = std::vector<HomeSubFieldData>::begin(&this->sub_field_vec)._M_current;
  __for_end._M_current = std::vector<HomeSubFieldData>::end(&this->sub_field_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeSubFieldData *,std::vector<HomeSubFieldData>>(&__for_begin, &__for_end) )
  {
    sub_field = __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator*(&__for_begin);
    HomeSubFieldData::setPause(sub_field, is_pause, now);
    __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator++(&__for_begin);
  }
};

// Line 169: range 0000000016A72994-0000000016A729AE
void __cdecl HomeModuleFieldData::HomeModuleFieldData(HomeModuleFieldData *const this)
{
  std::unordered_map<unsigned int,HomeFieldData>::unordered_map(&this->field_data_map);
};

// Line 169: range 0000000016A16620-0000000016A1663A
void __cdecl HomeModuleFieldData::~HomeModuleFieldData(HomeModuleFieldData *const this)
{
  std::unordered_map<unsigned int,HomeFieldData>::~unordered_map(&this->field_data_map);
};
