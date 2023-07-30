// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_offline_msg_comp.h

// Line 20: range 00000000146F2FE6-00000000146F3080
void __cdecl HomeOfflineMsgExeInfo::HomeOfflineMsgExeInfo(HomeOfflineMsgExeInfo *const this, HomeOfflineMsgExeInfo *a2)
{
  uint32_t exe_times; // ecx

  proto::HomeOfflineMsgBin::HomeOfflineMsgBin(&this->msg, &a2->msg);
  if ( *(_BYTE *)(((unsigned __int64)&a2->exe_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->exe_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  exe_times = a2->exe_times;
  if ( *(_BYTE *)(((unsigned __int64)&this->exe_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exe_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exe_times);
  }
  this->exe_times = exe_times;
};

// Line 20: range 0000000014624CE6-0000000014624D00
void __cdecl HomeOfflineMsgExeInfo::~HomeOfflineMsgExeInfo(HomeOfflineMsgExeInfo *const this)
{
  proto::HomeOfflineMsgBin::~HomeOfflineMsgBin(&this->msg);
};

// Line 26: range 0000000014837E44-0000000014837EA1
void __cdecl HomeOfflineMsgComp::~HomeOfflineMsgComp(HomeOfflineMsgComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeOfflineMsgComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::vector<HomeOfflineMsgExeInfo>::~vector(&this->next_offline_msg_vec_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 26: range 0000000014837EA2-0000000014837ECC
void __cdecl HomeOfflineMsgComp::~HomeOfflineMsgComp(HomeOfflineMsgComp *const this)
{
  HomeOfflineMsgComp::~HomeOfflineMsgComp(this);
  operator delete(this, 0x40uLL);
};

// Line 36: range 0000000014821500-00000000148215A6
void __cdecl ZN18HomeOfflineMsgCompCI212HomeCompBaseER4Home(HomeOfflineMsgComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeOfflineMsgComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index_);
  }
  this->index_ = 0;
  std::vector<HomeOfflineMsgExeInfo>::vector(&this->next_offline_msg_vec_);
};
