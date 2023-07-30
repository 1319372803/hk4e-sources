// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/async_task_mgr.h

// Line 88: range 000000000C63E904-000000000C63EA1D
void __cdecl AsyncTaskMgr::AsyncTaskMgr(AsyncTaskMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->async_thread_num_ = 0;
  std::string::basic_string(&this->service_name_);
  common::tools::SafeQueue<std::shared_ptr<AsyncTask>>::SafeQueue(&this->task_queue_, 0);
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<AsyncTask>>>>::vector(&this->callback_queue_vec_);
  common::tools::ThreadGroup::ThreadGroup(&this->thread_group_);
  std::atomic<bool>::atomic(&this->is_run_, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_packet_queue_timestamp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_report_packet_queue_timestamp_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_report_packet_queue_timestamp_);
  }
  this->next_report_packet_queue_timestamp_ = 0;
};

// Line 88: range 000000000C63EA1E-000000000C63EA70
void __cdecl AsyncTaskMgr::~AsyncTaskMgr(AsyncTaskMgr *const this)
{
  common::tools::ThreadGroup::~ThreadGroup(&this->thread_group_);
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<AsyncTask>>>>::~vector(&this->callback_queue_vec_);
  common::tools::SafeQueue<std::shared_ptr<AsyncTask>>::~SafeQueue(&this->task_queue_);
  std::string::~string(&this->service_name_);
};
