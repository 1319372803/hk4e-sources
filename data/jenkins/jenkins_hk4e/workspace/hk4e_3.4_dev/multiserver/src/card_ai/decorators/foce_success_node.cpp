// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/decorators/foce_success_node.cpp

// Line 21: range 000000000DE8B564-000000000DE8B7A4
BT::NodeStatus __cdecl BT::ForceSuccessNode::tick(BT::ForceSuccessNode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  BT::NodeStatus v4; // r14d
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  BT::NodeStatus result; // eax
  BT::NodeStatus child_status; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 child_ptr:27";
  *(_QWORD *)(v1 + 16) = BT::ForceSuccessNode::tick;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( BT::TreeNode::status(this) == IDLE )
    BT::TreeNode::setStatus(this, RUNNING);
  BT::DecoratorNode::getChild((BT::DecoratorNode *const)(v1 + 32));
  if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/decorators/foce_success_node.cpp",
      "tick",
      30);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v9, (const char (*)[18])"child_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v4 = SUCCESS;
  }
  else
  {
    v5 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_TreeNode + 4);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_TreeNode + 4);
    child_status = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
    if ( child_status == SUCCESS || child_status == FAILURE )
      v4 = SUCCESS;
    else
      v4 = child_status;
  }
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 32));
  result = v4;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
