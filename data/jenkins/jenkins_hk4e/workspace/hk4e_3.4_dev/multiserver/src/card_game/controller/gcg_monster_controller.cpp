// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_monster_controller.cpp

// Line 21: range 000000000DEE23AA-000000000DEE2B5B
int32_t __cdecl GCGMonsterController::init(GCGMonsterController *const this, const GCGControllerParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  GCGGameMode *game_mode; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t advanture_rule_id; // ecx
  PVEIntentionMgr *p_pve_intention_mgr; // rcx
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+18h] [rbp-B8h]
  const data::GCGDeckExcelConfig *card_group_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 cur_game_id:27 64 4 20 cur_card_group_id:28";
  *(_QWORD *)(v2 + 16) = GCGMonsterController::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( GCGControllerBase::init(this, param) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_monster_controller.cpp",
      "init",
      24);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v25,
      (const char (*)[30])"GCGControllerBase::init fail.");
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    *(_DWORD *)(v2 + 48) = GCGGameMode::getGameId(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    *(_DWORD *)(v2 + 64) = GCGGameMode::getControllerCardGroupId(game_mode, this->controller_id_);
    if ( *(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Config = GCGGameMode::getConfig(this->game_mode_);
      gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
      if ( data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(gcg_game_config_mgr, *(_DWORD *)(v2 + 48)) )
      {
        card_group_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                                  gcg_game_config_mgr,
                                  *(_DWORD *)(v2 + 64));
        if ( card_group_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_group_config_ptr->advanture_rule_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_group_config_ptr->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&card_group_config_ptr->advanture_rule_id);
          }
          advanture_rule_id = card_group_config_ptr->advanture_rule_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->config_advanture_rule_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->config_advanture_rule_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->config_advanture_rule_id_);
          }
          this->config_advanture_rule_id_ = advanture_rule_id;
          if ( this->config_advanture_rule_id_ )
          {
            p_pve_intention_mgr = &this->pve_intention_mgr_;
            if ( *(_BYTE *)(((unsigned __int64)&this->config_advanture_rule_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->config_advanture_rule_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->config_advanture_rule_id_);
            }
            PVEIntentionMgr::init(p_pve_intention_mgr, this->config_advanture_rule_id_);
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/controller/gcg_monster_controller.cpp",
              "init",
              54);
            v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v25,
                    (const char (*)[35])"GCGMonsterController init succ. c:");
            if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->controller_id_);
            }
            val = this->controller_id_;
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v17,
                    (const char (*)[14])", card_group:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 64));
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", rule id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              &this->config_advanture_rule_id_);
            common::milog::MiLogStream::~MiLogStream(&v25);
            result = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/controller/gcg_monster_controller.cpp",
              "init",
              50);
            common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v25,
              (const char (*)[52])"GCGMonsterController advanture_rule_id is not valid");
            common::milog::MiLogStream::~MiLogStream(&v25);
            result = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/controller/gcg_monster_controller.cpp",
            "init",
            44);
          v13 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                  &v25,
                  (const char (*)[72])"GCGMonsterController init failed, GCGDeckExcelConfig not find group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v25);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/controller/gcg_monster_controller.cpp",
          "init",
          38);
        v12 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                &v25,
                (const char (*)[71])"GCGMonsterController init failed, GCGGameExcelConfig not find game_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/controller/gcg_monster_controller.cpp",
        "init",
        31);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v25,
             (const char (*)[44])"GCGMonsterController init failed, gamemode:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
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
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = -1;
    }
  }
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
  return result;
};

// Line 59: range 000000000DEE2B5C-000000000DEE2D35
void __cdecl GCGMonsterController::toClient(const GCGMonsterController *const this, proto::GCGDuel *proto)
{
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  uint32_t *p_skill_id; // rax
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_begin_0; // [rsp+28h] [rbp-48h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_end_0; // [rsp+30h] [rbp-40h] BYREF
  const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>> *__for_range; // [rsp+38h] [rbp-38h]
  const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > *v9; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *card_guid; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *op_list; // [rsp+50h] [rbp-20h]
  proto::GCGPVEIntention *proto_intetion; // [rsp+58h] [rbp-18h]
  const std::list<std::shared_ptr<GCGOperationAttack>> *__for_range_0; // [rsp+60h] [rbp-10h]
  const std::shared_ptr<GCGOperationAttack> *op_ptr; // [rsp+68h] [rbp-8h]

  GCGControllerBase::toClient(this, proto);
  __for_range = &this->operation_map_;
  __for_begin._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::begin(&this->operation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::end(&this->operation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator*(&__for_begin);
    card_guid = std::get<0ul,unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>(v9);
    op_list = (std::tuple_element<1,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *)std::get<1ul,unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>(v9);
    proto_intetion = proto::GCGDuel::add_intetion_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_guid);
    }
    proto::GCGPVEIntention::set_card_guid(proto_intetion, *card_guid);
    __for_range_0 = op_list;
    __for_begin_0._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::begin(op_list)._M_node;
    __for_end_0._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      op_ptr = std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator*(&__for_begin_0);
      if ( std::operator!=<GCGOperationAttack>(op_ptr, 0LL) )
      {
        v2 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)op_ptr);
        p_skill_id = &v2->skill_id;
        if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_skill_id);
        }
        proto::GCGPVEIntention::add_skill_id_list(proto_intetion, v2->skill_id);
      }
      std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator++(&__for_begin);
  }
};

// Line 76: range 000000000DEE2D36-000000000DEE2DFE
void __cdecl GCGMonsterController::onGameStart(GCGMonsterController *const this)
{
  GCGDuel *Duel; // rcx
  GCGDiceZone *DiceZone; // rax
  GCGCardZone *DeckZone; // rax
  GCGField *field; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(Duel, this->controller_id_);
  DiceZone = GCGField::getDiceZone(field);
  GCGDiceZone::setNoNeedCost(DiceZone, 1);
  DeckZone = GCGField::getDeckZone(field);
  GCGCardZone::reset(DeckZone);
  GCGControllerBase::setReady(this);
};

// Line 86: range 000000000DEE2E00-000000000DEE34BD
__int64 __fastcall GCGMonsterController::onTick(GCGMonsterController *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  unsigned int v6; // r14d
  GCGPhaseBase *v7; // rcx
  const GCGRule *v8; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  unsigned __int64 think_ms; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 cur_phase_type:113 64 8 9 now_ms:85 96 16 16 cur_phase_ptr:91";
  *(_QWORD *)(v2 + 16) = GCGMonsterController::onTick;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_QWORD *)(v2 + 64) = now_ms;
  if ( GCGControllerBase::getIsIgnoreThink(this) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_think_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_think_time_ms_);
  if ( this->last_think_time_ms_ > *(_QWORD *)(v2 + 64) )
    v5 = 1;
  else
LABEL_9:
    v5 = 0;
  if ( v5 )
  {
    v6 = 0;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 96));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_monster_controller.cpp",
      "onTick",
      94);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v18,
      (const char (*)[31])"[PVE] cur_phase_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    if ( GCGPhaseBase::isAllowController(v7, this->controller_id_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v8 = GCGGameMode::rule(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&v8->monster_think_time_ms >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v8->monster_think_time_ms);
      think_ms = v8->monster_think_time_ms;
      if ( !GCGControllerBase::getIsIgnoreThink(this) && think_ms )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->last_think_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->last_think_time_ms_);
        if ( !this->last_think_time_ms_ )
        {
          this->last_think_time_ms_ = think_ms + *(_QWORD *)(v2 + 64);
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/controller/gcg_monster_controller.cpp",
            "onTick",
            107);
          v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v18,
                  (const char (*)[21])"start think now_ms: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v10,
                  (const unsigned __int64 *)(v2 + 64));
          v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" think: ");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &this->last_think_time_ms_);
          common::milog::MiLogStream::~MiLogStream(&v18);
          v6 = 0;
          goto LABEL_49;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->last_think_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&this->last_think_time_ms_);
        this->last_think_time_ms_ = 0LL;
      }
      v13 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v14 = (unsigned __int64)(v13->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13->_vptr_GCGPhaseBase + 3);
      *(_DWORD *)(v2 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14)(v13);
      switch ( *(_DWORD *)(v2 + 48) )
      {
        case 1:
        case 2:
        case 3:
        case 0xA:
          goto LABEL_41;
        case 4:
          GCGMonsterController::genOperation(this, 1);
          GCGControllerBase::doDefaultOp(this);
          goto LABEL_48;
        case 5:
          GCGMonsterController::genOperation(this, 0);
          if ( !GCGMonsterController::doAttackOp(this) )
            goto LABEL_48;
          if ( GCGMonsterController::findValidCardGuid(this) )
LABEL_45:
            GCGMonsterController::doSelectOnStageOp(this);
          else
LABEL_41:
            GCGControllerBase::doDefaultOp(this);
LABEL_48:
          v6 = 0;
          break;
        case 7:
          goto LABEL_45;
        default:
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/controller/gcg_monster_controller.cpp",
            "onTick",
            156);
          v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v18,
                  (const char (*)[24])"unsupported phasetype: ");
          common::milog::MiLogStream::operator<<<proto::GCGPhaseType,(proto::GCGPhaseType*)0>(
            v15,
            (const proto::GCGPhaseType *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v18);
          GCGControllerBase::doDefaultOp(this);
          goto LABEL_48;
      }
      goto LABEL_49;
    }
    v6 = 0;
  }
LABEL_49:
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 96));
LABEL_50:
  result = v6;
  if ( v19 == (char *)v2 )
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

// Line 165: range 000000000DEE34BE-000000000DEE3686
__int64 __fastcall GCGMonsterController::getIntentionPriority(
        const GCGMonsterController *const this,
        uint32_t card_guid,
        uint32_t skill_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  const std::unordered_map<unsigned int,int>::mapped_type *v7; // rax
  unsigned int *v8; // rdx
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::mapped_type *skill_priority_map; // [rsp+18h] [rbp-88h]
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 card_guid:164 64 4 12 skill_id:164";
  *(_QWORD *)(v3 + 16) = GCGMonsterController::getIntentionPriority;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = card_guid;
  *(_DWORD *)(v3 + 64) = skill_id;
  if ( std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::count(
         &this->operation_priority_map_,
         (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::key_type *)(v3 + 48)) )
  {
    skill_priority_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::at(
                           &this->operation_priority_map_,
                           (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::key_type *)(v3 + 48));
    if ( std::unordered_map<unsigned int,int>::count(
           skill_priority_map,
           (const std::unordered_map<unsigned int,int>::key_type *)(v3 + 64)) )
    {
      v7 = std::unordered_map<unsigned int,int>::at(
             skill_priority_map,
             (const std::unordered_map<unsigned int,int>::key_type *)(v3 + 64));
      v8 = (unsigned int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      result = *v8;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
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
  return result;
};

// Line 179: range 000000000DEE3688-000000000DEE3BD4
void __cdecl GCGMonsterController::printCurOperation(
        const GCGMonsterController *const this,
        std::string *intention_str)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  const PVEIntentionMgr *PVEIntentionMgr; // rax
  unsigned int CurIntentionEpoch; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t *p_skill_id; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // r14
  int IntentionPriority; // eax
  unsigned int skill_id; // [rsp+1Ch] [rbp-104h]
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-F0h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_end_0; // [rsp+38h] [rbp-E8h] BYREF
  const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > *v23; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *card_guid; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *op_list; // [rsp+58h] [rbp-C8h]
  const std::list<std::shared_ptr<GCGOperationAttack>> *__for_range_0; // [rsp+60h] [rbp-C0h]
  const std::shared_ptr<GCGOperationAttack> *op_ptr; // [rsp+68h] [rbp-B8h]
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-B0h] BYREF
  std::string val; // [rsp+90h] [rbp-90h] BYREF
  char v30[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ss:180";
  *(_QWORD *)(v2 + 16) = GCGMonsterController::printCurOperation;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[INTENTION PRINT]epoch:");
  PVEIntentionMgr = GCGMonsterController::getPVEIntentionMgr(this);
  CurIntentionEpoch = PVEIntentionMgr::getCurIntentionEpoch(PVEIntentionMgr);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, CurIntentionEpoch);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " c:");
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->controller_id_);
  __for_range = &this->operation_map_;
  __for_begin._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::begin(&this->operation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::end(&this->operation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator*(&__for_begin);
    card_guid = std::get<0ul,unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>(v23);
    op_list = (std::tuple_element<1,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *)std::get<1ul,unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>(v23);
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "[card:");
    if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_guid);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, *card_guid);
    __for_range_0 = op_list;
    __for_begin_0._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::begin(op_list)._M_node;
    __for_end_0._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      op_ptr = std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator*(&__for_begin_0);
      if ( !std::operator==<GCGOperationAttack>(op_ptr, 0LL) )
      {
        v11 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)op_ptr);
        p_skill_id = &v11->skill_id;
        if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_skill_id);
        }
        skill_id = v11->skill_id;
        v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
                "|");
        v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, skill_id);
        v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, ",");
        if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_guid);
        }
        IntentionPriority = GCGMonsterController::getIntentionPriority(this, *card_guid, skill_id);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, IntentionPriority);
      }
      std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator++(&__for_begin_0);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      "]");
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &val,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  std::string::operator+=(intention_str, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/controller/gcg_monster_controller.cpp",
    "printCurOperation",
    197);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &val,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v28, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v28);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 201: range 000000000DEE3CC0-000000000DEE443D
void __cdecl GCGMonsterController::genOperation(GCGMonsterController *const this, bool is_init)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  PVEIntentionMgr *PVEIntentionMgr; // rax
  PVEIntentionMgr *v7; // rax
  GCGGameMode *GameMode; // rax
  GCGControllerValue ControllerId; // eax
  PVEIntentionMgr *v10; // rax
  std::unordered_map<unsigned int,int> *p_skill_priority_map; // r14
  std::unordered_map<unsigned int,int> *v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // rdx
  GCGControllerValue v15; // r14d
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  uint32_t *p_skill_id; // rax
  GCGCharacterZone *CharacterZone; // [rsp+8h] [rbp-1B8h]
  unsigned int skill_id; // [rsp+2Ch] [rbp-194h]
  std::map<unsigned int,PVEIntention>::iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::map<unsigned int,PVEIntention>::iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-178h] BYREF
  GCGDuel *duel; // [rsp+50h] [rbp-170h]
  GCGField *field; // [rsp+58h] [rbp-168h]
  std::map<unsigned int,PVEIntention> *__for_range; // [rsp+60h] [rbp-160h]
  const std::pair<unsigned int const,PVEIntention> *v28; // [rsp+68h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,PVEIntention> >::type *card_guid; // [rsp+70h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,PVEIntention> >::type *intention; // [rsp+78h] [rbp-148h]
  std::list<std::shared_ptr<GCGOperationAttack>> *op_list; // [rsp+80h] [rbp-140h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+88h] [rbp-138h]
  common::milog::MiLogStream v33; // [rsp+90h] [rbp-130h] BYREF
  char v34[272]; // [rsp+B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 10 op_ptr:249 80 24 12 card_vec:218 144 48 17 intention_map:237";
  *(_QWORD *)(v2 + 16) = GCGMonsterController::genOperation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/controller/gcg_monster_controller.cpp",
    "genOperation",
    203);
  v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v33,
         (const char (*)[30])"[PVE] gen operation is_init: ");
  common::milog::MiLogStream::operator<<(v5, is_init);
  common::milog::MiLogStream::~MiLogStream(&v33);
  GCGMonsterController::reportStatisticInfo(this, 0);
  if ( is_init )
  {
    PVEIntentionMgr = GCGMonsterController::getPVEIntentionMgr(this);
    PVEIntentionMgr::reportRestDice(PVEIntentionMgr, &this->dice_map_);
    std::map<data::GCGVirtualDiceType,unsigned int>::clear(&this->dice_map_);
    std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::clear(&this->operation_map_);
    std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::clear(&this->operation_priority_map_);
    std::set<unsigned int>::clear(&this->gen_intention_card_guid_set_);
    v7 = GCGMonsterController::getPVEIntentionMgr(this);
    PVEIntentionMgr::calCurRoundInitVirtualDiceNum(v7, &this->dice_map_);
  }
  std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 80));
  GameMode = GCGControllerBase::getGameMode(this);
  duel = GCGGameMode::getDuel(GameMode);
  ControllerId = GCGControllerBase::getControllerId(this);
  field = GCGDuel::getField(duel, ControllerId);
  CharacterZone = GCGField::getCharacterZone(field);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGMonsterController::genOperation(bool)::{lambda(GCGCard &)#1},void,void>(
    (std::function<ForeachPolicy(GCGCard&)> *const)&v33,
    (GCGMonsterController::genOperation::<lambda(GCGCard&)>)__PAIR128__((unsigned __int64)this, v2 + 80));
  GCGCharacterZone::foreachAliveCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v33);
  std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v33);
  if ( std::vector<std::shared_ptr<GCGCard>>::empty((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 80)) )
  {
    if ( is_init )
      GCGMonsterController::sendIntentionInfoMessage(this);
  }
  else
  {
    v10 = GCGMonsterController::getPVEIntentionMgr(this);
    PVEIntentionMgr::genIntention(
      (std::map<unsigned int,PVEIntention> *)(v2 + 144),
      v10,
      &this->dice_map_,
      (const std::vector<std::shared_ptr<GCGCard>> *)(v2 + 80));
    __for_range = (std::map<unsigned int,PVEIntention> *)(v2 + 144);
    __for_begin._M_node = std::map<unsigned int,PVEIntention>::begin((std::map<unsigned int,PVEIntention> *const)(v2 + 144))._M_node;
    __for_end._M_node = std::map<unsigned int,PVEIntention>::end((std::map<unsigned int,PVEIntention> *const)(v2 + 144))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,PVEIntention>>::operator*(&__for_begin);
      card_guid = std::get<0ul,unsigned int const,PVEIntention>(v28);
      intention = (std::tuple_element<1,const std::pair<unsigned int const,PVEIntention> >::type *)std::get<1ul,unsigned int const,PVEIntention>(v28);
      if ( !std::vector<unsigned int>::empty(&intention->skill_vec) )
      {
        op_list = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::operator[](
                    &this->operation_map_,
                    card_guid);
        p_skill_priority_map = &intention->skill_priority_map;
        v12 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::operator[](
                &this->operation_priority_map_,
                card_guid);
        std::unordered_map<unsigned int,int>::operator=(v12, p_skill_priority_map);
        __for_range_0 = &intention->skill_vec;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&intention->skill_vec)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          skill_id = *v14;
          common::tools::perf::make_shared<GCGOperationAttack>();
          v15 = GCGControllerBase::getControllerId(this);
          v16 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&v16->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v16->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v16 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->controller_id);
          }
          v16->controller_id = v15;
          v17 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          p_skill_id = &v17->skill_id;
          if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_store4(p_skill_id);
          }
          v17->skill_id = skill_id;
          std::list<std::shared_ptr<GCGOperationAttack>>::push_back(
            op_list,
            (const std::list<std::shared_ptr<GCGOperationAttack>>::value_type *)(v2 + 48));
          std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v2 + 48));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,PVEIntention>>::operator++(&__for_begin);
    }
    GCGMonsterController::sendIntentionInfoMessage(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::trySendMsgPack(this->game_mode_);
    std::map<unsigned int,PVEIntention>::~map((std::map<unsigned int,PVEIntention> *const)(v2 + 144));
  }
  std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 80));
  if ( v34 == (char *)v2 )
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
};

// Line 221: range 000000000DEE3BD6-000000000DEE3CBE
ForeachPolicy __cdecl GCGMonsterController::genOperation(bool)::{lambda(GCGCard &)#1}::operator()(
        const GCGMonsterController::genOperation::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::set<unsigned int> *p_gen_intention_card_guid_set; // rbx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v3; // rax
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // rbx
  std::set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  std::enable_shared_from_this<GCGCard> v7; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  p_gen_intention_card_guid_set = &__closure->__this->gen_intention_card_guid_set_;
  __x = GCGCard::getGuid(card);
  v3 = std::set<unsigned int>::insert(p_gen_intention_card_guid_set, &__x);
  if ( v3.second )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    card_vec = __closure->__card_vec;
    std::enable_shared_from_this<GCGCard>::shared_from_this(&v7);
    std::vector<std::shared_ptr<GCGCard>>::push_back(card_vec, (std::vector<std::shared_ptr<GCGCard>>::value_type *)&v7);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v7);
  }
  return 0;
};

// Line 261: range 000000000DEE443E-000000000DEE4778
void __cdecl GCGMonsterController::sendIntentionInfoMessage(const GCGMonsterController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::list<std::shared_ptr<GCGOperationAttack>>::size_type v4; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GCGGameMode *game_mode; // r14
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-D0h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_end_0; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,std::vector<unsigned int>> *msg_intention_map; // [rsp+30h] [rbp-C0h]
  const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>> *__for_range; // [rsp+38h] [rbp-B8h]
  const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > *v13; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *card_guid; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *op_list; // [rsp+50h] [rbp-A0h]
  std::vector<unsigned int> *cur_card_intention_vec; // [rsp+58h] [rbp-98h]
  const std::list<std::shared_ptr<GCGOperationAttack>> *__for_range_0; // [rsp+60h] [rbp-90h]
  const std::shared_ptr<GCGOperationAttack> *op_ptr; // [rsp+68h] [rbp-88h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+70h] [rbp-80h] BYREF
  char v20[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 msg_ptr:262";
  *(_QWORD *)(v1 + 16) = GCGMonsterController::sendIntentionInfoMessage;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgPVEIntentionInfo>();
  msg_intention_map = &std::__shared_ptr_access<GCGMsgPVEIntentionInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPVEIntentionInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->intention_map;
  __for_range = &this->operation_map_;
  __for_begin._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::begin(&this->operation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::end(&this->operation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator*(&__for_begin);
    card_guid = std::get<0ul,unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>(v13);
    op_list = (std::tuple_element<1,const std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::type *)std::get<1ul,unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>(v13);
    cur_card_intention_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](msg_intention_map, card_guid);
    v4 = std::list<std::shared_ptr<GCGOperationAttack>>::size(op_list);
    std::vector<unsigned int>::reserve(cur_card_intention_vec, v4);
    __for_range_0 = op_list;
    __for_begin_0._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::begin(op_list)._M_node;
    __for_end_0._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      op_ptr = std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator*(&__for_begin_0);
      if ( !std::operator==<GCGOperationAttack>(op_ptr, 0LL) )
      {
        v5 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)op_ptr);
        std::vector<unsigned int>::emplace_back<unsigned int &>(cur_card_intention_vec, &v5->skill_id, &v5->skill_id);
      }
      std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgPVEIntentionInfo,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgPVEIntentionInfo> *)(v1 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgPVEIntentionInfo>::~shared_ptr((std::shared_ptr<GCGMsgPVEIntentionInfo> *const)(v1 + 32));
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 282: range 000000000DEE477A-000000000DEE507F
int32_t __cdecl GCGMonsterController::doAttackOp(GCGMonsterController *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGControllerValue ControllerId; // eax
  GCGField *Field; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  GCGOperationAttack *v9; // rdx
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_skill_id; // rax
  uint32_t Guid; // esi
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  GCGDuel *Duel; // [rsp+10h] [rbp-180h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-16Dh] BYREF
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::key_type __x; // [rsp+24h] [rbp-16Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::_Self __y; // [rsp+28h] [rbp-168h] BYREF
  GCGCharacterZone *character_zone; // [rsp+30h] [rbp-160h]
  GCGCard *card; // [rsp+38h] [rbp-158h]
  std::list<std::shared_ptr<GCGOperationAttack>> *op_list; // [rsp+40h] [rbp-150h]
  std::shared_ptr<GCGOperationAttack> *op_ptr; // [rsp+48h] [rbp-148h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+50h] [rbp-140h] BYREF
  std::vector<unsigned int> skill_id_vec; // [rsp+60h] [rbp-130h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v26; // [rsp+A0h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 8 12 map_iter:296 64 8 13 list_iter:304 96 16 12 card_ptr:284 128 16 17 attack_op_ptr:303";
  *(_QWORD *)(v1 + 16) = GCGMonsterController::doAttackOp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  ControllerId = GCGControllerBase::getControllerId(this);
  Field = GCGDuel::getField(Duel, ControllerId);
  character_zone = GCGField::getCharacterZone(Field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v1 + 96));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_monster_controller.cpp",
      "doAttackOp",
      287);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v26,
      (const char (*)[33])"getOnStageCard card is nullptr. ");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
  }
  else
  {
    card = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( !GCGUtils::isCanAttack(card) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/controller/gcg_monster_controller.cpp",
        "doAttackOp",
        293);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v25,
             (const char (*)[20])"card can't attack. ");
      GCGCard::getDesc[abi:cxx11]((std::string *)&v26, card);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v26);
      std::string::~string(&v26);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v6 = -1;
    }
    else
    {
      __x = GCGCard::getGuid(card);
      *(std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::iterator *)(v1 + 32) = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::find(&this->operation_map_, &__x);
      __y._M_node = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::end(&this->operation_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::_Self *)(v1 + 32),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/controller/gcg_monster_controller.cpp",
          "doAttackOp",
          299);
        v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v25,
               (const char (*)[20])"card can't attack. ");
        GCGCard::getDesc[abi:cxx11]((std::string *)&v26, card);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v26);
        std::string::~string(&v26);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v6 = -1;
      }
      else
      {
        op_list = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > > *const)(v1 + 32))->second;
        *(_QWORD *)(v1 + 128) = 0LL;
        *(_QWORD *)(v1 + 136) = 0LL;
        *(std::list<std::shared_ptr<GCGOperationAttack>>::iterator *)(v1 + 64) = std::list<std::shared_ptr<GCGOperationAttack>>::begin(op_list);
        while ( 1 )
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::_Base_ptr)std::list<std::shared_ptr<GCGOperationAttack>>::end(op_list)._M_node;
          if ( !std::operator!=(
                  (const std::_List_iterator<std::shared_ptr<GCGOperationAttack> >::_Self *)(v1 + 64),
                  (const std::_List_iterator<std::shared_ptr<GCGOperationAttack> >::_Self *)&__y) )
            break;
          op_ptr = std::_List_iterator<std::shared_ptr<GCGOperationAttack>>::operator*((const std::_List_iterator<std::shared_ptr<GCGOperationAttack> > *const)(v1 + 64));
          if ( std::operator==<GCGOperationAttack>(op_ptr, 0LL) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/controller/gcg_monster_controller.cpp",
              "doAttackOp",
              309);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v26,
              (const char (*)[19])"op_ptr is nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v26);
            std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::_List_const_iterator(
              (std::_List_const_iterator<std::shared_ptr<GCGOperationAttack> > *const)&__y,
              (const std::_List_const_iterator<std::shared_ptr<GCGOperationAttack> >::iterator *)(v1 + 64));
            *(std::list<std::shared_ptr<GCGOperationAttack>>::iterator *)(v1 + 64) = std::list<std::shared_ptr<GCGOperationAttack>>::erase(
                                                                                       op_list,
                                                                                       (std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator)__y._M_node);
          }
          else
          {
            v9 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)op_ptr);
            if ( GCGMonsterController::isAttackOpValid(this, card, v9) )
            {
              std::shared_ptr<GCGOperationAttack>::operator=(
                (std::shared_ptr<GCGOperationAttack> *const)(v1 + 128),
                op_ptr);
              std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::_List_const_iterator(
                (std::_List_const_iterator<std::shared_ptr<GCGOperationAttack> > *const)&__y,
                (const std::_List_const_iterator<std::shared_ptr<GCGOperationAttack> >::iterator *)(v1 + 64));
              std::list<std::shared_ptr<GCGOperationAttack>>::erase(
                op_list,
                (std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator)__y._M_node);
              break;
            }
            std::_List_iterator<std::shared_ptr<GCGOperationAttack>>::operator++((std::_List_iterator<std::shared_ptr<GCGOperationAttack> > *const)(v1 + 64));
          }
        }
        if ( std::operator==<GCGOperationAttack>((const std::shared_ptr<GCGOperationAttack> *)(v1 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/controller/gcg_monster_controller.cpp",
            "doAttackOp",
            325);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v26,
            (const char (*)[21])"can't find valid op.");
          common::milog::MiLogStream::~MiLogStream(&v26);
          v6 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/controller/gcg_monster_controller.cpp",
            "doAttackOp",
            328);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v26, (const char (*)[16])"[PVE] do attack");
          common::milog::MiLogStream::~MiLogStream(&v26);
          v10 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          p_skill_id = &v10->skill_id;
          if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(p_skill_id);
          }
          __x = v10->skill_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &skill_id_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__x),
            &__a);
          Guid = GCGCard::getGuid(card);
          GCGMonsterController::sendIntentionChangeMessage(this, Guid, &skill_id_vec, GCG_INTENTION_CHANGE_RM);
          std::vector<unsigned int>::~vector(&skill_id_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          game_mode = this->game_mode_;
          std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationAttack,void>(
            &p_operation_ptr,
            (const std::shared_ptr<GCGOperationAttack> *)(v1 + 128));
          GCGGameMode::process(game_mode, &p_operation_ptr);
          std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
          v6 = 0;
        }
        std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v1 + 128));
      }
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 96));
  result = v6;
  if ( v27 == (char *)v1 )
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

// Line 337: range 000000000DEE5080-000000000DEE5323
int32_t __cdecl GCGMonsterController::doSelectOnStageOp(GCGMonsterController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t ValidCardGuid; // r14d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_card_guid; // rax
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 10 op_ptr:339";
  *(_QWORD *)(v1 + 16) = GCGMonsterController::doSelectOnStageOp;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/controller/gcg_monster_controller.cpp",
    "doSelectOnStageOp",
    338);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v12, (const char (*)[25])"[PVE] do select on stage");
  common::milog::MiLogStream::~MiLogStream(&v12);
  common::tools::perf::make_shared<GCGOperationOnStageSelect>();
  ControllerId = GCGControllerBase::getControllerId(this);
  v5 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v5 = (std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v5->controller_id);
  }
  v5->controller_id = ControllerId;
  ValidCardGuid = GCGMonsterController::findValidCardGuid(this);
  v7 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  p_card_guid = &v7->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_card_guid);
  }
  v7->card_guid = ValidCardGuid;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationOnStageSelect,void>(
    &p_operation_ptr,
    (const std::shared_ptr<GCGOperationOnStageSelect> *)(v1 + 32));
  GCGGameMode::process(game_mode, &p_operation_ptr);
  std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
  std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v1 + 32));
  result = 0;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 348: range 000000000DEE564C-000000000DEE5802
uint32_t __cdecl GCGMonsterController::findValidCardGuid(GCGMonsterController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  GCGControllerValue ControllerId; // eax
  GCGField *Field; // rax
  uint32_t result; // eax
  GCGDuel *Duel; // [rsp+10h] [rbp-B0h]
  GCGCharacterZone *character_zone; // [rsp+28h] [rbp-98h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 card_guid:350";
  *(_QWORD *)(v1 + 16) = GCGMonsterController::findValidCardGuid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  ControllerId = GCGControllerBase::getControllerId(this);
  Field = GCGDuel::getField(Duel, ControllerId);
  character_zone = GCGField::getCharacterZone(Field);
  *(_DWORD *)(v1 + 32) = 0;
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGMonsterController::findValidCardGuid(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGMonsterController::findValidCardGuid::<lambda(GCGCard&)>)__PAIR128__(v1 + 32, (unsigned __int64)this));
  GCGCharacterZone::foreachBackStageCharater(character_zone, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  result = *(_DWORD *)(v1 + 32);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 351: range 000000000DEE5324-000000000DEE564A
ForeachPolicy __cdecl GCGMonsterController::findValidCardGuid(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGMonsterController::findValidCardGuid::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>> *p_operation_map; // r14
  GCGMonsterController *this; // r13
  GCGOperationAttack *v8; // rdx
  uint32_t *card_guid; // r13
  uint32_t Guid; // ecx
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::key_type __x; // [rsp+1Ch] [rbp-94h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>> *__for_range; // [rsp+30h] [rbp-80h]
  std::shared_ptr<GCGOperationAttack> *op_ptr; // [rsp+38h] [rbp-78h]
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:357";
  *(_QWORD *)(v2 + 16) = GCGMonsterController::findValidCardGuid(void)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( !GCGUtils::isCanAttack(card) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    p_operation_map = &__closure->__this->operation_map_;
    __x = GCGCard::getGuid(card);
    *(std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::iterator *)(v2 + 32) = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::find(p_operation_map, &__x);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    __for_end._M_node = (std::__detail::_List_node_base *)std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::end(&__closure->__this->operation_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::_Self *)(v2 + 32),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > >::_Self *)&__for_end) )
    {
      result = FOREACH_CONTINUE;
    }
    else
    {
      __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::list<std::shared_ptr<GCGOperationAttack>> > > *const)(v2 + 32))->second;
      __for_begin._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::begin(__for_range)._M_node;
      __for_end._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::end(__for_range)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(&__for_begin, &__for_end) )
        {
          result = FOREACH_CONTINUE;
          goto LABEL_25;
        }
        op_ptr = std::_List_iterator<std::shared_ptr<GCGOperationAttack>>::operator*(&__for_begin);
        if ( std::operator!=<GCGOperationAttack>(op_ptr, 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          this = __closure->__this;
          v8 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)op_ptr);
          if ( GCGMonsterController::isAttackOpValid(this, card, v8) )
            break;
        }
        std::_List_iterator<std::shared_ptr<GCGOperationAttack>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__card_guid);
      card_guid = __closure->__card_guid;
      Guid = GCGCard::getGuid(card);
      if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(card_guid);
      }
      *card_guid = Guid;
      result = FOREACH_BREAK;
    }
  }
LABEL_25:
  if ( v16 == (char *)v2 )
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

// Line 379: range 000000000DEE5804-000000000DEE5B98
bool __cdecl GCGMonsterController::isAttackOpValid(
        GCGMonsterController *const this,
        GCGCard *card,
        GCGOperationAttack *op)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool isEnergyCostValid; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  uint32_t v13; // eax
  bool result; // al
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+24h] [rbp-11Ch] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+28h] [rbp-118h] BYREF
  uint32_t cost_energy; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-110h] BYREF
  std::string val; // [rsp+50h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 13 skill_ptr:382 80 48 12 cost_map:388";
  *(_QWORD *)(v3 + 16) = GCGMonsterController::isAttackOpValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&op->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&op->skill_id);
  }
  GCGCard::getSkill((GCGCard *const)(v3 + 48), (uint32_t)card);
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_monster_controller.cpp",
      "isAttackOpValid",
      385);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v19,
           (const char (*)[28])"card get skill fail. card: ");
    GCGCard::getDesc[abi:cxx11](&val, card);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" skill_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &op->skill_id);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    isEnergyCostValid = 0;
  }
  else
  {
    v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    GCGSkill::getCost((std::map<data::GCGCostType,unsigned int> *)(v3 + 80), v10);
    __x = GCG_COST_ENERGY;
    if ( std::map<data::GCGCostType,unsigned int>::count(
           (const std::map<data::GCGCostType,unsigned int> *const)(v3 + 80),
           &__x) )
    {
      __k = GCG_COST_ENERGY;
      v11 = std::map<data::GCGCostType,unsigned int>::operator[](
              (std::map<data::GCGCostType,unsigned int> *const)(v3 + 80),
              &__k);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
    }
    else
    {
      v13 = 0;
    }
    cost_energy = v13;
    isEnergyCostValid = GCGUtils::isEnergyCostValid(card, v13);
    std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v3 + 80));
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 48));
  result = isEnergyCostValid;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 395: range 000000000DEE5B9A-000000000DEE5BA7
void __cdecl GCGMonsterController::reportStatisticInfo(GCGMonsterController *const this, uint32_t guid)
{
  ;
};

// Line 446: range 000000000DEE5BA8-000000000DEE5BEB
void __cdecl GCGMonsterController::onGameSettle(GCGMonsterController *const this)
{
  PVEIntentionMgr *PVEIntentionMgr; // rax

  PVEIntentionMgr = GCGMonsterController::getPVEIntentionMgr(this);
  PVEIntentionMgr::reportRestDice(PVEIntentionMgr, &this->dice_map_);
  GCGMonsterController::reportStatisticInfo(this, 0);
};

// Line 456: range 000000000DEE5BEC-000000000DEE5F57
void __fastcall GCGMonsterController::clearCharacterIntention(GCGMonsterController *const this, uint32_t guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::list<std::shared_ptr<GCGOperationAttack>>::size_type v7; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::list<std::shared_ptr<GCGOperationAttack>>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::list<std::shared_ptr<GCGOperationAttack>> *op_list; // [rsp+28h] [rbp-D8h]
  const std::list<std::shared_ptr<GCGOperationAttack>> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::shared_ptr<GCGOperationAttack> *op_ptr; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 guid:455 64 24 19 rm_skill_id_vec:469";
  *(_QWORD *)(v2 + 16) = GCGMonsterController::clearCharacterIntention;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = guid;
  if ( std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::count(
         &this->operation_map_,
         (const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::key_type *)(v2 + 48)) )
  {
    GCGMonsterController::reportStatisticInfo(this, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/controller/gcg_monster_controller.cpp",
      "clearCharacterIntention",
      463);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])off_1BB5E260);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" intention for die");
    common::milog::MiLogStream::~MiLogStream(&v14);
    if ( std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::count(
           &this->operation_map_,
           (const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::key_type *)(v2 + 48)) )
    {
      op_list = std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::at(
                  &this->operation_map_,
                  (const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::key_type *)(v2 + 48));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
      v7 = std::list<std::shared_ptr<GCGOperationAttack>>::size(op_list);
      std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v2 + 64), v7);
      __for_range = op_list;
      __for_begin._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::begin(op_list)._M_node;
      __for_end._M_node = std::list<std::shared_ptr<GCGOperationAttack>>::end(op_list)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        op_ptr = std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator*(&__for_begin);
        if ( !std::operator==<GCGOperationAttack>(op_ptr, 0LL) )
        {
          v8 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)op_ptr);
          std::vector<unsigned int>::emplace_back<unsigned int &>(
            (std::vector<unsigned int> *const)(v2 + 64),
            &v8->skill_id,
            &v8->skill_id);
        }
        std::_List_const_iterator<std::shared_ptr<GCGOperationAttack>>::operator++(&__for_begin);
      }
      GCGMonsterController::sendIntentionChangeMessage(
        this,
        *(_DWORD *)(v2 + 48),
        (const std::vector<unsigned int> *)(v2 + 64),
        GCG_INTENTION_CHANGE_RM);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    }
    std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::erase(
      &this->operation_map_,
      (const std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::key_type *)(v2 + 48));
  }
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
};

// Line 487: range 000000000DEE5F58-000000000DEE626F
void __fastcall GCGMonsterController::sendIntentionChangeMessage(
        const GCGMonsterController *const this,
        uint32_t card_guid,
        const std::vector<unsigned int> *skill_id_vec,
        unsigned int change_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<GCGMsgPVEIntentionChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGGameMode *game_mode; // r14
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  std::map<unsigned int,std::vector<unsigned int>> *change_intention_map; // [rsp+30h] [rbp-D0h]
  std::vector<unsigned int> *cur_intention_vec; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 card_guid:486 64 16 11 msg_ptr:494";
  *(_QWORD *)(v4 + 16) = GCGMonsterController::sendIntentionChangeMessage;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = card_guid;
  if ( change_type == 1 )
  {
    common::tools::perf::make_shared<GCGMsgPVEIntentionChange>();
    v10 = std::__shared_ptr_access<GCGMsgPVEIntentionChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPVEIntentionChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->change_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->change_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<GCGMsgPVEIntentionChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->change_type);
    }
    v10->change_type = GCG_INTENTION_CHANGE_RM;
    change_intention_map = &std::__shared_ptr_access<GCGMsgPVEIntentionChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPVEIntentionChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->change_intention_map;
    cur_intention_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                          change_intention_map,
                          (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 48));
    std::vector<unsigned int>::operator=(cur_intention_vec, skill_id_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgPVEIntentionChange,void>(
      &p_msg,
      (const std::shared_ptr<GCGMsgPVEIntentionChange> *)(v4 + 64));
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
    std::shared_ptr<GCGMsgPVEIntentionChange>::~shared_ptr((std::shared_ptr<GCGMsgPVEIntentionChange> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_monster_controller.cpp",
      "sendIntentionChangeMessage",
      491);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v18, (const char (*)[6])"card:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           v8,
           (const char (*)[34])" intention change type not valid:");
    val = change_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v4 )
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
};
