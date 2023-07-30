// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/service_base.h

// Line 115: range 000000000C63EB72-000000000C63EE08
void __cdecl ServiceBase::ServiceBase(ServiceBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServiceBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  std::string::basic_string(&this->name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_num_);
  }
  this->thread_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_max_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_queue_max_size_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->packet_queue_max_size_);
  }
  this->packet_queue_max_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->loop_func_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->loop_func_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->loop_func_interval_);
  }
  this->loop_func_interval_ = 0;
  std::atomic<ServiceBase::Status>::atomic(&this->status_, STATUS_NONE);
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>>>::vector(&this->packet_queue_vec_);
  std::atomic<unsigned long>::atomic(&this->next_packet_queue_index, 0LL);
  common::tools::ThreadGroup::ThreadGroup(&this->thread_group_);
  std::vector<std::shared_ptr<HandlerBase>>::vector(&this->handler_vec_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::map(&this->push_packet_func_map_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::map(&this->push_fail_packet_func_map_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::map(&this->process_packet_func_map_);
  AsyncTaskMgr::AsyncTaskMgr(&this->async_task_mgr_);
  std::map<unsigned int,StatLogMgr>::map(&this->stat_log_mgr_map_);
  PacketLogMgr::PacketLogMgr(&this->packet_log_mgr_);
};

// Line 116: range 000000000C63EE0A-000000000C63EEF9
void __cdecl ServiceBase::~ServiceBase(ServiceBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServiceBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  PacketLogMgr::~PacketLogMgr(&this->packet_log_mgr_);
  std::map<unsigned int,StatLogMgr>::~map(&this->stat_log_mgr_map_);
  AsyncTaskMgr::~AsyncTaskMgr(&this->async_task_mgr_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::~map(&this->process_packet_func_map_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::~map(&this->push_fail_packet_func_map_);
  std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::~map(&this->push_packet_func_map_);
  std::vector<std::shared_ptr<HandlerBase>>::~vector(&this->handler_vec_);
  common::tools::ThreadGroup::~ThreadGroup(&this->thread_group_);
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>>>::~vector(&this->packet_queue_vec_);
  std::string::~string(&this->name_);
};

// Line 116: range 000000000C63EEFA-000000000C63EF24
void __cdecl ServiceBase::~ServiceBase(ServiceBase *const this)
{
  ServiceBase::~ServiceBase(this);
  operator delete(this, 0x308uLL);
};

// Line 142: range 000000000C63EF26-000000000C63EF37
bool __cdecl ServiceBase::workThreadProc(ServiceBase *const this, uint32_t thread_index)
{
  return 0;
};

// Line 174: range 000000000C63EF38-000000000C63EF61
bool __cdecl ServiceBase::canPushPacket(ServiceBase *const this, uint16_t cmd_id)
{
  return std::atomic<ServiceBase::Status>::operator ServiceBase::Status(&this->status_) == STATUS_RUN;
};

// Line 180: range 000000000C63EF62-000000000C63EF73
void __cdecl ServiceBase::afterPushPacket(
        ServiceBase *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t queue_index)
{
  ;
};

// Line 214: range 000000000C63EF74-000000000C63EF81
void __cdecl ServiceBase::onMonitorReport(ServiceBase *const this, uint32_t thread_index)
{
  ;
};

// Line 217: range 000000000C63EF82-000000000C63EF8F
void __cdecl ServiceBase::onEverySecond(ServiceBase *const this, uint32_t thread_index)
{
  ;
};

// Line 240: range 000000000C63EF90-000000000C63EF9E
int32_t __cdecl ServiceBase::checkExitWorkDone(ServiceBase *const this)
{
  return 0;
};

// Line 243: range 000000000C63EFA0-000000000C63EFB6
bool __cdecl ServiceBase::isNeedPrintCmdLog(ServiceBase *const this, uint32_t cmd_id, bool is_default_process)
{
  return 1;
};

// Line 246: range 000000000C63EFB8-000000000C63F020
std::string *__cdecl ServiceBase::getCustomCmdLogTail[abi:cxx11](std::string *retstr, ServiceBase *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, uri, &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};
