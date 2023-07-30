// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/misc/test_player_log_mgr.h

// Line 19: range 000000000CD5BDB8-000000000CD5BEDC
MessageLog *__cdecl MessageLog::operator=(MessageLog *const this, const MessageLog *a2)
{
  uint32_t uid; // ecx
  uint16_t cmd_id; // cx

  std::shared_ptr<google::protobuf::Message>::operator=(&this->message_ptr, &a2->message_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->uid);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = uid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cmd_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&a2->cmd_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&a2->cmd_id);
  }
  cmd_id = a2->cmd_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->cmd_id);
  }
  this->cmd_id = cmd_id;
  return this;
};

// Line 19: range 000000000CF4328A-000000000CF433AB
void __cdecl MessageLog::MessageLog(MessageLog *const this, MessageLog *a2)
{
  uint32_t uid; // ecx
  uint16_t cmd_id; // cx

  std::shared_ptr<google::protobuf::Message>::shared_ptr(&this->message_ptr, &a2->message_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->uid);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = uid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cmd_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&a2->cmd_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&a2->cmd_id);
  }
  cmd_id = a2->cmd_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->cmd_id);
  }
  this->cmd_id = cmd_id;
};

// Line 19: range 000000000CD5BCF0-000000000CD5BD0A
void __cdecl MessageLog::~MessageLog(MessageLog *const this)
{
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&this->message_ptr);
};

// Line 21: range 000000000CD563B8-000000000CD56455
void __cdecl MessageLog::MessageLog(MessageLog *const this)
{
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&this->message_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->cmd_id);
  }
  this->cmd_id = 0;
};

// Line 22: range 000000000CD56456-000000000CD56516
void __cdecl MessageLog::MessageLog(MessageLog *const this, MessagePtr *p_message_ptr, uint32_t uid, uint16_t cmd_id)
{
  std::shared_ptr<google::protobuf::Message> *v4; // rax

  v4 = std::move<std::shared_ptr<google::protobuf::Message> &>(p_message_ptr);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&this->message_ptr, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->cmd_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->cmd_id);
  }
  this->cmd_id = cmd_id;
};

// Line 29: range 000000000CD7BBF2-000000000CD7BC38
void __cdecl TestPlayerLogMgr::TestPlayerLogMgr(TestPlayerLogMgr *const this)
{
  common::tools::SafeQueue<MessageLog>::SafeQueue(&this->packet_log_queue_, 0x1388u);
  std::thread::thread(&this->work_thread_);
  std::atomic<bool>::atomic(&this->is_run_, 0);
};

// Line 29: range 000000000CD7BC3A-000000000CD7BC64
void __cdecl TestPlayerLogMgr::~TestPlayerLogMgr(TestPlayerLogMgr *const this)
{
  std::thread::~thread(&this->work_thread_);
  common::tools::SafeQueue<MessageLog>::~SafeQueue(&this->packet_log_queue_);
};
