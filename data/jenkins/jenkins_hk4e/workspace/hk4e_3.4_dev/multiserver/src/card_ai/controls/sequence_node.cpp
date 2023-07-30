// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/sequence_node.cpp

// Line 20: range 000000000DE89CE2-000000000DE89D3F
void __cdecl BT::SequenceNode::stop(BT::SequenceNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->current_child_index_);
  }
  this->current_child_index_ = 0;
  BT::ControlNode::stop(this);
};

// Line 26: range 000000000DE89D40-000000000DE8A647
BT::NodeStatus __cdecl BT::SequenceNode::tick(BT::SequenceNode *const this)
{
  BT::NodeStatus v1; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t current_child_index; // r15d
  std::vector<std::weak_ptr<BT::TreeNode>> *p_children_wtr_vec; // rcx
  const std::weak_ptr<BT::TreeNode> *v7; // rax
  common::milog::MiLogStream *v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  common::milog::MiLogStream *v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  common::milog::MiLogStream *v21; // r15
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rbx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  BT::NodeStatus result; // eax
  uint32_t children_count; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v33; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 child_status:50 64 16 25 current_child_node_wtr:38 96 16 25 current_child_node_ptr:44";
  *(_QWORD *)(v2 + 16) = BT::SequenceNode::tick;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  children_count = std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_);
  BT::TreeNode::setStatus(this, RUNNING);
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_child_index_);
    }
    if ( children_count <= this->current_child_index_ )
      break;
    current_child_index = this->current_child_index_;
    if ( current_child_index >= (unsigned int)std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_) )
      break;
    p_children_wtr_vec = &this->children_wtr_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_child_index_);
    }
    v7 = std::vector<std::weak_ptr<BT::TreeNode>>::operator[](p_children_wtr_vec, this->current_child_index_);
    std::weak_ptr<BT::TreeNode>::weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v2 + 64), v7);
    if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired((const std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/sequence_node.cpp",
        "tick",
        41);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v33,
             (const char (*)[19])"SequenceNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" child_index:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->current_child_index_);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v11,
        (const char (*)[32])" current_child_node_wtr expired");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v12 = 0;
      goto LABEL_38;
    }
    std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)(v2 + 96));
    if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/sequence_node.cpp",
        "tick",
        47);
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v33,
              (const char (*)[19])"SequenceNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" child_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->current_child_index_);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v16,
        (const char (*)[32])" current_child_node_ptr is null");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v17 = 0;
      goto LABEL_33;
    }
    v18 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v18);
    v19 = (unsigned __int64)(v18->_vptr_TreeNode + 4);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v18->_vptr_TreeNode + 4);
    *(_DWORD *)(v2 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v19)(v18);
    v20 = *(_DWORD *)(v2 + 48);
    if ( v20 == 3 )
    {
      BT::ControlNode::stopChildren(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->current_child_index_);
      }
      this->current_child_index_ = 0;
      v1 = *(_DWORD *)(v2 + 48);
      v17 = 1;
      goto LABEL_33;
    }
    if ( v20 > 3 )
      goto LABEL_31;
    if ( v20 == 1 )
    {
      v1 = *(_DWORD *)(v2 + 48);
      v17 = 1;
      goto LABEL_33;
    }
    if ( v20 == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->current_child_index_);
      }
      ++this->current_child_index_;
    }
    else
    {
LABEL_31:
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/sequence_node.cpp",
        "tick",
        72);
      v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v33,
              (const char (*)[19])"SequenceNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &val);
      v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" child_index:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->current_child_index_);
      v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" child status:");
      v26 = common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(
              v25,
              (const BT::NodeStatus *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" not valid");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    v17 = 2;
LABEL_33:
    std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v2 + 96));
    if ( v17 )
    {
      if ( v17 == 2 )
        v12 = 2;
      else
        v12 = 1;
    }
    else
    {
      v12 = 0;
    }
LABEL_38:
    std::weak_ptr<BT::TreeNode>::~weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v2 + 64));
    if ( !v12 )
      break;
    if ( v12 != 2 )
      goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_child_index_);
  }
  if ( children_count == this->current_child_index_ )
  {
    BT::ControlNode::stopChildren(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->current_child_index_);
    }
    this->current_child_index_ = 0;
    v1 = SUCCESS;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/sequence_node.cpp",
      "tick",
      85);
    v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v33,
            (const char (*)[19])"SequenceNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &val);
    v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" child_index:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->current_child_index_);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" not valid");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v1 = FAILURE;
  }
LABEL_48:
  result = v1;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
