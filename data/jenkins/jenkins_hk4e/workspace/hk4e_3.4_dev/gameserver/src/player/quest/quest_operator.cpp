// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/quest_operator.cpp

// Line 19: range 0000000016CDFBE0-0000000016CDFC0D
void __cdecl QuestOperator::tryProcess(QuestOperator *const this)
{
  if ( !QuestOperator::isProcessing(this) )
    QuestOperator::process(this);
};

// Line 27: range 0000000016CDFC0E-0000000016CDFE43
int32_t __cdecl QuestOperator::acceptQuest(QuestOperator *const this, uint32_t quest_id, bool is_force, bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v8; // rax
  QuestOperator::QuestOpArgs *v9; // rdx
  int32_t result; // eax
  QuestOperator::Accept __rhs; // [rsp+2Ch] [rbp-F4h] BYREF
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 8 guard:28 64 96 10 op_args:29";
  *(_QWORD *)(v4 + 16) = QuestOperator::acceptQuest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v4 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v4 + 64));
  *(_DWORD *)(v4 + 64) = 1;
  __rhs.quest_id = quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::Accept>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v4 + 72),
    &__rhs);
  *(_BYTE *)(v4 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v4 + 144) = last_op_index;
  *(_BYTE *)(v4 + 152) = is_force;
  v8 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v4 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v8, v9);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v4 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 42: range 0000000016CDFE44-0000000016CE00B3
int32_t __cdecl QuestOperator::startQuest(
        QuestOperator *const this,
        uint32_t quest_id,
        uint32_t accept_time,
        bool is_front,
        bool is_notify)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v9; // rax
  QuestOperator::QuestOpArgs *v10; // rdx
  int32_t result; // eax
  QuestOperator::Start __rhs; // [rsp+28h] [rbp-F8h] BYREF
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 8 guard:43 64 96 10 op_args:44";
  *(_QWORD *)(v5 + 16) = QuestOperator::startQuest;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v5 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v5 + 64));
  *(_DWORD *)(v5 + 64) = 2;
  __rhs.quest_id = quest_id;
  __rhs.accept_time = accept_time;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::Start>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v5 + 72),
    &__rhs);
  *(_BYTE *)(v5 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v5 + 144) = last_op_index;
  v9 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v5 + 64));
  if ( is_front )
    std::deque<QuestOperator::QuestOpArgs>::emplace_front<QuestOperator::QuestOpArgs>(&this->pending_ops_, v9, v10);
  else
    std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v9, v10);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v5 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v5 + 32));
  result = 0;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 62: range 0000000016CE00B4-0000000016CE02D9
int32_t __cdecl QuestOperator::refreshQuestProgress(QuestOperator *const this, uint32_t quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::RefreshProgress __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 8 guard:63 64 96 10 op_args:64";
  *(_QWORD *)(v3 + 16) = QuestOperator::refreshQuestProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 3;
  __rhs.quest_id = quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::RefreshProgress>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 0000000016CE02DA-0000000016CE0569
int32_t __cdecl QuestOperator::updateQuest(
        QuestOperator *const this,
        uint32_t content_type,
        uint32_t param1,
        uint32_t param2,
        uint32_t param3,
        const std::string *param_str,
        uint32_t up_type,
        uint32_t delta)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v12; // rax
  QuestOperator::QuestOpArgs *v13; // rdx
  int32_t result; // eax
  QuestOperator::Update __rhs; // [rsp+20h] [rbp-130h] BYREF
  char v20[240]; // [rsp+60h] [rbp-F0h] BYREF

  v8 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(192LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 32 16 8 guard:76 64 96 10 op_args:77";
  *(_QWORD *)(v8 + 16) = QuestOperator::updateQuest;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -219021312;
  v10[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v8 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v8 + 64));
  *(_DWORD *)(v8 + 64) = 4;
  __rhs.content_type = content_type;
  __rhs.param1 = param1;
  __rhs.param2 = param2;
  __rhs.param3 = param3;
  std::string::basic_string(&__rhs.param_str, param_str);
  __rhs.up_type = up_type;
  __rhs.delta = delta;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::Update>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v8 + 72),
    &__rhs);
  QuestOperator::Update::~Update(&__rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v8 + 144) = last_op_index;
  v12 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v8 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v12, v13);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v8 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v8 + 32));
  result = 0;
  if ( v20 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 88: range 0000000016CE056A-0000000016CE07A1
int32_t __cdecl QuestOperator::delQuest(
        QuestOperator *const this,
        uint32_t quest_id,
        uint32_t log_remove_type,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v8; // rax
  QuestOperator::QuestOpArgs *v9; // rdx
  int32_t result; // eax
  QuestOperator::Del __rhs; // [rsp+28h] [rbp-F8h] BYREF
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 8 guard:89 64 96 10 op_args:90";
  *(_QWORD *)(v4 + 16) = QuestOperator::delQuest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v4 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v4 + 64));
  *(_DWORD *)(v4 + 64) = 5;
  __rhs.quest_id = quest_id;
  __rhs.log_remove_type = log_remove_type;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::Del>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v4 + 72),
    &__rhs);
  *(_BYTE *)(v4 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v4 + 144) = last_op_index;
  v8 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v4 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v8, v9);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v4 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 102: range 0000000016CE07A2-0000000016CE09C7
int32_t __cdecl QuestOperator::finishQuest(QuestOperator *const this, uint32_t quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::Finish __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:103 64 96 11 op_args:104";
  *(_QWORD *)(v3 + 16) = QuestOperator::finishQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 6;
  __rhs.quest_id = quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::Finish>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 116: range 0000000016CE09C8-0000000016CE0BED
int32_t __cdecl QuestOperator::failQuest(QuestOperator *const this, uint32_t quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::Fail __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:117 64 96 11 op_args:118";
  *(_QWORD *)(v3 + 16) = QuestOperator::failQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 7;
  __rhs.quest_id = quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::Fail>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 130: range 0000000016CE0BEE-0000000016CE0E13
int32_t __cdecl QuestOperator::finishParentQuest(QuestOperator *const this, uint32_t parent_quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::FinishParent __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:131 64 96 11 op_args:132";
  *(_QWORD *)(v3 + 16) = QuestOperator::finishParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 8;
  __rhs.parent_quest_id = parent_quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::FinishParent>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 144: range 0000000016CE0E14-0000000016CE1039
int32_t __cdecl QuestOperator::failParentQuest(QuestOperator *const this, uint32_t parent_quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::FailParent __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:145 64 96 11 op_args:146";
  *(_QWORD *)(v3 + 16) = QuestOperator::failParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 9;
  __rhs.parent_quest_id = parent_quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::FailParent>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 158: range 0000000016CE103A-0000000016CE125F
int32_t __cdecl QuestOperator::cancelParentQuest(QuestOperator *const this, uint32_t parent_quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::CancelParent __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:159 64 96 11 op_args:160";
  *(_QWORD *)(v3 + 16) = QuestOperator::cancelParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 10;
  __rhs.parent_quest_id = parent_quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::CancelParent>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 173: range 0000000016CE1260-0000000016CE1485
int32_t __cdecl QuestOperator::removeParentQuest(QuestOperator *const this, uint32_t parent_quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::RemoveParent __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:174 64 96 11 op_args:175";
  *(_QWORD *)(v3 + 16) = QuestOperator::removeParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 11;
  __rhs.parent_quest_id = parent_quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::RemoveParent>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 185: range 0000000016CE1486-0000000016CE16D5
int32_t __cdecl QuestOperator::rollbackParentQuest(
        QuestOperator *const this,
        uint32_t parent_quest_id,
        uint32_t child_quest_id,
        bool is_move_instant,
        bool is_notify)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v9; // rax
  QuestOperator::QuestOpArgs *v10; // rdx
  int32_t result; // eax
  QuestOperator::RollbackParent __rhs; // [rsp+24h] [rbp-FCh] BYREF
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 9 guard:186 64 96 11 op_args:187";
  *(_QWORD *)(v5 + 16) = QuestOperator::rollbackParentQuest;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v5 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v5 + 64));
  *(_DWORD *)(v5 + 64) = 12;
  __rhs.parent_quest_id = parent_quest_id;
  __rhs.child_quest_id = child_quest_id;
  __rhs.is_move_instant = is_move_instant;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::RollbackParent>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v5 + 72),
    &__rhs);
  *(_BYTE *)(v5 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v5 + 144) = last_op_index;
  v9 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v5 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v9, v10);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v5 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v5 + 32));
  result = 0;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 199: range 0000000016CE16D6-0000000016CE1918
int32_t __cdecl QuestOperator::acceptRandomParentQuest(
        QuestOperator *const this,
        ParentQuestPtr *p_parent_quest_ptr,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  std::shared_ptr<ParentQuest> v11; // [rsp+20h] [rbp-100h] BYREF
  char v12[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:200 64 96 11 op_args:201";
  *(_QWORD *)(v3 + 16) = QuestOperator::acceptRandomParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 13;
  std::shared_ptr<ParentQuest>::shared_ptr(&v11, p_parent_quest_ptr);
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::AcceptRandomParent>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    (QuestOperator::AcceptRandomParent *)&v11);
  QuestOperator::AcceptRandomParent::~AcceptRandomParent((QuestOperator::AcceptRandomParent *const)&v11);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 213: range 0000000016CE191A-0000000016CE1B3F
int32_t __cdecl QuestOperator::unregisterResource(QuestOperator *const this, uint32_t quest_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v7; // rax
  QuestOperator::QuestOpArgs *v8; // rdx
  int32_t result; // eax
  QuestOperator::UnregisterResource __rhs; // [rsp+1Ch] [rbp-F4h] BYREF
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 guard:214 64 96 11 op_args:215";
  *(_QWORD *)(v3 + 16) = QuestOperator::unregisterResource;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  *(_DWORD *)(v3 + 64) = 14;
  __rhs.quest_id = quest_id;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::UnregisterResource>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v3 + 72),
    &__rhs);
  *(_BYTE *)(v3 + 136) = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v3 + 144) = last_op_index;
  v7 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v3 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v7, v8);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v3 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 225: range 0000000016CE1B40-0000000016CE1DAE
int32_t __cdecl QuestOperator::notifyOccupiedQuest(
        QuestOperator *const this,
        uint32_t quest_id,
        const std::vector<unsigned int> *exclusive_npc_id_vec,
        const std::vector<unsigned int> *exclusive_place_id_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v8; // rax
  QuestOperator::QuestOpArgs *v9; // rdx
  int32_t result; // eax
  QuestOperator::NotifyOccupiedQuest __rhs; // [rsp+20h] [rbp-130h] BYREF
  char v14[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 9 guard:226 64 96 11 op_args:227";
  *(_QWORD *)(v4 + 16) = QuestOperator::notifyOccupiedQuest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v4 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v4 + 64));
  *(_DWORD *)(v4 + 64) = 16;
  __rhs.quest_id = quest_id;
  std::vector<unsigned int>::vector(&__rhs.exclusive_npc_id_vec, exclusive_npc_id_vec);
  std::vector<unsigned int>::vector(&__rhs.exclusive_place_id_vec, exclusive_place_id_vec);
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::operator=<QuestOperator::NotifyOccupiedQuest>(
    (std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *const)(v4 + 72),
    &__rhs);
  QuestOperator::NotifyOccupiedQuest::~NotifyOccupiedQuest(&__rhs);
  *(_BYTE *)(v4 + 136) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v4 + 144) = last_op_index;
  v8 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v4 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v8, v9);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v4 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 238: range 0000000016CE1DB0-0000000016CE1F99
int32_t __cdecl QuestOperator::clearLastDungeonSettleMap(QuestOperator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint64_t last_op_index; // rax
  QuestOperator::QuestOpArgs *v5; // rax
  QuestOperator::QuestOpArgs *v6; // rdx
  int32_t result; // eax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 9 guard:239 64 96 11 op_args:240";
  *(_QWORD *)(v1 + 16) = QuestOperator::clearLastDungeonSettleMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862725] = -202116109;
  QuestOperatorGuard::QuestOperatorGuard((QuestOperatorGuard *const)(v1 + 32), this);
  QuestOperator::QuestOpArgs::QuestOpArgs((QuestOperator::QuestOpArgs *const)(v1 + 64));
  *(_DWORD *)(v1 + 64) = 15;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_op_index_);
  last_op_index = this->last_op_index_;
  this->last_op_index_ = last_op_index + 1;
  *(_QWORD *)(v1 + 144) = last_op_index;
  v5 = std::move<QuestOperator::QuestOpArgs &>((QuestOperator::QuestOpArgs *)(v1 + 64));
  std::deque<QuestOperator::QuestOpArgs>::emplace_back<QuestOperator::QuestOpArgs>(&this->pending_ops_, v5, v6);
  QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v1 + 64));
  QuestOperatorGuard::~QuestOperatorGuard((QuestOperatorGuard *const)(v1 + 32));
  result = 0;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 250: range 0000000016CE1F9A-0000000016CE44EB
void __cdecl QuestOperator::process(QuestOperator *const this)
{
  const char *quest_id; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // r14
  PlayerQuestComp *quest_comp; // rdi
  __int8 v8; // cl
  __int8 v9; // si
  __int8 v10; // dl
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerQuestComp *v14; // rcx
  char v15; // si
  bool v16; // dl
  PlayerQuestComp *v17; // rcx
  char v18; // si
  bool v19; // dl
  PlayerQuestComp *p_delta; // rdi
  uint32_t delta; // r9d
  uint32_t up_type; // r8d
  std::string *p_param_str; // r14
  uint32_t param3; // r10d
  uint32_t param2; // ecx
  uint32_t param1; // edx
  PlayerQuestComp *p_log_remove_type; // rdi
  __int8 v28; // cl
  uint32_t log_remove_type; // esi
  __int32 v30; // edx
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  PlayerQuestComp *v34; // rcx
  char v35; // si
  bool v36; // dl
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  PlayerQuestComp *v40; // rcx
  char v41; // si
  bool v42; // dl
  common::milog::MiLogStream *v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  PlayerQuestComp *v46; // rcx
  char v47; // si
  bool v48; // dl
  common::milog::MiLogStream *v49; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  PlayerQuestComp *v52; // rcx
  char v53; // si
  bool v54; // dl
  common::milog::MiLogStream *v55; // r14
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  PlayerQuestComp *v58; // rcx
  char v59; // si
  bool v60; // dl
  common::milog::MiLogStream *v61; // r14
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  PlayerQuestComp *v64; // rcx
  char v65; // si
  bool v66; // dl
  PlayerQuestComp *p_is_move_instant; // rdi
  __int8 v68; // r8
  __int8 is_move_instant; // cl
  uint32_t child_quest_id; // esi
  uint32_t v71; // edx
  common::milog::MiLogStream *v72; // r14
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  PlayerQuestComp *v75; // r14
  char v76; // r15
  PlayerQuestComp *v77; // rcx
  char v78; // si
  bool v79; // dl
  PlayerQuestComp *v80; // rdi
  std::vector<unsigned int> *p_exclusive_place_id_vec; // rcx
  std::vector<unsigned int> *p_exclusive_npc_id_vec; // rsi
  const std::vector<unsigned int> *v83; // rdx
  unsigned int val; // [rsp+10h] [rbp-190h] BYREF
  uint32_t count_num; // [rsp+14h] [rbp-18Ch]
  const QuestOperator::NotifyOccupiedQuest *notify_occupied_quest; // [rsp+20h] [rbp-180h]
  const QuestOperator::UnregisterResource *unregister_resource; // [rsp+28h] [rbp-178h]
  const QuestOperator::AcceptRandomParent *accept_random_parent; // [rsp+30h] [rbp-170h]
  const QuestOperator::RollbackParent *rollback_parent; // [rsp+38h] [rbp-168h]
  const QuestOperator::RemoveParent *args; // [rsp+40h] [rbp-160h]
  const QuestOperator::CancelParent *cancel_parent; // [rsp+48h] [rbp-158h]
  const QuestOperator::FailParent *fail_parent; // [rsp+50h] [rbp-150h]
  const QuestOperator::FinishParent *finish_parent; // [rsp+58h] [rbp-148h]
  const QuestOperator::Fail *fail; // [rsp+60h] [rbp-140h]
  const QuestOperator::Finish *finish; // [rsp+68h] [rbp-138h]
  const QuestOperator::Del *del; // [rsp+70h] [rbp-130h]
  const QuestOperator::Update *update; // [rsp+78h] [rbp-128h]
  const QuestOperator::RefreshProgress *refresh; // [rsp+80h] [rbp-120h]
  const QuestOperator::Start *start; // [rsp+88h] [rbp-118h]
  const QuestOperator::Accept *accept; // [rsp+90h] [rbp-110h]
  std::shared_ptr<ParentQuest> p_parent_quest_ptr; // [rsp+A0h] [rbp-100h] BYREF
  common::milog::MiLogStream v103; // [rsp+B0h] [rbp-F0h] BYREF
  char v104[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v104;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 11 op_args:262";
  *(_QWORD *)(v2 + 16) = QuestOperator::process;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( QuestOperator::isProcessing(this) )
  {
    common::milog::MiLogStream::create(
      &v103,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/quest_operator.cpp",
      "process",
      253);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v103,
           (const char (*)[39])"[QuestOperator] process is doing, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = PlayerQuestComp::getUid(this->quest_comp_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v103);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_processing_, quest_id, &this->is_processing_);
    this->is_processing_ = 1;
    count_num = 0;
    while ( !std::deque<QuestOperator::QuestOpArgs>::empty(&this->pending_ops_) )
    {
      quest_id = (const char *)std::deque<QuestOperator::QuestOpArgs>::front(&this->pending_ops_);
      QuestOperator::QuestOpArgs::QuestOpArgs(
        (QuestOperator::QuestOpArgs *const)(v2 + 32),
        (const QuestOperator::QuestOpArgs *)quest_id);
      std::deque<QuestOperator::QuestOpArgs>::pop_front(&this->pending_ops_);
      if ( count_num > 0xF4240 )
      {
        common::milog::MiLogStream::create(
          &v103,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest_operator.cpp",
          "process",
          266);
        common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(&v103, (const char (*)[60])byte_25F30E60);
        common::milog::MiLogStream::~MiLogStream(&v103);
        __asan_handle_no_return();
        __assert_fail("false", "./src/player/quest/quest_operator.cpp", 0x10Cu, "void QuestOperator::process()");
      }
      ++count_num;
      switch ( *(_DWORD *)(v2 + 32) )
      {
        case 1:
          if ( !std::holds_alternative<QuestOperator::Accept,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              282);
            v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                   &v103,
                   (const char (*)[49])"[QuestOperator] op_type accept, not accept, uid:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            goto LABEL_174;
          }
          accept = std::get<QuestOperator::Accept,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          quest_comp = this->quest_comp_;
          v8 = *(_BYTE *)(v2 + 104);
          v9 = *(_BYTE *)(v2 + 120);
          if ( *(_BYTE *)(((unsigned __int64)accept >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)accept & 7) + 3) >= *(_BYTE *)(((unsigned __int64)accept >> 3) + 0x7FFF8000) )
          {
            quest_comp = (PlayerQuestComp *)accept;
            __asan_report_load4(accept);
          }
          v10 = v9;
          quest_id = (const char *)accept->quest_id;
          if ( (unsigned int)PlayerQuestComp::internalAcceptQuest(quest_comp, (__int32)quest_id, v10, v8) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              288);
            v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v103,
                    (const char (*)[40])"[QuestOperator] accetQuest failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            val = PlayerQuestComp::getUid(this->quest_comp_);
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" quest_id:");
            quest_id = (const char *)accept;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &accept->quest_id);
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          break;
        case 2:
          if ( !std::holds_alternative<QuestOperator::Start,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              296);
            quest_id = "[QuestOperator] op_type start, not start";
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v103,
              (const char (*)[41])"[QuestOperator] op_type start, not start");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            start = std::get<QuestOperator::Start,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v14 = this->quest_comp_;
            v15 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)start & 7) + 3) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(start);
            }
            v16 = v15;
            quest_id = (const char *)start->quest_id;
            PlayerQuestComp::internalStartQuest(v14, (uint32_t)quest_id, v16);
          }
          break;
        case 3:
          if ( !std::holds_alternative<QuestOperator::RefreshProgress,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              307);
            quest_id = "[QuestOperator] op_type refreshg progress, not refreshg progress";
            common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v103,
              (const char (*)[65])"[QuestOperator] op_type refreshg progress, not refreshg progress");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            refresh = std::get<QuestOperator::RefreshProgress,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v17 = this->quest_comp_;
            v18 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)refresh >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)refresh & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(refresh);
            }
            v19 = v18;
            quest_id = (const char *)refresh->quest_id;
            PlayerQuestComp::internalRefreshQuestProgress(v17, (uint32_t)quest_id, v19);
          }
          break;
        case 4:
          if ( !std::holds_alternative<QuestOperator::Update,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              318);
            quest_id = "[QuestOperator] op_type update, not update";
            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v103,
              (const char (*)[43])"[QuestOperator] op_type update, not update");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            update = std::get<QuestOperator::Update,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            p_delta = this->quest_comp_;
            if ( *(_BYTE *)(((unsigned __int64)&update->delta >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)update + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&update->delta >> 3)
                                                                    + 0x7FFF8000) )
            {
              p_delta = (PlayerQuestComp *)&update->delta;
              __asan_report_load4(&update->delta);
            }
            delta = update->delta;
            if ( *(_BYTE *)(((unsigned __int64)&update->up_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&update->up_type >> 3) + 0x7FFF8000) <= 3 )
            {
              p_delta = (PlayerQuestComp *)&update->up_type;
              __asan_report_load4(&update->up_type);
            }
            up_type = update->up_type;
            p_param_str = &update->param_str;
            if ( *(_BYTE *)(((unsigned __int64)&update->param3 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)update + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&update->param3 >> 3)
                                                                    + 0x7FFF8000) )
            {
              p_delta = (PlayerQuestComp *)&update->param3;
              __asan_report_load4(&update->param3);
            }
            param3 = update->param3;
            if ( *(_BYTE *)(((unsigned __int64)&update->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&update->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              p_delta = (PlayerQuestComp *)&update->param2;
              __asan_report_load4(&update->param2);
            }
            param2 = update->param2;
            if ( *(_BYTE *)(((unsigned __int64)&update->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)update + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&update->param1 >> 3)
                                                                   + 0x7FFF8000) )
            {
              p_delta = (PlayerQuestComp *)&update->param1;
              __asan_report_load4(&update->param1);
            }
            param1 = update->param1;
            if ( *(_BYTE *)(((unsigned __int64)update >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)update >> 3) + 0x7FFF8000) <= 3 )
            {
              p_delta = (PlayerQuestComp *)update;
              __asan_report_load4(update);
            }
            quest_id = (const char *)update->content_type;
            PlayerQuestComp::internalUpdateQuestContentProgress(
              p_delta,
              (data::QuestContentType)quest_id,
              param1,
              param2,
              param3,
              p_param_str,
              up_type,
              delta);
          }
          break;
        case 5:
          if ( !std::holds_alternative<QuestOperator::Del,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              330);
            quest_id = "[QuestOperator] op_type del, not del";
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v103,
              (const char (*)[37])"[QuestOperator] op_type del, not del");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            del = std::get<QuestOperator::Del,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            p_log_remove_type = this->quest_comp_;
            v28 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)&del->log_remove_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)del + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&del->log_remove_type >> 3)
                                                                + 0x7FFF8000) )
            {
              p_log_remove_type = (PlayerQuestComp *)&del->log_remove_type;
              __asan_report_load4(&del->log_remove_type);
            }
            log_remove_type = del->log_remove_type;
            if ( *(_BYTE *)(((unsigned __int64)del >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)del & 7) + 3) >= *(_BYTE *)(((unsigned __int64)del >> 3) + 0x7FFF8000) )
            {
              p_log_remove_type = (PlayerQuestComp *)del;
              __asan_report_load4(del);
            }
            v30 = log_remove_type;
            quest_id = (const char *)del->quest_id;
            if ( (unsigned int)PlayerQuestComp::internalRemoveQuest(p_log_remove_type, (__int32)quest_id, v30, v28) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                336);
              v31 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v103,
                      (const char (*)[41])"[QuestOperator] removeQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
              v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v32,
                      (const char (*)[11])" quest_id:");
              quest_id = (const char *)del;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)del);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 6:
          if ( !std::holds_alternative<QuestOperator::Finish,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              344);
            quest_id = "[QuestOperator] op_type finish, not finish";
            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v103,
              (const char (*)[43])"[QuestOperator] op_type finish, not finish");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            finish = std::get<QuestOperator::Finish,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v34 = this->quest_comp_;
            v35 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)finish >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)finish & 7) + 3) >= *(_BYTE *)(((unsigned __int64)finish >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(finish);
            }
            v36 = v35;
            quest_id = (const char *)finish->quest_id;
            if ( (unsigned int)PlayerQuestComp::internalFinishQuest(v34, (uint32_t)quest_id, v36) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                350);
              v37 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v103,
                      (const char (*)[41])"[QuestOperator] finishQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
              v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v38,
                      (const char (*)[11])" quest_id:");
              quest_id = (const char *)finish;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &finish->quest_id);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 7:
          if ( !std::holds_alternative<QuestOperator::Fail,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              358);
            quest_id = "[QuestOperator] op_type del, not del";
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v103,
              (const char (*)[37])"[QuestOperator] op_type del, not del");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            fail = std::get<QuestOperator::Fail,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v40 = this->quest_comp_;
            v41 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)fail >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)fail & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fail >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(fail);
            }
            v42 = v41;
            quest_id = (const char *)fail->quest_id;
            if ( (unsigned int)PlayerQuestComp::internalFailQuest(v40, (uint32_t)quest_id, v42) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                364);
              v43 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v103,
                      (const char (*)[39])"[QuestOperator] failQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
              v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v44,
                      (const char (*)[11])" quest_id:");
              quest_id = (const char *)fail;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &fail->quest_id);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 8:
          if ( !std::holds_alternative<QuestOperator::FinishParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              372);
            quest_id = "[QuestOperator] op_type finish_parent, not finish_parent";
            common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v103,
              (const char (*)[57])"[QuestOperator] op_type finish_parent, not finish_parent");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            finish_parent = std::get<QuestOperator::FinishParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v46 = this->quest_comp_;
            v47 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)finish_parent >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)finish_parent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)finish_parent >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(finish_parent);
            }
            v48 = v47;
            quest_id = (const char *)finish_parent->parent_quest_id;
            if ( (unsigned int)PlayerQuestComp::internalFinishParentQuest(v46, (uint32_t)quest_id, v48) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                378);
              v49 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v103,
                      (const char (*)[47])"[QuestOperator] finishParentQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &val);
              v51 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v50,
                      (const char (*)[18])" parent_quest_id:");
              quest_id = (const char *)finish_parent;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v51,
                &finish_parent->parent_quest_id);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 9:
          if ( !std::holds_alternative<QuestOperator::FailParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              386);
            quest_id = "[QuestOperator] op_type fail_parent, not fail_parent";
            common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v103,
              (const char (*)[53])"[QuestOperator] op_type fail_parent, not fail_parent");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            fail_parent = std::get<QuestOperator::FailParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v52 = this->quest_comp_;
            v53 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)fail_parent >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)fail_parent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fail_parent >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(fail_parent);
            }
            v54 = v53;
            quest_id = (const char *)fail_parent->parent_quest_id;
            if ( (unsigned int)PlayerQuestComp::internalFailParentQuest(v52, (uint32_t)quest_id, v54) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                392);
              v55 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v103,
                      (const char (*)[45])"[QuestOperator] failParentQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &val);
              v57 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v56,
                      (const char (*)[18])" parent_quest_id:");
              quest_id = (const char *)fail_parent;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &fail_parent->parent_quest_id);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 0xA:
          if ( !std::holds_alternative<QuestOperator::CancelParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              400);
            quest_id = "[QuestOperator] op_type cancel_parent, not cancel_parent";
            common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v103,
              (const char (*)[57])"[QuestOperator] op_type cancel_parent, not cancel_parent");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            cancel_parent = std::get<QuestOperator::CancelParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v58 = this->quest_comp_;
            v59 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)cancel_parent >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)cancel_parent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cancel_parent >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(cancel_parent);
            }
            v60 = v59;
            quest_id = (const char *)cancel_parent->parent_quest_id;
            if ( (unsigned int)PlayerQuestComp::internalCancelParentQuest(v58, (uint32_t)quest_id, v60) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                406);
              v61 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v103,
                      (const char (*)[47])"[QuestOperator] cancelParentQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &val);
              v63 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v62,
                      (const char (*)[18])" parent_quest_id:");
              quest_id = (const char *)cancel_parent;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v63,
                &cancel_parent->parent_quest_id);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 0xB:
          if ( !std::holds_alternative<QuestOperator::RemoveParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              414);
            quest_id = "[QuestOperator] op_type RemoveParent, not RemoveParent";
            common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v103,
              (const char (*)[55])"[QuestOperator] op_type RemoveParent, not RemoveParent");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            args = std::get<QuestOperator::RemoveParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v64 = this->quest_comp_;
            v65 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)args >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)args & 7) + 3) >= *(_BYTE *)(((unsigned __int64)args >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(args);
            }
            v66 = v65;
            quest_id = (const char *)args->parent_quest_id;
            if ( (unsigned int)PlayerQuestComp::internalRemoveParentQuest(v64, (uint32_t)quest_id, v66) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                420);
              v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                     &v103,
                     (const char (*)[42])"[QuestOperator] RemoveParent failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              goto LABEL_174;
            }
          }
          break;
        case 0xC:
          if ( !std::holds_alternative<QuestOperator::RollbackParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              428);
            quest_id = "[QuestOperator] op_type rollback_parent, not rollback_parent";
            common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v103,
              (const char (*)[61])"[QuestOperator] op_type rollback_parent, not rollback_parent");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            rollback_parent = std::get<QuestOperator::RollbackParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            p_is_move_instant = this->quest_comp_;
            v68 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)&rollback_parent->is_move_instant >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)rollback_parent + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&rollback_parent->is_move_instant >> 3)
                                                                          + 0x7FFF8000) )
            {
              p_is_move_instant = (PlayerQuestComp *)&rollback_parent->is_move_instant;
              __asan_report_load1(&rollback_parent->is_move_instant);
            }
            is_move_instant = rollback_parent->is_move_instant;
            if ( *(_BYTE *)(((unsigned __int64)&rollback_parent->child_quest_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)rollback_parent + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rollback_parent->child_quest_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              p_is_move_instant = (PlayerQuestComp *)&rollback_parent->child_quest_id;
              __asan_report_load4(&rollback_parent->child_quest_id);
            }
            child_quest_id = rollback_parent->child_quest_id;
            if ( *(_BYTE *)(((unsigned __int64)rollback_parent >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)rollback_parent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rollback_parent >> 3)
                                                                                + 0x7FFF8000) )
            {
              p_is_move_instant = (PlayerQuestComp *)rollback_parent;
              __asan_report_load4(rollback_parent);
            }
            v71 = child_quest_id;
            quest_id = (const char *)rollback_parent->parent_quest_id;
            if ( (unsigned int)PlayerQuestComp::internalRollbackParentQuest(
                                 p_is_move_instant,
                                 (uint32_t)quest_id,
                                 v71,
                                 is_move_instant,
                                 v68) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                434);
              v72 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v103,
                      (const char (*)[49])"[QuestOperator] rollbackParentQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              val = PlayerQuestComp::getUid(this->quest_comp_);
              v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &val);
              v74 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v73,
                      (const char (*)[18])" parent_quest_id:");
              quest_id = (const char *)rollback_parent;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v74,
                &rollback_parent->parent_quest_id);
              common::milog::MiLogStream::~MiLogStream(&v103);
            }
          }
          break;
        case 0xD:
          if ( !std::holds_alternative<QuestOperator::AcceptRandomParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              442);
            quest_id = "[QuestOperator] op_type accept_random_parent, not accept_random_parent";
            common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
              &v103,
              (const char (*)[71])"[QuestOperator] op_type accept_random_parent, not accept_random_parent");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            accept_random_parent = std::get<QuestOperator::AcceptRandomParent,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v75 = this->quest_comp_;
            v76 = *(_BYTE *)(v2 + 104);
            std::shared_ptr<ParentQuest>::shared_ptr(&p_parent_quest_ptr, &accept_random_parent->parent_quest_ptr);
            quest_id = (const char *)&p_parent_quest_ptr;
            LOBYTE(v75) = PlayerQuestComp::internalAcceptRandomParentQuest(v75, &p_parent_quest_ptr, v76) != 0;
            std::shared_ptr<ParentQuest>::~shared_ptr(&p_parent_quest_ptr);
            if ( (_BYTE)v75 )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                448);
              v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                     &v103,
                     (const char (*)[53])"[QuestOperator] acceptRandomParentQuest failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              goto LABEL_174;
            }
          }
          break;
        case 0xE:
          if ( !std::holds_alternative<QuestOperator::UnregisterResource,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              456);
            quest_id = "[QuestOperator] op_type unregister_resource, not unregister_resource";
            common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v103,
              (const char (*)[69])"[QuestOperator] op_type unregister_resource, not unregister_resource");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            unregister_resource = std::get<QuestOperator::UnregisterResource,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v77 = this->quest_comp_;
            v78 = *(_BYTE *)(v2 + 104);
            if ( *(_BYTE *)(((unsigned __int64)unregister_resource >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unregister_resource & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unregister_resource >> 3)
                                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(unregister_resource);
            }
            v79 = v78;
            quest_id = (const char *)unregister_resource->quest_id;
            if ( (unsigned int)PlayerQuestComp::internalUnregisterResource(v77, (uint32_t)quest_id, v79) )
            {
              common::milog::MiLogStream::create(
                &v103,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/quest_operator.cpp",
                "process",
                462);
              v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                     &v103,
                     (const char (*)[48])"[QuestOperator] UnregisterResource failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              goto LABEL_174;
            }
          }
          break;
        case 0xF:
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          PlayerQuestComp::internalClearLastDungeonSettleMap(this->quest_comp_);
          break;
        case 0x10:
          if ( !std::holds_alternative<QuestOperator::NotifyOccupiedQuest,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((const std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40)) )
          {
            common::milog::MiLogStream::create(
              &v103,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest_operator.cpp",
              "process",
              475);
            quest_id = "[QuestOperator] op_type NotifyOccupiedQuest, not NotifyOccupiedQuest";
            common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v103,
              (const char (*)[69])"[QuestOperator] op_type NotifyOccupiedQuest, not NotifyOccupiedQuest");
            common::milog::MiLogStream::~MiLogStream(&v103);
          }
          else
          {
            notify_occupied_quest = std::get<QuestOperator::NotifyOccupiedQuest,QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>((std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *)(v2 + 40));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v80 = this->quest_comp_;
            p_exclusive_place_id_vec = &notify_occupied_quest->exclusive_place_id_vec;
            p_exclusive_npc_id_vec = &notify_occupied_quest->exclusive_npc_id_vec;
            if ( *(_BYTE *)(((unsigned __int64)notify_occupied_quest >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)notify_occupied_quest >> 3) + 0x7FFF8000) <= 3 )
            {
              v80 = (PlayerQuestComp *)notify_occupied_quest;
              __asan_report_load4(notify_occupied_quest);
            }
            v83 = p_exclusive_npc_id_vec;
            quest_id = (const char *)notify_occupied_quest->quest_id;
            PlayerQuestComp::internalNotifyOccupiedQuest(v80, (uint32_t)quest_id, v83, p_exclusive_place_id_vec);
          }
          break;
        default:
          common::milog::MiLogStream::create(
            &v103,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/quest_operator.cpp",
            "process",
            484);
          v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                 &v103,
                 (const char (*)[38])"[QuestOperator] unknown op_type, uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
LABEL_174:
          val = PlayerQuestComp::getUid(this->quest_comp_);
          quest_id = (const char *)&val;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
          common::milog::MiLogStream::~MiLogStream(&v103);
          break;
      }
      QuestOperator::QuestOpArgs::~QuestOpArgs((QuestOperator::QuestOpArgs *const)(v2 + 32));
    }
    if ( *(char *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_processing_, quest_id, &this->is_processing_);
    this->is_processing_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    PlayerQuestComp::afterQuestOpProcessed(this->quest_comp_);
  }
  if ( v104 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 501: range 0000000016CE44EC-0000000016CE45EC
void __cdecl QuestOperatorGuard::QuestOperatorGuard(QuestOperatorGuard *const this, QuestOperator *op)
{
  QuestOperator *v2; // rax
  __int64 v3; // rax
  char v4; // dl
  _BOOL8 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, op);
  this->op_ = op;
  if ( *(char *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ_, op, &this->is_succ_);
  this->is_succ_ = 0;
  v2 = this->op_;
  if ( *(char *)(((unsigned __int64)&this->op_->is_guarded_ >> 3) + 0x7FFF8000) < 0 )
    v2 = (QuestOperator *)__asan_report_load1(&this->op_->is_guarded_);
  if ( !v2->is_guarded_ )
  {
    v3 = (__int64)this->op_;
    v4 = *(_BYTE *)(((unsigned __int64)&this->op_->is_guarded_ >> 3) + 0x7FFF8000);
    LOBYTE(op) = v4 != 0;
    v5 = v4 < 0;
    if ( v5 )
      v3 = __asan_report_store1(&this->op_->is_guarded_, op, v5);
    *(_BYTE *)(v3 + 24) = 1;
    this->is_succ_ = 1;
  }
};

// Line 511: range 0000000016CE45EE-0000000016CE46CC
void __cdecl QuestOperatorGuard::~QuestOperatorGuard(QuestOperatorGuard *const this)
{
  __int64 v1; // rsi
  __int64 op; // rax
  char v3; // dl
  _BOOL8 v4; // rdx

  if ( *(char *)(((unsigned __int64)&this->is_succ_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_succ_);
  if ( this->is_succ_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    QuestOperator::tryProcess(this->op_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    op = (__int64)this->op_;
    v3 = *(_BYTE *)(((unsigned __int64)&this->op_->is_guarded_ >> 3) + 0x7FFF8000);
    LOBYTE(v1) = v3 != 0;
    v4 = v3 < 0;
    if ( v4 )
      op = __asan_report_store1(&this->op_->is_guarded_, v1, v4);
    *(_BYTE *)(op + 24) = 0;
  }
};
