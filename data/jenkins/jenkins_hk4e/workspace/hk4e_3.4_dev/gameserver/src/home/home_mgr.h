// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_mgr.h

// Line 26: range 0000000014864DA0-0000000014864DBE
void __cdecl ModifyHomeStatusContext::~ModifyHomeStatusContext(ModifyHomeStatusContext *const this)
{
  proto::HomeStatusRedisData::~HomeStatusRedisData(&this->cur_status_data);
};

// Line 34: range 000000001780F192-000000001780F2A1
void __cdecl SaveHomeQueue::SaveHomeQueue(SaveHomeQueue *const this, SaveHomeQueue *a2)
{
  uint32_t last_send_proto_time; // ecx
  HomeMgr *home_mgr; // rdx

  std::unordered_set<unsigned int>::unordered_set(&this->need_save_home_set_, &a2->need_save_home_set_);
  std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::unordered_map(&this->save_info_map_, &a2->save_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_send_proto_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_send_proto_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_send_proto_time = a2->last_send_proto_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_proto_time_);
  }
  this->last_send_proto_time_ = last_send_proto_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->home_mgr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  home_mgr = a2->home_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_mgr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->home_mgr_);
  this->home_mgr_ = home_mgr;
};

// Line 34: range 000000001762B39E-000000001762B3C8
void __cdecl SaveHomeQueue::~SaveHomeQueue(SaveHomeQueue *const this)
{
  std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::~unordered_map(&this->save_info_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->need_save_home_set_);
};

// Line 39: range 000000001460D5F0-000000001460D689
void __cdecl SaveHomeQueue::SaveInfo::SaveInfo(
        SaveHomeQueue::SaveInfo *const this,
        uint32_t home_uid,
        uint32_t save_timeout)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->home_uid = home_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->save_timeout);
  }
  this->save_timeout = save_timeout;
};

// Line 41: range 000000001460D68A-000000001460D725
bool __cdecl SaveHomeQueue::SaveInfo::operator<(
        const SaveHomeQueue::SaveInfo *const this,
        const SaveHomeQueue::SaveInfo *other)
{
  uint32_t save_timeout; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  save_timeout = this->save_timeout;
  if ( *(_BYTE *)(((unsigned __int64)&other->save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->save_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return save_timeout > other->save_timeout;
};

// Line 49: range 000000001762AFA4-000000001762B041
void __cdecl SaveHomeQueue::SaveHomeQueue(SaveHomeQueue *const this, HomeMgr *home_mgr)
{
  std::unordered_set<unsigned int>::unordered_set(&this->need_save_home_set_);
  std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::unordered_map(&this->save_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_proto_time_);
  }
  this->last_send_proto_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_mgr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->home_mgr_);
  this->home_mgr_ = home_mgr;
};

// Line 65: range 0000000014864E24-0000000014864E42
void __cdecl HomeSaveWaitData::~HomeSaveWaitData(HomeSaveWaitData *const this)
{
  proto::HomeData::~HomeData(&this->bin_data);
};

// Line 78: range 000000001780F2A2-000000001780F411
void __cdecl HomeMgr::HomeMgr(HomeMgr *const this, HomeMgr *a2)
{
  uint32_t last_check_save_wait_time; // ecx
  uint32_t last_refresh_day; // ecx

  std::unordered_map<unsigned int,std::shared_ptr<Home>>::unordered_map(&this->online_home_map_, &a2->online_home_map_);
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::unordered_map(
    &this->save_wait_home_map_,
    &a2->save_wait_home_map_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_check_save_wait_time = a2->last_check_save_wait_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_save_wait_time_);
  }
  this->last_check_save_wait_time_ = last_check_save_wait_time;
  SaveHomeQueue::SaveHomeQueue(&this->save_home_queue_, &a2->save_home_queue_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->daily_refresh_timer_ptr_, &a2->daily_refresh_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_refresh_day = a2->last_refresh_day_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_day_);
  }
  this->last_refresh_day_ = last_refresh_day;
};

// Line 78: range 00000000176AE432-00000000176AE47E
void __cdecl HomeMgr::~HomeMgr(HomeMgr *const this)
{
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->daily_refresh_timer_ptr_);
  SaveHomeQueue::~SaveHomeQueue(&this->save_home_queue_);
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::~unordered_map(&this->save_wait_home_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::~unordered_map(&this->online_home_map_);
};

// Line 84: range 000000001762B3CA-000000001762B49E
void __cdecl HomeMgr::HomeMgr(HomeMgr *const this)
{
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::unordered_map(&this->online_home_map_);
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::unordered_map(&this->save_wait_home_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_save_wait_time_);
  }
  this->last_check_save_wait_time_ = 0;
  SaveHomeQueue::SaveHomeQueue(&this->save_home_queue_, this);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->daily_refresh_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_day_);
  }
  this->last_refresh_day_ = 0;
};

// Line 185: range 000000001480F076-000000001480F1C0
void __cdecl HomeSaveWaitData::HomeSaveWaitData(HomeSaveWaitData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->home_uid = 0;
  proto::HomeData::HomeData(&this->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_version);
  }
  this->data_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_save_time);
  }
  this->last_save_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->load_rand);
  this->load_rand = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_save_count);
  }
  this->try_save_count = 0;
};

// Line 484: range 000000001480FC5E-000000001480FD17
void __cdecl ModifyHomeStatusContext::ModifyHomeStatusContext(ModifyHomeStatusContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->home_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_load_rand >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_load_rand);
  this->last_load_rand = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_load_rand >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->new_load_rand);
  this->new_load_rand = 0LL;
  proto::HomeStatusRedisData::HomeStatusRedisData(&this->cur_status_data);
};
