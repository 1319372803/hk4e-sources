// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/behavior_tree.cpp

// Line 54: range 000000000D7CDBE0-000000000D7CDE7A
std::size_t __fastcall BT::getTreePrintPrefixByLevel(int32_t level)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::size_t result; // rax
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  std::string_view v8; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 level:53 64 8 11 map_iter:67";
  *(_QWORD *)(v1 + 16) = BT::getTreePrintPrefixByLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  *(_DWORD *)(v1 + 48) = level;
  if ( std::unordered_map<int,std::string>::count(
         &BT::LEVEL_PREFIX_MAP,
         (const std::unordered_map<int,std::string>::key_type *)(v1 + 48)) )
  {
    *(std::unordered_map<int,std::string>::const_iterator *)(v1 + 64) = std::unordered_map<int,std::string>::find(
                                                                          &BT::LEVEL_PREFIX_MAP,
                                                                          (const std::unordered_map<int,std::string>::key_type *)(v1 + 48));
    __y._M_cur = std::unordered_map<int,std::string>::end(&BT::LEVEL_PREFIX_MAP)._M_cur;
    if ( std::__detail::operator==<std::pair<int const,std::string>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false> *)(v1 + 64),
           &__y) )
    {
LABEL_6:
      std::string_view::basic_string_view(&v8, _str);
      result = v8._M_len;
      goto LABEL_10;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/behavior_tree.cpp",
      "getTreePrintPrefixByLevel",
      66);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v9,
           (const char (*)[27])"level is too large, level:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    *(std::unordered_map<int,std::string>::const_iterator *)(v1 + 64) = std::unordered_map<int,std::string>::find(
                                                                          &BT::LEVEL_PREFIX_MAP,
                                                                          &BT::TREE_PRINT_DEFAULT_PREFIX_LEVEL);
    __y._M_cur = std::unordered_map<int,std::string>::end(&BT::LEVEL_PREFIX_MAP)._M_cur;
    if ( std::__detail::operator==<std::pair<int const,std::string>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false> *)(v1 + 64),
           &__y) )
    {
      goto LABEL_6;
    }
  }
  v6 = std::__detail::_Node_const_iterator<std::pair<int const,std::string>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *const)(v1 + 64));
  result = std::string::operator std::string_view(&v6->second);
LABEL_10:
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 77: range 000000000D7CDE7B-000000000D7CE44D
void __cdecl BT::applyRecursiveVisitor(
        const BT::TreeNode *root_node_ptr,
        const BT::VisitorNodeCallback *visitor,
        int32_t level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  size_t v6; // r14
  std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  const BT::ControlNode *control_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 child_index:92 64 16 13 child_ptr:113";
  *(_QWORD *)(v3 + 16) = BT::applyRecursiveVisitor;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( root_node_ptr )
  {
    std::function<void ()(BT::TreeNode const*,int)>::operator()(visitor, root_node_ptr, level);
    if ( __dynamic_cast(
           root_node_ptr,
           (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
           (const struct __class_type_info *)&`typeinfo for'BT::ControlNode,
           0LL) )
    {
      control_ptr = (const BT::ControlNode *)__dynamic_cast(
                                               root_node_ptr,
                                               (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
                                               (const struct __class_type_info *)&`typeinfo for'BT::ControlNode,
                                               0LL);
      if ( control_ptr )
      {
        for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
        {
          v6 = *(int *)(v3 + 48);
          if ( v6 >= BT::ControlNode::childrenCount(control_ptr) )
            break;
          BT::ControlNode::child((const BT::ControlNode *const)(v3 + 64), (size_t)control_ptr);
          if ( std::operator!=<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v3 + 64), 0LL) )
          {
            v7 = std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 64));
            BT::applyRecursiveVisitor(v7, visitor, level);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_ai/behavior_tree.cpp",
              "applyRecursiveVisitor",
              101);
            v8 = common::milog::MiLogStream::operator<<<BT::TreeNode,(BT::TreeNode*)0>(&v15, root_node_ptr);
            v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v8,
                   (const char (*)[14])" child_index:");
            v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])off_1BA23EE0);
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
          std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v3 + 64));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/behavior_tree.cpp",
          "applyRecursiveVisitor",
          89);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v15,
          (const char (*)[23])"control_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    else if ( __dynamic_cast(
                root_node_ptr,
                (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
                (const struct __class_type_info *)&`typeinfo for'BT::DecoratorNode,
                0LL) )
    {
      if ( __dynamic_cast(
             root_node_ptr,
             (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
             (const struct __class_type_info *)&`typeinfo for'BT::DecoratorNode,
             0LL) )
      {
        BT::DecoratorNode::getChild((const BT::DecoratorNode *const)(v3 + 64));
        if ( std::operator!=<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v3 + 64), 0LL) )
        {
          v11 = std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 64));
          BT::applyRecursiveVisitor(v11, visitor, level);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/behavior_tree.cpp",
            "applyRecursiveVisitor",
            120);
          v12 = common::milog::MiLogStream::operator<<<BT::TreeNode,(BT::TreeNode*)0>(&v15, root_node_ptr);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v12,
            (const char (*)[21])"child_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
        std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v3 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/behavior_tree.cpp",
          "applyRecursiveVisitor",
          110);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v15,
          (const char (*)[25])"decorator_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/behavior_tree.cpp",
      "applyRecursiveVisitor",
      80);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"roo_node is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 126: range 000000000D7CE44E-000000000D7CEA2E
void __cdecl BT::applyRecursiveVisitor(
        BT::TreeNode *root_node_ptr,
        const BT::VisitorNodeCallback *visitor,
        int32_t level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  size_t v6; // r14
  std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  BT::ControlNode *control_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 child_index:141 64 16 13 child_ptr:162";
  *(_QWORD *)(v3 + 16) = BT::applyRecursiveVisitor;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( root_node_ptr )
  {
    std::function<void ()(BT::TreeNode const*,int)>::operator()(visitor, root_node_ptr, level);
    if ( __dynamic_cast(
           root_node_ptr,
           (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
           (const struct __class_type_info *)&`typeinfo for'BT::ControlNode,
           0LL) )
    {
      control_ptr = (BT::ControlNode *)__dynamic_cast(
                                         root_node_ptr,
                                         (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
                                         (const struct __class_type_info *)&`typeinfo for'BT::ControlNode,
                                         0LL);
      if ( control_ptr )
      {
        for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
        {
          v6 = *(int *)(v3 + 48);
          if ( v6 >= BT::ControlNode::childrenCount(control_ptr) )
            break;
          BT::ControlNode::child((BT::ControlNode *const)(v3 + 64), (size_t)control_ptr);
          if ( std::operator!=<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v3 + 64), 0LL) )
          {
            v7 = std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 64));
            BT::applyRecursiveVisitor(v7, visitor, level + 1);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_ai/behavior_tree.cpp",
              "applyRecursiveVisitor",
              150);
            v8 = common::milog::MiLogStream::operator<<<BT::TreeNode,(BT::TreeNode*)0>(&v15, root_node_ptr);
            v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v8,
                   (const char (*)[14])" child_index:");
            v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])off_1BA23EE0);
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
          std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v3 + 64));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/behavior_tree.cpp",
          "applyRecursiveVisitor",
          138);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v15,
          (const char (*)[23])"control_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    else if ( __dynamic_cast(
                root_node_ptr,
                (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
                (const struct __class_type_info *)&`typeinfo for'BT::DecoratorNode,
                0LL) )
    {
      if ( __dynamic_cast(
             root_node_ptr,
             (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
             (const struct __class_type_info *)&`typeinfo for'BT::DecoratorNode,
             0LL) )
      {
        BT::DecoratorNode::getChild((BT::DecoratorNode *const)(v3 + 64));
        if ( std::operator!=<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v3 + 64), 0LL) )
        {
          v11 = std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 64));
          BT::applyRecursiveVisitor(v11, visitor, level + 1);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/behavior_tree.cpp",
            "applyRecursiveVisitor",
            169);
          v12 = common::milog::MiLogStream::operator<<<BT::TreeNode,(BT::TreeNode*)0>(&v15, root_node_ptr);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v12,
            (const char (*)[21])"child_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
        std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v3 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/behavior_tree.cpp",
          "applyRecursiveVisitor",
          159);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v15,
          (const char (*)[25])"decorator_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/behavior_tree.cpp",
      "applyRecursiveVisitor",
      129);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"roo_node is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 175: range 000000000D7CF108-000000000D7CF3A8
void __cdecl BT::BehaviorTree::printCurrentState(BT::BehaviorTree *const this)
{
  unsigned __int64 p_M_refcount; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // rax
  BT::BehaviorTree v5; // [rsp+20h] [rbp-90h] BYREF

  p_M_refcount = (unsigned __int64)&v5.blackboard_ptr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_refcount = v2;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 1 10 vistor:176";
  *(_QWORD *)(p_M_refcount + 16) = BT::BehaviorTree::printCurrentState;
  v3 = p_M_refcount >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  BT::BehaviorTree::rootNode(&v5);
  if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)&v5, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v5.nodes_vec_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/behavior_tree.cpp",
      "printCurrentState",
      210);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)&v5.nodes_vec_,
      (const char (*)[38])"printCurrentState root_ptr is nullptr");
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v5.nodes_vec_,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/behavior_tree.cpp",
      "printCurrentState",
      213);
    common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
      (common::milog::MiLogStream *const)&v5.nodes_vec_,
      (const char (*)[68])&_f);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5.nodes_vec_);
    std::function<void ()(BT::TreeNode const*,int)>::function<BT::BehaviorTree::printCurrentState(void)::{lambda(BT::TreeNode const*,int)#1},void,void>(
      (std::function<void(const BT::TreeNode*,int)> *const)&v5.nodes_vec_,
      (BT::BehaviorTree::printCurrentState::<lambda(const BT::TreeNode*, int32_t)>)&_f);
    v4 = std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)&v5);
    BT::applyRecursiveVisitor(v4, (const BT::VisitorNodeCallback *)&v5.nodes_vec_, 0);
    std::function<void ()(BT::TreeNode const*,int)>::~function((std::function<void(const BT::TreeNode*,int)> *const)&v5.nodes_vec_);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v5.nodes_vec_,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/behavior_tree.cpp",
      "printCurrentState",
      215);
    common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
      (common::milog::MiLogStream *const)&v5.nodes_vec_,
      (const char (*)[68])"----------------------------------------------------------------[F]");
  }
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5.nodes_vec_);
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)&v5);
  if ( &v5.blackboard_ptr_._M_refcount == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 176: range 000000000D7CEA30-000000000D7CF107
void __cdecl BT::BehaviorTree::printCurrentState(void)::{lambda(BT::TreeNode const*,int)#1}::operator()(
        const BT::BehaviorTree::printCurrentState::<lambda(const BT::TreeNode*, int32_t)> *const __closure,
        const BT::TreeNode *node_ptr,
        int32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char *v6; // rdx
  unsigned int (__fastcall **v7)(const BT::TreeNode *); // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r13
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r13
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r13
  unsigned int (__fastcall **v27)(const BT::TreeNode *); // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r13
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r13
  common::milog::MiLogStream *v34; // rax
  unsigned __int16 val; // [rsp+26h] [rbp-BAh] BYREF
  BT::NodeType v37; // [rsp+28h] [rbp-B8h] BYREF
  BT::NodeStatus v38; // [rsp+2Ch] [rbp-B4h] BYREF
  const std::string *node_name; // [rsp+30h] [rbp-B0h]
  std::string v41; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-80h] BYREF
  char v43[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 str_tree_prefix:183";
  *(_QWORD *)(v3 + 16) = BT::BehaviorTree::printCurrentState(void)::{lambda(BT::TreeNode const*,int)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( node_ptr )
  {
    *(_QWORD *)(v3 + 32) = BT::getTreePrintPrefixByLevel(level);
    *(_QWORD *)(v3 + 40) = v6;
    BT::TreeNode::getName[abi:cxx11](&v41, node_ptr);
    node_name = &v41;
    if ( *(_BYTE *)(((unsigned __int64)node_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(node_ptr);
    v7 = (unsigned int (__fastcall **)(const BT::TreeNode *))(node_ptr->_vptr_TreeNode + 3);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(node_ptr->_vptr_TreeNode + 3);
    if ( (*v7)(node_ptr) == 1 )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/behavior_tree.cpp",
        "operator()",
        204);
      v24 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v42, (const char (*)[2])"|");
      v25 = common::milog::MiLogStream::operator<<<std::string_view,(std::string_view*)0>(
              v24,
              (const std::string_view *)(v3 + 32));
      v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])"<");
      if ( *(_BYTE *)(((unsigned __int64)node_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(node_ptr);
      v27 = (unsigned int (__fastcall **)(const BT::TreeNode *))(node_ptr->_vptr_TreeNode + 3);
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        __asan_report_load8(node_ptr->_vptr_TreeNode + 3);
      v37 = (*v27)(node_ptr);
      v28 = common::milog::MiLogStream::operator<<<BT::NodeType,(BT::NodeType*)0>(v26, &v37);
      v29 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v28, (const char (*)[2])" ");
      v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, node_name);
      v31 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v30, (const char (*)[2])" ");
      val = BT::TreeNode::UID(node_ptr);
      v32 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v31, &val);
      v33 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v32, (const char (*)[4])off_1BA240C0);
      v38 = BT::TreeNode::status(node_ptr);
      v34 = common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(v33, &v38);
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v34, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    else if ( __dynamic_cast(
                node_ptr,
                (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
                (const struct __class_type_info *)&`typeinfo for'BT::SubtreeNode,
                0LL) )
    {
      if ( __dynamic_cast(
             node_ptr,
             (const struct __class_type_info *)&`typeinfo for'BT::TreeNode,
             (const struct __class_type_info *)&`typeinfo for'BT::SubtreeNode,
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/behavior_tree.cpp",
          "operator()",
          195);
        v8 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v42, (const char (*)[2])"|");
        v9 = common::milog::MiLogStream::operator<<<std::string_view,(std::string_view*)0>(
               v8,
               (const std::string_view *)(v3 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])"<Subtree ");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, node_name);
        v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
        val = BT::TreeNode::UID(node_ptr);
        v13 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v12, &val);
        v14 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v13, (const char (*)[4])off_1BA240C0);
        v38 = BT::TreeNode::status(node_ptr);
        v15 = common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(v14, &v38);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/behavior_tree.cpp",
          "operator()",
          192);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v42,
          (const char (*)[23])"subtree_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/behavior_tree.cpp",
        "operator()",
        199);
      v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v42, (const char (*)[2])"|");
      v17 = common::milog::MiLogStream::operator<<<std::string_view,(std::string_view*)0>(
              v16,
              (const std::string_view *)(v3 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, node_name);
      v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])" ");
      val = BT::TreeNode::UID(node_ptr);
      v21 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v21, (const char (*)[4])off_1BA240C0);
      v38 = BT::TreeNode::status(node_ptr);
      v23 = common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(v22, &v38);
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    std::string::~string(&v41);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/behavior_tree.cpp",
      "operator()",
      180);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v42, (const char (*)[20])"node_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 220: range 000000000D7CF3AA-000000000D7CF3D3
void __cdecl BT::BehaviorTree::addNode(BT::BehaviorTree *const this, const BT::TreeNodePtr *node_ptr)
{
  std::vector<std::shared_ptr<BT::TreeNode>>::push_back(&this->nodes_vec_, node_ptr);
};

// Line 225: range 000000000D7CF3D4-000000000D7CF432
BT::TreeNodePtr __cdecl BT::BehaviorTree::rootNode(const BT::BehaviorTree *const this)
{
  __int64 v1; // rsi
  BT::TreeNodePtr result; // rax
  const std::shared_ptr<BT::TreeNode> *v3; // rdx

  if ( std::vector<std::shared_ptr<BT::TreeNode>>::empty((const std::vector<std::shared_ptr<BT::TreeNode>> *const)(v1 + 16)) )
  {
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    v3 = std::vector<std::shared_ptr<BT::TreeNode>>::front((const std::vector<std::shared_ptr<BT::TreeNode>> *const)(v1 + 16));
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, v3);
  }
  result._M_ptr = (std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 234: range 000000000D7CF434-000000000D7CF5C7
void __cdecl BT::BehaviorTree::resetTreeState(BT::BehaviorTree *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  BT::TreeNode *v6; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 root_node_ptr:237";
  *(_QWORD *)(v1 + 16) = BT::BehaviorTree::resetTreeState;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BT::BehaviorTree::rootNode((const BT::BehaviorTree *const)(v1 + 32));
  if ( !std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    v5 = (unsigned __int64)(v4->_vptr_TreeNode + 2);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4->_vptr_TreeNode + 2);
    (*(void (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4);
    v6 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BT::TreeNode::setStatus(v6, IDLE);
  }
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 249: range 000000000D7CF692-000000000D7CFBC0
BT::NodeStatus __cdecl BT::BehaviorTree::tickRoot(BT::BehaviorTree *const this)
{
  unsigned __int64 p_M_refcount; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  BT::NodeStatus v5; // r14d
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  BT::TreeNode *v9; // rax
  common::milog::MiLogStream *v10; // rax
  BT::NodeStatus result; // eax
  _BYTE fn[9]; // [rsp+1Fh] [rbp-F1h] BYREF
  const std::shared_ptr<BT::TreeNode> *root_ptr; // [rsp+28h] [rbp-E8h]
  BT::BehaviorTree v14; // [rsp+30h] [rbp-E0h] BYREF

  p_M_refcount = (unsigned __int64)&v14.blackboard_ptr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      p_M_refcount = v2;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "3 48 4 10 status:277 64 8 15 scopeExit_0:258 96 16 17 tree_copy_ptr:268";
  *(_QWORD *)(p_M_refcount + 16) = BT::BehaviorTree::tickRoot;
  v3 = (_DWORD *)(p_M_refcount >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_stack_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_stack_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_stack_id_);
  }
  if ( ++this->cur_stack_id_ <= 1 )
  {
    *(_QWORD *)&fn[1] = this;
    BT::ScopeExit::MakeScopeExit::operator+=<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}>(
      (BT::ScopeExit::MakeScopeExit *const)(p_M_refcount + 64),
      (BT::BehaviorTree::tickRoot::<lambda()> *)fn);
    std::enable_shared_from_this<BT::BehaviorTree>::shared_from_this((std::enable_shared_from_this<BT::BehaviorTree> *const)(p_M_refcount + 96));
    if ( std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::operator bool(&this->check_pre_exec_func_)
      && !std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::operator()(
            &this->check_pre_exec_func_,
            (const std::shared_ptr<BT::BehaviorTree> *)(p_M_refcount + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v14.nodes_vec_,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/behavior_tree.cpp",
        "tickRoot",
        271);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)&v14.nodes_vec_,
        (const char (*)[32])"check pre exec result not valid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14.nodes_vec_);
      v5 = FAILURE;
    }
    else
    {
      BT::BehaviorTree::rootNode(&v14);
      root_ptr = (const std::shared_ptr<BT::TreeNode> *)&v14;
      if ( std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)&v14) )
      {
        v7 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)root_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7);
        v8 = (unsigned __int64)(v7->_vptr_TreeNode + 4);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7->_vptr_TreeNode + 4);
        *(_DWORD *)(p_M_refcount + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(v7);
        if ( *(_DWORD *)(p_M_refcount + 48) == 3 || *(_DWORD *)(p_M_refcount + 48) == 2 )
        {
          v9 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)root_ptr);
          BT::TreeNode::setStatus(v9, IDLE);
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v14.nodes_vec_,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/behavior_tree.cpp",
            "tickRoot",
            284);
          v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)&v14.nodes_vec_,
                  (const char (*)[28])"current not support status:");
          common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(
            v10,
            (const BT::NodeStatus *)(p_M_refcount + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14.nodes_vec_);
        }
        v5 = *(_DWORD *)(p_M_refcount + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v14.nodes_vec_,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/behavior_tree.cpp",
          "tickRoot",
          290);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)&v14.nodes_vec_,
          (const char (*)[17])"root_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14.nodes_vec_);
        v5 = FAILURE;
      }
      std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)&v14);
    }
    std::shared_ptr<BT::BehaviorTree>::~shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)(p_M_refcount + 96));
    BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}>::~ScopeExit((BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot()::<lambda()> > *const)(p_M_refcount + 64));
  }
  else
  {
    BT::BehaviorTree::printCurrentState(this);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v14.nodes_vec_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/behavior_tree.cpp",
      "tickRoot",
      255);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)&v14.nodes_vec_,
           (const char (*)[38])"tickRoot behavior tree nested, depth:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v4, &this->cur_stack_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14.nodes_vec_);
    v5 = FAILURE;
  }
  result = v5;
  if ( &v14.blackboard_ptr_._M_refcount == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 258: range 000000000D7CF5C8-000000000D7CF691
void __cdecl BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}::operator()(
        const BT::BehaviorTree::tickRoot::<lambda()> *const __closure)
{
  BT::BehaviorTree *this; // rax
  char v2; // dl
  BT::Blackboard *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  v2 = *(_BYTE *)(((unsigned __int64)&__closure->__this->cur_stack_id_ >> 3) + 0x7FFF8000);
  if ( v2 != 0 && v2 <= 3 )
    this = (BT::BehaviorTree *)__asan_report_load4(&__closure->__this->cur_stack_id_);
  --this->cur_stack_id_;
  if ( std::operator!=<BT::Blackboard>(&__closure->__this->blackboard_ptr_, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v3 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__this->blackboard_ptr_);
    BT::Blackboard::clear(v3);
  }
};

// Line 296: range 000000000D7CFBC2-000000000D7CFCC9
void __cdecl BT::BehaviorTree::stop(BT::BehaviorTree *const this)
{
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx
  BT::TreeNode *v3; // rax
  std::vector<std::shared_ptr<BT::TreeNode>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<BT::TreeNode>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<BT::TreeNode>> *__for_range; // [rsp+20h] [rbp-10h]
  const std::shared_ptr<BT::TreeNode> *node_ptr; // [rsp+28h] [rbp-8h]

  BT::BehaviorTree::resetTreeState(this);
  __for_range = &this->nodes_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<BT::TreeNode>>::begin(&this->nodes_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<BT::TreeNode>>::end(&this->nodes_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<BT::TreeNode> *,std::vector<std::shared_ptr<BT::TreeNode>>>(
            &__for_begin,
            &__for_end) )
  {
    node_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BT::TreeNode> *,std::vector<std::shared_ptr<BT::TreeNode>>>::operator*(&__for_begin);
    if ( std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::operator bool(node_ptr) )
    {
      v1 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v1);
      v2 = (unsigned __int64)(v1->_vptr_TreeNode + 2);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v1->_vptr_TreeNode + 2);
      (*(void (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v2)(v1);
      v3 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)node_ptr);
      BT::TreeNode::setStatus(v3, IDLE);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<BT::TreeNode> *,std::vector<std::shared_ptr<BT::TreeNode>>>::operator++(&__for_begin);
  }
};
