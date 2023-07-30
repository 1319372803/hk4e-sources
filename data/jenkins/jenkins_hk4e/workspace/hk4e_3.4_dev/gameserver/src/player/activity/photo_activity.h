// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/photo_activity.h

// Line 19: range 0000000016D61A7A-0000000016D61B89
void __cdecl PhotoPosData::PhotoPosData(PhotoPosData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->pos_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_view);
  }
  this->is_view = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = 0;
};

// Line 31: range 00000000170959EA-0000000017095A5B
void __cdecl PhotoActivity::~PhotoActivity(PhotoActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PhotoActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::unordered_map<unsigned int,PhotoPosData>::~unordered_map(&this->photo_pos_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 31: range 0000000017095A5C-0000000017095A86
void __cdecl PhotoActivity::~PhotoActivity(PhotoActivity *const this)
{
  PhotoActivity::~PhotoActivity(this);
  operator delete(this, 0x418uLL);
};

// Line 35: range 0000000016D619B6-0000000016D61A78
void __cdecl PhotoActivity::PhotoActivity(PhotoActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'PhotoActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  std::unordered_map<unsigned int,PhotoPosData>::unordered_map(&this->photo_pos_data_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
};

// Line 36: range 000000001384A6CA-000000001384A6D4
data::NewActivityType __cdecl PhotoActivity::getActivityStaticType()
{
  return 2603;
};
