// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/assign_node.h

// Line 27: range 000000000D950288-000000000D9502E8
void __cdecl ZN2BT10AssignNodeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEECI2NS_8LeafNodeEERKS6_RKNS_13NodeConfigureE(
        BT::AssignNode<std::string > *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::AssignNode<std::string> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000D950484-000000000D9504E4
void __cdecl ZN2BT10AssignNodeISt6vectorIdSaIdEEECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::AssignNode<std::vector<double> > *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::AssignNode<std::vector<double>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000D950386-000000000D9503E6
void __cdecl ZN2BT10AssignNodeISt6vectorIiSaIiEEECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::AssignNode<std::vector<int> > *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::AssignNode<std::vector<int>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000D95018A-000000000D9501EA
void __cdecl ZN2BT10AssignNodeIdECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::AssignNode<double> *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::AssignNode<double> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000D95008C-000000000D9500EC
void __cdecl ZN2BT10AssignNodeIiECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::AssignNode<int> *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::AssignNode<int> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 28: range 000000000DD83B8E-000000000DD83BDB
void __cdecl BT::AssignNode<double>::~AssignNode(BT::AssignNode<double> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::AssignNode<double> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 28: range 000000000DD83BDC-000000000DD83C06
void __cdecl BT::AssignNode<double>::~AssignNode(BT::AssignNode<double> *const this)
{
  BT::AssignNode<double>::~AssignNode(this);
  operator delete(this, 0x88uLL);
};

// Line 28: range 000000000DD83C56-000000000DD83C80
void __cdecl BT::AssignNode<int>::~AssignNode(BT::AssignNode<int> *const this)
{
  BT::AssignNode<int>::~AssignNode(this);
  operator delete(this, 0x88uLL);
};

// Line 28: range 000000000DD83C08-000000000DD83C55
void __cdecl BT::AssignNode<int>::~AssignNode(BT::AssignNode<int> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::AssignNode<int> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 28: range 000000000DD83B14-000000000DD83B61
void __cdecl BT::AssignNode<std::string>::~AssignNode(BT::AssignNode<std::string > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::AssignNode<std::string> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 28: range 000000000DD83B62-000000000DD83B8C
void __cdecl BT::AssignNode<std::string>::~AssignNode(BT::AssignNode<std::string > *const this)
{
  BT::AssignNode<std::string>::~AssignNode(this);
  operator delete(this, 0x88uLL);
};

// Line 28: range 000000000DD83A20-000000000DD83A6D
void __cdecl BT::AssignNode<std::vector<double>>::~AssignNode(BT::AssignNode<std::vector<double> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::AssignNode<std::vector<double>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 28: range 000000000DD83A6E-000000000DD83A98
void __cdecl BT::AssignNode<std::vector<double>>::~AssignNode(BT::AssignNode<std::vector<double> > *const this)
{
  BT::AssignNode<std::vector<double>>::~AssignNode(this);
  operator delete(this, 0x88uLL);
};

// Line 28: range 000000000DD83AE8-000000000DD83B12
void __cdecl BT::AssignNode<std::vector<int>>::~AssignNode(BT::AssignNode<std::vector<int> > *const this)
{
  BT::AssignNode<std::vector<int>>::~AssignNode(this);
  operator delete(this, 0x88uLL);
};

// Line 28: range 000000000DD83A9A-000000000DD83AE7
void __cdecl BT::AssignNode<std::vector<int>>::~AssignNode(BT::AssignNode<std::vector<int> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::AssignNode<std::vector<int>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 32: range 000000000DDD6828-000000000DDD6D5D
BT::NodeStatus __cdecl BT::AssignNode<double>::tick(BT::AssignNode<double> *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BT::Blackboard *v12; // r15
  int32_t *p_value; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  BT::NodeStatus result; // eax
  const BT::NodeConfigure *config; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 17 blackboard_ptr:35 64 16 18 node_config_ptr:41 96 16 26 assign_int32_config_ptr:45";
  *(_QWORD *)(v1 + 16) = BT::AssignNode<double>::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/assign_node.h",
      "tick",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"AssignNode blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<BTNodeConfigBase>::shared_ptr(
      (std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64),
      &config->node_config_ptr);
    std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
    v6 = std::operator!=<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL);
    std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    if ( v6 )
    {
      std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
      if ( std::operator==<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          48);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[35])"assign_int32_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          51);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[21])"AssignInt32 set key:");
        v8 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->param1.value);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", value:");
        v11 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &v11->param2.value);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        p_value = &std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->param2.value;
        v14 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        BT::Blackboard::set<int>(v12, &v14->param1.value, p_value);
        v5 = SUCCESS;
      }
      std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/assign_node.h",
        "tick",
        57);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v19,
              (const char (*)[35])"AssignNode config not valid, name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" config");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = FAILURE;
    }
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 32: range 000000000DDD6D5E-000000000DDD7293
BT::NodeStatus __cdecl BT::AssignNode<int>::tick(BT::AssignNode<int> *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BT::Blackboard *v12; // r15
  int32_t *p_value; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  BT::NodeStatus result; // eax
  const BT::NodeConfigure *config; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 17 blackboard_ptr:35 64 16 18 node_config_ptr:41 96 16 26 assign_int32_config_ptr:45";
  *(_QWORD *)(v1 + 16) = BT::AssignNode<int>::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/assign_node.h",
      "tick",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"AssignNode blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<BTNodeConfigBase>::shared_ptr(
      (std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64),
      &config->node_config_ptr);
    std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
    v6 = std::operator!=<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL);
    std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    if ( v6 )
    {
      std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
      if ( std::operator==<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          48);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[35])"assign_int32_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          51);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[21])"AssignInt32 set key:");
        v8 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->param1.value);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", value:");
        v11 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &v11->param2.value);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        p_value = &std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->param2.value;
        v14 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        BT::Blackboard::set<int>(v12, &v14->param1.value, p_value);
        v5 = SUCCESS;
      }
      std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/assign_node.h",
        "tick",
        57);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v19,
              (const char (*)[35])"AssignNode config not valid, name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" config");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = FAILURE;
    }
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 32: range 000000000DDD62F2-000000000DDD6827
BT::NodeStatus __cdecl BT::AssignNode<std::string>::tick(BT::AssignNode<std::string > *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BT::Blackboard *v12; // r15
  int32_t *p_value; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  BT::NodeStatus result; // eax
  const BT::NodeConfigure *config; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 17 blackboard_ptr:35 64 16 18 node_config_ptr:41 96 16 26 assign_int32_config_ptr:45";
  *(_QWORD *)(v1 + 16) = BT::AssignNode<std::string>::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/assign_node.h",
      "tick",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"AssignNode blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<BTNodeConfigBase>::shared_ptr(
      (std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64),
      &config->node_config_ptr);
    std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
    v6 = std::operator!=<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL);
    std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    if ( v6 )
    {
      std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
      if ( std::operator==<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          48);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[35])"assign_int32_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          51);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[21])"AssignInt32 set key:");
        v8 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->param1.value);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", value:");
        v11 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &v11->param2.value);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        p_value = &std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->param2.value;
        v14 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        BT::Blackboard::set<int>(v12, &v14->param1.value, p_value);
        v5 = SUCCESS;
      }
      std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/assign_node.h",
        "tick",
        57);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v19,
              (const char (*)[35])"AssignNode config not valid, name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" config");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = FAILURE;
    }
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 32: range 000000000DDD5886-000000000DDD5DBB
BT::NodeStatus __cdecl BT::AssignNode<std::vector<double>>::tick(BT::AssignNode<std::vector<double> > *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BT::Blackboard *v12; // r15
  int32_t *p_value; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  BT::NodeStatus result; // eax
  const BT::NodeConfigure *config; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 17 blackboard_ptr:35 64 16 18 node_config_ptr:41 96 16 26 assign_int32_config_ptr:45";
  *(_QWORD *)(v1 + 16) = BT::AssignNode<std::vector<double>>::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/assign_node.h",
      "tick",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"AssignNode blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<BTNodeConfigBase>::shared_ptr(
      (std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64),
      &config->node_config_ptr);
    std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
    v6 = std::operator!=<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL);
    std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    if ( v6 )
    {
      std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
      if ( std::operator==<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          48);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[35])"assign_int32_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          51);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[21])"AssignInt32 set key:");
        v8 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->param1.value);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", value:");
        v11 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &v11->param2.value);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        p_value = &std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->param2.value;
        v14 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        BT::Blackboard::set<int>(v12, &v14->param1.value, p_value);
        v5 = SUCCESS;
      }
      std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/assign_node.h",
        "tick",
        57);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v19,
              (const char (*)[35])"AssignNode config not valid, name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" config");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = FAILURE;
    }
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 32: range 000000000DDD5DBC-000000000DDD62F1
BT::NodeStatus __cdecl BT::AssignNode<std::vector<int>>::tick(BT::AssignNode<std::vector<int> > *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  BT::NodeStatus v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BT::Blackboard *v12; // r15
  int32_t *p_value; // r14
  std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  BT::NodeStatus result; // eax
  const BT::NodeConfigure *config; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 17 blackboard_ptr:35 64 16 18 node_config_ptr:41 96 16 26 assign_int32_config_ptr:45";
  *(_QWORD *)(v1 + 16) = BT::AssignNode<std::vector<int>>::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  config = BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v1 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/actions/assign_node.h",
      "tick",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"AssignNode blackboard_ptr is nullptr, name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = FAILURE;
  }
  else
  {
    std::shared_ptr<BTNodeConfigBase>::shared_ptr(
      (std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64),
      &config->node_config_ptr);
    std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
    v6 = std::operator!=<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL);
    std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    if ( v6 )
    {
      std::dynamic_pointer_cast<BTAssignInt32Config,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v1 + 96));
      if ( std::operator==<BTAssignInt32Config>((const std::shared_ptr<BTAssignInt32Config> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          48);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[35])"assign_int32_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/actions/assign_node.h",
          "tick",
          51);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[21])"AssignInt32 set key:");
        v8 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->param1.value);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", value:");
        v11 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &v11->param2.value);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v12 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        p_value = &std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->param2.value;
        v14 = std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTAssignInt32Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        BT::Blackboard::set<int>(v12, &v14->param1.value, p_value);
        v5 = SUCCESS;
      }
      std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/actions/assign_node.h",
        "tick",
        57);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v19,
              (const char (*)[35])"AssignNode config not valid, name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" config");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = FAILURE;
    }
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v1 + 64));
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
