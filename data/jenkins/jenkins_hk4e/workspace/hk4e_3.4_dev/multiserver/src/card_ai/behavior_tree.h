// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/behavior_tree.h

// Line 68: range 000000000E1D412C-000000000E1D41FA
void __cdecl BT::BehaviorTree::BehaviorTree(BT::BehaviorTree *const this)
{
  std::enable_shared_from_this<BT::BehaviorTree>::enable_shared_from_this(this);
  std::vector<std::shared_ptr<BT::TreeNode>>::vector(&this->nodes_vec_);
  std::shared_ptr<BT::Blackboard>::shared_ptr(&this->blackboard_ptr_);
  std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::function(&this->check_pre_exec_func_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_stack_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_stack_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_stack_id_);
  }
  this->cur_stack_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_guid_);
  }
  this->cur_guid_ = 1;
};

// Line 72: range 000000000E1D41FC-000000000E1D4252
void __cdecl BT::BehaviorTree::~BehaviorTree(BT::BehaviorTree *const this)
{
  BT::BehaviorTree::stop(this);
  std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::~function(&this->check_pre_exec_func_);
  std::shared_ptr<BT::Blackboard>::~shared_ptr(&this->blackboard_ptr_);
  std::vector<std::shared_ptr<BT::TreeNode>>::~vector(&this->nodes_vec_);
  std::enable_shared_from_this<BT::BehaviorTree>::~enable_shared_from_this(this);
};

// Line 84: range 000000000E1D4254-000000000E1D4291
void __cdecl BT::BehaviorTree::createBlackBoard(BT::BehaviorTree *const this)
{
  std::shared_ptr<BT::Blackboard> __r; // [rsp+10h] [rbp-10h] BYREF

  BT::Blackboard::create();
  std::shared_ptr<BT::Blackboard>::operator=(&this->blackboard_ptr_, &__r);
  std::shared_ptr<BT::Blackboard>::~shared_ptr(&__r);
};

// Line 96: range 000000000DF38270-000000000DF38299
void __cdecl BT::BehaviorTree::setCheckPreExecFunc(
        BT::BehaviorTree *const this,
        BT::BehaviorTree::CheckPreExecFuncType *p_func)
{
  std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::operator=(&this->check_pre_exec_func_, p_func);
};

// Line 113: range 000000000E1D4292-000000000E1D4387
uint32_t __cdecl BT::BehaviorTree::genGuid(BT::BehaviorTree *const this)
{
  uint32_t cur_guid; // ebx
  uint32_t result; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_guid_);
  }
  cur_guid = this->cur_guid_;
  if ( cur_guid == std::numeric_limits<unsigned int>::max() )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cur_guid_);
    }
    this->cur_guid_ = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_guid_);
  }
  result = this->cur_guid_;
  this->cur_guid_ = result + 1;
  return result;
};

// Line 124: range 000000000DF3833E-000000000DF3836A
BT::BlackboardPtr __cdecl BT::BehaviorTree::getBlackBoard(BT::BehaviorTree *const this)
{
  __int64 v1; // rsi
  BT::BlackboardPtr result; // rax

  std::shared_ptr<BT::Blackboard>::shared_ptr(
    (std::shared_ptr<BT::Blackboard> *const)this,
    (const std::shared_ptr<BT::Blackboard> *)(v1 + 40));
  result._M_ptr = (std::__shared_ptr<BT::Blackboard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
