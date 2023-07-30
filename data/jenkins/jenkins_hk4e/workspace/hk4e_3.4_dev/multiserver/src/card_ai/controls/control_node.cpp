// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/control_node.cpp

// Line 21: range 000000000DE88482-000000000DE884AE
void __cdecl BT::ControlNode::addChild(BT::ControlNode *const this, const BT::TreeNodeWtr *child_wtr)
{
  std::vector<std::weak_ptr<BT::TreeNode>>::push_back(&this->children_wtr_vec_, child_wtr);
};

// Line 26: range 000000000DE884B0-000000000DE884CF
size_t __cdecl BT::ControlNode::childrenCount(const BT::ControlNode *const this)
{
  return std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_);
};

// Line 31: range 000000000DE884D0-000000000DE887C6
BT::ControlNode *__fastcall BT::ControlNode::child(BT::ControlNode *const this, size_t index, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  unsigned __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  std::weak_ptr<BT::TreeNode> *child_wtr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 index:30 64 16 12 child_ptr:41";
  *(_QWORD *)(v3 + 16) = BT::ControlNode::child;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  if ( std::vector<std::weak_ptr<BT::TreeNode>>::size((const std::vector<std::weak_ptr<BT::TreeNode>> *const)(index + 136)) <= *(_QWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/control_node.cpp",
      "child",
      47);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"ControlNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, (const BT::TreeNode *const)index);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v8,
           (const unsigned __int64 *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v9,
            (const char (*)[28])" not valid, children count:");
    v13 = std::vector<std::weak_ptr<BT::TreeNode>>::size((const std::vector<std::weak_ptr<BT::TreeNode>> *const)(index + 136));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &v13);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    child_wtr = std::vector<std::weak_ptr<BT::TreeNode>>::operator[](
                  (std::vector<std::weak_ptr<BT::TreeNode>> *const)(index + 136),
                  *(_QWORD *)(v3 + 32));
    if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired(child_wtr) )
    {
      std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
    }
    else
    {
      std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)(v3 + 64));
      std::shared_ptr<BT::TreeNode>::shared_ptr(
        (std::shared_ptr<BT::TreeNode> *const)this,
        (std::shared_ptr<BT::TreeNode> *)(v3 + 64));
      std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v3 + 64));
    }
  }
  if ( v17 == (char *)v3 )
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
  return this;
};

// Line 53: range 000000000DE887C8-000000000DE88ABE
const BT::ControlNode *__fastcall BT::ControlNode::child(const BT::ControlNode *const this, size_t index, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  unsigned __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  const std::weak_ptr<BT::TreeNode> *child_wtr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 index:52 64 16 12 child_ptr:63";
  *(_QWORD *)(v3 + 16) = BT::ControlNode::child;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  if ( std::vector<std::weak_ptr<BT::TreeNode>>::size((const std::vector<std::weak_ptr<BT::TreeNode>> *const)(index + 136)) <= *(_QWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/control_node.cpp",
      "child",
      69);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"ControlNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, (const BT::TreeNode *const)index);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v8,
           (const unsigned __int64 *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v9,
            (const char (*)[28])" not valid, children count:");
    v13 = std::vector<std::weak_ptr<BT::TreeNode>>::size((const std::vector<std::weak_ptr<BT::TreeNode>> *const)(index + 136));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &v13);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    child_wtr = std::vector<std::weak_ptr<BT::TreeNode>>::operator[](
                  (const std::vector<std::weak_ptr<BT::TreeNode>> *const)(index + 136),
                  *(_QWORD *)(v3 + 32));
    if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired(child_wtr) )
    {
      std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
    }
    else
    {
      std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)(v3 + 64));
      std::shared_ptr<BT::TreeNode>::shared_ptr(
        (std::shared_ptr<BT::TreeNode> *const)this,
        (std::shared_ptr<BT::TreeNode> *)(v3 + 64));
      std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v3 + 64));
    }
  }
  if ( v17 == (char *)v3 )
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
  return this;
};

// Line 75: range 000000000DE88AC0-000000000DE88AEB
void __cdecl BT::ControlNode::stop(BT::ControlNode *const this)
{
  BT::ControlNode::stopChildren(this);
  BT::TreeNode::setStatus(this, IDLE);
};

// Line 81: range 000000000DE88AEC-000000000DE88EA4
void __cdecl BT::ControlNode::stopChildren(BT::ControlNode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::vector<std::weak_ptr<BT::TreeNode>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<std::weak_ptr<BT::TreeNode>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<std::weak_ptr<BT::TreeNode>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<BT::TreeNode> *child_wtr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v16[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 child_ptr:90";
  *(_QWORD *)(v1 + 16) = BT::ControlNode::stopChildren;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->children_wtr_vec_;
  __for_begin._M_current = std::vector<std::weak_ptr<BT::TreeNode>>::begin(&this->children_wtr_vec_)._M_current;
  __for_end._M_current = std::vector<std::weak_ptr<BT::TreeNode>>::end(&this->children_wtr_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<BT::TreeNode> *,std::vector<std::weak_ptr<BT::TreeNode>>>(
            &__for_begin,
            &__for_end) )
  {
    child_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<BT::TreeNode> *,std::vector<std::weak_ptr<BT::TreeNode>>>::operator*(&__for_begin);
    if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired(child_wtr) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/control_node.cpp",
        "stopChildren",
        86);
      v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v14,
             (const char (*)[18])"ControlNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v5, (const char (*)[22])" child_wtr is expired");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)(v1 + 32));
      if ( std::operator!=<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 32), 0LL) )
      {
        v6 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v6);
        v7 = (unsigned __int64)(v6->_vptr_TreeNode + 2);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v6->_vptr_TreeNode + 2);
        (*(void (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/controls/control_node.cpp",
          "stopChildren",
          97);
        v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v14,
               (const char (*)[18])"ControlNode name:");
        BT::TreeNode::getName[abi:cxx11](&val, this);
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v9, (const char (*)[22])" child_ptr is nullptr");
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 32));
    }
    __gnu_cxx::__normal_iterator<std::weak_ptr<BT::TreeNode> *,std::vector<std::weak_ptr<BT::TreeNode>>>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 104: range 000000000DE88EA6-000000000DE890EF
void __fastcall BT::ControlNode::stopChild(BT::ControlNode *const this, size_t i)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 5 i:103 64 16 13 child_ptr:105";
  *(_QWORD *)(v2 + 16) = BT::ControlNode::stopChild;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = i;
  BT::ControlNode::child((BT::ControlNode *const)(v2 + 64), (size_t)this, *(_QWORD *)(v2 + 32));
  if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/control_node.cpp",
      "stopChild",
      108);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v9,
           (const char (*)[25])"ControlNode child index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v5,
           (const unsigned __int64 *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_1BB47CE0);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v7 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v8 = (unsigned __int64)(v7->_vptr_TreeNode + 2);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7->_vptr_TreeNode + 2);
    (*(void (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(v7);
  }
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v2 + 64));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};
