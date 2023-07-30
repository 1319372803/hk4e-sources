// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/logic/action_plan.cpp

// Line 23: range 000000000E1008B6-000000000E100EB4
int32_t __cdecl BT::ActionPlanCurCharacterAttack::doPlan(
        BT::ActionPlanCurCharacterAttack *const this,
        BT::ActionPlanMgr *plan_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GCGDuel *Duel; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Guid; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t skill_id; // r14d
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_skill_id; // rax
  std::set<unsigned int> *p_cost_dice_set; // r14
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-100h] BYREF
  proto::GCGControllerValue cur_controller_id; // [rsp+14h] [rbp-FCh]
  GCGGameMode *game_mode; // [rsp+18h] [rbp-F8h]
  GCGField *field; // [rsp+20h] [rbp-F0h]
  const std::shared_ptr<GCGCard> *on_stage_card_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<GCGCard> v33; // [rsp+30h] [rbp-E0h] BYREF
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-C0h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_choose_dice_map; // [rsp+70h] [rbp-A0h] BYREF
  char v37[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 operation_ptr:38";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanCurCharacterAttack::doPlan;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  cur_controller_id = BT::ActionPlanMgr::getControllerId(plan_mgr);
  game_mode = BT::ActionPlanMgr::getGameMode(plan_mgr);
  Duel = GCGGameMode::getDuel(game_mode);
  field = GCGDuel::getField(Duel, cur_controller_id);
  GCGField::getCharacterZone(field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)&v33);
  on_stage_card_ptr = &v33;
  if ( std::operator==<GCGCard>(&v33, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/logic/action_plan.cpp",
      "doPlan",
      30);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v35,
      (const char (*)[29])"on_stage_card_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)on_stage_card_ptr);
    Guid = GCGCard::getGuid(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_character_guid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_character_guid_);
    }
    if ( Guid == this->cur_character_guid_ )
    {
      common::tools::perf::make_shared<GCGOperationAttack>();
      v13 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v13 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v13->controller_id);
      }
      v13->controller_id = cur_controller_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->skill_id_);
      }
      skill_id = this->skill_id_;
      v15 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_skill_id = &v15->skill_id;
      if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_skill_id);
      }
      v15->skill_id = skill_id;
      p_cost_dice_set = &std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->cost_dice_set;
      std::map<proto::GCGDiceSideType,unsigned int>::map(&p_choose_dice_map, &this->choose_dice_map_);
      DiceZone = GCGField::getDiceZone(field);
      DiceVec = GCGDiceZone::getDiceVec(DiceZone);
      BT::ActionPlanMgr::calSelectDiceSet(plan_mgr, DiceVec, &p_choose_dice_map, p_cost_dice_set);
      std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_choose_dice_map);
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan.cpp",
        "doPlan",
        42);
      v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v35,
              (const char (*)[27])"doPlan cur_character_guid:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->cur_character_guid_);
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])", skill_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->skill_id_);
      v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])", cost_dice_set:");
      v25 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::operator<<<unsigned int>(v24, &v25->cost_dice_set);
      common::milog::MiLogStream::~MiLogStream(&v35);
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationAttack,void>(
        &p_operation_ptr,
        (const std::shared_ptr<GCGOperationAttack> *)(v2 + 32));
      v6 = GCGGameMode::process(game_mode, &p_operation_ptr);
      std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
      std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/logic/action_plan.cpp",
        "doPlan",
        35);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v35,
             (const char (*)[21])"cur_character_guid_:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_character_guid_);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])", onstage guid:");
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)on_stage_card_ptr);
      val = GCGCard::getGuid(v12);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v6 = -1;
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr(&v33);
  result = v6;
  if ( v37 == (char *)v2 )
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

// Line 47: range 000000000E100EB6-000000000E101148
std::string *__cdecl BT::ActionPlanCurCharacterAttack::getDesc[abi:cxx11](
        std::string *retstr,
        const BT::ActionPlanCurCharacterAttack *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 oss:48";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanCurCharacterAttack::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[ActionPlanCurCharacterAttack priority: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->priority_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->priority_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " ,character_guid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_character_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_character_guid_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->cur_character_guid_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " ,skill_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id_);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->skill_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
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
  if ( v12 == (char *)v2 )
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

// Line 57: range 000000000E10114A-000000000E101648
int32_t __cdecl BT::ActionPlanReboot::doPlan(BT::ActionPlanReboot *const this, BT::ActionPlanMgr *plan_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GCGDuel *Duel; // rax
  GCGCardZone *HandZone; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::set<unsigned int> *p_select_dice_set; // r14
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  int32_t result; // eax
  GCGControllerValue cur_controller_id; // [rsp+1Ch] [rbp-E4h]
  GCGGameMode *game_mode; // [rsp+20h] [rbp-E0h]
  GCGField *field; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-C0h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_choose_dice_map; // [rsp+60h] [rbp-A0h] BYREF
  char v27[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 operation_ptr:66";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanReboot::doPlan;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  cur_controller_id = BT::ActionPlanMgr::getControllerId(plan_mgr);
  game_mode = BT::ActionPlanMgr::getGameMode(plan_mgr);
  Duel = GCGGameMode::getDuel(game_mode);
  field = GCGDuel::getField(Duel, cur_controller_id);
  HandZone = GCGField::getHandZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hand_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hand_card_id_);
  }
  if ( !GCGCardZone::isHasCard(HandZone, this->hand_card_id_) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/logic/action_plan.cpp",
      "doPlan",
      63);
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v25, (const char (*)[15])"hand_card_id_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->hand_card_id_);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" not exist");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v9 = -1;
  }
  else
  {
    common::tools::perf::make_shared<GCGOperationReboot>();
    v10 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
    }
    v10->controller_id = cur_controller_id;
    v11 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::set<unsigned int>::insert(&v11->cost_card_set, &this->hand_card_id_);
    if ( !std::map<proto::GCGDiceSideType,unsigned int>::empty(&this->choose_dice_map_)
      && (p_select_dice_set = &std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->select_dice_set,
          std::map<proto::GCGDiceSideType,unsigned int>::map(&p_choose_dice_map, &this->choose_dice_map_),
          DiceZone = GCGField::getDiceZone(field),
          DiceVec = GCGDiceZone::getDiceVec(DiceZone),
          LOBYTE(p_select_dice_set) = BT::ActionPlanMgr::calSelectDiceSet(
                                        plan_mgr,
                                        DiceVec,
                                        &p_choose_dice_map,
                                        p_select_dice_set) != 0,
          std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_choose_dice_map),
          (_BYTE)p_select_dice_set) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/logic/action_plan.cpp",
        "doPlan",
        74);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        &v25,
        (const char (*)[53])"ActionPlanReboot calSelectDiceSet choose dice failed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      v9 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan.cpp",
        "doPlan",
        78);
      v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v25,
              (const char (*)[21])"doPlan hand_card_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->hand_card_id_);
      v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v16,
              (const char (*)[19])", choose_dice_set:");
      v18 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::operator<<<unsigned int>(v17, &v18->select_dice_set);
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationReboot,void>(
        &p_operation_ptr,
        (const std::shared_ptr<GCGOperationReboot> *)(v2 + 32));
      v9 = GCGGameMode::process(game_mode, &p_operation_ptr);
      std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
    }
    std::shared_ptr<GCGOperationReboot>::~shared_ptr((std::shared_ptr<GCGOperationReboot> *const)(v2 + 32));
  }
  result = v9;
  if ( v27 == (char *)v2 )
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

// Line 83: range 000000000E10164A-000000000E10187D
std::string *__cdecl BT::ActionPlanReboot::getDesc[abi:cxx11](
        std::string *retstr,
        const BT::ActionPlanReboot *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 oss:84";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanReboot::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[ActionPlanReboot priority: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->priority_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->priority_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " ,hand_card: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hand_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hand_card_id_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->hand_card_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "]");
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
  if ( v10 == (char *)v2 )
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

// Line 92: range 000000000E10194E-000000000E102062
int32_t __cdecl BT::ActionPlanChangeCharacter::doPlan(
        BT::ActionPlanChangeCharacter *const this,
        BT::ActionPlanMgr *plan_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t change_to_character_guid; // r14d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t *p_card_guid; // rax
  std::set<unsigned int> *p_select_dice_set; // r14
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  GCGCharacterZone *CharacterZone; // [rsp+8h] [rbp-128h]
  GCGControllerValue cur_controller_id; // [rsp+2Ch] [rbp-104h]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-100h]
  GCGField *field; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+40h] [rbp-F0h] BYREF
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+50h] [rbp-E0h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_choose_dice_map; // [rsp+70h] [rbp-C0h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-90h] BYREF
  BT::ActionPlanChangeCharacter::doPlan::<lambda(GCGCard&)> v30; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 28 is_valid_change_character:96 64 16 17 operation_ptr:111";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanChangeCharacter::doPlan;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  cur_controller_id = BT::ActionPlanMgr::getControllerId(plan_mgr);
  game_mode = BT::ActionPlanMgr::getGameMode(plan_mgr);
  Duel = GCGGameMode::getDuel(game_mode);
  field = GCGDuel::getField(Duel, cur_controller_id);
  *(_BYTE *)(v2 + 48) = 0;
  CharacterZone = GCGField::getCharacterZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->change_to_character_guid_);
  }
  v30.__is_valid_change_character = (bool *)(v2 + 48);
  v30.__change_to_guid = this->change_to_character_guid_;
  std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanChangeCharacter::doPlan(BT::ActionPlanMgr &)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    v30);
  GCGCharacterZone::foreachAliveBackStageCharater(CharacterZone, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  if ( *(_BYTE *)(v2 + 48) != 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/logic/action_plan.cpp",
      "doPlan",
      108);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[53])"ActionPlanChangeCharacter change_to_character_guid_:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->change_to_character_guid_);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" not valid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v8 = -1;
  }
  else
  {
    common::tools::perf::make_shared<GCGOperationOnStageSelect>();
    v9 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->controller_id);
    }
    v9->controller_id = cur_controller_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->change_to_character_guid_);
    }
    change_to_character_guid = this->change_to_character_guid_;
    v11 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_card_guid = &v11->card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_card_guid);
    }
    v11->card_guid = change_to_character_guid;
    if ( !std::map<proto::GCGDiceSideType,unsigned int>::empty(&this->choose_dice_map_)
      && (p_select_dice_set = &std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->select_dice_set,
          std::map<proto::GCGDiceSideType,unsigned int>::map(&p_choose_dice_map, &this->choose_dice_map_),
          DiceZone = GCGField::getDiceZone(field),
          DiceVec = GCGDiceZone::getDiceVec(DiceZone),
          LOBYTE(p_select_dice_set) = BT::ActionPlanMgr::calSelectDiceSet(
                                        plan_mgr,
                                        DiceVec,
                                        &p_choose_dice_map,
                                        p_select_dice_set) != 0,
          std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_choose_dice_map),
          (_BYTE)p_select_dice_set) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/logic/action_plan.cpp",
        "doPlan",
        118);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        (common::milog::MiLogStream *const)&p_func,
        (const char (*)[62])"ActionPlanChangeCharacter calSelectDiceSet choose dice failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_normal_change_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_normal_change_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_normal_change_);
      }
      if ( this->is_normal_change_ )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan.cpp",
          "doPlan",
          124);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[30])"doPlan normal character_guid:");
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan.cpp",
          "doPlan",
          128);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[30])"doPlan attack character_guid:");
      }
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              &this->change_to_character_guid_);
      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v17,
              (const char (*)[19])", select_dice_set:");
      v19 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::milog::MiLogStream::operator<<<unsigned int>(v18, &v19->select_dice_set);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationOnStageSelect,void>(
        &p_operation_ptr,
        (const std::shared_ptr<GCGOperationOnStageSelect> *)(v2 + 64));
      v8 = GCGGameMode::process(game_mode, &p_operation_ptr);
      std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
    }
    std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v2 + 64));
  }
  result = v8;
  if ( v29 == (char *)v2 )
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

// Line 97: range 000000000E10187E-000000000E10194C
ForeachPolicy __cdecl BT::ActionPlanChangeCharacter::doPlan(BT::ActionPlanMgr &)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionPlanChangeCharacter::doPlan::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  bool *is_valid_change_character; // rdx

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Guid != __closure->__change_to_guid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_valid_change_character >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_valid_change_character);
  is_valid_change_character = __closure->__is_valid_change_character;
  if ( *(_BYTE *)(((unsigned __int64)is_valid_change_character >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_valid_change_character & 7) >= *(_BYTE *)(((unsigned __int64)is_valid_change_character >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_valid_change_character);
  }
  *is_valid_change_character = 1;
  return 1;
};

// Line 134: range 000000000E102064-000000000E1022F7
std::string *__cdecl BT::ActionPlanChangeCharacter::getDesc[abi:cxx11](
        std::string *retstr,
        const BT::ActionPlanChangeCharacter *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 oss:135";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanChangeCharacter::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[ActionPlanChangeCharacter priority: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->priority_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->priority_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " ,character_guid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->change_to_character_guid_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->change_to_character_guid_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " ,is_normal: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_normal_change_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_normal_change_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_normal_change_);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->is_normal_change_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
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
  if ( v12 == (char *)v2 )
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

// Line 144: range 000000000E1022F8-000000000E10279A
int32_t __cdecl BT::ActionPlanPlayCard::doPlan(BT::ActionPlanPlayCard *const this, BT::ActionPlanMgr *plan_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t play_card_guid; // r14d
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_card_guid; // rax
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::set<unsigned int> *p_cost_dice_set; // r14
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rsi
  int32_t v14; // r14d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  GCGControllerValue cur_controller_id; // [rsp+1Ch] [rbp-E4h]
  GCGGameMode *game_mode; // [rsp+20h] [rbp-E0h]
  GCGField *field; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-C0h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_choose_dice_map; // [rsp+60h] [rbp-A0h] BYREF
  char v29[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 operation_ptr:149";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanPlayCard::doPlan;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  cur_controller_id = BT::ActionPlanMgr::getControllerId(plan_mgr);
  game_mode = BT::ActionPlanMgr::getGameMode(plan_mgr);
  Duel = GCGGameMode::getDuel(game_mode);
  field = GCGDuel::getField(Duel, cur_controller_id);
  common::tools::perf::make_shared<GCGOperationPlayCard>();
  v6 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->controller_id);
  }
  v6->controller_id = cur_controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_card_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_card_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_card_guid_);
  }
  play_card_guid = this->play_card_guid_;
  v8 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  p_card_guid = &v8->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_card_guid);
  }
  v8->card_guid = play_card_guid;
  v10 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::vector<unsigned int>::operator=(&v10->target_param_vec, &this->target_param_vec_);
  if ( !std::map<proto::GCGDiceSideType,unsigned int>::empty(&this->choose_dice_map_)
    && (p_cost_dice_set = &std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->cost_dice_set,
        std::map<proto::GCGDiceSideType,unsigned int>::map(&p_choose_dice_map, &this->choose_dice_map_),
        DiceZone = GCGField::getDiceZone(field),
        DiceVec = GCGDiceZone::getDiceVec(DiceZone),
        LOBYTE(p_cost_dice_set) = BT::ActionPlanMgr::calSelectDiceSet(
                                    plan_mgr,
                                    DiceVec,
                                    &p_choose_dice_map,
                                    p_cost_dice_set) != 0,
        std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_choose_dice_map),
        (_BYTE)p_cost_dice_set) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/logic/action_plan.cpp",
      "doPlan",
      157);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v27,
      (const char (*)[55])"ActionPlanPlayCard calSelectDiceSet choose dice failed");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v14 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/logic/action_plan.cpp",
      "doPlan",
      161);
    v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"doPlan card guid:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->play_card_guid_);
    v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])", select_dice_set:");
    v18 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v19 = common::milog::MiLogStream::operator<<<unsigned int>(v17, &v18->cost_dice_set);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])", target param:");
    common::milog::MiLogStream::operator<<<unsigned int>(v20, &this->target_param_vec_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationPlayCard,void>(
      &p_operation_ptr,
      (const std::shared_ptr<GCGOperationPlayCard> *)(v2 + 32));
    v14 = GCGGameMode::process(game_mode, &p_operation_ptr);
    std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
  }
  std::shared_ptr<GCGOperationPlayCard>::~shared_ptr((std::shared_ptr<GCGOperationPlayCard> *const)(v2 + 32));
  result = v14;
  if ( v29 == (char *)v2 )
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

// Line 166: range 000000000E10279C-000000000E1029F4
std::string *__cdecl BT::ActionPlanPlayCard::getDesc[abi:cxx11](
        std::string *retstr,
        const BT::ActionPlanPlayCard *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 oss:167";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanPlayCard::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[ActionPlanPlayCard priority: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->priority_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->priority_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " ,play_card: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->play_card_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_card_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_card_guid_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->play_card_guid_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " ,target_param: ");
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(
          v9,
          &this->target_param_vec_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
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
  if ( v12 == (char *)v2 )
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
