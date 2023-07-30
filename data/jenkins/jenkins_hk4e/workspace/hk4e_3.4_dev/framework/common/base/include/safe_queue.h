// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/include/safe_queue.h

// Line 28: range 000000000C63E6A8-000000000C63E6C2
void __cdecl common::tools::SafeQueue<PacketLog>::~SafeQueue(common::tools::SafeQueue<PacketLog> *const this)
{
  std::queue<PacketLog>::~queue(&this->queue_);
};

// Line 28: range 000000000C68E866-000000000C68E880
void __cdecl common::tools::SafeQueue<StatLog>::~SafeQueue(common::tools::SafeQueue<StatLog> *const this)
{
  std::queue<StatLog>::~queue(&this->queue_);
};

// Line 28: range 000000000C63E894-000000000C63E8AE
void __cdecl common::tools::SafeQueue<std::shared_ptr<AsyncTask>>::~SafeQueue(
        common::tools::SafeQueue<std::shared_ptr<AsyncTask> > *const this)
{
  std::queue<std::shared_ptr<AsyncTask>>::~queue(&this->queue_);
};

// Line 28: range 000000000C693C24-000000000C693C3E
void __cdecl common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::~SafeQueue(
        common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *const this)
{
  std::queue<std::shared_ptr<common::minet::Packet>>::~queue(&this->queue_);
};

// Line 28: range 000000000C6526F8-000000000C652712
void __cdecl common::tools::SafeQueue<std::string>::~SafeQueue(common::tools::SafeQueue<std::string >_0 *const this)
{
  std::queue<std::string>::~queue(&this->queue_);
};

// Line 31: range 000000000C6592B0-000000000C65931A
// local variable allocation has failed, the output may be wrong!
void __cdecl common::tools::SafeQueue<PacketLog>::SafeQueue(
        common::tools::SafeQueue<PacketLog> *const this,
        uint32_t max_size)
{
  std::queue<PacketLog>::queue<std::deque<PacketLog>,void>(&this->queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_size_, *(_QWORD *)&max_size);
  }
  this->max_size_ = max_size;
  std::mutex::mutex(&this->queue_mu_);
};

// Line 31: range 000000000C6598AE-000000000C659918
// local variable allocation has failed, the output may be wrong!
void __cdecl common::tools::SafeQueue<std::shared_ptr<AsyncTask>>::SafeQueue(
        common::tools::SafeQueue<std::shared_ptr<AsyncTask> > *const this,
        uint32_t max_size)
{
  std::queue<std::shared_ptr<AsyncTask>>::queue<std::deque<std::shared_ptr<AsyncTask>>,void>(&this->queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_size_, *(_QWORD *)&max_size);
  }
  this->max_size_ = max_size;
  std::mutex::mutex(&this->queue_mu_);
};
