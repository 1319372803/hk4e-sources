// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/selector_node.cpp

// Line 21: range 000000000DE890F0-000000000DE8914D
void __cdecl BT::SelectorNode::stop(BT::SelectorNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->current_child_index_);
  }
  this->current_child_index_ = 0;
  BT::ControlNode::stop(this);
};

// Line 27: range 000000000DE8914E-000000000DE89CE0
BT::NodeStatus __cdecl BT::SelectorNode::tick(BT::SelectorNode *const this)
{
  BT::NodeStatus v1; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t current_child_index; // r15d
  std::vector<std::weak_ptr<BT::TreeNode>> *p_children_wtr_vec; // rcx
  const std::weak_ptr<BT::TreeNode> *v12; // rax
  common::milog::MiLogStream *v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  common::milog::MiLogStream *v18; // r15
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // r15d
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rdx
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  BT::NodeStatus result; // eax
  BT::NodeStatus child_status; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v41; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v43[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 2 17 children_count:29 64 16 17 child_node_wtr:42 96 16 17 child_node_ptr:48";
  *(_QWORD *)(v2 + 16) = BT::SelectorNode::tick;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BT::TreeNode::setStatus(this, RUNNING);
  *(_WORD *)(v2 + 48) = std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_child_index_);
  }
  if ( this->current_child_index_ >= *(unsigned __int16 *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/selector_node.cpp",
      "tick",
      32);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v41, (const char (*)[19])"SelectorNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v6,
           (const char (*)[23])" current_child_index_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->current_child_index_);
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" children_count:");
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v9, (const unsigned __int16 *)(v2 + 48));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v1 = FAILURE;
    goto LABEL_50;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_child_index_);
    }
    if ( this->current_child_index_ >= *(unsigned __int16 *)(v2 + 48) )
      break;
    current_child_index = this->current_child_index_;
    if ( current_child_index >= (unsigned __int16)std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_) )
      break;
    p_children_wtr_vec = &this->children_wtr_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_child_index_);
    }
    v12 = std::vector<std::weak_ptr<BT::TreeNode>>::operator[](p_children_wtr_vec, this->current_child_index_);
    std::weak_ptr<BT::TreeNode>::weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v2 + 64), v12);
    if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired((const std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/selector_node.cpp",
        "tick",
        45);
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v41,
              (const char (*)[19])"SelectorNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v14,
              (const char (*)[23])" current_child_index_:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->current_child_index_);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v16,
        (const char (*)[24])" child_node_wtr expired");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v17 = 0;
      goto LABEL_40;
    }
    std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)(v2 + 96));
    if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/selector_node.cpp",
        "tick",
        51);
      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v41,
              (const char (*)[19])"SelectorNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v19,
              (const char (*)[23])" current_child_index_:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->current_child_index_);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v21,
        (const char (*)[27])" child_node_ptr is nullptr");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v22 = 0;
      goto LABEL_35;
    }
    v23 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v23);
    v24 = (unsigned __int64)(v23->_vptr_TreeNode + 4);
    if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v23->_vptr_TreeNode + 4);
    child_status = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v24)(v23);
    if ( child_status == FAILURE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->current_child_index_);
      }
      ++this->current_child_index_;
      v22 = 2;
      goto LABEL_35;
    }
    if ( child_status <= FAILURE )
    {
      if ( child_status == RUNNING )
      {
        v1 = RUNNING;
        v22 = 1;
        goto LABEL_35;
      }
      if ( child_status == SUCCESS )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/controls/selector_node.cpp",
          "tick",
          70);
        v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v41,
                (const char (*)[19])"SelectorNode name:");
        BT::TreeNode::getName[abi:cxx11](&val, this);
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
        v27 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v26,
                (const char (*)[23])" current_child_index_:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->current_child_index_);
        common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" succ");
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        BT::ControlNode::stopChildren(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->current_child_index_);
        }
        this->current_child_index_ = 0;
        v1 = SUCCESS;
        v22 = 1;
        goto LABEL_35;
      }
    }
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/selector_node.cpp",
      "tick",
      78);
    v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v41,
            (const char (*)[19])"SelectorNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &val);
    v31 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v30,
            (const char (*)[23])" current_child_index_:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->current_child_index_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v32, (const char (*)[18])" status not valid");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v1 = FAILURE;
    v22 = 1;
LABEL_35:
    std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v2 + 96));
    if ( v22 )
    {
      if ( v22 == 2 )
        v17 = 2;
      else
        v17 = 1;
    }
    else
    {
      v17 = 0;
    }
LABEL_40:
    std::weak_ptr<BT::TreeNode>::~weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v2 + 64));
    if ( !v17 )
      break;
    if ( v17 != 2 )
      goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_child_index_);
  }
  if ( this->current_child_index_ == *(unsigned __int16 *)(v2 + 48) )
  {
    BT::ControlNode::stopChildren(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->current_child_index_);
    }
    this->current_child_index_ = 0;
    v1 = FAILURE;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/selector_node.cpp",
      "tick",
      90);
    v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v41,
            (const char (*)[19])"SelectorNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &val);
    v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v34, (const char (*)[17])" children_count:");
    v36 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
            v35,
            (const unsigned __int16 *)(v2 + 48));
    v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])" child_index:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &this->current_child_index_);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])" not valid");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v1 = FAILURE;
  }
LABEL_50:
  result = v1;
  if ( v43 == (char *)v2 )
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
