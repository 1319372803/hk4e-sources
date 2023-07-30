// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_play.h

// Line 36: range 000000001637D33E-000000001637D39F
void __cdecl CardInfo::~CardInfo(CardInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::~map(&this->effect_map);
  std::enable_shared_from_this<CardInfo>::~enable_shared_from_this(&this->std::enable_shared_from_this<CardInfo>);
};

// Line 53: range 00000000162392DC-00000000162395C6
void __cdecl CardInfo::CardInfo(CardInfo *const this, TowerDefensePlay *play)
{
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  std::enable_shared_from_this<CardInfo>::enable_shared_from_this(&this->std::enable_shared_from_this<CardInfo>);
  v2 = (int (**)(...))(&`vtable for'CardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->play >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->play);
  this->play = play;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id);
  }
  this->card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pick_index);
  }
  this->pick_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quality);
  }
  this->quality = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack);
  }
  this->stack = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round);
  }
  this->round = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_show_on_pick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_show_on_pick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_show_on_pick);
  }
  this->is_show_on_pick = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_round);
  }
  this->pick_round = 0;
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::map(&this->effect_map);
};

// Line 74: range 000000001631802A-0000000016318143
void __cdecl TowerDefensePlay::PlayerInfo::PlayerInfo(TowerDefensePlay::PlayerInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->building_points = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_points);
  }
  this->cost_points = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_count);
  }
  this->pick_count = 0;
  std::set<unsigned int>::set(&this->pick_card_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_obtained_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_obtained_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_obtained_points);
  }
  this->total_obtained_points = 0;
};

// Line 74: range 00000000162D74CA-00000000162D74E8
void __cdecl TowerDefensePlay::PlayerInfo::~PlayerInfo(TowerDefensePlay::PlayerInfo *const this)
{
  std::set<unsigned int>::~set(&this->pick_card_set);
};

// Line 86: range 00000000180B5930-00000000180B5BEE
void __cdecl TowerDefensePlay::TowerDefensePlay(TowerDefensePlay *const this, SceneMultistagePlay *play)
{
  int (**v2)(...); // rdx
  int (**v3)(...); // rdx

  TowerDefensePlayBase::TowerDefensePlayBase(this, play);
  v2 = (int (**)(...))(&`vtable for'TowerDefensePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  v3 = (int (**)(...))(&`vtable for'TowerDefensePlay + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->SceneMultistagePlayCompBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->SceneMultistagePlayCompBase);
  this->_vptr_SceneMultistagePlayCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->current_round_);
  }
  this->current_round_ = 0;
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::map(&this->player_info_map_);
  std::map<unsigned int,double>::map(&this->gadget_build_cost_factor_map_);
  std::map<unsigned int,double>::map(&this->gadget_refund_factor_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_points_delta_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->kill_points_delta_);
  this->kill_points_delta_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_points_factor_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->kill_points_factor_);
  this->kill_points_factor_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_num_delta_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->gear_num_delta_);
  this->gear_num_delta_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_end_points_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->round_end_points_);
  this->round_end_points_ = 0.0;
  std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::map(&this->typed_card_effect_map_);
  std::map<unsigned int,std::shared_ptr<CardInfo>>::map(&this->card_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pick_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pick_count_);
  }
  this->pick_count_ = 0;
  std::set<unsigned int>::set(&this->pick_card_set_);
  std::map<unsigned int,unsigned int>::map(&this->card_type_count_map_);
};

// Line 87: range 000000001635B7FE-000000001635B828
void __cdecl TowerDefensePlay::~TowerDefensePlay(TowerDefensePlay *const this)
{
  TowerDefensePlay::~TowerDefensePlay(this);
  operator delete(this, 0x240uLL);
};

// Line 87: range 000000001635B6EE-000000001635B7F4
void __cdecl TowerDefensePlay::~TowerDefensePlay(TowerDefensePlay *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TowerDefensePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  v2 = (int (**)(...))(&`vtable for'TowerDefensePlay + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->SceneMultistagePlayCompBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->SceneMultistagePlayCompBase);
  this->_vptr_SceneMultistagePlayCompBase = v2;
  std::map<unsigned int,unsigned int>::~map(&this->card_type_count_map_);
  std::set<unsigned int>::~set(&this->pick_card_set_);
  std::map<unsigned int,std::shared_ptr<CardInfo>>::~map(&this->card_info_map_);
  std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::~map(&this->typed_card_effect_map_);
  std::map<unsigned int,double>::~map(&this->gadget_refund_factor_map_);
  std::map<unsigned int,double>::~map(&this->gadget_build_cost_factor_map_);
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::~map(&this->player_info_map_);
  TowerDefensePlayBase::~TowerDefensePlayBase(this);
};

// Line 87: range 000000001635B829-000000001635B82D
void __fastcall `non-virtual thunk to'TowerDefensePlay::~TowerDefensePlay(TowerDefensePlay *this)
{
  TowerDefensePlay::~TowerDefensePlay((TowerDefensePlay *)((char *)this - 8));
};

// Line 87: range 000000001635B7F5-000000001635B7F9
void __fastcall `non-virtual thunk to'TowerDefensePlay::~TowerDefensePlay(TowerDefensePlay *this)
{
  TowerDefensePlay::~TowerDefensePlay((TowerDefensePlay *)((char *)this - 8));
};

// Line 95: range 00000000162397A2-00000000162397F6
uint32_t __cdecl TowerDefensePlay::getCurrentRound(const TowerDefensePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->current_round_;
};

// Line 221: range 0000000016243EB6-000000001624433F
void __cdecl TowerDefensePlay::foreachEffect<EffectCardTypeCountNoCost>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectCardTypeCountNoCost *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectCardTypeCountNoCost>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectCardTypeCountNoCost::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectCardTypeCountNoCost,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectCardTypeCountNoCost>(
               0LL,
               (const std::shared_ptr<EffectCardTypeCountNoCost> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectCardTypeCountNoCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectCardTypeCountNoCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectCardTypeCountNoCost &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectCardTypeCountNoCost>::~shared_ptr((std::shared_ptr<EffectCardTypeCountNoCost> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016247112-000000001624759B
void __cdecl TowerDefensePlay::foreachEffect<EffectCardTypeForceCurse>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectCardTypeForceCurse&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectCardTypeForceCurse *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectCardTypeForceCurse>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectCardTypeForceCurse::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectCardTypeForceCurse,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectCardTypeForceCurse>(
               0LL,
               (const std::shared_ptr<EffectCardTypeForceCurse> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectCardTypeForceCurse,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectCardTypeForceCurse,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectCardTypeForceCurse &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectCardTypeForceCurse>::~shared_ptr((std::shared_ptr<EffectCardTypeForceCurse> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016244340-00000000162447C9
void __cdecl TowerDefensePlay::foreachEffect<EffectCardTypeStackServerGlobalValue>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectCardTypeStackServerGlobalValue&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectCardTypeStackServerGlobalValue *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectCardTypeStackServerGlobalValue>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectCardTypeStackServerGlobalValue::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectCardTypeStackServerGlobalValue,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectCardTypeStackServerGlobalValue>(
               0LL,
               (const std::shared_ptr<EffectCardTypeStackServerGlobalValue> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectCardTypeStackServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectCardTypeStackServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectCardTypeStackServerGlobalValue &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectCardTypeStackServerGlobalValue>::~shared_ptr((std::shared_ptr<EffectCardTypeStackServerGlobalValue> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 00000000162433B6-000000001624383F
void __cdecl TowerDefensePlay::foreachEffect<EffectCardsCountStackServerGlobalValue>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectCardsCountStackServerGlobalValue *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectCardsCountStackServerGlobalValue>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectCardsCountStackServerGlobalValue::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectCardsCountStackServerGlobalValue,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectCardsCountStackServerGlobalValue>(
               0LL,
               (const std::shared_ptr<EffectCardsCountStackServerGlobalValue> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectCardsCountStackServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectCardsCountStackServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectCardsCountStackServerGlobalValue>::~shared_ptr((std::shared_ptr<EffectCardsCountStackServerGlobalValue> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016245F2C-00000000162463B5
void __cdecl TowerDefensePlay::foreachEffect<EffectFreeCardOnRefresh>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectFreeCardOnRefresh&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectFreeCardOnRefresh *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectFreeCardOnRefresh>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectFreeCardOnRefresh::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectFreeCardOnRefresh,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectFreeCardOnRefresh>(0LL, (const std::shared_ptr<EffectFreeCardOnRefresh> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectFreeCardOnRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectFreeCardOnRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectFreeCardOnRefresh &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectFreeCardOnRefresh>::~shared_ptr((std::shared_ptr<EffectFreeCardOnRefresh> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016245166-00000000162455EF
void __cdecl TowerDefensePlay::foreachEffect<EffectModifyCandidateCards>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectModifyCandidateCards&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectModifyCandidateCards *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectModifyCandidateCards>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectModifyCandidateCards::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectModifyCandidateCards,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectModifyCandidateCards>(
               0LL,
               (const std::shared_ptr<EffectModifyCandidateCards> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectModifyCandidateCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectModifyCandidateCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectModifyCandidateCards &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectModifyCandidateCards>::~shared_ptr((std::shared_ptr<EffectModifyCandidateCards> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 000000001624498C-0000000016244E15
void __cdecl TowerDefensePlay::foreachEffect<EffectModifyCardCost>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectModifyCardCost&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectModifyCardCost *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectModifyCardCost>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectModifyCardCost::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectModifyCardCost,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectModifyCardCost>(0LL, (const std::shared_ptr<EffectModifyCardCost> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectModifyCardCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectModifyCardCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectModifyCardCost &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectModifyCardCost>::~shared_ptr((std::shared_ptr<EffectModifyCardCost> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016245A56-0000000016245EDF
void __cdecl TowerDefensePlay::foreachEffect<EffectModifyQualityProb>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectModifyQualityProb&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectModifyQualityProb *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectModifyQualityProb>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectModifyQualityProb::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectModifyQualityProb,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectModifyQualityProb>(0LL, (const std::shared_ptr<EffectModifyQualityProb> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectModifyQualityProb,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectModifyQualityProb,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectModifyQualityProb &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectModifyQualityProb>::~shared_ptr((std::shared_ptr<EffectModifyQualityProb> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016246494-000000001624691D
void __cdecl TowerDefensePlay::foreachEffect<EffectModifyRefreshCost>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectModifyRefreshCost&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectModifyRefreshCost *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectModifyRefreshCost>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectModifyRefreshCost::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectModifyRefreshCost,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectModifyRefreshCost>(0LL, (const std::shared_ptr<EffectModifyRefreshCost> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectModifyRefreshCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectModifyRefreshCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectModifyRefreshCost &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectModifyRefreshCost>::~shared_ptr((std::shared_ptr<EffectModifyRefreshCost> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016242F2C-00000000162433B5
void __cdecl TowerDefensePlay::foreachEffect<EffectPickCardLTEServerGlobalValue>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectPickCardLTEServerGlobalValue *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectPickCardLTEServerGlobalValue>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectPickCardLTEServerGlobalValue::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectPickCardLTEServerGlobalValue,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectPickCardLTEServerGlobalValue>(
               0LL,
               (const std::shared_ptr<EffectPickCardLTEServerGlobalValue> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectPickCardLTEServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectPickCardLTEServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectPickCardLTEServerGlobalValue>::~shared_ptr((std::shared_ptr<EffectPickCardLTEServerGlobalValue> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 221: range 0000000016246A62-0000000016246EEB
void __cdecl TowerDefensePlay::foreachEffect<EffectPointsStackServerGlobalValue>(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(EffectPointsStackServerGlobalValue&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > *v5; // rax
  const std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  EffectPointsStackServerGlobalValue *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_begin_0; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *map_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *card_effect_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *__for_range; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *pick_index; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > >::type *effect_map; // [rsp+50h] [rbp-120h]
  std::map<unsigned int,std::weak_ptr<CardEffectBase>> *__for_range_0; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_index; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > >::type *effect_wtr; // [rsp+68h] [rbp-108h]
  std::weak_ptr<CardEffectBase> v28; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int const,std::weak_ptr<CardEffectBase> > v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>> > __in; // [rsp+C0h] [rbp-B0h] BYREF
  char v32[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 effect_ptr:234";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachEffect<EffectPointsStackServerGlobalValue>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>> const>(
              &this->typed_card_effect_map_,
              &EffectPointsStackServerGlobalValue::effect_type);
  if ( map_ptr )
  {
    card_effect_map = map_ptr;
    __for_range = map_ptr;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::begin(map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::end(map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::pair(&__in, v5);
      pick_index = std::get<0ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      effect_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>(&__in);
      __for_range_0 = effect_map;
      __for_begin_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::begin(effect_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator*(&__for_begin_0);
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::pair(&v29, v6);
        effect_index = std::get<0ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        effect_wtr = std::get<1ul,unsigned int const,std::weak_ptr<CardEffectBase>>(&v29);
        std::weak_ptr<CardEffectBase>::lock(&v28);
        std::dynamic_pointer_cast<EffectPointsStackServerGlobalValue,CardEffectBase>((const std::shared_ptr<CardEffectBase> *)(v2 + 32));
        std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v28);
        if ( std::operator==<EffectPointsStackServerGlobalValue>(
               0LL,
               (const std::shared_ptr<EffectPointsStackServerGlobalValue> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.h",
            "foreachEffect",
            237);
          v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v30, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" pick_index:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pick_index);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" effect_index:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, effect_index);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<EffectPointsStackServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EffectPointsStackServerGlobalValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::function<ForeachPolicy ()(EffectPointsStackServerGlobalValue &)>::operator()(p_func, v13) )
            v12 = 1;
          else
            v12 = 2;
        }
        std::shared_ptr<EffectPointsStackServerGlobalValue>::~shared_ptr((std::shared_ptr<EffectPointsStackServerGlobalValue> *const)(v2 + 32));
        if ( v12 )
        {
          if ( v12 == 2 )
            v14 = 2;
          else
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>::~pair(&v29);
        if ( v14 && v14 != 2 )
        {
          v15 = 0;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<CardEffectBase>>>::operator++(&__for_begin_0);
      }
      v15 = 1;
LABEL_24:
      std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::~pair(&__in);
      if ( v15 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
