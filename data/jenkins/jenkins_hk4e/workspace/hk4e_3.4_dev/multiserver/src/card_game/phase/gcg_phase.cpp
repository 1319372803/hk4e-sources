// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase.cpp

// Line 21: range 000000000D78486E-000000000D784A06
void __cdecl GCGPhaseBase::init(GCGPhaseBase *const this)
{
  void (__fastcall **v1)(GCGPhaseBase *const); // rax
  common::milog::MiLogStream *v2; // rbx
  __int64 (__fastcall **v3)(GCGPhaseBase *const); // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
  {
    this->is_init_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v1 = (void (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 8);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 8);
    (*v1)(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase.cpp",
      "init",
      29);
    v2 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v5,
           (const char (*)[22])"already init. phase: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v3 = (__int64 (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 3);
    val = (*v3)(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 34: range 000000000D784A08-000000000D784DE1
void __cdecl GCGPhaseBase::phaseEnter(GCGPhaseBase *const this)
{
  __int64 (__fastcall **v1)(GCGPhaseBase *const); // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  const std::map<proto::GCGControllerValue,unsigned int> *AllowControllerMap; // rax
  void (__fastcall **v7)(GCGPhaseBase *const); // rax
  GCGDuel *v8; // rax
  proto::GCGControllerValue *v9; // rax
  proto::GCGControllerValue *v10; // rdx
  unsigned int val; // [rsp+10h] [rbp-90h] BYREF
  proto::GCGControllerValue controller_id; // [rsp+14h] [rbp-8Ch]
  std::set<proto::GCGControllerValue>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::set<proto::GCGControllerValue>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  GCGDuel *duel; // [rsp+28h] [rbp-78h]
  std::set<proto::GCGControllerValue> *__for_range; // [rsp+30h] [rbp-70h]
  GCGOperationTimer *timer; // [rsp+38h] [rbp-68h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-60h] BYREF
  std::set<proto::GCGControllerValue> v19; // [rsp+60h] [rbp-40h] BYREF

  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/phase/gcg_phase.cpp",
    "phaseEnter",
    35);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (__int64 (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGPhaseBase + 3);
  val = (*v1)(this);
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v18, &val);
  v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" is_repeat:");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_phase_enter_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_phase_enter_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_phase_enter_);
  }
  v4 = common::milog::MiLogStream::operator<<(v3, this->is_phase_enter_);
  v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" allow: ");
  AllowControllerMap = GCGPhaseBase::getAllowControllerMap(this);
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,unsigned int>(v5, AllowControllerMap);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_phase_enter_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_phase_enter_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_phase_enter_);
  }
  if ( !this->is_phase_enter_ )
  {
    this->is_phase_enter_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v7 = (void (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 9);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 9);
    (*v7)(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v8 = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::stopAllOpTimer(v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  GCGPhaseBase::getAllowControllerSet(&v19, this);
  __for_range = &v19;
  __for_begin._M_node = std::set<proto::GCGControllerValue>::begin(&v19)._M_node;
  __for_end._M_node = std::set<proto::GCGControllerValue>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = (proto::GCGControllerValue *)std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator*(&__for_begin);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    controller_id = *v10;
    timer = GCGDuel::getTimer(duel, controller_id);
    GCGOperationTimer::tryStart(timer);
    std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator++(&__for_begin);
  }
  std::set<proto::GCGControllerValue>::~set(&v19);
};

// Line 52: range 000000000D784DE2-000000000D784FD2
void __cdecl GCGPhaseBase::phaseExit(GCGPhaseBase *const this)
{
  __int64 (__fastcall **v1)(GCGPhaseBase *const); // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rcx
  void (__fastcall **v4)(GCGPhaseBase *const); // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/phase/gcg_phase.cpp",
    "phaseExit",
    53);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (__int64 (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGPhaseBase + 3);
  val = (*v1)(this);
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v6, &val);
  v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" is_repeat:");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_phase_exit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_phase_exit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_phase_exit_);
  }
  common::milog::MiLogStream::operator<<(v3, this->is_phase_exit_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_phase_exit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_phase_exit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_phase_exit_);
  }
  if ( !this->is_phase_exit_ )
  {
    this->is_phase_exit_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v4 = (void (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 10);
    (*v4)(this);
  }
};

// Line 62: range 000000000D784FD4-000000000D7856AD
__int64 __fastcall GCGPhaseBase::checkValidOpOrderAndUpdate(GCGPhaseBase *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 (__fastcall **v5)(GCGPhaseBase *const); // rax
  uint32_t cur_global_op_id; // ecx
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  GCGControllerOpInfo *last_op_info; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 phase_value:64 64 4 16 controller_id:61";
  *(_QWORD *)(v2 + 16) = GCGPhaseBase::checkValidOpOrderAndUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = controller_id;
  last_op_info = std::unordered_map<proto::GCGControllerValue,GCGControllerOpInfo>::operator[](
                   &this->cur_phase_last_operation_info_map_,
                   (const std::unordered_map<proto::GCGControllerValue,GCGControllerOpInfo>::key_type *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (__int64 (__fastcall **)(GCGPhaseBase *const))(this->_vptr_GCGPhaseBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGPhaseBase + 3);
  *(_DWORD *)(v2 + 48) = (*v5)(this);
  if ( *(_BYTE *)(((unsigned __int64)&last_op_info->is_first_op >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)last_op_info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&last_op_info->is_first_op >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(&last_op_info->is_first_op);
  }
  if ( last_op_info->is_first_op )
  {
    last_op_info->is_first_op = 0;
    if ( *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)last_op_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&last_op_info->cur_global_op_id);
    }
    cur_global_op_id = last_op_info->cur_global_op_id;
    if ( *(_BYTE *)(((unsigned __int64)last_op_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)last_op_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_op_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(last_op_info);
    }
    last_op_info->last_global_op_id = cur_global_op_id;
    if ( *(_BYTE *)(((unsigned __int64)&last_op_info->last_op_dup >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)last_op_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->last_op_dup >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store4(&last_op_info->last_op_dup);
    }
    last_op_info->last_op_dup = 0;
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase.cpp",
      "checkValidOpOrderAndUpdate",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v24,
           (const char (*)[35])"[CERTAIN] first enter phase_value:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 1LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)last_op_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&last_op_info->cur_global_op_id);
    }
    v9 = last_op_info->cur_global_op_id;
    if ( *(_BYTE *)(((unsigned __int64)last_op_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)last_op_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_op_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(last_op_info);
    }
    if ( v9 == last_op_info->last_global_op_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&last_op_info->last_op_dup >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)last_op_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->last_op_dup >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&last_op_info->last_op_dup);
      }
      ++last_op_info->last_op_dup;
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/phase/gcg_phase.cpp",
        "checkValidOpOrderAndUpdate",
        85);
      v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v24,
              (const char (*)[27])"[CERTAIN DUP] phase_value:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v19,
              (const char (*)[20])" last_global_op_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              &last_op_info->last_global_op_id);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" dup:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &last_op_info->last_op_dup);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase.cpp",
        "checkValidOpOrderAndUpdate",
        77);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v24,
              (const char (*)[23])"[CERTAIN] phase_value:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" cur:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &last_op_info->cur_global_op_id);
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" last:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v14,
              &last_op_info->last_global_op_id);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" dup:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &last_op_info->last_op_dup);
      common::milog::MiLogStream::~MiLogStream(&v24);
      if ( *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)last_op_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&last_op_info->cur_global_op_id);
      }
      v17 = last_op_info->cur_global_op_id;
      if ( *(_BYTE *)(((unsigned __int64)last_op_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)last_op_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_op_info >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_store4(last_op_info);
      }
      last_op_info->last_global_op_id = v17;
      if ( *(_BYTE *)(((unsigned __int64)&last_op_info->last_op_dup >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)last_op_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->last_op_dup >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store4(&last_op_info->last_op_dup);
      }
      last_op_info->last_op_dup = 0;
      result = 1LL;
    }
  }
  if ( v25 == (char *)v2 )
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

// Line 92: range 000000000D7856AE-000000000D785D4F
int32_t __cdecl GCGPhaseBase::tryHandlerOpration(GCGPhaseBase *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(GCGPhaseBase *const, std::shared_ptr<GCGOperationBase> *); // r14
  uint32_t OperationSeq; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  signed int ActionMgr; // eax
  std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(GCGPhaseBase *const, std::shared_ptr<GCGOperationBase> *); // r14
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  int32_t ret; // [rsp+14h] [rbp-DCh]
  GCGControllerOpInfo *last_op_info; // [rsp+18h] [rbp-D8h]
  GCGDuel *duel; // [rsp+20h] [rbp-D0h]
  GCGOperationTimer *timer; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<GCGOperationBase> v22; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 op_controller_id:98 64 16 14 action_ptr:126";
  *(_QWORD *)(v2 + 16) = GCGPhaseBase::tryHandlerOpration;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    result = -1;
    goto LABEL_38;
  }
  v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->controller_id);
  }
  *(_DWORD *)(v2 + 48) = v6->controller_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 7);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGPhaseBase + 7);
  v8 = *(__int64 (__fastcall **)(GCGPhaseBase *const, std::shared_ptr<GCGOperationBase> *))v7;
  std::shared_ptr<GCGOperationBase>::shared_ptr(&v22, p_operation_ptr);
  ret = v8(this, &v22);
  std::shared_ptr<GCGOperationBase>::~shared_ptr(&v22);
  if ( !ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::increOperationSeq(this->game_mode_);
    last_op_info = std::unordered_map<proto::GCGControllerValue,GCGControllerOpInfo>::operator[](
                     &this->cur_phase_last_operation_info_map_,
                     (const std::unordered_map<proto::GCGControllerValue,GCGControllerOpInfo>::key_type *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    OperationSeq = GCGGameMode::getOperationSeq(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)last_op_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_op_info->cur_global_op_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store4(&last_op_info->cur_global_op_id);
    }
    last_op_info->cur_global_op_id = OperationSeq;
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase.cpp",
      "tryHandlerOpration",
      106);
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v23, (const char (*)[13])"[CERTAIN] c:");
    val = *(_DWORD *)(v2 + 48);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" value:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &last_op_info->cur_global_op_id);
    common::milog::MiLogStream::~MiLogStream(&v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( !GCGDuel::isControllerIdValid(duel, *(GCGControllerValue *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase.cpp",
        "tryHandlerOpration",
        111);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v23,
        (const char (*)[24])"controller id invalid. ");
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = ret;
      goto LABEL_38;
    }
    timer = GCGDuel::getTimer(duel, (GCGControllerValue)*(_DWORD *)(v2 + 48));
    if ( GCGOperationTimer::isActive(timer) )
      GCGOperationTimer::tryStop(timer, 1);
    if ( GCGPhaseBase::isAllowController(this, *(GCGControllerValue *)(v2 + 48)) )
      GCGOperationTimer::tryStart(timer);
    if ( !GCGPhaseBase::isAllowControllerAllDone(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
      GCGActionMgr::createAction<GCGActionSendMessage>((GCGActionMgr *const)(v2 + 64), (GCGControllerValue)ActionMgr);
      if ( std::operator!=<GCGActionSendMessage>((const std::shared_ptr<GCGActionSendMessage> *)(v2 + 64), 0LL) )
      {
        common::tools::perf::make_shared<GCGMsgPhaseContinue>();
        v14 = std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::shared_ptr<GCGMessage>::operator=<GCGMsgPhaseContinue>(
          &v14->msg_ptr,
          (std::shared_ptr<GCGMsgPhaseContinue> *)&v22);
        std::shared_ptr<GCGMsgPhaseContinue>::~shared_ptr((std::shared_ptr<GCGMsgPhaseContinue> *const)&v22);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v15 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
        v16 = *(void (__fastcall **)(GCGPhaseBase *const, std::shared_ptr<GCGOperationBase> *))v15;
        std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionSendMessage,void>(
          (std::shared_ptr<GCGActionBase> *const)&v22,
          (const std::shared_ptr<GCGActionSendMessage> *)(v2 + 64));
        v16(this, &v22);
        std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)&v22);
      }
      std::shared_ptr<GCGActionSendMessage>::~shared_ptr((std::shared_ptr<GCGActionSendMessage> *const)(v2 + 64));
    }
  }
  result = ret;
LABEL_38:
  if ( v24 == (char *)v2 )
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

// Line 138: range 000000000D785D50-000000000D785ECC
int32_t __cdecl GCGPhaseBase::handleOperation(GCGPhaseBase *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase.cpp",
      "handleOperation",
      141);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v7,
      (const char (*)[35])"[GCG_RET] operation_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/phase/gcg_phase.cpp",
      "handleOperation",
      144);
    v3 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v7,
           (const char (*)[30])"[GCG_RET] op type not match: ");
    v4 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    v5 = (unsigned __int64)(v4->_vptr_GCGOperationBase + 2);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4->_vptr_GCGOperationBase + 2);
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 12004;
  }
};

// Line 149: range 000000000D785ECE-000000000D785EE1
bool __cdecl GCGPhaseBase::isSpecialOperation(GCGPhaseBase *const this, GCGOperationType op)
{
  return op == GCG_OP_SURRENDER;
};

// Line 155: range 000000000D785EE2-000000000D786079
bool __fastcall GCGPhaseBase::isAllowController(GCGPhaseBase *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 controller_id:154 64 8 23 controller_map_iter:156";
  *(_QWORD *)(v2 + 16) = GCGPhaseBase::isAllowController;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = controller_id;
  *(std::map<proto::GCGControllerValue,unsigned int>::iterator *)(v2 + 64) = std::map<proto::GCGControllerValue,unsigned int>::find(
                                                                               &this->allow_controller_map_,
                                                                               (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second != 0;
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

// Line 166: range 000000000D78607A-000000000D78615E
bool __cdecl GCGPhaseBase::isAllowControllerAllDone(GCGPhaseBase *const this)
{
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *v1; // rax
  std::map<proto::GCGControllerValue,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const proto::GCGControllerValue,unsigned int> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,unsigned int> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *count; // [rsp+38h] [rbp-8h]

  __for_range = &this->allow_controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(&this->allow_controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,proto::GCGControllerValue const,unsigned int>(__in);
    v1 = std::get<1ul,proto::GCGControllerValue const,unsigned int>(__in);
    count = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    if ( *count )
      return 0;
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 178: range 000000000D786160-000000000D78627C
GCGControllerValue __cdecl GCGPhaseBase::getAnyAllowControllerId(GCGPhaseBase *const this)
{
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *v1; // rax
  std::map<proto::GCGControllerValue,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const proto::GCGControllerValue,unsigned int> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,unsigned int> >::type *controller_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *count; // [rsp+38h] [rbp-8h]

  __for_range = &this->allow_controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(&this->allow_controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map_)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return 0;
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,unsigned int>(__in);
    v1 = std::get<1ul,proto::GCGControllerValue const,unsigned int>(__in);
    count = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    if ( *count )
      break;
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(controller_id);
  }
  return *controller_id;
};

// Line 190: range 000000000D78627E-000000000D7863A0
std::set<proto::GCGControllerValue> *__cdecl GCGPhaseBase::getAllowControllerSet(
        std::set<proto::GCGControllerValue> *retstr,
        GCGPhaseBase *const this)
{
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *v2; // rax
  std::map<proto::GCGControllerValue,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+20h] [rbp-30h]
  std::pair<const proto::GCGControllerValue,unsigned int> *__in; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,unsigned int> >::type *controller_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *count; // [rsp+38h] [rbp-18h]

  std::set<proto::GCGControllerValue>::set(retstr);
  __for_range = &this->allow_controller_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(&this->allow_controller_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,unsigned int>(__in);
    v2 = std::get<1ul,proto::GCGControllerValue const,unsigned int>(__in);
    count = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    if ( *count )
      std::set<proto::GCGControllerValue>::insert(retstr, controller_id);
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 203: range 000000000D7863A2-000000000D78659D
void __fastcall GCGPhaseBase::addAllowController(
        GCGPhaseBase *const this,
        GCGControllerValue controller_id,
        uint32_t count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
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
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:202";
  *(_QWORD *)(v3 + 16) = GCGPhaseBase::addAllowController;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( !GCGDuel::isControllerIdValid(Duel, *(GCGControllerValue *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase.cpp",
      "addAllowController",
      206);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v10,
           (const char (*)[24])"invalid controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      (const proto::GCGControllerValue *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v8 = (unsigned __int64)std::map<proto::GCGControllerValue,unsigned int>::operator[](
                             &this->allow_controller_map_,
                             (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v3 + 32));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load4(v8);
    *(_DWORD *)v8 += count;
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
};

// Line 213: range 000000000D78659E-000000000D786859
void __fastcall GCGPhaseBase::markControllerDone(GCGPhaseBase *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v11; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 controller_id:212 64 8 8 iter:214";
  *(_QWORD *)(v2 + 16) = GCGPhaseBase::markControllerDone;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = controller_id;
  *(std::map<proto::GCGControllerValue,unsigned int>::iterator *)(v2 + 64) = std::map<proto::GCGControllerValue,unsigned int>::find(
                                                                               &this->allow_controller_map_,
                                                                               (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( v5->second )
    {
      v7 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) )
      {
        v7 = (std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer)__asan_report_load4(&v7->second);
      }
      --v7->second;
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase.cpp",
        "markControllerDone",
        220);
      v8 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(&v13, (const char (*)[4])"c: ");
      v9 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
             v8,
             (const proto::GCGControllerValue *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" last count: ");
      v11 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v11->second);
      common::milog::MiLogStream::~MiLogStream(&v13);
      GCGPhaseBase::notifyControllerDone(this);
    }
  }
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
};

// Line 227: range 000000000D78685A-000000000D786A50
void __fastcall GCGPhaseBase::markControllerAllDone(GCGPhaseBase *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v7; // rdx
  unsigned int *v8; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 controller_id:226 64 8 8 iter:228";
  *(_QWORD *)(v2 + 16) = GCGPhaseBase::markControllerAllDone;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = controller_id;
  *(std::map<proto::GCGControllerValue,unsigned int>::iterator *)(v2 + 64) = std::map<proto::GCGControllerValue,unsigned int>::find(
                                                                               &this->allow_controller_map_,
                                                                               (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( v5->second )
    {
      v7 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
      v8 = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v8);
      }
      v7->second = 0;
      GCGPhaseBase::notifyControllerDone(this);
    }
  }
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

// Line 239: range 000000000D786A52-000000000D786BDE
void __cdecl GCGPhaseBase::notifyControllerDone(GCGPhaseBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<GCGMsgUpdateController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-80h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 message_ptr:240";
  *(_QWORD *)(v1 + 16) = GCGPhaseBase::notifyControllerDone;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgUpdateController>();
  v4 = std::__shared_ptr_access<GCGMsgUpdateController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgUpdateController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  std::map<proto::GCGControllerValue,unsigned int>::operator=(&v4->allow_controller_map, &this->allow_controller_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgUpdateController,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgUpdateController> *)(v1 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgUpdateController>::~shared_ptr((std::shared_ptr<GCGMsgUpdateController> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 246: range 000000000D786BE0-000000000D786CFE
int32_t __cdecl GCGPhaseBase::enqueueAction(GCGPhaseBase *const this, GCGActionBasePtr *p_action_ptr)
{
  GCGActionQueue *ActionQueue; // rbx
  std::shared_ptr<GCGActionBase> v4; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/phase/gcg_phase.cpp",
      "enqueueAction",
      249);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v5,
      (const char (*)[27])"[PREVIEW] should not enter");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    ActionQueue = GCGPhaseBase::getActionQueue(this);
    std::shared_ptr<GCGActionBase>::shared_ptr(&v4, p_action_ptr);
    GCGActionQueue::enqueueAction((GCGActionQueue_0 *const)ActionQueue, &v4);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v4);
    return 0;
  }
};

// Line 257: range 000000000D786D00-000000000D786E10
GCGActionBasePtr __cdecl GCGPhaseBase::dequeueAction(GCGPhaseBase *const this)
{
  GCGPhaseBase *v1; // rsi
  GCGActionBasePtr result; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&v1->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v1->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(v1->game_mode_) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/phase/gcg_phase.cpp",
      "dequeueAction",
      260);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v3,
      (const char (*)[27])"[PREVIEW] should not enter");
    common::milog::MiLogStream::~MiLogStream(&v3);
    std::shared_ptr<GCGActionBase>::shared_ptr((std::shared_ptr<GCGActionBase> *const)this, 0LL);
  }
  else
  {
    GCGPhaseBase::getActionQueue(v1);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v1);
    result = GCGActionQueue::dequeueAction((GCGActionQueue_0 *const)this);
  }
  result._M_ptr = (std::__shared_ptr<GCGActionBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 267: range 000000000D786E12-000000000D786EDD
void __cdecl GCGPhaseBase::clearAllAction(GCGPhaseBase *const this)
{
  GCGActionQueue *ActionQueue; // rax
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/phase/gcg_phase.cpp",
      "clearAllAction",
      270);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v2,
      (const char (*)[27])"[PREVIEW] should not enter");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
  else
  {
    ActionQueue = GCGPhaseBase::getActionQueue(this);
    GCGActionQueue::clear(ActionQueue);
  }
};
