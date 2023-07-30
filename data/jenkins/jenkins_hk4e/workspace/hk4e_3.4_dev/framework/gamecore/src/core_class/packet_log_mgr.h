// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/packet_log_mgr.h

// Line 21: range 000000000C693B80-000000000C693BAA
void __cdecl PacketLog::~PacketLog(PacketLog *const this)
{
  std::string::~string(&this->tag);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->packet_ptr);
};

// Line 29: range 000000000C63EAFE-000000000C63EB44
void __cdecl PacketLogMgr::PacketLogMgr(PacketLogMgr *const this)
{
  common::tools::SafeQueue<PacketLog>::SafeQueue(&this->packet_log_queue_, 0xC350u);
  std::thread::thread(&this->work_thread_);
  std::atomic<bool>::atomic(&this->is_run_, 0);
};

// Line 29: range 000000000C63EB46-000000000C63EB70
void __cdecl PacketLogMgr::~PacketLogMgr(PacketLogMgr *const this)
{
  std::thread::~thread(&this->work_thread_);
  common::tools::SafeQueue<PacketLog>::~SafeQueue(&this->packet_log_queue_);
};
