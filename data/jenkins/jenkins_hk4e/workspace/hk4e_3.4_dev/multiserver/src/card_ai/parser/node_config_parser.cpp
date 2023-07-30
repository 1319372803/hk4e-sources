// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/parser/node_config_parser.cpp

// Line 29: range 000000000E1F3E18-000000000E1F3E32
void __cdecl BT::NodeConfigParser::Pimpl::~Pimpl(BT::NodeConfigParser::Pimpl *const this)
{
  std::shared_ptr<BT::BehaviorTreeFactory>::~shared_ptr((std::shared_ptr<BT::BehaviorTreeFactory> *const)&this->factory_ptr);
};

// Line 33: range 000000000E1D445E-000000000E1D44B8
void __cdecl BT::NodeConfigParser::Pimpl::Pimpl(
        BT::NodeConfigParser::Pimpl *const this,
        const std::shared_ptr<BT::BehaviorTreeFactory> *fact_ptr,
        const BehaviorTreeConfig *conf)
{
  std::shared_ptr<BT::BehaviorTreeFactory>::shared_ptr(
    (std::shared_ptr<BT::BehaviorTreeFactory> *const)&this->factory_ptr,
    fact_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->config);
  this->config = conf;
};

// Line 45: range 000000000E1032CC-000000000E103368
void __cdecl BT::NodeConfigParser::NodeConfigParser(
        BT::NodeConfigParser *const this,
        const std::shared_ptr<BT::BehaviorTreeFactory> *factory_ptr,
        const BehaviorTreeConfig *config)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_loaded_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->impl_ptr_);
  std::make_unique<BT::NodeConfigParser::Pimpl,std::shared_ptr<BT::BehaviorTreeFactory> const&,BehaviorTreeConfig const&>(
    (const std::shared_ptr<BT::BehaviorTreeFactory> *)&this->impl_ptr_,
    (const BehaviorTreeConfig *)factory_ptr,
    (const std::shared_ptr<BT::BehaviorTreeFactory> *)config,
    (const BehaviorTreeConfig *)&this->impl_ptr_);
  std::string::basic_string(&this->str_file_path_);
};

// Line 49: range 000000000E10336A-000000000E1033AD
void __cdecl BT::NodeConfigParser::~NodeConfigParser(BT::NodeConfigParser *const this)
{
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::reset(&this->impl_ptr_, 0LL);
  std::string::~string(&this->str_file_path_);
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::~unique_ptr(&this->impl_ptr_);
};

// Line 55: range 000000000E1033AE-000000000E103C0E
std::shared_ptr<BT::BehaviorTree> __cdecl BT::NodeConfigParser::instantiateTree(BT::NodeConfigParser *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  BT::BehaviorTree *v6; // rax
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v7; // rax
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v8; // rax
  const std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>> *p_tree_config_map; // r14
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  BT::NodeConfigParser::Pimpl *v14; // r14
  BT::BehaviorTree *v15; // r15
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // r14
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::unique_ptr<BT::NodeConfigParser::Pimpl>::pointer v21; // rax
  std::shared_ptr<BT::BehaviorTree> result; // rax
  std::shared_ptr<BT::TreeNode> node_parent_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 output_tree_ptr:56 64 16 17 blackboard_ptr:63";
  *(_QWORD *)(v2 + 16) = BT::NodeConfigParser::instantiateTree;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::perf::make_shared<BT::BehaviorTree>();
  if ( std::operator==<BT::NodeConfigParser::Pimpl,std::default_delete<BT::NodeConfigParser::Pimpl>>(
         (const std::unique_ptr<BT::NodeConfigParser::Pimpl> *)(v1 + 8),
         0LL)
    || std::operator==<BT::BehaviorTree>((const std::shared_ptr<BT::BehaviorTree> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "instantiateTree",
      59);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v25,
      (const char (*)[31])"create BehaviorTree is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
  }
  else
  {
    v6 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BT::BehaviorTree::createBlackBoard(v6);
    std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BT::BehaviorTree::getBlackBoard((BT::BehaviorTree *const)(v2 + 64));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/parser/node_config_parser.cpp",
        "instantiateTree",
        66);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v25,
        (const char (*)[46])"create BehaviorTree blackboard_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
    }
    else
    {
      v7 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
      if ( *(_BYTE *)(((unsigned __int64)&v7->config >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v7->config);
      if ( (unsigned __int8)std::string::empty(&v7->config->behavior_tree_entry_id_) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/parser/node_config_parser.cpp",
          "instantiateTree",
          71);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v25,
          (const char (*)[45])"instantiateTree behavior_tree_entry_id empty");
        common::milog::MiLogStream::~MiLogStream(&v25);
        std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
      }
      else
      {
        v8 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
        if ( *(_BYTE *)(((unsigned __int64)&v8->config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v8->config);
        p_tree_config_map = &v8->config->tree_config_map_;
        v10 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
        if ( *(_BYTE *)(((unsigned __int64)&v10->config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v10->config);
        if ( std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>>::count(
               p_tree_config_map,
               &v10->config->behavior_tree_entry_id_) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/parser/node_config_parser.cpp",
            "instantiateTree",
            79);
          v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v25,
                  (const char (*)[35])"start instantiateTree config file:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v1 + 16));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v14 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
          std::shared_ptr<BT::TreeNode>::shared_ptr(&node_parent_ptr, 0LL);
          v15 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          v16 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
          if ( *(_BYTE *)(((unsigned __int64)&v16->config >> 3) + 0x7FFF8000) )
            __asan_report_load8(&v16->config);
          v17 = BT::NodeConfigParser::Pimpl::recursiveCreateTree(
                  v14,
                  &v16->config->behavior_tree_entry_id_,
                  v15,
                  (const BT::BlackboardPtr *)(v2 + 64),
                  &node_parent_ptr,
                  0) != 0;
          std::shared_ptr<BT::TreeNode>::~shared_ptr(&node_parent_ptr);
          if ( v17 )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_ai/parser/node_config_parser.cpp",
              "instantiateTree",
              86);
            v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v24,
                    (const char (*)[31])"instantiateTree create failed:");
            v19 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
            if ( *(_BYTE *)(((unsigned __int64)&v19->config >> 3) + 0x7FFF8000) )
              __asan_report_load8(&v19->config);
            BehaviorTreeConfig::getFileName[abi:cxx11]((std::string *)&v25, v19->config);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&v25);
            std::string::~string(&v25);
            common::milog::MiLogStream::~MiLogStream(&v24);
            std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/parser/node_config_parser.cpp",
              "instantiateTree",
              89);
            v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v24,
                    (const char (*)[28])"instantiateTree succ, file:");
            v21 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
            if ( *(_BYTE *)(((unsigned __int64)&v21->config >> 3) + 0x7FFF8000) )
              __asan_report_load8(&v21->config);
            BehaviorTreeConfig::getFileName[abi:cxx11]((std::string *)&v25, v21->config);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)&v25);
            std::string::~string(&v25);
            common::milog::MiLogStream::~MiLogStream(&v24);
            std::shared_ptr<BT::BehaviorTree>::shared_ptr(
              (std::shared_ptr<BT::BehaviorTree> *const)this,
              (std::shared_ptr<BT::BehaviorTree> *)(v2 + 32));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_ai/parser/node_config_parser.cpp",
            "instantiateTree",
            76);
          v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v25,
                  (const char (*)[59])"instantiateTree behavior_tree_entry_id not exist. tree_id:");
          v12 = std::unique_ptr<BT::NodeConfigParser::Pimpl>::operator->((const std::unique_ptr<BT::NodeConfigParser::Pimpl> *const)(v1 + 8));
          if ( *(_BYTE *)(((unsigned __int64)&v12->config >> 3) + 0x7FFF8000) )
            __asan_report_load8(&v12->config);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            v11,
            &v12->config->behavior_tree_entry_id_);
          common::milog::MiLogStream::~MiLogStream(&v25);
          std::shared_ptr<BT::BehaviorTree>::shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)this, 0LL);
        }
      }
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v2 + 64));
  }
  std::shared_ptr<BT::BehaviorTree>::~shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)(v2 + 32));
  if ( v26 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 95: range 000000000E103C10-000000000E1042EC
int32_t __cdecl BT::NodeConfigParser::Pimpl::recursiveCreateTree(
        BT::NodeConfigParser::Pimpl *const this,
        const std::string *tree_id,
        BT::BehaviorTree *output_tree,
        const BT::BlackboardPtr *blackboard_ptr,
        const BT::TreeNodePtr *node_parent_ptr,
        uint16_t level)
{
  int32_t v6; // r15d
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // rdx
  const std::shared_ptr<BTNodeConfigBase> *v11; // rax
  int v12; // r14d
  std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r14d
  int32_t result; // eax
  std::vector<std::shared_ptr<BTNodeConfigBase>>::iterator __for_begin; // [rsp+48h] [rbp-F8h] BYREF
  std::vector<std::shared_ptr<BTNodeConfigBase>>::iterator __for_end; // [rsp+50h] [rbp-F0h] BYREF
  const std::shared_ptr<BTBehaviorTreeConfig> *cur_tree_config_ptr; // [rsp+58h] [rbp-E8h]
  std::vector<std::shared_ptr<BTNodeConfigBase>> *__for_range; // [rsp+60h] [rbp-E0h]
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+90h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 16 20 child_config_ptr:109 64 32 20 child_logic_name:115";
  *(_QWORD *)(v7 + 16) = BT::NodeConfigParser::Pimpl::recursiveCreateTree;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219021312;
  v9[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config);
  if ( std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>>::count(
         &this->config->tree_config_map_,
         tree_id) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->config);
    cur_tree_config_ptr = std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>>::at(
                            &this->config->tree_config_map_,
                            tree_id);
    if ( std::operator==<BTBehaviorTreeConfig>(cur_tree_config_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/parser/node_config_parser.cpp",
        "recursiveCreateTree",
        104);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v29,
        (const char (*)[31])"cur_tree_config_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v6 = -1;
    }
    else
    {
      __for_range = &std::__shared_ptr_access<BTBehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTBehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)cur_tree_config_ptr)->child_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<BTNodeConfigBase>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<BTNodeConfigBase>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<BTNodeConfigBase> *,std::vector<std::shared_ptr<BTNodeConfigBase>>>(
                &__for_begin,
                &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<std::shared_ptr<BTNodeConfigBase> *,std::vector<std::shared_ptr<BTNodeConfigBase>>>::operator*(&__for_begin);
        std::shared_ptr<BTNodeConfigBase>::shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v7 + 32), v11);
        if ( std::operator==<BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v7 + 32), 0LL) )
        {
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v13);
          v14 = (unsigned __int64)(v13->_vptr_BTNodeConfigBase + 2);
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v13->_vptr_BTNodeConfigBase + 2);
          (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14)(
            v7 + 64,
            v13);
          if ( BT::NodeConfigParser::Pimpl::recursiveCreateNode(
                 this,
                 node_parent_ptr,
                 (const BTNodeConfigBasePtr *)(v7 + 32),
                 output_tree,
                 blackboard_ptr,
                 level) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/parser/node_config_parser.cpp",
              "recursiveCreateTree",
              118);
            v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v29, (const char (*)[9])"tree_id:");
            v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, tree_id);
            v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v16,
                    (const char (*)[33])" recursiveCreateNode child_name:");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v17,
                    (const std::string *)(v7 + 64));
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" failed");
            common::milog::MiLogStream::~MiLogStream(&v29);
            v6 = -1;
            v19 = 0;
          }
          else
          {
            v19 = 1;
          }
          std::string::~string((void *)(v7 + 64));
          if ( v19 == 1 )
            v12 = 2;
          else
            v12 = 1;
        }
        std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v7 + 32));
        if ( v12 && v12 != 2 )
          goto LABEL_30;
        __gnu_cxx::__normal_iterator<std::shared_ptr<BTNodeConfigBase> *,std::vector<std::shared_ptr<BTNodeConfigBase>>>::operator++(&__for_begin);
      }
      v6 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "recursiveCreateTree",
      98);
    v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v29,
            (const char (*)[38])"recursiveCreateTree not find tree_id:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, tree_id);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v6 = -1;
  }
LABEL_30:
  result = v6;
  if ( v30 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 133: range 000000000E1042EE-000000000E1049FC
__int64 __fastcall BT::NodeConfigParser::Pimpl::recursiveCreateNode(
        BT::NodeConfigParser::Pimpl *const this,
        const BT::TreeNodePtr *node_parent_ptr,
        const BT::BlackboardPtr *config_ptr,
        BT::BehaviorTree *output_tree,
        const BT::TreeNodePtr *blackboard_ptr,
        uint16_t level)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // r15d
  __int64 result; // rax
  std::vector<std::shared_ptr<BTNodeConfigBase>>::iterator __for_begin; // [rsp+40h] [rbp-150h] BYREF
  std::vector<std::shared_ptr<BTNodeConfigBase>>::iterator __for_end; // [rsp+48h] [rbp-148h] BYREF
  std::vector<std::shared_ptr<BTNodeConfigBase>> *__for_range; // [rsp+50h] [rbp-140h]
  std::shared_ptr<BTNodeConfigBase> *child_config_ptr; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-130h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-110h] BYREF
  char v34[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v7 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 2 9 level:132 64 16 12 node_ptr:145 96 16 22 control_config_ptr:153 128 32 20 child_logic_name:162";
  *(_QWORD *)(v7 + 16) = BT::NodeConfigParser::Pimpl::recursiveCreateNode;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234688015;
  v9[536862722] = -219021312;
  v9[536862723] = -219021312;
  v9[536862725] = -202116109;
  *(_WORD *)(v7 + 48) = level;
  if ( *(_WORD *)(v7 + 48) <= 0x62u )
  {
    if ( std::operator==<BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)config_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/parser/node_config_parser.cpp",
        "recursiveCreateNode",
        141);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v33,
        (const char (*)[42])"recursiveCreateNode config_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      v13 = BT::BehaviorTree::genGuid(output_tree);
      BT::NodeConfigParser::Pimpl::createNodeFromConfig(
        (BT::NodeConfigParser::Pimpl *const)(v7 + 64),
        (uint32_t)this,
        (const BTNodeConfigBasePtr *)v13,
        config_ptr,
        blackboard_ptr,
        (uint16_t)node_parent_ptr);
      if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v7 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/parser/node_config_parser.cpp",
          "recursiveCreateNode",
          148);
        v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v33,
                (const char (*)[56])"recursiveCreateTree createNodeFromConfig failed, level:");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v14,
          (const unsigned __int16 *)(v7 + 48));
        common::milog::MiLogStream::~MiLogStream(&v33);
        v6 = -1;
      }
      else
      {
        BT::BehaviorTree::addNode(output_tree, (const BT::TreeNodePtr *)(v7 + 64));
        std::dynamic_pointer_cast<BTControlConfig,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v7 + 96));
        if ( std::operator!=<BTControlConfig>((const std::shared_ptr<BTControlConfig> *)(v7 + 96), 0LL) )
        {
          __for_range = &std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96))->child_vec;
          __for_begin._M_current = std::vector<std::shared_ptr<BTNodeConfigBase>>::begin(__for_range)._M_current;
          __for_end._M_current = std::vector<std::shared_ptr<BTNodeConfigBase>>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<BTNodeConfigBase> *,std::vector<std::shared_ptr<BTNodeConfigBase>>>(
                    &__for_begin,
                    &__for_end) )
          {
            child_config_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BTNodeConfigBase> *,std::vector<std::shared_ptr<BTNodeConfigBase>>>::operator*(&__for_begin);
            if ( !std::operator==<BTNodeConfigBase>(child_config_ptr, 0LL) )
            {
              v15 = std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)child_config_ptr);
              if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v15);
              v16 = (unsigned __int64)(v15->_vptr_BTNodeConfigBase + 2);
              if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v15->_vptr_BTNodeConfigBase + 2);
              (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16)(
                v7 + 128,
                v15);
              if ( BT::NodeConfigParser::Pimpl::recursiveCreateNode(
                     this,
                     (const BT::TreeNodePtr *)(v7 + 64),
                     child_config_ptr,
                     output_tree,
                     (const BT::BlackboardPtr *)blackboard_ptr,
                     *(_WORD *)(v7 + 48) + 1) )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_ai/parser/node_config_parser.cpp",
                  "recursiveCreateNode",
                  165);
                v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v32,
                        (const char (*)[28])"recursiveCreateNode parent:");
                v18 = std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_ptr);
                if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v18);
                v19 = (unsigned __int64)(v18->_vptr_BTNodeConfigBase + 2);
                if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v18->_vptr_BTNodeConfigBase + 2);
                (*(void (__fastcall **)(common::milog::MiLogStream *, std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v19)(
                  &v33,
                  v18);
                v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v17,
                        (const std::string *)&v33);
                v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v20,
                        (const char (*)[19])", create sub node:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v21,
                  (const std::string *)(v7 + 128));
                std::string::~string(&v33);
                common::milog::MiLogStream::~MiLogStream(&v32);
                v6 = -1;
                v22 = 0;
              }
              else
              {
                v22 = 1;
              }
              std::string::~string((void *)(v7 + 128));
              if ( v22 != 1 )
                goto LABEL_28;
            }
            __gnu_cxx::__normal_iterator<std::shared_ptr<BTNodeConfigBase> *,std::vector<std::shared_ptr<BTNodeConfigBase>>>::operator++(&__for_begin);
          }
        }
        v6 = 0;
LABEL_28:
        std::shared_ptr<BTControlConfig>::~shared_ptr((std::shared_ptr<BTControlConfig> *const)(v7 + 96));
      }
      std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v7 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "recursiveCreateNode",
      136);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v33, (const char (*)[7])"level:");
    v11 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
            v10,
            (const unsigned __int16 *)(v7 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            v11,
            (const char (*)[44])" too deep than MAX_INCLUDE_RECURSIVE_DEPTH:");
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v12, "c");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
  }
  result = v6;
  if ( v34 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 175: range 000000000E1049FE-000000000E105750
// local variable allocation has failed, the output may be wrong!
BT::TreeNodePtr __cdecl BT::NodeConfigParser::Pimpl::createNodeFromConfig(
        BT::NodeConfigParser::Pimpl *const this,
        uint32_t guid,
        const BTNodeConfigBasePtr *config_ptr,
        const BT::BlackboardPtr *blackboard_ptr,
        const BT::TreeNodePtr *node_parent_ptr,
        uint16_t level)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  BT::TreeNodePtr result; // rax
  std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  int v18; // r14d
  BT::ControlNode *v19; // r14
  bool v20; // r14
  int v21; // r14d
  BT::DecoratorNode *v22; // rax
  std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned int (__fastcall **vptr_BTNodeConfigBase)(std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  const std::shared_ptr<BT::TreeNode> *node_parent_ptra; // [rsp+0h] [rbp-1F0h]
  uint32_t guida; // [rsp+1Ch] [rbp-1D4h]
  std::allocator<char> __a; // [rsp+39h] [rbp-1B7h] BYREF
  unsigned __int16 val; // [rsp+3Ah] [rbp-1B6h] BYREF
  BTNodeConfigType node_config_type; // [rsp+3Ch] [rbp-1B4h]
  common::milog::MiLogStream v48; // [rsp+40h] [rbp-1B0h] BYREF
  char v49[400]; // [rsp+60h] [rbp-190h] BYREF
  unsigned __int16 v50; // [rsp+200h] [rbp+10h]

  guida = (unsigned int)config_ptr;
  node_parent_ptra = (const std::shared_ptr<BT::TreeNode> *)level;
  v6 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 32 16 12 node_ptr:191 64 16 22 control_parent_ptr:210 96 16 24 decorator_parent_ptr:220 128 32"
                        " 14 logic_name:186 192 32 19 str_tree_prefix:230 256 64 13 configure:187";
  *(_QWORD *)(v6 + 16) = BT::NodeConfigParser::Pimpl::createNodeFromConfig;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862725] = -218959118;
  v8[536862727] = -218959118;
  v8[536862730] = -202116109;
  if ( std::operator==<BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)blackboard_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "createNodeFromConfig",
      178);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v48, (const char (*)[22])"config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v48);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
    goto LABEL_44;
  }
  if ( std::operator==<BT::BehaviorTreeFactory>(*(const std::shared_ptr<BT::BehaviorTreeFactory> **)&guid, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "createNodeFromConfig",
      183);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v48, (const char (*)[23])"factory_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v48);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
    goto LABEL_44;
  }
  v10 = std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v10);
  v11 = (unsigned __int64)(v10->_vptr_BTNodeConfigBase + 2);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v10->_vptr_BTNodeConfigBase + 2);
  (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(
    v6 + 128,
    v10);
  BT::NodeConfigure::NodeConfigure((BT::NodeConfigure *const)(v6 + 256));
  *(_DWORD *)(v6 + 312) = guida;
  std::weak_ptr<BT::Blackboard>::operator=<BT::Blackboard>(
    (std::weak_ptr<BT::Blackboard> *const)(v6 + 256),
    (const std::shared_ptr<BT::Blackboard> *)node_parent_ptr);
  v12 = std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12);
  v13 = (unsigned __int64)(v12->_vptr_BTNodeConfigBase + 3);
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12->_vptr_BTNodeConfigBase + 3);
  (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(
    v6 + 64,
    v12);
  std::shared_ptr<BTNodeConfigBase>::operator=(
    (std::shared_ptr<BTNodeConfigBase> *const)(v6 + 296),
    (std::shared_ptr<BTNodeConfigBase> *)(v6 + 64));
  std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 64));
  std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v6 + 32), 0LL);
  v14 = std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(*(const std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const *)&guid);
  if ( BT::BehaviorTreeFactory::isRegisterNode(v14, (const std::string *)(v6 + 128)) )
  {
    v15 = std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(*(const std::__shared_ptr_access<BT::BehaviorTreeFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const *)&guid);
    BT::BehaviorTreeFactory::createNode(
      (const BT::BehaviorTreeFactory *const)(v6 + 96),
      (const std::string *)v15,
      (const BT::NodeConfigure *)(v6 + 128));
    std::shared_ptr<BT::TreeNode>::operator=(
      (std::shared_ptr<BT::TreeNode> *const)(v6 + 32),
      (std::shared_ptr<BT::TreeNode> *)(v6 + 96));
    std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v6 + 96));
    if ( !std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v6 + 32), 0LL) )
    {
      if ( std::operator!=<BT::TreeNode>(node_parent_ptra, 0LL) )
      {
        std::dynamic_pointer_cast<BT::ControlNode,BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v6 + 96));
        v17 = std::operator!=<BT::ControlNode>((const std::shared_ptr<BT::ControlNode> *)(v6 + 96), 0LL);
        std::shared_ptr<BT::ControlNode>::~shared_ptr((std::shared_ptr<BT::ControlNode> *const)(v6 + 96));
        if ( v17 )
        {
          std::dynamic_pointer_cast<BT::ControlNode,BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v6 + 64));
          if ( std::operator==<BT::ControlNode>((const std::shared_ptr<BT::ControlNode> *)(v6 + 64), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_ai/parser/node_config_parser.cpp",
              "createNodeFromConfig",
              213);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v48,
              (const char (*)[30])"control_parent_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v48);
            std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
            v18 = 0;
          }
          else
          {
            v19 = std::__shared_ptr_access<BT::ControlNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ControlNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
            std::weak_ptr<BT::TreeNode>::weak_ptr<BT::TreeNode,void>(
              (std::weak_ptr<BT::TreeNode> *const)(v6 + 96),
              (const std::shared_ptr<BT::TreeNode> *)(v6 + 32));
            BT::ControlNode::addChild(v19, (const BT::TreeNodeWtr *)(v6 + 96));
            std::weak_ptr<BT::TreeNode>::~weak_ptr((std::weak_ptr<BT::TreeNode> *const)(v6 + 96));
            v18 = 1;
          }
          std::shared_ptr<BT::ControlNode>::~shared_ptr((std::shared_ptr<BT::ControlNode> *const)(v6 + 64));
          if ( v18 != 1 )
            goto LABEL_43;
        }
        else
        {
          std::dynamic_pointer_cast<BT::DecoratorNode,BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v6 + 96));
          v20 = std::operator!=<BT::DecoratorNode>((const std::shared_ptr<BT::DecoratorNode> *)(v6 + 96), 0LL);
          std::shared_ptr<BT::DecoratorNode>::~shared_ptr((std::shared_ptr<BT::DecoratorNode> *const)(v6 + 96));
          if ( v20 )
          {
            std::dynamic_pointer_cast<BT::DecoratorNode,BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v6 + 96));
            if ( std::operator==<BT::DecoratorNode>((const std::shared_ptr<BT::DecoratorNode> *)(v6 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_ai/parser/node_config_parser.cpp",
                "createNodeFromConfig",
                223);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v48,
                (const char (*)[32])"decorator_parent_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v48);
              std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
              v21 = 0;
            }
            else
            {
              v22 = std::__shared_ptr_access<BT::DecoratorNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::DecoratorNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
              BT::DecoratorNode::setChild(v22, (const BT::TreeNodePtr *)(v6 + 32));
              v21 = 1;
            }
            std::shared_ptr<BT::DecoratorNode>::~shared_ptr((std::shared_ptr<BT::DecoratorNode> *const)(v6 + 96));
            if ( v21 != 1 )
              goto LABEL_43;
          }
        }
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v6 + 192), 2 * (v50 + 1), 45, &__a);
      std::allocator<char>::~allocator(&__a);
      v23 = std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)blackboard_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v23);
      vptr_BTNodeConfigBase = (unsigned int (__fastcall **)(std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v23->_vptr_BTNodeConfigBase;
      if ( *(_BYTE *)(((unsigned __int64)v23->_vptr_BTNodeConfigBase >> 3) + 0x7FFF8000) )
        __asan_report_load8(v23->_vptr_BTNodeConfigBase);
      node_config_type = (*vptr_BTNodeConfigBase)(v23);
      if ( node_config_type == ACTION )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/parser/node_config_parser.cpp",
          "createNodeFromConfig",
          234);
        v25 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v48, (const char (*)[2])"|");
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)(v6 + 192));
        v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])"<Action ");
        v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v6 + 128));
        v29 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v28, (const char (*)[2])":");
        v30 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
        val = BT::TreeNode::UID(v30);
        v31 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v29, &val);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])">");
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
      else
      {
        if ( node_config_type == CONDITION )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/parser/node_config_parser.cpp",
            "createNodeFromConfig",
            238);
          v32 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v48, (const char (*)[2])"|");
          v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v32,
                  (const std::string *)(v6 + 192));
          v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])"<Condition ");
        }
        else
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/parser/node_config_parser.cpp",
            "createNodeFromConfig",
            242);
          v39 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v48, (const char (*)[2])"|");
          v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v39,
                  (const std::string *)(v6 + 192));
          v34 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v40, (const char (*)[2])"<");
        }
        v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, (const std::string *)(v6 + 128));
        v36 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v35, (const char (*)[2])":");
        v37 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
        val = BT::TreeNode::UID(v37);
        v38 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v36, &val);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v38, (const char (*)[2])">");
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
      std::shared_ptr<BT::TreeNode>::shared_ptr(
        (std::shared_ptr<BT::TreeNode> *const)this,
        (std::shared_ptr<BT::TreeNode> *)(v6 + 32));
      std::string::~string((void *)(v6 + 192));
      goto LABEL_43;
    }
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "createNodeFromConfig",
      203);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v48, (const char (*)[20])"node_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v48);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/parser/node_config_parser.cpp",
      "createNodeFromConfig",
      198);
    v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v48,
            (const char (*)[24])"unkown node logic_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v6 + 128));
    common::milog::MiLogStream::~MiLogStream(&v48);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
LABEL_43:
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v6 + 32));
  BT::NodeConfigure::~NodeConfigure((BT::NodeConfigure *const)(v6 + 256));
  std::string::~string((void *)(v6 + 128));
LABEL_44:
  if ( v49 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
