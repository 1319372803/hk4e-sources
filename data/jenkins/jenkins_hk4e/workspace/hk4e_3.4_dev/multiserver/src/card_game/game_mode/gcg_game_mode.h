// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/game_mode/gcg_game_mode.h

// Line 30: range 000000000E1D3EDA-000000000E1D3F34
void __cdecl GCGGameMode::setIsSaveOperation(GCGGameMode *const this, bool is_save)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_save_operation_);
  }
  this->is_save_operation_ = is_save;
};

// Line 36: range 000000000D861090-000000000D8610AA
void __cdecl GCGGameModeRuntimeData::GCGGameModeRuntimeData(GCGGameModeRuntimeData *const this)
{
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(&this->random_gen_);
};

// Line 67: range 000000000D828E14-000000000D828E27
const GCGRule *__cdecl GCGGameMode::rule(const GCGGameMode *const this)
{
  return &this->rule_;
};

// Line 68: range 000000000D828E28-000000000D828E3B
GCGDuel *__cdecl GCGGameMode::getDuel(GCGGameMode *const this)
{
  return &this->duel_;
};

// Line 69: range 000000000D828E3C-000000000D828E4F
GCGPhaseMgr *__cdecl GCGGameMode::getPhaseMgr(GCGGameMode *const this)
{
  return &this->phase_mgr_;
};

// Line 70: range 000000000D828E50-000000000D828E63
GCGActionMgr *__cdecl GCGGameMode::getActionMgr(GCGGameMode *const this)
{
  return &this->action_mgr_;
};

// Line 71: range 000000000D828E64-000000000D828E77
GCGStatistics *__cdecl GCGGameMode::getStatistics(GCGGameMode *const this)
{
  return &this->statistics_;
};

// Line 71: range 000000000D828E78-000000000D828E8B
const GCGStatistics *__cdecl GCGGameMode::getStatistics(const GCGGameMode *const this)
{
  return &this->statistics_;
};

// Line 73: range 000000000D828E8C-000000000D828ED8
uint32_t __cdecl GCGGameMode::getCreateTime(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time_);
  }
  return this->create_time_;
};

// Line 74: range 000000000D828EDA-000000000D828F2E
uint32_t __cdecl GCGGameMode::getStopTime(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->stop_time_);
  }
  return this->stop_time_;
};

// Line 75: range 000000000D828F30-000000000D828F7C
uint32_t __cdecl GCGGameMode::getGameUid(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->game_uid_);
  }
  return this->game_uid_;
};

// Line 76: range 000000000D828F7E-000000000D828FCA
uint32_t __cdecl GCGGameMode::getGameId(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->game_id_);
  }
  return this->game_id_;
};

// Line 77: range 000000000D828FCC-000000000D829020
uint32_t __cdecl GCGGameMode::getVerifyCode(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_code_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->verify_code_);
  }
  return this->verify_code_;
};

// Line 78: range 000000000DF380D6-000000000DF3812A
uint32_t __cdecl GCGGameMode::getTryCreateTime(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->try_create_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_create_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->try_create_time_);
  }
  return this->try_create_time_;
};

// Line 79: range 000000000D829022-000000000D829076
GCGGameBusinessType __cdecl GCGGameMode::getBusinessType(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->business_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->business_type_);
  }
  return this->business_type_;
};

// Line 81: range 000000000D829098-000000000D8290EA
bool __cdecl GCGGameMode::isSaveOperation(GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_save_operation_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_save_operation_);
  }
  return this->is_save_operation_;
};

// Line 81: range 000000000D829078-000000000D829097
const GCGConfigMgr *__cdecl GCGGameMode::getConfig(const GCGGameMode *const this)
{
  return std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gcg_config_mgr_ptr_);
};

// Line 87: range 000000000D8290EC-000000000D8290FF
GCGCardMgr *__cdecl GCGGameMode::getCardMgr(GCGGameMode *const this)
{
  return &this->card_mgr_;
};

// Line 88: range 000000000D829114-000000000D829160
GCGControllerValue __cdecl GCGGameMode::getWinner(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->win_controller_id_);
  }
  return this->win_controller_id_;
};

// Line 88: range 000000000D829100-000000000D829113
GCGSkillLogic *__cdecl GCGGameMode::getSkillLogic(GCGGameMode *const this)
{
  return &this->skill_logic_;
};

// Line 91: range 000000000D829162-000000000D8291B6
GCGEndReason __cdecl GCGGameMode::getEndReason(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_reason_);
  }
  return this->end_reason_;
};

// Line 92: range 000000000E1D3F36-000000000E1D3F82
uint32_t __cdecl GCGGameMode::getLastRecvTime(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_recv_time_);
  }
  return this->last_recv_time_;
};

// Line 94: range 000000000D8291B8-000000000D829219
void __cdecl GCGGameMode::increOperationSeq(GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->operation_seq_);
  }
  ++this->operation_seq_;
};

// Line 95: range 000000000D82921A-000000000D82926E
uint32_t __cdecl GCGGameMode::getOperationSeq(GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->operation_seq_);
  }
  return this->operation_seq_;
};

// Line 98: range 000000000E1D3F84-000000000E1D3FDE
void __cdecl GCGGameMode::setForbidClientVersion(GCGGameMode *const this, uint32_t client_version)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->forbid_relogin_client_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forbid_relogin_client_version_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forbid_relogin_client_version_);
  }
  this->forbid_relogin_client_version_ = client_version;
};

// Line 99: range 000000000D829270-000000000D8292C4
uint32_t __cdecl GCGGameMode::getForbidClientVersion(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->forbid_relogin_client_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forbid_relogin_client_version_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->forbid_relogin_client_version_);
  }
  return this->forbid_relogin_client_version_;
};

// Line 106: range 000000000D8292C6-000000000D829313
bool __cdecl GCGGameMode::isRunning(const GCGGameMode *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  return this->is_running_;
};

// Line 128: range 000000000DF3812C-000000000DF3813F
const std::vector<GCGCardDetailInfo> *__cdecl GCGGameMode::getHistroyCard(const GCGGameMode *const this)
{
  return &this->history_card_vec_;
};

// Line 157: range 000000000DF38140-000000000DF38153
const std::vector<std::shared_ptr<GCGMsgPack>> *__cdecl GCGGameMode::getHistoryMsg(GCGGameMode *const this)
{
  return &this->history_msg_pack_vec_;
};

// Line 171: range 000000000D829314-000000000D829327
std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__cdecl GCGGameMode::getControllerMap(
        GCGGameMode *const this)
{
  return &this->controller_map_;
};

// Line 171: range 000000000D829328-000000000D82937B
void __cdecl GCGGameMode::resetRoundStartTime(GCGGameMode *const this)
{
  uint32_t Now; // esi

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round_start_time_);
  }
  this->cur_round_start_time_ = Now;
};

// Line 184: range 000000000DF38154-000000000DF381A6
bool __cdecl GCGGameMode::isBothAITask(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_both_ai_task_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_both_ai_task_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_both_ai_task_);
  }
  return this->is_both_ai_task_;
};

// Line 196: range 000000000D82937C-000000000D8293C9
bool __cdecl GCGGameMode::isDuringSnapshot(const GCGGameMode *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_during_preview_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_during_preview_);
  return this->is_during_preview_;
};

// Line 196: range 000000000D8293CA-000000000D829424
void __cdecl GCGGameMode::setIsNeedBreakForSpecialAsk(GCGGameMode *const this, bool is_break)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_break_by_special_ask_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 79) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_break_by_special_ask_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_break_by_special_ask_);
  }
  this->is_need_break_by_special_ask_ = is_break;
};

// Line 197: range 000000000DF381A8-000000000DF381F5
void __cdecl GCGGameMode::setDuringSnapshot(GCGGameMode *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_during_preview_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_during_preview_);
  this->is_during_preview_ = 1;
};

// Line 198: range 000000000DF381F6-000000000DF38243
void __cdecl GCGGameMode::clearDuringSnapshot(GCGGameMode *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_during_preview_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_during_preview_);
  this->is_during_preview_ = 0;
};

// Line 200: range 000000000E1D3FE0-000000000E1D4032
bool __cdecl GCGGameMode::isNeedBreakForSpecialAsk(const GCGGameMode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_break_by_special_ask_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 79) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_break_by_special_ask_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_need_break_by_special_ask_);
  }
  return this->is_need_break_by_special_ask_;
};

// Line 204: range 000000000D829426-000000000D829439
GCGSkillPreviewContext *__cdecl GCGGameMode::getSkillPreviewContext(GCGGameMode *const this)
{
  return &this->global_skill_preview_context_;
};

// Line 204: range 000000000D82943A-000000000D829469
std::string *__cdecl GCGGameMode::getTransNo[abi:cxx11](std::string *retstr, const GCGGameMode *const this)
{
  std::string::basic_string(retstr, &this->trans_no_);
  return retstr;
};

// Line 310: range 000000000E1F1A82-000000000E1F1CBB
GCGGameMode *__fastcall GCGGameMode::getController<GCGAIController>(
        GCGGameMode *const this,
        __int64 controller_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 controller_id:310 64 8 8 iter:313";
  *(_QWORD *)(v3 + 16) = GCGGameMode::getController<GCGAIController>;
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
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.h",
      "getController",
      316);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v10,
           (const char (*)[36])"getController fail. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<GCGAIController>::shared_ptr((std::shared_ptr<GCGAIController> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::dynamic_pointer_cast<GCGAIController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)this);
  }
  if ( v11 == (char *)v3 )
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

// Line 310: range 000000000D86362A-000000000D863863
GCGGameMode *__fastcall GCGGameMode::getController<GCGMonsterController>(
        GCGGameMode *const this,
        __int64 controller_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 controller_id:310 64 8 8 iter:313";
  *(_QWORD *)(v3 + 16) = GCGGameMode::getController<GCGMonsterController>;
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
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.h",
      "getController",
      316);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v10,
           (const char (*)[36])"getController fail. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<GCGMonsterController>::shared_ptr((std::shared_ptr<GCGMonsterController> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::dynamic_pointer_cast<GCGMonsterController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)this);
  }
  if ( v11 == (char *)v3 )
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

// Line 310: range 000000000D8648FA-000000000D864B33
GCGGameMode *__fastcall GCGGameMode::getController<GCGPlayerController>(
        GCGGameMode *const this,
        __int64 controller_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 controller_id:310 64 8 8 iter:313";
  *(_QWORD *)(v3 + 16) = GCGGameMode::getController<GCGPlayerController>;
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
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/game_mode/gcg_game_mode.h",
      "getController",
      316);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v10,
           (const char (*)[36])"getController fail. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<GCGPlayerController>::shared_ptr((std::shared_ptr<GCGPlayerController> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)this);
  }
  if ( v11 == (char *)v3 )
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
