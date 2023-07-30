// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/conditions/condition_phase_check.cpp

// Line 20: range 000000000DE87CA2-000000000DE880C6
BT::NodeStatus __cdecl BT::ConditionCheckPhaseBase::tick(BT::ConditionCheckPhaseBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  BT::NodeStatus v6; // r14d
  unsigned int (__fastcall **v7)(BT::ConditionCheckPhaseBase *const); // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 (__fastcall **v11)(BT::ConditionCheckPhaseBase *const); // rax
  BT::BlackboardInnerPhaseType v12; // eax
  BT::NodeStatus result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-110h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 16 current_phase:21 64 32 19 global_phase_key:22";
  *(_QWORD *)(v1 + 16) = BT::ConditionCheckPhaseBase::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  *(_DWORD *)(v1 + 48) = 0;
  BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11]((std::string *)(v1 + 64), BLACK_BOARD_GLOBAL_KEY_PHASE);
  if ( !BT::TreeNode::getData<BT::BlackboardInnerPhaseType>(
          this,
          (const std::string *)(v1 + 64),
          (BT::BlackboardInnerPhaseType *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/conditions/condition_phase_check.cpp",
      "tick",
      25);
    v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v15, (const char (*)[5])"key[");
    BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v1 + 64));
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])"]not find");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = FAILURE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v7 = (unsigned int (__fastcall **)(BT::ConditionCheckPhaseBase *const))(this->_vptr_TreeNode + 6);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_TreeNode + 6);
    if ( (*v7)(this) == *(_DWORD *)(v1 + 48) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/conditions/condition_phase_check.cpp",
        "tick",
        30);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v14,
             (const char (*)[19])"black board phase:");
      BT::enumValToStr<BT::BlackboardInnerPhaseType>((std::string *)&v15, *(BT::BlackboardInnerPhaseType *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v15);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" need phase:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v11 = (__int64 (__fastcall **)(BT::ConditionCheckPhaseBase *const))(this->_vptr_TreeNode + 6);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_TreeNode + 6);
      v12 = (unsigned int)(*v11)(this);
      BT::enumValToStr<BT::BlackboardInnerPhaseType>(&val, v12);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      std::string::~string(&v15);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = SUCCESS;
    }
    else
    {
      v6 = FAILURE;
    }
  }
  std::string::~string((void *)(v1 + 64));
  result = v6;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 37: range 000000000DE880C8-000000000DE880D6
BT::BlackboardInnerPhaseType __cdecl BT::ConditionCheckIsRerollPhase::getCurPhase(
        BT::ConditionCheckIsRerollPhase *const this)
{
  return 1;
};

// Line 42: range 000000000DE880D8-000000000DE880E6
BT::BlackboardInnerPhaseType __cdecl BT::ConditionCheckIsActionPhase::getCurPhase(
        BT::ConditionCheckIsActionPhase *const this)
{
  return 2;
};

// Line 47: range 000000000DE880E8-000000000DE880F6
BT::BlackboardInnerPhaseType __cdecl BT::ConditionCheckIsSelectOnstageCharacterPhase::getCurPhase(
        BT::ConditionCheckIsSelectOnstageCharacterPhase *const this)
{
  return 3;
};

// Line 52: range 000000000DE880F8-000000000DE88106
BT::BlackboardInnerPhaseType __cdecl BT::ConditionCheckIsDrawPhase::getCurPhase(
        BT::ConditionCheckIsDrawPhase *const this)
{
  return 4;
};
