// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/stat_log_mgr.h

// Line 20: range 000000000C6A1694-000000000C6A16DE
void __cdecl StatLog::~StatLog(StatLog *const this)
{
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->body_ext_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->head_ext_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->head_ptr);
};

// Line 28: range 000000000C68E882-000000000C68E8BE
void __cdecl StatLogMgr::~StatLogMgr(StatLogMgr *const this)
{
  std::thread::~thread(&this->work_thread_);
  common::tools::SafeQueue<StatLog>::~SafeQueue(&this->stat_log_queue_);
  std::string::~string(this);
};
