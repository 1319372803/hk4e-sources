// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/home_mgr.h

// Line 27: range 0000000003898E3A-0000000003898ECF
void __cdecl Home::Home(Home *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->home_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gameserver_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gameserver_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->gameserver_id = 0;
};

// Line 28: range 0000000003898ED0-0000000003898EDA
void __cdecl Home::~Home(Home *const this)
{
  ;
};

// Line 42: range 000000000389918C-000000000389924D
void __cdecl HomeMgr::HomeMgr(HomeMgr *const this)
{
  std::__atomic_base<unsigned int>::__int_type Now; // eax

  common::tools::SafeMap<std::shared_ptr<Home>,1229u>::SafeMap(&this->home_map_);
  common::tools::SafeMap<std::set<unsigned int>,1229u>::SafeMap(&this->gameserver_home_home_uid_map_);
  std::atomic<unsigned int>::atomic(&this->last_load_report_time_, 0);
  std::atomic<unsigned int>::atomic(&this->total_home_num_per_time_, 0);
  std::atomic<unsigned int>::atomic(&this->load_per_second_, 0);
  Now = common::tools::TimeUtils::getNow();
  std::__atomic_base<unsigned int>::operator=(&this->last_load_report_time_, Now);
};

// Line 46: range 000000000389924E-000000000389927A
void __cdecl HomeMgr::~HomeMgr(HomeMgr *const this)
{
  common::tools::SafeMap<std::set<unsigned int>,1229u>::~SafeMap(&this->gameserver_home_home_uid_map_);
  common::tools::SafeMap<std::shared_ptr<Home>,1229u>::~SafeMap(&this->home_map_);
};
