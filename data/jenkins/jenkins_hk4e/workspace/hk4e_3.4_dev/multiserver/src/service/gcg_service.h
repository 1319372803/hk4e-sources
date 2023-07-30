// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/gcg_service.h

// Line 27: range 000000000D82B176-000000000D82B25C
void __cdecl GCGService::GCGService(GCGService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  std::deque<std::atomic<unsigned int>>::deque(&this->thread_load_deque_);
  std::vector<std::set<unsigned int>>::vector(&this->thread_load_vec_);
  std::deque<GCGGameMgr>::deque(&this->game_mgr_deque_);
  std::atomic<unsigned int>::atomic(&this->gen_guid_, 0);
};

// Line 28: range 000000000DF3DF7C-000000000DF3DFFF
void __cdecl GCGService::~GCGService(GCGService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  std::deque<GCGGameMgr>::~deque(&this->game_mgr_deque_);
  std::vector<std::set<unsigned int>>::~vector(&this->thread_load_vec_);
  std::deque<std::atomic<unsigned int>>::~deque(&this->thread_load_deque_);
  ServiceBase::~ServiceBase(this);
};

// Line 28: range 000000000DF3E000-000000000DF3E02A
void __cdecl GCGService::~GCGService(GCGService *const this)
{
  GCGService::~GCGService(this);
  operator delete(this, 0x3C8uLL);
};

// Line 31: range 000000000DF3E02C-000000000DF3E03A
uint32_t __cdecl GCGService::getServiceType(GCGService *const this)
{
  return 20;
};

// Line 47: range 000000000E1D4532-000000000E1D4579
uint32_t __cdecl GCGService::getWorkThreadNum(GCGService *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
  }
  return this->thread_num_;
};

// Line 55: range 000000000E1D457A-000000000E1D4599
uint32_t __cdecl GCGService::getGenGameModeUid(GCGService *const this)
{
  return std::__atomic_base<unsigned int>::operator++(&this->gen_guid_);
};
