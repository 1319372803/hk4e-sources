// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/switch_node.cpp

// Line 21: range 000000000DE8A648-000000000DE8A662
void __cdecl BT::SwitchNode::stop(BT::SwitchNode *const this)
{
  BT::ControlNode::stop(this);
};

// Line 27: range 000000000DE8A664-000000000DE8AF80
BT::NodeStatus __cdecl BT::SwitchNode::tick(BT::SwitchNode *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // r14
  common::milog::MiLogStream *v5; // rax
  BT::NodeStatus v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<std::weak_ptr<BT::TreeNode>>::size_type v10; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const std::weak_ptr<BT::TreeNode> *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  unsigned __int64 v28; // rdx
  int v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  BT::NodeStatus result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-F9h] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-F8h] BYREF
  std::string key; // [rsp+20h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 2 14 child_index:41 64 4 15 current_case:29 80 4 15 child_status:62 96 16 17 child_node_wtr"
                        ":49 128 16 17 child_node_ptr:56";
  *(_QWORD *)(v1 + 16) = BT::SwitchNode::tick;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234688015;
  v3[536862722] = -234556924;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  BT::TreeNode::setStatus(this, RUNNING);
  *(_DWORD *)(v1 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "switch_case", &__a);
  v4 = !BT::TreeNode::getData<int>(this, &key, (int *)(v1 + 64));
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  if ( v4 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&key,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/controls/switch_node.cpp",
      "tick",
      32);
    v5 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
           (common::milog::MiLogStream *const)&key,
           this);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])" switch_value is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
    v6 = FAILURE;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&key,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/controls/switch_node.cpp",
      "tick",
      35);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           (common::milog::MiLogStream *const)&key,
           (const char (*)[24])"SwitchNode switch_case:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v1 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
    if ( *(int *)(v1 + 64) > 0 )
    {
      *(_WORD *)(v1 + 48) = *(_DWORD *)(v1 + 64) - 1;
      if ( !*(_WORD *)(v1 + 48)
        || (v10 = *(unsigned __int16 *)(v1 + 48),
            v10 > std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&key,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/controls/switch_node.cpp",
          "tick",
          44);
        v12 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
                (common::milog::MiLogStream *const)&key,
                this);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" child_index:");
        v14 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                v13,
                (const unsigned __int16 *)(v1 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" size:");
        val = std::vector<std::weak_ptr<BT::TreeNode>>::size(&this->children_wtr_vec_);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
        v6 = FAILURE;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&key,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/controls/switch_node.cpp",
          "tick",
          47);
        v16 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
                (common::milog::MiLogStream *const)&key,
                this);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" choose case:");
        v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v1 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" child index:");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v19,
          (const unsigned __int16 *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
        v20 = std::vector<std::weak_ptr<BT::TreeNode>>::operator[](
                &this->children_wtr_vec_,
                *(unsigned __int16 *)(v1 + 48));
        std::weak_ptr<BT::TreeNode>::weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v1 + 96), v20);
        if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired((const std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v1 + 96)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&key,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/controls/switch_node.cpp",
            "tick",
            53);
          v21 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
                  (common::milog::MiLogStream *const)&key,
                  this);
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])" child_index:");
          v23 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                  v22,
                  (const unsigned __int16 *)(v1 + 48));
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v23,
            (const char (*)[24])" child_node_wtr expired");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
          v6 = FAILURE;
        }
        else
        {
          std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)(v1 + 128));
          if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&key,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_ai/controls/switch_node.cpp",
              "tick",
              59);
            v24 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
                    (common::milog::MiLogStream *const)&key,
                    this);
            v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v24,
                    (const char (*)[14])" child_index:");
            v26 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                    v25,
                    (const unsigned __int16 *)(v1 + 48));
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v26,
              (const char (*)[27])" child_node_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
            v6 = FAILURE;
          }
          else
          {
            v27 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v27);
            v28 = (unsigned __int64)(v27->_vptr_TreeNode + 4);
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v27->_vptr_TreeNode + 4);
            *(_DWORD *)(v1 + 80) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v28)(v27);
            v29 = *(_DWORD *)(v1 + 80);
            if ( v29 == 2 )
            {
              BT::ControlNode::stopChildren(this);
              v6 = SUCCESS;
            }
            else
            {
              if ( v29 != 3 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&key,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_ai/controls/switch_node.cpp",
                  "tick",
                  79);
                v30 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
                        (common::milog::MiLogStream *const)&key,
                        this);
                v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v30,
                        (const char (*)[15])" current_case:");
                v32 = common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)(v1 + 64));
                v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v32,
                        (const char (*)[14])" child_index:");
                v34 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                        v33,
                        (const unsigned __int16 *)(v1 + 48));
                v35 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        v34,
                        (const char (*)[27])" status not valid, status:");
                common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(
                  v35,
                  (const BT::NodeStatus *)(v1 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
              }
              BT::ControlNode::stopChildren(this);
              v6 = FAILURE;
            }
          }
          std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 128));
        }
        std::weak_ptr<BT::TreeNode>::~weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v1 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&key,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/controls/switch_node.cpp",
        "tick",
        38);
      v8 = common::milog::MiLogStream::operator<<<BT::SwitchNode,(BT::SwitchNode*)0>(
             (common::milog::MiLogStream *const)&key,
             this);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             v8,
             (const char (*)[42])" switch_value is not valid, current_case:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v1 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
      v6 = FAILURE;
    }
  }
  result = v6;
  if ( v40 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
