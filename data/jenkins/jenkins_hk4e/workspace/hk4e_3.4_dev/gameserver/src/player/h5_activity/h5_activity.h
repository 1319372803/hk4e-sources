// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/h5_activity/h5_activity.h

// Line 61: range 0000000016D6AD5E-0000000016D6ADA5
uint32_t __cdecl H5Activity::getH5ScheduleId(const H5Activity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->h5_schedule_id_);
  }
  return this->h5_schedule_id_;
};

// Line 62: range 0000000016D6ADA6-0000000016D6ADF5
uint32_t __cdecl H5Activity::getH5ActivityId(const H5Activity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->h5_activity_id_);
  }
  return this->h5_activity_id_;
};

// Line 129: range 0000000016F4D612-0000000016F4D673
void __cdecl H5Activity::~H5Activity(H5Activity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'H5Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->h5_activity_watcher_progress_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->finished_h5_activity_watcher_set_);
};
