// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/push_platform_mgr.h

// Line 33: range 00000000176AD96C-00000000176ADA3C
void __cdecl PushPlatformManager::PushPlatformManager(PushPlatformManager *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_init_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_run_);
  }
  this->is_run_ = 0;
  common::tools::ThreadGroup::ThreadGroup(&this->thread_group_);
  common::tools::SafeQueue<Json::Value>::SafeQueue(&this->push_content_queue_, 0);
};

// Line 33: range 00000000176ADA3E-00000000176ADA6C
void __cdecl PushPlatformManager::~PushPlatformManager(PushPlatformManager *const this)
{
  common::tools::SafeQueue<Json::Value>::~SafeQueue(&this->push_content_queue_);
  common::tools::ThreadGroup::~ThreadGroup(&this->thread_group_);
};
