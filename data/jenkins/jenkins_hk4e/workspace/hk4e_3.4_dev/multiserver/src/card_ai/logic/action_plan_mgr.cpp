// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/logic/action_plan_mgr.cpp

// Line 27: range 000000000E11E058-000000000E11E133
void __cdecl BT::ActionPlanMgr::sortPlan(BT::ActionPlanMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::shared_ptr<BT::ActionPlanBase> *M_current; // r13
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::iterator v5; // rax
  BT::ActionPlanMgr::sortPlan::<lambda(const ActionPlanBasePtr&, const ActionPlanBasePtr&)> v6; // dl
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 12 sort_func:28";
  *(_QWORD *)(v1 + 16) = BT::ActionPlanMgr::sortPlan;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  M_current = std::vector<std::shared_ptr<BT::ActionPlanBase>>::end(&this->action_plan_vec_)._M_current;
  v5._M_current = std::vector<std::shared_ptr<BT::ActionPlanBase>>::begin(&this->action_plan_vec_)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::shared_ptr<BT::ActionPlanBase> *,std::vector<std::shared_ptr<BT::ActionPlanBase>>>,BT::ActionPlanMgr::sortPlan(void)::{lambda(std::shared_ptr<BT::ActionPlanBase> const&,std::shared_ptr<BT::ActionPlanBase> const&)#1}>(
    v5,
    (__gnu_cxx::__normal_iterator<std::shared_ptr<BT::ActionPlanBase>*,std::vector<std::shared_ptr<BT::ActionPlanBase>> >)M_current,
    v6);
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

// Line 28: range 000000000E11DE12-000000000E11E056
bool __cdecl BT::ActionPlanMgr::sortPlan(void)::{lambda(std::shared_ptr<BT::ActionPlanBase> const&,std::shared_ptr<BT::ActionPlanBase> const&)#1}::operator()(
        const BT::ActionPlanMgr::sortPlan::<lambda(const ActionPlanBasePtr&, const ActionPlanBasePtr&)> *const __closure,
        const BT::ActionPlanBasePtr *left,
        const BT::ActionPlanBasePtr *right)
{
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  int32_t *p_priority; // rax
  int32_t priority; // ebx
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  int32_t *v9; // rax
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  int32_t *v11; // rax
  int32_t v12; // ebx
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  int32_t *v14; // rax
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t origin_order; // ebx
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax

  if ( std::operator==<BT::ActionPlanBase>(left, 0LL) || std::operator==<BT::ActionPlanBase>(right, 0LL) )
    return 0;
  v5 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)left);
  p_priority = &v5->priority_;
  if ( *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_priority & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_priority);
  }
  priority = v5->priority_;
  v8 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)right);
  v9 = &v8->priority_;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  if ( priority > v8->priority_ )
    return 1;
  v10 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)left);
  v11 = &v10->priority_;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v12 = v10->priority_;
  v13 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)right);
  v14 = &v13->priority_;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  if ( v12 < v13->priority_ )
    return 0;
  v15 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)left);
  if ( *(_BYTE *)(((unsigned __int64)&v15->origin_order_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->origin_order_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v15 = (std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->origin_order_);
  }
  origin_order = v15->origin_order_;
  v17 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)right);
  if ( *(_BYTE *)(((unsigned __int64)&v17->origin_order_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->origin_order_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v17 = (std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->origin_order_);
  }
  return origin_order < v17->origin_order_;
};

// Line 58: range 000000000E11E134-000000000E11E4A2
int32_t __cdecl BT::ActionPlanMgr::calSelectDiceSet(
        BT::ActionPlanMgr *const this,
        const std::vector<proto::GCGDiceSideType> *dice_vec,
        std::map<proto::GCGDiceSideType,unsigned int> *p_choose_dice_map,
        std::set<unsigned int> *select_dice_set)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<proto::GCGDiceSideType>::size_type v7; // r15
  std::vector<proto::GCGDiceSideType>::const_reference v8; // rax
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rbx
  int32_t result; // eax
  unsigned __int64 val; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 8 index:59 64 4 12 dice_type:61";
  *(_QWORD *)(v4 + 16) = BT::ActionPlanMgr::calSelectDiceSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  for ( *(_DWORD *)(v4 + 48) = 0; ; ++*(_DWORD *)(v4 + 48) )
  {
    v7 = *(unsigned int *)(v4 + 48);
    if ( v7 >= std::vector<proto::GCGDiceSideType>::size(dice_vec) )
      break;
    v8 = std::vector<proto::GCGDiceSideType>::operator[](dice_vec, *(unsigned int *)(v4 + 48));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v4 + 64) = *v9;
    if ( *(_DWORD *)(v4 + 64)
      && std::map<proto::GCGDiceSideType,unsigned int>::count(
           p_choose_dice_map,
           (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v4 + 64)) )
    {
      v10 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                p_choose_dice_map,
                                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v4 + 64));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load4(v10);
      --*(_DWORD *)v10;
      std::set<unsigned int>::insert(select_dice_set, (const std::set<unsigned int>::value_type *)(v4 + 48));
      v11 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              p_choose_dice_map,
              (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v4 + 64));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( !*v12 )
        std::map<proto::GCGDiceSideType,unsigned int>::erase(
          p_choose_dice_map,
          (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v4 + 64));
    }
  }
  if ( !std::map<proto::GCGDiceSideType,unsigned int>::empty(p_choose_dice_map) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "calSelectDiceSet",
      79);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v18,
            (const char (*)[32])"choose_dice_map not empty size:");
    val = std::map<proto::GCGDiceSideType,unsigned int>::size(p_choose_dice_map);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
  }
  else
  {
    result = 0;
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
  return result;
};

// Line 87: range 000000000E11E4A4-000000000E11E6F5
int32_t __cdecl BT::ActionPlanMgr::payPlan(
        BT::ActionPlanMgr *const this,
        const std::set<proto::GCGDiceSideType> *character_exist_dice_set,
        const std::map<data::GCGCostType,unsigned int> *cost_map,
        std::map<proto::GCGDiceSideType,unsigned int> *choose_dice_map)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  GCGDuel *duel; // [rsp+20h] [rbp-C0h]
  GCGField *field; // [rsp+28h] [rbp-B8h]
  std::vector<proto::GCGDiceSideType> p_dice_vec; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 11 dice_vec:90";
  *(_QWORD *)(v4 + 16) = BT::ActionPlanMgr::payPlan;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_controller_id_);
  }
  field = GCGDuel::getField(duel, this->cur_controller_id_);
  DiceZone = GCGField::getDiceZone(field);
  DiceVec = GCGDiceZone::getDiceVec(DiceZone);
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v4 + 32), DiceVec);
  std::vector<proto::GCGDiceSideType>::vector(&p_dice_vec, (const std::vector<proto::GCGDiceSideType> *)(v4 + 32));
  v9 = BT::ActionPlanMgr::payPlan(this, character_exist_dice_set, &p_dice_vec, cost_map, choose_dice_map);
  std::vector<proto::GCGDiceSideType>::~vector(&p_dice_vec);
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v4 + 32));
  result = v9;
  if ( v16 == (char *)v4 )
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

// Line 96: range 000000000E11E6F6-000000000E11F553
int32_t __cdecl BT::ActionPlanMgr::payPlan(
        BT::ActionPlanMgr *const this,
        const std::set<proto::GCGDiceSideType> *character_exist_dice_set,
        const std::vector<proto::GCGDiceSideType> *p_dice_vec,
        const std::map<data::GCGCostType,unsigned int> *cost_map,
        std::map<proto::GCGDiceSideType,unsigned int> *choose_dice_map)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> >::reference v8; // rax
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rax
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r14d
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v21; // rax
  __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> >::reference v22; // rax
  _DWORD *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  proto::GCGDiceSideType *v25; // rax
  GCGDiceSideType *v26; // rdx
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v27; // rax
  _DWORD *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::reference v32; // rax
  _DWORD *v33; // rdx
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v34; // rax
  _DWORD *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v37; // rax
  _DWORD *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  int32_t result; // eax
  std::allocator<data::GCGCostType> __a; // [rsp+33h] [rbp-25Dh] BYREF
  GCGDiceSideType dice_type; // [rsp+34h] [rbp-25Ch]
  std::vector<data::GCGCostType>::iterator __for_begin_0; // [rsp+38h] [rbp-258h] BYREF
  std::set<proto::GCGDiceSideType>::iterator __for_begin; // [rsp+40h] [rbp-250h] BYREF
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+48h] [rbp-248h]
  std::vector<data::GCGCostType> *__for_range_0; // [rsp+50h] [rbp-240h]
  std::set<proto::GCGDiceSideType> *__for_range_1; // [rsp+58h] [rbp-238h]
  std::initializer_list<data::GCGCostType> __l; // [rsp+60h] [rbp-230h] BYREF
  int v52; // [rsp+70h] [rbp-220h]
  int v53; // [rsp+74h] [rbp-21Ch]
  int v54; // [rsp+78h] [rbp-218h]
  common::milog::MiLogStream v55; // [rsp+80h] [rbp-210h] BYREF
  common::milog::MiLogStream v56; // [rsp+A0h] [rbp-1F0h] BYREF
  char v57[464]; // [rsp+C0h] [rbp-1D0h] BYREF

  v5 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 13 cost_type:131 48 4 16 cur_cost_num:174 64 4 12 dice_type:98 80 8 22 side_dice_type_opt"
                        ":137 112 24 18 cost_order_vec:126 176 48 11 dice_map:97 256 48 32 character_not_exist_dice_set:1"
                        "51 336 48 23 total_dice_side_set:152";
  *(_QWORD *)(v5 + 16) = BT::ActionPlanMgr::payPlan;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = -218959360;
  v7[536862725] = 62194;
  v7[536862727] = -218959118;
  v7[536862729] = -219021312;
  v7[536862730] = 62194;
  v7[536862732] = -202116109;
  std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v5 + 176));
  __for_range = p_dice_vec;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Base_ptr)std::vector<proto::GCGDiceSideType>::begin(p_dice_vec)._M_current;
  *(std::vector<proto::GCGDiceSideType>::const_iterator *)(v5 + 80) = std::vector<proto::GCGDiceSideType>::end(p_dice_vec);
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            (const __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *)(v5 + 80)) )
  {
    v8 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*((const __gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *const)&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v5 + 64) = *v9;
    if ( *(_DWORD *)(v5 + 64) )
    {
      v10 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                (std::map<proto::GCGDiceSideType,unsigned int> *const)(v5 + 176),
                                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load4(v10);
      ++*(_DWORD *)v10;
    }
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++((__gnu_cxx::__normal_iterator<const proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> > *const)&__for_begin);
  }
  *(_DWORD *)(v5 + 64) = 5;
  if ( std::map<data::GCGCostType,unsigned int>::count(
         cost_map,
         (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64)) )
  {
    *(_DWORD *)(v5 + 64) = 5;
    v11 = std::map<data::GCGCostType,unsigned int>::at(
            cost_map,
            (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    *(_DWORD *)(v5 + 48) = *v12;
    *(_DWORD *)(v5 + 64) = 8;
    if ( !std::map<proto::GCGDiceSideType,unsigned int>::count(
            (const std::map<proto::GCGDiceSideType,unsigned int> *const)(v5 + 176),
            (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "payPlan",
        112);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v56,
              (const char (*)[44])"PAIMON COST cannot be pay, paimon_cost_num:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", cur empty");
      common::milog::MiLogStream::~MiLogStream(&v56);
      v15 = -1;
      goto LABEL_57;
    }
    *(_DWORD *)(v5 + 64) = 8;
    v16 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
            (std::map<proto::GCGDiceSideType,unsigned int> *const)(v5 + 176),
            (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64));
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    if ( *v17 < *(_DWORD *)(v5 + 48) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "payPlan",
        121);
      v18 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v56,
              (const char (*)[44])"PAIMON COST cannot be pay, paimon_cost_num:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", cur:");
      *(_DWORD *)(v5 + 64) = 8;
      v21 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              (std::map<proto::GCGDiceSideType,unsigned int> *const)(v5 + 176),
              (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v15 = -1;
      goto LABEL_57;
    }
    BT::ActionPlanMgr::useAndChooseDice(
      this,
      GCG_DICE_SIDE_PAIMON,
      *(_DWORD *)(v5 + 48),
      (std::map<proto::GCGDiceSideType,unsigned int> *)(v5 + 176),
      choose_dice_map);
  }
  __l._M_array = (std::initializer_list<data::GCGCostType>::iterator)0xC0000000BLL;
  __l._M_len = 0xE0000000DLL;
  v52 = 15;
  v53 = 16;
  v54 = 17;
  std::allocator<data::GCGCostType>::allocator(&__a);
  std::vector<data::GCGCostType>::vector(
    (std::vector<data::GCGCostType> *const)(v5 + 112),
    (std::initializer_list<data::GCGCostType>)__PAIR128__(7LL, &__l),
    &__a);
  std::allocator<data::GCGCostType>::~allocator(&__a);
  __for_range_0 = (std::vector<data::GCGCostType> *)(v5 + 112);
  __for_begin_0._M_current = std::vector<data::GCGCostType>::begin((std::vector<data::GCGCostType> *const)(v5 + 112))._M_current;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Base_ptr)std::vector<data::GCGCostType>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGCostType *,std::vector<data::GCGCostType>>(
            &__for_begin_0,
            (const __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> > *)&__for_begin) )
  {
    v22 = __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator*(&__for_begin_0);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    *(_DWORD *)(v5 + 32) = *v23;
    if ( std::map<data::GCGCostType,unsigned int>::count(
           cost_map,
           (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 32)) )
    {
      *(std::optional<proto::GCGDiceSideType> *)(v5 + 80) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGCostType>((data::GCGCostType)*(_DWORD *)(v5 + 32));
      if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v5 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "payPlan",
          140);
        v24 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v55,
                (const char (*)[43])"payPlan cost_type has not valid side type:");
        *(_DWORD *)(v5 + 64) = *(_DWORD *)(v5 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::~MiLogStream(&v55);
        v15 = -1;
        goto LABEL_56;
      }
      v25 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v5 + 80));
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      dice_type = *v26;
      v27 = std::map<data::GCGCostType,unsigned int>::at(
              cost_map,
              (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 32));
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      *(_DWORD *)(v5 + 48) = *v28;
      if ( BT::ActionPlanMgr::tryPaySpecifyDice(
             this,
             dice_type,
             *(_DWORD *)(v5 + 48),
             (std::map<proto::GCGDiceSideType,unsigned int> *)(v5 + 176),
             choose_dice_map) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "payPlan",
          147);
        v29 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v56,
                (const char (*)[43])"payPlan cost_type has not valid side type:");
        *(_DWORD *)(v5 + 64) = *(_DWORD *)(v5 + 32);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v5 + 64));
        v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v30,
                (const char (*)[17])", need_cost_num:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v15 = -1;
        goto LABEL_56;
      }
    }
    __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator++(&__for_begin_0);
  }
  std::set<proto::GCGDiceSideType>::set((std::set<proto::GCGDiceSideType> *const)(v5 + 256));
  GCGUtils::getElementSet<proto::GCGDiceSideType>((std::set<proto::GCGDiceSideType> *)(v5 + 336));
  __for_range_1 = (std::set<proto::GCGDiceSideType> *)(v5 + 336);
  __for_begin._M_node = std::set<proto::GCGDiceSideType>::begin((const std::set<proto::GCGDiceSideType> *const)(v5 + 336))._M_node;
  *(std::set<proto::GCGDiceSideType>::iterator *)(v5 + 80) = std::set<proto::GCGDiceSideType>::end(__for_range_1);
  while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self *)(v5 + 80)) )
  {
    v32 = std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator*(&__for_begin);
    v33 = v32;
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v32);
    }
    *(_DWORD *)(v5 + 64) = *v33;
    if ( !std::set<proto::GCGDiceSideType>::count(
            character_exist_dice_set,
            (const std::set<proto::GCGDiceSideType>::key_type *)(v5 + 64)) )
      std::set<proto::GCGDiceSideType>::insert(
        (std::set<proto::GCGDiceSideType> *const)(v5 + 256),
        (const std::set<proto::GCGDiceSideType>::value_type *)(v5 + 64));
    std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator++(&__for_begin);
  }
  *(_DWORD *)(v5 + 64) = 3;
  if ( !std::map<data::GCGCostType,unsigned int>::count(
          cost_map,
          (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64)) )
    goto LABEL_49;
  *(_DWORD *)(v5 + 64) = 3;
  v34 = std::map<data::GCGCostType,unsigned int>::at(
          cost_map,
          (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v34);
  }
  *(_DWORD *)(v5 + 48) = *v35;
  if ( BT::ActionPlanMgr::tryPayDiceWithFilter(
         this,
         character_exist_dice_set,
         (const std::set<proto::GCGDiceSideType> *)(v5 + 256),
         GCG_COST_DICE_SAME,
         *(_DWORD *)(v5 + 48),
         (std::map<proto::GCGDiceSideType,unsigned int> *)(v5 + 176),
         choose_dice_map) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "payPlan",
      167);
    v36 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v56,
            (const char (*)[44])"GCG_COST_DICE_SAME cannot pay cur_cost_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v15 = -1;
  }
  else
  {
LABEL_49:
    *(_DWORD *)(v5 + 64) = 10;
    if ( !std::map<data::GCGCostType,unsigned int>::count(
            cost_map,
            (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64)) )
      goto LABEL_54;
    *(_DWORD *)(v5 + 64) = 10;
    v37 = std::map<data::GCGCostType,unsigned int>::at(
            cost_map,
            (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
    v38 = v37;
    if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v37);
    }
    *(_DWORD *)(v5 + 48) = *v38;
    if ( BT::ActionPlanMgr::tryPayDiceWithFilter(
           this,
           character_exist_dice_set,
           (const std::set<proto::GCGDiceSideType> *)(v5 + 256),
           GCG_COST_DICE_VOID,
           *(_DWORD *)(v5 + 48),
           (std::map<proto::GCGDiceSideType,unsigned int> *)(v5 + 176),
           choose_dice_map) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "payPlan",
        177);
      v39 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v56,
              (const char (*)[44])"GCG_COST_DICE_VOID cannot pay cur_cost_num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v15 = -1;
    }
    else
    {
LABEL_54:
      v15 = 0;
    }
  }
  std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v5 + 336));
  std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v5 + 256));
LABEL_56:
  std::vector<data::GCGCostType>::~vector((std::vector<data::GCGCostType> *const)(v5 + 112));
LABEL_57:
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v5 + 176));
  result = v15;
  if ( v57 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 186: range 000000000E11F554-000000000E11FA47
__int64 __fastcall BT::ActionPlanMgr::tryPaySpecifyDice(
        BT::ActionPlanMgr *const this,
        unsigned int need_dice_type,
        uint32_t cost_num,
        std::map<proto::GCGDiceSideType,unsigned int> *dice_map,
        std::map<proto::GCGDiceSideType,unsigned int> *choose_dice_map)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int v19; // r14d
  __int64 result; // rax
  std::allocator<proto::GCGDiceSideType> __a; // [rsp+3Fh] [rbp-111h] BYREF
  uint32_t need_cost_num_0; // [rsp+40h] [rbp-110h]
  uint32_t need_cost_num; // [rsp+44h] [rbp-10Ch]
  std::vector<proto::GCGDiceSideType>::iterator __for_begin; // [rsp+48h] [rbp-108h] BYREF
  std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+50h] [rbp-100h]
  std::vector<proto::GCGDiceSideType>::iterator __for_end; // [rsp+58h] [rbp-F8h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+80h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 16 old_cost_num:187 64 4 18 cost_dice_type:190 80 4 12 cost_num:185 96 24 17 cost_dice_vec:189";
  *(_QWORD *)(v5 + 16) = BT::ActionPlanMgr::tryPaySpecifyDice;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 80) = cost_num;
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(v5 + 80);
  __for_end._M_current = (proto::GCGDiceSideType *)(need_dice_type | 0x800000000LL);
  std::allocator<proto::GCGDiceSideType>::allocator(&__a);
  std::vector<proto::GCGDiceSideType>::vector(
    (std::vector<proto::GCGDiceSideType> *const)(v5 + 96),
    (std::initializer_list<proto::GCGDiceSideType>)__PAIR128__(2LL, &__for_end),
    &__a);
  std::allocator<proto::GCGDiceSideType>::~allocator(&__a);
  __for_range = (std::vector<proto::GCGDiceSideType> *)(v5 + 96);
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin((std::vector<proto::GCGDiceSideType> *const)(v5 + 96))._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>(&__for_begin, &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v5 + 64) = *v9;
    if ( std::map<proto::GCGDiceSideType,unsigned int>::count(
           dice_map,
           (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64)) )
    {
      v10 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              dice_map,
              (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( *v11 >= *(_DWORD *)(v5 + 80) )
      {
        need_cost_num = *(_DWORD *)(v5 + 80);
        BT::ActionPlanMgr::useAndChooseDice(
          this,
          *(GCGDiceSideType *)(v5 + 64),
          need_cost_num,
          dice_map,
          choose_dice_map);
        *(_DWORD *)(v5 + 80) = 0;
        break;
      }
      v12 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              dice_map,
              (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 64));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      need_cost_num_0 = *v13;
      BT::ActionPlanMgr::useAndChooseDice(
        this,
        *(GCGDiceSideType *)(v5 + 64),
        need_cost_num_0,
        dice_map,
        choose_dice_map);
      *(_DWORD *)(v5 + 80) -= need_cost_num_0;
    }
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/logic/action_plan_mgr.cpp",
    "tryPaySpecifyDice",
    209);
  v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v30,
          (const char (*)[24])"tryPaySpecifyDice dice:");
  *(_DWORD *)(v5 + 64) = need_dice_type;
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 64));
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])", old_cost_num:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])", final:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 80));
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( *(_DWORD *)(v5 + 80) )
    v19 = -1;
  else
    v19 = 0;
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v5 + 96));
  result = v19;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 215: range 000000000E11FA48-000000000E11FE5E
__int64 __fastcall BT::ActionPlanMgr::useAndChooseDice(
        BT::ActionPlanMgr *const this,
        GCGDiceSideType side_type,
        const uint32_t num,
        std::map<proto::GCGDiceSideType,unsigned int> *dice_map,
        std::map<proto::GCGDiceSideType,unsigned int> *choose_dice_map)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v15; // rax
  unsigned __int64 v16; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 13 side_type:214 64 4 7 num:214";
  *(_QWORD *)(v5 + 16) = BT::ActionPlanMgr::useAndChooseDice;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = side_type;
  *(_DWORD *)(v5 + 64) = num;
  if ( std::map<proto::GCGDiceSideType,unsigned int>::count(
         dice_map,
         (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48)) )
  {
    v10 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
            dice_map,
            (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    if ( *v11 >= *(_DWORD *)(v5 + 64) )
    {
      v16 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                dice_map,
                                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48));
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load4(v16);
      *(_DWORD *)v16 -= *(_DWORD *)(v5 + 64);
      v17 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              dice_map,
              (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48));
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      if ( !*v18 )
        std::map<proto::GCGDiceSideType,unsigned int>::erase(
          dice_map,
          (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48));
      v19 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                choose_dice_map,
                                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48));
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load4(v19);
      *(_DWORD *)v19 += *(_DWORD *)(v5 + 64);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "useAndChooseDice",
        223);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v24,
              (const char (*)[23])"useAndChooseDice need:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", cur has:");
      v15 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              dice_map,
              (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v5 + 48));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "useAndChooseDice",
      218);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v24,
           (const char (*)[38])"useAndChooseDice side_type not exist:");
    val = *(_DWORD *)(v5 + 48);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0xFFFFFFFFLL;
  }
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 238: range 000000000E1202E4-000000000E121912
__int64 __fastcall BT::ActionPlanMgr::tryPayDiceWithFilter(
        BT::ActionPlanMgr *const this,
        const std::set<proto::GCGDiceSideType> *character_exist_dice_set,
        const std::set<proto::GCGDiceSideType> *character_not_exist_dice_set,
        GCGCostType cost_type,
        uint32_t cost_num,
        std::map<proto::GCGDiceSideType,unsigned int> *dice_map,
        std::map<proto::GCGDiceSideType,unsigned int> *choose_dice_map)
{
  unsigned int v7; // r14d
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::reference v11; // rax
  _DWORD *v12; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v13; // rax
  uint32_t *v14; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::reference v19; // rax
  _DWORD *v20; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v21; // rax
  uint32_t *v22; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v23; // rax
  _DWORD *v24; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v25; // rax
  uint32_t *v26; // rdx
  BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *M_current; // r14
  std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> >::iterator v28; // rax
  BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&, const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&)> v29; // dl
  const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *v30; // rax
  int v31; // r15d
  BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *v32; // r14
  std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> >::iterator v33; // rax
  BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&, const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&)> v34; // dl
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v35; // rax
  _DWORD *v36; // rdx
  uint32_t v37; // edi
  common::milog::MiLogStream *v38; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v41; // rax
  uint32_t *v42; // rdx
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::reference v45; // rax
  _DWORD *v46; // rdx
  unsigned int *v47; // rax
  std::pair<proto::GCGDiceSideType,unsigned int> *v48; // r14
  std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::iterator v49; // rax
  BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const std::pair<proto::GCGDiceSideType, unsigned int>&, const std::pair<proto::GCGDiceSideType, unsigned int>&)> v50; // dl
  __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int>*,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> >::reference v51; // rax
  std::pair<proto::GCGDiceSideType,unsigned int> *v52; // rdx
  std::tuple_element<1,std::pair<proto::GCGDiceSideType,unsigned int> >::type *v53; // rax
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::reference v54; // rax
  _DWORD *v55; // rdx
  unsigned int *v56; // rax
  std::pair<proto::GCGDiceSideType,unsigned int> *v57; // r14
  std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::iterator v58; // rax
  BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const std::pair<proto::GCGDiceSideType, unsigned int>&, const std::pair<proto::GCGDiceSideType, unsigned int>&)> v59; // dl
  __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int>*,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> >::reference v60; // rax
  std::pair<proto::GCGDiceSideType,unsigned int> *v61; // rdx
  std::tuple_element<1,std::pair<proto::GCGDiceSideType,unsigned int> >::type *v62; // rax
  int v63; // ecx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v64; // rax
  _DWORD *v65; // rdx
  char v66; // al
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  __int64 result; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::key_type v76; // [rsp+38h] [rbp-1D8h] BYREF
  uint32_t cur_can_pay_num_2; // [rsp+3Ch] [rbp-1D4h]
  uint32_t cur_can_pay_num_1; // [rsp+40h] [rbp-1D0h]
  uint32_t cur_can_pay_num_4; // [rsp+44h] [rbp-1CCh]
  uint32_t cur_can_pay_num_3; // [rsp+48h] [rbp-1C8h]
  uint32_t cur_can_pay_num_0; // [rsp+4Ch] [rbp-1C4h]
  uint32_t rest_can_pay_num; // [rsp+50h] [rbp-1C0h]
  uint32_t cur_can_pay_num; // [rsp+54h] [rbp-1BCh]
  std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::iterator __for_begin; // [rsp+58h] [rbp-1B8h] BYREF
  std::set<proto::GCGDiceSideType>::iterator __for_end_0; // [rsp+60h] [rbp-1B0h] BYREF
  const std::set<proto::GCGDiceSideType> *__for_range_1; // [rsp+68h] [rbp-1A8h]
  std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *__for_range_2; // [rsp+70h] [rbp-1A0h]
  std::tuple_element<0,std::pair<proto::GCGDiceSideType,unsigned int> >::type *dice_type; // [rsp+78h] [rbp-198h]
  std::tuple_element<1,std::pair<proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+80h] [rbp-190h]
  const std::set<proto::GCGDiceSideType> *__for_range_3; // [rsp+88h] [rbp-188h]
  std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *__for_range_4; // [rsp+90h] [rbp-180h]
  std::tuple_element<0,std::pair<proto::GCGDiceSideType,unsigned int> >::type *dice_type_0; // [rsp+98h] [rbp-178h]
  std::tuple_element<1,std::pair<proto::GCGDiceSideType,unsigned int> >::type *dice_num_0; // [rsp+A0h] [rbp-170h]
  const std::set<proto::GCGDiceSideType> *__for_range; // [rsp+A8h] [rbp-168h]
  const std::set<proto::GCGDiceSideType> *__for_range_0; // [rsp+B0h] [rbp-160h]
  const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *dice_info_0; // [rsp+B8h] [rbp-158h]
  const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *dice_info; // [rsp+C0h] [rbp-150h]
  std::pair<proto::GCGDiceSideType,unsigned int> __for_end; // [rsp+C8h] [rbp-148h] BYREF
  std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> >::value_type __x; // [rsp+D4h] [rbp-13Ch] BYREF
  common::milog::MiLogStream v100; // [rsp+E0h] [rbp-130h] BYREF
  char v101[272]; // [rsp+100h] [rbp-110h] BYREF

  v8 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(224LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "6 32 1 13 sort_func:338 48 4 19 cur_can_pay_num:318 64 4 13 dice_type:249 80 4 12 cost_num:237 9"
                        "6 24 37 alternative_no_character_dice_vec:336 160 24 34 alternative_character_dice_vec:337";
  *(_QWORD *)(v8 + 16) = BT::ActionPlanMgr::tryPayDiceWithFilter;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556927;
  v10[536862722] = -234556924;
  v10[536862723] = -234881024;
  v10[536862724] = -218959118;
  v10[536862725] = -218103808;
  v10[536862726] = -202116109;
  *(_DWORD *)(v8 + 80) = cost_num;
  if ( cost_type == GCG_COST_DICE_SAME )
  {
    std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::vector((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96));
    std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::vector((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160));
    __for_range = character_not_exist_dice_set;
    __for_end_0._M_node = std::set<proto::GCGDiceSideType>::begin(character_not_exist_dice_set)._M_node;
    __for_end = (std::pair<proto::GCGDiceSideType,unsigned int>)std::set<proto::GCGDiceSideType>::end(character_not_exist_dice_set)._M_node;
    while ( std::operator!=(
              &__for_end_0,
              (const std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self *)&__for_end) )
    {
      v11 = std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator*(&__for_end_0);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v8 + 64) = *v12;
      if ( std::map<proto::GCGDiceSideType,unsigned int>::count(
             dice_map,
             (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64)) )
      {
        __x.side_type = *(_DWORD *)(v8 + 64);
        __x.weight = 2;
        v13 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                dice_map,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        __x.dice_num = *v14;
        std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::push_back(
          (std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96),
          &__x);
        v15 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                dice_map,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        if ( *v16 >= *(_DWORD *)(v8 + 80) )
        {
          __x.side_type = *(_DWORD *)(v8 + 64);
          __x.weight = 2;
          v17 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                  dice_map,
                  (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          __x.dice_num = *v18;
          std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::push_back(
            (std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160),
            &__x);
        }
      }
      std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator++(&__for_end_0);
    }
    __for_range_0 = character_exist_dice_set;
    __for_end_0._M_node = std::set<proto::GCGDiceSideType>::begin(character_exist_dice_set)._M_node;
    __for_end = (std::pair<proto::GCGDiceSideType,unsigned int>)std::set<proto::GCGDiceSideType>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              &__for_end_0,
              (const std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self *)&__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator*(&__for_end_0);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      *(_DWORD *)(v8 + 64) = *v20;
      if ( std::map<proto::GCGDiceSideType,unsigned int>::count(
             dice_map,
             (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64)) )
      {
        __x.side_type = *(_DWORD *)(v8 + 64);
        __x.weight = 1;
        v21 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                dice_map,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        __x.dice_num = *v22;
        std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::push_back(
          (std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96),
          &__x);
        v23 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                dice_map,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        if ( *v24 >= *(_DWORD *)(v8 + 80) )
        {
          __x.side_type = *(_DWORD *)(v8 + 64);
          __x.weight = 1;
          v25 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                  dice_map,
                  (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          __x.dice_num = *v26;
          std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::push_back(
            (std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160),
            &__x);
        }
      }
      std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator++(&__for_end_0);
    }
    if ( !std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::empty((const std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160)) )
    {
      M_current = std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::end((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160))._M_current;
      v28._M_current = std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::begin((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo *,std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>>,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&)#1}>(
        v28,
        (__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo*,std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > >)M_current,
        v29);
      v30 = std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::operator[](
              (std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160),
              0LL);
      dice_info = v30;
      cur_can_pay_num = *(_DWORD *)(v8 + 80);
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v30);
      }
      BT::ActionPlanMgr::useAndChooseDice(this, dice_info->side_type, cur_can_pay_num, dice_map, choose_dice_map);
      v7 = 0;
      v31 = 0;
    }
    else if ( !std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::empty((const std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96)) )
    {
      v32 = std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::end((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96))._M_current;
      v33._M_current = std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::begin((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo *,std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>>,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&)#2}>(
        v33,
        (__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo*,std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > >)v32,
        v34);
      dice_info_0 = std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::operator[](
                      (std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96),
                      0LL);
      v35 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](dice_map, &dice_info_0->side_type);
      v36 = v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v35);
      }
      *(_DWORD *)(v8 + 48) = *v36;
      rest_can_pay_num = *(_DWORD *)(v8 + 80) - *(_DWORD *)(v8 + 48);
      v37 = *(_DWORD *)(v8 + 48);
      if ( *(_BYTE *)(((unsigned __int64)dice_info_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dice_info_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_info_0 >> 3) + 0x7FFF8000) )
      {
        v37 = (unsigned int)dice_info_0;
        __asan_report_load4(dice_info_0);
      }
      BT::ActionPlanMgr::useAndChooseDice(this, dice_info_0->side_type, v37, dice_map, choose_dice_map);
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "tryPayDiceWithFilter",
        322);
      v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v100, (const char (*)[13])"choose dice:");
      if ( *(_BYTE *)(((unsigned __int64)dice_info_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dice_info_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_info_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dice_info_0);
      }
      *(_DWORD *)(v8 + 64) = dice_info_0->side_type;
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v8 + 64));
      v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])", pay num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v8 + 48));
      common::milog::MiLogStream::~MiLogStream(&v100);
      v76 = GCG_DICE_SIDE_PAIMON;
      if ( !std::map<proto::GCGDiceSideType,unsigned int>::count(dice_map, &v76) )
        goto LABEL_48;
      *(_DWORD *)(v8 + 64) = 8;
      v41 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              dice_map,
              (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
      v42 = v41;
      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v41);
      }
      if ( rest_can_pay_num <= *v42 )
        v43 = 0;
      else
LABEL_48:
        v43 = 1;
      if ( v43 )
      {
        common::milog::MiLogStream::create(
          &v100,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "tryPayDiceWithFilter",
          326);
        v44 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v100,
                (const char (*)[65])"GCGDiceSideType::GCG_DICE_SIDE_PAIMON can not payed, need count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v8 + 80));
        common::milog::MiLogStream::~MiLogStream(&v100);
        v7 = -1;
      }
      else
      {
        BT::ActionPlanMgr::useAndChooseDice(this, GCG_DICE_SIDE_PAIMON, rest_can_pay_num, dice_map, choose_dice_map);
        v7 = 0;
      }
      v31 = 0;
    }
    else
    {
      v31 = 1;
    }
    std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::~vector((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 160));
    std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo>>::~vector((std::vector<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo,std::allocator<BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&,const std::set<proto::GCGDiceSideType>&,GCGCostType,uint32_t,std::map<proto::GCGDiceSideType,unsigned int>&,std::map<proto::GCGDiceSideType,unsigned int>&)::AlternativeDiceInfo> > *const)(v8 + 96));
    if ( v31 == 1 )
      v7 = -1;
  }
  else if ( cost_type == GCG_COST_DICE_VOID )
  {
    std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::vector((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96));
    std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::vector((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160));
    __for_range_1 = character_not_exist_dice_set;
    __for_begin._M_current = (std::pair<proto::GCGDiceSideType,unsigned int> *)std::set<proto::GCGDiceSideType>::begin(character_not_exist_dice_set)._M_node;
    __for_end_0._M_node = std::set<proto::GCGDiceSideType>::end(character_not_exist_dice_set)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self *)&__for_begin,
              &__for_end_0) )
    {
      v45 = std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator*((const std::_Rb_tree_const_iterator<proto::GCGDiceSideType> *const)&__for_begin);
      v46 = v45;
      if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v45);
      }
      *(_DWORD *)(v8 + 64) = *v46;
      if ( std::map<proto::GCGDiceSideType,unsigned int>::count(
             dice_map,
             (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64)) )
      {
        v47 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                dice_map,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
        __for_end = std::make_pair<proto::GCGDiceSideType &,unsigned int &>((proto::GCGDiceSideType *)(v8 + 64), v47);
        std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::push_back(
          (std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96),
          &__for_end);
      }
      std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator++((std::_Rb_tree_const_iterator<proto::GCGDiceSideType> *const)&__for_begin);
    }
    if ( !std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::empty((const std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96)) )
    {
      v48 = std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::end((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96))._M_current;
      v49._M_current = std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::begin((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::pair<proto::GCGDiceSideType,unsigned int> const&,std::pair<proto::GCGDiceSideType,unsigned int> const&)#3}>(
        v49,
        (__gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int>*,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> >)v48,
        v50);
      __for_range_2 = (std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *)(v8 + 96);
      __for_begin._M_current = std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::begin((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96))._M_current;
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Base_ptr)std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int>*,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> > *)&__for_end_0) )
      {
        v51 = __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>::operator*(&__for_begin);
        v52 = v51;
        if ( ((unsigned __int8)v51 & 7) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v51->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v51 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v51->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v51, 8LL);
        }
        __for_end = *v52;
        dice_type = std::get<0ul,proto::GCGDiceSideType,unsigned int>(&__for_end);
        v53 = std::get<1ul,proto::GCGDiceSideType,unsigned int>(&__for_end);
        dice_num = v53;
        if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v53);
        }
        if ( *dice_num >= *(_DWORD *)(v8 + 80) )
        {
          cur_can_pay_num_1 = *(_DWORD *)(v8 + 80);
          if ( *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(dice_type);
          }
          BT::ActionPlanMgr::useAndChooseDice(this, *dice_type, cur_can_pay_num_1, dice_map, choose_dice_map);
          v7 = 0;
          goto LABEL_117;
        }
        if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dice_num);
        }
        cur_can_pay_num_2 = *dice_num;
        if ( *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dice_type);
        }
        BT::ActionPlanMgr::useAndChooseDice(this, *dice_type, cur_can_pay_num_2, dice_map, choose_dice_map);
        *(_DWORD *)(v8 + 80) -= cur_can_pay_num_2;
        __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>::operator++(&__for_begin);
      }
    }
    __for_range_3 = character_exist_dice_set;
    __for_begin._M_current = (std::pair<proto::GCGDiceSideType,unsigned int> *)std::set<proto::GCGDiceSideType>::begin(character_exist_dice_set)._M_node;
    __for_end_0._M_node = std::set<proto::GCGDiceSideType>::end(__for_range_3)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self *)&__for_begin,
              &__for_end_0) )
    {
      v54 = std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator*((const std::_Rb_tree_const_iterator<proto::GCGDiceSideType> *const)&__for_begin);
      v55 = v54;
      if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v54);
      }
      *(_DWORD *)(v8 + 64) = *v55;
      if ( std::map<proto::GCGDiceSideType,unsigned int>::count(
             dice_map,
             (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64)) )
      {
        v56 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                dice_map,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
        __for_end = std::make_pair<proto::GCGDiceSideType &,unsigned int &>((proto::GCGDiceSideType *)(v8 + 64), v56);
        std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::push_back(
          (std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160),
          &__for_end);
      }
      std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::operator++((std::_Rb_tree_const_iterator<proto::GCGDiceSideType> *const)&__for_begin);
    }
    if ( !std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::empty((const std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160)) )
    {
      v57 = std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::end((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160))._M_current;
      v58._M_current = std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::begin((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::pair<proto::GCGDiceSideType,unsigned int> const&,std::pair<proto::GCGDiceSideType,unsigned int> const&)#3}>(
        v58,
        (__gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int>*,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> >)v57,
        v59);
      __for_range_4 = (std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *)(v8 + 160);
      __for_begin._M_current = std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::begin((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160))._M_current;
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Base_ptr)std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::end(__for_range_4)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int>*,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> > *)&__for_end_0) )
      {
        v60 = __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>::operator*(&__for_begin);
        v61 = v60;
        if ( ((unsigned __int8)v60 & 7) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v60->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v60 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v60->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v60, 8LL);
        }
        __for_end = *v61;
        dice_type_0 = std::get<0ul,proto::GCGDiceSideType,unsigned int>(&__for_end);
        v62 = std::get<1ul,proto::GCGDiceSideType,unsigned int>(&__for_end);
        dice_num_0 = v62;
        if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v62);
        }
        if ( *dice_num_0 >= *(_DWORD *)(v8 + 80) )
        {
          cur_can_pay_num_3 = *(_DWORD *)(v8 + 80);
          if ( *(_BYTE *)(((unsigned __int64)dice_type_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dice_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type_0 >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(dice_type_0);
          }
          BT::ActionPlanMgr::useAndChooseDice(this, *dice_type_0, cur_can_pay_num_3, dice_map, choose_dice_map);
          v7 = 0;
          goto LABEL_117;
        }
        if ( *(_BYTE *)(((unsigned __int64)dice_num_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dice_num_0);
        }
        cur_can_pay_num_4 = *dice_num_0;
        if ( *(_BYTE *)(((unsigned __int64)dice_type_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(dice_type_0);
        }
        BT::ActionPlanMgr::useAndChooseDice(this, *dice_type_0, cur_can_pay_num_4, dice_map, choose_dice_map);
        v63 = *(_DWORD *)(v8 + 80);
        if ( *(_BYTE *)(((unsigned __int64)dice_num_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dice_num_0);
        }
        *(_DWORD *)(v8 + 80) = v63 - *dice_num_0;
        __gnu_cxx::__normal_iterator<std::pair<proto::GCGDiceSideType,unsigned int> *,std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>>::operator++(&__for_begin);
      }
    }
    if ( *(_DWORD *)(v8 + 80) )
    {
      v76 = GCG_DICE_SIDE_PAIMON;
      if ( !std::map<proto::GCGDiceSideType,unsigned int>::count(dice_map, &v76) )
        goto LABEL_112;
      *(_DWORD *)(v8 + 64) = 8;
      v64 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
              dice_map,
              (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v8 + 64));
      v65 = v64;
      if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v64);
      }
      if ( *v65 >= *(_DWORD *)(v8 + 80) )
        v66 = 0;
      else
LABEL_112:
        v66 = 1;
      if ( v66 )
      {
        common::milog::MiLogStream::create(
          &v100,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "tryPayDiceWithFilter",
          402);
        v67 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v100,
                (const char (*)[36])"GCG_DICE_SIDE_PAIMON need cost_num:");
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v67,
                (const unsigned int *)(v8 + 80));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v68, (const char (*)[12])" not enough");
        common::milog::MiLogStream::~MiLogStream(&v100);
        v7 = -1;
      }
      else
      {
        cur_can_pay_num_0 = *(_DWORD *)(v8 + 80);
        BT::ActionPlanMgr::useAndChooseDice(this, GCG_DICE_SIDE_PAIMON, cur_can_pay_num_0, dice_map, choose_dice_map);
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
LABEL_117:
    std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::~vector((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 160));
    std::vector<std::pair<proto::GCGDiceSideType,unsigned int>>::~vector((std::vector<std::pair<proto::GCGDiceSideType,unsigned int>> *const)(v8 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v100,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "tryPayDiceWithFilter",
      411);
    v69 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v100,
            (const char (*)[42])"tryPayDiceWithFilter unsupport cost_type:");
    *(_DWORD *)(v8 + 64) = cost_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v8 + 64));
    common::milog::MiLogStream::~MiLogStream(&v100);
    v7 = -1;
  }
  result = v7;
  if ( v101 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 275: range 000000000E11FEB4-000000000E12007A
bool __cdecl BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&)#1}::operator()(
        const BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&, const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&)> *const __closure,
        const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *dice_left,
        const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *dice_right)
{
  uint32_t weight; // ecx
  uint32_t v5; // ecx
  uint32_t dice_num; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&dice_left->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_left->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_left->weight);
  }
  weight = dice_left->weight;
  if ( *(_BYTE *)(((unsigned __int64)&dice_right->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_right->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_right->weight);
  }
  if ( weight > dice_right->weight )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&dice_left->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_left->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_left->weight);
  }
  v5 = dice_left->weight;
  if ( *(_BYTE *)(((unsigned __int64)&dice_right->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_right->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_right->weight);
  }
  if ( v5 != dice_right->weight )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&dice_left->dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_left->dice_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_left->dice_num);
  }
  dice_num = dice_left->dice_num;
  if ( *(_BYTE *)(((unsigned __int64)&dice_right->dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_right->dice_num >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_right->dice_num);
  }
  return dice_num < dice_right->dice_num;
};

// Line 301: range 000000000E12007C-000000000E120242
bool __cdecl BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&,BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::AlternativeDiceInfo const&)#2}::operator()(
        const BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&, const BT::ActionPlanMgr::tryPayDiceWithFilter(const std::set<proto::GCGDiceSideType>&, const std::set<proto::GCGDiceSideType>&, GCGCostType, uint32_t, std::map<proto::GCGDiceSideType, unsigned int>&, std::map<proto::GCGDiceSideType, unsigned int>&)::AlternativeDiceInfo&)> *const __closure,
        const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *dice_left,
        const BT::ActionPlanMgr::tryPayDiceWithFilter::AlternativeDiceInfo *dice_right)
{
  uint32_t dice_num; // ecx
  uint32_t v5; // ecx
  uint32_t weight; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&dice_left->dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_left->dice_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_left->dice_num);
  }
  dice_num = dice_left->dice_num;
  if ( *(_BYTE *)(((unsigned __int64)&dice_right->dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_right->dice_num >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_right->dice_num);
  }
  if ( dice_num > dice_right->dice_num )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&dice_left->dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_left->dice_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_left->dice_num);
  }
  v5 = dice_left->dice_num;
  if ( *(_BYTE *)(((unsigned __int64)&dice_right->dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_right->dice_num >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_right->dice_num);
  }
  if ( v5 != dice_right->dice_num )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&dice_left->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_left->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_left->weight);
  }
  weight = dice_left->weight;
  if ( *(_BYTE *)(((unsigned __int64)&dice_right->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dice_right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_right->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dice_right->weight);
  }
  return weight > dice_right->weight;
};

// Line 338: range 000000000E120244-000000000E1202E3
bool __cdecl BT::ActionPlanMgr::tryPayDiceWithFilter(std::set<proto::GCGDiceSideType> const&,std::set<proto::GCGDiceSideType> const&,data::GCGCostType,unsigned int,std::map<proto::GCGDiceSideType,unsigned int> &,std::map<proto::GCGDiceSideType,unsigned int> &)::{lambda(std::pair const&<proto::GCGDiceSideType,unsigned int>,std::pair const&<proto::GCGDiceSideType,unsigned int>)#3}::operator()(
        const BT::ActionPlanMgr::tryPayDiceWithFilter::<lambda(const std::pair<proto::GCGDiceSideType, unsigned int>&, const std::pair<proto::GCGDiceSideType, unsigned int>&)> *const __closure,
        const std::pair<proto::GCGDiceSideType,unsigned int> *left,
        const std::pair<proto::GCGDiceSideType,unsigned int> *right)
{
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&left->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->second);
  }
  second = left->second;
  if ( *(_BYTE *)(((unsigned __int64)&right->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->second);
  }
  return second < right->second;
};

// Line 419: range 000000000E121914-000000000E121F72
int32_t __cdecl BT::ActionPlanMgr::calculatePriority(
        const std::map<data::ActionPlanPriorReviseType,int> *prior_revise_map,
        const std::map<data::GCGCostType,unsigned int> *cost_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  int32_t *v6; // rax
  int32_t *v7; // rdx
  int v8; // eax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v9; // rax
  int32_t *v10; // rdx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v11; // rax
  int32_t *v12; // rdx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v13; // rax
  int32_t *v14; // rdx
  std::_Rb_tree_const_iterator<data::GCGCostType>::reference v15; // rax
  _DWORD *v16; // rdx
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+14h] [rbp-12Ch] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+18h] [rbp-128h] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type v22; // [rsp+1Ch] [rbp-124h] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type v23; // [rsp+20h] [rbp-120h] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type v24; // [rsp+24h] [rbp-11Ch] BYREF
  int32_t priorty_result; // [rsp+28h] [rbp-118h]
  int32_t cur_num_2; // [rsp+2Ch] [rbp-114h]
  uint32_t REVISE_TYPE_START; // [rsp+30h] [rbp-110h]
  uint32_t REVISE_TYPE_END; // [rsp+34h] [rbp-10Ch]
  int32_t cur_per_revise; // [rsp+38h] [rbp-108h]
  int32_t cur_num_1; // [rsp+3Ch] [rbp-104h]
  int32_t cur_num_0; // [rsp+40h] [rbp-100h]
  int32_t cur_num; // [rsp+44h] [rbp-FCh]
  std::set<data::GCGCostType>::iterator __for_begin; // [rsp+48h] [rbp-F8h] BYREF
  std::set<data::GCGCostType>::iterator __for_end; // [rsp+50h] [rbp-F0h] BYREF
  std::set<data::GCGCostType> *__for_range; // [rsp+58h] [rbp-E8h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-E0h] BYREF
  char v37[192]; // [rsp+80h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 21 revise_type_index:427 48 4 15 revise_type:429 64 4 13 cost_type:471 80 48 20 specify_cost_set:469";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::calculatePriority;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  if ( std::map<data::GCGCostType,unsigned int>::empty(cost_map) )
  {
    result = 0;
    goto LABEL_41;
  }
  REVISE_TYPE_START = 1;
  REVISE_TYPE_END = 5;
  priorty_result = 0;
  for ( *(_DWORD *)(v2 + 32) = 1; *(_DWORD *)(v2 + 32) <= 4u; ++*(_DWORD *)(v2 + 32) )
  {
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 32);
    if ( !std::map<data::ActionPlanPriorReviseType,int>::count(
            prior_revise_map,
            (const std::map<data::ActionPlanPriorReviseType,int>::key_type *)(v2 + 48)) )
      continue;
    v6 = (int32_t *)std::map<data::ActionPlanPriorReviseType,int>::at(
                      prior_revise_map,
                      (const std::map<data::ActionPlanPriorReviseType,int>::key_type *)(v2 + 48));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    cur_per_revise = *v7;
    v8 = *(_DWORD *)(v2 + 48);
    if ( v8 == 4 )
    {
      v24 = GCG_COST_DICE_VOID;
      if ( std::map<data::GCGCostType,unsigned int>::count(cost_map, &v24) )
      {
        *(_DWORD *)(v2 + 64) = 10;
        v13 = (std::map<data::GCGCostType,unsigned int>::mapped_type *)std::map<data::GCGCostType,unsigned int>::at(
                                                                         cost_map,
                                                                         (const std::map<data::GCGCostType,unsigned int>::key_type *)(v2 + 64));
        v14 = (int32_t *)v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        cur_num_1 = *v14;
        priorty_result += cur_per_revise * cur_num_1;
      }
    }
    else
    {
      if ( v8 > 4 )
        goto LABEL_38;
      switch ( v8 )
      {
        case 3:
          v22 = GCG_COST_DICE_SAME;
          if ( std::map<data::GCGCostType,unsigned int>::count(cost_map, &v22) )
          {
            v23 = GCG_COST_DICE_SAME;
            v11 = (std::map<data::GCGCostType,unsigned int>::mapped_type *)std::map<data::GCGCostType,unsigned int>::at(
                                                                             cost_map,
                                                                             &v23);
            v12 = (int32_t *)v11;
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v11);
            }
            cur_num_0 = *v12;
            priorty_result += cur_per_revise * cur_num_0;
          }
          break;
        case 1:
          GCGUtils::getElementSet<data::GCGCostType>((std::set<data::GCGCostType> *)(v2 + 80));
          cur_num_2 = 0;
          __for_range = (std::set<data::GCGCostType> *)(v2 + 80);
          __for_begin._M_node = std::set<data::GCGCostType>::begin((const std::set<data::GCGCostType> *const)(v2 + 80))._M_node;
          __for_end._M_node = std::set<data::GCGCostType>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v15 = std::_Rb_tree_const_iterator<data::GCGCostType>::operator*(&__for_begin);
            v16 = v15;
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v15);
            }
            *(_DWORD *)(v2 + 64) = *v16;
            if ( std::map<data::GCGCostType,unsigned int>::count(
                   cost_map,
                   (const std::map<data::GCGCostType,unsigned int>::key_type *)(v2 + 64)) )
            {
              v17 = std::map<data::GCGCostType,unsigned int>::at(
                      cost_map,
                      (const std::map<data::GCGCostType,unsigned int>::key_type *)(v2 + 64));
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              cur_num_2 += *v18;
            }
            std::_Rb_tree_const_iterator<data::GCGCostType>::operator++(&__for_begin);
          }
          priorty_result += cur_per_revise * cur_num_2;
          std::set<data::GCGCostType>::~set((std::set<data::GCGCostType> *const)(v2 + 80));
          break;
        case 2:
          __x = GCG_COST_ENERGY;
          if ( std::map<data::GCGCostType,unsigned int>::count(cost_map, &__x) )
          {
            __k = GCG_COST_ENERGY;
            v9 = (std::map<data::GCGCostType,unsigned int>::mapped_type *)std::map<data::GCGCostType,unsigned int>::at(
                                                                            cost_map,
                                                                            &__k);
            v10 = (int32_t *)v9;
            if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v9);
            }
            cur_num = *v10;
            priorty_result += cur_per_revise * cur_num;
          }
          break;
        default:
LABEL_38:
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "calculatePriority",
            484);
          v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(&v36, (const char (*)[44])off_1BC759A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v36);
          continue;
      }
    }
  }
  result = priorty_result;
LABEL_41:
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 493: range 000000000E121F74-000000000E12217F
int32_t __cdecl BT::ActionPlanMgr::calculatePayPriority(
        const int32_t revise_per_pay_character_elem_dice,
        const int32_t revise_per_pay_paimon_elem_dice,
        const std::set<proto::GCGDiceSideType> *character_exist_dice_set,
        const std::map<proto::GCGDiceSideType,unsigned int> *choose_dice_map)
{
  int32_t result; // [rsp+2Ch] [rbp-44h]
  std::map<proto::GCGDiceSideType,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-38h] BYREF
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self __x; // [rsp+40h] [rbp-30h] BYREF
  std::_Rb_tree_const_iterator<proto::GCGDiceSideType>::_Self __y; // [rsp+48h] [rbp-28h] BYREF
  const std::map<proto::GCGDiceSideType,unsigned int> *__for_range; // [rsp+50h] [rbp-20h]
  const std::pair<const proto::GCGDiceSideType,unsigned int> *v12; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_side; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+68h] [rbp-8h]

  result = 0;
  __for_range = choose_dice_map;
  __for_begin._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin(choose_dice_map)._M_node;
  __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*(&__for_begin);
    dice_side = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(v12);
    dice_num = (std::tuple_element<1,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *)std::get<1ul,proto::GCGDiceSideType const,unsigned int>(v12);
    if ( *(_BYTE *)(((unsigned __int64)dice_side >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_side & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_side >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_side);
    }
    if ( *dice_side )
    {
      if ( *(_BYTE *)(((unsigned __int64)dice_side >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dice_side & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_side >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dice_side);
      }
      if ( *dice_side == GCG_DICE_SIDE_PAIMON )
      {
        if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dice_num);
        }
        result += revise_per_pay_paimon_elem_dice * *dice_num;
      }
      else
      {
        __y._M_node = std::set<proto::GCGDiceSideType>::end(character_exist_dice_set)._M_node;
        __x._M_node = std::set<proto::GCGDiceSideType>::find(character_exist_dice_set, dice_side)._M_node;
        if ( !std::operator==(&__x, &__y) )
        {
          if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(dice_num);
          }
          result += revise_per_pay_character_elem_dice * *dice_num;
        }
      }
    }
    std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++(&__for_begin);
  }
  return result;
};

// Line 518: range 000000000E122180-000000000E122288
void __cdecl BT::ActionPlanMgr::addPlan(BT::ActionPlanMgr *const this, BT::ActionPlanBasePtr *p_plan_ptr)
{
  uint32_t v2; // ebx
  std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<BT::ActionPlanBase>(p_plan_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "addPlan",
      521);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v4,
      (const char (*)[28])"addPlan plan_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    v2 = std::vector<std::shared_ptr<BT::ActionPlanBase>>::size(&this->action_plan_vec_);
    v3 = std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_plan_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v3->origin_order_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v3->origin_order_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v3 = (std::__shared_ptr_access<BT::ActionPlanBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v3->origin_order_);
    }
    v3->origin_order_ = v2;
    std::vector<std::shared_ptr<BT::ActionPlanBase>>::emplace_back<std::shared_ptr<BT::ActionPlanBase>&>(
      &this->action_plan_vec_,
      p_plan_ptr,
      (std::shared_ptr<BT::ActionPlanBase> *)&this->action_plan_vec_);
  }
};

// Line 531: range 000000000E1223BC-000000000E122453
std::set<proto::GCGDiceSideType> *__cdecl BT::ActionPlanMgr::getCurCharacterExistDiceSideSet(
        std::set<proto::GCGDiceSideType> *retstr,
        const BT::ActionPlanMgr *const this,
        GCGField *field)
{
  GCGCharacterZone *CharacterZone; // rbx
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::set<proto::GCGDiceSideType>::set(retstr);
  CharacterZone = GCGField::getCharacterZone(field);
  std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::getCurCharacterExistDiceSideSet(GCGField &)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (BT::ActionPlanMgr::getCurCharacterExistDiceSideSet::<lambda(GCGCard&)>)retstr);
  GCGCharacterZone::foreachAliveCharacter(CharacterZone, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  return retstr;
};

// Line 533: range 000000000E12228A-000000000E1223BA
ForeachPolicy __cdecl BT::ActionPlanMgr::getCurCharacterExistDiceSideSet(GCGField &)const::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionPlanMgr::getCurCharacterExistDiceSideSet::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GCGEffectElementType ElementType; // eax
  ForeachPolicy result; // eax
  std::set<proto::GCGDiceSideType> *character_exist_dice_set; // r14
  proto::GCGDiceSideType *v8; // rax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 31 cur_character_dice_type_opt:535";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::getCurCharacterExistDiceSideSet(GCGField &)const::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ElementType = GCGCard::getElementType(card);
  *(std::optional<proto::GCGDiceSideType> *)(v2 + 32) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(ElementType);
  if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v2 + 32)) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    character_exist_dice_set = __closure->__character_exist_dice_set;
    v8 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v2 + 32));
    std::set<proto::GCGDiceSideType>::insert(character_exist_dice_set, v8);
    result = FOREACH_CONTINUE;
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
  return result;
};

// Line 548: range 000000000E12384A-000000000E123F3A
std::vector<std::shared_ptr<BT::ActionPlanBase>> *__cdecl BT::ActionPlanMgr::createCurCharacterAttackPlan(
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *retstr,
        BT::ActionPlanMgr *const this,
        const std::shared_ptr<BTActionGenCharacterPlanConfig> *character_attack_plan_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGRoundVarMgr *RoundVarMgr; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGCard *v14; // r14
  BT::ActionPlanMgr::createCurCharacterAttackPlan::<lambda(GCGSkill&)> v16; // [rsp-40h] [rbp-1E0h]
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  const std::map<data::ActionPlanPriorReviseType,int> *revise_map; // [rsp+30h] [rbp-170h]
  const std::set<data::GCGSkillTagType> *skill_tag_filter_set; // [rsp+38h] [rbp-168h]
  GCGDuel *duel; // [rsp+40h] [rbp-160h]
  GCGField *field; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-150h] BYREF
  BT::ActionPlanMgr::createCurCharacterAttackPlan::<lambda(GCGSkill&)> __f; // [rsp+70h] [rbp-130h]
  char v25[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 revise_base:555 48 4 27 max_skill_num_cur_round:558 64 4 23 cur_skill_total_num:563 80"
                        " 16 21 on_stage_card_ptr:570 112 48 28 character_exist_dice_set:582";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::createCurCharacterAttackPlan;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(retstr);
  if ( !std::operator==<BTActionGenCharacterPlanConfig>(character_attack_plan_config_ptr, 0LL) )
  {
    revise_map = &std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)character_attack_plan_config_ptr)->param3.value;
    v6 = std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)character_attack_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v6->param2.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->param2.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->param2.value);
    }
    *(_DWORD *)(v3 + 32) = v6->param2.value;
    skill_tag_filter_set = &std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)character_attack_plan_config_ptr)->param1.value;
    v7 = std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)character_attack_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v7->param4.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->param4.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (std::__shared_ptr_access<BTActionGenCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->param4.value);
    }
    *(_DWORD *)(v3 + 48) = v7->param4.value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    field = GCGDuel::getField(duel, this->cur_controller_id_);
    RoundVarMgr = GCGField::getRoundVarMgr(field);
    *(_DWORD *)(v3 + 64) = GCGRoundVarMgr::getAIDirectUseSkillTotalNum(RoundVarMgr);
    if ( *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 64) >= *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createCurCharacterAttackPlan",
        566);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v23,
             (const char (*)[21])"cur_skill_total_num:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v10, (const char (*)[35])off_1BC75E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      goto LABEL_26;
    }
    GCGField::getCharacterZone(field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 80));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createCurCharacterAttackPlan",
        573);
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v23,
              (const char (*)[45])"on_stage_card_ptr is nullptr, controller_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_controller_id_);
      }
    }
    else
    {
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( GCGUtils::isCanAttack(v13) )
      {
        BT::ActionPlanMgr::getCurCharacterExistDiceSideSet((std::set<proto::GCGDiceSideType> *)(v3 + 112), this, field);
        v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        __f.__skill_tag_filter_set = skill_tag_filter_set;
        __f.__this = this;
        __f.__on_stage_card_ptr = (std::shared_ptr<GCGCard> *)(v3 + 80);
        __f.__revise_map = revise_map;
        __f.__revise_base = (const int32_t *)(v3 + 32);
        __f.__result = retstr;
        __f.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 112);
        v16.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 112);
        v16.__result = retstr;
        v16.__revise_base = (const int32_t *)(v3 + 32);
        v16.__revise_map = revise_map;
        v16.__on_stage_card_ptr = (std::shared_ptr<GCGCard> *)(v3 + 80);
        v16.__this = this;
        v16.__skill_tag_filter_set = skill_tag_filter_set;
        std::function<ForeachPolicy ()(GCGSkill &)>::function<BT::ActionPlanMgr::createCurCharacterAttackPlan(std::shared_ptr<BTActionGenCharacterPlanConfig> const&)::{lambda(GCGSkill &)#1},void,void>(
          (std::function<ForeachPolicy(GCGSkill&)> *const)&v23,
          v16);
        GCGCard::foreachSkill(v14, (std::function<ForeachPolicy(GCGSkill&)> *)&v23);
        std::function<ForeachPolicy ()(GCGSkill &)>::~function((std::function<ForeachPolicy(GCGSkill&)> *const)&v23);
        std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v3 + 112));
        goto LABEL_25;
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createCurCharacterAttackPlan",
        579);
      v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v23, (const char (*)[52])off_1BC75EE0);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_controller_id_);
      }
    }
    val = this->cur_controller_id_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
LABEL_25:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 80));
  }
LABEL_26:
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 584: range 000000000E122454-000000000E123848
ForeachPolicy __cdecl BT::ActionPlanMgr::createCurCharacterAttackPlan(std::shared_ptr<BTActionGenCharacterPlanConfig> const&)::{lambda(GCGSkill &)#1}::operator()(
        const BT::ActionPlanMgr::createCurCharacterAttackPlan::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGSkillTagType *v5; // rax
  data::GCGSkillTagType *v6; // rdx
  BT::ActionPlanMgr *this; // rax
  GCGControllerValue cur_controller_id; // edx
  BT::ActionPlanMgr *v9; // rax
  BT::ActionPlanMgr *v10; // rax
  GCGControllerValue v11; // ecx
  BT::ActionPlanMgr *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  BT::ActionPlanMgr *v16; // rax
  GCGSkillLogic *SkillLogic; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v18; // rax
  int *v19; // rdx
  int v20; // eax
  uint32_t v21; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  uint32_t SkillId; // r14d
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  uint32_t *p_skill_id; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  int32_t v36; // esi
  const int32_t *revise_base; // rdx
  int32_t v38; // r14d
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  int32_t *p_priority; // rax
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  void (__fastcall **vptr_DescribalBase)(std::string *, std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *v43; // r14
  BT::ActionPlanMgr *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  bool v50; // r14
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // r14
  uint32_t v56; // r14d
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rdx
  uint32_t *v58; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  uint32_t v60; // r14d
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  int32_t v63; // esi
  const int32_t *v64; // rdx
  int32_t v65; // r14d
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rdx
  int32_t *v67; // rax
  std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  void (__fastcall **v69)(std::string *, std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *v70; // r14
  ForeachPolicy result; // eax
  bool is_match_tag; // [rsp+13h] [rbp-22Dh]
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+14h] [rbp-22Ch] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+18h] [rbp-228h] BYREF
  data::GCGSkillTagType skill_tag; // [rsp+1Ch] [rbp-224h]
  int32_t total_revise_priority; // [rsp+20h] [rbp-220h]
  int32_t total_revise_priority_0; // [rsp+24h] [rbp-21Ch]
  std::set<data::GCGSkillTagType>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::set<data::GCGSkillTagType>::iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  const std::set<data::GCGSkillTagType> *__for_range; // [rsp+38h] [rbp-208h]
  std::shared_ptr<BT::ActionPlanBase> v81; // [rsp+40h] [rbp-200h] BYREF
  common::milog::MiLogStream v82; // [rsp+50h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v83; // [rsp+70h] [rbp-1D0h] BYREF
  std::string val; // [rsp+90h] [rbp-1B0h] BYREF
  std::map<data::GCGCostType,unsigned int> p_need_cost_map; // [rsp+B0h] [rbp-190h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_dice_side_map; // [rsp+E0h] [rbp-160h] BYREF
  char v87[304]; // [rsp+110h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 cost_energy:614 64 16 19 attack_plan_ptr:650 96 48 12 cost_map:612 176 48 19 choose_dice_map:636";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::createCurCharacterAttackPlan(std::shared_ptr<BTActionGenCharacterPlanConfig> const&)::{lambda(GCGSkill &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::set<data::GCGSkillTagType>::empty(__closure->__skill_tag_filter_set) )
    goto LABEL_112;
  is_match_tag = 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_range = __closure->__skill_tag_filter_set;
  __for_begin._M_node = std::set<data::GCGSkillTagType>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<data::GCGSkillTagType>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = (data::GCGSkillTagType *)std::_Rb_tree_const_iterator<data::GCGSkillTagType>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    skill_tag = *v6;
    if ( GCGSkill::isHasTag(skill, skill_tag) )
    {
      is_match_tag = 1;
      break;
    }
    std::_Rb_tree_const_iterator<data::GCGSkillTagType>::operator++(&__for_begin);
  }
  if ( is_match_tag )
  {
LABEL_112:
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      this = (BT::ActionPlanMgr *)__asan_report_load4(&this->cur_controller_id_);
    }
    cur_controller_id = this->cur_controller_id_;
    v9 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    if ( GCGUtils::checkAICanUseSkill(skill, v9->game_mode_, cur_controller_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this);
      v10 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&v10->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (BT::ActionPlanMgr *)__asan_report_load4(&v10->cur_controller_id_);
      }
      v11 = v10->cur_controller_id_;
      v12 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure->__this);
      if ( GCGUtils::checkSkillIntentionNeedBlock(v12->game_mode_, v11, skill) )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          608);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v83, (const char (*)[6])"card:");
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__on_stage_card_ptr);
        v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
        GCGCard::getDesc[abi:cxx11](&val, v14);
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" block plan gen");
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v83);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__this);
        v16 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure->__this);
        SkillLogic = GCGGameMode::getSkillLogic(v16->game_mode_);
        GCGSkillLogic::getReviseSkillCostPreview(
          (std::map<data::GCGCostType,unsigned int> *)(v2 + 96),
          SkillLogic,
          skill);
        __x = GCG_COST_ENERGY;
        if ( std::map<data::GCGCostType,unsigned int>::count(
               (const std::map<data::GCGCostType,unsigned int> *const)(v2 + 96),
               &__x) )
        {
          __k = GCG_COST_ENERGY;
          v18 = std::map<data::GCGCostType,unsigned int>::operator[](
                  (std::map<data::GCGCostType,unsigned int> *const)(v2 + 96),
                  &__k);
          v19 = (int *)v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          v20 = *v19;
        }
        else
        {
          v20 = 0;
        }
        *(_DWORD *)(v2 + 48) = v20;
        if ( !*(_DWORD *)(v2 + 48) )
          goto LABEL_113;
        v21 = *(_DWORD *)(v2 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__on_stage_card_ptr);
        v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
        if ( !GCGUtils::isEnergyCostValid(v22, v21) )
        {
          common::milog::MiLogStream::create(
            &v83,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            619);
          v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v83, (const char (*)[6])"card:");
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__on_stage_card_ptr);
          v24 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
          __k = GCGCard::getId(v24);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)&__k);
          v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])",skill:");
          GCGSkill::getName[abi:cxx11](&val, skill);
          v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &val);
          v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v27,
                  (const char (*)[14])",cost_energy:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" not meet");
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v83);
        }
        else
        {
LABEL_113:
          if ( std::map<data::GCGCostType,unsigned int>::empty((const std::map<data::GCGCostType,unsigned int> *const)(v2 + 96)) )
          {
            common::tools::perf::make_shared<BT::ActionPlanCurCharacterAttack>();
            SkillId = GCGSkill::getSkillId(skill);
            v31 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            p_skill_id = &v31->skill_id_;
            if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4(p_skill_id);
            }
            v31->skill_id_ = SkillId;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__on_stage_card_ptr);
            v33 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
            Guid = GCGCard::getGuid(v33);
            v35 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v35->cur_character_guid_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v35->cur_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
            {
              v35 = (std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v35->cur_character_guid_);
            }
            v35->cur_character_guid_ = Guid;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__revise_map);
            v36 = BT::ActionPlanMgr::calculatePriority(
                    __closure->__revise_map,
                    (const std::map<data::GCGCostType,unsigned int> *)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_base >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__revise_base);
            revise_base = __closure->__revise_base;
            if ( *(_BYTE *)(((unsigned __int64)revise_base >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)revise_base & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_base >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(__closure->__revise_base);
            }
            total_revise_priority_0 = v36 + *revise_base;
            v38 = total_revise_priority_0;
            v39 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            p_priority = &v39->priority_;
            if ( *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_priority & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_priority >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4(p_priority);
            }
            v39->priority_ = v38;
            common::milog::MiLogStream::create(
              &v83,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/logic/action_plan_mgr.cpp",
              "operator()",
              631);
            v41 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v41);
            vptr_DescribalBase = (void (__fastcall **)(std::string *, std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v41->_vptr_DescribalBase;
            if ( *(_BYTE *)(((unsigned __int64)v41->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
              __asan_report_load8(v41->_vptr_DescribalBase);
            (*vptr_DescribalBase)(&val, v41);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v83, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v83);
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__result);
            v43 = __closure->__result;
            std::shared_ptr<BT::ActionPlanBase>::shared_ptr<BT::ActionPlanCurCharacterAttack,void>(
              &v81,
              (const std::shared_ptr<BT::ActionPlanCurCharacterAttack> *)(v2 + 64));
            std::vector<std::shared_ptr<BT::ActionPlanBase>>::push_back(v43, &v81);
            std::shared_ptr<BT::ActionPlanBase>::~shared_ptr(&v81);
            std::shared_ptr<BT::ActionPlanCurCharacterAttack>::~shared_ptr((std::shared_ptr<BT::ActionPlanCurCharacterAttack> *const)(v2 + 64));
          }
          else
          {
            std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 176));
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__this);
            v44 = __closure->__this;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__character_exist_dice_set);
            if ( BT::ActionPlanMgr::payPlan(
                   v44,
                   __closure->__character_exist_dice_set,
                   (const std::map<data::GCGCostType,unsigned int> *)(v2 + 96),
                   (std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 176)) )
            {
              common::milog::MiLogStream::create(
                &v83,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_ai/logic/action_plan_mgr.cpp",
                "operator()",
                639);
              v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v83, (const char (*)[6])"card:");
              if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&__closure->__on_stage_card_ptr);
              v46 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
              __k = GCGCard::getId(v46);
              v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)&__k);
              v48 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])",skill:");
              GCGSkill::getName[abi:cxx11](&val, skill);
              v49 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, &val);
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v49,
                (const char (*)[16])" cost not valid");
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v83);
            }
            else
            {
              std::map<proto::GCGDiceSideType,unsigned int>::map(
                &p_dice_side_map,
                (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 176));
              std::map<data::GCGCostType,unsigned int>::map(
                &p_need_cost_map,
                (const std::map<data::GCGCostType,unsigned int> *)(v2 + 96));
              v50 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map);
              std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map);
              std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map);
              if ( v50 )
              {
                common::milog::MiLogStream::create(
                  &v82,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_ai/logic/action_plan_mgr.cpp",
                  "operator()",
                  646);
                v51 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v82,
                        (const char (*)[27])"dice cost not valid, card:");
                if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&__closure->__on_stage_card_ptr);
                v52 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
                __k = GCGCard::getId(v52);
                v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v51,
                        (const unsigned int *)&__k);
                v54 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v53, (const char (*)[8])",skill:");
                GCGSkill::getName[abi:cxx11]((std::string *)&v83, skill);
                v55 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v54,
                        (const std::string *)&v83);
                GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
                  &val,
                  (const std::map<data::GCGCostType,unsigned int> *)(v2 + 96),
                  (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 176));
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &val);
                std::string::~string(&val);
                std::string::~string(&v83);
                common::milog::MiLogStream::~MiLogStream(&v82);
              }
              else
              {
                common::tools::perf::make_shared<BT::ActionPlanCurCharacterAttack>();
                v56 = GCGSkill::getSkillId(skill);
                v57 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                v58 = &v57->skill_id_;
                if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v58);
                }
                v57->skill_id_ = v56;
                if ( *(_BYTE *)(((unsigned __int64)&__closure->__on_stage_card_ptr >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&__closure->__on_stage_card_ptr);
                v59 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__on_stage_card_ptr);
                v60 = GCGCard::getGuid(v59);
                v61 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&v61->cur_character_guid_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v61->cur_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  v61 = (std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v61->cur_character_guid_);
                }
                v61->cur_character_guid_ = v60;
                v62 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                std::map<proto::GCGDiceSideType,unsigned int>::operator=(
                  &v62->choose_dice_map_,
                  (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 176));
                if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&__closure->__revise_map);
                v63 = BT::ActionPlanMgr::calculatePriority(
                        __closure->__revise_map,
                        (const std::map<data::GCGCostType,unsigned int> *)(v2 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_base >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&__closure->__revise_base);
                v64 = __closure->__revise_base;
                if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(__closure->__revise_base);
                }
                total_revise_priority = v63 + *v64;
                v65 = total_revise_priority;
                v66 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                v67 = &v66->priority_;
                if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v67);
                }
                v66->priority_ = v65;
                common::milog::MiLogStream::create(
                  &v83,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_ai/logic/action_plan_mgr.cpp",
                  "operator()",
                  657);
                v68 = std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v68);
                v69 = (void (__fastcall **)(std::string *, std::__shared_ptr_access<BT::ActionPlanCurCharacterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v68->_vptr_DescribalBase;
                if ( *(_BYTE *)(((unsigned __int64)v68->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v68->_vptr_DescribalBase);
                (*v69)(&val, v68);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v83, &val);
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v83);
                if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&__closure->__result);
                v70 = __closure->__result;
                std::shared_ptr<BT::ActionPlanBase>::shared_ptr<BT::ActionPlanCurCharacterAttack,void>(
                  &v81,
                  (const std::shared_ptr<BT::ActionPlanCurCharacterAttack> *)(v2 + 64));
                std::vector<std::shared_ptr<BT::ActionPlanBase>>::push_back(v70, &v81);
                std::shared_ptr<BT::ActionPlanBase>::~shared_ptr(&v81);
                std::shared_ptr<BT::ActionPlanCurCharacterAttack>::~shared_ptr((std::shared_ptr<BT::ActionPlanCurCharacterAttack> *const)(v2 + 64));
              }
            }
            std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 176));
          }
        }
        std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v2 + 96));
      }
    }
  }
  result = FOREACH_CONTINUE;
  if ( v87 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 666: range 000000000E124920-000000000E124EF7
std::vector<std::shared_ptr<BT::ActionPlanBase>> *__cdecl BT::ActionPlanMgr::createRebootPlan(
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *retstr,
        BT::ActionPlanMgr *const this,
        const std::shared_ptr<BTActionGenRebootPlanConfig> *reboot_plan_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  GCGDiceZone *DiceZone; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  GCGCardZone *HandZone; // r14
  BT::ActionPlanMgr::createRebootPlan::<lambda(GCGCard&)> v18; // [rsp-30h] [rbp-1B0h]
  std::set<data::GCGTagType> *exclude_card_tag_set; // [rsp+20h] [rbp-160h]
  std::map<data::ActionPlanPriorReviseType,int> *revise_map; // [rsp+28h] [rbp-158h]
  GCGDuel *duel; // [rsp+30h] [rbp-150h]
  GCGField *field; // [rsp+38h] [rbp-148h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-140h] BYREF
  BT::ActionPlanMgr::createRebootPlan::<lambda(GCGCard&)> __f; // [rsp+60h] [rbp-120h]
  char v26[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 23 max_times_per_round:672 48 4 16 min_dice_num:674 64 4 15 revise_base:675 80 4 26 cur_r"
                        "ound_reboot_times:680 96 4 19 valid_dice_size:686 112 48 28 character_exist_dice_set:692";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::createRebootPlan;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862725] = -202116109;
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(retstr);
  if ( !std::operator==<BTActionGenRebootPlanConfig>(reboot_plan_config_ptr, 0LL) )
  {
    v6 = std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)reboot_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v6->param1.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->param1.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->param1.value);
    }
    *(_DWORD *)(v3 + 32) = v6->param1.value;
    exclude_card_tag_set = &std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)reboot_plan_config_ptr)->param2.value;
    v7 = std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)reboot_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v7->param3.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->param3.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->param3.value);
    }
    *(_DWORD *)(v3 + 48) = v7->param3.value;
    v8 = std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)reboot_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v8->param4.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->param4.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->param4.value);
    }
    *(_DWORD *)(v3 + 64) = v8->param4.value;
    revise_map = &std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenRebootPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)reboot_plan_config_ptr)->param5.value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    field = GCGDuel::getField(duel, this->cur_controller_id_);
    *(_DWORD *)(v3 + 80) = GCGField::getRoundRobootTimes(field);
    if ( *(_DWORD *)(v3 + 32) && *(_DWORD *)(v3 + 80) >= *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createRebootPlan",
        683);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v24,
             (const char (*)[24])"times reach limit, cur:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", max:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      DiceZone = GCGField::getDiceZone(field);
      *(_DWORD *)(v3 + 96) = GCGDiceZone::getValidDiceSize(DiceZone);
      if ( *(_DWORD *)(v3 + 96) >= *(_DWORD *)(v3 + 48) )
      {
        BT::ActionPlanMgr::getCurCharacterExistDiceSideSet((std::set<proto::GCGDiceSideType> *)(v3 + 112), this, field);
        HandZone = GCGField::getHandZone(field);
        __f.__exclude_card_tag_set = exclude_card_tag_set;
        __f.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 112);
        __f.__this = this;
        __f.__revise_map = revise_map;
        __f.__revise_base = (const int32_t *)(v3 + 64);
        __f.__result = retstr;
        v18.__result = retstr;
        v18.__revise_base = (const int32_t *)(v3 + 64);
        v18.__revise_map = revise_map;
        v18.__this = this;
        v18.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 112);
        v18.__exclude_card_tag_set = exclude_card_tag_set;
        std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::createRebootPlan(std::shared_ptr<BTActionGenRebootPlanConfig> const&)::{lambda(GCGCard &)#1},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&v24,
          v18);
        GCGCardZone::foreachCard(HandZone, (std::function<ForeachPolicy(GCGCard&)> *)&v24);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v24);
        std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v3 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "createRebootPlan",
          689);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v24, (const char (*)[35])off_1BC76160);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 96));
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", min:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
  }
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 693: range 000000000E123F3C-000000000E12491E
ForeachPolicy __cdecl BT::ActionPlanMgr::createRebootPlan(std::shared_ptr<BTActionGenRebootPlanConfig> const&)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionPlanMgr::createRebootPlan::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGTagType *v5; // rax
  data::GCGTagType *v6; // rdx
  BT::ActionPlanMgr *this; // rax
  common::milog::MiLogStream *v8; // r14
  bool v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  uint32_t Guid; // r14d
  std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int32_t v15; // esi
  const int32_t *revise_base; // rdx
  int32_t v17; // r14d
  std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  int32_t *p_priority; // rax
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *v20; // r14
  std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  void (__fastcall **vptr_DescribalBase)(std::string *, std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  ForeachPolicy result; // eax
  std::less<data::GCGCostType> __comp; // [rsp+2Dh] [rbp-203h] BYREF
  std::allocator<std::pair<const data::GCGCostType,unsigned int> > __a; // [rsp+2Eh] [rbp-202h] BYREF
  bool is_contain_exclude_tag; // [rsp+2Fh] [rbp-201h]
  data::GCGTagType card_tag; // [rsp+30h] [rbp-200h]
  int32_t total_revise_priority; // [rsp+34h] [rbp-1FCh]
  std::set<data::GCGTagType>::iterator __for_begin; // [rsp+38h] [rbp-1F8h] BYREF
  const std::set<data::GCGTagType> *__for_range; // [rsp+40h] [rbp-1F0h]
  std::set<data::GCGTagType>::iterator __for_end; // [rsp+48h] [rbp-1E8h] BYREF
  std::shared_ptr<BT::ActionPlanBase> __x; // [rsp+50h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-1B0h] BYREF
  std::string val; // [rsp+A0h] [rbp-190h] BYREF
  std::map<data::GCGCostType,unsigned int> p_need_cost_map; // [rsp+C0h] [rbp-170h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_dice_side_map; // [rsp+F0h] [rbp-140h] BYREF
  char v38[272]; // [rsp+120h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 19 reboot_plan_ptr:722 64 48 19 choose_dice_map:708 144 48 12 cost_map:710";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::createRebootPlan(std::shared_ptr<BTActionGenRebootPlanConfig> const&)::{lambda(GCGCard &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  is_contain_exclude_tag = 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_range = __closure->__exclude_card_tag_set;
  __for_begin._M_node = std::set<data::GCGTagType>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<data::GCGTagType>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    card_tag = *v6;
    if ( GCGCard::isHasTag(card, card_tag) )
    {
      is_contain_exclude_tag = 1;
      break;
    }
    std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
  }
  if ( !is_contain_exclude_tag )
  {
    std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 64));
    __for_end._M_node = (std::_Rb_tree_const_iterator<data::GCGTagType>::_Base_ptr)0x10000000ALL;
    std::allocator<std::pair<data::GCGCostType const,unsigned int>>::allocator(&__a);
    std::map<data::GCGCostType,unsigned int>::map(
      (std::map<data::GCGCostType,unsigned int> *const)(v2 + 144),
      (std::initializer_list<std::pair<const data::GCGCostType,unsigned int> >)__PAIR128__(1LL, &__for_end),
      &__comp,
      &__a);
    std::allocator<std::pair<data::GCGCostType const,unsigned int>>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__character_exist_dice_set);
    if ( BT::ActionPlanMgr::payPlan(
           this,
           __closure->__character_exist_dice_set,
           (const std::map<data::GCGCostType,unsigned int> *)(v2 + 144),
           (std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        713);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v34,
             (const char (*)[24])"card can not pay, card:");
      GCGCard::getDesc[abi:cxx11](&val, card);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      std::map<proto::GCGDiceSideType,unsigned int>::map(
        &p_dice_side_map,
        (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 64));
      std::map<data::GCGCostType,unsigned int>::map(
        &p_need_cost_map,
        (const std::map<data::GCGCostType,unsigned int> *)(v2 + 144));
      v9 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map);
      std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map);
      std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          719);
        v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v33,
                (const char (*)[27])"dice cost not valid, card:");
        GCGCard::getDesc[abi:cxx11]((std::string *)&v34, card);
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v34);
        GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
          &val,
          (const std::map<data::GCGCostType,unsigned int> *)(v2 + 144),
          (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
        std::string::~string(&val);
        std::string::~string(&v34);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        common::tools::perf::make_shared<BT::ActionPlanReboot>();
        Guid = GCGCard::getGuid(card);
        v13 = std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v13->hand_card_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->hand_card_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v13->hand_card_id_);
        }
        v13->hand_card_id_ = Guid;
        v14 = std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        std::map<proto::GCGDiceSideType,unsigned int>::operator=(
          &v14->choose_dice_map_,
          (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 64));
        GCGCard::getCost((std::map<data::GCGCostType,unsigned int> *)&p_dice_side_map, card);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__revise_map);
        v15 = BT::ActionPlanMgr::calculatePriority(
                __closure->__revise_map,
                (const std::map<data::GCGCostType,unsigned int> *)&p_dice_side_map);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_base >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__revise_base);
        revise_base = __closure->__revise_base;
        if ( *(_BYTE *)(((unsigned __int64)revise_base >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)revise_base & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_base >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__closure->__revise_base);
        }
        total_revise_priority = v15 + *revise_base;
        std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)&p_dice_side_map);
        v17 = total_revise_priority;
        v18 = std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        p_priority = &v18->priority_;
        if ( *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_priority & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_priority);
        }
        v18->priority_ = v17;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__result);
        v20 = __closure->__result;
        std::shared_ptr<BT::ActionPlanBase>::shared_ptr<BT::ActionPlanReboot,void>(
          &__x,
          (const std::shared_ptr<BT::ActionPlanReboot> *)(v2 + 32));
        std::vector<std::shared_ptr<BT::ActionPlanBase>>::push_back(v20, &__x);
        std::shared_ptr<BT::ActionPlanBase>::~shared_ptr(&__x);
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          729);
        v21 = std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v21);
        vptr_DescribalBase = (void (__fastcall **)(std::string *, std::__shared_ptr_access<BT::ActionPlanReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v21->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v21->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
          __asan_report_load8(v21->_vptr_DescribalBase);
        (*vptr_DescribalBase)(&val, v21);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v34, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v34);
        std::shared_ptr<BT::ActionPlanReboot>::~shared_ptr((std::shared_ptr<BT::ActionPlanReboot> *const)(v2 + 32));
      }
    }
    std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v2 + 144));
    std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 64));
  }
  result = FOREACH_CONTINUE;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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
  return result;
};

// Line 738: range 000000000E124EF8-000000000E1261E5
void __fastcall BT::ActionPlanMgr::genChangeToCanAttackCharacterPlan(
        BT::ActionPlanMgr *const this,
        GCGCard *card,
        GCGSkill *skill,
        const std::set<proto::GCGDiceSideType> *character_exist_dice_set,
        const std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false> *change_to_can_attack_plan_config_ptr,
        uint32_t cur_need_cost_change_character,
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *result)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  data::GCGSkillTagType *v12; // rax
  data::GCGSkillTagType *v13; // rdx
  GCGControllerValue cur_controller_id; // edx
  GCGControllerValue v15; // ecx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  GCGSkillLogic *SkillLogic; // rax
  unsigned __int64 v19; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v20; // rax
  int *v21; // rdx
  int v22; // eax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  bool *p_is_normal_change; // rax
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  common::milog::MiLogStream *v43; // rax
  int v44; // r14d
  bool v45; // r14
  common::milog::MiLogStream *v46; // r14
  common::milog::MiLogStream *v47; // r14
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  int32_t v49; // eax
  int32_t v50; // r14d
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rdx
  int32_t *p_priority; // rax
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  void (__fastcall **vptr_DescribalBase)(std::string *, std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  bool v55; // [rsp+10h] [rbp-310h]
  uint32_t Guid; // [rsp+10h] [rbp-310h]
  std::less<data::GCGCostType> __comp; // [rsp+49h] [rbp-2D7h] BYREF
  std::allocator<std::pair<const data::GCGCostType,unsigned int> > __a; // [rsp+4Ah] [rbp-2D6h] BYREF
  bool is_match_tag; // [rsp+4Bh] [rbp-2D5h]
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+4Ch] [rbp-2D4h] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+50h] [rbp-2D0h] BYREF
  int32_t revise_base; // [rsp+54h] [rbp-2CCh]
  data::GCGSkillTagType skill_tag; // [rsp+58h] [rbp-2C8h]
  int32_t total_revise_priority; // [rsp+5Ch] [rbp-2C4h]
  std::set<data::GCGSkillTagType>::iterator __for_begin; // [rsp+60h] [rbp-2C0h] BYREF
  const std::map<data::ActionPlanPriorReviseType,int> *revise_map; // [rsp+68h] [rbp-2B8h]
  const std::set<data::GCGSkillTagType> *__for_range; // [rsp+70h] [rbp-2B0h]
  std::set<data::GCGSkillTagType>::iterator __for_end; // [rsp+78h] [rbp-2A8h] BYREF
  std::shared_ptr<BT::ActionPlanBase> v73; // [rsp+80h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v74; // [rsp+90h] [rbp-290h] BYREF
  common::milog::MiLogStream v75; // [rsp+B0h] [rbp-270h] BYREF
  std::string val; // [rsp+D0h] [rbp-250h] BYREF
  std::map<data::GCGCostType,unsigned int> p_need_cost_map; // [rsp+F0h] [rbp-230h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_dice_side_map; // [rsp+120h] [rbp-200h] BYREF
  char v79[464]; // [rsp+150h] [rbp-1D0h] BYREF

  v7 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(416LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "7 32 4 15 cost_energy:782 48 4 34 cur_need_cost_change_character:737 64 16 43 change_to_can_atta"
                        "ck_character_plan_ptr:804 96 48 24 skill_tag_filter_set:743 176 48 22 use_skill_cost_map:774 256"
                        " 48 19 choose_dice_map:792 336 48 35 change_character_final_cost_map:812";
  *(_QWORD *)(v7 + 16) = BT::ActionPlanMgr::genChangeToCanAttackCharacterPlan;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -219021312;
  v9[536862724] = -219021312;
  v9[536862725] = 62194;
  v9[536862727] = -218959118;
  v9[536862729] = -219021312;
  v9[536862730] = 62194;
  v9[536862732] = -202116109;
  *(_DWORD *)(v7 + 48) = cur_need_cost_change_character;
  if ( !std::operator==<BTActionGenChangeToCanAttackCharacterConfig>(
          (const std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *)change_to_can_attack_plan_config_ptr,
          0LL) )
  {
    v10 = std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(change_to_can_attack_plan_config_ptr);
    std::set<data::GCGSkillTagType>::set((std::set<data::GCGSkillTagType> *const)(v7 + 96), &v10->param1.value);
    v11 = std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(change_to_can_attack_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v11->param2.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->param2.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->param2.value);
    }
    revise_base = v11->param2.value;
    revise_map = &std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(change_to_can_attack_plan_config_ptr)->param3.value;
    if ( std::set<data::GCGSkillTagType>::empty((const std::set<data::GCGSkillTagType> *const)(v7 + 96)) )
      goto LABEL_16;
    is_match_tag = 0;
    __for_range = (const std::set<data::GCGSkillTagType> *)(v7 + 96);
    __for_begin._M_node = std::set<data::GCGSkillTagType>::begin((const std::set<data::GCGSkillTagType> *const)(v7 + 96))._M_node;
    __for_end._M_node = std::set<data::GCGSkillTagType>::end((const std::set<data::GCGSkillTagType> *const)(v7 + 96))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = (data::GCGSkillTagType *)std::_Rb_tree_const_iterator<data::GCGSkillTagType>::operator*(&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      skill_tag = *v13;
      if ( GCGSkill::isHasTag(skill, skill_tag) )
      {
        is_match_tag = 1;
        break;
      }
      std::_Rb_tree_const_iterator<data::GCGSkillTagType>::operator++(&__for_begin);
    }
    if ( is_match_tag )
    {
LABEL_16:
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_controller_id_);
      }
      cur_controller_id = this->cur_controller_id_;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      if ( GCGUtils::checkAICanUseSkill(skill, this->game_mode_, cur_controller_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_controller_id_);
        }
        v15 = this->cur_controller_id_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        if ( GCGUtils::checkSkillIntentionNeedBlock(this->game_mode_, v15, skill) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "genChangeToCanAttackCharacterPlan",
            768);
          v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v75, (const char (*)[6])"card:");
          GCGCard::getDesc[abi:cxx11](&val, card);
          v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &val);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])" block plan gen");
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
          GCGSkillLogic::getReviseSkillCostPreview(
            (std::map<data::GCGCostType,unsigned int> *)(v7 + 176),
            SkillLogic,
            skill);
          if ( *(_DWORD *)(v7 + 48) )
          {
            __k = GCG_COST_DICE_VOID;
            v19 = (unsigned __int64)std::map<data::GCGCostType,unsigned int>::operator[](
                                      (std::map<data::GCGCostType,unsigned int> *const)(v7 + 176),
                                      &__k);
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
              && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            {
              v19 = __asan_report_load4(v19);
            }
            *(_DWORD *)v19 += *(_DWORD *)(v7 + 48);
          }
          __x = GCG_COST_ENERGY;
          if ( std::map<data::GCGCostType,unsigned int>::count(
                 (const std::map<data::GCGCostType,unsigned int> *const)(v7 + 176),
                 &__x) )
          {
            __k = GCG_COST_ENERGY;
            v20 = std::map<data::GCGCostType,unsigned int>::operator[](
                    (std::map<data::GCGCostType,unsigned int> *const)(v7 + 176),
                    &__k);
            v21 = (int *)v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            v22 = *v21;
          }
          else
          {
            v22 = 0;
          }
          *(_DWORD *)(v7 + 32) = v22;
          if ( *(_DWORD *)(v7 + 32) && !GCGUtils::isEnergyCostValid(card, *(_DWORD *)(v7 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/logic/action_plan_mgr.cpp",
              "genChangeToCanAttackCharacterPlan",
              787);
            v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v75, (const char (*)[6])"card:");
            __k = GCGCard::getId(card);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)&__k);
            v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])",skill:");
            GCGSkill::getName[abi:cxx11](&val, skill);
            v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
            v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v26,
                    (const char (*)[14])",cost_energy:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v7 + 32));
            common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" not meet");
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v75);
          }
          else
          {
            std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v7 + 256));
            if ( BT::ActionPlanMgr::payPlan(
                   this,
                   character_exist_dice_set,
                   (const std::map<data::GCGCostType,unsigned int> *)(v7 + 176),
                   (std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256)) )
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_ai/logic/action_plan_mgr.cpp",
                "genChangeToCanAttackCharacterPlan",
                795);
              v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v75, (const char (*)[6])"card:");
              __k = GCGCard::getId(card);
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v29,
                      (const unsigned int *)&__k);
              v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])",skill:");
              GCGSkill::getName[abi:cxx11](&val, skill);
              v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &val);
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v32,
                (const char (*)[16])" cost not valid");
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v75);
            }
            else
            {
              std::map<proto::GCGDiceSideType,unsigned int>::map(
                &p_dice_side_map,
                (const std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256));
              std::map<data::GCGCostType,unsigned int>::map(
                &p_need_cost_map,
                (const std::map<data::GCGCostType,unsigned int> *)(v7 + 176));
              v55 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map);
              std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map);
              std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map);
              if ( v55 )
              {
                common::milog::MiLogStream::create(
                  &v74,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_ai/logic/action_plan_mgr.cpp",
                  "genChangeToCanAttackCharacterPlan",
                  801);
                v33 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v74,
                        (const char (*)[27])"dice cost not valid, card:");
                __k = GCGCard::getId(card);
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)&__k);
                v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])",skill:");
                GCGSkill::getName[abi:cxx11]((std::string *)&v75, skill);
                v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v35,
                        (const std::string *)&v75);
                GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
                  &val,
                  (const std::map<data::GCGCostType,unsigned int> *)(v7 + 176),
                  (const std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256));
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &val);
                std::string::~string(&val);
                std::string::~string(&v75);
                common::milog::MiLogStream::~MiLogStream(&v74);
              }
              else
              {
                common::tools::perf::make_shared<BT::ActionPlanChangeCharacter>();
                v37 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
                p_is_normal_change = &v37->is_normal_change_;
                if ( *(_BYTE *)(((unsigned __int64)p_is_normal_change >> 3) + 0x7FFF8000) != 0
                  && ((unsigned __int8)p_is_normal_change & 7) >= *(_BYTE *)(((unsigned __int64)p_is_normal_change >> 3)
                                                                           + 0x7FFF8000) )
                {
                  __asan_report_store1(p_is_normal_change);
                }
                v37->is_normal_change_ = 0;
                Guid = GCGCard::getGuid(card);
                v39 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&v39->change_to_character_guid_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v39->change_to_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  v39 = (std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v39->change_to_character_guid_);
                }
                v39->change_to_character_guid_ = Guid;
                if ( !*(_DWORD *)(v7 + 48) )
                  goto LABEL_56;
                std::map<proto::GCGDiceSideType,unsigned int>::clear((std::map<proto::GCGDiceSideType,unsigned int> *const)(v7 + 256));
                __k = GCG_COST_DICE_VOID;
                std::pair<data::GCGCostType const,unsigned int>::pair<data::GCGCostType,unsigned int &,true>(
                  (std::pair<const data::GCGCostType,unsigned int> *const)&__for_end,
                  &__k,
                  (unsigned int *)(v7 + 48));
                std::allocator<std::pair<data::GCGCostType const,unsigned int>>::allocator(&__a);
                std::map<data::GCGCostType,unsigned int>::map(
                  (std::map<data::GCGCostType,unsigned int> *const)(v7 + 336),
                  (std::initializer_list<std::pair<const data::GCGCostType,unsigned int> >)__PAIR128__(1LL, &__for_end),
                  &__comp,
                  &__a);
                std::allocator<std::pair<data::GCGCostType const,unsigned int>>::~allocator(&__a);
                if ( BT::ActionPlanMgr::payPlan(
                       this,
                       character_exist_dice_set,
                       (const std::map<data::GCGCostType,unsigned int> *)(v7 + 336),
                       (std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256)) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_ai/logic/action_plan_mgr.cpp",
                    "genChangeToCanAttackCharacterPlan",
                    815);
                  v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v75, (const char (*)[6])"card:");
                  __k = GCGCard::getId(card);
                  v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v40,
                          (const unsigned int *)&__k);
                  v42 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v41, (const char (*)[8])",skill:");
                  GCGSkill::getName[abi:cxx11](&val, skill);
                  v43 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, &val);
                  common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v43,
                    (const char (*)[16])" cost not valid");
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  v44 = 0;
                }
                else
                {
                  std::map<proto::GCGDiceSideType,unsigned int>::map(
                    &p_dice_side_map,
                    (const std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256));
                  std::map<data::GCGCostType,unsigned int>::map(
                    &p_need_cost_map,
                    (const std::map<data::GCGCostType,unsigned int> *)(v7 + 336));
                  v45 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map);
                  std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map);
                  std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map);
                  if ( v45 )
                  {
                    common::milog::MiLogStream::create(
                      &v74,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/card_ai/logic/action_plan_mgr.cpp",
                      "genChangeToCanAttackCharacterPlan",
                      821);
                    v46 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            &v74,
                            (const char (*)[27])"dice cost not valid, card:");
                    GCGCard::getDesc[abi:cxx11]((std::string *)&v75, card);
                    v47 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                            v46,
                            (const std::string *)&v75);
                    GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
                      &val,
                      (const std::map<data::GCGCostType,unsigned int> *)(v7 + 336),
                      (const std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256));
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, &val);
                    std::string::~string(&val);
                    std::string::~string(&v75);
                    common::milog::MiLogStream::~MiLogStream(&v74);
                    v44 = 0;
                  }
                  else
                  {
                    v48 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
                    std::map<proto::GCGDiceSideType,unsigned int>::operator=(
                      &v48->choose_dice_map_,
                      (const std::map<proto::GCGDiceSideType,unsigned int> *)(v7 + 256));
                    v44 = 1;
                  }
                }
                std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v7 + 336));
                if ( v44 == 1 )
                {
LABEL_56:
                  v49 = BT::ActionPlanMgr::calculatePriority(
                          revise_map,
                          (const std::map<data::GCGCostType,unsigned int> *)(v7 + 176));
                  total_revise_priority = revise_base + v49;
                  v50 = revise_base + v49;
                  v51 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
                  p_priority = &v51->priority_;
                  if ( *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_priority & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_priority >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_priority);
                  }
                  v51->priority_ = v50;
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_ai/logic/action_plan_mgr.cpp",
                    "genChangeToCanAttackCharacterPlan",
                    829);
                  v53 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v53);
                  vptr_DescribalBase = (void (__fastcall **)(std::string *, std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v53->_vptr_DescribalBase;
                  if ( *(_BYTE *)(((unsigned __int64)v53->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v53->_vptr_DescribalBase);
                  (*vptr_DescribalBase)(&val, v53);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v75, &val);
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  std::shared_ptr<BT::ActionPlanBase>::shared_ptr<BT::ActionPlanChangeCharacter,void>(
                    &v73,
                    (const std::shared_ptr<BT::ActionPlanChangeCharacter> *)(v7 + 64));
                  std::vector<std::shared_ptr<BT::ActionPlanBase>>::push_back(result, &v73);
                  std::shared_ptr<BT::ActionPlanBase>::~shared_ptr(&v73);
                }
                std::shared_ptr<BT::ActionPlanChangeCharacter>::~shared_ptr((std::shared_ptr<BT::ActionPlanChangeCharacter> *const)(v7 + 64));
              }
            }
            std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v7 + 256));
          }
          std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v7 + 176));
        }
      }
    }
    std::set<data::GCGSkillTagType>::~set((std::set<data::GCGSkillTagType> *const)(v7 + 96));
  }
  if ( v79 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 834: range 000000000E126738-000000000E126C3D
std::vector<std::shared_ptr<BT::ActionPlanBase>> *__cdecl BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan(
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *retstr,
        BT::ActionPlanMgr *const this,
        const std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *change_to_can_attack_plan_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGRoundVarMgr *RoundVarMgr; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  GCGCharacterZone *CharacterZone; // r14
  BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan::<lambda(GCGCard&)> v13; // [rsp-30h] [rbp-1A0h]
  GCGDuel *duel; // [rsp+20h] [rbp-150h]
  GCGField *field; // [rsp+28h] [rbp-148h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-140h] BYREF
  BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan::<lambda(GCGCard&)> __f; // [rsp+50h] [rbp-120h]
  char v19[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 27 max_skill_num_cur_round:842 64 4 23 cur_skill_total_num:848 80 16 24 cur_onstage_card_"
                        "ptr:855 112 48 28 character_exist_dice_set:861";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(retstr);
  if ( !std::operator==<BTActionGenChangeToCanAttackCharacterConfig>(change_to_can_attack_plan_config_ptr, 0LL) )
  {
    v6 = std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)change_to_can_attack_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v6->param4.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->param4.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->param4.value);
    }
    *(_DWORD *)(v3 + 48) = v6->param4.value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    field = GCGDuel::getField(duel, this->cur_controller_id_);
    RoundVarMgr = GCGField::getRoundVarMgr(field);
    *(_DWORD *)(v3 + 64) = GCGRoundVarMgr::getAIDirectUseSkillTotalNum(RoundVarMgr);
    if ( *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 64) >= *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createChangeToCanAttackCharacterPlan",
        851);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v17,
             (const char (*)[21])"cur_skill_total_num:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])off_1BC75E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      GCGField::getCharacterZone(field);
      GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 80));
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "createChangeToCanAttackCharacterPlan",
          858);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v17,
          (const char (*)[32])"cur_onstage_card_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        BT::ActionPlanMgr::getCurCharacterExistDiceSideSet((std::set<proto::GCGDiceSideType> *)(v3 + 112), this, field);
        CharacterZone = GCGField::getCharacterZone(field);
        __f.__this = this;
        __f.__cur_onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v3 + 80);
        __f.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 112);
        __f.__change_to_can_attack_plan_config_ptr = change_to_can_attack_plan_config_ptr;
        __f.__result = retstr;
        v13.__result = retstr;
        v13.__change_to_can_attack_plan_config_ptr = change_to_can_attack_plan_config_ptr;
        v13.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 112);
        v13.__cur_onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v3 + 80);
        v13.__this = this;
        std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan(std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> const&)::{lambda(GCGCard &)#1},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&v17,
          v13);
        GCGCharacterZone::foreachAliveBackStageCharater(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v17);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v17);
        std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v3 + 112));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 80));
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 863: range 000000000E126358-000000000E126736
ForeachPolicy __cdecl BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan(std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> const&)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  BT::ActionPlanMgr *this; // rax
  GCGSkillLogic *SkillLogic; // r14
  BT::ActionPlanMgr *v8; // rax
  char v9; // dl
  std::enable_shared_from_this<GCGCard> v10; // [rsp+10h] [rbp-E0h] BYREF
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::function<ForeachPolicy(GCGSkill&)> p_func; // [rsp+30h] [rbp-C0h] BYREF
  BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan::<lambda(GCGCard&)>::operator()::<lambda(GCGSkill&)> __f; // [rsp+50h] [rbp-A0h]
  char v14[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 34 cur_need_cost_change_character:870";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan(std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> const&)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !GCGUtils::isCanAttack(card) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    std::enable_shared_from_this<GCGCard>::shared_from_this(&v10);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_card_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__cur_onstage_card_ptr);
    std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, __closure->__cur_onstage_card_ptr);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v8 = __closure->__this;
    v9 = *(_BYTE *)(((unsigned __int64)&__closure->__this->cur_controller_id_ >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
      v8 = (BT::ActionPlanMgr *)__asan_report_load4(&__closure->__this->cur_controller_id_);
    *(_DWORD *)(v2 + 32) = GCGSkillLogic::getReviseOnStageChangeCostPreview(
                             SkillLogic,
                             v8->cur_controller_id_,
                             &p_card_ptr,
                             (GCGCardPtr *)&v10);
    std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v10);
    __f.__card = card;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__character_exist_dice_set);
    __f.__character_exist_dice_set = __closure->__character_exist_dice_set;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__change_to_can_attack_plan_config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__change_to_can_attack_plan_config_ptr);
    __f.__change_to_can_attack_plan_config_ptr = __closure->__change_to_can_attack_plan_config_ptr;
    __f.__cur_need_cost_change_character = (uint32_t *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__result);
    __f.__result = __closure->__result;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    __f.__this = __closure->__this;
    std::function<ForeachPolicy ()(GCGSkill &)>::function<BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan(std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> const&)::{lambda(GCGCard &)#1}::operator() const(GCGCard &)::{lambda(GCGSkill &)#1},void,void>(
      &p_func,
      __f);
    GCGCard::foreachSkill(card, &p_func);
    std::function<ForeachPolicy ()(GCGSkill &)>::~function(&p_func);
    result = FOREACH_CONTINUE;
  }
  if ( v14 == (char *)v2 )
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

// Line 871: range 000000000E1261E6-000000000E126357
ForeachPolicy __cdecl BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan(std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> const&)::{lambda(GCGCard &)#1}::operator() const(GCGCard &)::{lambda(GCGSkill &)#1}::operator()(
        const BT::ActionPlanMgr::createChangeToCanAttackCharacterPlan::<lambda(GCGCard&)>::operator()::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  BT::ActionPlanMgr *this; // rdi
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *v3; // rsi
  uint32_t *cur_need_cost_change_character; // rdx
  uint32_t v5; // r9d
  const std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false> *change_to_can_attack_plan_config_ptr; // r8
  std::set<proto::GCGDiceSideType> *character_exist_dice_set; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
  {
    this = (BT::ActionPlanMgr *)&__closure->__result;
    __asan_report_load8(&__closure->__result);
  }
  v3 = __closure->__result;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_need_cost_change_character >> 3) + 0x7FFF8000) )
  {
    this = (BT::ActionPlanMgr *)&__closure->__cur_need_cost_change_character;
    __asan_report_load8(&__closure->__cur_need_cost_change_character);
  }
  cur_need_cost_change_character = __closure->__cur_need_cost_change_character;
  if ( *(_BYTE *)(((unsigned __int64)cur_need_cost_change_character >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cur_need_cost_change_character & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_need_cost_change_character >> 3)
                                                                                     + 0x7FFF8000) )
  {
    this = (BT::ActionPlanMgr *)__closure->__cur_need_cost_change_character;
    __asan_report_load4(this);
  }
  v5 = *cur_need_cost_change_character;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__change_to_can_attack_plan_config_ptr >> 3) + 0x7FFF8000) )
  {
    this = (BT::ActionPlanMgr *)&__closure->__change_to_can_attack_plan_config_ptr;
    __asan_report_load8(&__closure->__change_to_can_attack_plan_config_ptr);
  }
  change_to_can_attack_plan_config_ptr = (const std::__shared_ptr_access<BTActionGenChangeToCanAttackCharacterConfig,(__gnu_cxx::_Lock_policy)2,false,false> *)__closure->__change_to_can_attack_plan_config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
  {
    this = (BT::ActionPlanMgr *)&__closure->__character_exist_dice_set;
    __asan_report_load8(&__closure->__character_exist_dice_set);
  }
  character_exist_dice_set = __closure->__character_exist_dice_set;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    this = (BT::ActionPlanMgr *)__closure;
    __asan_report_load8(__closure);
  }
  BT::ActionPlanMgr::genChangeToCanAttackCharacterPlan(
    this,
    __closure->__card,
    skill,
    character_exist_dice_set,
    change_to_can_attack_plan_config_ptr,
    v5,
    v3);
  return 0;
};

// Line 882: range 000000000E128B56-000000000E1290C8
std::vector<std::shared_ptr<BT::ActionPlanBase>> *__cdecl BT::ActionPlanMgr::createPlayCardPlan(
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *retstr,
        BT::ActionPlanMgr *const this,
        const std::shared_ptr<BTActionGenPlayCardPlanConfig> *play_card_plan_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGDiceZone *DiceZone; // rax
  GCGCardZone *HandZone; // r14
  BT::ActionPlanMgr::createPlayCardPlan::<lambda(GCGCard&)> v14; // [rsp-60h] [rbp-270h]
  std::map<data::ActionPlanPriorReviseType,int> *revise_map; // [rsp+28h] [rbp-1E8h]
  GCGDuel *duel; // [rsp+30h] [rbp-1E0h]
  GCGField *field; // [rsp+38h] [rbp-1D8h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+40h] [rbp-1D0h] BYREF
  BT::ActionPlanMgr::createPlayCardPlan::<lambda(GCGCard&)> __f; // [rsp+60h] [rbp-1B0h]
  char v21[336]; // [rsp+C0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 23 max_times_per_round:889 64 4 15 revise_base:890 80 4 38 revise_per_pay_character_elem_"
                        "dice:892 96 4 35 revise_per_pay_paimon_elem_dice:893 112 4 19 valid_dice_size:897 128 48 23 filt"
                        "er_card_tag_set:888 208 48 28 character_exist_dice_set:898";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::createPlayCardPlan;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(retstr);
  if ( !std::operator==<BTActionGenPlayCardPlanConfig>(play_card_plan_config_ptr, 0LL) )
  {
    v6 = std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_card_plan_config_ptr);
    std::set<data::GCGTagType>::set((std::set<data::GCGTagType> *const)(v3 + 128), &v6->param1.value);
    v7 = std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_card_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v7->param2.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->param2.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->param2.value);
    }
    *(_DWORD *)(v3 + 48) = v7->param2.value;
    v8 = std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_card_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v8->param3.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->param3.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->param3.value);
    }
    *(_DWORD *)(v3 + 64) = v8->param3.value;
    revise_map = &std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_card_plan_config_ptr)->param4.value;
    v9 = std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_card_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v9->param5.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->param5.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->param5.value);
    }
    *(_DWORD *)(v3 + 80) = v9->param5.value;
    v10 = std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_card_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v10->param6.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->param6.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<BTActionGenPlayCardPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->param6.value);
    }
    *(_DWORD *)(v3 + 96) = v10->param6.value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    field = GCGDuel::getField(duel, this->cur_controller_id_);
    DiceZone = GCGField::getDiceZone(field);
    *(_DWORD *)(v3 + 112) = GCGDiceZone::getValidDiceSize(DiceZone);
    BT::ActionPlanMgr::getCurCharacterExistDiceSideSet((std::set<proto::GCGDiceSideType> *)(v3 + 208), this, field);
    HandZone = GCGField::getHandZone(field);
    __f.__filter_card_tag_set = (const std::set<data::GCGTagType> *)(v3 + 128);
    __f.__max_times_per_round = (const uint32_t *)(v3 + 48);
    __f.__field = field;
    __f.__this = this;
    __f.__valid_dice_size = (const uint32_t *)(v3 + 112);
    __f.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 208);
    __f.__revise_per_pay_character_elem_dice = (const int32_t *)(v3 + 80);
    __f.__revise_per_pay_paimon_elem_dice = (const int32_t *)(v3 + 96);
    __f.__revise_map = revise_map;
    __f.__revise_base = (const int32_t *)(v3 + 64);
    __f.__result = retstr;
    v14.__result = retstr;
    v14.__revise_base = (const int32_t *)(v3 + 64);
    v14.__revise_map = revise_map;
    v14.__revise_per_pay_paimon_elem_dice = (const int32_t *)(v3 + 96);
    v14.__revise_per_pay_character_elem_dice = (const int32_t *)(v3 + 80);
    v14.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 208);
    v14.__valid_dice_size = (const uint32_t *)(v3 + 112);
    v14.__this = this;
    v14.__field = field;
    v14.__max_times_per_round = (const uint32_t *)(v3 + 48);
    v14.__filter_card_tag_set = (const std::set<data::GCGTagType> *)(v3 + 128);
    std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::createPlayCardPlan(std::shared_ptr<BTActionGenPlayCardPlanConfig> const&)::{lambda(GCGCard &)#1},void,void>(
      &p_func,
      v14);
    GCGCardZone::foreachCard(HandZone, &p_func);
    std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
    std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v3 + 208));
    std::set<data::GCGTagType>::~set((std::set<data::GCGTagType> *const)(v3 + 128));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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
  return retstr;
};

// Line 899: range 000000000E126C3E-000000000E128B54
ForeachPolicy __cdecl BT::ActionPlanMgr::createPlayCardPlan(std::shared_ptr<BTActionGenPlayCardPlanConfig> const&)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionPlanMgr::createPlayCardPlan::<lambda(GCGCard&)> *const __closure,
        GCGCard *play_card)
{
  ForeachPolicy v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::GCGTagType *v6; // rax
  data::GCGTagType *v7; // rdx
  const uint32_t *max_times_per_round; // rdx
  data::GCGTagType *v9; // rax
  data::GCGTagType *v10; // rdx
  uint32_t RoundPlayCardTimesWithCardTag; // esi
  uint32_t *v12; // rdx
  GCGField *field; // r15
  uint32_t CardType; // eax
  GCGCardZone *v15; // r15
  uint32_t v16; // eax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  BT::ActionPlanMgr *this; // rax
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // r15
  uint32_t Id; // eax
  common::milog::MiLogStream *v25; // r14
  uint32_t v26; // esi
  BT::ActionPlanMgr *v27; // rax
  GCGControllerValue cur_controller_id; // ecx
  BT::ActionPlanMgr *v29; // rax
  char v30; // al
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const uint32_t *valid_dice_size; // rdx
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  common::milog::MiLogStream *v41; // rax
  const uint32_t *v42; // rdx
  common::milog::MiLogStream *v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::vector<unsigned int> *v47; // rax
  common::milog::MiLogStream *v48; // r14
  BT::ActionPlanMgr *v49; // rax
  GCGSkillLogic *SkillLogic; // rdx
  common::milog::MiLogStream *v51; // r14
  BT::ActionPlanMgr *v52; // rax
  GCGSkillLogic *v53; // rax
  BT::ActionPlanMgr *v54; // rax
  common::milog::MiLogStream *v55; // r14
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  bool v59; // r15
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // r14
  std::map<data::GCGCostType,unsigned int>::mapped_type *v62; // rax
  int *v63; // rdx
  int v64; // eax
  std::vector<unsigned int>::reference v65; // rax
  _DWORD *v66; // rdx
  BT::ActionPlanMgr *v67; // rax
  uint32_t CardMgr; // eax
  common::milog::MiLogStream *v69; // rax
  int v70; // r15d
  uint32_t v71; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  common::milog::MiLogStream *v73; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rax
  std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  const std::set<proto::GCGDiceSideType> *character_exist_dice_set; // rdi
  int32_t *revise_per_pay_paimon_elem_dice; // rdx
  int32_t v86; // esi
  const int32_t *revise_per_pay_character_elem_dice; // rdx
  int32_t v88; // esi
  const int32_t *revise_base; // rdx
  int v90; // ecx
  int32_t v91; // r14d
  std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rdx
  int32_t *p_priority; // rax
  std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rax
  void (__fastcall **vptr_DescribalBase)(std::string *, std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  std::vector<std::shared_ptr<BT::ActionPlanBase>> *v96; // r14
  ForeachPolicy result; // eax
  bool has_filter_tag; // [rsp+26h] [rbp-33Ah]
  bool is_limit_cur_round; // [rsp+27h] [rbp-339h]
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+28h] [rbp-338h] BYREF
  data::GCGTagType tag_type; // [rsp+2Ch] [rbp-334h]
  data::GCGTagType tag_type_0; // [rsp+30h] [rbp-330h]
  int32_t ret; // [rsp+34h] [rbp-32Ch]
  int32_t pay_revise_priority; // [rsp+38h] [rbp-328h]
  int32_t total_revise_priority; // [rsp+3Ch] [rbp-324h]
  std::set<data::GCGTagType>::iterator __for_begin; // [rsp+40h] [rbp-320h] BYREF
  std::set<data::GCGTagType>::iterator __for_end; // [rsp+48h] [rbp-318h] BYREF
  const std::set<data::GCGTagType> *__for_range; // [rsp+50h] [rbp-310h]
  const std::set<data::GCGTagType> *cur_card_tag_set; // [rsp+58h] [rbp-308h]
  const std::set<data::GCGTagType> *__for_range_0; // [rsp+60h] [rbp-300h]
  const data::GCGCardExcelConfig *play_card_excel_config_ptr; // [rsp+68h] [rbp-2F8h]
  common::milog::MiLogStream v114; // [rsp+70h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v115; // [rsp+90h] [rbp-2D0h] BYREF
  std::string val; // [rsp+B0h] [rbp-2B0h] BYREF
  std::map<data::GCGCostType,unsigned int> p_need_cost_map; // [rsp+D0h] [rbp-290h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_dice_side_map; // [rsp+100h] [rbp-260h] BYREF
  char v119[560]; // [rsp+130h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v119;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 20 block_ai_card_id:955 64 4 17 min_need_dice:961 80 4 17 max_need_dice:962 96 4 16 cost"
                        "_energy:1006 112 4 21 target_card_guid:1015 128 16 12 zone_ptr:938 160 16 23 play_card_plan_ptr:"
                        "1029 192 16 20 target_card_ptr:1016 224 24 20 target_param_vec:974 288 32 24 target_param_vec_op"
                        "t:975 352 48 12 cost_map:992 432 48 19 choose_dice_map:993";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::createPlayCardPlan(std::shared_ptr<BTActionGenPlayCardPlanConfig> const&)::{lambda(GCGCard &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( !std::set<data::GCGTagType>::empty(__closure->__filter_card_tag_set) )
  {
    has_filter_tag = 0;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    __for_range = __closure->__filter_card_tag_set;
    __for_begin._M_node = std::set<data::GCGTagType>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<data::GCGTagType>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      tag_type = *v7;
      if ( GCGCard::isHasTag(play_card, tag_type) )
      {
        has_filter_tag = 1;
        break;
      }
      std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
    }
    if ( !has_filter_tag )
    {
      v2 = FOREACH_CONTINUE;
      goto LABEL_160;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__max_times_per_round >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__max_times_per_round);
  max_times_per_round = __closure->__max_times_per_round;
  if ( *(_BYTE *)(((unsigned __int64)max_times_per_round >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)max_times_per_round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_times_per_round >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__max_times_per_round);
  }
  if ( *max_times_per_round )
  {
    cur_card_tag_set = GCGCard::getTags(play_card);
    is_limit_cur_round = 0;
    __for_range_0 = cur_card_tag_set;
    __for_begin._M_node = std::set<data::GCGTagType>::begin(cur_card_tag_set)._M_node;
    __for_end._M_node = std::set<data::GCGTagType>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      tag_type_0 = *v10;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__field >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__field);
      RoundPlayCardTimesWithCardTag = GCGField::getRoundPlayCardTimesWithCardTag(__closure->__field, tag_type_0);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__max_times_per_round >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__max_times_per_round);
      v12 = (uint32_t *)__closure->__max_times_per_round;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__max_times_per_round);
      }
      if ( RoundPlayCardTimesWithCardTag >= *v12 )
      {
        is_limit_cur_round = 1;
        break;
      }
      std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
    }
    if ( is_limit_cur_round )
    {
      v2 = FOREACH_CONTINUE;
      goto LABEL_160;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__field >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__field);
  field = __closure->__field;
  CardType = GCGCard::getCardType(play_card);
  GCGField::getZoneByCardType((GCGField *const)(v3 + 128), (GCGCardType)field, CardType);
  if ( !std::operator!=<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v3 + 128), 0LL)
    || (v15 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
        v16 = GCGCard::getId(play_card),
        (ret = GCGCardZone::checkCanAdd(v15, v16)) == 0) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    Config = GCGGameMode::getConfig(this->game_mode_);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    Id = GCGCard::getId(play_card);
    play_card_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGCardExcelConfig(GCGGameExcelConfigMgr, Id);
    if ( !play_card_excel_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        952);
      v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[41])off_1BC766C0);
      __k = GCGCard::getId(play_card);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)&__k);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v2 = FOREACH_CONTINUE;
      goto LABEL_159;
    }
    if ( *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->block_ai_card_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)play_card_excel_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->block_ai_card_id >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&play_card_excel_config_ptr->block_ai_card_id);
    }
    *(_DWORD *)(v3 + 48) = play_card_excel_config_ptr->block_ai_card_id;
    if ( !*(_DWORD *)(v3 + 48) )
      goto LABEL_60;
    v26 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v27 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v27->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v27->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v27 = (BT::ActionPlanMgr *)__asan_report_load4(&v27->cur_controller_id_);
    }
    cur_controller_id = v27->cur_controller_id_;
    v29 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    if ( GCGUtils::checkPlayCardIntentionNeedBlock(v29->game_mode_, cur_controller_id, v26) )
      v30 = 1;
    else
LABEL_60:
      v30 = 0;
    if ( v30 )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        958);
      v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v115, (const char (*)[11])"play_card:");
      GCGCard::getDesc[abi:cxx11](&val, play_card);
      v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &val);
      v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v32,
              (const char (*)[20])", block_ai_card_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])" block plan gen");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v115);
      v2 = FOREACH_CONTINUE;
      goto LABEL_159;
    }
    if ( *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->pay_card_ai_min_dice_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)play_card_excel_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->pay_card_ai_min_dice_num >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&play_card_excel_config_ptr->pay_card_ai_min_dice_num);
    }
    *(_DWORD *)(v3 + 64) = play_card_excel_config_ptr->pay_card_ai_min_dice_num;
    if ( *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&play_card_excel_config_ptr->pay_card_ai_max_dice_num);
    }
    *(_DWORD *)(v3 + 80) = play_card_excel_config_ptr->pay_card_ai_max_dice_num;
    if ( *(_DWORD *)(v3 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__valid_dice_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__valid_dice_size);
      valid_dice_size = __closure->__valid_dice_size;
      if ( *(_BYTE *)(((unsigned __int64)valid_dice_size >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)valid_dice_size & 7) + 3) >= *(_BYTE *)(((unsigned __int64)valid_dice_size >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__valid_dice_size);
      }
      if ( *valid_dice_size < *(_DWORD *)(v3 + 64) )
      {
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          965);
        v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v115, (const char (*)[11])"play_card:");
        GCGCard::getDesc[abi:cxx11](&val, play_card);
        v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &val);
        v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v37,
                (const char (*)[17])", min_need_dice:");
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v3 + 64));
        v40 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])", cur:");
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__valid_dice_size >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__valid_dice_size);
LABEL_75:
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, __closure->__valid_dice_size);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v41, (const char (*)[16])" block plan gen");
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v115);
        v2 = FOREACH_CONTINUE;
        goto LABEL_159;
      }
    }
    if ( *(_DWORD *)(v3 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__valid_dice_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__valid_dice_size);
      v42 = __closure->__valid_dice_size;
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__valid_dice_size);
      }
      if ( *v42 > *(_DWORD *)(v3 + 80) )
      {
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          970);
        v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v115, (const char (*)[11])"play_card:");
        GCGCard::getDesc[abi:cxx11](&val, play_card);
        v44 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, &val);
        v45 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v44,
                (const char (*)[17])", max_need_dice:");
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v45,
                (const unsigned int *)(v3 + 80));
        v40 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v46, (const char (*)[7])", cur:");
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__valid_dice_size >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__valid_dice_size);
        goto LABEL_75;
      }
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    BT::ActionPlanMgr::getPlayCardTarget(
      (std::optional<std::vector<unsigned int> > *)(v3 + 288),
      __closure->__this,
      play_card);
    if ( !std::optional<std::vector<unsigned int>>::has_value((const std::optional<std::vector<unsigned int> > *const)(v3 + 288)) )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        982);
      v48 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v115,
              (const char (*)[46])"getPlayCardTarget no valid target, play_card:");
      GCGCard::getDesc[abi:cxx11](&val, play_card);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v115);
      v2 = FOREACH_CONTINUE;
LABEL_158:
      std::optional<std::vector<unsigned int>>::~optional((std::optional<std::vector<unsigned int> > *const)(v3 + 288));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
      goto LABEL_159;
    }
    v47 = std::optional<std::vector<unsigned int>>::value((std::optional<std::vector<unsigned int> > *const)(v3 + 288));
    std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 224), v47);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v49 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    SkillLogic = GCGGameMode::getSkillLogic(v49->game_mode_);
    if ( !GCGSkillLogic::checkCardOnUseContion(SkillLogic, play_card) )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        988);
      v51 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v115,
              (const char (*)[33])"check condition fail, play_card:");
      GCGCard::getDesc[abi:cxx11](&val, play_card);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v115);
      v2 = FOREACH_CONTINUE;
      goto LABEL_158;
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v52 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    v53 = GCGGameMode::getSkillLogic(v52->game_mode_);
    GCGSkillLogic::getRevisePlayCardCostPreview(
      (std::map<data::GCGCostType,unsigned int> *)(v3 + 352),
      v53,
      play_card,
      (const std::vector<unsigned int> *)(v3 + 224));
    std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 432));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v54 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__character_exist_dice_set);
    if ( BT::ActionPlanMgr::payPlan(
           v54,
           __closure->__character_exist_dice_set,
           (const std::map<data::GCGCostType,unsigned int> *)(v3 + 352),
           (std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 432)) )
    {
      common::milog::MiLogStream::create(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        996);
      v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v115, (const char (*)[11])"play_card:");
      GCGCard::getDesc[abi:cxx11](&val, play_card);
      v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &val);
      v57 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v56,
              (const char (*)[20])", target_param_vec:");
      v58 = common::milog::MiLogStream::operator<<<unsigned int>(v57, (const std::vector<unsigned int> *)(v3 + 224));
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v58, (const char (*)[16])" cost not valid");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v115);
      v2 = FOREACH_CONTINUE;
    }
    else
    {
      std::map<proto::GCGDiceSideType,unsigned int>::map(
        &p_dice_side_map,
        (const std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 432));
      std::map<data::GCGCostType,unsigned int>::map(
        &p_need_cost_map,
        (const std::map<data::GCGCostType,unsigned int> *)(v3 + 352));
      v59 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map);
      std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map);
      std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map);
      if ( !v59 )
      {
        *(_DWORD *)(v3 + 112) = 1;
        if ( std::map<data::GCGCostType,unsigned int>::count(
               (const std::map<data::GCGCostType,unsigned int> *const)(v3 + 352),
               (const std::map<data::GCGCostType,unsigned int>::key_type *)(v3 + 112)) )
        {
          __k = GCG_COST_ENERGY;
          v62 = std::map<data::GCGCostType,unsigned int>::operator[](
                  (std::map<data::GCGCostType,unsigned int> *const)(v3 + 352),
                  &__k);
          v63 = (int *)v62;
          if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v62);
          }
          v64 = *v63;
        }
        else
        {
          v64 = 0;
        }
        *(_DWORD *)(v3 + 96) = v64;
        if ( *(_DWORD *)(v3 + 96) )
        {
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 224)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_ai/logic/action_plan_mgr.cpp",
              "operator()",
              1012);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[30])"target_param_vec is not valid");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v2 = FOREACH_CONTINUE;
            goto LABEL_157;
          }
          v65 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 224), 0LL);
          v66 = v65;
          if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v65);
          }
          *(_DWORD *)(v3 + 112) = *v66;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__this);
          v67 = __closure->__this;
          if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure->__this);
          CardMgr = (unsigned int)GCGGameMode::getCardMgr(v67->game_mode_);
          GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 192), CardMgr);
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_ai/logic/action_plan_mgr.cpp",
              "operator()",
              1019);
            v69 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[51])"target_param_vec not valid, find card fail. guid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v69,
              (const unsigned int *)(v3 + 112));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v2 = FOREACH_CONTINUE;
            v70 = 0;
          }
          else
          {
            v71 = *(_DWORD *)(v3 + 96);
            v72 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            if ( !GCGUtils::isEnergyCostValid(v72, v71) )
            {
              common::milog::MiLogStream::create(
                &v115,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_ai/logic/action_plan_mgr.cpp",
                "operator()",
                1024);
              v73 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v115,
                      (const char (*)[33])"energy not enough. target card: ");
              v74 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              GCGCard::getDesc[abi:cxx11](&val, v74);
              v75 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v73, &val);
              v76 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v75,
                      (const char (*)[14])" now energy: ");
              v77 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              __k = GCGCard::getToken(v77, GCG_TOKEN_ENERGY);
              v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v76,
                      (const unsigned int *)&__k);
              v79 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v78, (const char (*)[8])" need: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v79,
                (const unsigned int *)(v3 + 96));
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v115);
              v2 = FOREACH_CONTINUE;
              v70 = 0;
            }
            else
            {
              v70 = 1;
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
          if ( v70 != 1 )
            goto LABEL_157;
        }
        common::tools::perf::make_shared<BT::ActionPlanPlayCard>();
        Guid = GCGCard::getGuid(play_card);
        v81 = std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v81->play_card_guid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v81->play_card_guid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          v81 = (std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v81->play_card_guid_);
        }
        v81->play_card_guid_ = Guid;
        v82 = std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        std::vector<unsigned int>::operator=(&v82->target_param_vec_, (const std::vector<unsigned int> *)(v3 + 224));
        v83 = std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        std::map<proto::GCGDiceSideType,unsigned int>::operator=(
          &v83->choose_dice_map_,
          (const std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 432));
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__character_exist_dice_set);
        character_exist_dice_set = __closure->__character_exist_dice_set;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_per_pay_paimon_elem_dice >> 3) + 0x7FFF8000) )
        {
          character_exist_dice_set = (const std::set<proto::GCGDiceSideType> *)&__closure->__revise_per_pay_paimon_elem_dice;
          __asan_report_load8(&__closure->__revise_per_pay_paimon_elem_dice);
        }
        revise_per_pay_paimon_elem_dice = (int32_t *)__closure->__revise_per_pay_paimon_elem_dice;
        if ( *(_BYTE *)(((unsigned __int64)revise_per_pay_paimon_elem_dice >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)revise_per_pay_paimon_elem_dice & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_per_pay_paimon_elem_dice >> 3)
                                                                                            + 0x7FFF8000) )
        {
          character_exist_dice_set = (const std::set<proto::GCGDiceSideType> *)__closure->__revise_per_pay_paimon_elem_dice;
          __asan_report_load4(character_exist_dice_set);
        }
        v86 = *revise_per_pay_paimon_elem_dice;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_per_pay_character_elem_dice >> 3) + 0x7FFF8000) )
        {
          character_exist_dice_set = (const std::set<proto::GCGDiceSideType> *)&__closure->__revise_per_pay_character_elem_dice;
          __asan_report_load8(&__closure->__revise_per_pay_character_elem_dice);
        }
        revise_per_pay_character_elem_dice = __closure->__revise_per_pay_character_elem_dice;
        if ( *(_BYTE *)(((unsigned __int64)revise_per_pay_character_elem_dice >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)revise_per_pay_character_elem_dice & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_per_pay_character_elem_dice >> 3)
                                                                                               + 0x7FFF8000) )
        {
          character_exist_dice_set = (const std::set<proto::GCGDiceSideType> *)__closure->__revise_per_pay_character_elem_dice;
          __asan_report_load4(character_exist_dice_set);
        }
        pay_revise_priority = BT::ActionPlanMgr::calculatePayPriority(
                                *revise_per_pay_character_elem_dice,
                                v86,
                                character_exist_dice_set,
                                (const std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 432));
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__revise_map);
        v88 = BT::ActionPlanMgr::calculatePriority(
                __closure->__revise_map,
                (const std::map<data::GCGCostType,unsigned int> *)(v3 + 352));
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_base >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__revise_base);
        revise_base = __closure->__revise_base;
        if ( *(_BYTE *)(((unsigned __int64)revise_base >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)revise_base & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_base >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__closure->__revise_base);
        }
        v90 = v88 + *revise_base;
        if ( *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->revise_priority >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&play_card_excel_config_ptr->revise_priority >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&play_card_excel_config_ptr->revise_priority);
        }
        total_revise_priority = v90 + play_card_excel_config_ptr->revise_priority + pay_revise_priority;
        v91 = total_revise_priority;
        v92 = std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        p_priority = &v92->priority_;
        if ( *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_priority & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_priority);
        }
        v92->priority_ = v91;
        common::milog::MiLogStream::create(
          &v115,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          1036);
        v94 = std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v94);
        vptr_DescribalBase = (void (__fastcall **)(std::string *, std::__shared_ptr_access<BT::ActionPlanPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v94->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v94->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
          __asan_report_load8(v94->_vptr_DescribalBase);
        (*vptr_DescribalBase)(&val, v94);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v115, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v115);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__result);
        v96 = __closure->__result;
        std::shared_ptr<BT::ActionPlanBase>::shared_ptr<BT::ActionPlanPlayCard,void>(
          (std::shared_ptr<BT::ActionPlanBase> *const)(v3 + 192),
          (const std::shared_ptr<BT::ActionPlanPlayCard> *)(v3 + 160));
        std::vector<std::shared_ptr<BT::ActionPlanBase>>::push_back(
          v96,
          (std::vector<std::shared_ptr<BT::ActionPlanBase>>::value_type *)(v3 + 192));
        std::shared_ptr<BT::ActionPlanBase>::~shared_ptr((std::shared_ptr<BT::ActionPlanBase> *const)(v3 + 192));
        v2 = FOREACH_CONTINUE;
        std::shared_ptr<BT::ActionPlanPlayCard>::~shared_ptr((std::shared_ptr<BT::ActionPlanPlayCard> *const)(v3 + 160));
        goto LABEL_157;
      }
      common::milog::MiLogStream::create(
        &v114,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "operator()",
        1002);
      v60 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v114,
              (const char (*)[32])"dice cost not valid, play_card:");
      GCGCard::getDesc[abi:cxx11]((std::string *)&v115, play_card);
      v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, (const std::string *)&v115);
      GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
        &val,
        (const std::map<data::GCGCostType,unsigned int> *)(v3 + 352),
        (const std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 432));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, &val);
      std::string::~string(&val);
      std::string::~string(&v115);
      common::milog::MiLogStream::~MiLogStream(&v114);
      v2 = FOREACH_CONTINUE;
    }
LABEL_157:
    std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 432));
    std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v3 + 352));
    goto LABEL_158;
  }
  common::milog::MiLogStream::create(
    &v115,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/logic/action_plan_mgr.cpp",
    "operator()",
    944);
  v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v115,
          (const char (*)[27])"checkCanAdd failed, zone: ");
  v18 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  GCGCardZone::getDesc[abi:cxx11](&val, v18);
  v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
  v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" ,card_id: ");
  __k = GCGCard::getId(play_card);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)&__k);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v115);
  v2 = FOREACH_CONTINUE;
LABEL_159:
  std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v3 + 128));
LABEL_160:
  result = v2;
  if ( v119 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1045: range 000000000E1290CA-000000000E129A33
std::optional<std::vector<unsigned int> > *__cdecl BT::ActionPlanMgr::getPlayCardTarget(
        std::optional<std::vector<unsigned int> > *retstr,
        const BT::ActionPlanMgr *const this,
        const GCGCard *card)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGField *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  std::vector<data::GCGChooseExcelConfig>::size_type v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  GCGControllerValue target_controller_id; // [rsp+24h] [rbp-14Ch]
  std::vector<data::GCGChooseExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<data::GCGChooseExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  const std::vector<data::GCGChooseExcelConfig> *target_choose_config_vec; // [rsp+38h] [rbp-138h]
  GCGDuel *duel; // [rsp+40h] [rbp-130h]
  const std::vector<data::GCGChooseExcelConfig> *__for_range; // [rsp+48h] [rbp-128h]
  const data::GCGChooseExcelConfig *choose_config; // [rsp+50h] [rbp-120h]
  GCGField *field; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-110h] BYREF
  char v24[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 23 choose_target_guid:1070 48 24 11 result:1047 112 48 27 choose_target_guid_set:1050";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::getPlayCardTarget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  *(_OWORD *)retstr->_M_payload._M_payload._M_empty.gap0 = 0uLL;
  retstr->_M_payload._M_payload._M_value._M_impl._M_end_of_storage = 0LL;
  *(_QWORD *)&retstr->_M_payload._M_engaged = 0LL;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
  target_choose_config_vec = GCGCard::getChooseConfig(card);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  duel = GCGGameMode::getDuel(this->game_mode_);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
  __for_range = target_choose_config_vec;
  __for_begin._M_current = std::vector<data::GCGChooseExcelConfig>::begin(target_choose_config_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGChooseExcelConfig>::end(target_choose_config_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGChooseExcelConfig const*,std::vector<data::GCGChooseExcelConfig>>(
            &__for_begin,
            &__for_end) )
  {
    choose_config = __gnu_cxx::__normal_iterator<data::GCGChooseExcelConfig const*,std::vector<data::GCGChooseExcelConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&choose_config->target_camp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&choose_config->target_camp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&choose_config->target_camp);
    }
    if ( choose_config->target_camp == FRIENDLY )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_controller_id_);
      }
      v6 = GCGDuel::getField(duel, this->cur_controller_id_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&choose_config->target_camp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&choose_config->target_camp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&choose_config->target_camp);
      }
      if ( choose_config->target_camp != ENEMY )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "getPlayCardTarget",
          1064);
        v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v23,
               (const char (*)[43])"getPlayCardTarget not support target_camp:");
        if ( *(_BYTE *)(((unsigned __int64)&choose_config->target_camp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&choose_config->target_camp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&choose_config->target_camp);
        }
        *(_DWORD *)(v3 + 32) = choose_config->target_camp;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v23);
        goto LABEL_40;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_controller_id_);
      }
      target_controller_id = GCGDuel::getOtherControllerId(duel, this->cur_controller_id_);
      v6 = GCGDuel::getField(duel, target_controller_id);
    }
    field = v6;
    if ( *(_BYTE *)(((unsigned __int64)&choose_config->card_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)choose_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&choose_config->card_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&choose_config->card_type);
    }
    if ( choose_config->card_type == GCG_CARD_CHARACTER )
    {
      *(_DWORD *)(v3 + 32) = BT::ActionPlanMgr::getPlayCardCharacterTarget(
                               this,
                               choose_config,
                               field,
                               card,
                               (const std::set<unsigned int> *)(v3 + 112));
      if ( !*(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "getPlayCardTarget",
          1073);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          &v23,
          (const char (*)[54])"getPlayCardCharacterTarget choose_target_guid is zero");
        common::milog::MiLogStream::~MiLogStream(&v23);
        goto LABEL_40;
      }
LABEL_30:
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v3 + 48),
        (const std::vector<unsigned int>::value_type *)(v3 + 32));
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 112),
        (const std::set<unsigned int>::value_type *)(v3 + 32));
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)&choose_config->card_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)choose_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&choose_config->card_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&choose_config->card_type);
    }
    if ( choose_config->card_type == GCG_CARD_SUMMON )
    {
      *(_DWORD *)(v3 + 32) = BT::ActionPlanMgr::getPlayCardSummonTarget(
                               this,
                               choose_config,
                               field,
                               card,
                               (const std::set<unsigned int> *)(v3 + 112));
      if ( *(_DWORD *)(v3 + 32) )
        goto LABEL_30;
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "getPlayCardTarget",
        1084);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v23,
        (const char (*)[51])"getPlayCardSummonTarget choose_target_guid is zero");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "getPlayCardTarget",
        1092);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v23,
             (const char (*)[48])"getPlayCardTarget not support choose card type:");
      if ( *(_BYTE *)(((unsigned __int64)&choose_config->card_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)choose_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&choose_config->card_type >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&choose_config->card_type);
      }
      *(_DWORD *)(v3 + 32) = choose_config->card_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
LABEL_40:
    __gnu_cxx::__normal_iterator<data::GCGChooseExcelConfig const*,std::vector<data::GCGChooseExcelConfig>>::operator++(&__for_begin);
  }
  v9 = std::vector<data::GCGChooseExcelConfig>::size(target_choose_config_vec);
  if ( v9 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 48)) )
  {
    std::optional<std::vector<unsigned int>>::operator=<std::vector<unsigned int>&>(
      retstr,
      (std::vector<unsigned int> *)(v3 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "getPlayCardTarget",
      1103);
    v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v23,
            (const char (*)[31])"target_choose_config_vec size:");
    __for_end._M_current = (const data::GCGChooseExcelConfig *)std::vector<data::GCGChooseExcelConfig>::size(target_choose_config_vec);
    v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v10,
            (const unsigned __int64 *)&__for_end);
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])", result:");
    common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1110: range 000000000E129A34-000000000E129F3A
bool __cdecl BT::ActionPlanMgr::checkMeetFilter(
        const BT::ActionPlanMgr *const this,
        const data::GCGChooseExcelConfig *choose_target_config,
        const GCGCard *card)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  data::GCGTagType *v5; // rax
  GCGTagType *v6; // rdx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-80h] BYREF
  GCGTagType tag_type; // [rsp+24h] [rbp-7Ch]
  std::vector<data::GCGTagType>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<data::GCGTagType>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<data::GCGTagType> *__for_range; // [rsp+38h] [rbp-68h]
  const std::vector<data::GCGChooseTargetCond> *__for_range_0; // [rsp+40h] [rbp-60h]
  const data::GCGChooseTargetCond *cond; // [rsp+48h] [rbp-58h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-50h] BYREF
  std::string val; // [rsp+70h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/logic/action_plan_mgr.cpp",
    "checkMeetFilter",
    1111);
  v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"card:");
  GCGCard::getDesc[abi:cxx11](&val, card);
  v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v4, (const char (*)[14])" check filter");
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v23);
  __for_range = &choose_target_config->tag_list;
  __for_begin._M_current = std::vector<data::GCGTagType>::begin(&choose_target_config->tag_list)._M_current;
  __for_end._M_current = std::vector<data::GCGTagType>::end(&choose_target_config->tag_list)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGTagType const*,std::vector<data::GCGTagType>>(&__for_begin, &__for_end) )
  {
    v5 = (data::GCGTagType *)__gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    tag_type = *v6;
    if ( tag_type && !GCGCard::isHasTag(card, tag_type) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "checkMeetFilter",
        1121);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"card:");
      GCGCard::getDesc[abi:cxx11](&val, card);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" not has tag:");
      v16 = tag_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v16);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      return 0;
    }
    __gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::operator++(&__for_begin);
  }
  if ( !(_BYTE)`guard variable for'BT::ActionPlanMgr::checkMeetFilter(data::GCGChooseExcelConfig const&,GCGCard const&)::target_guid_vec
    && __cxa_guard_acquire(&`guard variable for'BT::ActionPlanMgr::checkMeetFilter(data::GCGChooseExcelConfig const&,GCGCard const&)::target_guid_vec) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&BT::ActionPlanMgr::checkMeetFilter(data::GCGChooseExcelConfig const&,GCGCard const&)const::target_guid_vec);
    __cxa_guard_release(&`guard variable for'BT::ActionPlanMgr::checkMeetFilter(data::GCGChooseExcelConfig const&,GCGCard const&)::target_guid_vec);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      (void *)&BT::ActionPlanMgr::checkMeetFilter(data::GCGChooseExcelConfig const&,GCGCard const&)const::target_guid_vec,
      &_dso_handle);
  }
  __for_range_0 = &choose_target_config->cond_list;
  __for_begin._M_current = (const data::GCGTagType *)std::vector<data::GCGChooseTargetCond>::begin(&choose_target_config->cond_list)._M_current;
  __for_end._M_current = (const data::GCGTagType *)std::vector<data::GCGChooseTargetCond>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>(
            (const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)&__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)&__for_begin);
    if ( !GCGUtils::isTargetCardCondValid(
            &BT::ActionPlanMgr::checkMeetFilter(data::GCGChooseExcelConfig const&,GCGCard const&)const::target_guid_vec,
            card,
            cond) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "checkMeetFilter",
        1132);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"card:");
      GCGCard::getDesc[abi:cxx11](&val, card);
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" cond not valid");
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      return 0;
    }
    __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/logic/action_plan_mgr.cpp",
    "checkMeetFilter",
    1136);
  v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"card:");
  GCGCard::getDesc[abi:cxx11](&val, card);
  v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
  common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" meet filter");
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v23);
  return 1;
};

// Line 1141: range 000000000E12A20E-000000000E12A518
bool __cdecl BT::ActionPlanMgr::checkTargetCharacterModifyValid(
        const BT::ActionPlanMgr *const this,
        const GCGCard *character_card,
        const GCGCard *play_card)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // r14
  uint32_t Id; // eax
  common::milog::MiLogStream *v9; // r14
  bool result; // al
  const GCGModifyZone *ModifyZone; // r14
  BT::ActionPlanMgr::checkTargetCharacterModifyValid::<lambda(const GCGCard&)> v12; // [rsp-20h] [rbp-120h]
  const data::GCGCardExcelConfig *gcg_card_excel_config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 27 is_cur_character_valid:1154 64 4 33 modify_card_exclude_card_tag:1149";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::checkTargetCharacterModifyValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Config = GCGGameMode::getConfig(this->game_mode_);
  GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  Id = GCGCard::getId(play_card);
  gcg_card_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGCardExcelConfig(GCGGameExcelConfigMgr, Id);
  if ( gcg_card_excel_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gcg_card_excel_config_ptr->ai_target_exclude_card_tag >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gcg_card_excel_config_ptr->ai_target_exclude_card_tag >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gcg_card_excel_config_ptr->ai_target_exclude_card_tag);
    }
    *(_DWORD *)(v3 + 64) = gcg_card_excel_config_ptr->ai_target_exclude_card_tag;
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_BYTE *)(v3 + 48) = 1;
      ModifyZone = GCGCard::getModifyZone(character_card);
      v12.__character_card = character_card;
      v12.__is_cur_character_valid = (bool *)(v3 + 48);
      v12.__modify_card_exclude_card_tag = (GCGTagType *)(v3 + 64);
      std::function<ForeachPolicy ()(GCGCard const&)>::function<BT::ActionPlanMgr::checkTargetCharacterModifyValid(GCGCard const&,GCGCard const&)::{lambda(GCGCard const&)#1},void,void>(
        (std::function<ForeachPolicy(const GCGCard&)> *const)&v15,
        v12);
      GCGCardZone::foreachCard(ModifyZone, (std::function<ForeachPolicy(const GCGCard&)> *)&v15);
      std::function<ForeachPolicy ()(GCGCard const&)>::~function((std::function<ForeachPolicy(const GCGCard&)> *const)&v15);
      result = *(_BYTE *)(v3 + 48);
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "checkTargetCharacterModifyValid",
      1146);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v15,
           (const char (*)[38])"card config not find, player card id:");
    *(_DWORD *)(v3 + 64) = GCGCard::getId(play_card);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0;
  }
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

// Line 1155: range 000000000E129F3C-000000000E12A20D
ForeachPolicy __cdecl BT::ActionPlanMgr::checkTargetCharacterModifyValid(GCGCard const&,GCGCard const&)const::{lambda(GCGCard const&)#1}::operator()(
        const BT::ActionPlanMgr::checkTargetCharacterModifyValid::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *modify_card)
{
  GCGTagType *modify_card_exclude_card_tag; // rdx
  bool *is_cur_character_valid; // rdx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdi
  unsigned int *v9; // rdx
  unsigned int v12; // [rsp+1Ch] [rbp-74h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-70h] BYREF
  std::string val; // [rsp+40h] [rbp-50h] BYREF
  std::string v15; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  modify_card_exclude_card_tag = __closure->__modify_card_exclude_card_tag;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__modify_card_exclude_card_tag >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__modify_card_exclude_card_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__modify_card_exclude_card_tag >> 3)
                                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__modify_card_exclude_card_tag);
  }
  if ( !GCGCard::isHasTag(modify_card, *modify_card_exclude_card_tag) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_cur_character_valid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_cur_character_valid);
  is_cur_character_valid = __closure->__is_cur_character_valid;
  if ( *(_BYTE *)(((unsigned __int64)is_cur_character_valid >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_cur_character_valid & 7) >= *(_BYTE *)(((unsigned __int64)is_cur_character_valid >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_cur_character_valid);
  }
  *is_cur_character_valid = 0;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/logic/action_plan_mgr.cpp",
    "operator()",
    1160);
  v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v13, (const char (*)[6])"card:");
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_card >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__character_card);
  GCGCard::getDesc[abi:cxx11](&val, __closure->__character_card);
  v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])", modify card:");
  GCGCard::getDesc[abi:cxx11](&v15, modify_card);
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &v15);
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" has tag :");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    v8 = (common::milog::MiLogStream *)__closure;
    __asan_report_load8(__closure);
  }
  v9 = (unsigned int *)__closure->__modify_card_exclude_card_tag;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__modify_card_exclude_card_tag >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__modify_card_exclude_card_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__modify_card_exclude_card_tag >> 3)
                                                                                        + 0x7FFF8000) )
  {
    v8 = (common::milog::MiLogStream *)__closure->__modify_card_exclude_card_tag;
    __asan_report_load4(__closure->__modify_card_exclude_card_tag);
  }
  v12 = *v9;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v12);
  std::string::~string(&v15);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v13);
  return 1;
};

// Line 1169: range 000000000E12A9D8-000000000E12AEF4
uint32_t __cdecl BT::ActionPlanMgr::getPlayCardCharacterTarget(
        const BT::ActionPlanMgr *const this,
        const data::GCGChooseExcelConfig *choose_target_config,
        GCGField *field,
        const GCGCard *play_card,
        const std::set<unsigned int> *choose_target_guid_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  GCGCharacterZone *CharacterZone; // rax
  GCGCharacterZone *v9; // rax
  size_t Size; // rax
  GCGCharacterZone *v11; // r14
  uint32_t v12; // r14d
  BT::CharacterCardSortInfo *M_current; // r14
  std::vector<BT::CharacterCardSortInfo>::iterator v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::vector<BT::CharacterCardSortInfo>::reference v16; // rdx
  uint32_t *p_card_guid; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t result; // eax
  BT::ActionPlanMgr::getPlayCardCharacterTarget::<lambda(GCGCard&)> v22; // [rsp-30h] [rbp-190h]
  unsigned int Id; // [rsp+34h] [rbp-12Ch] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-128h] BYREF
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+40h] [rbp-120h] BYREF
  BT::ActionPlanMgr::getPlayCardCharacterTarget::<lambda(GCGCard&)> __f; // [rsp+60h] [rbp-100h]
  char v30[208]; // [rsp+90h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 16 stage_order:1170 48 4 23 choose_target_guid:1216 64 16 13 comparer:1209 96 24 30 alter"
                        "native_card_info_vec:1171";
  *(_QWORD *)(v5 + 16) = BT::ActionPlanMgr::getPlayCardCharacterTarget;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -219021312;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  CharacterZone = GCGField::getCharacterZone(field);
  *(_DWORD *)(v5 + 32) = GCGCardZone::getSize(CharacterZone);
  std::vector<BT::CharacterCardSortInfo>::vector((std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96));
  v9 = GCGField::getCharacterZone(field);
  Size = GCGCardZone::getSize(v9);
  std::vector<BT::CharacterCardSortInfo>::reserve((std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96), Size);
  v11 = GCGField::getCharacterZone(field);
  __f.__alternative_card_info_vec = (std::vector<BT::CharacterCardSortInfo> *)(v5 + 96);
  __f.__stage_order = (uint32_t *)(v5 + 32);
  __f.__choose_target_guid_set = choose_target_guid_set;
  __f.__choose_target_config = choose_target_config;
  __f.__play_card = play_card;
  __f.__this = this;
  v22.__this = this;
  v22.__play_card = play_card;
  v22.__choose_target_config = choose_target_config;
  v22.__choose_target_guid_set = choose_target_guid_set;
  v22.__stage_order = (uint32_t *)(v5 + 32);
  v22.__alternative_card_info_vec = (std::vector<BT::CharacterCardSortInfo> *)(v5 + 96);
  std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::getPlayCardCharacterTarget(data::GCGChooseExcelConfig const&,GCGField &,GCGCard const&,std::set<unsigned int> const&)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    v22);
  GCGCharacterZone::foreachAliveCharacter(v11, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  if ( std::vector<BT::CharacterCardSortInfo>::empty((const std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "getPlayCardCharacterTarget",
      1206);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)&p_func,
      (const char (*)[35])"alternative_card_info_vec is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v12 = 0;
  }
  else
  {
    BT::CharacterCardInfoComparer::CharacterCardInfoComparer(
      (BT::CharacterCardInfoComparer *const)(v5 + 64),
      choose_target_config,
      field);
    M_current = std::vector<BT::CharacterCardSortInfo>::end((std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96))._M_current;
    v14._M_current = std::vector<BT::CharacterCardSortInfo>::begin((std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96))._M_current;
    std::sort<__gnu_cxx::__normal_iterator<BT::CharacterCardSortInfo *,std::vector<BT::CharacterCardSortInfo>>,BT::CharacterCardInfoComparer>(
      v14,
      (__gnu_cxx::__normal_iterator<BT::CharacterCardSortInfo*,std::vector<BT::CharacterCardSortInfo> >)M_current,
      *(BT::CharacterCardInfoComparer *)(v5 + 64));
    if ( std::vector<BT::CharacterCardSortInfo>::size((const std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96)) )
    {
      v16 = std::vector<BT::CharacterCardSortInfo>::operator[](
              (std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96),
              0LL);
      p_card_guid = &v16->card_guid;
      if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_card_guid);
      }
      *(_DWORD *)(v5 + 48) = v16->card_guid;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "getPlayCardCharacterTarget",
        1217);
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[11])"play card:");
      Id = GCGCard::getId(play_card);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Id);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", target :");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v12 = *(_DWORD *)(v5 + 48);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "getPlayCardCharacterTarget",
        1213);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[48])"alternative_card_info_vec size not valid, size:");
      val = std::vector<BT::CharacterCardSortInfo>::size((const std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v12 = 0;
    }
  }
  std::vector<BT::CharacterCardSortInfo>::~vector((std::vector<BT::CharacterCardSortInfo> *const)(v5 + 96));
  result = v12;
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1173: range 000000000E12A51A-000000000E12A9D7
ForeachPolicy __cdecl BT::ActionPlanMgr::getPlayCardCharacterTarget(data::GCGChooseExcelConfig const&,GCGField &,GCGCard const&,std::set<unsigned int> const&)const::{lambda(GCGCard&)#1}::operator()(
        const BT::ActionPlanMgr::getPlayCardCharacterTarget::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::set<unsigned int> *choose_target_guid_set; // r14
  ForeachPolicy result; // eax
  const BT::ActionPlanMgr *this; // rax
  const BT::ActionPlanMgr *v8; // rax
  uint32_t *stage_order; // rdx
  common::milog::MiLogStream *v10; // r14
  unsigned __int64 v11; // rax
  uint32_t v12; // edx
  std::set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-C4h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self v14; // [rsp+20h] [rbp-C0h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v18[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 14 card_info:1189";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::getPlayCardCharacterTarget(data::GCGChooseExcelConfig const&,GCGField &,GCGCard const&,std::set<unsigned int> const&)const::{lambda(GCGCard&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_target_guid_set >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__choose_target_guid_set);
  __y._M_node = std::set<unsigned int>::end(__closure->__choose_target_guid_set)._M_node;
  choose_target_guid_set = __closure->__choose_target_guid_set;
  __x = GCGCard::getGuid(card);
  v14._M_node = std::set<unsigned int>::find(choose_target_guid_set, &__x)._M_node;
  if ( std::operator!=(&v14, &__y) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_target_config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__choose_target_config);
    if ( !BT::ActionPlanMgr::checkMeetFilter(this, __closure->__choose_target_config, card) )
    {
      result = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this);
      v8 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__play_card >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__play_card);
      if ( !BT::ActionPlanMgr::checkTargetCharacterModifyValid(v8, card, __closure->__play_card) )
      {
        result = FOREACH_CONTINUE;
      }
      else
      {
        *(_DWORD *)(v2 + 32) = 0;
        *(_DWORD *)(v2 + 36) = 0;
        *(_DWORD *)(v2 + 40) = 0;
        *(_DWORD *)(v2 + 32) = GCGCard::getToken(card, GCG_TOKEN_HP);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_order >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__stage_order);
        stage_order = __closure->__stage_order;
        if ( *(_BYTE *)(((unsigned __int64)stage_order >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_order & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_order >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__closure->__stage_order);
        }
        if ( *stage_order )
        {
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_order >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__stage_order);
          v11 = (unsigned __int64)__closure->__stage_order;
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load4(__closure->__stage_order);
          v12 = (*(_DWORD *)v11)--;
          *(_DWORD *)(v2 + 36) = v12;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1193);
          v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v16,
                  (const char (*)[32])"stage_order is not valid, card:");
          GCGCard::getDesc[abi:cxx11](&val, card);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v16);
          *(_DWORD *)(v2 + 36) = 0;
        }
        *(_DWORD *)(v2 + 40) = GCGCard::getGuid(card);
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        std::vector<BT::CharacterCardSortInfo>::push_back(
          __closure->__alternative_card_info_vec,
          (const std::vector<BT::CharacterCardSortInfo>::value_type *)(v2 + 32));
        result = FOREACH_CONTINUE;
      }
    }
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

// Line 1223: range 000000000E12AEF6-000000000E12B940
bool __cdecl BT::CharacterCardInfoComparer::operator()(
        BT::CharacterCardInfoComparer *const this,
        const BT::CharacterCardSortInfo *left,
        const BT::CharacterCardSortInfo *right)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t stage_order; // ecx
  uint32_t v7; // ecx
  uint32_t hp_amount; // ecx
  uint32_t v9; // ecx
  uint32_t CharacterZone; // edi
  uint32_t v11; // edi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  common::milog::MiLogStream *v19; // rcx
  int32_t v20; // eax
  bool v21; // al
  bool is_left_has_tag; // [rsp+26h] [rbp-DAh]
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  int32_t result; // [rsp+2Ch] [rbp-D4h]
  std::vector<data::GCGChooseSortCond>::const_iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<data::GCGChooseSortCond>::const_iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<data::GCGChooseSortCond> *__for_range; // [rsp+40h] [rbp-C0h]
  const data::GCGChooseSortCond *choose_sort_cond_config; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 18 left_card_ptr:1258 64 16 19 right_card_ptr:1259";
  *(_QWORD *)(v3 + 16) = BT::CharacterCardInfoComparer::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __for_range = &this->choose_config_->sort_list;
  __for_begin._M_current = std::vector<data::GCGChooseSortCond>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<data::GCGChooseSortCond>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>(
            &__for_begin,
            &__for_end) )
  {
    choose_sort_cond_config = __gnu_cxx::__normal_iterator<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>::operator*(&__for_begin);
    result = 0;
    if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&choose_sort_cond_config->type);
    }
    if ( choose_sort_cond_config->type == CHARACTER_ORDER )
    {
      if ( *(_BYTE *)(((unsigned __int64)&left->stage_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->stage_order >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&left->stage_order);
      }
      stage_order = left->stage_order;
      if ( *(_BYTE *)(((unsigned __int64)&right->stage_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->stage_order >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&right->stage_order);
      }
      if ( stage_order >= right->stage_order )
      {
        if ( *(_BYTE *)(((unsigned __int64)&left->stage_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->stage_order >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&left->stage_order);
        }
        v7 = left->stage_order;
        if ( *(_BYTE *)(((unsigned __int64)&right->stage_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->stage_order >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&right->stage_order);
        }
        if ( v7 > right->stage_order )
          result = -1;
      }
      else
      {
        result = 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&choose_sort_cond_config->type);
      }
      if ( choose_sort_cond_config->type == HP_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(left);
        }
        hp_amount = left->hp_amount;
        if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(right);
        }
        if ( hp_amount >= right->hp_amount )
        {
          if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(left);
          }
          v9 = left->hp_amount;
          if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(right);
          }
          if ( v9 > right->hp_amount )
            result = -1;
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&choose_sort_cond_config->type);
        }
        if ( choose_sort_cond_config->type != HAS_TAG )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1283);
          v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v31,
                  (const char (*)[39])"character target not support cur type:");
          if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&choose_sort_cond_config->type);
          }
          val = choose_sort_cond_config->type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          goto LABEL_85;
        }
        if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&choose_sort_cond_config->tag);
        }
        if ( choose_sort_cond_config->tag == GCG_TAG_NONE )
          goto LABEL_85;
        if ( *(_BYTE *)(((unsigned __int64)&this->field_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->field_);
        CharacterZone = (unsigned int)GCGField::getCharacterZone(this->field_);
        if ( *(_BYTE *)(((unsigned __int64)&left->card_guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->card_guid >> 3) + 0x7FFF8000) )
        {
          CharacterZone = (_DWORD)left + 8;
          __asan_report_load4(&left->card_guid);
        }
        GCGCardZone::findCard((GCGCardZone *const)(v3 + 32), CharacterZone);
        if ( *(_BYTE *)(((unsigned __int64)&this->field_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->field_);
        v11 = (unsigned int)GCGField::getCharacterZone(this->field_);
        if ( *(_BYTE *)(((unsigned __int64)&right->card_guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->card_guid >> 3) + 0x7FFF8000) )
        {
          v11 = (_DWORD)right + 8;
          __asan_report_load4(&right->card_guid);
        }
        GCGCardZone::findCard((GCGCardZone *const)(v3 + 64), v11);
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 32), 0LL)
          || std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1262);
          v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v31,
                  (const char (*)[55])"left_card_ptr or right_card_ptr is nullptr, left guid:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &left->card_guid);
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])", right guid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &right->card_guid);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v16 = 0;
        }
        else
        {
          v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&choose_sort_cond_config->tag);
          }
          is_left_has_tag = GCGCard::isHasTag(v17, choose_sort_cond_config->tag);
          v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&choose_sort_cond_config->tag);
          }
          if ( is_left_has_tag == GCGCard::isHasTag(v18, choose_sort_cond_config->tag) )
          {
            v16 = 0;
          }
          else
          {
            result = !is_left_has_tag ? 1 : -1;
            v16 = 1;
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 32));
        if ( v16 != 1 )
          goto LABEL_85;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->larger >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)choose_sort_cond_config + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->larger >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load1(&choose_sort_cond_config->larger);
    }
    if ( choose_sort_cond_config->larger && result )
    {
      if ( result == 1 )
        v20 = -1;
      else
        v20 = 1;
      result = v20;
    }
    if ( result > 0 )
    {
      v21 = 1;
      goto LABEL_87;
    }
    if ( result < 0 )
    {
      v21 = 0;
      goto LABEL_87;
    }
LABEL_85:
    __gnu_cxx::__normal_iterator<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>::operator++(&__for_begin);
  }
  v21 = 0;
LABEL_87:
  if ( v32 == (char *)v3 )
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
  return v21;
};

// Line 1305: range 000000000E12C006-000000000E12C512
uint32_t __cdecl BT::ActionPlanMgr::getPlayCardSummonTarget(
        const BT::ActionPlanMgr *const this,
        const data::GCGChooseExcelConfig *choose_target_config,
        GCGField *field,
        const GCGCard *play_card,
        const std::set<unsigned int> *choose_target_guid_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  GCGCardZone *SummonZone; // rax
  GCGCardZone *v9; // rax
  size_t Size; // rax
  GCGCardZone *v11; // r14
  uint32_t v12; // r14d
  BT::SummonCardSortInfo *M_current; // r14
  std::vector<BT::SummonCardSortInfo>::iterator v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::vector<BT::SummonCardSortInfo>::reference v16; // rdx
  uint32_t *p_card_guid; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t result; // eax
  BT::ActionPlanMgr::getPlayCardSummonTarget::<lambda(GCGCard&)> v22; // [rsp-30h] [rbp-190h]
  unsigned int Id; // [rsp+34h] [rbp-12Ch] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-128h] BYREF
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+40h] [rbp-120h] BYREF
  BT::ActionPlanMgr::getPlayCardSummonTarget::<lambda(GCGCard&)> __f; // [rsp+60h] [rbp-100h]
  char v30[208]; // [rsp+90h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 16 stage_order:1306 48 4 23 choose_target_guid:1365 64 16 13 comparer:1358 96 24 30 alter"
                        "native_card_info_vec:1307";
  *(_QWORD *)(v5 + 16) = BT::ActionPlanMgr::getPlayCardSummonTarget;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -219021312;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  SummonZone = GCGField::getSummonZone(field);
  *(_DWORD *)(v5 + 32) = GCGCardZone::getSize(SummonZone);
  std::vector<BT::SummonCardSortInfo>::vector((std::vector<BT::SummonCardSortInfo> *const)(v5 + 96));
  v9 = GCGField::getSummonZone(field);
  Size = GCGCardZone::getSize(v9);
  std::vector<BT::SummonCardSortInfo>::reserve((std::vector<BT::SummonCardSortInfo> *const)(v5 + 96), Size);
  v11 = GCGField::getSummonZone(field);
  __f.__alternative_card_info_vec = (std::vector<BT::SummonCardSortInfo> *)(v5 + 96);
  __f.__stage_order = (uint32_t *)(v5 + 32);
  __f.__choose_target_guid_set = choose_target_guid_set;
  __f.__choose_target_config = choose_target_config;
  __f.__this = this;
  v22.__this = this;
  v22.__choose_target_config = choose_target_config;
  v22.__choose_target_guid_set = choose_target_guid_set;
  v22.__stage_order = (uint32_t *)(v5 + 32);
  v22.__alternative_card_info_vec = (std::vector<BT::SummonCardSortInfo> *)(v5 + 96);
  std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::getPlayCardSummonTarget(data::GCGChooseExcelConfig const&,GCGField &,GCGCard const&,std::set<unsigned int> const&)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    v22);
  GCGCardZone::foreachCard(v11, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  if ( std::vector<BT::SummonCardSortInfo>::empty((const std::vector<BT::SummonCardSortInfo> *const)(v5 + 96)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "getPlayCardSummonTarget",
      1355);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)&p_func,
      (const char (*)[35])"alternative_card_info_vec is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v12 = 0;
  }
  else
  {
    BT::SummonCardInfoComparer::SummonCardInfoComparer(
      (BT::SummonCardInfoComparer *const)(v5 + 64),
      choose_target_config,
      field);
    M_current = std::vector<BT::SummonCardSortInfo>::end((std::vector<BT::SummonCardSortInfo> *const)(v5 + 96))._M_current;
    v14._M_current = std::vector<BT::SummonCardSortInfo>::begin((std::vector<BT::SummonCardSortInfo> *const)(v5 + 96))._M_current;
    std::sort<__gnu_cxx::__normal_iterator<BT::SummonCardSortInfo *,std::vector<BT::SummonCardSortInfo>>,BT::SummonCardInfoComparer>(
      v14,
      (__gnu_cxx::__normal_iterator<BT::SummonCardSortInfo*,std::vector<BT::SummonCardSortInfo> >)M_current,
      *(BT::SummonCardInfoComparer *)(v5 + 64));
    if ( std::vector<BT::SummonCardSortInfo>::size((const std::vector<BT::SummonCardSortInfo> *const)(v5 + 96)) )
    {
      v16 = std::vector<BT::SummonCardSortInfo>::operator[]((std::vector<BT::SummonCardSortInfo> *const)(v5 + 96), 0LL);
      p_card_guid = &v16->card_guid;
      if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_card_guid);
      }
      *(_DWORD *)(v5 + 48) = v16->card_guid;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "getPlayCardSummonTarget",
        1366);
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[11])"play card:");
      Id = GCGCard::getId(play_card);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Id);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", target :");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v12 = *(_DWORD *)(v5 + 48);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "getPlayCardSummonTarget",
        1362);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[48])"alternative_card_info_vec size not valid, size:");
      val = std::vector<BT::SummonCardSortInfo>::size((const std::vector<BT::SummonCardSortInfo> *const)(v5 + 96));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v12 = 0;
    }
  }
  std::vector<BT::SummonCardSortInfo>::~vector((std::vector<BT::SummonCardSortInfo> *const)(v5 + 96));
  result = v12;
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1309: range 000000000E12B942-000000000E12C005
ForeachPolicy __cdecl BT::ActionPlanMgr::getPlayCardSummonTarget(data::GCGChooseExcelConfig const&,GCGField &,GCGCard const&,std::set<unsigned int> const&)const::{lambda(GCGCard&)#1}::operator()(
        const BT::ActionPlanMgr::getPlayCardSummonTarget::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ForeachPolicy result; // eax
  const std::set<unsigned int> *choose_target_guid_set; // r14
  const BT::ActionPlanMgr *this; // rax
  uint32_t *stage_order; // rdx
  common::milog::MiLogStream *v9; // r14
  unsigned __int64 v10; // rax
  uint32_t v11; // edx
  const BT::ActionPlanMgr *v12; // rax
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // r14
  uint32_t Id; // eax
  common::milog::MiLogStream *v16; // rbx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-D4h] BYREF
  uint32_t show_token_value; // [rsp+20h] [rbp-D0h]
  GCGTokenType show_token_type; // [rsp+24h] [rbp-CCh]
  std::_Rb_tree_const_iterator<unsigned int>::_Self v25; // [rsp+28h] [rbp-C8h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  const data::GCGCardExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-B0h] BYREF
  std::string val; // [rsp+60h] [rbp-90h] BYREF
  char v30[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 14 card_info:1324";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::getPlayCardSummonTarget(data::GCGChooseExcelConfig const&,GCGField &,GCGCard const&,std::set<unsigned int> const&)const::{lambda(GCGCard&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( !GCGCard::isActivated(card) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_target_guid_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__choose_target_guid_set);
    __y._M_node = std::set<unsigned int>::end(__closure->__choose_target_guid_set)._M_node;
    choose_target_guid_set = __closure->__choose_target_guid_set;
    __x = GCGCard::getGuid(card);
    v25._M_node = std::set<unsigned int>::find(choose_target_guid_set, &__x)._M_node;
    if ( std::operator!=(&v25, &__y) )
    {
      result = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this);
      this = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_target_config >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__choose_target_config);
      if ( !BT::ActionPlanMgr::checkMeetFilter(this, __closure->__choose_target_config, card) )
      {
        result = FOREACH_CONTINUE;
      }
      else
      {
        *(_DWORD *)(v2 + 32) = 0;
        *(_DWORD *)(v2 + 36) = 0;
        *(_DWORD *)(v2 + 40) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_order >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__stage_order);
        stage_order = __closure->__stage_order;
        if ( *(_BYTE *)(((unsigned __int64)stage_order >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_order & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_order >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(__closure->__stage_order);
        }
        if ( *stage_order )
        {
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_order >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__stage_order);
          v10 = (unsigned __int64)__closure->__stage_order;
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load4(__closure->__stage_order);
          v11 = (*(_DWORD *)v10)--;
          *(_DWORD *)(v2 + 36) = v11;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1327);
          v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                 &v28,
                 (const char (*)[32])"stage_order is not valid, card:");
          GCGCard::getDesc[abi:cxx11](&val, card);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v28);
          *(_DWORD *)(v2 + 36) = 0;
        }
        *(_DWORD *)(v2 + 40) = GCGCard::getGuid(card);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__this);
        v12 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure->__this);
        Config = GCGGameMode::getConfig(v12->game_mode_);
        GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
        Id = GCGCard::getId(card);
        config_ptr = data::GCGGameExcelConfigMgrBase::findGCGCardExcelConfig(GCGGameExcelConfigMgr, Id);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->token_to_show >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->token_to_show >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->token_to_show);
          }
          show_token_type = config_ptr->token_to_show;
          show_token_value = 0;
          if ( show_token_type )
            show_token_value = GCGCard::getToken(card, show_token_type);
          *(_DWORD *)(v2 + 32) = show_token_value;
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1349);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[16])"card_info guid:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 40));
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])", show token:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v20,
                  (const char (*)[16])", attend_order:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 36));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          std::vector<BT::SummonCardSortInfo>::push_back(
            __closure->__alternative_card_info_vec,
            (const std::vector<BT::SummonCardSortInfo>::value_type *)(v2 + 32));
          result = FOREACH_CONTINUE;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1339);
          v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[31])"card config not find, card id:");
          __x = GCGCard::getId(card);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &__x);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          result = FOREACH_CONTINUE;
        }
      }
    }
  }
  if ( v30 == (char *)v2 )
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

// Line 1372: range 000000000E12C514-000000000E12CF60
bool __cdecl BT::SummonCardInfoComparer::operator()(
        BT::SummonCardInfoComparer *const this,
        const BT::SummonCardSortInfo *left,
        const BT::SummonCardSortInfo *right)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t attend_order; // ecx
  uint32_t v7; // ecx
  uint32_t show_token_value; // ecx
  uint32_t v9; // ecx
  uint32_t SummonZone; // ecx
  uint32_t v11; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  common::milog::MiLogStream *v19; // rcx
  int32_t v20; // eax
  bool v21; // al
  bool is_left_has_tag; // [rsp+26h] [rbp-DAh]
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  int32_t result; // [rsp+2Ch] [rbp-D4h]
  std::vector<data::GCGChooseSortCond>::const_iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<data::GCGChooseSortCond>::const_iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<data::GCGChooseSortCond> *__for_range; // [rsp+40h] [rbp-C0h]
  const data::GCGChooseSortCond *choose_sort_cond_config; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 18 left_card_ptr:1407 64 16 19 right_card_ptr:1408";
  *(_QWORD *)(v3 + 16) = BT::SummonCardInfoComparer::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __for_range = &this->choose_config_->sort_list;
  __for_begin._M_current = std::vector<data::GCGChooseSortCond>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<data::GCGChooseSortCond>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>(
            &__for_begin,
            &__for_end) )
  {
    choose_sort_cond_config = __gnu_cxx::__normal_iterator<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>::operator*(&__for_begin);
    result = 0;
    if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&choose_sort_cond_config->type);
    }
    if ( choose_sort_cond_config->type == CREATE_ORDER )
    {
      if ( *(_BYTE *)(((unsigned __int64)&left->attend_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->attend_order >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&left->attend_order);
      }
      attend_order = left->attend_order;
      if ( *(_BYTE *)(((unsigned __int64)&right->attend_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->attend_order >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&right->attend_order);
      }
      if ( attend_order >= right->attend_order )
      {
        if ( *(_BYTE *)(((unsigned __int64)&left->attend_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->attend_order >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&left->attend_order);
        }
        v7 = left->attend_order;
        if ( *(_BYTE *)(((unsigned __int64)&right->attend_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->attend_order >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&right->attend_order);
        }
        if ( v7 > right->attend_order )
          result = -1;
      }
      else
      {
        result = 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&choose_sort_cond_config->type);
      }
      if ( choose_sort_cond_config->type == TOKEN_TO_SHOW )
      {
        if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(left);
        }
        show_token_value = left->show_token_value;
        if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(right);
        }
        if ( show_token_value >= right->show_token_value )
        {
          if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(left);
          }
          v9 = left->show_token_value;
          if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(right);
          }
          if ( v9 > right->show_token_value )
            result = -1;
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&choose_sort_cond_config->type);
        }
        if ( choose_sort_cond_config->type != HAS_TAG )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1432);
          v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v30,
                  (const char (*)[36])"summon target not support cur type:");
          if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&choose_sort_cond_config->type);
          }
          val = choose_sort_cond_config->type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v30);
          goto LABEL_85;
        }
        if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&choose_sort_cond_config->tag);
        }
        if ( choose_sort_cond_config->tag == GCG_TAG_NONE )
          goto LABEL_85;
        if ( *(_BYTE *)(((unsigned __int64)&this->field_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->field_);
        SummonZone = (unsigned int)GCGField::getSummonZone(this->field_);
        if ( *(_BYTE *)(((unsigned __int64)&left->card_guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->card_guid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&left->card_guid);
        }
        GCGCardZone::findCard((GCGCardZone *const)(v3 + 32), SummonZone);
        if ( *(_BYTE *)(((unsigned __int64)&this->field_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->field_);
        v11 = (unsigned int)GCGField::getSummonZone(this->field_);
        if ( *(_BYTE *)(((unsigned __int64)&right->card_guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->card_guid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&right->card_guid);
        }
        GCGCardZone::findCard((GCGCardZone *const)(v3 + 64), v11);
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 32), 0LL)
          || std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_ai/logic/action_plan_mgr.cpp",
            "operator()",
            1411);
          v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v30,
                  (const char (*)[55])"left_card_ptr or right_card_ptr is nullptr, left guid:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &left->card_guid);
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])", right guid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &right->card_guid);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v16 = 0;
        }
        else
        {
          v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&choose_sort_cond_config->tag);
          }
          is_left_has_tag = GCGCard::isHasTag(v17, choose_sort_cond_config->tag);
          v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->tag >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&choose_sort_cond_config->tag);
          }
          if ( is_left_has_tag == GCGCard::isHasTag(v18, choose_sort_cond_config->tag) )
          {
            v16 = 0;
          }
          else
          {
            result = !is_left_has_tag ? 1 : -1;
            v16 = 1;
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 32));
        if ( v16 != 1 )
          goto LABEL_85;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->larger >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)choose_sort_cond_config + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&choose_sort_cond_config->larger >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load1(&choose_sort_cond_config->larger);
    }
    if ( choose_sort_cond_config->larger && result )
    {
      if ( result == 1 )
        v20 = -1;
      else
        v20 = 1;
      result = v20;
    }
    if ( result > 0 )
    {
      v21 = 1;
      goto LABEL_87;
    }
    if ( result < 0 )
    {
      v21 = 0;
      goto LABEL_87;
    }
LABEL_85:
    __gnu_cxx::__normal_iterator<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>::operator++(&__for_begin);
  }
  v21 = 0;
LABEL_87:
  if ( v31 == (char *)v3 )
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
  return v21;
};

// Line 1455: range 000000000E12DDBE-000000000E12EBC4
std::vector<std::shared_ptr<BT::ActionPlanBase>> *__cdecl BT::ActionPlanMgr::createChangeCharacterPlan(
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *retstr,
        BT::ActionPlanMgr *const this,
        const std::shared_ptr<BTActionGenChangeCharacterPlanConfig> *change_character_plan_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v7; // rax
  GCGGameMode *game_mode; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGCharacterZone *CharacterZone; // rax
  GCGCharacterZone *v14; // r14
  BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *M_current; // r14
  std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> >::iterator v16; // rax
  BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&, const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&)> v17; // dl
  BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *v18; // r14
  std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> >::iterator v19; // rax
  BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&, const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&)> v20; // dl
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  bool *p_is_normal_change; // rax
  uint32_t card_guid; // r14d
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  int32_t priority; // r14d
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  int32_t *p_priority; // rax
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(GCGCard&)> v35; // [rsp-50h] [rbp-2A0h]
  unsigned int val; // [rsp+20h] [rbp-230h] BYREF
  data::BehaviorConfigChangeCharacterSortType sort_type; // [rsp+24h] [rbp-22Ch]
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+28h] [rbp-228h]
  const std::map<data::ActionPlanPriorReviseType,int> *revise_map; // [rsp+38h] [rbp-218h]
  GCGDuel *duel; // [rsp+40h] [rbp-210h]
  GCGField *field; // [rsp+48h] [rbp-208h]
  const GCGRule *rule; // [rsp+50h] [rbp-200h]
  BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *choose_card_info; // [rsp+58h] [rbp-1F8h]
  std::shared_ptr<BT::ActionPlanBase> __x; // [rsp+60h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v47; // [rsp+70h] [rbp-1E0h] BYREF
  BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(GCGCard&)> __f; // [rsp+90h] [rbp-1C0h]
  char v49[368]; // [rsp+E0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 1 14 sort_func:1562 48 4 16 cur_game_id:1461 64 4 21 ai_card_group_id:1469 80 4 16 revise_b"
                        "ase:1478 96 4 22 onstage_card_guid:1497 112 16 25 cur_onstage_card_ptr:1483 144 16 30 change_cha"
                        "racter_plan_ptr:1589 176 24 37 alternative_change_character_vec:1507 240 48 29 character_exist_dice_set:1490";
  *(_QWORD *)(v3 + 16) = BT::ActionPlanMgr::createChangeCharacterPlan;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862729] = -202116109;
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(retstr);
  if ( !std::operator==<BTActionGenChangeCharacterPlanConfig>(change_character_plan_config_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v3 + 48) = GCGGameMode::getGameId(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Config = GCGGameMode::getConfig(this->game_mode_);
    gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    if ( !data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(gcg_game_config_mgr, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createChangeCharacterPlan",
        1466);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v47,
             (const char (*)[37])"GCGGameExcelConfig not find game_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v47);
      goto LABEL_59;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    game_mode = this->game_mode_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    *(_DWORD *)(v3 + 64) = GCGGameMode::getControllerCardGroupId(game_mode, this->cur_controller_id_);
    if ( !*(_DWORD *)(v3 + 64) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createChangeCharacterPlan",
        1472);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v47,
             (const char (*)[41])"ai card group not set valid, card_group:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v47);
      goto LABEL_59;
    }
    v10 = std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)change_character_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v10->param1.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->param1.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->param1.value);
    }
    sort_type = v10->param1.value;
    v11 = std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)change_character_plan_config_ptr);
    if ( *(char *)(((unsigned __int64)&v11->param2.value >> 3) + 0x7FFF8000) < 0 )
      v11 = (std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v11->param2.value);
    *(_BYTE *)(v3 + 32) = v11->param2.value;
    v12 = std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)change_character_plan_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v12->param3.value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->param3.value >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->param3.value);
    }
    *(_DWORD *)(v3 + 80) = v12->param3.value;
    revise_map = &std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTActionGenChangeCharacterPlanConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)change_character_plan_config_ptr)->param4.value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    field = GCGDuel::getField(duel, this->cur_controller_id_);
    GCGField::getCharacterZone(field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 112));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createChangeCharacterPlan",
        1486);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v47,
        (const char (*)[32])"cur_onstage_card_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v47);
LABEL_58:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 112));
      goto LABEL_59;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    rule = GCGGameMode::rule(this->game_mode_);
    BT::ActionPlanMgr::getCurCharacterExistDiceSideSet((std::set<proto::GCGDiceSideType> *)(v3 + 240), this, field);
    if ( sort_type == BEHAVIOR_CONFIG_CHANGE_CHARACTER_SORT_TYPE_INIT )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createChangeCharacterPlan",
        1493);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v47,
        (const char (*)[27])"param1 sort type not valid");
      common::milog::MiLogStream::~MiLogStream(&v47);
LABEL_57:
      std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v3 + 240));
      goto LABEL_58;
    }
    CharacterZone = GCGField::getCharacterZone(field);
    *(_DWORD *)(v3 + 96) = GCGCharacterZone::getOnStageCardGuid(CharacterZone);
    std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::vector((std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176));
    v14 = GCGField::getCharacterZone(field);
    __f.__is_must_change = (const bool *)(v3 + 32);
    __f.__onstage_card_guid = (unsigned int *)(v3 + 96);
    __f.__this = this;
    __f.__cur_onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v3 + 112);
    __f.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 240);
    __f.__revise_map = revise_map;
    __f.__revise_base = (const int32_t *)(v3 + 80);
    __f.__ai_card_group_id = (const uint32_t *)(v3 + 64);
    __f.__alternative_change_character_vec = (std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *)(v3 + 176);
    v35.__alternative_change_character_vec = (std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *)(v3 + 176);
    v35.__ai_card_group_id = (const uint32_t *)(v3 + 64);
    v35.__revise_base = (const int32_t *)(v3 + 80);
    v35.__revise_map = revise_map;
    v35.__character_exist_dice_set = (std::set<proto::GCGDiceSideType> *)(v3 + 240);
    v35.__cur_onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v3 + 112);
    v35.__this = this;
    v35.__onstage_card_guid = (unsigned int *)(v3 + 96);
    v35.__is_must_change = (const bool *)(v3 + 32);
    std::function<ForeachPolicy ()(GCGCard &)>::function<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(GCGCard &)#1},void,void>(
      (std::function<ForeachPolicy(GCGCard&)> *const)&v47,
      v35);
    GCGCharacterZone::foreachAliveCharacter(v14, (std::function<ForeachPolicy(GCGCard&)> *)&v47);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v47);
    if ( sort_type == BEHAVIOR_CONFIG_CHANGE_CHARACTER_SORT_TYPE_MAX_HP )
    {
      M_current = std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::end((std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176))._M_current;
      v16._M_current = std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::begin((std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo *,std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>>,BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&,BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&)#2}>(
        v16,
        (__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo*,std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > >)M_current,
        v17);
    }
    else
    {
      if ( sort_type != BEHAVIOR_CONFIG_CHANGE_CHARACTER_SORT_TYPE_PROTECTED_PRIOR )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "createChangeCharacterPlan",
          1574);
        v21 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v47, (const char (*)[23])off_1BC77B00);
        val = sort_type;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v47);
LABEL_56:
        std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::~vector((std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176));
        goto LABEL_57;
      }
      v18 = std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::end((std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176))._M_current;
      v19._M_current = std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::begin((std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo *,std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>>,BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&,BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&)#3}>(
        v19,
        (__gnu_cxx::__normal_iterator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo*,std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > >)v18,
        v20);
    }
    if ( std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::empty((const std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_ai/logic/action_plan_mgr.cpp",
        "createChangeCharacterPlan",
        1579);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v47, (const char (*)[14])"no valid plan");
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    else
    {
      choose_card_info = std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::operator[](
                           (std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> > *const)(v3 + 176),
                           0LL);
      if ( *(_BYTE *)(v3 + 32) )
        goto LABEL_45;
      if ( *(_BYTE *)(((unsigned __int64)&choose_card_info->card_guid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)choose_card_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&choose_card_info->card_guid >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&choose_card_info->card_guid);
      }
      if ( choose_card_info->card_guid != *(_DWORD *)(v3 + 96) )
      {
LABEL_45:
        common::tools::perf::make_shared<BT::ActionPlanChangeCharacter>();
        v25 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        p_is_normal_change = &v25->is_normal_change_;
        if ( *(_BYTE *)(((unsigned __int64)p_is_normal_change >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_normal_change & 7) >= *(_BYTE *)(((unsigned __int64)p_is_normal_change >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store1(p_is_normal_change);
        }
        v25->is_normal_change_ = 1;
        if ( *(_BYTE *)(((unsigned __int64)&choose_card_info->card_guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)choose_card_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&choose_card_info->card_guid >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&choose_card_info->card_guid);
        }
        card_guid = choose_card_info->card_guid;
        v28 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v28->change_to_character_guid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v28->change_to_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          v28 = (std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v28->change_to_character_guid_);
        }
        v28->change_to_character_guid_ = card_guid;
        if ( *(_BYTE *)(((unsigned __int64)&choose_card_info->priority >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&choose_card_info->priority >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&choose_card_info->priority);
        }
        priority = choose_card_info->priority;
        v30 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        p_priority = &v30->priority_;
        if ( *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_priority & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_priority >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_priority);
        }
        v30->priority_ = priority;
        v32 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        std::map<proto::GCGDiceSideType,unsigned int>::operator=(
          &v32->choose_dice_map_,
          &choose_card_info->choose_dice_map);
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "createChangeCharacterPlan",
          1594);
        v33 = std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BT::ActionPlanChangeCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        common::milog::MiLogStream::operator<<<BT::ActionPlanChangeCharacter,(BT::ActionPlanChangeCharacter*)0>(
          &v47,
          v33);
        common::milog::MiLogStream::~MiLogStream(&v47);
        std::shared_ptr<BT::ActionPlanBase>::shared_ptr<BT::ActionPlanChangeCharacter,void>(
          &__x,
          (const std::shared_ptr<BT::ActionPlanChangeCharacter> *)(v3 + 144));
        std::vector<std::shared_ptr<BT::ActionPlanBase>>::push_back(retstr, &__x);
        std::shared_ptr<BT::ActionPlanBase>::~shared_ptr(&__x);
        std::shared_ptr<BT::ActionPlanChangeCharacter>::~shared_ptr((std::shared_ptr<BT::ActionPlanChangeCharacter> *const)(v3 + 144));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "createChangeCharacterPlan",
          1586);
        v22 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v47,
                (const char (*)[26])"target is cur, card guid:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &choose_card_info->card_guid);
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])", card id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &choose_card_info->card_id);
        common::milog::MiLogStream::~MiLogStream(&v47);
      }
    }
    goto LABEL_56;
  }
LABEL_59:
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1498: range 000000000E1A31BE-000000000E1A344D
BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *__cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::operator=(
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const this,
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *a2)
{
  uint32_t card_id; // ecx
  uint32_t card_guid; // ecx
  int32_t priority; // ecx
  uint32_t rest_hp; // ecx
  uint32_t protected_prior; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_id = a2->card_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_guid);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rest_hp);
  }
  rest_hp = a2->rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_hp);
  }
  this->rest_hp = rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->protected_prior);
  }
  protected_prior = a2->protected_prior;
  if ( *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protected_prior);
  }
  this->protected_prior = protected_prior;
  std::map<proto::GCGDiceSideType,unsigned int>::operator=(&this->choose_dice_map, &a2->choose_dice_map);
  return this;
};

// Line 1498: range 000000000E12CFB6-000000000E12D115
void __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::InnerAlternativeCardInfo(
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority);
  }
  this->priority = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_hp);
  }
  this->rest_hp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protected_prior);
  }
  this->protected_prior = 0;
  std::map<proto::GCGDiceSideType,unsigned int>::map(&this->choose_dice_map);
};

// Line 1498: range 000000000E1A2F30-000000000E1A31BC
void __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::InnerAlternativeCardInfo(
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const this,
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *a2)
{
  uint32_t card_id; // ecx
  uint32_t card_guid; // ecx
  int32_t priority; // ecx
  uint32_t rest_hp; // ecx
  uint32_t protected_prior; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_id = a2->card_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_guid);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rest_hp);
  }
  rest_hp = a2->rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_hp);
  }
  this->rest_hp = rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->protected_prior);
  }
  protected_prior = a2->protected_prior;
  if ( *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protected_prior);
  }
  this->protected_prior = protected_prior;
  std::map<proto::GCGDiceSideType,unsigned int>::map(&this->choose_dice_map, &a2->choose_dice_map);
};

// Line 1498: range 000000000E19C79E-000000000E19CA2A
void __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::InnerAlternativeCardInfo(
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const this,
        const BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *a2)
{
  uint32_t card_id; // ecx
  uint32_t card_guid; // ecx
  int32_t priority; // ecx
  uint32_t rest_hp; // ecx
  uint32_t protected_prior; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_id = a2->card_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_guid);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rest_hp);
  }
  rest_hp = a2->rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rest_hp);
  }
  this->rest_hp = rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->protected_prior);
  }
  protected_prior = a2->protected_prior;
  if ( *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protected_prior);
  }
  this->protected_prior = protected_prior;
  std::map<proto::GCGDiceSideType,unsigned int>::map(&this->choose_dice_map, &a2->choose_dice_map);
};

// Line 1498: range 000000000E12D116-000000000E12D134
void __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::~InnerAlternativeCardInfo(
        BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const this)
{
  std::map<proto::GCGDiceSideType,unsigned int>::~map(&this->choose_dice_map);
};

// Line 1508: range 000000000E12D136-000000000E12DC74
ForeachPolicy __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(GCGCard &)#1}::operator()(
        const BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const bool *is_must_change; // rdx
  uint32_t Guid; // esi
  unsigned int *onstage_card_guid; // rdx
  char v8; // al
  BT::ActionPlanMgr *this; // rax
  GCGSkillLogic *SkillLogic; // r14
  BT::ActionPlanMgr *v11; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  BT::ActionPlanMgr *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // r14
  int32_t v20; // esi
  const int32_t *revise_base; // rdx
  BT::ActionPlanMgr *v22; // rax
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // r14
  uint32_t Id; // esi
  uint32_t *ai_card_group_id; // rdx
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  ForeachPolicy result; // eax
  uint32_t cur_need_cost_change_character; // [rsp+1Ch] [rbp-234h]
  std::enable_shared_from_this<GCGCard> v35; // [rsp+20h] [rbp-230h] BYREF
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+30h] [rbp-220h] BYREF
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-210h] BYREF
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-1F0h] BYREF
  std::map<data::GCGCostType,unsigned int> p_need_cost_map; // [rsp+80h] [rbp-1D0h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_dice_side_map; // [rsp+B0h] [rbp-1A0h] BYREF
  char v41[368]; // [rsp+E0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 26 total_revise_priority:1536 48 48 30 change_character_cost_map:1518 128 48 20 choose_di"
                        "ce_map:1519 208 72 14 card_info:1535";
  *(_QWORD *)(v2 + 16) = BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(GCGCard &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -218959118;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  is_must_change = __closure->__is_must_change;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__is_must_change >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_must_change & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_must_change >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_must_change);
  }
  if ( !*is_must_change )
    goto LABEL_15;
  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__onstage_card_guid);
  onstage_card_guid = __closure->__onstage_card_guid;
  if ( *(_BYTE *)(((unsigned __int64)onstage_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)onstage_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)onstage_card_guid >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__onstage_card_guid);
  }
  if ( Guid == *onstage_card_guid )
    v8 = 1;
  else
LABEL_15:
    v8 = 0;
  if ( !v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    std::enable_shared_from_this<GCGCard>::shared_from_this(&v35);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_card_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__cur_onstage_card_ptr);
    std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, __closure->__cur_onstage_card_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v11 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v11->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (BT::ActionPlanMgr *)__asan_report_load4(&v11->cur_controller_id_);
    }
    cur_need_cost_change_character = GCGSkillLogic::getReviseOnStageChangeCostPreview(
                                       SkillLogic,
                                       v11->cur_controller_id_,
                                       &p_card_ptr,
                                       (GCGCardPtr *)&v35);
    std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v35);
    std::map<data::GCGCostType,unsigned int>::map((std::map<data::GCGCostType,unsigned int> *const)(v2 + 48));
    std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 128));
    if ( cur_need_cost_change_character )
    {
      *(_DWORD *)(v2 + 32) = 10;
      v12 = std::map<data::GCGCostType,unsigned int>::operator[](
              (std::map<data::GCGCostType,unsigned int> *const)(v2 + 48),
              (std::map<data::GCGCostType,unsigned int>::key_type *)(v2 + 32));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = cur_need_cost_change_character;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this);
      v14 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__character_exist_dice_set >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__character_exist_dice_set);
      if ( BT::ActionPlanMgr::payPlan(
             v14,
             __closure->__character_exist_dice_set,
             (const std::map<data::GCGCostType,unsigned int> *)(v2 + 48),
             (std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          1525);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v38, (const char (*)[6])"card:");
        *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" cost not valid");
        common::milog::MiLogStream::~MiLogStream(&v38);
LABEL_55:
        std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 128));
        std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v2 + 48));
        goto LABEL_56;
      }
      std::map<proto::GCGDiceSideType,unsigned int>::map(
        &p_dice_side_map,
        (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 128));
      std::map<data::GCGCostType,unsigned int>::map(
        &p_need_cost_map,
        (const std::map<data::GCGCostType,unsigned int> *)(v2 + 48));
      v17 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map);
      std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map);
      std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map);
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/logic/action_plan_mgr.cpp",
          "operator()",
          1531);
        v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v37,
                (const char (*)[27])"dice cost not valid, card:");
        *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 32));
        GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
          (std::string *)&v38,
          (const std::map<data::GCGCostType,unsigned int> *)(v2 + 48),
          (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 128));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v38);
        std::string::~string(&v38);
        common::milog::MiLogStream::~MiLogStream(&v37);
        goto LABEL_55;
      }
    }
    BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::InnerAlternativeCardInfo((BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const)(v2 + 208));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__revise_map);
    v20 = BT::ActionPlanMgr::calculatePriority(
            __closure->__revise_map,
            (const std::map<data::GCGCostType,unsigned int> *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__revise_base >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__revise_base);
    revise_base = __closure->__revise_base;
    if ( *(_BYTE *)(((unsigned __int64)revise_base >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)revise_base & 7) + 3) >= *(_BYTE *)(((unsigned __int64)revise_base >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__revise_base);
    }
    *(_DWORD *)(v2 + 32) = v20 + *revise_base;
    *(_DWORD *)(v2 + 212) = GCGCard::getGuid(card);
    *(_DWORD *)(v2 + 208) = GCGCard::getId(card);
    *(_DWORD *)(v2 + 216) = *(_DWORD *)(v2 + 32);
    *(_DWORD *)(v2 + 220) = GCGCard::getToken(card, GCG_TOKEN_HP);
    std::map<proto::GCGDiceSideType,unsigned int>::operator=(
      (std::map<proto::GCGDiceSideType,unsigned int> *const)(v2 + 232),
      (const std::map<proto::GCGDiceSideType,unsigned int> *)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v22 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure->__this);
    Config = GCGGameMode::getConfig(v22->game_mode_);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    Id = GCGCard::getId(card);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__ai_card_group_id >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__ai_card_group_id);
    ai_card_group_id = (uint32_t *)__closure->__ai_card_group_id;
    if ( *(_BYTE *)(((unsigned __int64)ai_card_group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ai_card_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ai_card_group_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__ai_card_group_id);
    }
    *(_DWORD *)(v2 + 224) = GCGGameExcelConfigMgr::getDeckCardProtectedPriority(
                              GCGGameExcelConfigMgr,
                              *ai_card_group_id,
                              Id);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__alternative_change_character_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__alternative_change_character_vec);
    std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo>>::push_back(
      __closure->__alternative_change_character_vec,
      (const std::vector<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo,std::allocator<BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo> >::value_type *)(v2 + 208));
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/logic/action_plan_mgr.cpp",
      "operator()",
      1544);
    v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v37, (const char (*)[18])"alternative card:");
    GCGCard::getDesc[abi:cxx11]((std::string *)&v38, card);
    v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)&v38);
    v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])",priority:");
    v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v2 + 32));
    v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v30, (const char (*)[18])",protected_prior:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 224));
    std::string::~string(&v38);
    common::milog::MiLogStream::~MiLogStream(&v37);
    BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo::~InnerAlternativeCardInfo((BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *const)(v2 + 208));
    goto LABEL_55;
  }
LABEL_56:
  result = FOREACH_CONTINUE;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1550: range 000000000E12DC76-000000000E12DD20
bool __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&,BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&)#2}::operator()(
        const BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&, const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&)> *const __closure,
        const BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *left,
        const BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *right)
{
  uint32_t rest_hp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&left->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->rest_hp);
  }
  rest_hp = left->rest_hp;
  if ( *(_BYTE *)(((unsigned __int64)&right->rest_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->rest_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->rest_hp);
  }
  return rest_hp > right->rest_hp;
};

// Line 1562: range 000000000E12DD22-000000000E12DDBC
bool __cdecl BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::{lambda(BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&,BT::ActionPlanMgr::createChangeCharacterPlan(std::shared_ptr<BTActionGenChangeCharacterPlanConfig> const&)::InnerAlternativeCardInfo const&)#3}::operator()(
        const BT::ActionPlanMgr::createChangeCharacterPlan::<lambda(const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&, const BT::ActionPlanMgr::createChangeCharacterPlan(const std::shared_ptr<BTActionGenChangeCharacterPlanConfig>&)::InnerAlternativeCardInfo&)> *const __closure,
        const BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *left,
        const BT::ActionPlanMgr::createChangeCharacterPlan::InnerAlternativeCardInfo *right)
{
  uint32_t protected_prior; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&left->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&left->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&left->protected_prior);
  }
  protected_prior = left->protected_prior;
  if ( *(_BYTE *)(((unsigned __int64)&right->protected_prior >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&right->protected_prior >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&right->protected_prior);
  }
  return protected_prior < right->protected_prior;
};
