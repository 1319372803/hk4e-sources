// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_reroll.cpp

// Line 21: range 000000000D7B6C2E-000000000D7B6DCF
void __cdecl GCGPhaseReroll::setPhaseParam(GCGPhaseReroll *const this, const GCGPhaseParam *param)
{
  std::pair<const proto::GCGControllerValue,unsigned int> *v2; // rax
  std::pair<const proto::GCGControllerValue,unsigned int> *v3; // rdx
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *v4; // rax
  GCGPhaseReroll *v5; // rcx
  uint32_t v6; // esi
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,unsigned int> >::type *controller_id; // [rsp+28h] [rbp-18h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,unsigned int> >::type *action_count; // [rsp+30h] [rbp-10h]
  std::pair<const proto::GCGControllerValue,unsigned int> __in; // [rsp+38h] [rbp-8h] BYREF

  __for_range = &param->controller_id_2_action_count_map_;
  __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(&param->controller_id_2_action_count_map_)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&param->controller_id_2_action_count_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<const proto::GCGControllerValue,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    controller_id = std::get<0ul,proto::GCGControllerValue const,unsigned int>(&__in);
    v4 = std::get<1ul,proto::GCGControllerValue const,unsigned int>(&__in);
    action_count = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *action_count )
    {
      v5 = this;
      v6 = *action_count;
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      GCGPhaseBase::addAllowController(v5, *controller_id, v6);
    }
    std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 32: range 000000000D7B6DD0-000000000D7B709C
void __cdecl GCGPhaseReroll::onPhaseEnter(GCGPhaseReroll *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GCGControllerValue *v4; // rax
  proto::GCGControllerValue *v5; // rdx
  GCGDuel *Duel; // rax
  GCGDiceZone *DiceZone; // rax
  std::allocator<proto::GCGControllerValue> __a; // [rsp+1Bh] [rbp-B5h] BYREF
  proto::GCGControllerValue controller_id; // [rsp+1Ch] [rbp-B4h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<proto::GCGControllerValue> *__for_range; // [rsp+28h] [rbp-A8h]
  GCGField *field; // [rsp+30h] [rbp-A0h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 17 controller_vec:33";
  *(_QWORD *)(v1 + 16) = GCGPhaseReroll::onPhaseEnter;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  __for_end._M_current = (const proto::GCGControllerValue *)0x200000001LL;
  std::allocator<proto::GCGControllerValue>::allocator(&__a);
  std::vector<proto::GCGControllerValue>::vector(
    (std::vector<proto::GCGControllerValue> *const)(v1 + 32),
    (std::initializer_list<proto::GCGControllerValue>)__PAIR128__(2LL, &__for_end),
    &__a);
  std::allocator<proto::GCGControllerValue>::~allocator(&__a);
  __for_range = (const std::vector<proto::GCGControllerValue> *)(v1 + 32);
  __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((const std::vector<proto::GCGControllerValue> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<proto::GCGControllerValue>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = (proto::GCGControllerValue *)__gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    controller_id = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    field = GCGDuel::getField(Duel, controller_id);
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::clearRerollIdx(DiceZone);
    __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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

// Line 43: range 000000000D7B709E-000000000D7B736A
void __cdecl GCGPhaseReroll::onPhaseExit(GCGPhaseReroll *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GCGControllerValue *v4; // rax
  proto::GCGControllerValue *v5; // rdx
  GCGDuel *Duel; // rax
  GCGDiceZone *DiceZone; // rax
  std::allocator<proto::GCGControllerValue> __a; // [rsp+1Bh] [rbp-B5h] BYREF
  proto::GCGControllerValue controller_id; // [rsp+1Ch] [rbp-B4h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<proto::GCGControllerValue> *__for_range; // [rsp+28h] [rbp-A8h]
  GCGField *field; // [rsp+30h] [rbp-A0h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 17 controller_vec:44";
  *(_QWORD *)(v1 + 16) = GCGPhaseReroll::onPhaseExit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  __for_end._M_current = (const proto::GCGControllerValue *)0x200000001LL;
  std::allocator<proto::GCGControllerValue>::allocator(&__a);
  std::vector<proto::GCGControllerValue>::vector(
    (std::vector<proto::GCGControllerValue> *const)(v1 + 32),
    (std::initializer_list<proto::GCGControllerValue>)__PAIR128__(2LL, &__for_end),
    &__a);
  std::allocator<proto::GCGControllerValue>::~allocator(&__a);
  __for_range = (const std::vector<proto::GCGControllerValue> *)(v1 + 32);
  __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((const std::vector<proto::GCGControllerValue> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<proto::GCGControllerValue>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = (proto::GCGControllerValue *)__gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    controller_id = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    field = GCGDuel::getField(Duel, controller_id);
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::clearRerollIdx(DiceZone);
    __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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
