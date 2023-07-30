// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/zone/gcg_dice_zone.cpp

// Line 18: range 000000000DEA3FFA-000000000DEA425A
std::string *__cdecl GCGDiceZoneRuntimeData::getRuntimeDesc[abi:cxx11](
        std::string *retstr,
        const GCGDiceZoneRuntimeData *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  proto::GCGDiceSideType *v5; // rax
  unsigned int *v6; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:19";
  *(_QWORD *)(v2 + 16) = GCGDiceZoneRuntimeData::getRuntimeDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "[");
  __for_range = &this->dice_vec_;
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(&this->dice_vec_)._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(&this->dice_vec_)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = (proto::GCGDiceSideType *)__gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           *v6);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ",");
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
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

// Line 29: range 000000000DEA425C-000000000DEA43C2
void __cdecl GCGDiceZone::GCGDiceZone(GCGDiceZone *const this, GCGGameMode *game_mode)
{
  GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(this, game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dice_num_);
  }
  this->dice_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_dice_num_);
  }
  this->max_dice_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  std::vector<proto::GCGDiceSideType>::vector(&this->candidate_side_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_no_need_cost_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_no_need_cost_);
  this->is_no_need_cost_ = 0;
};

// Line 36: range 000000000DEA43C4-000000000DEA459F
int32_t __cdecl GCGDiceZone::init(GCGDiceZone *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // rax
  uint32_t v3; // ecx
  const GCGRule *v4; // rdx
  uint32_t *p_max_dice_num; // rax
  uint32_t max_dice_num; // ecx
  std::vector<proto::GCGDiceSideType>::value_type __x; // [rsp+18h] [rbp-8h] BYREF
  unsigned int type; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  for ( type = 1; type <= 8; ++type )
  {
    __x = type;
    std::vector<proto::GCGDiceSideType>::push_back(&this->candidate_side_vec_, &__x);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v2 = (unsigned __int64)GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v2 >> 3) + 0x7FFF8000) <= 3 )
    v2 = __asan_report_load4(v2);
  v3 = *(_DWORD *)v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dice_num_);
  }
  this->dice_num_ = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v4 = GCGGameMode::rule(this->game_mode_);
  p_max_dice_num = &v4->max_dice_num;
  if ( *(_BYTE *)(((unsigned __int64)p_max_dice_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_max_dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_dice_num >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(p_max_dice_num);
  }
  max_dice_num = v4->max_dice_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_dice_num_);
  }
  this->max_dice_num_ = max_dice_num;
  return 0;
};

// Line 48: range 000000000DEA45A0-000000000DEA47A2
std::map<proto::GCGDiceSideType,unsigned int> *__cdecl GCGDiceZone::getValidDiceMap(
        std::map<proto::GCGDiceSideType,unsigned int> *retstr,
        const GCGDiceZone *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> >::reference v5; // rax
  _DWORD *v6; // rdx
  unsigned __int64 v7; // rax
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+20h] [rbp-70h]
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 side:51";
  *(_QWORD *)(v2 + 16) = GCGDiceZone::getValidDiceMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::map<proto::GCGDiceSideType,unsigned int>::map(retstr);
  dice_vec = GCGDiceZone::getDiceVec(this);
  __for_range = dice_vec;
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(dice_vec)._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(dice_vec)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( *(_DWORD *)(v2 + 32) )
    {
      v7 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                               retstr,
                               (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 32));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load4(v7);
      ++*(_DWORD *)v7;
    }
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  if ( v13 == (char *)v2 )
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

// Line 62: range 000000000DEA47A4-000000000DEA486D
uint32_t __cdecl GCGDiceZone::getValidDiceSize(const GCGDiceZone *const this)
{
  __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> >::reference v1; // rax
  _DWORD *v2; // rdx
  uint32_t count; // [rsp+18h] [rbp-28h]
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+30h] [rbp-10h]
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+38h] [rbp-8h]

  count = 0;
  dice_vec = GCGDiceZone::getDiceVec(this);
  __for_range = dice_vec;
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(dice_vec)._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(dice_vec)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin,
            &__for_end) )
  {
    v1 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    if ( *v2 )
      ++count;
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  return count;
};

// Line 76: range 000000000DEA486E-000000000DEA49FB
std::map<proto::GCGDiceSideType,unsigned int> *__cdecl GCGDiceZone::getDiceSideMap(
        std::map<proto::GCGDiceSideType,unsigned int> *retstr,
        GCGDiceZone *const this,
        const std::set<unsigned int> *select_dice_set)
{
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  const std::map<proto::GCGDiceSideType,unsigned int>::key_type *v5; // rdx
  unsigned __int64 v6; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::key_type __x; // [rsp+28h] [rbp-38h] BYREF
  uint32_t index; // [rsp+2Ch] [rbp-34h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  const std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+40h] [rbp-20h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-18h]

  std::map<proto::GCGDiceSideType,unsigned int>::map(retstr);
  dice_vec = GCGDiceZone::getDiceVec(this);
  __for_range = select_dice_set;
  __for_begin._M_node = std::set<unsigned int>::begin(select_dice_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(select_dice_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    index = *v4;
    if ( index < std::vector<proto::GCGDiceSideType>::size(dice_vec) )
    {
      v5 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, index);
      v6 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](retstr, v5);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load4(v6);
      ++*(_DWORD *)v6;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __x = GCG_DICE_SIDE_INVALID;
  std::map<proto::GCGDiceSideType,unsigned int>::erase(retstr, &__x);
  return retstr;
};

// Line 91: range 000000000DEA49FC-000000000DEA4BCA
std::vector<unsigned int> *__cdecl GCGDiceZone::getAllDiceTypeCountVec(
        std::vector<unsigned int> *retstr,
        const GCGDiceZone *const this)
{
  proto::GCGDiceSideType *v2; // rax
  proto::GCGDiceSideType *v3; // rdx
  std::vector<unsigned int>::size_type v4; // rbx
  unsigned __int64 v5; // rax
  std::allocator<unsigned int> __a; // [rsp+1Fh] [rbp-31h] BYREF
  proto::GCGDiceSideType dice_side_type; // [rsp+20h] [rbp-30h]
  uint32_t idx; // [rsp+24h] [rbp-2Ch]
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+38h] [rbp-18h]

  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(retstr, 9uLL, &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  __for_range = GCGDiceZone::getDiceVec(this);
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin,
            &__for_end) )
  {
    v2 = (proto::GCGDiceSideType *)__gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    dice_side_type = *v3;
    idx = dice_side_type;
    v4 = (unsigned int)dice_side_type;
    if ( v4 < std::vector<unsigned int>::size(retstr) )
    {
      v5 = (unsigned __int64)std::vector<unsigned int>::operator[](retstr, idx);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load4(v5);
      ++*(_DWORD *)v5;
    }
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  __for_begin._M_current = (const proto::GCGDiceSideType *)std::vector<unsigned int>::begin(retstr)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
  std::vector<unsigned int>::erase(retstr, (std::vector<unsigned int>::const_iterator)__for_end._M_current);
  return retstr;
};

// Line 107: range 000000000DEA4BCC-000000000DEA5176
int32_t __cdecl GCGDiceZone::roll(GCGDiceZone *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGSkillLogic *SkillLogic; // r14
  GCGControllerValue ControllerId; // eax
  std::vector<proto::GCGDiceSideType>::size_type v6; // rcx
  char v7; // al
  const std::vector<proto::GCGDiceSideType>::value_type *v8; // rax
  std::vector<proto::GCGDiceSideType>::size_type v9; // rcx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  GCGControllerValue v12; // r14d
  std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  std::vector<proto::GCGDiceSideType>::value_type __x; // [rsp+18h] [rbp-118h] BYREF
  uint32_t i; // [rsp+1Ch] [rbp-114h]
  __gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > __rhs; // [rsp+20h] [rbp-110h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+28h] [rbp-108h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 8 iter:115 64 16 15 message_ptr:126 96 24 23 fix_dice_vec_result:112";
  *(_QWORD *)(v1 + 16) = GCGDiceZone::roll;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  dice_vec = GCGDiceZone::getDiceVec(this);
  std::vector<proto::GCGDiceSideType>::clear(dice_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dice_num_);
  }
  std::vector<proto::GCGDiceSideType>::reserve(dice_vec, this->dice_num_);
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v1 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  ControllerId = GCGDiceZone::getControllerId(this);
  GCGSkillLogic::getRollFixedSideResult(SkillLogic, ControllerId, (std::vector<proto::GCGDiceSideType> *)(v1 + 96));
  *(std::vector<proto::GCGDiceSideType>::iterator *)(v1 + 32) = std::vector<proto::GCGDiceSideType>::begin((std::vector<proto::GCGDiceSideType> *const)(v1 + 96));
  while ( 1 )
  {
    __rhs._M_current = std::vector<proto::GCGDiceSideType>::end((std::vector<proto::GCGDiceSideType> *const)(v1 + 96))._M_current;
    if ( !__gnu_cxx::operator!=<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>(
            (const __gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *)(v1 + 32),
            &__rhs) )
      goto LABEL_14;
    v6 = std::vector<proto::GCGDiceSideType>::size(dice_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->dice_num_);
    }
    if ( v6 < this->dice_num_ )
      v7 = 1;
    else
LABEL_14:
      v7 = 0;
    if ( !v7 )
      break;
    v8 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>::operator*((const __gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *const)(v1 + 32));
    std::vector<proto::GCGDiceSideType>::push_back(dice_vec, v8);
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>::operator++((__gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *const)(v1 + 32));
  }
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->dice_num_);
    }
    if ( i >= this->dice_num_ )
      goto LABEL_25;
    v9 = std::vector<proto::GCGDiceSideType>::size(dice_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dice_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->dice_num_);
    }
    if ( v9 >= this->dice_num_ )
LABEL_25:
      v10 = 0;
    else
      v10 = 1;
    if ( !v10 )
      break;
    __x = GCGDiceZone::randomSide(this);
    std::vector<proto::GCGDiceSideType>::push_back(dice_vec, &__x);
  }
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_dice_zone.cpp",
    "roll",
    125);
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v22, (const char (*)[14])"roll result: ");
  common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v11, dice_vec);
  common::milog::MiLogStream::~MiLogStream(&v22);
  common::tools::perf::make_shared<GCGMsgDiceRoll>();
  v12 = GCGDiceZone::getControllerId(this);
  v13 = std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v13 = (std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v13->controller_id);
  }
  v13->controller_id = v12;
  v14 = std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDiceRoll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  std::vector<proto::GCGDiceSideType>::operator=(&v14->dice_vec, dice_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgDiceRoll,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgDiceRoll> *)(v1 + 64));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgDiceRoll>::~shared_ptr((std::shared_ptr<GCGMsgDiceRoll> *const)(v1 + 64));
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v1 + 96));
  result = 0;
  if ( v23 == (char *)v1 )
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

// Line 134: range 000000000DEA5178-000000000DEA58D1
int32_t __cdecl GCGDiceZone::reroll(GCGDiceZone *const this, const std::set<unsigned int> *p_index_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGSkillLogic *SkillLogic; // r14
  GCGControllerValue ControllerId; // eax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  uint32_t v9; // eax
  std::vector<proto::GCGDiceSideType>::reference v10; // rax
  int *v11; // rdx
  int v12; // r14d
  std::vector<proto::GCGDiceSideType>::reference v13; // rax
  _DWORD *v14; // rdx
  GCGDiceSideType v15; // r14d
  std::vector<proto::GCGDiceSideType>::reference v16; // rax
  GCGDiceSideType *v17; // rdx
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  GCGControllerValue v25; // r14d
  std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::vector<unsigned int> *p_select_dice_index_vec; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last; // [rsp+8h] [rbp-168h]
  unsigned int val; // [rsp+24h] [rbp-14Ch] BYREF
  uint32_t fix_index; // [rsp+28h] [rbp-148h]
  unsigned int dice_index; // [rsp+2Ch] [rbp-144h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+40h] [rbp-130h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-110h] BYREF
  char v43[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 message_ptr:161 64 24 23 fix_dice_vec_result:138 128 24 17 dice_vec_copy:143";
  *(_QWORD *)(v2 + 16) = GCGDiceZone::reroll;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  GCGDiceZone::addRerollIdx(this);
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  ControllerId = GCGDiceZone::getControllerId(this);
  GCGSkillLogic::getRerollFixedSideResult(SkillLogic, ControllerId, (std::vector<proto::GCGDiceSideType> *)(v2 + 64));
  fix_index = 0;
  dice_vec = GCGDiceZone::getDiceVec(this);
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 128), dice_vec);
  __for_range = p_index_set;
  __for_begin._M_node = std::set<unsigned int>::begin(p_index_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(p_index_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    dice_index = *v8;
    if ( dice_index < std::vector<proto::GCGDiceSideType>::size(dice_vec) )
    {
      if ( fix_index >= std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v2 + 64)) )
      {
        v15 = GCGDiceZone::randomSide(this);
        v16 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, dice_index);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v16);
        }
        *v17 = v15;
      }
      else
      {
        v9 = fix_index++;
        v10 = std::vector<proto::GCGDiceSideType>::operator[]((std::vector<proto::GCGDiceSideType> *const)(v2 + 64), v9);
        v11 = (int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        v13 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, dice_index);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v13);
        }
        *v14 = v12;
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v42,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_dice_zone.cpp",
    "reroll",
    160);
  v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v42, (const char (*)[9])"reroll: ");
  v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, p_index_set);
  v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", result: ");
  v21 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v20, dice_vec);
  v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])", dice_vec_copy:");
  v23 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(
          v22,
          (const std::vector<proto::GCGDiceSideType> *)(v2 + 128));
  v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v23, (const char (*)[18])", controller_id_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  val = this->controller_id_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
  common::milog::MiLogStream::~MiLogStream(&v42);
  common::tools::perf::make_shared<GCGMsgDiceReroll>();
  v25 = GCGDiceZone::getControllerId(this);
  v26 = std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v26->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v26 = (std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->controller_id);
  }
  v26->controller_id = v25;
  p_select_dice_index_vec = &std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->select_dice_index_vec;
  __last = std::set<unsigned int>::end(p_index_set)._M_node;
  M_node = std::set<unsigned int>::begin(p_index_set)._M_node;
  v29 = std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(&v29->select_dice_index_vec)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
  std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
    p_select_dice_index_vec,
    (std::vector<unsigned int>::const_iterator)__for_end._M_node,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (std::_Rb_tree_const_iterator<unsigned int>)__last);
  v30 = std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDiceReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::vector<proto::GCGDiceSideType>::operator=(&v30->dice_vec, dice_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgDiceReroll,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgDiceReroll> *)(v2 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgDiceReroll>::~shared_ptr((std::shared_ptr<GCGMsgDiceReroll> *const)(v2 + 32));
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 128));
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 64));
  result = 0;
  if ( v43 == (char *)v2 )
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

// Line 170: range 000000000DEA58D2-000000000DEA5F9C
__int64 __fastcall GCGDiceZone::setDice(
        GCGDiceZone *const this,
        uint32_t index,
        GCGDiceSideType dice_side,
        GCGReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<proto::GCGDiceSideType>::size_type v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  __int64 result; // rax
  std::vector<proto::GCGDiceSideType>::reference v12; // rax
  _DWORD *v13; // rdx
  int v14; // r14d
  std::vector<proto::GCGDiceSideType>::reference v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  GCGReason *p_reason; // rax
  int v29; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v31; // rax
  _DWORD *v32; // rdx
  int v33; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v35; // rax
  _DWORD *v36; // rdx
  GCGGameMode *game_mode; // r14
  unsigned __int64 val; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v43; // [rsp+40h] [rbp-D0h] BYREF
  char v44[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 12 old_side:177 64 4 9 index:169 80 4 13 dice_side:169 96 16 11 msg_ptr:181";
  *(_QWORD *)(v4 + 16) = GCGDiceZone::setDice;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 64) = index;
  *(_DWORD *)(v4 + 80) = dice_side;
  dice_vec = GCGDiceZone::getDiceVec(this);
  v7 = *(unsigned int *)(v4 + 64);
  if ( v7 < std::vector<proto::GCGDiceSideType>::size(dice_vec) )
  {
    v12 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v4 + 64));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    *(_DWORD *)(v4 + 48) = *v13;
    v14 = *(_DWORD *)(v4 + 80);
    v15 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v4 + 64));
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v15);
    }
    *v16 = v14;
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "setDice",
      179);
    v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v43, (const char (*)[17])off_1BB4D880);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
    v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" before: ");
    v20 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType,(proto::GCGDiceSideType*)0>(
            v19,
            (const proto::GCGDiceSideType *)(v4 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" after: ");
    common::milog::MiLogStream::operator<<<proto::GCGDiceSideType,(proto::GCGDiceSideType*)0>(
      v21,
      (const proto::GCGDiceSideType *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v43);
    common::tools::perf::make_shared<GCGMsgAddDice>();
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    controller_id = this->controller_id_;
    v23 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v23->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v23->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v23 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->controller_id);
    }
    v23->controller_id = controller_id;
    v24 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v24->change_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v24->change_count >> 3) + 0x7FFF8000) <= 3 )
    {
      v24 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v24->change_count);
    }
    v24->change_count = 0;
    if ( !*(_DWORD *)(v4 + 48) )
    {
      v25 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v25->change_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v25->change_count >> 3) + 0x7FFF8000) <= 3 )
      {
        v25 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v25->change_count);
      }
      ++v25->change_count;
    }
    if ( !*(_DWORD *)(v4 + 80) )
    {
      v26 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v26->change_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v26->change_count >> 3) + 0x7FFF8000) <= 3 )
      {
        v26 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v26->change_count);
      }
      --v26->change_count;
    }
    v27 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    p_reason = &v27->reason;
    if ( *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_reason);
    }
    v27->reason = reason;
    v29 = *(_DWORD *)(v4 + 80);
    v30 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v31 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
            &v30->dice_map,
            (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v4 + 64));
    v32 = v31;
    if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v31);
    }
    *v32 = v29;
    v33 = *(_DWORD *)(v4 + 48);
    v34 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v35 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
            &v34->before_dice_map,
            (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v4 + 64));
    v36 = v35;
    if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v35);
    }
    *v36 = v33;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgAddDice,void>(
      &p_msg,
      (const std::shared_ptr<GCGMsgAddDice> *)(v4 + 96));
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
    std::shared_ptr<GCGMsgAddDice>::~shared_ptr((std::shared_ptr<GCGMsgAddDice> *const)(v4 + 96));
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "setDice",
      174);
    v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v43,
           (const char (*)[21])"index error. index: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" size: ");
    val = std::vector<proto::GCGDiceSideType>::size(dice_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    result = 0xFFFFFFFFLL;
  }
  if ( v44 == (char *)v4 )
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

// Line 201: range 000000000DEA5F9E-000000000DEA6820
int32_t __cdecl GCGDiceZone::setDice(
        GCGDiceZone *const this,
        const std::map<unsigned int,proto::GCGDiceSideType> *dice_side_map,
        GCGReason reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<proto::GCGDiceSideType>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::vector<proto::GCGDiceSideType>::reference v10; // rax
  int *v11; // rdx
  int v12; // r14d
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type v15; // r14d
  std::vector<proto::GCGDiceSideType>::reference v16; // rax
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  GCGReason *p_reason; // rax
  std::map<unsigned int,proto::GCGDiceSideType> *p_dice_map; // rdx
  std::map<unsigned int,proto::GCGDiceSideType> *v27; // r14
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  uint32_t before_count; // [rsp+28h] [rbp-188h]
  uint32_t after_count; // [rsp+2Ch] [rbp-184h]
  std::map<unsigned int,proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  std::map<unsigned int,proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  unsigned __int64 val; // [rsp+40h] [rbp-170h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+48h] [rbp-168h]
  const std::map<unsigned int,proto::GCGDiceSideType> *__for_range; // [rsp+50h] [rbp-160h]
  const std::pair<unsigned int const,proto::GCGDiceSideType> *v39; // [rsp+58h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *index; // [rsp+60h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *dice_side; // [rsp+68h] [rbp-148h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v43; // [rsp+80h] [rbp-130h] BYREF
  char v44[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 11 msg_ptr:219 80 24 16 old_dice_vec:203 144 48 24 before_dice_side_map:205";
  *(_QWORD *)(v3 + 16) = GCGDiceZone::setDice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  dice_vec = GCGDiceZone::getDiceVec(this);
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v3 + 80), dice_vec);
  before_count = GCGDiceZone::getValidDiceSize(this);
  std::map<unsigned int,proto::GCGDiceSideType>::map((std::map<unsigned int,proto::GCGDiceSideType> *const)(v3 + 144));
  __for_range = dice_side_map;
  __for_begin._M_node = std::map<unsigned int,proto::GCGDiceSideType>::begin(dice_side_map)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GCGDiceSideType>::end(dice_side_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v39 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGDiceSideType>>::operator*(&__for_begin);
    index = std::get<0ul,unsigned int const,proto::GCGDiceSideType>(v39);
    dice_side = (std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *)std::get<1ul,unsigned int const,proto::GCGDiceSideType>(v39);
    if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(index);
    }
    v6 = *index;
    if ( v6 < std::vector<proto::GCGDiceSideType>::size(dice_vec) )
    {
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index);
      }
      v10 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *index);
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
              (std::map<unsigned int,proto::GCGDiceSideType> *const)(v3 + 144),
              index);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v13);
      }
      *v14 = v12;
      if ( *(_BYTE *)(((unsigned __int64)dice_side >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dice_side & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_side >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dice_side);
      }
      v15 = *dice_side;
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index);
      }
      v16 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *index);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v16);
      }
      *v17 = v15;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/zone/gcg_dice_zone.cpp",
        "setDice",
        210);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v43,
             (const char (*)[21])"index error. index: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, index);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" size: ");
      val = std::vector<proto::GCGDiceSideType>::size(dice_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_dice_zone.cpp",
    "setDice",
    216);
  v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v43, (const char (*)[19])off_1BB4D9A0);
  v19 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(
          v18,
          (const std::vector<proto::GCGDiceSideType> *)(v3 + 80));
  v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" after:");
  common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v20, dice_vec);
  common::milog::MiLogStream::~MiLogStream(&v43);
  after_count = GCGDiceZone::getValidDiceSize(this);
  common::tools::perf::make_shared<GCGMsgAddDice>();
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  controller_id = this->controller_id_;
  v22 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v22 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->controller_id);
  }
  v22->controller_id = controller_id;
  v23 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&v23->change_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->change_count >> 3) + 0x7FFF8000) <= 3 )
  {
    v23 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->change_count);
  }
  v23->change_count = after_count - before_count;
  v24 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  p_reason = &v24->reason;
  if ( *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_reason);
  }
  v24->reason = reason;
  p_dice_map = &std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48))->dice_map;
  std::map<unsigned int,proto::GCGDiceSideType>::operator=(p_dice_map, dice_side_map);
  v27 = std::move<std::map<unsigned int,proto::GCGDiceSideType> &>((std::map<unsigned int,proto::GCGDiceSideType> *)(v3 + 144));
  v28 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  std::map<unsigned int,proto::GCGDiceSideType>::operator=(&v28->before_dice_map, v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgAddDice,void>(&p_msg, (const std::shared_ptr<GCGMsgAddDice> *)(v3 + 48));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgAddDice>::~shared_ptr((std::shared_ptr<GCGMsgAddDice> *const)(v3 + 48));
  std::map<unsigned int,proto::GCGDiceSideType>::~map((std::map<unsigned int,proto::GCGDiceSideType> *const)(v3 + 144));
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v3 + 80));
  result = 0;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 231: range 000000000DEA6822-000000000DEA700C
int32_t __cdecl GCGDiceZone::setDice(
        GCGDiceZone *const this,
        std::vector<proto::GCGDiceSideType> *p_dice_vec,
        GCGReason reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<proto::GCGDiceSideType>::size_type v6; // r14
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  std::vector<proto::GCGDiceSideType>::size_type v11; // r14
  std::vector<proto::GCGDiceSideType>::reference v12; // rax
  int *v13; // rdx
  int v14; // r14d
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  std::vector<proto::GCGDiceSideType> *v20; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  GCGReason *p_reason; // rax
  std::vector<proto::GCGDiceSideType>::size_type v26; // r14
  std::vector<proto::GCGDiceSideType>::reference v27; // rax
  int *v28; // rdx
  int v29; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v31; // rax
  _DWORD *v32; // rdx
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v34; // rax
  _DWORD *v35; // rdx
  std::map<unsigned int,proto::GCGDiceSideType> *v36; // r14
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  uint32_t before_count; // [rsp+28h] [rbp-118h]
  uint32_t after_count; // [rsp+2Ch] [rbp-114h]
  unsigned __int64 val; // [rsp+30h] [rbp-110h] BYREF
  std::vector<proto::GCGDiceSideType> *cur_dice_vec; // [rsp+38h] [rbp-108h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v46; // [rsp+50h] [rbp-F0h] BYREF
  char v47[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 5 i:252 48 16 11 msg_ptr:248 80 48 24 before_dice_side_map:238";
  *(_QWORD *)(v3 + 16) = GCGDiceZone::setDice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  v6 = std::vector<proto::GCGDiceSideType>::size(p_dice_vec);
  if ( v6 <= GCGDiceZone::getMaxDiceSize(this) )
  {
    cur_dice_vec = GCGDiceZone::getDiceVec(this);
    std::map<unsigned int,proto::GCGDiceSideType>::map((std::map<unsigned int,proto::GCGDiceSideType> *const)(v3 + 80));
    for ( *(_DWORD *)(v3 + 32) = 0; ; ++*(_DWORD *)(v3 + 32) )
    {
      v11 = *(unsigned int *)(v3 + 32);
      if ( v11 >= std::vector<proto::GCGDiceSideType>::size(cur_dice_vec) )
        break;
      v12 = std::vector<proto::GCGDiceSideType>::operator[](cur_dice_vec, *(unsigned int *)(v3 + 32));
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
              (std::map<unsigned int,proto::GCGDiceSideType> *const)(v3 + 80),
              (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v3 + 32));
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v15);
      }
      *v16 = v14;
    }
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "setDice",
      243);
    v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v46, (const char (*)[19])off_1BB4D9A0);
    v18 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v17, cur_dice_vec);
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" after: ");
    common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v19, p_dice_vec);
    common::milog::MiLogStream::~MiLogStream(&v46);
    before_count = GCGDiceZone::getValidDiceSize(this);
    v20 = std::move<std::vector<proto::GCGDiceSideType> &>(p_dice_vec);
    std::vector<proto::GCGDiceSideType>::operator=(cur_dice_vec, v20);
    after_count = GCGDiceZone::getValidDiceSize(this);
    common::tools::perf::make_shared<GCGMsgAddDice>();
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    controller_id = this->controller_id_;
    v22 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v22 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->controller_id);
    }
    v22->controller_id = controller_id;
    v23 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v23->change_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v23->change_count >> 3) + 0x7FFF8000) <= 3 )
    {
      v23 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->change_count);
    }
    v23->change_count = after_count - before_count;
    v24 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    p_reason = &v24->reason;
    if ( *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_reason);
    }
    v24->reason = reason;
    for ( *(_DWORD *)(v3 + 32) = 0; ; ++*(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->max_dice_num_);
      }
      if ( this->max_dice_num_ <= *(_DWORD *)(v3 + 32) )
        break;
      v26 = *(unsigned int *)(v3 + 32);
      if ( v26 >= std::vector<proto::GCGDiceSideType>::size(cur_dice_vec) )
      {
        v33 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        v34 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
                &v33->dice_map,
                (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v3 + 32));
        v35 = v34;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v34);
        }
        *v35 = 0;
      }
      else
      {
        v27 = std::vector<proto::GCGDiceSideType>::operator[](cur_dice_vec, *(unsigned int *)(v3 + 32));
        v28 = (int *)v27;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        v29 = *v28;
        v30 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        v31 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
                &v30->dice_map,
                (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v3 + 32));
        v32 = v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v31);
        }
        *v32 = v29;
      }
    }
    v36 = std::move<std::map<unsigned int,proto::GCGDiceSideType> &>((std::map<unsigned int,proto::GCGDiceSideType> *)(v3 + 80));
    v37 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    std::map<unsigned int,proto::GCGDiceSideType>::operator=(&v37->before_dice_map, v36);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgAddDice,void>(
      &p_msg,
      (const std::shared_ptr<GCGMsgAddDice> *)(v3 + 48));
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
    std::shared_ptr<GCGMsgAddDice>::~shared_ptr((std::shared_ptr<GCGMsgAddDice> *const)(v3 + 48));
    v10 = 0;
    std::map<unsigned int,proto::GCGDiceSideType>::~map((std::map<unsigned int,proto::GCGDiceSideType> *const)(v3 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "setDice",
      234);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v46,
           (const char (*)[44])"dice num larger than limit. dice_vec size: ");
    val = std::vector<proto::GCGDiceSideType>::size(p_dice_vec);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" limit: ");
    *(_DWORD *)(v3 + 32) = GCGDiceZone::getMaxDiceSize(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v46);
    v10 = -1;
  }
  result = v10;
  if ( v47 == (char *)v3 )
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

// Line 270: range 000000000DEA700E-000000000DEA72C3
int32_t __cdecl GCGDiceZone::onGMSetDice(GCGDiceZone *const this, const std::vector<unsigned int> *dice_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // rax
  std::vector<proto::GCGDiceSideType> *v6; // rax
  int32_t v7; // r14d
  int32_t result; // eax
  std::vector<proto::GCGDiceSideType>::value_type __x; // [rsp+18h] [rbp-D8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  const unsigned int *dice_side; // [rsp+38h] [rbp-B8h]
  std::vector<proto::GCGDiceSideType> p_dice_vec; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 22 temp_dice_side_vec:271";
  *(_QWORD *)(v2 + 16) = GCGDiceZone::onGMSetDice;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 32));
  __for_range = dice_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(dice_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(dice_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    dice_side = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    __x = *dice_side;
    std::vector<proto::GCGDiceSideType>::push_back((std::vector<proto::GCGDiceSideType> *const)(v2 + 32), &__x);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v6 = std::move<std::vector<proto::GCGDiceSideType> &>((std::vector<proto::GCGDiceSideType> *)(v2 + 32));
  std::vector<proto::GCGDiceSideType>::vector(&p_dice_vec, v6);
  ret = GCGDiceZone::setDice(this, &p_dice_vec, GCG_REASON_GM);
  std::vector<proto::GCGDiceSideType>::~vector(&p_dice_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::trySendMsgPack(this->game_mode_);
  v7 = ret;
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 32));
  result = v7;
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

// Line 282: range 000000000DEA72C4-000000000DEA735D
bool __cdecl GCGDiceZone::isDiceValid(const GCGDiceZone *const this, uint32_t dice_index)
{
  std::vector<proto::GCGDiceSideType>::const_reference v3; // rax
  _DWORD *v4; // rdx
  const std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+18h] [rbp-18h]

  dice_vec = GCGDiceZone::getDiceVec(this);
  if ( dice_index >= std::vector<proto::GCGDiceSideType>::size(dice_vec) )
    return 0;
  v3 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, dice_index);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  return *v4 != 0;
};

// Line 292: range 000000000DEA735E-000000000DEA7952
__int64 __fastcall GCGDiceZone::costDice(GCGDiceZone *const this, uint32_t dice_index, GCGReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<proto::GCGDiceSideType>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int v10; // r14d
  std::vector<proto::GCGDiceSideType>::reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<proto::GCGDiceSideType>::reference v17; // rax
  unsigned int *v18; // rdx
  std::vector<proto::GCGDiceSideType>::reference v19; // rax
  _DWORD *v20; // rdx
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  GCGGameMode *game_mode; // r14
  __int64 result; // rax
  unsigned int v28; // [rsp+1Ch] [rbp-D4h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 dice_index:291 64 16 11 msg_ptr:307";
  *(_QWORD *)(v3 + 16) = GCGDiceZone::costDice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = dice_index;
  dice_vec = GCGDiceZone::getDiceVec(this);
  v6 = *(unsigned int *)(v3 + 48);
  if ( v6 < std::vector<proto::GCGDiceSideType>::size(dice_vec) )
  {
    v11 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v3 + 48));
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    if ( *v12 )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/zone/gcg_dice_zone.cpp",
        "costDice",
        304);
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v32,
              (const char (*)[17])"cost dice index:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" side: ");
      v17 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v3 + 48));
      v18 = (unsigned int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v28 = *v18;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v28);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v19 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v3 + 48));
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v19);
      }
      *v20 = 0;
      common::tools::perf::make_shared<GCGMsgCostDice>();
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->controller_id_);
      }
      controller_id = this->controller_id_;
      v22 = std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v22 = (std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->controller_id);
      }
      v22->controller_id = controller_id;
      v23 = std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      std::vector<unsigned int>::push_back(
        &v23->dice_index_vec,
        (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v24 = std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v24->reason >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v24->reason >> 3) + 0x7FFF8000) <= 3 )
      {
        v24 = (std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v24->reason);
      }
      v24->reason = reason;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgCostDice,void>(
        &p_msg,
        (const std::shared_ptr<GCGMsgCostDice> *)(v3 + 64));
      GCGGameMode::sendMessage(game_mode, &p_msg);
      std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
      v10 = 0;
      std::shared_ptr<GCGMsgCostDice>::~shared_ptr((std::shared_ptr<GCGMsgCostDice> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/zone/gcg_dice_zone.cpp",
        "costDice",
        301);
      v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v32,
              (const char (*)[29])"index already costed. index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
      v10 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "costDice",
      296);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v32,
           (const char (*)[20])"index error. index:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" dice size: ");
    val = std::vector<proto::GCGDiceSideType>::size(dice_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v10 = -1;
  }
  result = v10;
  if ( v33 == (char *)v3 )
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

// Line 316: range 000000000DEA7954-000000000DEA7DE9
int32_t __cdecl GCGDiceZone::costDice(
        GCGDiceZone *const this,
        const std::set<unsigned int> *dice_set,
        GCGReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<proto::GCGDiceSideType>::size_type v11; // r14
  std::vector<proto::GCGDiceSideType>::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+30h] [rbp-D0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 dice_index:320 64 16 11 msg_ptr:319";
  *(_QWORD *)(v3 + 16) = GCGDiceZone::costDice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  dice_vec = GCGDiceZone::getDiceVec(this);
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_dice_zone.cpp",
    "costDice",
    318);
  v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         &v26,
         (const char (*)[22])"cost dice index_set: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int>(v6, dice_set);
  v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" dice: ");
  common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v8, dice_vec);
  common::milog::MiLogStream::~MiLogStream(&v26);
  common::tools::perf::make_shared<GCGMsgCostDice>();
  __for_range = dice_set;
  __for_begin._M_node = std::set<unsigned int>::begin(dice_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(dice_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v3 + 48) = *v10;
    v11 = *(unsigned int *)(v3 + 48);
    if ( v11 < std::vector<proto::GCGDiceSideType>::size(dice_vec) )
    {
      v12 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v3 + 48));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = 0;
      v14 = std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      std::vector<unsigned int>::push_back(
        &v14->dice_index_vec,
        (const std::vector<unsigned int>::value_type *)(v3 + 48));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  controller_id = this->controller_id_;
  v16 = std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v16->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v16 = (std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->controller_id);
  }
  v16->controller_id = controller_id;
  v17 = std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v17->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v17 = (std::__shared_ptr_access<GCGMsgCostDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->reason);
  }
  v17->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgCostDice,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgCostDice> *)(v3 + 64));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgCostDice>::~shared_ptr((std::shared_ptr<GCGMsgCostDice> *const)(v3 + 64));
  result = 0;
  if ( v27 == (char *)v3 )
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

// Line 336: range 000000000DEA81B0-000000000DEA8812
int32_t __cdecl GCGDiceZone::addDice(
        GCGDiceZone *const this,
        GCGDiceSideType dice_type,
        uint32_t count,
        GCGReason reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t v11; // r14d
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  GCGReason *p_reason; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  _DWORD *v16; // rdx
  std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v18; // rax
  GCGDiceSideType *v19; // rdx
  GCGGameMode *game_mode; // r14
  int32_t result; // eax
  uint32_t i; // [rsp+2Ch] [rbp-144h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::vector<proto::GCGDiceSideType> *dice_vec; // [rsp+40h] [rbp-130h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-110h] BYREF
  char v31[240]; // [rsp+80h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 18 selected_index:387 64 16 27 check_and_add_dice_func:348 96 16 11 msg_ptr:383 128 24 22"
                        " selected_index_vec:368";
  *(_QWORD *)(v4 + 16) = GCGDiceZone::addDice;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( dice_type )
  {
    if ( count )
    {
      dice_vec = GCGDiceZone::getDiceVec(this);
      *(_QWORD *)(v4 + 64) = dice_vec;
      *(_QWORD *)(v4 + 72) = this;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
      for ( i = 0; i < count; ++i )
      {
        *(_DWORD *)(v4 + 48) = 0;
        if ( !GCGDiceZone::addDice(proto::GCGDiceSideType,unsigned int,proto::GCGReason)::{lambda(unsigned int &,proto::GCGDiceSideType)#1}::operator()(
                (const GCGDiceZone::addDice::<lambda(uint32_t&, GCGDiceSideType)> *const)(v4 + 64),
                (uint32_t *)(v4 + 48),
                dice_type) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/zone/gcg_dice_zone.cpp",
            "addDice",
            374);
          v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v30,
                 (const char (*)[34])"check add dice failed, dice size:");
          __for_end._M_current = (unsigned int *)std::vector<proto::GCGDiceSideType>::size(dice_vec);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v8,
            (const unsigned __int64 *)&__for_end);
          common::milog::MiLogStream::~MiLogStream(&v30);
          break;
        }
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v4 + 128),
          (const std::vector<unsigned int>::value_type *)(v4 + 48));
      }
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 128)) )
      {
        v7 = 0;
      }
      else
      {
        common::tools::perf::make_shared<GCGMsgAddDice>();
        if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->controller_id_);
        }
        controller_id = this->controller_id_;
        v10 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
        }
        v10->controller_id = controller_id;
        v11 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 128));
        v12 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v12->change_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->change_count >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->change_count);
        }
        v12->change_count = v11;
        v13 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        p_reason = &v13->reason;
        if ( *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_reason);
        }
        v13->reason = reason;
        __for_range = (std::vector<unsigned int> *)(v4 + 128);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 128))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          *(_DWORD *)(v4 + 48) = *v16;
          v17 = std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v18 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
                  &v17->dice_map,
                  (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v4 + 48));
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v18);
          }
          *v19 = dice_type;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        game_mode = this->game_mode_;
        std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgAddDice,void>(
          &p_msg,
          (const std::shared_ptr<GCGMsgAddDice> *)(v4 + 96));
        GCGGameMode::sendMessage(game_mode, &p_msg);
        std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
        v7 = 0;
        std::shared_ptr<GCGMsgAddDice>::~shared_ptr((std::shared_ptr<GCGMsgAddDice> *const)(v4 + 96));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "addDice",
      339);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v30, (const char (*)[21])off_1BB4DEA0);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  result = v7;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 348: range 000000000DEA7DEA-000000000DEA81AE
__int64 __fastcall GCGDiceZone::addDice(proto::GCGDiceSideType,unsigned int,proto::GCGReason)::{lambda(unsigned int &,proto::GCGDiceSideType)#1}::operator()(
        unsigned __int64 __closure,
        unsigned __int64 selected_index,
        GCGDiceSideType dice_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::vector<proto::GCGDiceSideType>::reference v6; // rax
  _DWORD *v7; // rdx
  int v8; // r13d
  std::vector<proto::GCGDiceSideType>::reference v9; // rax
  _DWORD *v10; // rdx
  __int64 result; // rax
  std::vector<proto::GCGDiceSideType>::size_type v12; // r14
  uint32_t v13; // ecx
  uint32_t i; // [rsp+2Ch] [rbp-74h]
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 dice_type:348";
  *(_QWORD *)(v3 + 16) = GCGDiceZone::addDice(proto::GCGDiceSideType,unsigned int,proto::GCGReason)::{lambda(unsigned int &,proto::GCGDiceSideType)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dice_type;
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    if ( i >= std::vector<proto::GCGDiceSideType>::size(*(const std::vector<proto::GCGDiceSideType> *const *)__closure) )
      break;
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v6 = std::vector<proto::GCGDiceSideType>::operator[](*(std::vector<proto::GCGDiceSideType> *const *)__closure, i);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( !*v7 )
    {
      v8 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v9 = std::vector<proto::GCGDiceSideType>::operator[](*(std::vector<proto::GCGDiceSideType> *const *)__closure, i);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v9);
      }
      *v10 = v8;
      if ( *(_BYTE *)((selected_index >> 3) + 0x7FFF8000) != 0
        && (char)((selected_index & 7) + 3) >= *(_BYTE *)((selected_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(selected_index);
      }
      *(_DWORD *)selected_index = i;
      result = 1LL;
      goto LABEL_34;
    }
  }
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v12 = std::vector<proto::GCGDiceSideType>::size(*(const std::vector<proto::GCGDiceSideType> *const *)__closure);
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  if ( v12 < GCGDiceZone::getMaxDiceSize(*(const GCGDiceZone *const *)(__closure + 8)) )
  {
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::vector<proto::GCGDiceSideType>::push_back(
      *(std::vector<proto::GCGDiceSideType> *const *)__closure,
      (const std::vector<proto::GCGDiceSideType>::value_type *)(v3 + 32));
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v13 = std::vector<proto::GCGDiceSideType>::size(*(const std::vector<proto::GCGDiceSideType> *const *)__closure) - 1;
    if ( *(_BYTE *)((selected_index >> 3) + 0x7FFF8000) != 0
      && (char)((selected_index & 7) + 3) >= *(_BYTE *)((selected_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(selected_index);
    }
    *(_DWORD *)selected_index = v13;
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
LABEL_34:
  if ( v16 == (char *)v3 )
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

// Line 396: range 000000000DEA8814-000000000DEA892D
int32_t __cdecl GCGDiceZone::setCandidateSide(
        GCGDiceZone *const this,
        const std::set<proto::GCGDiceSideType> *p_candidate_side_set)
{
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Base_ptr M_node; // r13
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Base_ptr v4; // r12
  __gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > __i; // [rsp+10h] [rbp-50h] BYREF
  __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > __position; // [rsp+18h] [rbp-48h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-40h] BYREF

  if ( std::set<proto::GCGDiceSideType>::empty(p_candidate_side_set) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_dice_zone.cpp",
      "setCandidateSide",
      399);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v7,
      (const char (*)[29])"candidate_side_set is empty.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    std::vector<proto::GCGDiceSideType>::clear(&this->candidate_side_vec_);
    M_node = std::set<proto::GCGDiceSideType>::end(p_candidate_side_set)._M_node;
    v4 = std::set<proto::GCGDiceSideType>::begin(p_candidate_side_set)._M_node;
    __i._M_current = std::vector<proto::GCGDiceSideType>::begin(&this->candidate_side_vec_)._M_current;
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::__normal_iterator<proto::GCGDiceSideType*>(
      &__position,
      &__i);
    std::vector<proto::GCGDiceSideType>::insert<std::_Rb_tree_const_iterator<proto::GCGDiceSideType>,void>(
      &this->candidate_side_vec_,
      __position,
      (std::_Rb_tree_const_iterator<proto::GCGDiceSideType>)v4,
      (std::_Rb_tree_const_iterator<proto::GCGDiceSideType>)M_node);
    return 0;
  }
};

// Line 408: range 000000000DEA892E-000000000DEA8B59
GCGDiceSideType __cdecl GCGDiceZone::randomSide(GCGDiceZone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::mt19937 *v4; // r14
  int v5; // eax
  common::milog::MiLogStream *v6; // rax
  std::vector<proto::GCGDiceSideType>::size_type v7; // r14
  std::vector<proto::GCGDiceSideType>::reference v8; // rax
  GCGDiceSideType *v9; // rdx
  GCGDiceSideType result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 5 i:409";
  *(_QWORD *)(v1 + 16) = GCGDiceZone::randomSide;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v4 = GCGGameMode::gen(this->game_mode_);
  v5 = std::vector<proto::GCGDiceSideType>::size(&this->candidate_side_vec_);
  *(_DWORD *)(v1 + 32) = common::tools::RandomUtils::rand<unsigned int>(0, v5 - 1, v4);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_dice_zone.cpp",
    "randomSide",
    410);
  v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         &v11,
         (const char (*)[22])"[RANDOM] randomSide: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  v7 = *(unsigned int *)(v1 + 32);
  if ( v7 >= std::vector<proto::GCGDiceSideType>::size(&this->candidate_side_vec_) )
  {
    result = GCG_DICE_SIDE_INVALID;
  }
  else
  {
    v8 = std::vector<proto::GCGDiceSideType>::operator[](&this->candidate_side_vec_, *(unsigned int *)(v1 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    result = *v9;
  }
  if ( v12 == (char *)v1 )
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

// Line 419: range 000000000DEA8B5A-000000000DEA8B73
const std::vector<proto::GCGDiceSideType> *__cdecl GCGDiceZone::getDiceVec(const GCGDiceZone *const this)
{
  return (const std::vector<proto::GCGDiceSideType> *)GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(this);
};

// Line 424: range 000000000DEA8B74-000000000DEA8B8D
std::vector<proto::GCGDiceSideType> *__cdecl GCGDiceZone::getDiceVec(GCGDiceZone *const this)
{
  return (std::vector<proto::GCGDiceSideType> *)GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(this);
};

// Line 429: range 000000000DEA8B8E-000000000DEA8BE3
void __cdecl GCGDiceZone::addRerollIdx(GCGDiceZone *const this)
{
  GCGDiceZoneRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(this);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->reroll_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->reroll_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (GCGDiceZoneRuntimeData *)__asan_report_load4(&RuntimeData->reroll_idx_);
  }
  ++RuntimeData->reroll_idx_;
};

// Line 434: range 000000000DEA8BE4-000000000DEA8C32
uint32_t __cdecl GCGDiceZone::getRerollIdx(GCGDiceZone *const this)
{
  GCGDiceZoneRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(this);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->reroll_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->reroll_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (GCGDiceZoneRuntimeData *)__asan_report_load4(&RuntimeData->reroll_idx_);
  }
  return RuntimeData->reroll_idx_;
};

// Line 439: range 000000000DEA8C34-000000000DEA8C87
void __cdecl GCGDiceZone::clearRerollIdx(GCGDiceZone *const this)
{
  GCGDiceZoneRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(this);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->reroll_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->reroll_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (GCGDiceZoneRuntimeData *)__asan_report_store4(&RuntimeData->reroll_idx_);
  }
  RuntimeData->reroll_idx_ = 0;
};
