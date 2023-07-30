// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/game_mode/gcg_game_mode.cpp

// Line 36: range 000000000D76EA44-000000000D76F6A2
void __cdecl GCGGameMode::GCGGameMode(GCGGameMode *const this, uint32_t game_uid)
{
  uint32_t v2; // ecx
  uint32_t v3; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-35h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-34h]
  std::shared_ptr<proto::GCGOperationReplay> __r; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<Config> v9[2]; // [rsp+30h] [rbp-20h] BYREF

  std::enable_shared_from_this<GCGGameMode>::enable_shared_from_this(this);
  GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
    &this->GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>,
    this);
  std::shared_ptr<GCGConfigMgr>::shared_ptr(&this->gcg_config_mgr_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_id_);
  }
  this->game_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_create_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_create_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->try_create_time_);
  }
  this->try_create_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time_);
  }
  this->create_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_time_);
  }
  this->stop_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_uid_);
  }
  this->game_uid_ = game_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_code_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->verify_code_);
  }
  this->verify_code_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seed_);
  }
  this->seed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->business_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->business_type_);
  }
  this->business_type_ = GCG_GAME_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_time_);
  }
  this->last_recv_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forbid_relogin_client_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forbid_relogin_client_version_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forbid_relogin_client_version_);
  }
  this->forbid_relogin_client_version_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_);
  this->is_running_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_over_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_over_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_game_over_);
  }
  this->is_game_over_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 106) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_processing_);
  }
  this->is_processing_ = 0;
  GCGRule::GCGRule(&this->rule_);
  GCGDuel::GCGDuel(&this->duel_, this);
  GCGPhaseMgr::GCGPhaseMgr(&this->phase_mgr_, this);
  GCGActionMgr::GCGActionMgr(&this->action_mgr_, this);
  GCGCardMgr::GCGCardMgr(&this->card_mgr_, this);
  GCGSkillLogic::GCGSkillLogic(&this->skill_logic_, this);
  GCGStatistics::GCGStatistics(&this->statistics_, this);
  if ( *(_WORD *)(((unsigned __int64)&this->msg_pack_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->msg_pack_ptr_, this);
  common::tools::perf::make_shared<GCGMsgPack>();
  std::vector<std::shared_ptr<GCGMsgPack>>::vector(&this->wait_send_msg_pack_vec_);
  std::vector<std::shared_ptr<GCGMsgPack>>::vector(&this->history_msg_pack_vec_);
  std::vector<GCGCardDetailInfo>::vector(&this->history_card_vec_);
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::map(&this->controller_map_);
  std::map<unsigned int,proto::GCGControllerValue>::map(&this->uid_map_);
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->controller_card_group_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_controller_id_);
  }
  this->win_controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_reason_);
  }
  this->end_reason_ = GCG_END_REASON_DEFAULT;
  GCGSkillPreviewContext::GCGSkillPreviewContext(&this->global_skill_preview_context_);
  if ( *(char *)(((unsigned __int64)&this->is_during_preview_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_during_preview_);
  this->is_during_preview_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_break_by_special_ask_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 79) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_break_by_special_ask_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_break_by_special_ask_);
  }
  this->is_need_break_by_special_ask_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_save_operation_);
  }
  this->is_save_operation_ = 1;
  std::shared_ptr<proto::GCGOperationReplay>::shared_ptr(&this->operation_replay_ptr_, 0LL);
  if ( *(char *)(((unsigned __int64)&this->is_gm_set_look_opponent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gm_set_look_opponent_);
  this->is_gm_set_look_opponent_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_stop_timer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 55) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_stop_timer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_gm_stop_timer_);
  }
  this->is_gm_stop_timer_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->operation_seq_);
  }
  this->operation_seq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_task_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->both_ai_task_id_);
  this->both_ai_task_id_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->both_ai_subtask_id_);
  }
  this->both_ai_subtask_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_both_ai_task_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_both_ai_task_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_both_ai_task_);
  }
  this->is_both_ai_task_ = 0;
  std::shared_ptr<common::tools::MiTimer>::shared_ptr(&this->timer_ptr_, 0LL);
  if ( *(char *)(((unsigned __int64)&this->is_preview_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_preview_open_);
  this->is_preview_open_ = 1;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->trans_no_, _str, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round_start_time_);
  }
  this->cur_round_start_time_ = 0;
  now = common::tools::TimeUtils::getNow();
  v2 = common::tools::RandomUtils::rand<unsigned int>(1u, 0xFFFFFFFF);
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_code_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->verify_code_);
  }
  this->verify_code_ = v2;
  v3 = common::tools::RandomUtils::rand<unsigned int>(1u, 0xFFFFFFFF);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seed_);
  }
  this->seed_ = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time_);
  }
  this->create_time_ = now;
  common::tools::perf::make_shared<proto::GCGOperationReplay>();
  std::shared_ptr<proto::GCGOperationReplay>::operator=(&this->operation_replay_ptr_, &__r);
  std::shared_ptr<proto::GCGOperationReplay>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_time_);
  }
  this->last_recv_time_ = now;
  Config::getConfig();
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
  std::shared_ptr<GCGConfigMgr>::operator=(&this->gcg_config_mgr_ptr_, &v4->design_config_.gcg_config_mgr_ptr);
  std::shared_ptr<Config>::~shared_ptr(v9);
};

// Line 49: range 000000000D76F6A4-000000000D76F86D
void __cdecl GCGGameMode::~GCGGameMode(GCGGameMode *const this)
{
  common::tools::MiTimer *v1; // rax

  if ( std::operator!=<common::tools::MiTimer>(&this->timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v1);
    std::__shared_ptr<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->timer_ptr_);
  }
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::clear(&this->controller_map_);
  std::string::~string(&this->trans_no_);
  std::shared_ptr<common::tools::MiTimer>::~shared_ptr(&this->timer_ptr_);
  std::shared_ptr<proto::GCGOperationReplay>::~shared_ptr(&this->operation_replay_ptr_);
  GCGSkillPreviewContext::~GCGSkillPreviewContext(&this->global_skill_preview_context_);
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->controller_card_group_map_);
  std::map<unsigned int,proto::GCGControllerValue>::~map(&this->uid_map_);
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::~map(&this->controller_map_);
  std::vector<GCGCardDetailInfo>::~vector(&this->history_card_vec_);
  std::vector<std::shared_ptr<GCGMsgPack>>::~vector(&this->history_msg_pack_vec_);
  std::vector<std::shared_ptr<GCGMsgPack>>::~vector(&this->wait_send_msg_pack_vec_);
  std::shared_ptr<GCGMsgPack>::~shared_ptr(&this->msg_pack_ptr_);
  GCGStatistics::~GCGStatistics(&this->statistics_);
  GCGSkillLogic::~GCGSkillLogic(&this->skill_logic_);
  GCGCardMgr::~GCGCardMgr(&this->card_mgr_);
  GCGActionMgr::~GCGActionMgr(&this->action_mgr_);
  GCGPhaseMgr::~GCGPhaseMgr(&this->phase_mgr_);
  GCGDuel::~GCGDuel(&this->duel_);
  GCGRule::~GCGRule(&this->rule_);
  std::shared_ptr<GCGConfigMgr>::~shared_ptr(&this->gcg_config_mgr_ptr_);
  std::enable_shared_from_this<GCGGameMode>::~enable_shared_from_this(this);
};

// Line 60: range 000000000D76F86E-000000000D76FB0F
std::mt19937 *__cdecl GCGGameMode::gen(GCGGameMode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  GCGGameModeRuntimeData *RuntimeData; // rax
  common::milog::MiLogStream *v5; // r15
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v6; // r14
  unsigned __int64 val; // [rsp+10h] [rbp-1520h] BYREF
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *gen; // [rsp+18h] [rbp-1518h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-1510h] BYREF
  char v11[5360]; // [rsp+40h] [rbp-14F0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_7(5312LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 5000 11 temp_gen:64";
  *(_QWORD *)(v1 + 16) = GCGGameMode::gen;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862877] = -218103808;
  v3[536862878] = -202116109;
  v3[536862879] = -202116109;
  v3[536862880] = -202116109;
  v3[536862881] = -202116109;
  v3[536862882] = -202116109;
  v3[536862883] = -202116109;
  v3[536862884] = -202116109;
  v3[536862885] = -202116109;
  RuntimeData = GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>);
  gen = &RuntimeData->random_gen_;
  if ( *(char *)(((unsigned __int64)RuntimeData >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&RuntimeData->random_gen_._M_p + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)RuntimeData - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&RuntimeData->random_gen_._M_p + 7) >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load_n(RuntimeData, 5000LL);
  }
  qmemcpy((void *)(v1 + 48), gen, 0x1388uLL);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/game_mode/gcg_game_mode.cpp",
    func,
    65);
  v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"[RANDOM] gen: ");
  val = std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::operator()((std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)(v1 + 48));
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  v6 = gen;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8274) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF827C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8284) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF828C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8294) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_7(v1, 5312LL, v11);
  }
  return v6;
};

// Line 71: range 000000000D76FB10-000000000D76FD01
void __fastcall GCGGameMode::setSeed(GCGGameMode *const this, uint32_t seed)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 seed:70";
  *(_QWORD *)(v2 + 16) = GCGGameMode::setSeed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = seed;
  v5 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seed_);
  }
  this->seed_ = v5;
  v6 = GCGGameMode::gen(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->seed_);
  }
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
    v6,
    this->seed_);
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/game_mode/gcg_game_mode.cpp",
    "setSeed",
    74);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[RANDOM] seed: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 78: range 000000000D76FD02-000000000D771893
int32_t __cdecl GCGGameMode::init(GCGGameMode *const this, GCGGameModeParam *param)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  GCGGameMode **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  common::milog::MiLogStream *v8; // rax
  std::_Bind<void (GCGGameMode::*(GCGGameMode*,std::_Placeholder<1>))(long unsigned int)> *v9; // rax
  uint32_t try_create_time; // ecx
  uint32_t game_id; // ecx
  GCGGameBusinessType business_type; // ecx
  uint32_t seed; // ecx
  common::milog::MiLogStream *v14; // rax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v15; // rcx
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  const GCGGameExcelConfigMgr *v19; // rcx
  common::milog::MiLogStream *v20; // rax
  const GCGConfigMgr *v21; // rax
  uint32_t GCGRoundLimit; // edx
  uint32_t first_draw_num; // ecx
  uint32_t second_draw_num; // ecx
  uint32_t draw_card_num; // ecx
  uint32_t hand_card_limit; // ecx
  data::GCGGameType game_type; // ecx
  uint32_t start_bonus_time; // ecx
  uint32_t roll_bonus_time; // ecx
  uint32_t round_time; // ecx
  uint32_t turn_time; // ecx
  uint64_t v32; // rcx
  uint32_t disconnect_time_out; // ecx
  uint32_t init_time_out; // ecx
  data::GCGInitHand init_hand; // ecx
  bool is_ignore_deck_shuffle; // cl
  bool is_ignore_redraw; // cl
  uint32_t init_onstage_character_index; // ecx
  uint32_t enemy_init_onstage_character_index; // ecx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r15
  unsigned int *v49; // rax
  uint32_t *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  int v53; // r15d
  GCGSkillLogic *p_skill_logic; // r15
  data::GCGEffectElementType element_type2; // esi
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  int32_t result; // eax
  __m128i v59; // [rsp+10h] [rbp-140h] BYREF
  GCGGameModeParam *parama; // [rsp+20h] [rbp-130h]
  GCGGameMode *thisa; // [rsp+28h] [rbp-128h]
  uint32_t element_reaction_id; // [rsp+34h] [rbp-11Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-110h] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+48h] [rbp-108h]
  const data::GCGGameExcelConfig *game_excel_config_ptr; // [rsp+50h] [rbp-100h]
  const data::GCGRuleExcelConfig *rule_config_ptr; // [rsp+58h] [rbp-F8h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-F0h]
  const data::GCGElementReactionExcelConfig *reaction_config_ptr; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<common::tools::TimerMgr> v70; // [rsp+70h] [rbp-E0h] BYREF
  std::_Bind_helper<false,void (GCGGameMode::*)(long unsigned int),GCGGameMode*,const std::_Placeholder<1>&>::type v71; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v72; // [rsp+A0h] [rbp-B0h] BYREF
  char v73[144]; // [rsp+C0h] [rbp-90h] BYREF

  thisa = this;
  parama = param;
  v3 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 skill_id:155 64 16 13 skill_ptr:156";
  *(_QWORD *)(v3 + 16) = GCGGameMode::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( std::operator==<GCGConfigMgr>(&thisa->gcg_config_mgr_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "init",
      81);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v72,
           (const char (*)[33])"config_ptr is nullptr. game_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &thisa->game_id_);
    common::milog::MiLogStream::~MiLogStream(&v72);
    v2 = -1;
  }
  else
  {
    __for_end._M_current = (const unsigned int *)thisa;
    v59.m128i_i64[0] = (__int64)GCGGameMode::onTimer;
    v59.m128i_i64[1] = 0LL;
    *(__m128i *)(v3 + 64) = _mm_load_si128(&v59);
    std::bind<void (GCGGameMode::*)(unsigned long),GCGGameMode*,std::_Placeholder<1> const&>(
      &v71,
      (void (**)(GCGGameMode *, unsigned __int64))(v3 + 64),
      (GCGGameMode **)&__for_end,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v6,
      v7);
    v9 = (std::_Bind<void (GCGGameMode::*(GCGGameMode*,std::_Placeholder<1>))(long unsigned int)> *)ZTWN11ThreadLocal13timer_mgr_ptrE();
    common::tools::perf::make_shared<common::tools::MiTimer,std::shared_ptr<common::tools::TimerMgr> &,std::_Bind<void (GCGGameMode::*)(unsigned long) ()(GCGGameMode*,std::_Placeholder<1>)>>(
      &v70,
      v9,
      (std::shared_ptr<common::tools::TimerMgr> *)&v71,
      v9);
    std::shared_ptr<common::tools::MiTimer>::operator=(
      &thisa->timer_ptr_,
      (std::shared_ptr<common::tools::MiTimer> *)&v70);
    std::shared_ptr<common::tools::MiTimer>::~shared_ptr((std::shared_ptr<common::tools::MiTimer> *const)&v70);
    if ( std::operator==<common::tools::MiTimer>(0LL, &thisa->timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "init",
        87);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v72,
        (const char (*)[25])"[GCG] timer_ptr_ is null");
      common::milog::MiLogStream::~MiLogStream(&v72);
      v2 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&parama->try_create_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&parama->try_create_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&parama->try_create_time);
      }
      try_create_time = parama->try_create_time;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->try_create_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->try_create_time_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->try_create_time_);
      }
      thisa->try_create_time_ = try_create_time;
      if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(parama);
      }
      game_id = parama->game_id;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->game_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->game_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&thisa->game_id_);
      }
      thisa->game_id_ = game_id;
      if ( *(_BYTE *)(((unsigned __int64)&parama->business_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&parama->business_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&parama->business_type);
      }
      business_type = parama->business_type;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->business_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->business_type_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->business_type_);
      }
      thisa->business_type_ = business_type;
      if ( *(_BYTE *)(((unsigned __int64)&parama->seed >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parama + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parama->seed >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&parama->seed);
      }
      if ( parama->seed )
      {
        seed = parama->seed;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->seed_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->seed_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&thisa->seed_);
        }
        thisa->seed_ = seed;
      }
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "init",
        98);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v72, (const char (*)[16])"[RANDOM] seed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &thisa->seed_);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v15 = GCGGameMode::gen(thisa);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->seed_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->seed_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->seed_);
      }
      std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
        v15,
        thisa->seed_);
      GCGGameMode::setTransNo(thisa, parama);
      GCGDuel::init(&thisa->duel_);
      Config = GCGGameMode::getConfig(thisa);
      gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
      v17 = gcg_game_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->game_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->game_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->game_id_);
      }
      game_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(v17, thisa->game_id_);
      if ( game_excel_config_ptr )
      {
        v19 = gcg_game_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->rule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->rule_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&game_excel_config_ptr->rule_id);
        }
        rule_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGRuleExcelConfig(v19, game_excel_config_ptr->rule_id);
        if ( rule_config_ptr )
        {
          v21 = GCGGameMode::getConfig(thisa);
          GCGRoundLimit = GCGConfigMgr::getGCGRoundLimit(v21);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.round_limit >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.round_limit >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.round_limit);
          }
          thisa->rule_.round_limit = GCGRoundLimit;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->first_draw_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)rule_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->first_draw_num >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&rule_config_ptr->first_draw_num);
          }
          first_draw_num = rule_config_ptr->first_draw_num;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.first_hand_card_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.first_hand_card_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.first_hand_card_num);
          }
          thisa->rule_.first_hand_card_num = first_draw_num;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->second_draw_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->second_draw_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->second_draw_num);
          }
          second_draw_num = rule_config_ptr->second_draw_num;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.second_hand_card_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.second_hand_card_num >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.second_hand_card_num);
          }
          thisa->rule_.second_hand_card_num = second_draw_num;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->draw_card_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)rule_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->draw_card_num >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&rule_config_ptr->draw_card_num);
          }
          draw_card_num = rule_config_ptr->draw_card_num;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.draw_card_num_per_round >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.draw_card_num_per_round >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.draw_card_num_per_round);
          }
          thisa->rule_.draw_card_num_per_round = draw_card_num;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->hand_card_limit >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->hand_card_limit >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->hand_card_limit);
          }
          hand_card_limit = rule_config_ptr->hand_card_limit;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.hand_zone_max_size >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.hand_zone_max_size >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.hand_zone_max_size);
          }
          thisa->rule_.hand_zone_max_size = hand_card_limit;
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&game_excel_config_ptr->game_type);
          }
          game_type = game_excel_config_ptr->game_type;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.game_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.game_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.game_type);
          }
          thisa->rule_.game_type = game_type;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->start_bonus_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)rule_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->start_bonus_time >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&rule_config_ptr->start_bonus_time);
          }
          start_bonus_time = rule_config_ptr->start_bonus_time;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.start_bonus_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.start_bonus_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.start_bonus_time);
          }
          thisa->rule_.start_bonus_time = start_bonus_time;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->roll_bonus_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->roll_bonus_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->roll_bonus_time);
          }
          roll_bonus_time = rule_config_ptr->roll_bonus_time;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.roll_bonus_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.roll_bonus_time >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.roll_bonus_time);
          }
          thisa->rule_.roll_bonus_time = roll_bonus_time;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->round_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)rule_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->round_time >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&rule_config_ptr->round_time);
          }
          round_time = rule_config_ptr->round_time;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.round_bonus_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.round_bonus_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.round_bonus_time);
          }
          thisa->rule_.round_bonus_time = round_time;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->turn_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->turn_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->turn_time);
          }
          turn_time = rule_config_ptr->turn_time;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.turn_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.turn_time >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.turn_time);
          }
          thisa->rule_.turn_time = turn_time;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->monster_think_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->monster_think_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->monster_think_time);
          }
          v32 = SAFE_MULTIPLY<unsigned int,unsigned int>(rule_config_ptr->monster_think_time, 0x3E8u);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.monster_think_time_ms >> 3) + 0x7FFF8000) )
            __asan_report_store8(&thisa->rule_.monster_think_time_ms);
          thisa->rule_.monster_think_time_ms = v32;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->disconnect_time_out >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)rule_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->disconnect_time_out >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&rule_config_ptr->disconnect_time_out);
          }
          disconnect_time_out = rule_config_ptr->disconnect_time_out;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.disconnect_time_out >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.disconnect_time_out >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.disconnect_time_out);
          }
          thisa->rule_.disconnect_time_out = disconnect_time_out;
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->init_time_out >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->init_time_out >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->init_time_out);
          }
          init_time_out = rule_config_ptr->init_time_out;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_time_out >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_time_out >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.init_time_out);
          }
          thisa->rule_.init_time_out = init_time_out;
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->init_hand >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)game_excel_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->init_hand >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&game_excel_config_ptr->init_hand);
          }
          init_hand = game_excel_config_ptr->init_hand;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_hand >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_hand >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.init_hand);
          }
          thisa->rule_.init_hand = init_hand;
          if ( *(char *)(((unsigned __int64)&game_excel_config_ptr->is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&game_excel_config_ptr->is_ignore_deck_shuffle);
          is_ignore_deck_shuffle = game_excel_config_ptr->is_ignore_deck_shuffle;
          if ( *(char *)(((unsigned __int64)&thisa->rule_.is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&thisa->rule_.is_ignore_deck_shuffle);
          thisa->rule_.is_ignore_deck_shuffle = is_ignore_deck_shuffle;
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->is_ignore_redraw >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)game_excel_config_ptr + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->is_ignore_redraw >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load1(&game_excel_config_ptr->is_ignore_redraw);
          }
          is_ignore_redraw = game_excel_config_ptr->is_ignore_redraw;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.is_ignore_redraw >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)thisa + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.is_ignore_redraw >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_store1(&thisa->rule_.is_ignore_redraw);
          }
          thisa->rule_.is_ignore_redraw = is_ignore_redraw;
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&game_excel_config_ptr->init_onstage_character_index);
          }
          init_onstage_character_index = game_excel_config_ptr->init_onstage_character_index;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_onstage_character_index >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_onstage_character_index >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&thisa->rule_.init_onstage_character_index);
          }
          thisa->rule_.init_onstage_character_index = init_onstage_character_index;
          if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->enemy_init_onstage_character_index >> 3)
                        + 0x7FFF8000) != 0
            && (char)((((_BYTE)game_excel_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->enemy_init_onstage_character_index >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&game_excel_config_ptr->enemy_init_onstage_character_index);
          }
          enemy_init_onstage_character_index = game_excel_config_ptr->enemy_init_onstage_character_index;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->rule_.enemy_init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->rule_.enemy_init_onstage_character_index);
          }
          thisa->rule_.enemy_init_onstage_character_index = enemy_init_onstage_character_index;
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "init",
            139);
          v40 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v72,
                  (const char (*)[29])"[rule] first_hand_card_num: ");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  &thisa->rule_.first_hand_card_num);
          v42 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v41,
                  (const char (*)[24])" second_hand_card_num: ");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v42,
                  &thisa->rule_.second_hand_card_num);
          v44 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v43,
                  (const char (*)[27])" draw_card_num_per_round: ");
          v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v44,
                  &thisa->rule_.draw_card_num_per_round);
          v46 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v45,
                  (const char (*)[22])" hand_zone_max_size: ");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  &thisa->rule_.hand_zone_max_size);
          v48 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v47, (const char (*)[13])" init_hand: ");
          if ( *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_hand >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->rule_.init_hand >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&thisa->rule_.init_hand);
          }
          __for_end._M_current = (const unsigned int *)data::enumValToStr(thisa->rule_.init_hand);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v48, (const char *const *)&__for_end);
          common::milog::MiLogStream::~MiLogStream(&v72);
          GCGDuel::setRule(&thisa->duel_);
          __for_range = &rule_config_ptr->element_reaction_list;
          __for_begin._M_current = std::vector<unsigned int>::begin(&rule_config_ptr->element_reaction_list)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v49 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            v50 = v49;
            if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v49);
            }
            element_reaction_id = *v50;
            reaction_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGElementReactionExcelConfig(
                                    gcg_game_config_mgr,
                                    element_reaction_id);
            if ( !reaction_config_ptr )
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/game_mode/gcg_game_mode.cpp",
                "init",
                152);
              v51 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v72,
                      (const char (*)[39])"findGCGRuleExcelConfig fail. game_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &thisa->game_id_);
              common::milog::MiLogStream::~MiLogStream(&v72);
              v2 = -1;
              goto LABEL_146;
            }
            if ( *(_BYTE *)(((unsigned __int64)&reaction_config_ptr->skill_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)reaction_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reaction_config_ptr->skill_id >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(&reaction_config_ptr->skill_id);
            }
            *(_DWORD *)(v3 + 48) = reaction_config_ptr->skill_id;
            GCGUtils::createSkill((std::shared_ptr<GCGSkill> *)(v3 + 64), thisa, *(_DWORD *)(v3 + 48));
            if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 64), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/game_mode/gcg_game_mode.cpp",
                "init",
                159);
              v52 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v72,
                      (const char (*)[29])"createSkill fail. skill_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v52,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v72);
              v2 = -1;
              v53 = 0;
            }
            else
            {
              p_skill_logic = &thisa->skill_logic_;
              std::shared_ptr<GCGSkill>::shared_ptr(
                (std::shared_ptr<GCGSkill> *const)&v70,
                (const std::shared_ptr<GCGSkill> *)(v3 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&reaction_config_ptr->element_type2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&reaction_config_ptr->element_type2 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&reaction_config_ptr->element_type2);
              }
              element_type2 = reaction_config_ptr->element_type2;
              if ( *(_BYTE *)(((unsigned __int64)&reaction_config_ptr->element_type1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)reaction_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reaction_config_ptr->element_type1 >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&reaction_config_ptr->element_type1);
              }
              GCGSkillLogic::initElementReactionSkill(
                p_skill_logic,
                reaction_config_ptr->element_type1,
                element_type2,
                (GCGSkillPtr *)&v70);
              std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&v70);
              v53 = 1;
            }
            std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
            if ( v53 != 1 )
              goto LABEL_146;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&parama->controller_a >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&parama->controller_a >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&parama->controller_a);
          }
          if ( !parama->controller_a.card_group_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->card_group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->card_group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&game_excel_config_ptr->card_group_id);
            }
            parama->controller_a.card_group_id = game_excel_config_ptr->card_group_id;
          }
          if ( *(_BYTE *)(((unsigned __int64)&parama->controller_b >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&parama->controller_b >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&parama->controller_b);
          }
          if ( !parama->controller_b.card_group_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)game_excel_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_excel_config_ptr->enemy_card_group_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&game_excel_config_ptr->enemy_card_group_id);
            }
            parama->controller_b.card_group_id = game_excel_config_ptr->enemy_card_group_id;
          }
          if ( GCGGameMode::initController(thisa, GCG_CONTROLLER_A, &parama->controller_a) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "init",
              176);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v72,
              (const char (*)[39])"initController GCG_CONTROLLER_A fail. ");
            common::milog::MiLogStream::~MiLogStream(&v72);
            v2 = -1;
          }
          else if ( GCGGameMode::initController(thisa, GCG_CONTROLLER_B, &parama->controller_b) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "init",
              181);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v72,
              (const char (*)[39])"initController GCG_CONTROLLER_B fail. ");
            common::milog::MiLogStream::~MiLogStream(&v72);
            v2 = -1;
          }
          else if ( GCGGameMode::initGround(thisa, GCG_CONTROLLER_A, &game_excel_config_ptr->init_card_list) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "init",
              187);
            v56 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v72,
                    (const char (*)[21])"initGround fail. c: ");
            *(_DWORD *)(v3 + 48) = 1;
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v56,
              (const proto::GCGControllerValue *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v72);
            v2 = -1;
          }
          else if ( GCGGameMode::initGround(thisa, GCG_CONTROLLER_B, &game_excel_config_ptr->init_enemy_card_list) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "init",
              192);
            v57 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v72,
                    (const char (*)[21])"initGround fail. c: ");
            *(_DWORD *)(v3 + 48) = 2;
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v57,
              (const proto::GCGControllerValue *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v72);
            v2 = -1;
          }
          else
          {
            v2 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "init",
            115);
          v20 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v72,
                  (const char (*)[39])"findGCGRuleExcelConfig fail. game_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &thisa->game_id_);
          common::milog::MiLogStream::~MiLogStream(&v72);
          v2 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "init",
          109);
        v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v72,
                (const char (*)[39])"findGCGGameExcelConfig fail. game_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &thisa->game_id_);
        common::milog::MiLogStream::~MiLogStream(&v72);
        v2 = -1;
      }
    }
  }
LABEL_146:
  result = v2;
  if ( v73 == (char *)v3 )
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
  return result;
};

// Line 199: range 000000000D771894-000000000D771952
void __cdecl GCGGameMode::destroy(GCGGameMode *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/game_mode/gcg_game_mode.cpp",
    "destroy",
    200);
  v1 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v2, (const char (*)[14])"game destroy ");
  GCGGameMode::getDesc[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 204: range 000000000D771954-000000000D771A91
int32_t __cdecl GCGGameMode::initDuel(
        GCGGameMode *const this,
        const std::vector<unsigned int> *card_id_vec_1,
        const std::vector<unsigned int> *card_id_vec_2)
{
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( GCGGameMode::initField(this, GCG_CONTROLLER_A, card_id_vec_1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initDuel",
      207);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])"initField 1 fail.");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else if ( GCGGameMode::initField(this, GCG_CONTROLLER_B, card_id_vec_2) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initDuel",
      212);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])"initField 2 fail.");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 219: range 000000000D771A92-000000000D772AB4
__int64 __fastcall GCGGameMode::initCardGroup(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t card_group_id)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  uint32_t v13; // eax
  std::map<unsigned int,data::GCGCardFaceType>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  uint32_t v16; // eax
  std::map<unsigned int,data::GCGCardFaceType>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  const unsigned int *M_current; // r14
  common::milog::MiLogStream *v20; // rax
  GCGCharacterWaitingZone *WaitingZone; // rax
  GCGCharacterZone *CharacterZone; // rax
  GCGCharacterZone *v23; // rax
  std::vector<std::shared_ptr<GCGCard>> *CardVec; // rax
  const std::shared_ptr<GCGCard> *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // r14d
  const std::vector<unsigned int> *v28; // r14
  GCGCard *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v32; // rax
  unsigned int *v33; // rdx
  GCGCard *v34; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  GCGCard *v36; // rax
  std::vector<unsigned int>::const_reference v37; // rax
  _DWORD *v38; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  GCGCard *v40; // r14
  uint32_t *v41; // rax
  uint32_t *v42; // rdx
  uint32_t v43; // r14d
  GCGStatistics *Statistics; // rax
  std::map<proto::GCGControllerValue,GCGControllerStatistics>::mapped_type *v45; // rax
  int v46; // r14d
  std::map<proto::GCGControllerValue,unsigned int>::mapped_type *v47; // rax
  _DWORD *v48; // rdx
  __int64 result; // rax
  const unsigned int *__last; // [rsp+8h] [rbp-2B8h]
  uint32_t index; // [rsp+2Ch] [rbp-294h]
  uint32_t i; // [rsp+30h] [rbp-290h]
  unsigned int hp; // [rsp+34h] [rbp-28Ch]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-288h] BYREF
  std::vector<unsigned int> v56; // [rsp+40h] [rbp-280h] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+58h] [rbp-268h]
  const data::GCGDeckExcelConfig *card_group_config_ptr; // [rsp+60h] [rbp-260h]
  const std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-258h]
  const std::vector<data::GCGWaitingCharacterInfo> *__for_range_0; // [rsp+70h] [rbp-250h]
  const data::GCGWaitingCharacterInfo *waiting_character; // [rsp+78h] [rbp-248h]
  GCGField *field; // [rsp+80h] [rbp-240h]
  const std::vector<data::GCGWaitingCharacterInfo> *__for_range_1; // [rsp+88h] [rbp-238h]
  const std::vector<std::vector<unsigned int>> *init_modify_card_list; // [rsp+90h] [rbp-230h]
  const std::vector<unsigned int> *init_hp_list; // [rsp+98h] [rbp-228h]
  const std::vector<unsigned int> *init_energy_list; // [rsp+A0h] [rbp-220h]
  const data::GCGWaitingCharacterInfo *waiting_info; // [rsp+A8h] [rbp-218h]
  common::milog::MiLogStream v68; // [rsp+B0h] [rbp-210h] BYREF
  common::milog::MiLogStream v69; // [rsp+D0h] [rbp-1F0h] BYREF
  char v70[464]; // [rsp+F0h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 10 energy:316 64 4 14 max_energy:317 80 4 17 controller_id:218 96 4 17 card_group_id:218 "
                        "112 16 22 character_card_ptr:288 144 24 12 card_vec:221 208 24 27 character_card_guid_vec:281 27"
                        "2 24 22 character_card_vec:282 336 48 17 card_face_map:235";
  *(_QWORD *)(v4 + 16) = GCGGameMode::initCardGroup;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862729] = -218959360;
  v6[536862730] = 62194;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 80) = controller_id;
  *(_DWORD *)(v4 + 96) = card_group_id;
  if ( *(_DWORD *)(v4 + 96) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 144));
    Config = GCGGameMode::getConfig(this);
    gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    card_group_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                              gcg_game_config_mgr,
                              *(_DWORD *)(v4 + 96));
    if ( card_group_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_group_config_ptr->card_back_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_group_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_group_config_ptr->card_back_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&card_group_config_ptr->card_back_id);
      }
      if ( card_group_config_ptr->card_back_id )
        GCGGameMode::initCardBackShowId(this, *(GCGControllerValue *)(v4 + 80), card_group_config_ptr->card_back_id);
      if ( !std::vector<bool>::empty(&card_group_config_ptr->character_card_face_gold_list) )
      {
        std::map<unsigned int,data::GCGCardFaceType>::map((std::map<unsigned int,data::GCGCardFaceType> *const)(v4 + 336));
        index = 0;
        __for_range = &card_group_config_ptr->character_list;
        v56._M_impl._M_finish = (std::_Vector_base<unsigned int>::pointer)std::vector<unsigned int>::begin(&card_group_config_ptr->character_list)._M_current;
        v56._M_impl._M_end_of_storage = (std::_Vector_base<unsigned int>::pointer)std::vector<unsigned int>::end(&card_group_config_ptr->character_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&v56._M_impl._M_finish,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&v56._M_impl._M_end_of_storage) )
        {
          v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&v56._M_impl._M_finish);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          *(_DWORD *)(v4 + 64) = *v12;
          if ( index >= std::vector<bool>::size(&card_group_config_ptr->character_card_face_gold_list) )
            break;
          v13 = index++;
          if ( std::vector<bool>::operator[](&card_group_config_ptr->character_card_face_gold_list, v13) )
          {
            v14 = std::map<unsigned int,data::GCGCardFaceType>::operator[](
                    (std::map<unsigned int,data::GCGCardFaceType> *const)(v4 + 336),
                    (const std::map<unsigned int,data::GCGCardFaceType>::key_type *)(v4 + 64));
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v14);
            }
            *v15 = 1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&v56._M_impl._M_finish);
        }
        __for_range_0 = &card_group_config_ptr->waiting_character_list;
        v56._M_impl._M_finish = (std::_Vector_base<unsigned int>::pointer)std::vector<data::GCGWaitingCharacterInfo>::begin(&card_group_config_ptr->waiting_character_list)._M_current;
        v56._M_impl._M_end_of_storage = (std::_Vector_base<unsigned int>::pointer)std::vector<data::GCGWaitingCharacterInfo>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>(
                  (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)&v56._M_impl._M_finish,
                  (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)&v56._M_impl._M_end_of_storage) )
        {
          waiting_character = __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)&v56._M_impl._M_finish);
          if ( index >= std::vector<bool>::size(&card_group_config_ptr->character_card_face_gold_list) )
            break;
          v16 = index++;
          if ( std::vector<bool>::operator[](&card_group_config_ptr->character_card_face_gold_list, v16) )
          {
            v17 = std::map<unsigned int,data::GCGCardFaceType>::operator[](
                    (std::map<unsigned int,data::GCGCardFaceType> *const)(v4 + 336),
                    &waiting_character->id);
            v18 = v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v17);
            }
            *v18 = 1;
          }
          __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)&v56._M_impl._M_finish);
        }
        GCGCardMgr::setCardFaceMap(
          &this->card_mgr_,
          *(GCGControllerValue *)(v4 + 80),
          (const std::map<unsigned int,data::GCGCardFaceType> *)(v4 + 336));
        std::map<unsigned int,data::GCGCardFaceType>::~map((std::map<unsigned int,data::GCGCardFaceType> *const)(v4 + 336));
      }
      if ( *(char *)(((unsigned __int64)&card_group_config_ptr->is_card_face_gold >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&card_group_config_ptr->is_card_face_gold);
      if ( card_group_config_ptr->is_card_face_gold )
        GCGCardMgr::setGlobalCardCardFace(&this->card_mgr_, *(GCGControllerValue *)(v4 + 80), GCG_CARD_FACE_GOLD);
      __last = std::vector<unsigned int>::end(&card_group_config_ptr->character_list)._M_current;
      M_current = std::vector<unsigned int>::begin(&card_group_config_ptr->character_list)._M_current;
      v56._M_impl._M_finish = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 144))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&v56._M_impl._M_end_of_storage,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&v56._M_impl._M_finish);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v4 + 144),
        (std::vector<unsigned int>::const_iterator)v56._M_impl._M_end_of_storage,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
      std::vector<unsigned int>::rend((const std::vector<unsigned int> *const)&v56._M_impl._M_finish);
      std::vector<unsigned int>::rbegin(&v56);
      __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 144))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&v56._M_impl._M_end_of_storage,
        &__i);
      std::vector<unsigned int>::insert<std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>,void>(
        (std::vector<unsigned int> *const)(v4 + 144),
        (std::vector<unsigned int>::const_iterator)v56._M_impl._M_end_of_storage,
        (std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > > *)&v56,
        (std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > > *)&v56._M_impl._M_finish);
      field = GCGDuel::getField(&this->duel_, (GCGControllerValue)*(_DWORD *)(v4 + 80));
      if ( GCGGameMode::initField(this, *(GCGControllerValue *)(v4 + 80), (const std::vector<unsigned int> *)(v4 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "initCardGroup",
          272);
        v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v69,
                (const char (*)[20])"initField fail. c: ");
        common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
          v20,
          (const proto::GCGControllerValue *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v69);
        v3 = -1;
      }
      else
      {
        __for_range_1 = &card_group_config_ptr->waiting_character_list;
        v56._M_impl._M_finish = (std::_Vector_base<unsigned int>::pointer)std::vector<data::GCGWaitingCharacterInfo>::begin(&card_group_config_ptr->waiting_character_list)._M_current;
        v56._M_impl._M_end_of_storage = (std::_Vector_base<unsigned int>::pointer)std::vector<data::GCGWaitingCharacterInfo>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>(
                  (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)&v56._M_impl._M_finish,
                  (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)&v56._M_impl._M_end_of_storage) )
        {
          waiting_info = __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)&v56._M_impl._M_finish);
          WaitingZone = GCGField::getWaitingZone(field);
          GCGCharacterWaitingZone::add(WaitingZone, waiting_info);
          __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)&v56._M_impl._M_finish);
        }
        CharacterZone = GCGField::getCharacterZone(field);
        GCGCardZone::getCardGuidVec((std::vector<unsigned int> *)(v4 + 208), CharacterZone);
        v23 = GCGField::getCharacterZone(field);
        CardVec = GCGCardZone::getCardVec(v23);
        std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 272), CardVec);
        init_modify_card_list = &card_group_config_ptr->init_modify_card_list;
        init_hp_list = &card_group_config_ptr->init_hp_list;
        init_energy_list = &card_group_config_ptr->init_energy_list;
        for ( i = 0;
              i < std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 272));
              ++i )
        {
          v25 = std::vector<std::shared_ptr<GCGCard>>::operator[](
                  (std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 272),
                  i);
          std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 112), v25);
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 112), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v69,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "initCardGroup",
              291);
            v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v69,
                    (const char (*)[35])"character_card_ptr is nullptr. c: ");
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v26,
              (const proto::GCGControllerValue *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v69);
            v27 = 0;
          }
          else if ( i < std::vector<std::vector<unsigned int>>::size(init_modify_card_list)
                 && (v28 = std::vector<std::vector<unsigned int>>::operator[](init_modify_card_list, i),
                     v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112)),
                     GCGGameMode::initCharacter(this, v29, v28)) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "initCardGroup",
              298);
            v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v68,
                    (const char (*)[21])"initCharacter fail. ");
            v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
            GCGCard::getDesc[abi:cxx11]((std::string *)&v69, v31);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, (const std::string *)&v69);
            std::string::~string(&v69);
            common::milog::MiLogStream::~MiLogStream(&v68);
            v3 = -1;
            v27 = 1;
          }
          else
          {
            if ( i < std::vector<unsigned int>::size(init_hp_list) )
            {
              v32 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](init_hp_list, i);
              v33 = v32;
              if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v32);
              }
              hp = *v33;
              if ( *v33 )
              {
                v34 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                GCGCard::setToken(v34, GCG_TOKEN_HP, hp, GCG_REASON_INIT);
                v35 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                if ( hp > (unsigned int)GCGCard::getToken(v35, GCG_TOKEN_MAX_HP) )
                {
                  v36 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                  GCGCard::setToken(v36, GCG_TOKEN_MAX_HP, hp, GCG_REASON_INIT);
                }
              }
            }
            if ( i < std::vector<unsigned int>::size(init_energy_list) )
            {
              v37 = std::vector<unsigned int>::operator[](init_energy_list, i);
              v38 = v37;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v37);
              }
              *(_DWORD *)(v4 + 48) = *v38;
              v39 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              *(_DWORD *)(v4 + 64) = GCGCard::getToken(v39, GCG_TOKEN_MAX_ENERGY);
              v40 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              v41 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v4 + 48), (const unsigned int *)(v4 + 64));
              v42 = v41;
              if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v41);
              }
              GCGCard::setToken(v40, GCG_TOKEN_ENERGY, *v42, GCG_REASON_INIT);
            }
            v27 = 2;
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 112));
          if ( v27 && v27 != 2 )
            goto LABEL_69;
        }
        v43 = *(_DWORD *)(v4 + 96);
        Statistics = GCGGameMode::getStatistics(this);
        v45 = std::map<proto::GCGControllerValue,GCGControllerStatistics>::operator[](
                &Statistics->statistics_map,
                (const std::map<proto::GCGControllerValue,GCGControllerStatistics>::key_type *)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v45->card_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v45->card_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v45 = (std::map<proto::GCGControllerValue,GCGControllerStatistics>::mapped_type *)__asan_report_store4(&v45->card_group_id);
        }
        v45->card_group_id = v43;
        v46 = *(_DWORD *)(v4 + 96);
        v47 = std::map<proto::GCGControllerValue,unsigned int>::operator[](
                &this->controller_card_group_map_,
                (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v4 + 80));
        v48 = v47;
        if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v47);
        }
        *v48 = v46;
        v3 = 0;
LABEL_69:
        std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 272));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 208));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initCardGroup",
        226);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v69,
             (const char (*)[39])"findGCGDeckExcelConfig fail. game_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->game_id_);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" deck id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v69);
      v3 = -1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 144));
  }
  else
  {
    v3 = 0;
  }
  result = v3;
  if ( v70 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 329: range 000000000D772AB6-000000000D772E00
__int64 __fastcall GCGGameMode::initController(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        unsigned __int64 param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:328";
  *(_QWORD *)(v3 + 16) = GCGGameMode::initController;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  if ( *(_BYTE *)(((param + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((param + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(param + 32);
  GCGGameMode::initCardBackShowId(this, *(GCGControllerValue *)(v3 + 32), *(_DWORD *)(param + 32));
  if ( *(_BYTE *)(((param + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((param + 36) & 7) + 3) >= *(_BYTE *)(((param + 36) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param + 36);
  }
  GCGGameMode::initFieldShowId(this, *(GCGControllerValue *)(v3 + 32), *(_DWORD *)(param + 36));
  if ( *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((param >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(param);
  if ( *(_DWORD *)param )
  {
    if ( (unsigned int)GCGGameMode::initCardGroup(this, (GCGControllerValue)*(_DWORD *)(v3 + 32), *(_DWORD *)param) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initController",
        336);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v10,
             (const char (*)[24])"initCardGroup fail. c: ");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v6,
        (const proto::GCGControllerValue *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v10);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
  }
  else
  {
    GCGGameMode::initCardFace(
      this,
      *(GCGControllerValue *)(v3 + 32),
      (const std::map<unsigned int,data::GCGCardFaceType> *)(param + 40));
    if ( GCGGameMode::initField(this, *(GCGControllerValue *)(v3 + 32), (const std::vector<unsigned int> *)(param + 8)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initController",
        345);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v10,
             (const char (*)[31])"init field fail. card_id_vec: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, (const std::vector<unsigned int> *)(param + 8));
      common::milog::MiLogStream::~MiLogStream(&v10);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
  }
  result = 0LL;
LABEL_16:
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 353: range 000000000D772E02-000000000D773AFF
__int64 __fastcall GCGGameMode::initField(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        const std::vector<unsigned int> *card_id_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  GCGControllerValue ControllerId; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGCardType CardType; // eax
  GCGCharacterZone *CharacterZone; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  GCGCardZone *DeckZone; // r15
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // r15d
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  GCGCardZone *v35; // rax
  size_t Size; // rcx
  GCGCardZone *v37; // rax
  size_t v38; // rcx
  char v39; // al
  common::milog::MiLogStream *v40; // r14
  GCGCardZone *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  GCGCharacterZone *v44; // rax
  size_t v45; // rcx
  GCGCharacterZone *v46; // rax
  size_t v47; // rcx
  char v48; // al
  common::milog::MiLogStream *v49; // r14
  GCGCharacterZone *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  GCGStatistics *Statistics; // rax
  std::map<proto::GCGControllerValue,GCGControllerStatistics>::mapped_type *v54; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  GCGField *field; // [rsp+40h] [rbp-110h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret_0; // [rsp+50h] [rbp-100h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr_0; // [rsp+58h] [rbp-F8h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+60h] [rbp-F0h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+70h] [rbp-E0h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v68; // [rsp+A0h] [rbp-B0h] BYREF
  char v69[144]; // [rsp+C0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 11 card_id:366 48 4 17 controller_id:352 64 16 12 card_ptr:368";
  *(_QWORD *)(v4 + 16) = GCGGameMode::initField;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = controller_id;
  if ( std::vector<unsigned int>::empty(card_id_vec) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initField",
      357);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v68,
           (const char (*)[23])"card id vec empty. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      (const proto::GCGControllerValue *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v68);
    v3 = -1;
    goto LABEL_58;
  }
  Duel = GCGGameMode::getDuel(this);
  field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v4 + 48));
  if ( GCGField::isFieldInit(field) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initField",
      363);
    v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v68,
           (const char (*)[25])" field already init. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v9,
      (const proto::GCGControllerValue *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v68);
    v3 = -1;
    goto LABEL_58;
  }
  __for_range = card_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(card_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(card_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v4 + 32) = *v11;
    ControllerId = GCGField::getControllerId(field);
    GCGCardMgr::createCard(
      (GCGCardMgr *const)(v4 + 64),
      &this->card_mgr_,
      *(GCGControllerValue *)(v4 + 32),
      ControllerId);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initField",
        371);
      v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v68,
              (const char (*)[29])"create card error. card_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])off_1BA126E0);
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v15,
        (const proto::GCGControllerValue *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v3 = -1;
      v16 = 0;
      goto LABEL_35;
    }
    v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    CardType = GCGCard::getCardType(v17);
    if ( CardType > GCG_CARD_ASSIST )
    {
LABEL_33:
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initField",
        400);
      v29 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v68,
              (const char (*)[28])"card type error . card_id: ");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 32));
      v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" type: ");
      v32 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      val = GCGCard::getCardType(v32);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
      v34 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v33, (const char (*)[5])off_1BA126E0);
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v34,
        (const proto::GCGControllerValue *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v3 = -1;
      v16 = 0;
      goto LABEL_35;
    }
    if ( CardType >= GCG_CARD_EVENT )
      goto LABEL_26;
    if ( CardType != GCG_CARD_CHARACTER )
    {
      if ( CardType != GCG_CARD_MODIFY )
        goto LABEL_33;
LABEL_26:
      DeckZone = GCGField::getDeckZone(field);
      std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
      GCGCardZone::addCard(&__t, DeckZone, &p_card_ptr, GCG_REASON_INIT, 0, 0);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
      ret_0 = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
      ret_card_ptr_0 = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
      if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ret_0);
      }
      if ( *ret_0 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "initField",
          393);
        v25 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v68,
                (const char (*)[29])"addCard card fail. card_id: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v4 + 32));
        v27 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v26, (const char (*)[5])off_1BA126E0);
        common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
          v27,
          (const proto::GCGControllerValue *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v68);
        v3 = -1;
        v28 = 0;
      }
      else
      {
        v28 = 1;
      }
      std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
      if ( !v28 )
      {
        v16 = 0;
        goto LABEL_35;
      }
      goto LABEL_34;
    }
    CharacterZone = GCGField::getCharacterZone(field);
    std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
    GCGCardZone::addCard(&__t, CharacterZone, &p_card_ptr, GCG_REASON_INIT, 0, 0);
    std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
    ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
    ret_card_ptr = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initField",
        381);
      v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v68,
              (const char (*)[29])"addCard card fail. card_id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 32));
      v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])off_1BA126E0);
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v22,
        (const proto::GCGControllerValue *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v3 = -1;
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
    std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
    if ( !v23 )
    {
      v16 = 0;
      goto LABEL_35;
    }
LABEL_34:
    v16 = 1;
LABEL_35:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
    if ( v16 != 1 )
      goto LABEL_58;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v35 = GCGField::getDeckZone(field);
  Size = GCGCardZone::getSize(v35);
  if ( *(_BYTE *)(((unsigned __int64)&this->rule_.card_group_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rule_.card_group_max_size >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rule_.card_group_max_size);
  }
  if ( Size > this->rule_.card_group_max_size )
    goto LABEL_43;
  v37 = GCGField::getDeckZone(field);
  v38 = GCGCardZone::getSize(v37);
  if ( *(_BYTE *)(((unsigned __int64)&this->rule_.card_group_min_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rule_.card_group_min_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rule_.card_group_min_size);
  }
  if ( v38 >= this->rule_.card_group_min_size )
    v39 = 0;
  else
LABEL_43:
    v39 = 1;
  if ( v39 )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initField",
      408);
    v40 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v68,
            (const char (*)[30])"card group size error. size: ");
    v41 = GCGField::getDeckZone(field);
    __for_end._M_current = (const unsigned int *)GCGCardZone::getSize(v41);
    v42 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v40,
            (const unsigned __int64 *)&__for_end);
    v43 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v42, (const char (*)[5])off_1BA126E0);
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v43,
      (const proto::GCGControllerValue *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v68);
    v3 = -1;
  }
  else
  {
    v44 = GCGField::getCharacterZone(field);
    v45 = GCGCardZone::getSize(v44);
    if ( *(_BYTE *)(((unsigned __int64)&this->rule_.character_zone_max_size >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rule_.character_zone_max_size >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->rule_.character_zone_max_size);
    }
    if ( v45 > this->rule_.character_zone_max_size )
      goto LABEL_53;
    v46 = GCGField::getCharacterZone(field);
    v47 = GCGCardZone::getSize(v46);
    if ( *(_BYTE *)(((unsigned __int64)&this->rule_.character_zone_min_size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->rule_.character_zone_min_size >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->rule_.character_zone_min_size);
    }
    if ( v47 >= this->rule_.character_zone_min_size )
      v48 = 0;
    else
LABEL_53:
      v48 = 1;
    if ( v48 )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initField",
        413);
      v49 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v68,
              (const char (*)[34])"character zone size error. size: ");
      v50 = GCGField::getCharacterZone(field);
      __for_end._M_current = (const unsigned int *)GCGCardZone::getSize(v50);
      v51 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v49,
              (const unsigned __int64 *)&__for_end);
      v52 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v51, (const char (*)[5])off_1BA126E0);
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v52,
        (const proto::GCGControllerValue *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v3 = -1;
    }
    else
    {
      GCGField::setFieldInit(field);
      Statistics = GCGGameMode::getStatistics(this);
      v54 = std::map<proto::GCGControllerValue,GCGControllerStatistics>::operator[](
              &Statistics->statistics_map,
              (const std::map<proto::GCGControllerValue,GCGControllerStatistics>::key_type *)(v4 + 48));
      std::vector<unsigned int>::operator=(&v54->card_id_vec, card_id_vec);
      v3 = 0;
    }
  }
LABEL_58:
  result = v3;
  if ( v69 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 423: range 000000000D773B00-000000000D774212
__int64 __fastcall GCGGameMode::initGround(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        const std::vector<unsigned int> *card_id_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  GCGDuel *Duel; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  GCGControllerValue ControllerId; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  _BOOL4 v15; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t CardType; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  _BOOL4 v24; // r15d
  GCGCardZone *v25; // r15
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-134h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  GCGField *field; // [rsp+40h] [rbp-120h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+50h] [rbp-110h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+60h] [rbp-100h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v41; // [rsp+90h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 11 card_id:431 48 4 17 controller_id:422 64 16 12 card_ptr:433 96 16 12 zone_ptr:439";
  *(_QWORD *)(v4 + 16) = GCGGameMode::initGround;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = controller_id;
  if ( std::vector<unsigned int>::empty(card_id_vec) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initGround",
      427);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v41,
           (const char (*)[34])"initGround card id vec empty. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      (const proto::GCGControllerValue *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v3 = 0;
  }
  else
  {
    Duel = GCGGameMode::getDuel(this);
    field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v4 + 48));
    __for_range = card_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(card_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(card_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v4 + 32) = *v10;
      ControllerId = GCGField::getControllerId(field);
      GCGCardMgr::createCard(
        (GCGCardMgr *const)(v4 + 64),
        &this->card_mgr_,
        *(GCGControllerValue *)(v4 + 32),
        ControllerId);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "initGround",
          436);
        v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v41,
                (const char (*)[29])"create card error. card_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])off_1BA126E0);
        common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
          v14,
          (const proto::GCGControllerValue *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        v3 = -1;
        v15 = 0;
      }
      else
      {
        v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        CardType = GCGCard::getCardType(v16);
        GCGField::getZoneByCardType((GCGField *const)(v4 + 96), (GCGCardType)field, CardType);
        if ( std::operator==<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "initGround",
            442);
          v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v41,
                  (const char (*)[27])"card type error. card_id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v4 + 32));
          v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" type: ");
          v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          val = GCGCard::getCardType(v21);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          v23 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v22, (const char (*)[5])off_1BA126E0);
          common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v23,
            (const proto::GCGControllerValue *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v3 = -1;
          v24 = 0;
        }
        else
        {
          v25 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
          GCGCardZone::addCard(&__t, v25, &p_card_ptr, GCG_REASON_INIT, 0, 0);
          std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
          ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
          ret_card_ptr = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret);
          }
          if ( *ret )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "initGround",
              448);
            v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v41,
                    (const char (*)[29])"addCard card fail. card_id: ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v4 + 32));
            v28 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v27, (const char (*)[5])off_1BA126E0);
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v28,
              (const proto::GCGControllerValue *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v41);
            v3 = -1;
            v29 = 0;
          }
          else
          {
            v29 = 1;
          }
          std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
          v24 = v29 == 1;
        }
        std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v4 + 96));
        v15 = v24;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
      if ( !v15 )
        goto LABEL_24;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v3 = 0;
  }
LABEL_24:
  result = v3;
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 456: range 000000000D774214-000000000D7749CA
int32_t __cdecl GCGGameMode::initCharacter(
        GCGGameMode *const this,
        GCGCard *character_card,
        const std::vector<unsigned int> *modify_card_id_vec)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  _BOOL4 v14; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGCardType CardType; // eax
  GCGModifyZone *v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // r15d
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  unsigned int v33; // [rsp+2Ch] [rbp-134h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  GCGModifyZone *zone; // [rsp+40h] [rbp-120h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+50h] [rbp-110h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+60h] [rbp-100h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v42; // [rsp+90h] [rbp-D0h] BYREF
  std::string val; // [rsp+B0h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+D0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 17 controller_id:463 48 4 11 card_id:471 64 16 12 card_ptr:473";
  *(_QWORD *)(v4 + 16) = GCGGameMode::initCharacter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  if ( GCGCard::getCardType(character_card) == GCG_CARD_CHARACTER )
  {
    *(_DWORD *)(v4 + 32) = GCGCard::getControllerId(character_card);
    if ( std::vector<unsigned int>::empty(modify_card_id_vec) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "initCharacter",
        467);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[23])"card id vec empty. c: ");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v8,
        (const proto::GCGControllerValue *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v3 = 0;
    }
    else
    {
      zone = GCGCard::getModifyZone(character_card);
      __for_range = modify_card_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(modify_card_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(modify_card_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v4 + 48) = *v10;
        GCGCardMgr::createCard(
          (GCGCardMgr *const)(v4 + 64),
          &this->card_mgr_,
          *(GCGControllerValue *)(v4 + 48),
          *(GCGControllerValue *)(v4 + 32));
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "initCharacter",
            476);
          v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[29])"create card error. card_id: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])off_1BA126E0);
          common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v13,
            (const proto::GCGControllerValue *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v3 = -1;
          v14 = 0;
        }
        else
        {
          v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          CardType = GCGCard::getCardType(v15);
          if ( CardType == GCG_CARD_MODIFY || CardType == GCG_CARD_STATE )
          {
            v17 = zone;
            std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
            GCGCardZone::addCard(&__t, v17, &p_card_ptr, GCG_REASON_INIT, 0, 0);
            std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
            ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
            ret_card_ptr = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
            if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(ret);
            }
            if ( *ret )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/game_mode/gcg_game_mode.cpp",
                "initCharacter",
                487);
              v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[28])"card type error . card_id: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v4 + 48));
              v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" type: ");
              v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              v33 = GCGCard::getCardType(v21);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v33);
              v23 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v22, (const char (*)[5])off_1BA126E0);
              common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v23,
                (const proto::GCGControllerValue *)(v4 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v3 = -1;
              v24 = 0;
            }
            else
            {
              v24 = 1;
            }
            std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
            v14 = v24 != 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "initCharacter",
              494);
            v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[28])"card type error . card_id: ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v4 + 48));
            v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])" type: ");
            v28 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v33 = GCGCard::getCardType(v28);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &v33);
            v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])off_1BA126E0);
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v30,
              (const proto::GCGControllerValue *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v3 = -1;
            v14 = 0;
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
        if ( !v14 )
          goto LABEL_26;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v3 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initCharacter",
      460);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v42, (const char (*)[17])"card type error.");
    GCGCard::getDesc[abi:cxx11](&val, character_card);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v3 = -1;
  }
LABEL_26:
  result = v3;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 503: range 000000000D7749CC-000000000D774B66
__int64 __fastcall GCGGameMode::initCardFace(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        const std::map<unsigned int,data::GCGCardFaceType> *card_face_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:502";
  *(_QWORD *)(v3 + 16) = GCGGameMode::initCardFace;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(&this->duel_, *(GCGControllerValue *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initCardFace",
      506);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v9,
           (const char (*)[24])"invalid controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    GCGCardMgr::setCardFaceMap(&this->card_mgr_, *(GCGControllerValue *)(v3 + 32), card_face_map);
    result = 0LL;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 514: range 000000000D774B68-000000000D774D0D
__int64 __fastcall GCGGameMode::initCardBackShowId(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t card_back_show_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  GCGField *Field; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:513";
  *(_QWORD *)(v3 + 16) = GCGGameMode::initCardBackShowId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(&this->duel_, *(GCGControllerValue *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initCardBackShowId",
      517);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v10,
           (const char (*)[24])"invalid controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    Field = GCGDuel::getField(&this->duel_, (GCGControllerValue)*(_DWORD *)(v3 + 32));
    GCGField::setCardBackShowId(Field, card_back_show_id);
    result = 0LL;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 525: range 000000000D774D0E-000000000D774EB3
__int64 __fastcall GCGGameMode::initFieldShowId(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t field_show_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  GCGField *Field; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:524";
  *(_QWORD *)(v3 + 16) = GCGGameMode::initFieldShowId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(&this->duel_, *(GCGControllerValue *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "initFieldShowId",
      528);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v10,
           (const char (*)[24])"invalid controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    Field = GCGDuel::getField(&this->duel_, (GCGControllerValue)*(_DWORD *)(v3 + 32));
    GCGField::setFieldShowId(Field, field_show_id);
    result = 0LL;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 536: range 000000000D774EB4-000000000D775109
void __cdecl GCGGameMode::recordHistoryCard(GCGGameMode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  GCGCardDetailInfo *v6; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::map<unsigned int,std::weak_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const GCGCardMgr *card_mgr; // [rsp+28h] [rbp-98h]
  const std::map<unsigned int,std::weak_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,std::weak_ptr<GCGCard> > *v12; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *card_wtr; // [rsp+48h] [rbp-78h]
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 card_ptr:542";
  *(_QWORD *)(v1 + 16) = GCGGameMode::recordHistoryCard;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::vector<GCGCardDetailInfo>::empty(&this->history_card_vec_) )
  {
    card_mgr = GCGGameMode::getCardMgr(this);
    __for_range = GCGCardMgr::getCardMap(card_mgr);
    __for_begin._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,std::weak_ptr<GCGCard>>(v12);
      card_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<GCGCard>>(v12);
      std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v1 + 32));
      if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 32), 0LL) )
      {
        v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( GCGCard::getShowState(v4) )
        {
          v6 = std::vector<GCGCardDetailInfo>::emplace_back<>(&this->history_card_vec_);
          v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          GCGCardDetailInfo::fromCard(v6, v7, 0);
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 32));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator++(&__for_begin);
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 554: range 000000000D77510A-000000000D77541F
void __cdecl GCGGameMode::onCardModifiedBlockAttackCard(
        GCGGameMode *const this,
        const GCGCard *owner_card,
        const GCGCard *modify_zone_card)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  bool isActivated; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t Guid; // eax
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  std::string v18; // [rsp+70h] [rbp-90h] BYREF
  char v19[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 26 monster_controller_ptr:565";
  *(_QWORD *)(v3 + 16) = GCGGameMode::onCardModifiedBlockAttackCard;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( GCGCard::getCardType(owner_card) != GCG_CARD_CHARACTER || !GCGCard::isActivated(owner_card) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "onCardModifiedBlockAttackCard",
      557);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v16,
           (const char (*)[34])"owner card not valid, owner_card:");
    GCGCard::getDesc[abi:cxx11](&val, owner_card);
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" state:");
    isActivated = GCGCard::isActivated(owner_card);
    v11 = common::milog::MiLogStream::operator<<(v9, isActivated);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" modify card:");
    GCGCard::getDesc[abi:cxx11](&v18, modify_zone_card);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &v18);
    std::string::~string(&v18);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else if ( !GCGGameMode::isDuringSnapshot(this) )
  {
    GCGCard::getControllerId(owner_card);
    GCGGameMode::getController<GCGMonsterController>((GCGGameMode *const)(v3 + 32), (GCGControllerValue)this);
    if ( std::operator!=<GCGMonsterController>((const std::shared_ptr<GCGMonsterController> *)(v3 + 32), 0LL) )
    {
      v13 = std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Guid = GCGCard::getGuid(owner_card);
      GCGMonsterController::clearCharacterIntention(v13, Guid);
    }
    std::shared_ptr<GCGMonsterController>::~shared_ptr((std::shared_ptr<GCGMonsterController> *const)(v3 + 32));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 574: range 000000000D775420-000000000D776361
void __cdecl GCGGameMode::onCardDie(GCGGameMode *const this, const std::vector<unsigned int> *card_guid_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GCGCard *v19; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  GCGCard *v22; // rax
  GCGCard *v23; // rax
  GCGSkillPreviewContext *SkillPreviewContext; // rax
  GCGCard *v25; // rax
  std::vector<unsigned int> *v26; // rax
  GCGCharacterWaitingZone *WaitingZone; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  GCGDuel *p_duel; // rcx
  std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  GCGPhaseMgr *PhaseMgr; // r14
  GCGField *v34; // rax
  GCGField *v35; // rax
  proto::GCGControllerValue *v36; // rax
  GCGControllerValue *v37; // rdx
  bool is_need_die_phase; // [rsp+1Eh] [rbp-222h]
  bool is_all_character_die; // [rsp+1Fh] [rbp-221h]
  GCGControllerValue first_controller_id; // [rsp+20h] [rbp-220h]
  proto::GCGControllerValue other_controller_id; // [rsp+24h] [rbp-21Ch]
  uint32_t rest_energy; // [rsp+2Ch] [rbp-214h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-210h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-208h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-200h]
  std::map<proto::GCGControllerValue,std::vector<unsigned int>> *__for_range_0; // [rsp+48h] [rbp-1F8h]
  std::set<proto::GCGControllerValue> *__for_range_1; // [rsp+50h] [rbp-1F0h]
  std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > *__in; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > >::type *controller_id; // [rsp+60h] [rbp-1E0h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > >::type *card_guid_vec_0; // [rsp+68h] [rbp-1D8h]
  GCGField *field_0; // [rsp+70h] [rbp-1D0h]
  GCGCharacterZone *zone_0; // [rsp+78h] [rbp-1C8h]
  GCGField *field; // [rsp+80h] [rbp-1C0h]
  GCGCharacterZone *zone; // [rsp+88h] [rbp-1B8h]
  std::vector<std::shared_ptr<GCGCard>> v55; // [rsp+90h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v56; // [rsp+B0h] [rbp-190h] BYREF
  common::milog::MiLogStream v57; // [rsp+D0h] [rbp-170h] BYREF
  char v58[336]; // [rsp+F0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 13 card_guid:584 48 4 17 controller_id:612 64 16 13 param_ptr:698 96 16 26 monster_contro"
                        "ller_ptr:616 128 48 24 need_remove_guid_map:582 208 48 35 die_character_controller_id_set:583";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onCardDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  if ( !std::vector<unsigned int>::empty(card_guid_vec) )
  {
    is_need_die_phase = 0;
    is_all_character_die = 0;
    first_controller_id = GCG_CONTROLLER_NONE;
    std::map<proto::GCGControllerValue,std::vector<unsigned int>>::map((std::map<proto::GCGControllerValue,std::vector<unsigned int>> *const)(v2 + 128));
    std::set<proto::GCGControllerValue>::set((std::set<proto::GCGControllerValue> *const)(v2 + 208));
    __for_range = card_guid_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(card_guid_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(card_guid_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 32) = *v6;
      CardMgr = GCGGameMode::getCardMgr(this);
      GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 64), CardMgr, *(_DWORD *)(v2 + 32));
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "onCardDie",
          589);
        v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v57,
               (const char (*)[23])"find card fail. guid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v57);
      }
      else
      {
        v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( GCGCard::getCardType(v9) == GCG_CARD_CHARACTER )
        {
          v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( !GCGCard::isActivated(v12) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "onCardDie",
              599);
            v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v56,
                    (const char (*)[22])"already deactivated. ");
            v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            GCGCard::getDesc[abi:cxx11]((std::string *)&v57, v14);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v57);
            std::string::~string(&v57);
            common::milog::MiLogStream::~MiLogStream(&v56);
          }
          else
          {
            v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( GCGCard::isAlive(v15) )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/game_mode/gcg_game_mode.cpp",
                "onCardDie",
                604);
              v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v56,
                      (const char (*)[22])"card is still alive. ");
              v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              GCGCard::getDesc[abi:cxx11]((std::string *)&v57, v17);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v57);
              std::string::~string(&v57);
              common::milog::MiLogStream::~MiLogStream(&v56);
            }
            else
            {
              v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              rest_energy = GCGCard::getCurEnergy(v18);
              v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              GCGCard::setCharacterDie(v19, GCG_REASON_DEFAULT);
              v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              *(_DWORD *)(v2 + 48) = GCGCard::getControllerId(v20);
              if ( !GCGGameMode::isDuringSnapshot(this) )
              {
                GCGGameMode::getController<GCGMonsterController>(
                  (GCGGameMode *const)(v2 + 96),
                  (GCGControllerValue)this);
                if ( std::operator!=<GCGMonsterController>(
                       (const std::shared_ptr<GCGMonsterController> *)(v2 + 96),
                       0LL) )
                {
                  v21 = std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                  GCGMonsterController::clearCharacterIntention(v21, *(_DWORD *)(v2 + 32));
                }
                GCGStatistics::reportStatisticSpecifyDataUint(
                  &this->statistics_,
                  *(GCGControllerValue *)(v2 + 48),
                  REST_ENERGY,
                  rest_energy,
                  1);
                v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( GCGCard::isRemoveAfterDie(v22) )
                  GCGStatistics::reportStatisticSpecifyDataUint(
                    &this->statistics_,
                    *(GCGControllerValue *)(v2 + 48),
                    DIE_CHARACTER_NUM,
                    1u,
                    1);
                GCGStatistics::reportStatisticSpecifyDataUint(
                  &this->statistics_,
                  *(GCGControllerValue *)(v2 + 48),
                  CHARACTER_DIE_TIMES,
                  1u,
                  1);
                std::shared_ptr<GCGMonsterController>::~shared_ptr((std::shared_ptr<GCGMonsterController> *const)(v2 + 96));
              }
              else
              {
                v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( !GCGCard::isRemoveAfterDie(v23) )
                {
                  SkillPreviewContext = GCGGameMode::getSkillPreviewContext(this);
                  GCGSkillPreviewContext::markDeleteCard(SkillPreviewContext, *(_DWORD *)(v2 + 32));
                }
              }
              GCGDuel::addKillCharacterCount(&this->duel_);
              field = GCGDuel::getField(&this->duel_, (GCGControllerValue)*(_DWORD *)(v2 + 48));
              GCGField::addDieCharacterCount(field);
              zone = GCGField::getCharacterZone(field);
              std::set<proto::GCGControllerValue>::emplace<proto::GCGControllerValue&>(
                (std::set<proto::GCGControllerValue> *const)(v2 + 208),
                (proto::GCGControllerValue *)(v2 + 48),
                (proto::GCGControllerValue *)(v2 + 48));
              if ( first_controller_id == GCG_CONTROLLER_NONE )
                first_controller_id = *(_DWORD *)(v2 + 48);
              if ( GCGCharacterZone::getOnStageCardGuid(zone) == *(_DWORD *)(v2 + 32) )
                is_need_die_phase = 1;
              v25 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              if ( GCGCard::isRemoveAfterDie(v25) )
              {
                v26 = std::map<proto::GCGControllerValue,std::vector<unsigned int>>::operator[](
                        (std::map<proto::GCGControllerValue,std::vector<unsigned int>> *const)(v2 + 128),
                        (const std::map<proto::GCGControllerValue,std::vector<unsigned int>>::key_type *)(v2 + 48));
                std::vector<unsigned int>::push_back(v26, (const std::vector<unsigned int>::value_type *)(v2 + 32));
              }
              if ( GCGCharacterZone::isAllCharacterDie(zone) )
              {
                WaitingZone = GCGField::getWaitingZone(field);
                if ( GCGCharacterWaitingZone::empty(WaitingZone) )
                {
                  is_all_character_die = 1;
                  common::milog::MiLogStream::create(
                    &v57,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/game_mode/gcg_game_mode.cpp",
                    "onCardDie",
                    675);
                  v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          &v57,
                          (const char (*)[17])off_1BA12F60);
                  v30 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                          v29,
                          (const proto::GCGControllerValue *)(v2 + 48));
                  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v30,
                    (const char (*)[27])" all die. nned to gameover");
                  common::milog::MiLogStream::~MiLogStream(&v57);
                }
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "onCardDie",
            594);
          v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v56,
                  (const char (*)[18])"card type error. ");
          v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          GCGCard::getDesc[abi:cxx11]((std::string *)&v57, v11);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v57);
          std::string::~string(&v57);
          common::milog::MiLogStream::~MiLogStream(&v56);
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 64));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::map<proto::GCGControllerValue,std::vector<unsigned int>> *)(v2 + 128);
    __for_begin._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,std::vector<unsigned int>>::begin((std::map<proto::GCGControllerValue,std::vector<unsigned int>> *const)(v2 + 128))._M_node;
    __for_end._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,std::vector<unsigned int>>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > >::_Self *)&__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > > *const)&__for_begin);
      controller_id = std::get<0ul,proto::GCGControllerValue const,std::vector<unsigned int>>(__in);
      card_guid_vec_0 = std::get<1ul,proto::GCGControllerValue const,std::vector<unsigned int>>(__in);
      p_duel = &this->duel_;
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      field_0 = GCGDuel::getField(p_duel, *controller_id);
      zone_0 = GCGField::getCharacterZone(field_0);
      GCGCardZone::popCard(&v55, zone_0, card_guid_vec_0, GCG_REASON_REMOVE_AFTER_DIE, 1);
      std::vector<std::shared_ptr<GCGCard>>::~vector(&v55);
      std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::vector<unsigned int> > > *const)&__for_begin);
    }
    if ( is_all_character_die )
    {
      if ( GCGGameMode::isDuringSnapshot(this) )
      {
        GCGGameMode::setIsNeedBreakForSpecialAsk(this, 1);
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "onCardDie",
          689);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v57, (const char (*)[33])off_1BA12FE0);
        common::milog::MiLogStream::~MiLogStream(&v57);
      }
      else
      {
        GCGGameMode::toFinPhase(this, GCG_CONTROLLER_NONE, GCG_END_REASON_DIE);
      }
      goto LABEL_60;
    }
    if ( is_need_die_phase )
    {
      common::tools::perf::make_shared<GCGPhaseParam>();
      v32 = std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v32->first_die_controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v32->first_die_controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v32 = (std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v32->first_die_controller_id);
      }
      v32->first_die_controller_id = first_controller_id;
      PhaseMgr = GCGGameMode::getPhaseMgr(this);
      std::shared_ptr<GCGPhaseParam>::shared_ptr(
        (std::shared_ptr<GCGPhaseParam> *const)(v2 + 96),
        (const std::shared_ptr<GCGPhaseParam> *)(v2 + 64));
      GCGPhaseMgr::toSpecialPhase(PhaseMgr, GCG_PHASE_DIE, (GCGPhaseParamPtr *)(v2 + 96));
      std::shared_ptr<GCGPhaseParam>::~shared_ptr((std::shared_ptr<GCGPhaseParam> *const)(v2 + 96));
      std::shared_ptr<GCGPhaseParam>::~shared_ptr((std::shared_ptr<GCGPhaseParam> *const)(v2 + 64));
    }
    else if ( first_controller_id )
    {
      if ( GCGGameMode::isDuringSnapshot(this) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "onCardDie",
          707);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v57,
          (const char (*)[35])"[PREVIEW] ignore waiting character");
        common::milog::MiLogStream::~MiLogStream(&v57);
LABEL_60:
        std::set<proto::GCGControllerValue>::~set((std::set<proto::GCGControllerValue> *const)(v2 + 208));
        std::map<proto::GCGControllerValue,std::vector<unsigned int>>::~map((std::map<proto::GCGControllerValue,std::vector<unsigned int>> *const)(v2 + 128));
        goto LABEL_61;
      }
      other_controller_id = (unsigned int)GCGDuel::getOtherControllerId(&this->duel_, first_controller_id);
      v34 = GCGDuel::getField(&this->duel_, first_controller_id);
      GCGField::processWaitingCharacter(v34, GCG_REASON_DEFAULT);
      v35 = GCGDuel::getField(&this->duel_, other_controller_id);
      GCGField::processWaitingCharacter(v35, GCG_REASON_DEFAULT);
    }
    __for_range_1 = (std::set<proto::GCGControllerValue> *)(v2 + 208);
    __for_begin._M_current = (const unsigned int *)std::set<proto::GCGControllerValue>::begin((const std::set<proto::GCGControllerValue> *const)(v2 + 208))._M_node;
    __for_end._M_current = (const unsigned int *)std::set<proto::GCGControllerValue>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<proto::GCGControllerValue>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<proto::GCGControllerValue>::_Self *)&__for_end) )
    {
      v36 = (proto::GCGControllerValue *)std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator*((const std::_Rb_tree_const_iterator<proto::GCGControllerValue> *const)&__for_begin);
      v37 = v36;
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v36);
      }
      GCGGameMode::updatePlayerControllerChallengeByType(this, *v37, GCG_CHALLENGE_CHARACTER_ALIVE_NUM);
      std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator++((std::_Rb_tree_const_iterator<proto::GCGControllerValue> *const)&__for_begin);
    }
    goto LABEL_60;
  }
LABEL_61:
  if ( v58 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 724: range 000000000D776362-000000000D777049
void __cdecl GCGGameMode::onCardBeingHurt(
        GCGGameMode *const this,
        const std::vector<GCGBeingHurtResult> *being_hurt_result_vec,
        const std::vector<unsigned int> *die_card_guid_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  GCGTriggerType trigger_type; // r14d
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  GCGControllerValue controller_id; // [rsp+24h] [rbp-1FCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-1F0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1E8h]
  const std::vector<GCGBeingHurtResult> *__for_range_0; // [rsp+40h] [rbp-1E0h]
  const GCGBeingHurtResult *being_hurt_result; // [rsp+48h] [rbp-1D8h]
  GCGPhaseMgr v44; // [rsp+50h] [rbp-1D0h] BYREF
  char v45[336]; // [rsp+D0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 13 card_guid:733 64 4 13 card_guid:727 80 16 13 skill_ptr:734 112 16 19 source_card_ptr:7"
                        "40 144 16 19 target_card_ptr:746 176 16 29 trigger_windows_param_ptr:776 208 48 29 ignore_charac"
                        "ter_guid_set:725";
  *(_QWORD *)(v3 + 16) = GCGGameMode::onCardBeingHurt;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 208));
  __for_range = die_card_guid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(die_card_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(die_card_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 64) = *v7;
    std::set<unsigned int>::emplace<unsigned int &>(
      (std::set<unsigned int> *const)(v3 + 208),
      (unsigned int *)(v3 + 64),
      (unsigned int *)(v3 + 64));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = being_hurt_result_vec;
  __for_begin._M_current = (const unsigned int *)std::vector<GCGBeingHurtResult>::begin(being_hurt_result_vec)._M_current;
  __for_end._M_current = (const unsigned int *)std::vector<GCGBeingHurtResult>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<GCGBeingHurtResult const*,std::vector<GCGBeingHurtResult>>(
            (const __gnu_cxx::__normal_iterator<const GCGBeingHurtResult*,std::vector<GCGBeingHurtResult> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const GCGBeingHurtResult*,std::vector<GCGBeingHurtResult> > *)&__for_end) )
  {
    being_hurt_result = __gnu_cxx::__normal_iterator<GCGBeingHurtResult const*,std::vector<GCGBeingHurtResult>>::operator*((const __gnu_cxx::__normal_iterator<const GCGBeingHurtResult*,std::vector<GCGBeingHurtResult> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&being_hurt_result->target_card_guid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&being_hurt_result->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&being_hurt_result->target_card_guid);
    }
    *(_DWORD *)(v3 + 48) = being_hurt_result->target_card_guid;
    std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 80), &being_hurt_result->skill_ptr);
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v44.phase_stack_.c._M_impl._M_finish._M_last,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onCardBeingHurt",
        737);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             (common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_finish._M_last,
             (const char (*)[35])"source skill_ptr is nullptr, guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_finish._M_last);
    }
    else
    {
      std::shared_ptr<GCGCard>::shared_ptr(
        (std::shared_ptr<GCGCard> *const)(v3 + 112),
        &being_hurt_result->source_card_ptr);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v44.phase_stack_.c._M_impl._M_finish._M_last,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "onCardBeingHurt",
          743);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               (common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_finish._M_last,
               (const char (*)[34])"source_card_ptr is nullptr, guid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_finish._M_last);
      }
      else
      {
        std::shared_ptr<GCGCard>::shared_ptr(
          (std::shared_ptr<GCGCard> *const)(v3 + 144),
          &being_hurt_result->target_card_ptr);
        if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 144)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v44.phase_stack_.c._M_impl._M_finish._M_last,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "onCardBeingHurt",
            749);
          v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_finish._M_last,
                  (const char (*)[35])"source skill_ptr is nullptr, guid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_finish._M_last);
        }
        else if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                     (std::set<unsigned int> *)(v3 + 208),
                     (const unsigned int *)(v3 + 48)) )
        {
          std::set<unsigned int>::emplace<unsigned int &>(
            (std::set<unsigned int> *const)(v3 + 208),
            (unsigned int *)(v3 + 48),
            (unsigned int *)(v3 + 48));
          v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          if ( GCGCard::getCardType(v11) == GCG_CARD_CHARACTER )
          {
            v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            if ( !GCGCard::isActivated(v14) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v44.phase_stack_.c._M_impl._M_start._M_last,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/game_mode/gcg_game_mode.cpp",
                "onCardBeingHurt",
                766);
              v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_start._M_last,
                      (const char (*)[22])"already deactivated. ");
              v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              GCGCard::getDesc[abi:cxx11]((std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last, v16);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v15,
                (const std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last);
              std::string::~string(&v44.phase_stack_.c._M_impl._M_finish._M_last);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_start._M_last);
            }
            else
            {
              v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              if ( !GCGCard::isAlive(v17) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v44.phase_stack_.c._M_impl._M_start._M_last,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/game_mode/gcg_game_mode.cpp",
                  "onCardBeingHurt",
                  771);
                v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        (common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_start._M_last,
                        (const char (*)[20])"card is not alive. ");
                v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                GCGCard::getDesc[abi:cxx11]((std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last, v19);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v18,
                  (const std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last);
                std::string::~string(&v44.phase_stack_.c._M_impl._M_finish._M_last);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_start._M_last);
              }
              else
              {
                v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                controller_id = GCGCard::getControllerId(v20);
                common::tools::perf::make_shared<GCGSkillUseParam>();
                v21 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                if ( *(_BYTE *)(((unsigned __int64)&v21->trigger_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v21->trigger_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  v21 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->trigger_type);
                }
                v21->trigger_type = GCG_TRIGGER_ON_BEING_DAMAGE;
                v22 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                std::shared_ptr<GCGCard>::operator=(&v22->source_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 112));
                v23 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                std::shared_ptr<GCGCard>::operator=(&v23->target_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 144));
                v24 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                std::shared_ptr<GCGSkill>::operator=(&v24->skill_ptr, (const std::shared_ptr<GCGSkill> *)(v3 + 80));
                v25 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                if ( *(_BYTE *)(((unsigned __int64)&v25->controller_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v25->controller_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  v25 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v25->controller_id);
                }
                v25->controller_id = controller_id;
                SkillLogic = GCGGameMode::getSkillLogic(this);
                std::shared_ptr<GCGSkillUseParam>::shared_ptr(
                  (std::shared_ptr<GCGSkillUseParam> *const)&v44.cur_phase_ptr_,
                  (const std::shared_ptr<GCGSkillUseParam> *)(v3 + 176));
                v27 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                if ( *(_BYTE *)(((unsigned __int64)&v27->trigger_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v27->trigger_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  v27 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v27->trigger_type);
                }
                trigger_type = v27->trigger_type;
                GCGGameMode::getPhaseMgr(this);
                GCGPhaseMgr::getCurPhase(&v44);
                GCGSkillLogic::trigger(
                  SkillLogic,
                  (GCGPhaseBasePtr *)&v44,
                  trigger_type,
                  (GCGSkillUseParamPtr *)&v44.cur_phase_ptr_);
                std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&v44);
                std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&v44.cur_phase_ptr_);
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v44.phase_stack_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/game_mode/gcg_game_mode.cpp",
                  "onCardBeingHurt",
                  783);
                v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        (common::milog::MiLogStream *const)&v44.phase_stack_,
                        (const char (*)[35])"onCardBeingHurt trigger, skill_id:");
                v30 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                *(_DWORD *)(v3 + 64) = GCGSkill::getSkillId(v30);
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v3 + 64));
                v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" source:");
                v33 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                GCGCard::getDesc[abi:cxx11]((std::string *)&v44.phase_stack_.c._M_impl._M_start._M_last, v33);
                v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v32,
                        (const std::string *)&v44.phase_stack_.c._M_impl._M_start._M_last);
                v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" target:");
                v36 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                GCGCard::getDesc[abi:cxx11]((std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last, v36);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v35,
                  (const std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last);
                std::string::~string(&v44.phase_stack_.c._M_impl._M_finish._M_last);
                std::string::~string(&v44.phase_stack_.c._M_impl._M_start._M_last);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_);
                std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 176));
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v44.phase_stack_.c._M_impl._M_start._M_last,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "onCardBeingHurt",
              761);
            v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    (common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_start._M_last,
                    (const char (*)[18])"card type error. ");
            v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            GCGCard::getDesc[abi:cxx11]((std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last, v13);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v12,
              (const std::string *)&v44.phase_stack_.c._M_impl._M_finish._M_last);
            std::string::~string(&v44.phase_stack_.c._M_impl._M_finish._M_last);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44.phase_stack_.c._M_impl._M_start._M_last);
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 144));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 112));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 80));
    __gnu_cxx::__normal_iterator<GCGBeingHurtResult const*,std::vector<GCGBeingHurtResult>>::operator++((__gnu_cxx::__normal_iterator<const GCGBeingHurtResult*,std::vector<GCGBeingHurtResult> > *const)&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 208));
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 788: range 000000000D77704A-000000000D7775ED
void __fastcall GCGGameMode::toFinPhase(
        GCGGameMode *const this,
        GCGControllerValue win_controller_id,
        GCGEndReason end_reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  GCGControllerValue v12; // ecx
  GCGEndReason v13; // ecx
  GCGEndReason v14; // r14d
  std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::shared_ptr<GCGActionBase> p_action_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 21 win_controller_id:787 48 4 14 end_reason:787 64 16 14 action_ptr:807";
  *(_QWORD *)(v3 + 16) = GCGGameMode::toFinPhase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = win_controller_id;
  *(_DWORD *)(v3 + 48) = end_reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_over_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_over_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_over_);
  }
  if ( this->is_game_over_ )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "toFinPhase",
      791);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v18, (const char (*)[17])"already gameover");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else if ( *(_DWORD *)(v3 + 32)
         && (Duel = GCGGameMode::getDuel(this), !GCGDuel::isControllerIdValid(Duel, *(GCGControllerValue *)(v3 + 32))) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "toFinPhase",
      797);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v18,
           (const char (*)[24])"invalid controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v8,
      (const proto::GCGControllerValue *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "toFinPhase",
      800);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v18, (const char (*)[9])"winner: ");
    v10 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v9,
            (const proto::GCGControllerValue *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" reason: ");
    common::milog::MiLogStream::operator<<<proto::GCGEndReason,(proto::GCGEndReason*)0>(
      v11,
      (const proto::GCGEndReason *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_game_over_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_over_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_game_over_);
    }
    this->is_game_over_ = 1;
    v12 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->win_controller_id_);
    }
    this->win_controller_id_ = v12;
    v13 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->end_reason_);
    }
    this->end_reason_ = v13;
    GCGActionMgr::clearAllAction(&this->action_mgr_);
    GCGActionMgr::createAction<GCGActionGameOver>(
      (GCGActionMgr *const)(v3 + 64),
      (GCGControllerValue)((_DWORD)this + 12328));
    if ( std::operator==<GCGActionGameOver>((const std::shared_ptr<GCGActionGameOver> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "toFinPhase",
        810);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v18, (const char (*)[19])"createAction fail.");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v14 = *(_DWORD *)(v3 + 48);
      v15 = std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v15->end_reason >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->end_reason >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->end_reason);
      }
      v15->end_reason = v14;
      std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionGameOver,void>(
        &p_action_ptr,
        (const std::shared_ptr<GCGActionGameOver> *)(v3 + 64));
      GCGActionMgr::enqueueAction(&this->action_mgr_, &p_action_ptr);
      std::shared_ptr<GCGActionBase>::~shared_ptr(&p_action_ptr);
    }
    std::shared_ptr<GCGActionGameOver>::~shared_ptr((std::shared_ptr<GCGActionGameOver> *const)(v3 + 64));
  }
  if ( v19 == (char *)v3 )
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

// Line 819: range 000000000D7775EE-000000000D777833
void __fastcall GCGGameMode::setWinner(
        GCGGameMode *const this,
        GCGControllerValue win_controller_id,
        GCGEndReason end_reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GCGControllerValue v9; // ecx
  GCGEndReason v10; // ecx
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 win_controller_id:818 64 4 14 end_reason:818";
  *(_QWORD *)(v3 + 16) = GCGGameMode::setWinner;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = win_controller_id;
  *(_DWORD *)(v3 + 64) = end_reason;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/game_mode/gcg_game_mode.cpp",
    "setWinner",
    820);
  v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"winner: ");
  v7 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
         v6,
         (const proto::GCGControllerValue *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" reason: ");
  common::milog::MiLogStream::operator<<<proto::GCGEndReason,(proto::GCGEndReason*)0>(
    v8,
    (const proto::GCGEndReason *)(v3 + 64));
  common::milog::MiLogStream::~MiLogStream(&v12);
  v9 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_controller_id_);
  }
  this->win_controller_id_ = v9;
  v10 = *(_DWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_reason_);
  }
  this->end_reason_ = v10;
  if ( v13 == (char *)v3 )
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

// Line 826: range 000000000D777834-000000000D778019
int32_t __cdecl GCGGameMode::process(GCGGameMode *const this, GCGOperationBasePtr *p_operation_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  GCGPhaseBase *v6; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGPhaseBase *v8; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  GCGOperationType v11; // eax
  char v12; // al
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  const std::map<proto::GCGControllerValue,unsigned int> *AllowControllerMap; // rax
  GCGPhaseBase *v22; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  unsigned __int64 v26; // rax
  void (__fastcall *v27)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::GCGReplayOperationData *); // r15
  proto::GCGOperationReplay *v28; // rax
  proto::GCGReplayOperationData *v29; // rax
  GCGActionMgr *ActionMgr; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<GCGOperationBase> v34; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 guard:856 64 16 17 cur_phase_ptr:843";
  *(_QWORD *)(v2 + 16) = GCGGameMode::process;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "process",
      829);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v35,
      (const char (*)[36])"[GCG_RET] operation_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v5 = -1;
  }
  else if ( !GCGGameMode::isRunning(this) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "process",
      834);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v35,
      (const char (*)[36])"[GCG_RET] game_mode is not running.");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v5 = 12002;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 106) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_processing_);
    }
    if ( this->is_processing_ )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "process",
        840);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v35,
        (const char (*)[38])"[GCG_RET] game_mode is in processing.");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v5 = -1;
    }
    else
    {
      GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 64));
      if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "process",
          847);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v35,
          (const char (*)[35])"[GCG_RET] cur_phase_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v5 = -1;
      }
      else
      {
        v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v7 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v7->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v7 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->controller_id);
        }
        if ( GCGPhaseBase::isAllowController(v6, v7->controller_id) )
          goto LABEL_23;
        v8 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v9 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v9);
        v10 = (unsigned __int64)(v9->_vptr_GCGOperationBase + 2);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v9->_vptr_GCGOperationBase + 2);
        v11 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9);
        if ( !GCGPhaseBase::isSpecialOperation(v8, v11) )
          v12 = 1;
        else
LABEL_23:
          v12 = 0;
        if ( v12 )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "process",
            852);
          v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v35,
                  (const char (*)[52])"[GCG_RET] controller_id not match. operation type: ");
          v14 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v14);
          v15 = (unsigned __int64)(v14->_vptr_GCGOperationBase + 2);
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v14->_vptr_GCGOperationBase + 2);
          val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v15)(v14);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v16,
                  (const char (*)[17])" controller_id: ");
          v18 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
          v19 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v17,
                  &v18->controller_id);
          v20 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          AllowControllerMap = GCGPhaseBase::getAllowControllerMap(v20);
          common::milog::MiLogStream::operator<<<proto::GCGControllerValue,unsigned int>(v19, AllowControllerMap);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v5 = 12003;
        }
        else
        {
          GCGUtils::RunGuard::RunGuard((GCGUtils::RunGuard *const)(v2 + 32), &this->is_processing_);
          v22 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          std::shared_ptr<GCGOperationBase>::shared_ptr(&v34, p_operation_ptr);
          ret = GCGPhaseBase::tryHandlerOpration(v22, &v34);
          std::shared_ptr<GCGOperationBase>::~shared_ptr(&v34);
          if ( !ret )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this - 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load1(&this->is_save_operation_);
            }
            if ( this->is_save_operation_
              && std::operator!=<proto::GCGOperationReplay>(&this->operation_replay_ptr_, 0LL) )
            {
              v24 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
              v25 = v24;
              if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v24);
              v26 = (unsigned __int64)(v25->_vptr_GCGOperationBase + 3);
              if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v25->_vptr_GCGOperationBase + 3);
              v27 = *(void (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::GCGReplayOperationData *))v26;
              v28 = std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->operation_replay_ptr_);
              v29 = proto::GCGOperationReplay::add_operation_data_list(v28);
              v27(v25, v29);
            }
          }
          ActionMgr = GCGGameMode::getActionMgr(this);
          GCGActionMgr::tryLoop(ActionMgr);
          GCGGameMode::trySendMsgPack(this);
          v5 = ret;
          GCGUtils::RunGuard::~RunGuard((GCGUtils::RunGuard *const)(v2 + 32));
        }
      }
      std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 64));
    }
  }
  result = v5;
  if ( v36 == (char *)v2 )
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
  return result;
};

// Line 871: range 000000000D77801A-000000000D778062
void __cdecl GCGGameMode::setGameOver(
        GCGGameMode *const this,
        GCGControllerValue win_controller_id,
        GCGEndReason end_reason)
{
  GCGActionMgr *ActionMgr; // rax

  GCGGameMode::toFinPhase(this, win_controller_id, end_reason);
  ActionMgr = GCGGameMode::getActionMgr(this);
  GCGActionMgr::tryLoop(ActionMgr);
  GCGGameMode::trySendMsgPack(this);
};

// Line 878: range 000000000D778064-000000000D77831B
__int64 __fastcall GCGGameMode::onPlayerGiveUp(GCGGameMode *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int v10; // r14d
  GCGDuel *Duel; // rax
  __int64 result; // rax
  proto::GCGControllerValue oppenont_controller_id; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  std::string val; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 controller_id:879 48 4 7 uid:877 64 16 18 controller_ptr:880";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onPlayerGiveUp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(_DWORD *)(v2 + 32) = GCGGameMode::getControllerId(this, *(_DWORD *)(v2 + 48));
  GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v2 + 64), (GCGControllerValue)this);
  if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "onPlayerGiveUp",
      883);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v14,
           (const char (*)[46])"[GCG_RET] getController fail. controller_id: ");
    v6 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
           v5,
           (const proto::GCGControllerValue *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" game_uid: ");
    GCGGameMode::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v10 = -1;
  }
  else
  {
    Duel = GCGGameMode::getDuel(this);
    oppenont_controller_id = (unsigned int)GCGDuel::getOtherControllerId(Duel, (GCGControllerValue)*(_DWORD *)(v2 + 32));
    GCGGameMode::setGameOver(this, oppenont_controller_id, GCG_END_REASON_GIVE_UP);
    v10 = 0;
  }
  std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 64));
  result = v10;
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 893: range 000000000D77831C-000000000D77833D
uint32_t __cdecl GCGGameMode::getClientDataVersion(const GCGGameMode *const this)
{
  const GCGConfigMgr *Config; // rax

  Config = GCGGameMode::getConfig(this);
  return GCGConfigMgr::getClientDataVersion(Config);
};

// Line 898: range 000000000D77833E-000000000D77867D
__int64 __fastcall GCGGameMode::checkClientVersionCanBack(const GCGGameMode *const this, uint32_t version)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 version:897";
  *(_QWORD *)(v2 + 16) = GCGGameMode::checkClientVersionCanBack;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = version;
  Config::getConfig();
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  if ( *(char *)(((unsigned __int64)&v5->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
    v5 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v5->is_client_data_version_not_latest_ban_gcg);
  v6 = !v5->is_client_data_version_not_latest_ban_gcg;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( v6 )
  {
    result = 0LL;
  }
  else if ( GCGGameMode::getClientDataVersion(this) <= *(_DWORD *)(v2 + 32) )
  {
    if ( GCGGameMode::getForbidClientVersion(this) && GCGGameMode::getForbidClientVersion(this) <= *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "checkClientVersionCanBack",
        911);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v17, (const char (*)[10])"version: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])off_1BA13AC0);
      val = GCGGameMode::getForbidClientVersion(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "checkClientVersionCanBack",
      905);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v17, (const char (*)[10])"version: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])off_1BA13A80);
    val = GCGGameMode::getClientDataVersion(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 918: range 000000000D77867E-000000000D778F8B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GCGGameMode::start(GCGGameMode *const this)
{
  unsigned __int64 p_M_finish; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // r12
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int (__fastcall *v13)(unsigned __int64, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD); // r10
  GCGStatistics *Statistics; // r14
  uint32_t Now; // eax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  google::protobuf::uint32 BusinessType; // eax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  uint32_t GameId; // eax
  int32_t result; // eax
  std::string v22; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  GCGPhaseMgr v23; // [rsp+20h] [rbp-E0h] BYREF

  v22._M_string_length = (std::string::size_type)this;
  p_M_finish = (unsigned __int64)&v23.phase_stack_.c._M_impl._M_finish;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_finish = v2;
  }
  *(_QWORD *)p_M_finish = 1102416563LL;
  *(_QWORD *)(p_M_finish + 8) = "2 48 1 10 holder:945 64 16 11 log_ptr:958";
  *(_QWORD *)(p_M_finish + 16) = GCGGameMode::start;
  v3 = (_DWORD *)(p_M_finish >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(char *)(((v22._M_string_length + 10088) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v22._M_string_length + 10088);
  if ( *(_BYTE *)(v22._M_string_length + 10088) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v23.cur_phase_ptr_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "start",
      921);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&v23.cur_phase_ptr_,
           (const char (*)[18])"already started. ");
    GCGGameMode::getDesc[abi:cxx11](
      (std::string *)&v23.phase_stack_.c._M_impl._M_start,
      (GCGGameMode *const)v22._M_string_length);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v4,
      (const std::string *)&v23.phase_stack_.c._M_impl._M_start);
    std::string::~string(&v23.phase_stack_.c._M_impl._M_start);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.cur_phase_ptr_);
    v5 = -1;
  }
  else if ( std::operator==<GCGConfigMgr>((const std::shared_ptr<GCGConfigMgr> *)(v22._M_string_length + 10032), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v23.phase_stack_.c._M_impl._M_start,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "start",
      926);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start,
           (const char (*)[33])"config_ptr is nullptr. game_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v6,
      (const unsigned int *)(v22._M_string_length + 10048));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start);
    v5 = -1;
  }
  else
  {
    GCGPhaseMgr::getCurPhase(&v23);
    v7 = std::operator!=<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)&v23, 0LL);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&v23);
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v23.phase_stack_.c._M_impl._M_start,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "start",
        931);
      v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             (common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start,
             (const char (*)[55])"game mode start fail. already have phase. phase_type: ");
      GCGPhaseMgr::getCurPhase(&v23);
      v9 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      v10 = (unsigned __int64)(v9->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9->_vptr_GCGPhaseBase + 3);
      *((_DWORD *)&v22._anon_0._M_allocated_capacity + 3) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v8,
        (const unsigned int *)&v22._anon_0._M_allocated_capacity + 3);
      std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&v23);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start);
      v5 = -1;
    }
    else if ( std::operator==<common::tools::MiTimer>(
                (const std::shared_ptr<common::tools::MiTimer> *)(v22._M_string_length + 13792),
                0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v23.phase_stack_.c._M_impl._M_start,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "start",
        936);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        (common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start,
        (const char (*)[23])"timer_ptr is nullptr. ");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start);
      v5 = -1;
    }
    else
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v22._M_string_length + 13792));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v11);
      v12 = *(_QWORD *)v11 + 16LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)v11 + 16LL);
      v13 = *(unsigned int (__fastcall **)(unsigned __int64, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD))v12;
      if ( *(_BYTE *)(((v22._M_string_length + 10064) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v22._M_string_length + 10064) >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = __asan_report_load4(v22._M_string_length + 10064);
      }
      if ( v13(
             v11,
             1LL,
             1LL,
             "./src/card_game/game_mode/gcg_game_mode.cpp",
             "start",
             939LL,
             *(unsigned int *)(v22._M_string_length + 10064),
             0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v23.phase_stack_.c._M_impl._M_start,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "start",
          941);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start,
          (const char (*)[30])"[GCG] timer_ptr_ startS fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.phase_stack_.c._M_impl._M_start);
        v5 = -1;
      }
      else
      {
        GCGGameMode::getTransNo[abi:cxx11](
          (std::string *)&v23.phase_stack_.c._M_impl._M_start,
          (const GCGGameMode *const)v22._M_string_length);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(p_M_finish + 48), 1u, v22);
        std::string::~string(&v23.phase_stack_.c._M_impl._M_start);
        GCGGameMode::notifyGameBriefInfo((GCGGameMode *const)v22._M_string_length);
        Statistics = GCGGameMode::getStatistics((GCGGameMode *const)v22._M_string_length);
        Now = common::tools::TimeUtils::getNow();
        GCGStatistics::recordStartTime(Statistics, Now);
        if ( *(char *)(((v22._M_string_length + 10088) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v22._M_string_length + 10088);
        *(_BYTE *)(v22._M_string_length + 10088) = 1;
        GCGPhaseMgr::enterNext((GCGPhaseMgr *const)(v22._M_string_length + 12216));
        GCGGameMode::onPostGameStart((GCGGameMode *const)v22._M_string_length);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v23.cur_phase_ptr_,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "start",
          952);
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                (common::milog::MiLogStream *const)&v23.cur_phase_ptr_,
                (const char (*)[13])"game start. ");
        GCGGameMode::getDesc[abi:cxx11](
          (std::string *)&v23.phase_stack_.c._M_impl._M_start,
          (GCGGameMode *const)v22._M_string_length);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v16,
          (const std::string *)&v23.phase_stack_.c._M_impl._M_start);
        std::string::~string(&v23.phase_stack_.c._M_impl._M_start);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.cur_phase_ptr_);
        std::__shared_ptr<GCGMsgPack,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<GCGMsgPack,(__gnu_cxx::_Lock_policy)2> *const)(v22._M_string_length + 12912));
        std::vector<std::shared_ptr<GCGMsgPack>>::clear((std::vector<std::shared_ptr<GCGMsgPack>> *const)(v22._M_string_length + 12928));
        common::tools::perf::make_shared<proto_log::GCGLogBodyDuelStart>();
        v17 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 64));
        BusinessType = GCGGameMode::getBusinessType((const GCGGameMode *const)v22._M_string_length);
        proto_log::GCGLogBodyDuelStart::set_type(v17, BusinessType);
        v19 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 64));
        GameId = GCGGameMode::getGameId((const GCGGameMode *const)v22._M_string_length);
        proto_log::GCGLogBodyDuelStart::set_level_id(v19, GameId);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::GCGLogBodyDuelStart,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&v23,
          (const std::shared_ptr<proto_log::GCGLogBodyDuelStart> *)(p_M_finish + 64));
        GCGGameMode::printStatLog((MessagePtr *)&v23);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v23);
        v5 = 0;
        std::shared_ptr<proto_log::GCGLogBodyDuelStart>::~shared_ptr((std::shared_ptr<proto_log::GCGLogBodyDuelStart> *const)(p_M_finish + 64));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(p_M_finish + 48));
      }
    }
  }
  result = v5;
  if ( &v23.phase_stack_.c._M_impl._M_finish == (std::_Deque_base<std::shared_ptr<GCGPhaseBase>>::iterator *)p_M_finish )
  {
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_finish >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_finish = 1172321806LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_finish >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 967: range 000000000D779010-000000000D779DF8
int32_t __cdecl GCGGameMode::stop(GCGGameMode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int32 Now; // edi
  common::milog::MiLogStream *v5; // r14
  common::tools::MiTimer *v6; // rax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  google::protobuf::uint32 BusinessType; // eax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  uint32_t GameId; // eax
  uint32_t stop_time; // ecx
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  uint32_t v13; // esi
  unsigned int *v14; // rax
  unsigned int *v15; // rdx
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  GCGControllerValue Winner; // eax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  google::protobuf::uint32 EndReason; // eax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t PlayerUid; // eax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t *p_level; // rax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  google::protobuf::RepeatedField<unsigned int> *v27; // rax
  const std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *v28; // rax
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  const GCGCharacterZone *v32; // r14
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  int32_t result; // eax
  std::string v35; // [rsp+0h] [rbp-200h]
  GCGGameMode *thisa; // [rsp+8h] [rbp-1F8h]
  uint32_t round_idx; // [rsp+18h] [rbp-1E8h]
  unsigned int phase_main_time_use; // [rsp+1Ch] [rbp-1E4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-1E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-1D8h] BYREF
  GCGStatistics *statistic_mgr; // [rsp+30h] [rbp-1D0h]
  const GCGSpecifyData *specify_data; // [rsp+38h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-1C0h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range_0; // [rsp+48h] [rbp-1B8h]
  std::map<proto::GCGControllerValue,GCGControllerStatistics> *__for_range_1; // [rsp+50h] [rbp-1B0h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range_2; // [rsp+58h] [rbp-1A8h]
  const std::vector<proto_log::GCGOperationData> *statistic_operation_vec; // [rsp+60h] [rbp-1A0h]
  const std::vector<proto_log::GCGOperationData> *__for_range_3; // [rsp+68h] [rbp-198h]
  const proto_log::GCGOperationData *proto_operation_data; // [rsp+70h] [rbp-190h]
  proto_log::GCGOperationData *proto_log_data; // [rsp+78h] [rbp-188h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id_1; // [rsp+80h] [rbp-180h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *_; // [rsp+88h] [rbp-178h]
  proto_log::GCGControllerCharactersInfo *proto_controller_character_info; // [rsp+90h] [rbp-170h]
  const GCGCharacterZone *character_zone; // [rsp+98h] [rbp-168h]
  std::pair<const proto::GCGControllerValue,GCGControllerStatistics> *v55; // [rsp+A0h] [rbp-160h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::type *controller_id_0; // [rsp+A8h] [rbp-158h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::type *data; // [rsp+B0h] [rbp-150h]
  proto_log::GCGControllerDeckInfo *deck_info_proto; // [rsp+B8h] [rbp-148h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+C0h] [rbp-140h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+C8h] [rbp-138h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+D0h] [rbp-130h]
  proto_log::GCGControllerInfo *proto_controller_info; // [rsp+D8h] [rbp-128h]
  const GCGControllerShowData *show_data; // [rsp+E0h] [rbp-120h]
  proto_log::GCGUseTime *proto_use_time; // [rsp+E8h] [rbp-118h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > v65; // [rsp+F0h] [rbp-110h] BYREF
  common::milog::MiLogStream v66; // [rsp+110h] [rbp-F0h] BYREF
  std::string val; // [rsp+130h] [rbp-D0h] BYREF
  char v68[176]; // [rsp+150h] [rbp-B0h] BYREF

  v35._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:976 64 16 11 log_ptr:990 96 16 26 player_controller_ptr:1013";
  *(_QWORD *)(v1 + 16) = GCGGameMode::stop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( this->is_running_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_running_);
    this->is_running_ = 0;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((v35._M_string_length + 10060) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v35._M_string_length) + 76) & 7) + 3) >= *(_BYTE *)(((v35._M_string_length + 10060) >> 3)
                                                                           + 0x7FFF8000) )
    {
      Now = LODWORD(v35._M_string_length) + 10060;
      __asan_report_store4(v35._M_string_length + 10060);
    }
    *(_DWORD *)(v35._M_string_length + 10060) = Now;
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "stop",
      974);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v66, (const char (*)[12])"game stop. ");
    GCGGameMode::getDesc[abi:cxx11](&val, (GCGGameMode *const)v35._M_string_length);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v66);
    GCGGameMode::getTransNo[abi:cxx11](&val, (const GCGGameMode *const)v35._M_string_length);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 2u, v35);
    std::string::~string(&val);
    if ( std::operator!=<common::tools::MiTimer>(&thisa->timer_ptr_, 0LL) )
    {
      v6 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->timer_ptr_);
      common::tools::MiTimer::cancel(v6);
      std::__shared_ptr<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2>::reset(&thisa->timer_ptr_);
    }
    if ( GCGGameMode::isSaveOperation(thisa) )
      GCGGameMode::writeReplayToFile(thisa);
    statistic_mgr = GCGGameMode::getStatistics(thisa);
    common::tools::perf::make_shared<proto_log::GCGLogBodyDuelEnd>();
    v7 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BusinessType = GCGGameMode::getBusinessType(thisa);
    proto_log::GCGLogBodyDuelEnd::set_type(v7, BusinessType);
    v9 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    GameId = GCGGameMode::getGameId(thisa);
    proto_log::GCGLogBodyDuelEnd::set_level_id(v9, GameId);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stop_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->stop_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->stop_time_);
    }
    stop_time = thisa->stop_time_;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->create_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->create_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->create_time_);
    }
    if ( stop_time > thisa->create_time_ )
    {
      v12 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->stop_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->stop_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->stop_time_);
      }
      v13 = thisa->stop_time_;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->create_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->create_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->create_time_);
      }
      proto_log::GCGLogBodyDuelEnd::set_total_use_time(v12, v13 - thisa->create_time_);
    }
    round_idx = 0;
    specify_data = GCGStatistics::getStatisticCommonData(statistic_mgr, PHASE_MAIN_TIME_USE);
    __for_range = &specify_data->data_uint_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&specify_data->data_uint_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&specify_data->data_uint_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      phase_main_time_use = *v15;
      v16 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_use_time = proto_log::GCGLogBodyDuelEnd::add_use_time_list(v16);
      proto_log::GCGUseTime::set_round(proto_use_time, ++round_idx);
      proto_log::GCGUseTime::set_use_time(proto_use_time, phase_main_time_use);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v17 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Winner = GCGGameMode::getWinner(thisa);
    proto_log::GCGLogBodyDuelEnd::set_winner(v17, Winner);
    v19 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    EndReason = GCGGameMode::getEndReason(thisa);
    proto_log::GCGLogBodyDuelEnd::set_reason(v19, EndReason);
    __for_range_0 = &thisa->controller_map_;
    __for_begin._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&thisa->controller_map_)._M_node;
    __for_end._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
      controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
      controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
      std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v1 + 96));
      if ( std::operator!=<GCGPlayerController>(0LL, (const std::shared_ptr<GCGPlayerController> *)(v1 + 96)) )
      {
        v21 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        proto_controller_info = proto_log::GCGLogBodyDuelEnd::add_controller_info_list(v21);
        v22 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        PlayerUid = GCGPlayerController::getPlayerUid(v22);
        proto_log::GCGControllerInfo::set_uid(proto_controller_info, PlayerUid);
        if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(controller_id);
        }
        proto_log::GCGControllerInfo::set_controller_id(proto_controller_info, *controller_id);
        v24 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        show_data = GCGControllerBase::getShowData((const GCGControllerBase *const)v24);
        p_level = &show_data->level;
        if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_level);
        }
        proto_log::GCGControllerInfo::set_level(proto_controller_info, show_data->level);
        if ( *(_BYTE *)(((unsigned __int64)&show_data->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&show_data->score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&show_data->score);
        }
        proto_log::GCGControllerInfo::set_mmr(proto_controller_info, show_data->score);
      }
      std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 96));
      std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
    }
    __for_range_1 = &statistic_mgr->statistics_map;
    __for_begin._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,GCGControllerStatistics>::begin(&statistic_mgr->statistics_map)._M_node;
    __for_end._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,GCGControllerStatistics>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::_Self *)&__for_end) )
    {
      v55 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,GCGControllerStatistics>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> > *const)&__for_begin);
      controller_id_0 = std::get<0ul,proto::GCGControllerValue const,GCGControllerStatistics>(v55);
      data = std::get<1ul,proto::GCGControllerValue const,GCGControllerStatistics>(v55);
      v26 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      deck_info_proto = proto_log::GCGLogBodyDuelEnd::add_controller_deck_info_list(v26);
      if ( *(_BYTE *)(((unsigned __int64)controller_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id_0 >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id_0);
      }
      proto_log::GCGControllerDeckInfo::set_controller_id(deck_info_proto, *controller_id_0);
      v27 = proto_log::GCGControllerDeckInfo::mutable_card_id_list(deck_info_proto);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&data->card_id_vec, v27);
      std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,GCGControllerStatistics>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> > *const)&__for_begin);
    }
    __for_range_2 = &thisa->controller_map_;
    __for_begin._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&thisa->controller_map_)._M_node;
    __for_end._M_current = (const unsigned int *)std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_end) )
    {
      v28 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
      std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>::pair(&v65, v28);
      controller_id_1 = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(&v65);
      _ = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(&v65);
      v29 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_controller_character_info = proto_log::GCGLogBodyDuelEnd::add_controller_character_info_map(v29);
      if ( *(_BYTE *)(((unsigned __int64)controller_id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id_1 >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id_1);
      }
      proto_log::GCGControllerCharactersInfo::set_controller_id(proto_controller_character_info, *controller_id_1);
      Duel = GCGGameMode::getDuel(thisa);
      if ( *(_BYTE *)(((unsigned __int64)controller_id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id_1 >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id_1);
      }
      Field = GCGDuel::getField(Duel, *controller_id_1);
      character_zone = GCGField::getCharacterZone(Field);
      v32 = character_zone;
      std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGGameMode::stop(void)::{lambda(GCGCard const&)#1},void,void>(
        (std::function<ForeachPolicy(const GCGCard&)> *const)&val,
        (GCGGameMode::stop::<lambda(const GCGCard&)>)proto_controller_character_info);
      GCGCardZone::foreachCard(v32, (std::function<ForeachPolicy(const GCGCard&)> *)&val);
      std::function<ForeachPolicy ()(GCGCard const&)>::~function((std::function<ForeachPolicy(const GCGCard&)> *const)&val);
      std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>::~pair(&v65);
      std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
    }
    statistic_operation_vec = GCGStatistics::getAllStatisticOperationData(statistic_mgr);
    __for_range_3 = statistic_operation_vec;
    __for_begin._M_current = (const unsigned int *)std::vector<proto_log::GCGOperationData>::begin(statistic_operation_vec)._M_current;
    __for_end._M_current = (const unsigned int *)std::vector<proto_log::GCGOperationData>::end(__for_range_3)._M_current;
    while ( __gnu_cxx::operator!=<proto_log::GCGOperationData const*,std::vector<proto_log::GCGOperationData>>(
              (const __gnu_cxx::__normal_iterator<const proto_log::GCGOperationData*,std::vector<proto_log::GCGOperationData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const proto_log::GCGOperationData*,std::vector<proto_log::GCGOperationData> > *)&__for_end) )
    {
      proto_operation_data = __gnu_cxx::__normal_iterator<proto_log::GCGOperationData const*,std::vector<proto_log::GCGOperationData>>::operator*((const __gnu_cxx::__normal_iterator<const proto_log::GCGOperationData*,std::vector<proto_log::GCGOperationData> > *const)&__for_begin);
      v33 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_log_data = proto_log::GCGLogBodyDuelEnd::add_operation_data_list(v33);
      proto_log::GCGOperationData::operator=(proto_log_data, proto_operation_data);
      __gnu_cxx::__normal_iterator<proto_log::GCGOperationData const*,std::vector<proto_log::GCGOperationData>>::operator++((__gnu_cxx::__normal_iterator<const proto_log::GCGOperationData*,std::vector<proto_log::GCGOperationData> > *const)&__for_begin);
    }
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::GCGLogBodyDuelEnd,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v1 + 96),
      (const std::shared_ptr<proto_log::GCGLogBodyDuelEnd> *)(v1 + 64));
    GCGGameMode::printStatLog((MessagePtr *)(v1 + 96));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v1 + 96));
    std::shared_ptr<proto_log::GCGLogBodyDuelEnd>::~shared_ptr((std::shared_ptr<proto_log::GCGLogBodyDuelEnd> *const)(v1 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  result = 0;
  if ( v68 == (char *)v1 )
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

// Line 1037: range 000000000D778F8C-000000000D77900E
ForeachPolicy __cdecl GCGGameMode::stop(void)::{lambda(GCGCard const&)#1}::operator()(
        const GCGGameMode::stop::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  uint32_t Id; // edx
  uint32_t CurHp; // edx
  proto_log::GCGCharacterInfo *proto_character_info; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  proto_character_info = proto_log::GCGControllerCharactersInfo::add_character_info_list(__closure->__proto_controller_character_info);
  Id = GCGCard::getId(card);
  proto_log::GCGCharacterInfo::set_card_id(proto_character_info, Id);
  CurHp = GCGCard::getCurHp(card);
  proto_log::GCGCharacterInfo::set_hp(proto_character_info, CurHp);
  return 0;
};

// Line 1058: range 000000000D779DFA-000000000D779FB5
void __cdecl GCGGameMode::notifyGameBriefInfo(GCGGameMode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+20h] [rbp-80h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+38h] [rbp-68h]
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 26 player_controller_ptr:1061";
  *(_QWORD *)(v1 + 16) = GCGGameMode::notifyGameBriefInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&this->controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v1 + 32));
    if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 32), 0LL) )
    {
      v4 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      GCGPlayerController::notifyGameInfo(v4);
    }
    std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1070: range 000000000D779FB6-000000000D77A172
void __cdecl GCGGameMode::sendClientPerform(
        GCGGameMode *const this,
        GCGClientPerformType perform_type,
        const std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::remove_reference<const std::vector<unsigned int>&>::type *v7; // r14
  std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-80h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 msg_ptr:1071";
  *(_QWORD *)(v3 + 16) = GCGGameMode::sendClientPerform;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgClientPerform>();
  v6 = std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v6->perform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->perform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->perform_type);
  }
  v6->perform_type = perform_type;
  v7 = std::move<std::vector<unsigned int> const&>(param_vec);
  v8 = std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgClientPerform,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  std::vector<unsigned int>::operator=(&v8->param_vec, v7);
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgClientPerform,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgClientPerform> *)(v3 + 32));
  GCGGameMode::sendMessage(this, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgClientPerform>::~shared_ptr((std::shared_ptr<GCGMsgClientPerform> *const)(v3 + 32));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1078: range 000000000D77A174-000000000D77A20A
void __cdecl GCGGameMode::sendMessage(GCGGameMode *const this, GCGMessagePtr *p_msg)
{
  std::vector<std::shared_ptr<GCGMessage>> *p_msg_vec; // rdx
  std::shared_ptr<GCGMsgPack> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( !GCGGameMode::isDuringSnapshot(this) )
  {
    if ( std::operator==<GCGMsgPack>(&this->msg_pack_ptr_, 0LL) )
    {
      common::tools::perf::make_shared<GCGMsgPack>();
      std::shared_ptr<GCGMsgPack>::operator=(&this->msg_pack_ptr_, &__r);
      std::shared_ptr<GCGMsgPack>::~shared_ptr(&__r);
    }
    p_msg_vec = &std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->msg_pack_ptr_)->msg_vec;
    std::vector<std::shared_ptr<GCGMessage>>::push_back(p_msg_vec, p_msg);
  }
};

// Line 1092: range 000000000D77A20C-000000000D77A3F5
void __cdecl GCGGameMode::trySendMsgPack(GCGGameMode *const this)
{
  std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx
  std::shared_ptr<GCGMsgPack> *M_current; // r13
  std::shared_ptr<GCGMsgPack> *v4; // r12
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+20h] [rbp-40h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+28h] [rbp-38h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+30h] [rbp-30h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_utr; // [rsp+38h] [rbp-28h]

  if ( !GCGGameMode::isDuringSnapshot(this) )
  {
    GCGGameMode::releaseMsgPack(this);
    if ( !std::vector<std::shared_ptr<GCGMsgPack>>::empty(&this->wait_send_msg_pack_vec_) )
    {
      __for_range = &this->controller_map_;
      __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&this->controller_map_)._M_node;
      __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
        controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
        controller_utr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
        if ( std::operator!=<GCGControllerBase>(controller_utr, 0LL) )
        {
          v1 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_utr);
          if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v1);
          v2 = (unsigned __int64)(v1->_vptr_GCGControllerBase + 2);
          if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v1->_vptr_GCGControllerBase + 2);
          (*(void (__fastcall **)(std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::vector<std::shared_ptr<GCGMsgPack>> *))v2)(
            v1,
            &this->wait_send_msg_pack_vec_);
        }
        std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
      }
      M_current = std::vector<std::shared_ptr<GCGMsgPack>>::end(&this->wait_send_msg_pack_vec_)._M_current;
      v4 = std::vector<std::shared_ptr<GCGMsgPack>>::begin(&this->wait_send_msg_pack_vec_)._M_current;
      __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Base_ptr)std::vector<std::shared_ptr<GCGMsgPack>>::end(&this->history_msg_pack_vec_)._M_current;
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>::__normal_iterator<std::shared_ptr<GCGMsgPack>*>(
        (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> > *)&__for_begin);
      std::vector<std::shared_ptr<GCGMsgPack>>::insert<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>>>,void>(
        &this->history_msg_pack_vec_,
        (std::vector<std::shared_ptr<GCGMsgPack>>::const_iterator)__for_end._M_node,
        (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> >)v4,
        (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> >)M_current);
      std::vector<std::shared_ptr<GCGMsgPack>>::clear(&this->wait_send_msg_pack_vec_);
    }
  }
};

// Line 1115: range 000000000D77A3F6-000000000D77A597
void __cdecl GCGGameMode::onActionBegin(GCGGameMode *const this, const GCGActionBase *action)
{
  __int64 (__fastcall **v2)(const GCGActionBase *); // rax
  GCGActionType v3; // ebx
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  GCGControllerValue ControllerId; // ebx
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  GCGControllerValue *p_controller_id; // rax
  std::shared_ptr<GCGMsgPack> __r; // [rsp+10h] [rbp-20h] BYREF

  if ( !GCGGameMode::isDuringSnapshot(this) )
  {
    if ( std::operator!=<GCGMsgPack>(&this->msg_pack_ptr_, 0LL) )
      GCGGameMode::releaseMsgPack(this);
    if ( std::operator==<GCGMsgPack>(&this->msg_pack_ptr_, 0LL) )
    {
      common::tools::perf::make_shared<GCGMsgPack>();
      std::shared_ptr<GCGMsgPack>::operator=(&this->msg_pack_ptr_, &__r);
      std::shared_ptr<GCGMsgPack>::~shared_ptr(&__r);
    }
    if ( *(_BYTE *)(((unsigned __int64)action >> 3) + 0x7FFF8000) )
      __asan_report_load8(action);
    v2 = (__int64 (__fastcall **)(const GCGActionBase *))(action->_vptr_GCGActionBase + 3);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(action->_vptr_GCGActionBase + 3);
    v3 = (unsigned int)(*v2)(action);
    v4 = std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->msg_pack_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&v4->action_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v4->action_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v4 = (std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v4->action_type);
    }
    v4->action_type = v3;
    ControllerId = GCGActionBase::getControllerId(action);
    v6 = std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->msg_pack_ptr_);
    p_controller_id = &v6->controller_id;
    if ( *(_BYTE *)(((unsigned __int64)p_controller_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_controller_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_store4(p_controller_id);
    }
    v6->controller_id = ControllerId;
  }
};

// Line 1133: range 000000000D77A598-000000000D77A5C4
void __cdecl GCGGameMode::onActionEnd(GCGGameMode *const this)
{
  if ( !GCGGameMode::isDuringSnapshot(this) )
    GCGGameMode::releaseMsgPack(this);
};

// Line 1142: range 000000000D77A5C6-000000000D77A65D
void __cdecl GCGGameMode::releaseMsgPack(GCGGameMode *const this)
{
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  GCGMsgPack *v2; // rax
  std::vector<std::shared_ptr<GCGMsgPack>>::value_type *v3; // rax

  if ( !std::operator==<GCGMsgPack>(&this->msg_pack_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->msg_pack_ptr_);
    if ( std::vector<std::shared_ptr<GCGMessage>>::empty(&v1->msg_vec) )
    {
      v2 = std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->msg_pack_ptr_);
      GCGMsgPack::clear(v2);
    }
    else
    {
      v3 = std::move<std::shared_ptr<GCGMsgPack> &>(&this->msg_pack_ptr_);
      std::vector<std::shared_ptr<GCGMsgPack>>::push_back(&this->wait_send_msg_pack_vec_, v3);
    }
  }
};

// Line 1156: range 000000000D77A65E-000000000D77AC35
__int64 __fastcall GCGGameMode::addPlayerController(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        const GCGControllerParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::shared_ptr<GCGControllerBase> *v21; // rax
  proto::GCGControllerValue *v22; // r8
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __x; // [rsp+20h] [rbp-C0h] BYREF
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 uid:1157 48 4 18 controller_id:1155 64 16 19 controller_ptr:1168";
  *(_QWORD *)(v3 + 16) = GCGGameMode::addPlayerController;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->uid);
  }
  *(_DWORD *)(v3 + 32) = param->uid;
  __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  __x._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::find(
                  &this->controller_map_,
                  (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "addPlayerController",
      1160);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v27,
           (const char (*)[30])"controller_id already in. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = -1;
  }
  else
  {
    __y._M_node = std::map<unsigned int,proto::GCGControllerValue>::end(&this->uid_map_)._M_node;
    __x._M_node = std::map<unsigned int,proto::GCGControllerValue>::find(
                    &this->uid_map_,
                    (const std::map<unsigned int,proto::GCGControllerValue>::key_type *)(v3 + 32))._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::_Self *)&__x,
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::_Self *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "addPlayerController",
        1165);
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v27, (const char (*)[20])off_1BA13EE0);
      v9 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
             v8,
             (const proto::GCGControllerValue *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])"uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = -1;
    }
    else
    {
      common::tools::perf::make_shared<GCGPlayerController,GCGGameMode &,proto::GCGControllerValue &>(
        (GCGGameMode *)(v3 + 64),
        (proto::GCGControllerValue *)this,
        (GCGGameMode *)(v3 + 48),
        (proto::GCGControllerValue *)this);
      if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "addPlayerController",
          1171);
        v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v12,
                (const char (*)[16])" controller_id:");
        v14 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v13,
                (const proto::GCGControllerValue *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" create failed");
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v16 = (unsigned __int64)(v15->_vptr_GCGControllerBase + 1);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15->_vptr_GCGControllerBase + 1);
        if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const GCGControllerParam *))v16)(
               v15,
               param) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/game_mode/gcg_game_mode.cpp",
            "addPlayerController",
            1176);
          v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 32));
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v18,
                  (const char (*)[16])" controller_id:");
          v20 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v19,
                  (const proto::GCGControllerValue *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" init failed");
          common::milog::MiLogStream::~MiLogStream(&v27);
          v7 = -1;
        }
        else
        {
          v21 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::operator[](
                  &this->controller_map_,
                  (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48));
          std::shared_ptr<GCGControllerBase>::operator=<GCGPlayerController>(
            v21,
            (const std::shared_ptr<GCGPlayerController> *)(v3 + 64));
          std::map<unsigned int,proto::GCGControllerValue>::emplace<unsigned int &,proto::GCGControllerValue&>(
            &this->uid_map_,
            (unsigned int *)(v3 + 32),
            (proto::GCGControllerValue *)(v3 + 48),
            (unsigned int *)&this->uid_map_,
            v22);
          v7 = 0;
        }
      }
      std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v3 + 64));
    }
  }
  result = v7;
  if ( v28 == (char *)v3 )
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
  return result;
};

// Line 1186: range 000000000D77AC36-000000000D77B04E
__int64 __fastcall GCGGameMode::addAIController(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        const GCGControllerParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::shared_ptr<GCGControllerBase> *v14; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __x; // [rsp+20h] [rbp-C0h] BYREF
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 controller_id:1185 64 16 19 controller_ptr:1192";
  *(_QWORD *)(v3 + 16) = GCGGameMode::addAIController;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = controller_id;
  __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  __x._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::find(
                  &this->controller_map_,
                  (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "addAIController",
      1189);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v19,
           (const char (*)[30])"controller_id already in. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    common::tools::perf::make_shared<GCGAIController,GCGGameMode &,proto::GCGControllerValue &>(
      (GCGGameMode *)(v3 + 64),
      (proto::GCGControllerValue *)this,
      (GCGGameMode *)(v3 + 48),
      (proto::GCGControllerValue *)this);
    if ( std::operator==<GCGAIController>((const std::shared_ptr<GCGAIController> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "addAIController",
        1195);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v19,
             (const char (*)[18])"ai controller_id:");
      v9 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
             v8,
             (const proto::GCGControllerValue *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" create failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v11 = (unsigned __int64)(v10->_vptr_GCGControllerBase + 1);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10->_vptr_GCGControllerBase + 1);
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGAIController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const GCGControllerParam *))v11)(
             v10,
             param) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "addAIController",
          1200);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v19,
                (const char (*)[18])"ai controller_id:");
        v13 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v12,
                (const proto::GCGControllerValue *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" init failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v7 = -1;
      }
      else
      {
        v14 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::operator[](
                &this->controller_map_,
                (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48));
        std::shared_ptr<GCGControllerBase>::operator=<GCGAIController>(
          v14,
          (const std::shared_ptr<GCGAIController> *)(v3 + 64));
        v7 = 0;
      }
    }
    std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)(v3 + 64));
  }
  result = v7;
  if ( v20 == (char *)v3 )
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
  return result;
};

// Line 1208: range 000000000D77B050-000000000D77B468
__int64 __fastcall GCGGameMode::addMonsterController(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        const GCGControllerParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::shared_ptr<GCGControllerBase> *v14; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __x; // [rsp+20h] [rbp-C0h] BYREF
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 controller_id:1207 64 16 19 controller_ptr:1214";
  *(_QWORD *)(v3 + 16) = GCGGameMode::addMonsterController;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = controller_id;
  __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  __x._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::find(
                  &this->controller_map_,
                  (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "addMonsterController",
      1211);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v19,
           (const char (*)[30])"controller_id already in. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    common::tools::perf::make_shared<GCGMonsterController,GCGGameMode &,proto::GCGControllerValue &>(
      (GCGGameMode *)(v3 + 64),
      (proto::GCGControllerValue *)this,
      (GCGGameMode *)(v3 + 48),
      (proto::GCGControllerValue *)this);
    if ( std::operator==<GCGMonsterController>((const std::shared_ptr<GCGMonsterController> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "addMonsterController",
        1217);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v19,
             (const char (*)[18])"ai controller_id:");
      v9 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
             v8,
             (const proto::GCGControllerValue *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" create failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v11 = (unsigned __int64)(v10->_vptr_GCGControllerBase + 1);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10->_vptr_GCGControllerBase + 1);
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const GCGControllerParam *))v11)(
             v10,
             param) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "addMonsterController",
          1222);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v19,
                (const char (*)[18])"ai controller_id:");
        v13 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v12,
                (const proto::GCGControllerValue *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" init failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v7 = -1;
      }
      else
      {
        v14 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::operator[](
                &this->controller_map_,
                (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48));
        std::shared_ptr<GCGControllerBase>::operator=<GCGMonsterController>(
          v14,
          (const std::shared_ptr<GCGMonsterController> *)(v3 + 64));
        v7 = 0;
      }
    }
    std::shared_ptr<GCGMonsterController>::~shared_ptr((std::shared_ptr<GCGMonsterController> *const)(v3 + 64));
  }
  result = v7;
  if ( v20 == (char *)v3 )
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
  return result;
};

// Line 1230: range 000000000D77B46A-000000000D77B5FC
__int64 __fastcall GCGGameMode::getControllerId(const GCGGameMode *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::pointer v6; // rdx
  proto::GCGControllerValue *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1229 64 8 9 iter:1231";
  *(_QWORD *)(v2 + 16) = GCGGameMode::getControllerId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,proto::GCGControllerValue>::const_iterator *)(v2 + 64) = std::map<unsigned int,proto::GCGControllerValue>::find(
                                                                                     &this->uid_map_,
                                                                                     (const std::map<unsigned int,proto::GCGControllerValue>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,proto::GCGControllerValue>::end(&this->uid_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = (unsigned int)v6->second;
  }
  if ( v9 == (char *)v2 )
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
  return result;
};

// Line 1242: range 000000000D77B5FE-000000000D77B812
GCGGameMode *__fastcall GCGGameMode::getController(GCGGameMode *const this, __int64 controller_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::pointer v7; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 controller_id:1241 64 8 9 iter:1243";
  *(_QWORD *)(v3 + 16) = GCGGameMode::getController;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator *)(v3 + 64) = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::find(
                                                                                                     (std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *const)(controller_id + 13000),
                                                                                                     (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v3 + 48));
  __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end((std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *const)(controller_id + 13000))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "getController",
      1246);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v11,
           (const char (*)[36])"getController fail. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::shared_ptr<GCGControllerBase>::shared_ptr((std::shared_ptr<GCGControllerBase> *const)this, 0LL);
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)(v3 + 64));
    std::shared_ptr<GCGControllerBase>::shared_ptr((std::shared_ptr<GCGControllerBase> *const)this, &v7->second);
  }
  if ( v12 == (char *)v3 )
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

// Line 1253: range 000000000D77B814-000000000D77B917
bool __fastcall GCGGameMode::isController(const GCGGameMode *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGControllerValue> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1252";
  *(_QWORD *)(v2 + 16) = GCGGameMode::isController;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  __y._M_node = std::map<unsigned int,proto::GCGControllerValue>::end(&this->uid_map_)._M_node;
  __x._M_node = std::map<unsigned int,proto::GCGControllerValue>::find(
                  &this->uid_map_,
                  (const std::map<unsigned int,proto::GCGControllerValue>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1258: range 000000000D77B918-000000000D77BD4F
int32_t __cdecl GCGGameMode::onGMSwitchController(GCGGameMode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::tuple_element<1,std::pair<unsigned int const,proto::GCGControllerValue> >::type *v4; // rax
  const std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *v5; // rax
  GCGControllerBase *v6; // rax
  std::shared_ptr<GCGControllerBase> *v7; // rax
  int32_t result; // eax
  std::map<unsigned int,proto::GCGControllerValue>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,proto::GCGControllerValue>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,proto::GCGControllerValue> *__for_range; // [rsp+28h] [rbp-108h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range_0; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id_0; // [rsp+38h] [rbp-F8h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+40h] [rbp-F0h]
  std::pair<unsigned int const,proto::GCGControllerValue> *__in; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,proto::GCGControllerValue> >::type *uid; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,proto::GCGControllerValue> >::type *controller_id; // [rsp+58h] [rbp-D8h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > v18; // [rsp+60h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+80h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 4 22 new_controller_id:1275 48 48 13 temp_map:1272";
  *(_QWORD *)(v1 + 16) = GCGGameMode::onGMSwitchController;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862723] = -202116109;
  __for_range = &this->uid_map_;
  __for_begin._M_node = std::map<unsigned int,proto::GCGControllerValue>::begin(&this->uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GCGControllerValue>::end(&this->uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::GCGControllerValue>(__in);
    v4 = std::get<1ul,unsigned int const,proto::GCGControllerValue>(__in);
    controller_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *controller_id == GCG_CONTROLLER_A )
    {
      *controller_id = GCG_CONTROLLER_B;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_store4(controller_id);
      }
      *controller_id = GCG_CONTROLLER_A;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::map(
    (std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *const)(v1 + 48),
    &this->controller_map_);
  __for_range_0 = (std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *)(v1 + 48);
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin((std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *const)(v1 + 48))._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
    std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>::pair(&v18, v5);
    controller_id_0 = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(&v18);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(&v18);
    if ( *(_BYTE *)(((unsigned __int64)controller_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)controller_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id_0 >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(controller_id_0);
    }
    *(std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *)(v1 + 32) = *controller_id_0;
    if ( *(_DWORD *)(v1 + 32) == 1 )
      *(_DWORD *)(v1 + 32) = 2;
    else
      *(_DWORD *)(v1 + 32) = 1;
    if ( std::operator!=<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      GCGControllerBase::setControllerId(v6, *(GCGControllerValue *)(v1 + 32));
      v7 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::operator[](
             &this->controller_map_,
             (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::key_type *)(v1 + 32));
      std::shared_ptr<GCGControllerBase>::operator=(v7, controller_ptr);
    }
    std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>::~pair(&v18);
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
  }
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::~map((std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *const)(v1 + 48));
  result = 0;
  if ( v19 == (char *)v1 )
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

// Line 1294: range 000000000D77BD50-000000000D77BF74
__int64 __fastcall GCGGameMode::onGMSetCardToken(
        GCGGameMode *const this,
        uint32_t card_guid,
        GCGTokenType token,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  GCGCard *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 card_guid:1293 64 16 13 card_ptr:1295";
  *(_QWORD *)(v4 + 16) = GCGGameMode::onGMSetCardToken;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = card_guid;
  GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 64), &this->card_mgr_, *(_DWORD *)(v4 + 48));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "onGMSetCardToken",
      1298);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v13,
           (const char (*)[28])"find card fail. card_guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GCGCard::setToken(v9, token, value, GCG_REASON_GM);
    GCGGameMode::trySendMsgPack(this);
    v8 = 0;
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  result = v8;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1307: range 000000000D77BF76-000000000D77C129
int32_t __cdecl GCGGameMode::onGMCreateCard(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t card_id,
        uint32_t param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-7Ch]
  GCGField *field; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 26 player_controller_ptr:1311";
  *(_QWORD *)(v4 + 16) = GCGGameMode::onGMCreateCard;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  ret = GCGUtils::placeNewCard(this, card_id, controller_id, param, 3u, 0);
  Duel = GCGGameMode::getDuel(this);
  field = GCGDuel::getField(Duel, controller_id);
  GCGField::clearCostRevise(field);
  GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v4 + 32), (GCGControllerValue)this);
  if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v4 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    GCGPlayerController::notifyCostRevise(v8);
  }
  GCGGameMode::trySendMsgPack(this);
  std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v4 + 32));
  result = ret;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1321: range 000000000D77C12A-000000000D77C3FD
__int64 __fastcall GCGGameMode::onGMCreateHand(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t card_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  bool v9; // r14
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __int64 result; // rax
  GCGField *field; // [rsp+10h] [rbp-C0h]
  GCGCardZone *hand_zone; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 card_id:1320 64 16 26 player_controller_ptr:1334";
  *(_QWORD *)(v3 + 16) = GCGGameMode::onGMCreateHand;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = card_id;
  Duel = GCGGameMode::getDuel(this);
  field = GCGDuel::getField(Duel, controller_id);
  hand_zone = GCGField::getHandZone(field);
  if ( GCGCardZone::checkCanAdd(hand_zone, *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "onGMCreateHand",
      1326);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v15,
           (const char (*)[35])"onGMCreateHand cannot add card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
  }
  else
  {
    GCGCardZone::addNewCard((GCGCardZone *const)(v3 + 64), (uint32_t)hand_zone, *(GCGReason *)(v3 + 48), 3u, 0);
    v9 = std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 64), 0LL);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
    if ( v9 )
    {
      v8 = -1;
    }
    else
    {
      GCGField::clearCostRevise(field);
      GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v3 + 64), (GCGControllerValue)this);
      if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v3 + 64), 0LL) )
      {
        v10 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        GCGPlayerController::notifyCostRevise(v10);
      }
      GCGGameMode::trySendMsgPack(this);
      v8 = 0;
      std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v3 + 64));
    }
  }
  result = v8;
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
  return result;
};

// Line 1344: range 000000000D77C3FE-000000000D77C59A
int32_t __cdecl GCGGameMode::onGMSetEnergyMax(GCGGameMode *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GCGDuel *Duel; // rax
  GCGField *Field; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCard *v9; // rax
  int32_t result; // eax
  uint32_t max_energy; // [rsp+1Ch] [rbp-74h]
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 card_ptr:1345";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onGMSetEnergyMax;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Duel = GCGGameMode::getDuel(this);
  Field = GCGDuel::getField(Duel, controller_id);
  GCGField::getCharacterZone(Field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v2 + 32));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    max_energy = GCGCard::getToken(v8, GCG_TOKEN_MAX_ENERGY);
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGCard::setToken(v9, GCG_TOKEN_ENERGY, max_energy, GCG_REASON_GM);
    GCGGameMode::trySendMsgPack(this);
    v7 = 0;
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  result = v7;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1357: range 000000000D77C59C-000000000D77C898
int32_t __cdecl GCGGameMode::onGMRemoveCard(GCGGameMode *const this, uint32_t card_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGCardMgr *CardMgr; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCardZone *v9; // r14
  int32_t result; // eax
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  std::string val; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 card_ptr:1358 64 16 13 zone_ptr:1363";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onGMRemoveCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  CardMgr = GCGGameMode::getCardMgr(this);
  GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 32), CardMgr, card_guid);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v6 = -1;
  }
  else
  {
    std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGCard::getZone((GCGCard *const)(v2 + 64));
    if ( std::operator==<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onGMRemoveCard",
        1366);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v12,
             (const char (*)[22])"zone_ptr is nullptr. ");
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GCGCard::getDesc[abi:cxx11](&val, v8);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v2 + 32));
      GCGCardZone::delCard(v9, &p_card_ptr, GCG_REASON_GM, 1);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
      GCGGameMode::trySendMsgPack(this);
      v6 = 0;
    }
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v2 + 64));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  result = v6;
  if ( v14 == (char *)v2 )
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
  return result;
};

// Line 1375: range 000000000D77C89A-000000000D77C9E2
int32_t __cdecl GCGGameMode::onGMSetLookOpponent(GCGGameMode *const this, bool is_gm_set_look_opponent)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  bool old_value; // [rsp+1Fh] [rbp-31h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_gm_set_look_opponent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gm_set_look_opponent_);
  old_value = this->is_gm_set_look_opponent_;
  this->is_gm_set_look_opponent_ = is_gm_set_look_opponent;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/game_mode/gcg_game_mode.cpp",
    "onGMSetLookOpponent",
    1379);
  v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v7,
         (const char (*)[25])"onGMSetLookOpponent old:");
  v3 = common::milog::MiLogStream::operator<<(v2, old_value);
  v4 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v3, (const char (*)[7])", new:");
  if ( *(char *)(((unsigned __int64)&this->is_gm_set_look_opponent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gm_set_look_opponent_);
  common::milog::MiLogStream::operator<<(v4, this->is_gm_set_look_opponent_);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return 0;
};

// Line 1389: range 000000000D77C9E4-000000000D77CCE1
int32_t __cdecl GCGGameMode::onGMOnStage(GCGGameMode *const this, uint32_t card_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGCardMgr *CardMgr; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCharacterZone *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-F0h] BYREF
  std::string val; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 card_ptr:1390 64 16 13 zone_ptr:1395 96 16 23 character_zone_ptr:1396";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onGMOnStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  CardMgr = GCGGameMode::getCardMgr(this);
  GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 32), CardMgr, card_guid);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v6 = -1;
  }
  else
  {
    std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGCard::getZone((GCGCard *const)(v2 + 64));
    std::dynamic_pointer_cast<GCGCharacterZone,GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v2 + 96));
    if ( std::operator==<GCGCharacterZone>((const std::shared_ptr<GCGCharacterZone> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onGMOnStage",
        1399);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v11,
             (const char (*)[32])"character_zone_ptr is nullptr. ");
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GCGCard::getDesc[abi:cxx11](&val, v8);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGCharacterZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCharacterZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      GCGCharacterZone::setOnStage(v9, card_guid, GCG_REASON_GM, 1);
      GCGGameMode::trySendMsgPack(this);
      v6 = 0;
    }
    std::shared_ptr<GCGCharacterZone>::~shared_ptr((std::shared_ptr<GCGCharacterZone> *const)(v2 + 96));
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v2 + 64));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  result = v6;
  if ( v13 == (char *)v2 )
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

// Line 1408: range 000000000D77CCE2-000000000D77CD3D
int32_t __cdecl GCGGameMode::onGMSetNoNeedCost(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t value)
{
  GCGDuel *Duel; // rax
  GCGDiceZone *DiceZone; // rax
  GCGField *field; // [rsp+18h] [rbp-8h]

  Duel = GCGGameMode::getDuel(this);
  field = GCGDuel::getField(Duel, controller_id);
  DiceZone = GCGField::getDiceZone(field);
  GCGDiceZone::setNoNeedCost(DiceZone, value != 0);
  return 0;
};

// Line 1415: range 000000000D77CD3E-000000000D77D02E
int32_t __cdecl GCGGameMode::onGMKillCharacter(GCGGameMode *const this, uint32_t card_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGCardMgr *CardMgr; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCard *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-F0h] BYREF
  std::string val; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 card_ptr:1416 64 16 13 zone_ptr:1421 96 16 23 character_zone_ptr:1422";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onGMKillCharacter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  CardMgr = GCGGameMode::getCardMgr(this);
  GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 32), CardMgr, card_guid);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v6 = -1;
  }
  else
  {
    std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGCard::getZone((GCGCard *const)(v2 + 64));
    std::dynamic_pointer_cast<GCGCharacterZone,GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v2 + 96));
    if ( std::operator==<GCGCharacterZone>((const std::shared_ptr<GCGCharacterZone> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onGMKillCharacter",
        1425);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v11,
             (const char (*)[32])"character_zone_ptr is nullptr. ");
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GCGCard::getDesc[abi:cxx11](&val, v8);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GCGCard::setCharacterDie(v9, GCG_REASON_GM);
      GCGGameMode::trySendMsgPack(this);
      v6 = 0;
    }
    std::shared_ptr<GCGCharacterZone>::~shared_ptr((std::shared_ptr<GCGCharacterZone> *const)(v2 + 96));
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v2 + 64));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  result = v6;
  if ( v13 == (char *)v2 )
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

// Line 1435: range 000000000D77D030-000000000D77D14A
int32_t __cdecl GCGGameMode::onGMSetPreviewSwitch(GCGGameMode *const this, bool is_open)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_preview_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_preview_open_);
  this->is_preview_open_ = is_open;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/game_mode/gcg_game_mode.cpp",
    "onGMSetPreviewSwitch",
    1437);
  v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v4, (const char (*)[18])"is_preview_open_:");
  if ( *(char *)(((unsigned __int64)&this->is_preview_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_preview_open_);
  common::milog::MiLogStream::operator<<(v2, this->is_preview_open_);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 1442: range 000000000D77D14C-000000000D77D191
int32_t __cdecl GCGGameMode::onGMClearWaitingCharacter(GCGGameMode *const this, GCGControllerValue controller_id)
{
  GCGCharacterWaitingZone *WaitingZone; // rax
  GCGField *field; // [rsp+18h] [rbp-8h]

  field = GCGDuel::getField(&this->duel_, controller_id);
  WaitingZone = GCGField::getWaitingZone(field);
  GCGCharacterWaitingZone::clear(WaitingZone);
  return 0;
};

// Line 1449: range 000000000D77D192-000000000D77D308
int32_t __cdecl GCGGameMode::onGMAddWaitingCharacter(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        uint32_t card_id,
        uint32_t cond_count)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  GCGCharacterWaitingZone *WaitingZone; // rax
  int32_t result; // eax
  GCGField *field; // [rsp+28h] [rbp-78h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 info:1451";
  *(_QWORD *)(v4 + 16) = GCGGameMode::onGMAddWaitingCharacter;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  field = GCGDuel::getField(&this->duel_, controller_id);
  *(_QWORD *)(v4 + 32) = &`vtable for'data::GCGWaitingCharacterInfo + 2;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 40) = card_id;
  *(_DWORD *)(v4 + 44) = cond_count;
  WaitingZone = GCGField::getWaitingZone(field);
  GCGCharacterWaitingZone::add(WaitingZone, (const GCGWaitingCharacterInfo *)(v4 + 32));
  data::GCGWaitingCharacterInfo::~GCGWaitingCharacterInfo((data::GCGWaitingCharacterInfo *const)(v4 + 32));
  result = 0;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1459: range 000000000D77D30A-000000000D77D369
int32_t __cdecl GCGGameMode::onGMTimeStop(GCGGameMode *const this, bool is_stop)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_stop_timer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 55) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_stop_timer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_gm_stop_timer_);
  }
  this->is_gm_stop_timer_ = is_stop;
  return 0;
};

// Line 1467: range 000000000D77D36A-000000000D77D6B3
int32_t __cdecl GCGGameMode::onGMRevive(GCGGameMode *const this, uint32_t card_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGCardMgr *CardMgr; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCard *v9; // r14
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-104h]
  std::shared_ptr<GCGCard> p_source_card_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 card_ptr:1468 64 16 13 zone_ptr:1473 96 16 23 character_zone_ptr:1474";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onGMRevive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  CardMgr = GCGGameMode::getCardMgr(this);
  GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 32), CardMgr, card_guid);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v6 = -1;
  }
  else
  {
    std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGCard::getZone((GCGCard *const)(v2 + 64));
    std::dynamic_pointer_cast<GCGCharacterZone,GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v2 + 96));
    if ( std::operator==<GCGCharacterZone>((const std::shared_ptr<GCGCharacterZone> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onGMRevive",
        1477);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v13,
             (const char (*)[32])"character_zone_ptr is nullptr. ");
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GCGCard::getDesc[abi:cxx11](&val, v8);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::shared_ptr<GCGCard>::shared_ptr(&p_source_card_ptr, 0LL);
      ret = GCGCard::reviveCharacter(v9, 1u, &p_source_card_ptr, GCG_REASON_GM);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_source_card_ptr);
      if ( !ret )
        GCGGameMode::trySendMsgPack(this);
      v6 = ret;
    }
    std::shared_ptr<GCGCharacterZone>::~shared_ptr((std::shared_ptr<GCGCharacterZone> *const)(v2 + 96));
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v2 + 64));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 1489: range 000000000D77D6B4-000000000D77D706
bool __cdecl GCGGameMode::isGMStopTimer(GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_stop_timer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 55) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_stop_timer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_gm_stop_timer_);
  }
  return this->is_gm_stop_timer_;
};

// Line 1497: range 000000000D77D708-000000000D77D7CC
int32_t __cdecl GCGGameMode::onGMSetIgnoreThink(GCGGameMode *const this)
{
  GCGControllerBase *v1; // rax
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&this->controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( !std::operator==<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      GCGControllerBase::setIsIgnoreThink(v1);
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1510: range 000000000D77D7CE-000000000D77D9BB
int32_t __cdecl GCGGameMode::onGMPrintPVEIntention(GCGGameMode *const this, std::string *intention_str)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  int32_t result; // eax
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+20h] [rbp-80h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *_; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 27 monster_controller_ptr:1517";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onGMPrintPVEIntention;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&this->controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( !std::operator==<GCGControllerBase>(controller_ptr, 0LL) )
    {
      std::dynamic_pointer_cast<GCGMonsterController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v2 + 32));
      if ( std::operator!=<GCGMonsterController>((const std::shared_ptr<GCGMonsterController> *)(v2 + 32), 0LL) )
      {
        v5 = std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMonsterController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        GCGMonsterController::printCurOperation(v5, intention_str);
      }
      std::shared_ptr<GCGMonsterController>::~shared_ptr((std::shared_ptr<GCGMonsterController> *const)(v2 + 32));
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1527: range 000000000D77D9BC-000000000D77DA09
bool __cdecl GCGGameMode::isNeedLookOpponent(const GCGGameMode *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_gm_set_look_opponent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gm_set_look_opponent_);
  return this->is_gm_set_look_opponent_;
};

// Line 1536: range 000000000D77DA0A-000000000D77DAE4
std::vector<unsigned int> *__cdecl GCGGameMode::getUidVec(std::vector<unsigned int> *retstr, GCGGameMode *const this)
{
  std::map<unsigned int,proto::GCGControllerValue>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,proto::GCGControllerValue>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,proto::GCGControllerValue> *__for_range; // [rsp+20h] [rbp-30h]
  std::pair<unsigned int const,proto::GCGControllerValue> *__in; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,proto::GCGControllerValue> >::type *uid; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,proto::GCGControllerValue> >::type *_; // [rsp+38h] [rbp-18h]

  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->uid_map_;
  __for_begin._M_node = std::map<unsigned int,proto::GCGControllerValue>::begin(&this->uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GCGControllerValue>::end(&this->uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::GCGControllerValue>(__in);
    _ = std::get<1ul,unsigned int const,proto::GCGControllerValue>(__in);
    std::vector<unsigned int>::push_back(retstr, uid);
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1546: range 000000000D77DAE6-000000000D77DC7C
void __cdecl GCGGameMode::onPostGameStart(GCGGameMode *const this)
{
  std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx
  common::milog::MiLogStream *v3; // rax
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  GCGGameMode::recordHistoryCard(this);
  __for_range = &this->controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&this->controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( std::operator!=<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v1);
      v2 = (unsigned __int64)(v1->_vptr_GCGControllerBase + 3);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v1->_vptr_GCGControllerBase + 3);
      (*(void (__fastcall **)(std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v2)(v1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onPostGameStart",
        1556);
      v3 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v10, (const char (*)[37])off_1BA149A0);
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(v3, controller_id);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
};

// Line 1562: range 000000000D77DC7E-000000000D77E42F
void __fastcall GCGGameMode::onOpTimeout(GCGGameMode *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  GCGPhaseBase *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GCGControllerValue v22; // r14d
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 controller_id:1561 64 16 14 phase_ptr:1568 96 16 18 operation_ptr:1586";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onOpTimeout;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = controller_id;
  if ( !GCGDuel::isControllerIdValid(&this->duel_, *(GCGControllerValue *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "onOpTimeout",
      1565);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v32,
           (const char (*)[36])"controller id invalid. controller: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      (const proto::GCGControllerValue *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    GCGGameMode::getPhaseMgr(this);
    GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 64));
    if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "onOpTimeout",
        1571);
      v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v32,
             (const char (*)[64])"do default operation fail. phase_ptr is nullptr controller_id_:");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v6,
        (const proto::GCGControllerValue *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( !GCGPhaseBase::isAllowController(v7, *(GCGControllerValue *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "onOpTimeout",
          1576);
        v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v32,
               (const char (*)[53])"do default operation fail. not allow controller_id_:");
        v9 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
               v8,
               (const proto::GCGControllerValue *)(v2 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" phase:");
        v11 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11);
        v12 = (unsigned __int64)(v11->_vptr_GCGPhaseBase + 3);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11->_vptr_GCGPhaseBase + 3);
        val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        v13 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13);
        v14 = (unsigned __int64)(v13->_vptr_GCGPhaseBase + 3);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13->_vptr_GCGPhaseBase + 3);
        if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14)(v13) == 1 )
        {
          GCGGameMode::onInitTimeout(this);
        }
        else
        {
          v15 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v15);
          v16 = (unsigned __int64)(v15->_vptr_GCGPhaseBase + 4);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v15->_vptr_GCGPhaseBase + 4);
          (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16)(
            v2 + 96,
            v15);
          if ( std::operator==<GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "onOpTimeout",
              1589);
            v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v32,
                    (const char (*)[42])"defaultOperation is nullptr. phase type: ");
            v18 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v18);
            v19 = (unsigned __int64)(v18->_vptr_GCGPhaseBase + 3);
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v18->_vptr_GCGPhaseBase + 3);
            val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v19)(v18);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
            v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v20,
                    (const char (*)[17])" controller_id_:");
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v21,
              (const proto::GCGControllerValue *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v32);
          }
          else
          {
            v22 = *(_DWORD *)(v2 + 48);
            v23 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v23->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v23->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v23 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->controller_id);
            }
            v23->controller_id = v22;
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/game_mode/gcg_game_mode.cpp",
              "onOpTimeout",
              1593);
            v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v32,
                    (const char (*)[36])"do default operation controller_id:");
            v25 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v26 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                    v24,
                    &v25->controller_id);
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])" phase_type:");
            v28 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v28);
            v29 = (unsigned __int64)(v28->_vptr_GCGPhaseBase + 3);
            if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v28->_vptr_GCGPhaseBase + 3);
            val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v29)(v28);
            common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)&val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            std::shared_ptr<GCGOperationBase>::shared_ptr(
              &p_operation_ptr,
              (const std::shared_ptr<GCGOperationBase> *)(v2 + 96));
            GCGGameMode::process(this, &p_operation_ptr);
            std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
          }
          std::shared_ptr<GCGOperationBase>::~shared_ptr((std::shared_ptr<GCGOperationBase> *const)(v2 + 96));
        }
      }
    }
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 64));
  }
  if ( v33 == (char *)v2 )
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
};

// Line 1599: range 000000000D77E430-000000000D77E713
void __cdecl GCGGameMode::onTimer(GCGGameMode *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  uint32_t GameUid; // eax
  std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  GCGActionMgr *ActionMgr; // rax
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+10h] [rbp-1D0h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+18h] [rbp-1C8h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+20h] [rbp-1C0h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+28h] [rbp-1B8h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+38h] [rbp-1A8h]
  char v15[416]; // [rsp+40h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 257 11 holder:1600";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862729] = -218038272;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  GameUid = GCGGameMode::getGameUid(this);
  common::milog::MilogContextHolder::MilogContextHolder(
    (common::milog::MilogContextHolder *const)(v2 + 48),
    "gcg_game: %u timer",
    GameUid);
  __for_range = &this->controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(&this->controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(&this->controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( std::operator!=<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v7 = (unsigned __int64)(v6->_vptr_GCGControllerBase + 5);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6->_vptr_GCGControllerBase + 5);
      (*(void (__fastcall **)(std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, uint64_t))v7)(
        v6,
        now_ms);
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  ActionMgr = GCGGameMode::getActionMgr(this);
  GCGActionMgr::tryLoop(ActionMgr);
  GCGGameMode::trySendMsgPack(this);
  common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 48));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
};

// Line 1613: range 000000000D77E714-000000000D77E9B1
void __cdecl GCGGameMode::onInitTimeout(GCGGameMode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  char v6; // al
  GCGPhaseBase *v7; // rax
  proto::GCGControllerValue winner; // [rsp+10h] [rbp-90h]
  proto::GCGControllerValue controller_id; // [rsp+14h] [rbp-8Ch]
  std::initializer_list<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+18h] [rbp-88h]
  std::initializer_list<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+28h] [rbp-78h]
  std::initializer_list<proto::GCGControllerValue> v12; // [rsp+30h] [rbp-70h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 cur_phase_ptr:1615";
  *(_QWORD *)(v1 + 16) = GCGGameMode::onInitTimeout;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  winner = GCG_CONTROLLER_NONE;
  GCGGameMode::getPhaseMgr(this);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( !std::operator!=<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
    goto LABEL_11;
  v4 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4);
  v5 = (unsigned __int64)(v4->_vptr_GCGPhaseBase + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4->_vptr_GCGPhaseBase + 3);
  if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4) == 1 )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( v6 )
  {
    v12._M_len = 2LL;
    v12._M_array = (std::initializer_list<proto::GCGControllerValue>::iterator)&C_754_6937565;
    __for_begin = std::initializer_list<proto::GCGControllerValue>::begin(&v12);
    __for_end = std::initializer_list<proto::GCGControllerValue>::end(&v12);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      controller_id = *__for_begin;
      v7 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( !GCGPhaseBase::isAllowController(v7, controller_id) )
      {
        winner = controller_id;
        break;
      }
      ++__for_begin;
    }
  }
  GCGGameMode::setGameOver(this, winner, GCG_END_REASON_INIT_TIMEOUT);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1631: range 000000000D77EC48-000000000D77F0E2
void __cdecl GCGGameMode::onRoundChange(GCGGameMode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGDuel *v4; // rax
  GCGDuel *v5; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGSkillLogic *v7; // r14
  GCGDuel *v8; // rax
  uint32_t Round; // r14d
  std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGCardMgr *CardMgr; // r13
  GCGDuel *v12; // r13
  GCGControllerValue controller_id; // [rsp+10h] [rbp-F0h]
  GCGControllerValue opponent_controller_id; // [rsp+14h] [rbp-ECh]
  GCGDuel *duel; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-E0h] BYREF
  std::function<void(GCGCard&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  std::function<bool(GCGCardZone&)> p_zone_filter_func; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 28 change_round_token_func:1635 64 16 8 msg:1648";
  *(_QWORD *)(v1 + 16) = GCGGameMode::onRoundChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  v4 = GCGGameMode::getDuel(this);
  controller_id = GCGDuel::getCurControllerId(v4);
  v5 = GCGGameMode::getDuel(this);
  opponent_controller_id = (unsigned int)GCGDuel::getOtherControllerId(v5, controller_id);
  SkillLogic = GCGGameMode::getSkillLogic(this);
  ZNSt8functionIFbR11GCGCardZoneEEC2IZN13GCGSkillLogic25foreachCardOnControllerIdEN5proto18GCGControllerValueES_IFvR7GCGCardEES3_Ed_UlS1_E_vvEET_(
    &p_zone_filter_func,
    (GCGSkillLogic::<lambda(GCGCardZone&)>)controller_id);
  std::function<void ()(GCGCard &)>::function<GCGGameMode::onRoundChange(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGGameMode::onRoundChange::<lambda(GCGCard&)>)controller_id);
  GCGSkillLogic::foreachCardOnControllerId(SkillLogic, controller_id, &p_func, &p_zone_filter_func);
  std::function<void ()(GCGCard &)>::~function(&p_func);
  std::function<bool ()(GCGCardZone &)>::~function(&p_zone_filter_func);
  v7 = GCGGameMode::getSkillLogic(this);
  ZNSt8functionIFbR11GCGCardZoneEEC2IZN13GCGSkillLogic25foreachCardOnControllerIdEN5proto18GCGControllerValueES_IFvR7GCGCardEES3_Ed_UlS1_E_vvEET_(
    &p_zone_filter_func,
    (GCGSkillLogic::<lambda(GCGCardZone&)>)controller_id);
  std::function<void ()(GCGCard &)>::function<GCGGameMode::onRoundChange(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGGameMode::onRoundChange::<lambda(GCGCard&)>)controller_id);
  GCGSkillLogic::foreachCardOnControllerId(v7, opponent_controller_id, &p_func, &p_zone_filter_func);
  std::function<void ()(GCGCard &)>::~function(&p_func);
  std::function<bool ()(GCGCardZone &)>::~function(&p_zone_filter_func);
  duel = GCGGameMode::getDuel(this);
  GCGDuel::increRound(duel);
  common::tools::perf::make_shared<GCGMsgDuelDataChange>();
  v8 = GCGGameMode::getDuel(this);
  Round = GCGDuel::getRound(v8);
  v10 = std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v10->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->round >> 3) + 0x7FFF8000) <= 3 )
  {
    v10 = (std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->round);
  }
  v10->round = Round;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgDuelDataChange,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgDuelDataChange> *)(v1 + 64));
  GCGGameMode::sendMessage(this, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgDuelDataChange>::~shared_ptr((std::shared_ptr<GCGMsgDuelDataChange> *const)(v1 + 64));
  GCGGameMode::updatePlayerControllerChallengeByType(this, controller_id, GCG_CHALLENGE_ROUND_NUM);
  GCGGameMode::updatePlayerControllerChallengeByType(this, opponent_controller_id, GCG_CHALLENGE_ROUND_NUM);
  CardMgr = GCGGameMode::getCardMgr(this);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGGameMode::onRoundChange(void)::{lambda(GCGCard &)#2},void,void>(
    (std::function<ForeachPolicy(GCGCard&)> *const)&p_zone_filter_func,
    (GCGGameMode::onRoundChange::<lambda(GCGCard&)>)opponent_controller_id);
  GCGCardMgr::foreachStageCard(CardMgr, (std::function<ForeachPolicy(GCGCard&)> *)&p_zone_filter_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&p_zone_filter_func);
  v12 = GCGGameMode::getDuel(this);
  std::function<ForeachPolicy ()(GCGField &)>::function<GCGGameMode::onRoundChange(void)::{lambda(GCGField &)#3},void,void>(
    (std::function<ForeachPolicy(GCGField&)> *const)&p_zone_filter_func,
    (GCGGameMode::onRoundChange::<lambda(GCGField&)>)&p_zone_filter_func);
  GCGDuel::foreachField(v12, (std::function<ForeachPolicy(GCGField&)> *)&p_zone_filter_func);
  std::function<ForeachPolicy ()(GCGField &)>::~function((std::function<ForeachPolicy(GCGField&)> *const)&p_zone_filter_func);
  GCGOperationTimer::resetBonusTime(&duel->op_timer_1);
  GCGOperationTimer::resetBonusTime(&duel->op_timer_2);
  if ( v19 == (char *)v1 )
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
};

// Line 1635: range 000000000D77E9B2-000000000D77E9F9
void __cdecl GCGGameMode::onRoundChange(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGGameMode::onRoundChange::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  if ( (unsigned int)GCGCard::getToken(card, GCG_TOKEN_ROUND_COUNT) )
    GCGCard::subToken(card, GCG_TOKEN_ROUND_COUNT, 1u, GCG_REASON_DEFAULT);
};

// Line 1656: range 000000000D77E9FA-000000000D77EC22
ForeachPolicy __cdecl GCGGameMode::onRoundChange(void)::{lambda(GCGCard &)#2}::operator()(
        const GCGGameMode::onRoundChange::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rax
  GCGSkill *v6; // rax
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  std::vector<unsigned int> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 skill_ptr:1660";
  *(_QWORD *)(v2 + 16) = GCGGameMode::onRoundChange(void)::{lambda(GCGCard &)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGCard::getSkillIdVec(&v11, card);
  __for_range = &v11;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v11)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v11)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    GCGCard::getSkill((GCGCard *const)(v2 + 32), (uint32_t)card);
    if ( std::operator!=<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v2 + 32)) )
    {
      v6 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      GCGSkill::onRoundChange(v6);
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v11);
  result = FOREACH_CONTINUE;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1669: range 000000000D77EC24-000000000D77EC46
ForeachPolicy __cdecl GCGGameMode::onRoundChange(void)::{lambda(GCGField &)#3}::operator()(
        const GCGGameMode::onRoundChange::<lambda(GCGField&)> *const __closure,
        GCGField *field)
{
  GCGField::resetRoundVars(field);
  return 0;
};

// Line 1682: range 000000000D77F0E4-000000000D77F106
void __cdecl GCGGameMode::resetSkillTriggerVars(GCGGameMode *const this)
{
  GCGDuel *Duel; // rax

  Duel = GCGGameMode::getDuel(this);
  GCGDuel::resetSkillTriggerVars(Duel);
};

// Line 1688: range 000000000D77F108-000000000D77F128
void __cdecl GCGGameMode::startNewPreview(GCGGameMode *const this)
{
  GCGSkillPreviewContext::init(&this->global_skill_preview_context_);
};

// Line 1694: range 000000000D77F12A-000000000D77F149
uint32_t __cdecl GCGGameMode::getSnapshotVersionId(const GCGGameMode *const this)
{
  return GCGSkillPreviewContext::getSnapshotVersionId(&this->global_skill_preview_context_);
};

// Line 1699: range 000000000D77F14A-000000000D77F1FA
bool __cdecl GCGGameMode::isPreviewSwitchOpen(const GCGGameMode *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool isGCGPreviewClosed; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  Config::getConfig();
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  isGCGPreviewClosed = FeatureSwitchMgr::isGCGPreviewClosed(&v1->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( isGCGPreviewClosed )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->is_preview_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_preview_open_);
  return this->is_preview_open_;
};

// Line 1709: range 000000000D77F1FC-000000000D77F250
void __cdecl GCGGameMode::updateRecvTime(GCGGameMode *const this)
{
  uint32_t Now; // esi

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_time_);
  }
  this->last_recv_time_ = Now;
};

// Line 1714: range 000000000D77F252-000000000D77F79D
std::string *__cdecl GCGGameMode::getDesc[abi:cxx11](std::string *retstr, GCGGameMode *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  unsigned int GameUid; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  unsigned int GameId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  unsigned int VerifyCode; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // r14
  int BusinessType; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // r14
  unsigned int Time; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // r14
  unsigned int StopTime; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // r14
  bool isRunning; // al
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // r14
  std::__shared_ptr<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v27; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v28; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // r14
  const GCGConfigMgr *Config; // rax
  unsigned int ClientDataVersion; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v33; // r14
  const GCGConfigMgr *v34; // rax
  unsigned int ServerDataVersion; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v36; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v37; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v38; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v39; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v40; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v41; // rax
  std::map<unsigned int,proto::GCGControllerValue>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::map<unsigned int,proto::GCGControllerValue>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,proto::GCGControllerValue> *__for_range; // [rsp+20h] [rbp-90h]
  std::pair<unsigned int const,proto::GCGControllerValue> *__in; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,proto::GCGControllerValue> >::type *uid; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,proto::GCGControllerValue> >::type *_; // [rsp+38h] [rbp-78h]
  char v49[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ss:1715";
  *(_QWORD *)(v2 + 16) = GCGGameMode::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[game_uid: ");
  GameUid = GCGGameMode::getGameUid(this);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, GameUid);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, " game_id: ");
  GameId = GCGGameMode::getGameId(this);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, GameId);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " verify: ");
  VerifyCode = GCGGameMode::getVerifyCode(this);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, VerifyCode);
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, " business_type: ");
  BusinessType = GCGGameMode::getBusinessType(this);
  v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, BusinessType);
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, " create_time: ");
  Time = GCGGameMode::getCreateTime(this);
  v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, Time);
  v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, " stop_time: ");
  StopTime = GCGGameMode::getStopTime(this);
  v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, StopTime);
  v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, " is_running: ");
  isRunning = GCGGameMode::isRunning(this);
  v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, isRunning);
  v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, " config: ");
  v27 = std::__shared_ptr<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2>::get(&this->gcg_config_mgr_ptr_);
  v28 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, v27);
  v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v28, " client_data_version: ");
  Config = GCGGameMode::getConfig(this);
  ClientDataVersion = GCGConfigMgr::getClientDataVersion(Config);
  v32 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, ClientDataVersion);
  v33 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v32, " server_data_version: ");
  v34 = GCGGameMode::getConfig(this);
  ServerDataVersion = GCGConfigMgr::getServerDataVersion(v34);
  v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v33, ServerDataVersion);
  v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v36, " winner: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->win_controller_id_);
  }
  v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v37, this->win_controller_id_);
  v39 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v38, " end_reason: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_reason_);
  }
  v40 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v39, this->end_reason_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v40, " uid: ");
  __for_range = &this->uid_map_;
  __for_begin._M_node = std::map<unsigned int,proto::GCGControllerValue>::begin(&this->uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GCGControllerValue>::end(&this->uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::GCGControllerValue>(__in);
    _ = std::get<1ul,unsigned int const,proto::GCGControllerValue>(__in);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(uid);
    }
    v41 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            *uid);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v41, " ");
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1738: range 000000000D77F79E-000000000D7801D1
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGGameMode::writeReplayToFile(const GCGGameMode *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GCGOperationReplay *v4; // rcx
  proto::GCGOperationReplay *v5; // rcx
  proto::GCGOperationReplay *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int v10; // r14d
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<proto_log::GCGLogBodyDuelReplay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::string v14; // [rsp+0h] [rbp-280h] OVERLAPPED BYREF
  std::map<proto::GCGControllerValue,GCGControllerStatistics>::const_iterator __for_end; // [rsp+20h] [rbp-260h] BYREF
  const std::map<proto::GCGControllerValue,GCGControllerStatistics> *__for_range; // [rsp+28h] [rbp-258h]
  const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range_0; // [rsp+30h] [rbp-250h]
  const std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *v18; // [rsp+38h] [rbp-248h]
  std::tuple_element<0,const std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id_0; // [rsp+40h] [rbp-240h]
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+48h] [rbp-238h]
  const std::pair<const proto::GCGControllerValue,GCGControllerStatistics> *v21; // [rsp+50h] [rbp-230h]
  std::tuple_element<0,const std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::type *controller_id; // [rsp+58h] [rbp-228h]
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::type *data; // [rsp+60h] [rbp-220h]
  proto::GCGReplayControllerData *contoller_data; // [rsp+68h] [rbp-218h]
  char v25[528]; // [rsp+70h] [rbp-210h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(480LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 11 holder:1772 64 4 12 options:1752 80 16 12 log_ptr:1773 112 16 26 player_controller_ptr"
                        ":1783 144 32 16 json_string:1756 208 32 17 compress_str:1768 272 32 23 base64_json_string:1769 3"
                        "36 32 11 notify:1779 400 40 15 status_ret:1759";
  *(_QWORD *)(v1 + 16) = GCGGameMode::writeReplayToFile;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862731] = -219021312;
  v3[536862732] = 62194;
  v3[536862733] = -218103808;
  v3[536862734] = -202116109;
  if ( !std::operator==<proto::GCGOperationReplay>(
          (const std::shared_ptr<proto::GCGOperationReplay> *)(v14._M_string_length + 13752),
          0LL) )
  {
    v4 = std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v14._M_string_length + 13752));
    if ( *(_BYTE *)(((v14._M_string_length + 10072) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v14._M_string_length + 10072) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v14._M_string_length + 10072);
    }
    proto::GCGOperationReplay::set_seed(v4, *(_DWORD *)(v14._M_string_length + 10072));
    v5 = std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v14._M_string_length + 13752));
    if ( *(_BYTE *)(((v14._M_string_length + 10048) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v14._M_string_length + 10048) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v14._M_string_length + 10048);
    }
    proto::GCGOperationReplay::set_game_id(v5, *(_DWORD *)(v14._M_string_length + 10048));
    __for_range = (const std::map<proto::GCGControllerValue,GCGControllerStatistics> *)GCGGameMode::getStatistics((const GCGGameMode *const)v14._M_string_length);
    *((std::map<proto::GCGControllerValue,GCGControllerStatistics>::const_iterator *)&v14._anon_0._M_allocated_capacity
    + 1) = std::map<proto::GCGControllerValue,GCGControllerStatistics>::begin(__for_range);
    __for_end._M_node = std::map<proto::GCGControllerValue,GCGControllerStatistics>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::_Self *)&v14._anon_0._M_allocated_capacity
            + 1,
              &__for_end) )
    {
      v21 = std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,GCGControllerStatistics>>::operator*(
              (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> > *const)&v14._anon_0._M_allocated_capacity
            + 1);
      controller_id = std::get<0ul,proto::GCGControllerValue const,GCGControllerStatistics>(v21);
      data = (std::tuple_element<1,const std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::type *)std::get<1ul,proto::GCGControllerValue const,GCGControllerStatistics>(v21);
      v6 = std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v14._M_string_length + 13752));
      contoller_data = proto::GCGOperationReplay::add_controller_data_list(v6);
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      proto::GCGReplayControllerData::set_controller_id(contoller_data, *controller_id);
      v7 = proto::GCGReplayControllerData::mutable_card_id_list(contoller_data);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&data->card_id_vec, v7);
      std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,GCGControllerStatistics>>::operator++(
        (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> > *const)&v14._anon_0._M_allocated_capacity
      + 1);
    }
    google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v1 + 64));
    *(_BYTE *)(v1 + 65) = 1;
    *(_BYTE *)(v1 + 67) = 1;
    *(_BYTE *)(v1 + 66) = 1;
    std::string::basic_string(v1 + 144);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 112));
    v8 = std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GCGOperationReplay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v14._M_string_length + 13752));
    google::protobuf::util::MessageToJsonString(
      (google::protobuf::util::Status *)(v1 + 400),
      v8,
      (int)v14._M_dataplus._M_p,
      (void *)v14._M_string_length,
      *(int *)v14._anon_0._M_local_buf,
      v14._anon_0._M_local_buf[8],
      (int)__for_end._M_node,
      (void *)__for_range);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "writeReplayToFile",
      1760);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)(v1 + 336),
           (const char (*)[27])"MessageToJsonString cost: ");
    HIDWORD(v14._anon_0._M_allocated_capacity) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 112));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)&v14._anon_0._M_allocated_capacity + 1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 336));
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v1 + 400)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "writeReplayToFile",
        1763);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v1 + 336),
        (const char (*)[27])"MessageToJsonString fails.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 336));
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v1 + 400));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 112));
    if ( v10 == 1 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "writeReplayToFile",
        1767);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)(v1 + 336),
              (const char (*)[13])off_1BA15340);
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,GCGControllerStatistics> >::_Base_ptr)std::string::c_str(v1 + 144);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&__for_end);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 336));
      common::tools::ZlibUtil::compressWithPad((std::string *)(v1 + 208), (const std::string *)(v1 + 144), -1);
      common::tools::StringUtils::base64Encode((std::string *)(v1 + 272), (const std::string *)(v1 + 208));
      GCGGameMode::getTransNo[abi:cxx11]((std::string *)(v1 + 336), (const GCGGameMode *const)v14._M_string_length);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 3u, v14);
      std::string::~string((void *)(v1 + 336));
      common::tools::perf::make_shared<proto_log::GCGLogBodyDuelReplay>();
      v12 = std::__shared_ptr_access<proto_log::GCGLogBodyDuelReplay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogBodyDuelReplay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      proto_log::GCGLogBodyDuelReplay::set_replay_json_str(v12, (const std::string *)(v1 + 272));
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::GCGLogBodyDuelReplay,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v1 + 112),
        (const std::shared_ptr<proto_log::GCGLogBodyDuelReplay> *)(v1 + 80));
      GCGGameMode::printStatLog((MessagePtr *)(v1 + 112));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v1 + 112));
      proto::GCGDebugReplayNotify::GCGDebugReplayNotify((proto::GCGDebugReplayNotify *const)(v1 + 336));
      proto::GCGDebugReplayNotify::set_json_str(
        (proto::GCGDebugReplayNotify *const)(v1 + 336),
        (const std::string *)(v1 + 144));
      __for_range_0 = (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *)(v14._M_string_length + 13000);
      *((std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::const_iterator *)&v14._anon_0._M_allocated_capacity
      + 1) = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin((const std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *const)(v14._M_string_length + 13000));
      __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&v14._anon_0._M_allocated_capacity
              + 1,
                (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_end) )
      {
        v18 = std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(
                (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&v14._anon_0._M_allocated_capacity
              + 1);
        controller_id_0 = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(v18);
        controller_ptr = (std::tuple_element<1,const std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *)std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(v18);
        std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v1 + 112));
        if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 112), 0LL) )
        {
          v13 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
          GCGPlayerController::sendProto(v13, (const google::protobuf::Message *)(v1 + 336));
        }
        std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 112));
        std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(
          (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&v14._anon_0._M_allocated_capacity
        + 1);
      }
      proto::GCGDebugReplayNotify::~GCGDebugReplayNotify((proto::GCGDebugReplayNotify *const)(v1 + 336));
      std::shared_ptr<proto_log::GCGLogBodyDuelReplay>::~shared_ptr((std::shared_ptr<proto_log::GCGLogBodyDuelReplay> *const)(v1 + 80));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
      std::string::~string((void *)(v1 + 272));
      std::string::~string((void *)(v1 + 208));
    }
    std::string::~string((void *)(v1 + 144));
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1793: range 000000000D7801D2-000000000D7802FD
void __cdecl GCGGameMode::setExtraBothAITask(GCGGameMode *const this, const GCGBothAIAttackTask *task)
{
  uint64_t task_id; // rdx
  uint32_t subtask_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)task >> 3) + 0x7FFF8000) )
    __asan_report_load8(task);
  task_id = task->task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_task_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->both_ai_task_id_);
  this->both_ai_task_id_ = task_id;
  if ( *(_BYTE *)(((unsigned __int64)&task->subtask_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task->subtask_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task->subtask_id);
  }
  subtask_id = task->subtask_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->both_ai_subtask_id_);
  }
  this->both_ai_subtask_id_ = subtask_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_both_ai_task_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_both_ai_task_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_both_ai_task_);
  }
  this->is_both_ai_task_ = 1;
};

// Line 1800: range 000000000D7802FE-000000000D7805D4
std::string *__cdecl GCGGameMode::getExtraBothAITaskDesc[abi:cxx11](std::string *retstr, const GCGGameMode *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-61h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ss:1805";
  *(_QWORD *)(v2 + 16) = GCGGameMode::getExtraBothAITaskDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_task_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->both_ai_task_id_);
  if ( this->both_ai_task_id_ )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->both_ai_subtask_id_);
  }
  if ( this->both_ai_subtask_id_ )
  {
LABEL_11:
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_task_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->both_ai_task_id_);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      this->both_ai_task_id_);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "_");
    if ( *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->both_ai_subtask_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->both_ai_subtask_id_);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->both_ai_subtask_id_);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      retstr,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, _str, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1812: range 000000000D7805D6-000000000D7807BD
__int64 __fastcall GCGGameMode::getControllerCardGroupId(
        const GCGGameMode *const this,
        GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  const std::map<proto::GCGControllerValue,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 controller_id:1811";
  *(_QWORD *)(v2 + 16) = GCGGameMode::getControllerCardGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( std::map<proto::GCGControllerValue,unsigned int>::count(
         &this->controller_card_group_map_,
         (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v2 + 32)) )
  {
    v8 = std::map<proto::GCGControllerValue,unsigned int>::at(
           &this->controller_card_group_map_,
           (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v2 + 32));
    v9 = (unsigned int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    result = *v9;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "getControllerCardGroupId",
      1815);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v11, (const char (*)[15])"controller_id:");
    val = *(_DWORD *)(v2 + 32);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])" not find card group");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1823: range 000000000D7807BE-000000000D780900
void __cdecl GCGGameMode::updatePlayerControllerChallengeByType(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        data::GCGChallengeType challenge_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 64 10 param:1824";
  *(_QWORD *)(v3 + 16) = GCGGameMode::updatePlayerControllerChallengeByType;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450892) = -202116109;
  GCGChallengeUpdateParam::GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v3 + 32));
  GCGGameMode::updatePlayerControllerChallengeByType(
    this,
    controller_id,
    challenge_type,
    (const GCGChallengeUpdateParam *)(v3 + 32));
  GCGChallengeUpdateParam::~GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1829: range 000000000D780902-000000000D780A45
void __cdecl GCGGameMode::updatePlayerControllerChallengeByType(
        GCGGameMode *const this,
        GCGControllerValue controller_id,
        data::GCGChallengeType challenge_type,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 26 player_controller_ptr:1835";
  *(_QWORD *)(v4 + 16) = GCGGameMode::updatePlayerControllerChallengeByType;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( !GCGGameMode::isDuringSnapshot(this) )
  {
    GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v4 + 32), (GCGControllerValue)this);
    if ( std::operator!=<GCGPlayerController>(0LL, (const std::shared_ptr<GCGPlayerController> *)(v4 + 32)) )
    {
      v7 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      GCGPlayerController::updateChallengeByType(v7, challenge_type, param);
    }
    std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v4 + 32));
  }
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1844: range 000000000D780A46-000000000D780B6B
void __cdecl GCGGameMode::recordRoundTimeUse(GCGGameMode *const this)
{
  uint32_t round_time_use; // [rsp+10h] [rbp-10h]
  uint32_t end_time; // [rsp+14h] [rbp-Ch]
  GCGStatistics *statistic_mgr; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_round_start_time_);
  }
  if ( this->cur_round_start_time_ )
  {
    statistic_mgr = GCGGameMode::getStatistics(this);
    round_time_use = 0;
    end_time = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_round_start_time_);
    }
    if ( end_time > this->cur_round_start_time_ )
      round_time_use = end_time - this->cur_round_start_time_;
    GCGStatistics::reportStatisticCommonDataUintVec(statistic_mgr, PHASE_MAIN_TIME_USE, round_time_use);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_round_start_time_);
    }
    this->cur_round_start_time_ = 0;
  }
};

// Line 1864: range 000000000D780B6C-000000000D780DCB
void __cdecl GCGGameMode::setTransNo(GCGGameMode *const this, const GCGGameModeParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 GameUid; // rcx
  uint32_t uid; // esi
  std::allocator<char> __a; // [rsp+1Bh] [rbp-105h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-104h]
  std::string v10; // [rsp+20h] [rbp-100h] BYREF
  char v11[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 8 buf:1865";
  *(_QWORD *)(v2 + 16) = GCGGameMode::setTransNo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450900) = -202116109;
  now = common::tools::TimeUtils::getNow();
  GameUid = GCGGameMode::getGameUid(this);
  if ( *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->controller_b.uid);
  }
  uid = param->controller_b.uid;
  if ( *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->controller_a.uid);
  }
  snprintf((char *)(v2 + 32), 0x80uLL, "%u_%u_%u_%u", param->controller_a.uid, uid, now, GameUid);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v10, (const char *)(v2 + 32), &__a);
  std::string::operator=(&this->trans_no_, &v10);
  std::string::~string(&v10);
  std::allocator<char>::~allocator(&__a);
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1873: range 000000000D780DCC-000000000D7813A7
int32_t __cdecl GCGGameMode::printStatLog(MessagePtr *p_body_ptr)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  time_t v12; // rax
  std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  const std::string *v15; // rax
  GCGService *v16; // rax
  int32_t result; // eax
  StatLogMgr *stat_log_mgr_ptr; // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-150h] BYREF
  char v20[304]; // [rsp+40h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 14 action_id:1875 48 4 18 sub_action_id:1876 64 16 17 head_log_ptr:1874 96 32 13 trans_no"
                        ":1877 160 64 13 stat_log:1904";
  *(_QWORD *)(v1 + 16) = GCGGameMode::printStatLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862727] = -202116109;
  common::tools::perf::make_shared<proto_log::GCGLogHead>();
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  std::string::basic_string(v1 + 96);
  if ( StatLogUtils::getContextData((uint32_t *)(v1 + 32), (uint32_t *)(v1 + 48), (std::string *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/game_mode/gcg_game_mode.cpp",
      "printStatLog",
      1880);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v19,
      (const char (*)[28])"[GCG] getContextData failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v4 = -1;
  }
  else
  {
    if ( (unsigned __int8)std::string::empty(v1 + 96) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "printStatLog",
        1887);
      v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v19,
             (const char (*)[36])"[GCG] trans_no is empty, action_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" sub_action_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    if ( !*(_DWORD *)(v1 + 32) || !proto_log::GCGStatActionType_IsValid(*(_DWORD *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/game_mode/gcg_game_mode.cpp",
        "printStatLog",
        1893);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v19,
             (const char (*)[26])"[GCG] invalid action_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v4 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_log::GCGLogHead::set_trans_no(v10, (const std::string *)(v1 + 96));
      v11 = std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v12 = time(0LL);
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v19, v12);
      proto_log::GCGLogHead::set_time(v11, (std::string *)&v19);
      std::string::~string(&v19);
      v13 = std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_log::GCGLogHead::set_action_id(v13, *(_DWORD *)(v1 + 32));
      v14 = std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::GCGLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v15 = proto_log::GCGStatActionType_Name[abi:cxx11]((proto_log::GCGStatActionType)*(_DWORD *)(v1 + 32));
      proto_log::GCGLogHead::set_action_name(v14, v15);
      *(_QWORD *)(v1 + 160) = 0LL;
      *(_QWORD *)(v1 + 168) = 0LL;
      *(_QWORD *)(v1 + 176) = 0LL;
      *(_QWORD *)(v1 + 184) = 0LL;
      *(_QWORD *)(v1 + 192) = 0LL;
      *(_QWORD *)(v1 + 200) = 0LL;
      *(_QWORD *)(v1 + 208) = 0LL;
      *(_QWORD *)(v1 + 216) = 0LL;
      std::shared_ptr<google::protobuf::Message>::operator=<proto_log::GCGLogHead>(
        (std::shared_ptr<google::protobuf::Message> *const)(v1 + 160),
        (const std::shared_ptr<proto_log::GCGLogHead> *)(v1 + 64));
      std::shared_ptr<google::protobuf::Message>::operator=(
        (std::shared_ptr<google::protobuf::Message> *const)(v1 + 192),
        p_body_ptr);
      v16 = ServiceBox::findService<GCGService>();
      stat_log_mgr_ptr = ServiceBase::findStatLogMgr(v16, 0x1Eu);
      if ( stat_log_mgr_ptr )
      {
        StatLogMgr::pushStatLog(stat_log_mgr_ptr, (const StatLog *)(v1 + 160));
        v4 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/game_mode/gcg_game_mode.cpp",
          "printStatLog",
          1911);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"findStatLogMgr fail");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v4 = -1;
      }
      StatLog::~StatLog((StatLog *const)(v1 + 160));
    }
  }
  std::string::~string((void *)(v1 + 96));
  std::shared_ptr<proto_log::GCGLogHead>::~shared_ptr((std::shared_ptr<proto_log::GCGLogHead> *const)(v1 + 64));
  result = v4;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
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
