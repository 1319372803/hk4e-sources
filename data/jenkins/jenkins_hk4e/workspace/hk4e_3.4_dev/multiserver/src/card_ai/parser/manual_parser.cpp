// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/parser/manual_parser.cpp

// Line 24: range 000000000E1029F6-000000000E1032CB
std::shared_ptr<BT::BehaviorTree> __cdecl BT::ManualParser::instantiateTree(BT::ManualParser *const this)
{
  const std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false> *v1; // rsi
  unsigned __int64 p_M_end_of_storage; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<BT::BehaviorTree> result; // rax
  BT::BehaviorTree *v6; // rax
  std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<BT::SequenceNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<BT::SequenceNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::allocator<char> __a; // [rsp+1Fh] [rbp-1A1h] BYREF
  std::weak_ptr<BT::TreeNode> child_wtr; // [rsp+20h] [rbp-1A0h] BYREF
  BT::NodeConfigure v14[6]; // [rsp+30h] [rbp-190h] BYREF

  p_M_end_of_storage = (unsigned __int64)&v14[0].data_vec._M_impl._M_end_of_storage;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      p_M_end_of_storage = v3;
  }
  *(_QWORD *)p_M_end_of_storage = 1102416563LL;
  *(_QWORD *)(p_M_end_of_storage + 8) = "7 32 16 11 tree_ptr:30 64 16 17 blackboard_ptr:37 96 16 11 root_ptr:46 128 16 15"
                                        " sequence_ptr:52 160 16 13 child1_ptr:57 192 16 13 child2_ptr:63 224 64 12 configure:44";
  *(_QWORD *)(p_M_end_of_storage + 16) = BT::ManualParser::instantiateTree;
  v4 = (_DWORD *)(p_M_end_of_storage >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862729] = -202116109;
  if ( std::operator==<BT::BehaviorTreeFactory>((const std::shared_ptr<BT::BehaviorTreeFactory> *)v1, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/parser/manual_parser.cpp",
      "instantiateTree",
      27);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      (common::milog::MiLogStream *const)v14,
      (const char (*)[40])"instantiateTree factory_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v14);
    std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
  }
  else
  {
    common::tools::perf::make_shared<BT::BehaviorTree>();
    if ( std::operator==<BT::BehaviorTree>((const std::shared_ptr<BT::BehaviorTree> *)(p_M_end_of_storage + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/parser/manual_parser.cpp",
        "instantiateTree",
        33);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)v14,
        (const char (*)[37])"ManualParser create tree_ptr failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v14);
      std::shared_ptr<BT::BehaviorTree>::shared_ptr(
        (std::shared_ptr<BT::BehaviorTree> *const)this,
        (std::shared_ptr<BT::BehaviorTree> *)(p_M_end_of_storage + 32));
    }
    else
    {
      v6 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
      BT::BehaviorTree::createBlackBoard(v6);
      std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
      BT::BehaviorTree::getBlackBoard((BT::BehaviorTree *const)(p_M_end_of_storage + 64));
      if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(p_M_end_of_storage + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/parser/manual_parser.cpp",
          "instantiateTree",
          40);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)v14,
          (const char (*)[27])"blackboard_ptr is nullptr!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v14);
        std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
      }
      else
      {
        BT::NodeConfigure::NodeConfigure((BT::NodeConfigure *const)(p_M_end_of_storage + 224));
        std::weak_ptr<BT::Blackboard>::operator=<BT::Blackboard>(
          (std::weak_ptr<BT::Blackboard> *const)(p_M_end_of_storage + 224),
          (const std::shared_ptr<BT::Blackboard> *)(p_M_end_of_storage + 64));
        v7 = std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v1);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)v14, "Sequence", &__a);
        BT::BehaviorTreeFactory::createNodeWithinTree(
          (const BT::BehaviorTreeFactory *const)(p_M_end_of_storage + 96),
          (const std::string *)v7,
          v14,
          (const BT::BehaviorTreePtr *)(p_M_end_of_storage + 224));
        std::string::~string(v14);
        std::allocator<char>::~allocator(&__a);
        if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(p_M_end_of_storage + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)v14,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/parser/manual_parser.cpp",
            "instantiateTree",
            49);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)v14,
            (const char (*)[20])"root_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v14);
          std::shared_ptr<BT::BehaviorTree>::shared_ptr(
            (std::shared_ptr<BT::BehaviorTree> *const)this,
            (std::shared_ptr<BT::BehaviorTree> *)(p_M_end_of_storage + 32));
        }
        else
        {
          std::dynamic_pointer_cast<BT::SequenceNode,BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(p_M_end_of_storage + 128));
          if ( std::operator==<BT::SequenceNode>(
                 (const std::shared_ptr<BT::SequenceNode> *)(p_M_end_of_storage + 128),
                 0LL) )
          {
            std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
          }
          else
          {
            v8 = std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v1);
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)v14, "AssignInt32", &__a);
            BT::BehaviorTreeFactory::createNodeWithinTree(
              (const BT::BehaviorTreeFactory *const)(p_M_end_of_storage + 160),
              (const std::string *)v8,
              v14,
              (const BT::BehaviorTreePtr *)(p_M_end_of_storage + 224));
            std::string::~string(v14);
            std::allocator<char>::~allocator(&__a);
            if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(p_M_end_of_storage + 160), 0LL) )
            {
              std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
            }
            else
            {
              v9 = std::__shared_ptr_access<BT::SequenceNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::SequenceNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 128));
              std::weak_ptr<BT::TreeNode>::weak_ptr<BT::TreeNode,void>(
                &child_wtr,
                (const std::shared_ptr<BT::TreeNode> *)(p_M_end_of_storage + 160));
              BT::ControlNode::addChild(v9, &child_wtr);
              std::weak_ptr<BT::TreeNode>::~weak_ptr(&child_wtr);
              v10 = std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v1);
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)v14, "AssignInt32", &__a);
              BT::BehaviorTreeFactory::createNodeWithinTree(
                (const BT::BehaviorTreeFactory *const)(p_M_end_of_storage + 192),
                (const std::string *)v10,
                v14,
                (const BT::BehaviorTreePtr *)(p_M_end_of_storage + 224));
              std::string::~string(v14);
              std::allocator<char>::~allocator(&__a);
              if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(p_M_end_of_storage + 192), 0LL) )
              {
                std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
              }
              else
              {
                v11 = std::__shared_ptr_access<BT::SequenceNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::SequenceNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 128));
                std::weak_ptr<BT::TreeNode>::weak_ptr<BT::TreeNode,void>(
                  &child_wtr,
                  (const std::shared_ptr<BT::TreeNode> *)(p_M_end_of_storage + 192));
                BT::ControlNode::addChild(v11, &child_wtr);
                std::weak_ptr<BT::TreeNode>::~weak_ptr(&child_wtr);
                std::shared_ptr<BT::BehaviorTree>::shared_ptr(
                  (std::shared_ptr<BT::BehaviorTree> *const)this,
                  (std::shared_ptr<BT::BehaviorTree> *)(p_M_end_of_storage + 32));
              }
              std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(p_M_end_of_storage + 192));
            }
            std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(p_M_end_of_storage + 160));
          }
          std::shared_ptr<BT::SequenceNode>::~shared_ptr((std::shared_ptr<BT::SequenceNode> *const)(p_M_end_of_storage
                                                                                                  + 128));
        }
        std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(p_M_end_of_storage + 96));
        BT::NodeConfigure::~NodeConfigure((BT::NodeConfigure *const)(p_M_end_of_storage + 224));
      }
      std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(p_M_end_of_storage + 64));
    }
    std::shared_ptr<BT::BehaviorTree>::~shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)(p_M_end_of_storage + 32));
  }
  if ( &v14[0].data_vec._M_impl._M_end_of_storage == (std::_Vector_base<std::string>::pointer *)p_M_end_of_storage )
  {
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)p_M_end_of_storage = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
