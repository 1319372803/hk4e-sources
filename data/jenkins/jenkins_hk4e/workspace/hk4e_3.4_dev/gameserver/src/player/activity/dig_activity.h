// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/dig_activity.h

// Line 22: range 000000001683326E-00000000168332F1
void __cdecl DigActivity::~DigActivity(DigActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DigActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::vector<DigActivity::SearchingGadgetInfo>::~vector(&this->gadget_vec_);
  std::map<unsigned int,DigActivity::SearchingTarget>::~map(&this->searching_target_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->group_bundle_obs_wtr_);
  BaseActivity::~BaseActivity(this);
};

// Line 22: range 00000000168332F2-000000001683331C
void __cdecl DigActivity::~DigActivity(DigActivity *const this)
{
  DigActivity::~DigActivity(this);
  operator delete(this, 0x400uLL);
};

// Line 25: range 00000000166D9E6C-00000000166D9EFB
void __cdecl DigActivity::SearchingGadgetInfo::SearchingGadgetInfo(DigActivity::SearchingGadgetInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->bundle_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr);
};

// Line 25: range 00000000167F23BA-00000000167F262C
void __cdecl DigActivity::SearchingGadgetInfo::SearchingGadgetInfo(
        DigActivity::SearchingGadgetInfo *const this,
        DigActivity::SearchingGadgetInfo *a2)
{
  uint32_t bundle_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  bundle_id = a2->bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->bundle_id = bundle_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos, 12LL);
  }
  this->pos = a2->pos;
  if ( *(char *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot, 12LL);
  }
  this->rot = a2->rot;
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr, &a2->gadget_wtr);
};

// Line 25: range 000000001670FCEE-000000001670FD0C
void __cdecl DigActivity::SearchingGadgetInfo::~SearchingGadgetInfo(DigActivity::SearchingGadgetInfo *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr);
};

// Line 34: range 00000000167C8622-00000000167C8735
void __cdecl DigActivity::SearchingTarget::SearchingTarget(DigActivity::SearchingTarget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bundle_id);
  }
  this->bundle_id = 0;
  Vector3::Vector3(&this->center, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
};

// Line 44: range 0000000016D65536-0000000016D655CA
void __cdecl DigActivity::DigActivity(DigActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'DigActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  std::weak_ptr<Observer>::weak_ptr(&this->group_bundle_obs_wtr_);
  std::map<unsigned int,DigActivity::SearchingTarget>::map(&this->searching_target_map_);
  std::vector<DigActivity::SearchingGadgetInfo>::vector(&this->gadget_vec_);
};

// Line 46: range 000000001384A624-000000001384A62E
data::NewActivityType __cdecl DigActivity::getActivityStaticType()
{
  return 2203;
};
