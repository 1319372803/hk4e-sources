// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/duel/gcg_duel.cpp

// Line 17: range 000000000DEE9E8A-000000000DEE9EA8
int32_t __cdecl GCGSkillTriggerVarMgr::init(GCGSkillTriggerVarMgr *const this)
{
  GCGSkillTriggerVarMgr::resetSkillTriggerVars(this);
  return 0;
};

// Line 23: range 000000000DEE9EAA-000000000DEE9FDF
void __cdecl GCGSkillTriggerVarMgr::resetSkillTriggerVars(GCGSkillTriggerVarMgr *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->kill_character_count_ = 0;
  std::set<unsigned int>::clear(&this->damage_element_type_set_);
  std::map<unsigned int,std::set<unsigned int>>::clear(&this->character_being_hurt_damage_element_type_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reaction_count_);
  }
  this->reaction_count_ = 0;
  std::map<unsigned int,unsigned int>::clear(&this->reaction_count_map_);
  std::map<proto::GCGControllerValue,unsigned int>::clear(&this->before_operation_controller_dice_num_map_);
  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "resetSkillTriggerVars",
    30);
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
    &v1,
    (const char (*)[32])"resetSkillTriggerVars clear all");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 34: range 000000000DEE9FE0-000000000DEEA0AC
void __cdecl GCGSkillTriggerVarMgr::addKillCharacterCount(GCGSkillTriggerVarMgr *const this)
{
  common::milog::MiLogStream *v1; // rdx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  ++this->kill_character_count_;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "addKillCharacterCount",
    36);
  v1 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v2,
         (const char (*)[45])"addKillCharacterCount kill_character_count_:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->kill_character_count_);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 40: range 000000000DEEA0AE-000000000DEEA0F0
uint32_t __cdecl GCGSkillTriggerVarMgr::getKillCharacterCount(const GCGSkillTriggerVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->kill_character_count_;
};

// Line 45: range 000000000DEEA0F2-000000000DEEA24E
void __cdecl GCGSkillTriggerVarMgr::recordDamageElementType(
        GCGSkillTriggerVarMgr *const this,
        GCGEffectElementType damage_element_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 27 damage_element_type_uint:46";
  *(_QWORD *)(v2 + 16) = GCGSkillTriggerVarMgr::recordDamageElementType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = damage_element_type;
  std::set<unsigned int>::emplace<unsigned int &>(
    &this->damage_element_type_set_,
    (unsigned int *)(v2 + 32),
    (unsigned int *)&this->damage_element_type_set_);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "recordDamageElementType",
    48);
  v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v6,
         (const char (*)[45])"recordDamageElementType damage_element_type:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 52: range 000000000DEEA250-000000000DEEA261
const std::set<unsigned int> *__cdecl GCGSkillTriggerVarMgr::getDamageElementTypeSet(
        const GCGSkillTriggerVarMgr *const this)
{
  return &this->damage_element_type_set_;
};

// Line 57: range 000000000DEEA262-000000000DEEA437
void __fastcall GCGSkillTriggerVarMgr::recordCharacterBeingHurtDamageElementType(
        GCGSkillTriggerVarMgr *const this,
        uint32_t card_guid,
        GCGEffectElementType damage_element_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 27 damage_element_type_uint:58 64 4 12 card_guid:56";
  *(_QWORD *)(v3 + 16) = GCGSkillTriggerVarMgr::recordCharacterBeingHurtDamageElementType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = card_guid;
  *(_DWORD *)(v3 + 48) = damage_element_type;
  v6 = std::map<unsigned int,std::set<unsigned int>>::operator[](
         &this->character_being_hurt_damage_element_type_set_,
         (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 64));
  std::set<unsigned int>::emplace<unsigned int &>(v6, (unsigned int *)(v3 + 48), (unsigned int *)v6);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "recordCharacterBeingHurtDamageElementType",
    60);
  v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
         &v11,
         (const char (*)[53])"recordCharacterBeingHurtDamageElementType card_guid:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
  v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])" damage_element_type:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v11);
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
};

// Line 64: range 000000000DEEA438-000000000DEEA5E7
const std::set<unsigned int> *__fastcall GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(
        const GCGSkillTriggerVarMgr *const this,
        uint32_t card_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::set<unsigned int> *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 card_guid:63 64 8 7 iter:66";
  *(_QWORD *)(v2 + 16) = GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = card_guid;
  if ( !(_BYTE)`guard variable for'GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(unsigned int)::empty_set) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)&GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(unsigned int)::empty_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      (void *)&GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(unsigned int)const::empty_set,
      &_dso_handle);
  }
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  &this->character_being_hurt_damage_element_type_set_,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::set<unsigned int>>::end(&this->character_being_hurt_damage_element_type_set_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
  }
  else
  {
    result = &GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(unsigned int)const::empty_set;
  }
  if ( v7 == (char *)v2 )
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

// Line 75: range 000000000DEEA5E8-000000000DEEA83E
void __fastcall GCGSkillTriggerVarMgr::recordReaction(GCGSkillTriggerVarMgr *const this, uint32_t reaction_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 reaction_id:74";
  *(_QWORD *)(v2 + 16) = GCGSkillTriggerVarMgr::recordReaction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = reaction_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reaction_count_);
  }
  ++this->reaction_count_;
  v5 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                           &this->reaction_count_map_,
                           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load4(v5);
  ++*(_DWORD *)v5;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "recordReaction",
    78);
  v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v12,
         (const char (*)[28])"recordReaction reaction_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])",reaction_count_:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->reaction_count_);
  v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v9,
          (const char (*)[23])"target_reaction_count_");
  v11 = std::map<unsigned int,unsigned int>::operator[](
          &this->reaction_count_map_,
          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, v11);
  common::milog::MiLogStream::~MiLogStream(&v12);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 82: range 000000000DEEA840-000000000DEEA887
uint32_t __cdecl GCGSkillTriggerVarMgr::getReactionCount(const GCGSkillTriggerVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reaction_count_);
  }
  return this->reaction_count_;
};

// Line 87: range 000000000DEEA888-000000000DEEAA1C
std::set<unsigned int> *__cdecl GCGSkillTriggerVarMgr::getReactionSet(
        std::set<unsigned int> *retstr,
        const GCGSkillTriggerVarMgr *const this)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-30h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *reaction_id; // [rsp+28h] [rbp-28h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-18h] BYREF

  std::set<unsigned int>::set(retstr);
  __for_range = &this->reaction_count_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->reaction_count_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->reaction_count_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    reaction_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v4 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    count = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *count )
      std::set<unsigned int>::emplace<unsigned int const&>(retstr, reaction_id, reaction_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 100: range 000000000DEEAADE-000000000DEEAB45
void __cdecl GCGSkillTriggerVarMgr::recordBeforeOperationControllerDiceNum(
        GCGSkillTriggerVarMgr *const this,
        GCGDuel *duel)
{
  std::function<ForeachPolicy(GCGField&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(GCGField &)>::function<GCGSkillTriggerVarMgr::recordBeforeOperationControllerDiceNum(GCGDuel &)::{lambda(GCGField &)#1},void,void>(
    &p_func,
    (GCGSkillTriggerVarMgr::recordBeforeOperationControllerDiceNum::<lambda(GCGField&)>)this);
  GCGDuel::foreachField(duel, &p_func);
  std::function<ForeachPolicy ()(GCGField &)>::~function(&p_func);
};

// Line 101: range 000000000DEEAA1E-000000000DEEAADD
ForeachPolicy __cdecl GCGSkillTriggerVarMgr::recordBeforeOperationControllerDiceNum(GCGDuel &)::{lambda(GCGField &)#1}::operator()(
        const GCGSkillTriggerVarMgr::recordBeforeOperationControllerDiceNum::<lambda(GCGField&)> *const __closure,
        GCGField *field)
{
  GCGDiceZone *DiceZone; // rax
  uint32_t ValidDiceSize; // ebx
  std::map<proto::GCGControllerValue,unsigned int> *p_before_operation_controller_dice_num_map; // r12
  std::map<proto::GCGControllerValue,unsigned int>::mapped_type *v5; // rax
  uint32_t *v6; // rdx
  std::map<proto::GCGControllerValue,unsigned int>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  DiceZone = GCGField::getDiceZone(field);
  ValidDiceSize = GCGDiceZone::getValidDiceSize(DiceZone);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_before_operation_controller_dice_num_map = &__closure->__this->before_operation_controller_dice_num_map_;
  __k[0] = GCGField::getControllerId(field);
  v5 = std::map<proto::GCGControllerValue,unsigned int>::operator[](p_before_operation_controller_dice_num_map, __k);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = ValidDiceSize;
  return 0;
};

// Line 109: range 000000000DEEAB46-000000000DEEADA2
uint32_t __cdecl GCGSkillTriggerVarMgr::getBeforeOperationDiceSumByControllerSet(
        const GCGSkillTriggerVarMgr *const this,
        const std::set<proto::GCGControllerValue> *controller_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<proto::GCGControllerValue>::reference v5; // rax
  _DWORD *v6; // rdx
  std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  uint32_t result; // eax
  uint32_t dice_num; // [rsp+1Ch] [rbp-A4h]
  std::set<proto::GCGControllerValue>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::set<proto::GCGControllerValue>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self __y; // [rsp+30h] [rbp-90h] BYREF
  const std::set<proto::GCGControllerValue> *__for_range; // [rsp+38h] [rbp-88h]
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 controller_id:111 64 8 8 iter:113";
  *(_QWORD *)(v2 + 16) = GCGSkillTriggerVarMgr::getBeforeOperationDiceSumByControllerSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  dice_num = 0;
  __for_range = controller_set;
  __for_begin._M_node = std::set<proto::GCGControllerValue>::begin(controller_set)._M_node;
  __for_end._M_node = std::set<proto::GCGControllerValue>::end(controller_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    *(std::map<proto::GCGControllerValue,unsigned int>::const_iterator *)(v2 + 64) = std::map<proto::GCGControllerValue,unsigned int>::find(
                                                                                       &this->before_operation_controller_dice_num_map_,
                                                                                       (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v2 + 48));
    __y._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->before_operation_controller_dice_num_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Self *)(v2 + 64),
           &__y) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> > *const)(v2 + 64));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      dice_num += v7->second;
    }
    std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator++(&__for_begin);
  }
  result = dice_num;
  if ( v15 == (char *)v2 )
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

// Line 124: range 000000000DEEADA4-000000000DEEADC2
int32_t __cdecl GCGOperationVarMgr::init(GCGOperationVarMgr *const this)
{
  GCGOperationVarMgr::resetOperationVars(this);
  return 0;
};

// Line 130: range 000000000DEEADC4-000000000DEEADDE
void __cdecl GCGOperationVarMgr::resetOperationVars(GCGOperationVarMgr *const this)
{
  std::map<proto::GCGControllerValue,unsigned int>::clear(&this->controller_id_kill_count_map_);
};

// Line 135: range 000000000DEEADE0-000000000DEEAEEF
void __fastcall GCGOperationVarMgr::addControllerIdKillCount(
        GCGOperationVarMgr *const this,
        GCGControllerValue cur_controller_id,
        uint32_t value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 cur_controller_id:134";
  *(_QWORD *)(v3 + 16) = GCGOperationVarMgr::addControllerIdKillCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = cur_controller_id;
  v6 = (unsigned __int64)std::map<proto::GCGControllerValue,unsigned int>::operator[](
                           &this->controller_id_kill_count_map_,
                           (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v3 + 32));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load4(v6);
  *(_DWORD *)v6 += value;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 140: range 000000000DEEAEF0-000000000DEEAEFD
const std::map<proto::GCGControllerValue,unsigned int> *__cdecl GCGOperationVarMgr::getControllerIdKillCountMap(
        const GCGOperationVarMgr *const this)
{
  return &this->controller_id_kill_count_map_;
};

// Line 145: range 000000000DEEAEFE-000000000DEEAF17
GCGSkillTriggerVarMgr *__cdecl GCGDuel::getSkillTriggerVarMgr(GCGDuel *const this)
{
  return (GCGSkillTriggerVarMgr *)GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::getRuntimeData(this);
};

// Line 150: range 000000000DEEAF18-000000000DEEAF31
const GCGSkillTriggerVarMgr *__cdecl GCGDuel::getSkillTriggerVarMgr(const GCGDuel *const this)
{
  return (const GCGSkillTriggerVarMgr *)GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::getRuntimeData(this);
};

// Line 155: range 000000000DEEAF32-000000000DEEAF51
GCGOperationVarMgr *__cdecl GCGDuel::getOperationVarMgr(GCGDuel *const this)
{
  return &GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::getRuntimeData(this)->phase_main_var_mgr_;
};

// Line 160: range 000000000DEEAF52-000000000DEEAF71
const GCGOperationVarMgr *__cdecl GCGDuel::getOperationVarMgr(const GCGDuel *const this)
{
  return &GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::getRuntimeData(this)->phase_main_var_mgr_;
};

// Line 165: range 000000000DEEB056-000000000DEEB166
int32_t __cdecl GCGDuel::init(GCGDuel *const this)
{
  GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax
  GCGOperationVarMgr *OperationVarMgr; // rax
  std::function<void(proto::GCGControllerValue)> p_func; // [rsp+10h] [rbp-30h] BYREF

  GCGField::init(&this->field_1);
  GCGField::init(&this->field_2);
  std::function<void ()(proto::GCGControllerValue)>::function<GCGDuel::init(void)::{lambda(proto::GCGControllerValue)#1},void,void>(
    &p_func,
    (GCGDuel::init::<lambda(GCGControllerValue)>)this);
  GCGOperationTimer::registCallbackFunc(&this->op_timer_1, &p_func);
  std::function<void ()(proto::GCGControllerValue)>::~function(&p_func);
  std::function<void ()(proto::GCGControllerValue)>::function<GCGDuel::init(void)::{lambda(proto::GCGControllerValue)#2},void,void>(
    &p_func,
    (GCGDuel::init::<lambda(GCGControllerValue)>)this);
  GCGOperationTimer::registCallbackFunc(&this->op_timer_2, &p_func);
  std::function<void ()(proto::GCGControllerValue)>::~function(&p_func);
  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::init(SkillTriggerVarMgr);
  OperationVarMgr = GCGDuel::getOperationVarMgr(this);
  GCGOperationVarMgr::init(OperationVarMgr);
  return 0;
};

// Line 170: range 000000000DEEAF72-000000000DEEAFE2
void __cdecl GCGDuel::init(void)::{lambda(proto::GCGControllerValue)#1}::operator()(
        const GCGDuel::init::<lambda(GCGControllerValue)> *const __closure,
        GCGControllerValue controller_id)
{
  GCGDuel *this; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this->game_mode_);
  GCGGameMode::onOpTimeout(this->game_mode_, controller_id);
};

// Line 171: range 000000000DEEAFE4-000000000DEEB054
void __cdecl GCGDuel::init(void)::{lambda(proto::GCGControllerValue)#2}::operator()(
        const GCGDuel::init::<lambda(GCGControllerValue)> *const __closure,
        GCGControllerValue controller_id)
{
  GCGDuel *this; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this->game_mode_);
  GCGGameMode::onOpTimeout(this->game_mode_, controller_id);
};

// Line 183: range 000000000DEEB168-000000000DEEB38D
void __fastcall GCGDuel::setFirstHand(GCGDuel *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  GCGControllerValue v6; // ecx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 17 controller_id:182";
  *(_QWORD *)(v2 + 16) = GCGDuel::setFirstHand;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(this, *(GCGControllerValue *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/duel/gcg_duel.cpp",
      "setFirstHand",
      186);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v8,
           (const char (*)[22])"error controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      (const proto::GCGControllerValue *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_controller_id_);
    }
    this->cur_controller_id_ = v6;
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/duel/gcg_duel.cpp",
      "setFirstHand",
      190);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v8, (const char (*)[17])off_1BB5F0E0);
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      (const proto::GCGControllerValue *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
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

// Line 194: range 000000000DEEB38E-000000000DEEB6D2
void __cdecl GCGDuel::setRule(GCGDuel *const this)
{
  GCGCharacterZone *CharacterZone; // rdi
  GCGCardZone *AssistZone; // rcx
  GCGCardZone *SummonZone; // rcx
  GCGCardZone *HandZone; // rcx
  GCGCharacterZone *p_character_zone_max_size; // rdi
  GCGCardZone *v6; // rcx
  GCGCardZone *v7; // rcx
  GCGCardZone *v8; // rcx
  const GCGRule *rule; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  CharacterZone = GCGField::getCharacterZone(&this->field_1);
  if ( *(_BYTE *)(((unsigned __int64)&rule->character_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->character_zone_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    CharacterZone = (GCGCharacterZone *)&rule->character_zone_max_size;
    __asan_report_load4(&rule->character_zone_max_size);
  }
  GCGCardZone::setMaxSize(CharacterZone, rule->character_zone_max_size);
  AssistZone = GCGField::getAssistZone(&this->field_1);
  if ( *(_BYTE *)(((unsigned __int64)&rule->assit_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->assit_zone_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->assit_zone_max_size);
  }
  GCGCardZone::setMaxSize(AssistZone, rule->assit_zone_max_size);
  SummonZone = GCGField::getSummonZone(&this->field_1);
  if ( *(_BYTE *)(((unsigned __int64)&rule->summon_zone_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule->summon_zone_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rule->summon_zone_max_size);
  }
  GCGCardZone::setMaxSize(SummonZone, rule->summon_zone_max_size);
  HandZone = GCGField::getHandZone(&this->field_1);
  if ( *(_BYTE *)(((unsigned __int64)&rule->hand_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->hand_zone_max_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->hand_zone_max_size);
  }
  GCGCardZone::setMaxSize(HandZone, rule->hand_zone_max_size);
  p_character_zone_max_size = GCGField::getCharacterZone(&this->field_2);
  if ( *(_BYTE *)(((unsigned __int64)&rule->character_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->character_zone_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    p_character_zone_max_size = (GCGCharacterZone *)&rule->character_zone_max_size;
    __asan_report_load4(&rule->character_zone_max_size);
  }
  GCGCardZone::setMaxSize(p_character_zone_max_size, rule->character_zone_max_size);
  v6 = GCGField::getAssistZone(&this->field_2);
  if ( *(_BYTE *)(((unsigned __int64)&rule->assit_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->assit_zone_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->assit_zone_max_size);
  }
  GCGCardZone::setMaxSize(v6, rule->assit_zone_max_size);
  v7 = GCGField::getSummonZone(&this->field_2);
  if ( *(_BYTE *)(((unsigned __int64)&rule->summon_zone_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule->summon_zone_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rule->summon_zone_max_size);
  }
  GCGCardZone::setMaxSize(v7, rule->summon_zone_max_size);
  v8 = GCGField::getHandZone(&this->field_2);
  if ( *(_BYTE *)(((unsigned __int64)&rule->hand_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->hand_zone_max_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->hand_zone_max_size);
  }
  GCGCardZone::setMaxSize(v8, rule->hand_zone_max_size);
};

// Line 208: range 000000000DEEB6D4-000000000DEEB865
const GCGField *__fastcall GCGDuel::getField(const GCGDuel *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  const GCGField *result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 controller_id:207";
  *(_QWORD *)(v2 + 16) = GCGDuel::getField;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(this, *(GCGControllerValue *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/duel/gcg_duel.cpp",
      "getField",
      211);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"error controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      (const proto::GCGControllerValue *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = &this->field_1;
  }
  else if ( *(_DWORD *)(v2 + 32) == 1 )
  {
    result = &this->field_1;
  }
  else
  {
    result = &this->field_2;
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
  return result;
};

// Line 222: range 000000000DEEB866-000000000DEEB9F7
GCGField *__fastcall GCGDuel::getField(GCGDuel *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  GCGField *result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 controller_id:221";
  *(_QWORD *)(v2 + 16) = GCGDuel::getField;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(this, *(GCGControllerValue *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/duel/gcg_duel.cpp",
      "getField",
      225);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"error controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      (const proto::GCGControllerValue *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = &this->field_1;
  }
  else if ( *(_DWORD *)(v2 + 32) == 1 )
  {
    result = &this->field_1;
  }
  else
  {
    result = &this->field_2;
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
  return result;
};

// Line 236: range 000000000DEEB9F8-000000000DEEBB89
GCGOperationTimer *__fastcall GCGDuel::getTimer(GCGDuel *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  GCGOperationTimer *result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 controller_id:235";
  *(_QWORD *)(v2 + 16) = GCGDuel::getTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(this, *(GCGControllerValue *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/duel/gcg_duel.cpp",
      "getTimer",
      239);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"error controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      (const proto::GCGControllerValue *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = &this->op_timer_1;
  }
  else if ( *(_DWORD *)(v2 + 32) == 1 )
  {
    result = &this->op_timer_1;
  }
  else
  {
    result = &this->op_timer_2;
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
  return result;
};

// Line 250: range 000000000DEEBB8A-000000000DEEBBD4
void __cdecl GCGDuel::setTimerConfig(GCGDuel *const this, uint32_t base_time, uint32_t bonus_time)
{
  GCGOperationTimer::setTime(&this->op_timer_1, base_time, bonus_time);
  GCGOperationTimer::setTime(&this->op_timer_2, base_time, bonus_time);
};

// Line 256: range 000000000DEEBBD6-000000000DEEBC12
void __cdecl GCGDuel::stopAllOpTimer(GCGDuel *const this)
{
  GCGOperationTimer::tryStop(&this->op_timer_1, 0);
  GCGOperationTimer::tryStop(&this->op_timer_2, 0);
};

// Line 262: range 000000000DEEBC14-000000000DEEBEA9
void __cdecl GCGDuel::switchHand(GCGDuel *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GCGField *Field; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GCGControllerValue next_controller_id_; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 24 before_controller_id:264";
  *(_QWORD *)(v1 + 16) = GCGDuel::switchHand;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_controller_id_);
  }
  next_controller_id_ = GCGDuel::getOtherControllerId(this, this->cur_controller_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_controller_id_);
  }
  *(_DWORD *)(v1 + 32) = this->cur_controller_id_;
  if ( GCGDuel::isAllPassed(this) || (Field = GCGDuel::getField(this, next_controller_id_), !GCGField::isPassed(Field)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_controller_id_);
    }
    this->cur_controller_id_ = next_controller_id_;
  }
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "switchHand",
    269);
  v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"switch hand. cur: ");
  v7 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
         v6,
         (const proto::GCGControllerValue *)(v1 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" after: ");
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v8,
    &this->cur_controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v10);
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

// Line 274: range 000000000DEEBEAA-000000000DEEBEF6
GCGControllerValue __cdecl GCGDuel::getCurControllerId(GCGDuel *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_controller_id_);
  }
  return this->cur_controller_id_;
};

// Line 279: range 000000000DEEBEF8-000000000DEEC071
__int64 __fastcall GCGDuel::getOtherControllerId(GCGDuel *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 controller_id:278";
  *(_QWORD *)(v2 + 16) = GCGDuel::getOtherControllerId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( !GCGDuel::isControllerIdValid(this, *(GCGControllerValue *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/duel/gcg_duel.cpp",
      "getOtherControllerId",
      282);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"error controller id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      (const proto::GCGControllerValue *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = 0LL;
  }
  else if ( *(_DWORD *)(v2 + 32) == 1 )
  {
    result = 2LL;
  }
  else
  {
    result = 1LL;
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
  return result;
};

// Line 293: range 000000000DEEC072-000000000DEEC0CC
void __cdecl GCGDuel::foreachField(GCGDuel *const this, std::function<ForeachPolicy(GCGField&)> *p_func)
{
  if ( std::function<ForeachPolicy ()(GCGField &)>::operator()(p_func, &this->field_1) != FOREACH_BREAK )
    std::function<ForeachPolicy ()(GCGField &)>::operator()(p_func, &this->field_2);
};

// Line 305: range 000000000DEEC0CE-000000000DEEC128
void __cdecl GCGDuel::foreachField(const GCGDuel *const this, std::function<ForeachPolicy(const GCGField&)> *p_func)
{
  if ( std::function<ForeachPolicy ()(GCGField const&)>::operator()(p_func, &this->field_1) != FOREACH_BREAK )
    std::function<ForeachPolicy ()(GCGField const&)>::operator()(p_func, &this->field_2);
};

// Line 317: range 000000000DEEC12A-000000000DEEC20A
void __cdecl GCGDuel::increRound(GCGDuel *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->round_);
  }
  ++this->round_;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_duel.cpp",
    "increRound",
    319);
  v1 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v2, (const char (*)[19])"increRound round_:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->round_);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 323: range 000000000DEEC20C-000000000DEEC24C
void __cdecl GCGDuel::resetSkillTriggerVars(GCGDuel *const this)
{
  GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax
  GCGSkillTriggerVarMgr *v2; // rdx

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::resetSkillTriggerVars(SkillTriggerVarMgr);
  v2 = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::recordBeforeOperationControllerDiceNum(v2, this);
};

// Line 330: range 000000000DEEC24E-000000000DEEC270
void __cdecl GCGDuel::addKillCharacterCount(GCGDuel *const this)
{
  GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::addKillCharacterCount(SkillTriggerVarMgr);
};

// Line 335: range 000000000DEEC272-000000000DEEC293
uint32_t __cdecl GCGDuel::getKillCharacterCount(const GCGDuel *const this)
{
  const GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  return GCGSkillTriggerVarMgr::getKillCharacterCount(SkillTriggerVarMgr);
};

// Line 340: range 000000000DEEC294-000000000DEEC2E3
void __cdecl GCGDuel::recordDamageElementType(
        GCGDuel *const this,
        uint32_t card_guid,
        GCGEffectElementType damage_element_type)
{
  GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax
  GCGSkillTriggerVarMgr *v4; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::recordDamageElementType(SkillTriggerVarMgr, damage_element_type);
  v4 = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::recordCharacterBeingHurtDamageElementType(v4, card_guid, damage_element_type);
};

// Line 346: range 000000000DEEC2E4-000000000DEEC305
const std::set<unsigned int> *__cdecl GCGDuel::getDamageElementTypeSet(const GCGDuel *const this)
{
  const GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  return GCGSkillTriggerVarMgr::getDamageElementTypeSet(SkillTriggerVarMgr);
};

// Line 351: range 000000000DEEC306-000000000DEEC332
const std::set<unsigned int> *__cdecl GCGDuel::getCharacterBeingHurtDamageElementTypeSet(
        const GCGDuel *const this,
        uint32_t card_guid)
{
  const GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  return GCGSkillTriggerVarMgr::getCharacterBeingHurtDamageElementTypeSet(SkillTriggerVarMgr, card_guid);
};

// Line 356: range 000000000DEEC334-000000000DEEC361
void __cdecl GCGDuel::recordReaction(GCGDuel *const this, uint32_t reaction_id)
{
  GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  GCGSkillTriggerVarMgr::recordReaction(SkillTriggerVarMgr, reaction_id);
};

// Line 361: range 000000000DEEC362-000000000DEEC383
uint32_t __cdecl GCGDuel::getReactionCount(const GCGDuel *const this)
{
  const GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rax

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  return GCGSkillTriggerVarMgr::getReactionCount(SkillTriggerVarMgr);
};

// Line 366: range 000000000DEEC384-000000000DEEC41A
std::set<unsigned int> *__cdecl GCGDuel::getReactionSet(std::set<unsigned int> *retstr, const GCGDuel *const this)
{
  const GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rsi

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    SkillTriggerVarMgr = (const GCGSkillTriggerVarMgr *)48;
    __asan_report_store_n(retstr, 48LL);
  }
  GCGSkillTriggerVarMgr::getReactionSet(retstr, SkillTriggerVarMgr);
  return retstr;
};

// Line 372: range 000000000DEEC41C-000000000DEEC44B
uint32_t __cdecl GCGDuel::getBeforeOperationDiceSumByControllerSet(
        const GCGDuel *const this,
        const std::set<proto::GCGControllerValue> *controller_set)
{
  const GCGSkillTriggerVarMgr *SkillTriggerVarMgr; // rdx

  SkillTriggerVarMgr = GCGDuel::getSkillTriggerVarMgr(this);
  return GCGSkillTriggerVarMgr::getBeforeOperationDiceSumByControllerSet(SkillTriggerVarMgr, controller_set);
};

// Line 378: range 000000000DEEC44C-000000000DEEC641
void __cdecl GCGDuel::resetOperationVars(GCGDuel *const this)
{
  std::pair<const proto::GCGControllerValue,unsigned int> *v1; // rax
  std::pair<const proto::GCGControllerValue,unsigned int> *v2; // rdx
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *v3; // rax
  uint32_t v4; // ecx
  GCGOperationVarMgr *OperationVarMgr; // rax
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  GCGStatistics *statistic_mgr; // [rsp+28h] [rbp-28h]
  const std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,unsigned int> >::type *controller_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *kill_count; // [rsp+40h] [rbp-10h]
  std::pair<const proto::GCGControllerValue,unsigned int> __in; // [rsp+48h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  statistic_mgr = GCGGameMode::getStatistics(this->game_mode_);
  __for_range = GCGDuel::getControllerIdKillCountMap(this);
  __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = (std::pair<const proto::GCGControllerValue,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
    v2 = v1;
    if ( ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v1->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v1->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v1, 8LL);
    }
    __in = *v2;
    controller_id = std::get<0ul,proto::GCGControllerValue const,unsigned int>(&__in);
    v3 = std::get<1ul,proto::GCGControllerValue const,unsigned int>(&__in);
    kill_count = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( *kill_count )
    {
      v4 = *kill_count;
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      GCGStatistics::reportStatisticSpecifyDataUintVec(statistic_mgr, *controller_id, ONE_OPERATION_KILL_COUNT_VEC, v4);
    }
    std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
  }
  OperationVarMgr = GCGDuel::getOperationVarMgr(this);
  GCGOperationVarMgr::resetOperationVars(OperationVarMgr);
};

// Line 394: range 000000000DEEC642-000000000DEEC675
void __cdecl GCGDuel::addControllerIdKillCount(
        GCGDuel *const this,
        GCGControllerValue cur_controller_id,
        uint32_t value)
{
  GCGOperationVarMgr *OperationVarMgr; // rax

  OperationVarMgr = GCGDuel::getOperationVarMgr(this);
  GCGOperationVarMgr::addControllerIdKillCount(OperationVarMgr, cur_controller_id, value);
};

// Line 400: range 000000000DEEC676-000000000DEEC697
const std::map<proto::GCGControllerValue,unsigned int> *__cdecl GCGDuel::getControllerIdKillCountMap(
        const GCGDuel *const this)
{
  const GCGOperationVarMgr *OperationVarMgr; // rax

  OperationVarMgr = GCGDuel::getOperationVarMgr(this);
  return GCGOperationVarMgr::getControllerIdKillCountMap(OperationVarMgr);
};
