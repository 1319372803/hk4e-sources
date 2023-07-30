// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/decorators/subtree_node.cpp

// Line 22: range 000000000E10069C-000000000E1008B5
BT::NodeStatus __cdecl BT::SubtreeNode::tick(BT::SubtreeNode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  BT::NodeStatus v4; // r14d
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  BT::NodeStatus result; // eax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 child_ptr:28";
  *(_QWORD *)(v1 + 16) = BT::SubtreeNode::tick;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( BT::TreeNode::status(this) == IDLE )
    BT::TreeNode::setStatus(this, RUNNING);
  BT::DecoratorNode::getChild((BT::DecoratorNode *const)(v1 + 32));
  if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/decorators/subtree_node.cpp",
      "tick",
      31);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"child_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v4 = FAILURE;
  }
  else
  {
    v5 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_TreeNode + 4);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_TreeNode + 4);
    v4 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
  }
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 32));
  result = v4;
  if ( v9 == (char *)v1 )
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
