// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_utils.h

// Line 29: range 000000000D829D32-000000000D829DAE
void __cdecl GCGUtils::RunGuard::RunGuard(GCGUtils::RunGuard *const this, bool *is_running)
{
  bool *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->is_running_ = is_running;
  v2 = this->is_running_;
  if ( *(_BYTE *)(((unsigned __int64)this->is_running_ >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->is_running_ & 7) >= *(_BYTE *)(((unsigned __int64)this->is_running_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this->is_running_);
  }
  *v2 = 1;
};

// Line 30: range 000000000D829E1E-000000000D829E3E
bool __cdecl GCGUtils::isSpecialPhase(GCGPhaseType type)
{
  return type == GCG_PHASE_DIE || type == GCG_PHASE_REROLL;
};

// Line 30: range 000000000D829DB0-000000000D829E1D
void __cdecl GCGUtils::RunGuard::~RunGuard(GCGUtils::RunGuard *const this)
{
  bool *is_running; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  is_running = this->is_running_;
  if ( *(_BYTE *)(((unsigned __int64)this->is_running_ >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->is_running_ & 7) >= *(_BYTE *)(((unsigned __int64)this->is_running_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this->is_running_);
  }
  *is_running = 0;
};

// Line 68: range 000000000E1E9F5B-000000000E1E9F95
void __cdecl GCGUtils::randomSelect<proto::GCGDiceSideType,GCGGameMode>(
        const std::vector<proto::GCGDiceSideType> *data_vec,
        std::vector<proto::GCGDiceSideType> *result_vec,
        uint32_t num,
        GCGGameMode *game_mode)
{
  std::mt19937 *v4; // rcx

  v4 = GCGGameMode::gen(game_mode);
  common::tools::RandomUtils::randomSelect<proto::GCGDiceSideType>(data_vec, result_vec, num, v4);
};

// Line 104: range 000000000DF71A3C-000000000DF71C90
std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::_Base_ptr __fastcall GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(
        data::GCGEffectDamageElementType from,
        std::nullopt_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::pointer v5; // rax
  std::optional<data::GCGEffectElementType> v6; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::_Base_ptr result; // 0:rax.5

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 from:104 64 8 8 iter:120";
  *(_QWORD *)(v2 + 16) = GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = from;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( !(_BYTE)`guard variable for'std::optional<data::GCGEffectElementType> GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map
      && __cxa_guard_acquire(&`guard variable for'std::optional<data::GCGEffectElementType> GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGEffectDamageElementType,data::GCGEffectElementType>((std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType> *)&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map);
      __cxa_guard_release(&`guard variable for'std::optional<data::GCGEffectElementType> GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::~map,
        (void *)&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map,
        &_dso_handle);
    }
    *(std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::const_iterator *)(v2 + 64) = std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::find(&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map, (const std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::key_type *)(v2 + 48));
    __y._M_node = std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::end(&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(data::GCGEffectDamageElementType)::element_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::_Self *)(v2 + 64),
           &__y) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectDamageElementType const,data::GCGEffectElementType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> > *const)(v2 + 64));
      std::optional<data::GCGEffectElementType>::optional<data::GCGEffectElementType const&,true>(&v6, &v5->second);
    }
    else
    {
      std::optional<data::GCGEffectElementType>::optional(&v6, (std::nullopt_t)&__y);
    }
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::_Base_ptr)v6;
  }
  else
  {
    std::optional<data::GCGEffectElementType>::optional(&v6, a2);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDamageElementType,data::GCGEffectElementType> >::_Base_ptr)v6;
  }
  result = __y._M_node;
  if ( v8 == (char *)v2 )
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

// Line 104: range 000000000E37470E-000000000E374962
std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::_Base_ptr __fastcall GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(
        data::GCGTokenType from,
        std::nullopt_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::pointer v5; // rax
  std::optional<data::GCGEffectElementType> v6; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::_Base_ptr result; // 0:rax.5

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 from:104 64 8 8 iter:120";
  *(_QWORD *)(v2 + 16) = GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = from;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( !(_BYTE)`guard variable for'std::optional<data::GCGEffectElementType> GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map
      && __cxa_guard_acquire(&`guard variable for'std::optional<data::GCGEffectElementType> GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGTokenType,data::GCGEffectElementType>((std::map<data::GCGTokenType,data::GCGEffectElementType> *)&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map);
      __cxa_guard_release(&`guard variable for'std::optional<data::GCGEffectElementType> GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGTokenType,data::GCGEffectElementType>::~map,
        (void *)&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map,
        &_dso_handle);
    }
    *(std::map<data::GCGTokenType,data::GCGEffectElementType>::const_iterator *)(v2 + 64) = std::map<data::GCGTokenType,data::GCGEffectElementType>::find(
                                                                                              &GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map,
                                                                                              (const std::map<data::GCGTokenType,data::GCGEffectElementType>::key_type *)(v2 + 48));
    __y._M_node = std::map<data::GCGTokenType,data::GCGEffectElementType>::end(&GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(data::GCGTokenType)::element_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::_Self *)(v2 + 64),
           &__y) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,data::GCGEffectElementType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> > *const)(v2 + 64));
      std::optional<data::GCGEffectElementType>::optional<data::GCGEffectElementType const&,true>(&v6, &v5->second);
    }
    else
    {
      std::optional<data::GCGEffectElementType>::optional(&v6, (std::nullopt_t)&__y);
    }
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::_Base_ptr)v6;
  }
  else
  {
    std::optional<data::GCGEffectElementType>::optional(&v6, a2);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,data::GCGEffectElementType> >::_Base_ptr)v6;
  }
  result = __y._M_node;
  if ( v8 == (char *)v2 )
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

// Line 104: range 000000000E374482-000000000E3746D6
std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::_Base_ptr __fastcall GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(
        data::GCGEffectElementType from,
        std::nullopt_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::pointer v5; // rax
  std::optional<data::GCGTokenType> v6; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::_Base_ptr result; // 0:rax.5

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 from:104 64 8 8 iter:120";
  *(_QWORD *)(v2 + 16) = GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = from;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( !(_BYTE)`guard variable for'std::optional<data::GCGTokenType> GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map
      && __cxa_guard_acquire(&`guard variable for'std::optional<data::GCGTokenType> GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGEffectElementType,data::GCGTokenType>((std::map<data::GCGEffectElementType,data::GCGTokenType> *)&GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map);
      __cxa_guard_release(&`guard variable for'std::optional<data::GCGTokenType> GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGEffectElementType,data::GCGTokenType>::~map,
        (void *)&GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map,
        &_dso_handle);
    }
    *(std::map<data::GCGEffectElementType,data::GCGTokenType>::const_iterator *)(v2 + 64) = std::map<data::GCGEffectElementType,data::GCGTokenType>::find(
                                                                                              &GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map,
                                                                                              (const std::map<data::GCGEffectElementType,data::GCGTokenType>::key_type *)(v2 + 48));
    __y._M_node = std::map<data::GCGEffectElementType,data::GCGTokenType>::end(&GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::_Self *)(v2 + 64),
           &__y) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectElementType const,data::GCGTokenType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> > *const)(v2 + 64));
      std::optional<data::GCGTokenType>::optional<data::GCGTokenType const&,true>(&v6, &v5->second);
    }
    else
    {
      std::optional<data::GCGTokenType>::optional(&v6, (std::nullopt_t)&__y);
    }
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::_Base_ptr)v6;
  }
  else
  {
    std::optional<data::GCGTokenType>::optional(&v6, a2);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,data::GCGTokenType> >::_Base_ptr)v6;
  }
  result = __y._M_node;
  if ( v8 == (char *)v2 )
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

// Line 104: range 000000000E1E9FB2-000000000E1EA206
std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::_Base_ptr __fastcall GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(
        data::GCGEffectDiceType from,
        std::nullopt_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::pointer v5; // rax
  std::optional<proto::GCGDiceSideType> v6; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::_Base_ptr result; // 0:rax.5

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 from:104 64 8 8 iter:120";
  *(_QWORD *)(v2 + 16) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = from;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( !(_BYTE)`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map
      && __cxa_guard_acquire(&`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGEffectDiceType,proto::GCGDiceSideType>((std::map<data::GCGEffectDiceType,proto::GCGDiceSideType> *)&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map);
      __cxa_guard_release(&`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::~map,
        (void *)&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map,
        &_dso_handle);
    }
    *(std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::const_iterator *)(v2 + 64) = std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::find(
                                                                                               &GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map,
                                                                                               (const std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::key_type *)(v2 + 48));
    __y._M_node = std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::end(&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(data::GCGEffectDiceType)::element_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::_Self *)(v2 + 64),
           &__y) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectDiceType const,proto::GCGDiceSideType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> > *const)(v2 + 64));
      std::optional<proto::GCGDiceSideType>::optional<proto::GCGDiceSideType const&,true>(&v6, &v5->second);
    }
    else
    {
      std::optional<proto::GCGDiceSideType>::optional(&v6, (std::nullopt_t)&__y);
    }
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::_Base_ptr)v6;
  }
  else
  {
    std::optional<proto::GCGDiceSideType>::optional(&v6, a2);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectDiceType,proto::GCGDiceSideType> >::_Base_ptr)v6;
  }
  result = __y._M_node;
  if ( v8 == (char *)v2 )
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

// Line 104: range 000000000D86CFA6-000000000D86D1FA
std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::_Base_ptr __fastcall GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
        data::GCGEffectElementType from,
        std::nullopt_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::pointer v5; // rax
  std::optional<proto::GCGDiceSideType> v6; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::_Base_ptr result; // 0:rax.5

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 from:104 64 8 8 iter:120";
  *(_QWORD *)(v2 + 16) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = from;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( !(_BYTE)`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map
      && __cxa_guard_acquire(&`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGEffectElementType,proto::GCGDiceSideType>((std::map<data::GCGEffectElementType,proto::GCGDiceSideType> *)&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map);
      __cxa_guard_release(&`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::~map,
        (void *)&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map,
        &_dso_handle);
    }
    *(std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::const_iterator *)(v2 + 64) = std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::find(
                                                                                                  &GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map,
                                                                                                  (const std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::key_type *)(v2 + 48));
    __y._M_node = std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::end(&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(data::GCGEffectElementType)::element_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::_Self *)(v2 + 64),
           &__y) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectElementType const,proto::GCGDiceSideType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> > *const)(v2 + 64));
      std::optional<proto::GCGDiceSideType>::optional<proto::GCGDiceSideType const&,true>(&v6, &v5->second);
    }
    else
    {
      std::optional<proto::GCGDiceSideType>::optional(&v6, (std::nullopt_t)&__y);
    }
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::_Base_ptr)v6;
  }
  else
  {
    std::optional<proto::GCGDiceSideType>::optional(&v6, a2);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,proto::GCGDiceSideType> >::_Base_ptr)v6;
  }
  result = __y._M_node;
  if ( v8 == (char *)v2 )
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

// Line 129: range 000000000D87DE6E-000000000D87DF2C
std::set<data::GCGCostType> *__cdecl GCGUtils::getElementSet<data::GCGCostType>(std::set<data::GCGCostType> *retstr)
{
  const data::GCGCostType *v1; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::set<data::GCGCostType>::set(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = std::get<data::GCGCostType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    std::set<data::GCGCostType>::insert(retstr, v1);
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 129: range 000000000E3758F4-000000000E3759B2
std::set<data::GCGEffectCostType> *__cdecl GCGUtils::getElementSet<data::GCGEffectCostType>(
        std::set<data::GCGEffectCostType> *retstr)
{
  const data::GCGEffectCostType *v1; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::set<data::GCGEffectCostType>::set(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = std::get<data::GCGEffectCostType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    std::set<data::GCGEffectCostType>::insert(retstr, v1);
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 129: range 000000000D87CB9E-000000000D87CC5C
std::set<data::GCGTokenType> *__cdecl GCGUtils::getElementSet<data::GCGTokenType>(std::set<data::GCGTokenType> *retstr)
{
  const data::GCGTokenType *v1; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::set<data::GCGTokenType>::set(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = std::get<data::GCGTokenType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    std::set<data::GCGTokenType>::insert(retstr, v1);
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 129: range 000000000E1E16FC-000000000E1E17BA
std::set<proto::GCGDiceSideType> *__cdecl GCGUtils::getElementSet<proto::GCGDiceSideType>(
        std::set<proto::GCGDiceSideType> *retstr)
{
  const proto::GCGDiceSideType *v1; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::set<proto::GCGDiceSideType>::set(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = std::get<proto::GCGDiceSideType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    std::set<proto::GCGDiceSideType>::insert(retstr, v1);
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 140: range 000000000DF711DE-000000000DF71327
std::map<data::GCGCostType,proto::GCGDiceSideType> *__cdecl GCGUtils::getElementCoverMap<data::GCGCostType,proto::GCGDiceSideType>(
        std::map<data::GCGCostType,proto::GCGDiceSideType> *retstr)
{
  proto::GCGDiceSideType *v1; // rax
  int *v2; // rdx
  int v3; // ebx
  const data::GCGCostType *v4; // rdx
  std::map<data::GCGCostType,proto::GCGDiceSideType>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::map<data::GCGCostType,proto::GCGDiceSideType>::map(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = (proto::GCGDiceSideType *)std::get<proto::GCGDiceSideType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v2 = (int *)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    v3 = *v2;
    v4 = std::get<data::GCGCostType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v5 = std::map<data::GCGCostType,proto::GCGDiceSideType>::operator[](retstr, v4);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v3;
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 140: range 000000000DFA2F1A-000000000DFA3063
std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType> *__cdecl GCGUtils::getElementCoverMap<data::GCGEffectDamageElementType,data::GCGEffectElementType>(
        std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType> *retstr)
{
  data::GCGEffectElementType *v1; // rax
  int *v2; // rdx
  int v3; // ebx
  const data::GCGEffectDamageElementType *v4; // rdx
  std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::map(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = (data::GCGEffectElementType *)std::get<data::GCGEffectElementType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v2 = (int *)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    v3 = *v2;
    v4 = std::get<data::GCGEffectDamageElementType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v5 = std::map<data::GCGEffectDamageElementType,data::GCGEffectElementType>::operator[](retstr, v4);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v3;
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 140: range 000000000E204022-000000000E20416B
std::map<data::GCGEffectDiceType,proto::GCGDiceSideType> *__cdecl GCGUtils::getElementCoverMap<data::GCGEffectDiceType,proto::GCGDiceSideType>(
        std::map<data::GCGEffectDiceType,proto::GCGDiceSideType> *retstr)
{
  proto::GCGDiceSideType *v1; // rax
  int *v2; // rdx
  int v3; // ebx
  const data::GCGEffectDiceType *v4; // rdx
  std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::map(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = (proto::GCGDiceSideType *)std::get<proto::GCGDiceSideType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v2 = (int *)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    v3 = *v2;
    v4 = std::get<data::GCGEffectDiceType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v5 = std::map<data::GCGEffectDiceType,proto::GCGDiceSideType>::operator[](retstr, v4);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v3;
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 140: range 000000000E392AB2-000000000E392BFB
std::map<data::GCGEffectElementType,data::GCGTokenType> *__cdecl GCGUtils::getElementCoverMap<data::GCGEffectElementType,data::GCGTokenType>(
        std::map<data::GCGEffectElementType,data::GCGTokenType> *retstr)
{
  data::GCGTokenType *v1; // rax
  int *v2; // rdx
  int v3; // ebx
  const data::GCGEffectElementType *v4; // rdx
  std::map<data::GCGEffectElementType,data::GCGTokenType>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::map<data::GCGEffectElementType,data::GCGTokenType>::map(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = (data::GCGTokenType *)std::get<data::GCGTokenType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v2 = (int *)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    v3 = *v2;
    v4 = std::get<data::GCGEffectElementType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v5 = std::map<data::GCGEffectElementType,data::GCGTokenType>::operator[](retstr, v4);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v3;
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 140: range 000000000D91D268-000000000D91D3B1
std::map<data::GCGEffectElementType,proto::GCGDiceSideType> *__cdecl GCGUtils::getElementCoverMap<data::GCGEffectElementType,proto::GCGDiceSideType>(
        std::map<data::GCGEffectElementType,proto::GCGDiceSideType> *retstr)
{
  proto::GCGDiceSideType *v1; // rax
  int *v2; // rdx
  int v3; // ebx
  const data::GCGEffectElementType *v4; // rdx
  std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::map(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = (proto::GCGDiceSideType *)std::get<proto::GCGDiceSideType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v2 = (int *)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    v3 = *v2;
    v4 = std::get<data::GCGEffectElementType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v5 = std::map<data::GCGEffectElementType,proto::GCGDiceSideType>::operator[](retstr, v4);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v3;
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 140: range 000000000E392DB2-000000000E392EFB
std::map<data::GCGTokenType,data::GCGEffectElementType> *__cdecl GCGUtils::getElementCoverMap<data::GCGTokenType,data::GCGEffectElementType>(
        std::map<data::GCGTokenType,data::GCGEffectElementType> *retstr)
{
  data::GCGEffectElementType *v1; // rax
  int *v2; // rdx
  int v3; // ebx
  const data::GCGTokenType *v4; // rdx
  std::map<data::GCGTokenType,data::GCGEffectElementType>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> *ele; // [rsp+28h] [rbp-18h]

  std::map<data::GCGTokenType,data::GCGEffectElementType>::map(retstr);
  __for_range = &GCGUtils::element_vec_;
  __for_begin._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::begin(&GCGUtils::element_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>::end(&GCGUtils::element_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>(
            &__for_begin,
            &__for_end) )
  {
    ele = __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator*(&__for_begin);
    v1 = (data::GCGEffectElementType *)std::get<data::GCGEffectElementType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v2 = (int *)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    v3 = *v2;
    v4 = std::get<data::GCGTokenType,proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>(ele);
    v5 = std::map<data::GCGTokenType,data::GCGEffectElementType>::operator[](retstr, v4);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v3;
    __gnu_cxx::__normal_iterator<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType> const*,std::vector<std::tuple<proto::GCGDiceSideType,data::GCGEffectElementType,data::GCGCostType,data::GCGEffectCostType,data::GCGEffectDamageElementType,data::GCGTagType,data::GCGTokenType,data::GCGEffectDiceType>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 209: range 000000000E1EB2A1-000000000E1EB2DB
void __cdecl GCGUtils::randomSelect<unsigned int,GCGGameMode>(
        const std::vector<unsigned int> *data_vec,
        std::vector<unsigned int> *result_vec,
        uint32_t num,
        GCGGameMode *game_mode)
{
  std::mt19937 *v4; // rcx

  v4 = GCGGameMode::gen(game_mode);
  common::tools::RandomUtils::randomSelect<unsigned int>(data_vec, result_vec, num, v4);
};

// Line 628: range 000000000DF49276-000000000DF494CA
std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Base_ptr __fastcall GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(
        data::GCGCostType from,
        std::nullopt_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::pointer v5; // rax
  std::optional<proto::GCGDiceSideType> v6; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Base_ptr result; // 0:rax.5

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 from:104 64 8 8 iter:120";
  *(_QWORD *)(v2 + 16) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = from;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( !(_BYTE)`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map
      && __cxa_guard_acquire(&`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGCostType,proto::GCGDiceSideType>((std::map<data::GCGCostType,proto::GCGDiceSideType> *)&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map);
      __cxa_guard_release(&`guard variable for'std::optional<proto::GCGDiceSideType> GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGCostType,proto::GCGDiceSideType>::~map,
        (void *)&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map,
        &_dso_handle);
    }
    *(std::map<data::GCGCostType,proto::GCGDiceSideType>::const_iterator *)(v2 + 64) = std::map<data::GCGCostType,proto::GCGDiceSideType>::find(
                                                                                         &GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map,
                                                                                         (const std::map<data::GCGCostType,proto::GCGDiceSideType>::key_type *)(v2 + 48));
    __y._M_node = std::map<data::GCGCostType,proto::GCGDiceSideType>::end(&GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>(data::GCGCostType)::element_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Self *)(v2 + 64),
           &__y) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,proto::GCGDiceSideType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> > *const)(v2 + 64));
      std::optional<proto::GCGDiceSideType>::optional<proto::GCGDiceSideType const&,true>(&v6, &v5->second);
    }
    else
    {
      std::optional<proto::GCGDiceSideType>::optional(&v6, (std::nullopt_t)&__y);
    }
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Base_ptr)v6;
  }
  else
  {
    std::optional<proto::GCGDiceSideType>::optional(&v6, a2);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Base_ptr)v6;
  }
  result = __y._M_node;
  if ( v8 == (char *)v2 )
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
