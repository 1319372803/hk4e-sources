// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/do_pass_node.cpp

// Line 22: range 000000000DE87670-000000000DE87CA1
BT::NodeStatus __cdecl BT::DoPassNode::tick(BT::DoPassNode *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BT::NodeStatus result; // eax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-170h] BYREF
  std::string val; // [rsp+40h] [rbp-150h] BYREF
  char v15[304]; // [rsp+60h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 16 current_phase:42 64 16 17 blackboard_ptr:24 96 16 17 controller_ptr:30 128 32 19 globa"
                        "l_logic_key:31 192 32 19 global_phase_key:43";
  *(_QWORD *)(v1 + 16) = BT::DoPassNode::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 64));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/do_pass_node.cpp",
      "tick",
      27);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v13,
           (const char (*)[44])"DoPassNode blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 96), 0LL);
    BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
      (std::string *)(v1 + 128),
      BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
    v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( !BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
            v6,
            (const std::string *)(v1 + 128),
            (std::shared_ptr<GCGAIController> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/do_pass_node.cpp",
        "tick",
        34);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])off_1BB455C0);
      BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 128));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v5 = FAILURE;
    }
    else if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v1 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/actions/do_pass_node.cpp",
        "tick",
        39);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[32])"controller_ptr is nullptr, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v5 = FAILURE;
    }
    else
    {
      *(_DWORD *)(v1 + 48) = 0;
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11]((std::string *)(v1 + 192), BLACK_BOARD_GLOBAL_KEY_PHASE);
      v9 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( !BT::Blackboard::get<BT::BlackboardInnerPhaseType>(
              v9,
              (const std::string *)(v1 + 192),
              (BT::BlackboardInnerPhaseType *)(v1 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/actions/do_pass_node.cpp",
          "tick",
          46);
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])off_1BB455C0);
        BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 192));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v13);
        v5 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/do_pass_node.cpp",
          "tick",
          49);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[12])" DoPassNode");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v11 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        GCGControllerBase::doDefaultOp(v11);
        v5 = SUCCESS;
      }
      std::string::~string((void *)(v1 + 192));
    }
    std::string::~string((void *)(v1 + 128));
    std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v1 + 96));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 64));
  result = v5;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
