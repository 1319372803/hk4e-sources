// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_ai_controller.cpp

// Line 30: range 000000000DEDED26-000000000DEDF7A0
int32_t __cdecl GCGAIController::init(GCGAIController *const this, const GCGControllerParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  GCGGameMode *game_mode; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  BT::BehaviorTree *v17; // rax
  BT::BehaviorTree *v18; // r14
  common::milog::MiLogStream *v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-16Ch] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+18h] [rbp-168h]
  const data::GCGGameExcelConfig *game_excel_config_ptr; // [rsp+20h] [rbp-160h]
  const data::GCGDeckExcelConfig *card_group_config_ptr; // [rsp+28h] [rbp-158h]
  const BehaviorTreeConfig *config_ptr; // [rsp+30h] [rbp-150h]
  const data::GCGRuleExcelConfig *rule_config_ptr; // [rsp+38h] [rbp-148h]
  BT::NodeConfigParser v29; // [rsp+40h] [rbp-140h] BYREF
  char v30[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 22 check_pre_exec_func:80 64 4 14 cur_game_id:36 80 4 20 cur_card_group_id:37 96 4 10 rul"
                        "e_id:62 112 16 14 factory_ptr:70 144 48 9 parser:71";
  *(_QWORD *)(v2 + 16) = GCGAIController::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  if ( GCGControllerBase::init(this, param) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v29.str_file_path_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_ai_controller.cpp",
      "init",
      33);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)&v29.str_file_path_,
      (const char (*)[30])"GCGControllerBase::init fail.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    *(_DWORD *)(v2 + 64) = GCGGameMode::getGameId(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    *(_DWORD *)(v2 + 80) = GCGGameMode::getControllerCardGroupId(game_mode, this->controller_id_);
    if ( *(_DWORD *)(v2 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Config = GCGGameMode::getConfig(this->game_mode_);
      gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
      game_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                                gcg_game_config_mgr,
                                *(_DWORD *)(v2 + 64));
      if ( game_excel_config_ptr )
      {
        card_group_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                                  gcg_game_config_mgr,
                                  *(_DWORD *)(v2 + 80));
        if ( card_group_config_ptr )
        {
          Config::getConfig();
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
          config_ptr = BehaviorTreeConfigMgr::findConfig(
                         &v14->design_config_.xml_config_mgr.behavior_tree_mgr,
                         &card_group_config_ptr->behavior_tree_file_name);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
          if ( config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->rule_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)game_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->rule_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&game_excel_config_ptr->rule_id);
            }
            *(_DWORD *)(v2 + 96) = game_excel_config_ptr->rule_id;
            rule_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGRuleExcelConfig(
                                gcg_game_config_mgr,
                                *(_DWORD *)(v2 + 96));
            if ( rule_config_ptr )
            {
              data::GCGRuleExcelConfig::operator=(&this->rule_config_, rule_config_ptr);
              common::tools::perf::make_shared<BT::BehaviorTreeFactory>();
              BT::NodeConfigParser::NodeConfigParser(
                (BT::NodeConfigParser *const)(v2 + 144),
                (const std::shared_ptr<BT::BehaviorTreeFactory> *)(v2 + 112),
                config_ptr);
              BT::NodeConfigParser::instantiateTree(&v29);
              std::shared_ptr<BT::BehaviorTree>::operator=(
                &this->behavior_tree_ptr_,
                (std::shared_ptr<BT::BehaviorTree> *)&v29);
              std::shared_ptr<BT::BehaviorTree>::~shared_ptr((std::shared_ptr<BT::BehaviorTree> *const)&v29);
              if ( std::operator==<BT::BehaviorTree>(&this->behavior_tree_ptr_, 0LL) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v29.str_file_path_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/controller/gcg_ai_controller.cpp",
                  "init",
                  75);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)&v29.str_file_path_,
                  (const char (*)[37])"[[AI]] behavior_tree_ptr_ is nullptr");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
                v5 = -1;
              }
              else
              {
                v17 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->behavior_tree_ptr_);
                BT::BehaviorTree::printCurrentState(v17);
                v18 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->behavior_tree_ptr_);
                std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::function<GCGAIController::init(GCGControllerParam const&)::{lambda(std::shared_ptr<BT::BehaviorTree> const&)#1},void,void>(
                  (std::function<bool(const std::shared_ptr<BT::BehaviorTree>&)> *const)&v29.str_file_path_,
                  0);
                BT::BehaviorTree::setCheckPreExecFunc(
                  v18,
                  (BT::BehaviorTree::CheckPreExecFuncType *)&v29.str_file_path_);
                std::function<bool ()(std::shared_ptr<BT::BehaviorTree> const&)>::~function((std::function<bool(const std::shared_ptr<BT::BehaviorTree>&)> *const)&v29.str_file_path_);
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v29.str_file_path_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/controller/gcg_ai_controller.cpp",
                  "init",
                  107);
                v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        (common::milog::MiLogStream *const)&v29.str_file_path_,
                        (const char (*)[30])"GCGAIController init succ. c:");
                if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->controller_id_);
                }
                val = this->controller_id_;
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
                v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v20,
                        (const char (*)[14])", card_group:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
                v5 = 0;
              }
              BT::NodeConfigParser::~NodeConfigParser((BT::NodeConfigParser *const)(v2 + 144));
              std::shared_ptr<BT::BehaviorTreeFactory>::~shared_ptr((std::shared_ptr<BT::BehaviorTreeFactory> *const)(v2 + 112));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v29.str_file_path_,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/controller/gcg_ai_controller.cpp",
                "init",
                66);
              v16 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                      (common::milog::MiLogStream *const)&v29.str_file_path_,
                      (const char (*)[67])"GCGAIController init failed, findGCGRuleExcelConfig fail. rule_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 96));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
              v5 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v29.str_file_path_,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/controller/gcg_ai_controller.cpp",
              "init",
              59);
            v15 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                    (common::milog::MiLogStream *const)&v29.str_file_path_,
                    (const char (*)[71])"GCGAIController init failed, for behavior_tree config not exist, file:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v15,
              &card_group_config_ptr->behavior_tree_file_name);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
            v5 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v29.str_file_path_,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/controller/gcg_ai_controller.cpp",
            "init",
            53);
          v13 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                  (common::milog::MiLogStream *const)&v29.str_file_path_,
                  (const char (*)[69])"GCGAIController init failed, GCGDeckExcelConfig not find card_group:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
          v5 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v29.str_file_path_,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/controller/gcg_ai_controller.cpp",
          "init",
          47);
        v12 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                (common::milog::MiLogStream *const)&v29.str_file_path_,
                (const char (*)[66])"GCGAIController init failed, GCGGameExcelConfig not find game_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
        v5 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v29.str_file_path_,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/controller/gcg_ai_controller.cpp",
        "init",
        40);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             (common::milog::MiLogStream *const)&v29.str_file_path_,
             (const char (*)[39])"GCGAIController init failed, gamemode:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v8, (const char (*)[4])",c:");
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->controller_id_);
      }
      val = this->controller_id_;
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v10,
        (const char (*)[31])" not find set valid card_group");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29.str_file_path_);
      v5 = -1;
    }
  }
  result = v5;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 80: range 000000000DEDE91C-000000000DEDED25
bool __cdecl GCGAIController::init(GCGControllerParam const&)::{lambda(std::shared_ptr<BT::BehaviorTree> const&)#1}::operator()(
        const GCGAIController::init::<lambda(const BehaviorTreePtr&)> *const __closure,
        const BT::BehaviorTreePtr *tree_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  BT::Blackboard *v6; // rax
  common::milog::MiLogStream *v7; // r14
  BT::Blackboard *v8; // rax
  common::milog::MiLogStream *v9; // r14
  bool result; // al
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  char v13[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 17 blackboard_ptr:87 64 32 19 global_phase_key:92 128 32 19 global_logic_key:98";
  *(_QWORD *)(v2 + 16) = GCGAIController::init(GCGControllerParam const&)::{lambda(std::shared_ptr<BT::BehaviorTree> const&)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  if ( std::operator==<BT::BehaviorTree>(tree_ptr, 0LL) )
  {
    v5 = 0;
  }
  else
  {
    std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)tree_ptr);
    BT::BehaviorTree::getBlackBoard((BT::BehaviorTree *const)(v2 + 32));
    if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v2 + 32), 0LL) )
    {
      v5 = 0;
    }
    else
    {
      BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11]((std::string *)(v2 + 64), BLACK_BOARD_GLOBAL_KEY_PHASE);
      v6 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( BT::Blackboard::getAny(v6, (const std::string *)(v2 + 64)) )
      {
        BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
          (std::string *)(v2 + 128),
          BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
        v8 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( BT::Blackboard::getAny(v8, (const std::string *)(v2 + 128)) )
        {
          v5 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/controller/gcg_ai_controller.cpp",
            "operator()",
            101);
          v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                 &v11,
                 (const char (*)[21])"[[AI]] not find key:");
          BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v2 + 128));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v11);
          v5 = 0;
        }
        std::string::~string((void *)(v2 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/controller/gcg_ai_controller.cpp",
          "operator()",
          95);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               &v11,
               (const char (*)[21])"[[AI]] not find key:");
        BT::BlackboardUtil::resolveGlobalKey(&val, (const std::string *)(v2 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v11);
        v5 = 0;
      }
      std::string::~string((void *)(v2 + 64));
    }
    std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v2 + 32));
  }
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 112: range 000000000DEDF7A2-000000000DEDF82A
void __cdecl GCGAIController::onGameStart(GCGAIController *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/controller/gcg_ai_controller.cpp",
    "onGameStart",
    113);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v1,
    (const char (*)[28])"[[AI]] onGameStart setReady");
  common::milog::MiLogStream::~MiLogStream(&v1);
  GCGControllerBase::setReady(this);
};

// Line 119: range 000000000DEDF82C-000000000DEDFD01
int32_t __cdecl GCGAIController::onTick(GCGAIController *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGGameMode *GameMode; // rax
  GCGDuel *Duel; // r14
  GCGControllerValue ControllerId; // eax
  signed int v8; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // r14
  unsigned int v10; // eax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // r14
  GCGGameMode *v15; // rax
  unsigned int GameUid; // eax
  const char *v17; // rax
  int32_t v18; // r14d
  int32_t result; // eax
  unsigned int player_uid; // [rsp+20h] [rbp-260h]
  const GCGGameMode *game_mode; // [rsp+28h] [rbp-258h]
  char v22[592]; // [rsp+30h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 27 opponent_controller_ptr:122 80 16 25 player_controller_ptr:123 112 16 6 ss:125 144 32"
                        " 13 task_desc:135 208 257 10 holder:142";
  *(_QWORD *)(v2 + 16) = GCGAIController::onTick;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862734] = -218038272;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  GameMode = GCGControllerBase::getGameMode(this);
  Duel = GCGGameMode::getDuel(GameMode);
  ControllerId = GCGControllerBase::getControllerId(this);
  GCGDuel::getOtherControllerId(Duel, ControllerId);
  v8 = (unsigned int)GCGControllerBase::getGameMode(this);
  GCGGameMode::getController((GCGGameMode *const)(v2 + 48), (GCGControllerValue)v8);
  std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v2 + 80));
  game_mode = GCGControllerBase::getGameMode(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112));
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112),
         "AI c:");
  v10 = GCGControllerBase::getControllerId(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, v10);
  if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 80), 0LL) )
  {
    v11 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    player_uid = GCGPlayerController::getPlayerUid(v11);
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112),
            " uid:");
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, player_uid);
  }
  else if ( GCGGameMode::isBothAITask(game_mode) )
  {
    GCGGameMode::getExtraBothAITaskDesc[abi:cxx11]((std::string *)(v2 + 144), game_mode);
    v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112),
            " t:");
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, (const std::string *)(v2 + 144));
    std::string::~string((void *)(v2 + 144));
  }
  else
  {
    v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112),
            " g:");
    v15 = GCGControllerBase::getGameMode(this);
    GameUid = GCGGameMode::getGameUid(v15);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, GameUid);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    (std::string *)(v2 + 144),
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112));
  v17 = (const char *)std::string::c_str(v2 + 144);
  common::milog::MilogContextHolder::MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 208), "%s", v17);
  std::string::~string((void *)(v2 + 144));
  v18 = GCGAIController::drivenAI(this, now_ms);
  common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 208));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 112));
  std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 80));
  std::shared_ptr<GCGControllerBase>::~shared_ptr((std::shared_ptr<GCGControllerBase> *const)(v2 + 48));
  result = v18;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 149: range 000000000DEDFD02-000000000DEE0C0B
__int64 __fastcall GCGAIController::drivenAI(GCGAIController *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  GCGPhaseBase *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  char v14; // al
  uint64_t v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  GCGPhaseBase *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  int v30; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  common::milog::MiLogStream *v41; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+10h] [rbp-120h] BYREF
  proto::GCGPhaseType phase_type; // [rsp+14h] [rbp-11Ch]
  BT::BlackboardInnerPhaseType inner_phase_type; // [rsp+18h] [rbp-118h]
  float time_cost; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v47; // [rsp+20h] [rbp-110h] BYREF
  char v48[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:210 48 4 22 think_time_seconds:188 64 8 16 mean_cost_us:220 96 8 10 now_ms:148 128 "
                        "16 17 cur_phase_ptr:161 160 16 9 timer:213";
  *(_QWORD *)(v2 + 16) = GCGAIController::drivenAI;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_QWORD *)(v2 + 96) = now_ms;
  if ( GCGControllerBase::getIsIgnoreThink(this) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ai_finish_think_time_ms_);
  if ( this->ai_finish_think_time_ms_ && this->ai_finish_think_time_ms_ > *(_QWORD *)(v2 + 96) )
    v5 = 1;
  else
LABEL_10:
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/controller/gcg_ai_controller.cpp",
      "drivenAI",
      152);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v47,
           (const char (*)[25])"[[AI THINK DURING]] now:");
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v2 + 96));
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])", finish:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &this->ai_finish_think_time_ms_);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v9 = 0;
    goto LABEL_71;
  }
  if ( std::operator==<BT::BehaviorTree>(&this->behavior_tree_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_ai_controller.cpp",
      "drivenAI",
      157);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v47,
      (const char (*)[37])"[[AI]] behavior_tree_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v47);
    v9 = -1;
    goto LABEL_71;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 128));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_ai_controller.cpp",
      "drivenAI",
      164);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v47,
      (const char (*)[32])"[[AI]] cur_phase_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v47);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v11 = (unsigned __int64)(v10->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10->_vptr_GCGPhaseBase + 3);
    phase_type = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10);
    if ( !GCGAIController::checkValidPhase(this, phase_type) )
    {
      v9 = 0;
    }
    else
    {
      v12 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->controller_id_);
      }
      if ( !GCGPhaseBase::isAllowController(v12, this->controller_id_) )
      {
        v9 = 0;
      }
      else
      {
        inner_phase_type = BT::BlackboardUtil::convertToBlackboardPhase(phase_type);
        if ( inner_phase_type )
        {
          if ( GCGControllerBase::getIsIgnoreThink(this) )
            goto LABEL_38;
          if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->ai_finish_think_time_ms_);
          if ( this->ai_finish_think_time_ms_ )
LABEL_38:
            v14 = 0;
          else
            v14 = 1;
          if ( v14 )
          {
            *(_DWORD *)(v2 + 48) = GCGAIController::getThinkTime(this, inner_phase_type);
            if ( *(_DWORD *)(v2 + 48) )
            {
              v15 = (unsigned int)(1000 * *(_DWORD *)(v2 + 48)) + *(_QWORD *)(v2 + 96);
              if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
                __asan_report_store8(&this->ai_finish_think_time_ms_);
              this->ai_finish_think_time_ms_ = v15;
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/controller/gcg_ai_controller.cpp",
                "drivenAI",
                193);
              v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      &v47,
                      (const char (*)[24])"[[AI THINK START]] now:");
              v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v16,
                      (const unsigned __int64 *)(v2 + 96));
              v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v17,
                      (const char (*)[10])", finish:");
              v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v18,
                      &this->ai_finish_think_time_ms_);
              v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v19,
                      (const char (*)[13])",think time:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v2 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])", phase:");
              val = phase_type;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
              common::milog::MiLogStream::~MiLogStream(&v47);
              v9 = 0;
              goto LABEL_70;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/controller/gcg_ai_controller.cpp",
              "drivenAI",
              200);
            v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v47,
                    (const char (*)[25])"[[AI THINK FINISH]] now:");
            v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v23,
                    (const unsigned __int64 *)(v2 + 96));
            v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])", finish:");
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v25,
              &this->ai_finish_think_time_ms_);
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
          v26 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->controller_id_);
          }
          if ( !GCGPhaseBase::checkValidOpOrderAndUpdate(v26, this->controller_id_) )
          {
            GCGControllerBase::doDefaultOp(this);
            if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
              __asan_report_store8(&this->ai_finish_think_time_ms_);
            this->ai_finish_think_time_ms_ = 0LL;
            v9 = 0;
          }
          else
          {
            *(_DWORD *)(v2 + 32) = 0;
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/controller/gcg_ai_controller.cpp",
              "drivenAI",
              211);
            v27 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v47,
                    (const char (*)[20])"[[AI]] start phase:");
            *(_DWORD *)(v2 + 48) = phase_type;
            v28 = common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)(v2 + 48));
            v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v28,
                    (const char (*)[17])", controller_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->controller_id_);
            }
            val = this->controller_id_;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            common::milog::MiLogStream::~MiLogStream(&v47);
            common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
            *(_DWORD *)(v2 + 32) = GCGAIController::doAction(this, inner_phase_type);
            time_cost = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160))
                      / 1000.0;
            v30 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&this->total_dirven_us_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->total_dirven_us_);
            this->total_dirven_us_ += v30;
            if ( *(_BYTE *)(((unsigned __int64)&this->total_dirven_count_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->total_dirven_count_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->total_dirven_count_);
            }
            if ( ++this->total_dirven_count_ > 9 )
            {
              *(_QWORD *)(v2 + 64) = this->total_dirven_us_ / this->total_dirven_count_;
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/controller/gcg_ai_controller.cpp",
                "drivenAI",
                221);
              v31 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      &v47,
                      (const char (*)[54])"[[AI]] controller Mean Tick time total_dirven_count_:");
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      &this->total_dirven_count_);
              v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v32,
                      (const char (*)[20])", total_dirven_us_:");
              v34 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v33,
                      &this->total_dirven_us_);
              v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])", mean:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v35,
                (const unsigned __int64 *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream(&v47);
              if ( *(_BYTE *)(((unsigned __int64)&this->total_dirven_count_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->total_dirven_count_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&this->total_dirven_count_);
              }
              this->total_dirven_count_ = 0;
              if ( *(_BYTE *)(((unsigned __int64)&this->total_dirven_us_ >> 3) + 0x7FFF8000) )
                __asan_report_store8(&this->total_dirven_us_);
              this->total_dirven_us_ = 0LL;
            }
            if ( *(_DWORD *)(v2 + 32) )
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/card_game/controller/gcg_ai_controller.cpp",
                "drivenAI",
                227);
              v36 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v47,
                      (const char (*)[29])"[[AI]] doAction failed, ret:");
              v37 = common::milog::MiLogStream::operator<<<int,(int *)0>(v36, (const int *)(v2 + 32));
              v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])", phase:");
              *(_DWORD *)(v2 + 48) = phase_type;
              v39 = common::milog::MiLogStream::operator<<<int,(int *)0>(v38, (const int *)(v2 + 48));
              v40 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v39,
                      (const char (*)[17])", controller_id:");
              if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->controller_id_);
              }
              val = this->controller_id_;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
              common::milog::MiLogStream::~MiLogStream(&v47);
              GCGControllerBase::doDefaultOp(this);
            }
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/controller/gcg_ai_controller.cpp",
              "drivenAI",
              231);
            v41 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v47,
                    (const char (*)[18])"[[AI]] end phase:");
            val = phase_type;
            common::milog::MiLogStream::operator<<<int,(int *)0>(v41, (const int *)&val);
            common::milog::MiLogStream::~MiLogStream(&v47);
            if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
              __asan_report_store8(&this->ai_finish_think_time_ms_);
            this->ai_finish_think_time_ms_ = 0LL;
            v9 = *(_DWORD *)(v2 + 32);
            common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
          }
          goto LABEL_70;
        }
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/controller/gcg_ai_controller.cpp",
          "drivenAI",
          181);
        v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v47,
                (const char (*)[31])"[[AI]] doDefaultOp phase type:");
        val = phase_type;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v47);
        GCGControllerBase::doDefaultOp(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&this->ai_finish_think_time_ms_);
        this->ai_finish_think_time_ms_ = 0LL;
        v9 = 0;
      }
    }
  }
LABEL_70:
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 128));
LABEL_71:
  result = v9;
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 237: range 000000000DEE0C0C-000000000DEE0C54
bool __cdecl GCGAIController::checkValidPhase(const GCGAIController *const this, GCGPhaseType phase_type)
{
  return (unsigned int)phase_type <= GCG_PHASE_REROLL && ((1LL << phase_type) & 0x4BC) != 0;
};

// Line 262: range 000000000DEE0C56-000000000DEE0F2A
uint32_t __cdecl GCGAIController::getThinkTime(
        GCGAIController *const this,
        BT::BlackboardInnerPhaseType inner_phase_type)
{
  GCGGameMode *GameMode; // rax
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v4; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  unsigned int *v10; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  uint32_t think_time_seconds; // [rsp+20h] [rbp-50h]
  uint32_t think_min_time_seconds; // [rsp+24h] [rbp-4Ch]
  uint32_t think_max_time_seconds; // [rsp+28h] [rbp-48h]
  uint32_t cur_round_num; // [rsp+2Ch] [rbp-44h]
  std::vector<unsigned int> *think_time_vec_ptr; // [rsp+30h] [rbp-40h]
  const std::vector<unsigned int> *think_time_vec; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  think_time_seconds = 0;
  think_min_time_seconds = 0;
  think_max_time_seconds = 0;
  think_time_vec_ptr = 0LL;
  if ( inner_phase_type == CONDITION_PHASE_TYPE_DRAW )
  {
    think_time_vec_ptr = &this->rule_config_.ai_redraw_think_time;
  }
  else if ( inner_phase_type <= CONDITION_PHASE_TYPE_DRAW )
  {
    switch ( inner_phase_type )
    {
      case CONDITION_PHASE_TYPE_CHANGE_ONSTAGE:
        think_time_vec_ptr = &this->rule_config_.ai_select_on_stage_think_time;
        break;
      case CONDITION_PHASE_TYPE_REROLL:
        think_time_vec_ptr = &this->rule_config_.ai_reroll_think_time;
        break;
      case CONDITION_PHASE_TYPE_ACTION:
        GameMode = GCGControllerBase::getGameMode(this);
        Duel = GCGGameMode::getDuel(GameMode);
        cur_round_num = GCGDuel::getRound(Duel);
        if ( *(_BYTE *)(((unsigned __int64)&this->last_main_phase_round_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_main_phase_round_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->last_main_phase_round_num_);
        }
        if ( this->last_main_phase_round_num_ && cur_round_num == this->last_main_phase_round_num_ )
        {
          think_time_vec_ptr = &this->rule_config_.ai_normal_action_think_time;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->last_main_phase_round_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->last_main_phase_round_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->last_main_phase_round_num_);
          }
          this->last_main_phase_round_num_ = cur_round_num;
          think_time_vec_ptr = &this->rule_config_.ai_first_action_think_time;
        }
        break;
    }
  }
  if ( think_time_vec_ptr )
  {
    think_time_vec = think_time_vec_ptr;
    if ( std::vector<unsigned int>::size(think_time_vec_ptr) == 2 )
    {
      v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 think_time_vec,
                                                                                                 1uLL);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v8 = *v7;
      v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 think_time_vec,
                                                                                                 0LL);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      return common::tools::RandomUtils::rand<unsigned int>(*v10, v8);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/controller/gcg_ai_controller.cpp",
      "getThinkTime",
      307);
    v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v18,
           (const char (*)[49])"think_time_vec_ptr is nullptr, inner_phase_type:");
    val = inner_phase_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return 0;
  }
};

// Line 322: range 000000000DEE0F2C-000000000DEE1441
__int64 __fastcall GCGAIController::doAction(
        GCGAIController *const this,
        BT::BlackboardInnerPhaseType inner_phase_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  BT::Blackboard *v7; // rax
  BT::Blackboard *v8; // r14
  BT::BehaviorTree *v9; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-148h] BYREF
  std::enable_shared_from_this<GCGAIController> v12; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-130h] BYREF
  char v14[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 20 inner_phase_type:321 64 16 18 blackboard_ptr:334 96 32 20 global_phase_key:341 160 32 "
                        "20 global_logic_key:344";
  *(_QWORD *)(v2 + 16) = GCGAIController::doAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = inner_phase_type;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( std::operator==<BT::BehaviorTree>(&this->behavior_tree_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/controller/gcg_ai_controller.cpp",
        "doAction",
        331);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v13,
        (const char (*)[37])"[[AI]] behavior_tree_ptr_ is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = -1;
    }
    else
    {
      std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->behavior_tree_ptr_);
      BT::BehaviorTree::getBlackBoard((BT::BehaviorTree *const)(v2 + 64));
      if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/controller/gcg_ai_controller.cpp",
          "doAction",
          337);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v13,
          (const char (*)[33])"[[AI]] blackboard_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v13);
        v6 = -1;
      }
      else
      {
        BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11]((std::string *)(v2 + 96), BLACK_BOARD_GLOBAL_KEY_PHASE);
        v7 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BT::Blackboard::set<BT::BlackboardInnerPhaseType>(
          v7,
          (const std::string *)(v2 + 96),
          (const BT::BlackboardInnerPhaseType *)(v2 + 48));
        BT::BlackboardUtil::getBlackboardGlobalKey[abi:cxx11](
          (std::string *)(v2 + 160),
          BLACK_BOARD_GLOBAL_KEY_TYPE_CONTEXT);
        v8 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::enable_shared_from_this<GCGAIController>::shared_from_this(&v12);
        BT::Blackboard::set<std::shared_ptr<GCGAIController>>(
          v8,
          (const std::string *)(v2 + 160),
          (const std::shared_ptr<GCGAIController> *)&v12);
        std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)&v12);
        v9 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->behavior_tree_ptr_);
        if ( BT::BehaviorTree::tickRoot(v9) == SUCCESS )
        {
          v6 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/controller/gcg_ai_controller.cpp",
            "doAction",
            349);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v13,
            (const char (*)[36])"[[AI]] behavior_tree execute failed");
          common::milog::MiLogStream::~MiLogStream(&v13);
          v6 = -1;
        }
        std::string::~string((void *)(v2 + 160));
        std::string::~string((void *)(v2 + 96));
      }
      std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_ai_controller.cpp",
      "doAction",
      326);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v13,
           (const char (*)[56])"[[AI]] inner_phase_type is not valid, inner_phase_type:");
    val = *(_DWORD *)(v2 + 48);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
