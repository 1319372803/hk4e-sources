// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/general_reward_comp.cpp

// Line 30: range 0000000014510192-0000000014510651
void __cdecl GadgetGeneralRewardComp::GadgetGeneralRewardComp(
        GadgetGeneralRewardComp *const this,
        Gadget *gadget,
        const GadgetGeneralRewardParam *param)
{
  int (**v3)(...); // rdx
  uint32_t resin; // ecx
  uint32_t dead_time; // ecx
  uint32_t destroy_cd; // ecx
  uint32_t item_limit_type; // ecx
  __int64 v8; // rdx
  bool is_auto_pick; // cl
  bool is_general_reward_hiden; // cl

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'GadgetGeneralRewardComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  resin = param->resin;
  if ( *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resin_);
  }
  this->resin_ = resin;
  if ( *(_BYTE *)(((unsigned __int64)&param->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dead_time = param->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&param->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  destroy_cd = param->destroy_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd_);
  }
  this->destroy_cd_ = destroy_cd;
  std::map<unsigned int,proto::GeneralRewardBin>::map(&this->qualify_info_map_, &param->qualify_info_map);
  std::set<unsigned int>::set(&this->remain_uid_set_, &param->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&param->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = param->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type_);
  }
  this->item_limit_type_ = item_limit_type;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->life_timer_ptr_);
  if ( *(_WORD *)(((unsigned __int64)&this->item_param_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->item_param_);
  if ( (((unsigned __int8)param + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&param->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&param->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&param->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&param->item_param.promote_level + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(&param->item_param, 16LL);
  }
  v8 = *(_QWORD *)&param->item_param.level;
  *(_QWORD *)&this->item_param_.item_id = *(_QWORD *)&param->item_param.item_id;
  *(_QWORD *)&this->item_param_.level = v8;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_auto_pick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_auto_pick >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_auto_pick);
  }
  is_auto_pick = param->is_auto_pick;
  if ( *(char *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_auto_pick_);
  this->is_auto_pick_ = is_auto_pick;
  std::set<unsigned int>::set(&this->open_state_set_, &param->open_state_set);
  if ( *(char *)(((unsigned __int64)&param->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&param->is_general_reward_hiden);
  is_general_reward_hiden = param->is_general_reward_hiden;
  if ( *(char *)(((unsigned __int64)&this->is_general_reward_hiden_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_general_reward_hiden_);
  this->is_general_reward_hiden_ = is_general_reward_hiden;
};

// Line 45: range 0000000014510652-00000000145109E3
int32_t __cdecl GadgetGeneralRewardComp::toBin(const GadgetGeneralRewardComp *const this, proto::GroupGadgetBin *bin)
{
  proto::GeneralRewardBin *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  proto::ItemParamBin *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::map<unsigned int,proto::GeneralRewardBin>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,proto::GeneralRewardBin>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  proto::GadgetGeneralRewardBin *proto_general_reward; // [rsp+30h] [rbp-50h]
  google::protobuf::Map<unsigned int,proto::GeneralRewardBin> *qulify_info_map; // [rsp+38h] [rbp-48h]
  const std::map<unsigned int,proto::GeneralRewardBin> *__for_range; // [rsp+40h] [rbp-40h]
  const std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-38h]
  const std::set<unsigned int> *__for_range_1; // [rsp+50h] [rbp-30h]
  const std::pair<unsigned int const,proto::GeneralRewardBin> *v14; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::GeneralRewardBin> >::type *uid; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::GeneralRewardBin> >::type *drop_reward; // [rsp+68h] [rbp-18h]

  proto_general_reward = proto::GroupGadgetBin::mutable_general_reward(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetGeneralRewardBin::set_resin(proto_general_reward, this->resin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetGeneralRewardBin::set_dead_time(proto_general_reward, this->dead_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetGeneralRewardBin::set_destroy_cd(proto_general_reward, this->destroy_cd_);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetGeneralRewardBin::set_item_limit_type(proto_general_reward, this->item_limit_type_);
  qulify_info_map = proto::GadgetGeneralRewardBin::mutable_qualify_info_map(proto_general_reward);
  __for_range = &this->qualify_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::GeneralRewardBin>::begin(&this->qualify_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GeneralRewardBin>::end(&this->qualify_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::GeneralRewardBin>(v14);
    drop_reward = (std::tuple_element<1,const std::pair<unsigned int const,proto::GeneralRewardBin> >::type *)std::get<1ul,unsigned int const,proto::GeneralRewardBin>(v14);
    v2 = google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::operator[](qulify_info_map, uid);
    proto::GeneralRewardBin::operator=(v2, drop_reward);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->remain_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->remain_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v3 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GadgetGeneralRewardBin::add_remain_uid_list(proto_general_reward, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v4 = proto::GadgetGeneralRewardBin::mutable_item_param(proto_general_reward);
  ItemParam::toBin(&this->item_param_, v4);
  __for_range_1 = &this->open_state_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->open_state_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GadgetGeneralRewardBin::add_open_state_list(proto_general_reward, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  return 0;
};

// Line 74: range 00000000145109E4-0000000014510EA3
int32_t __cdecl GadgetGeneralRewardComp::fromBin(GadgetGeneralRewardComp *const this, const proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t v7; // edx
  uint32_t v8; // edx
  std::map<unsigned int,proto::GeneralRewardBin>::mapped_type *v9; // rax
  const proto::ItemParamBin *v10; // rax
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+18h] [rbp-F8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+20h] [rbp-F0h]
  const proto::GadgetGeneralRewardBin *proto_general_reward; // [rsp+28h] [rbp-E8h]
  const google::protobuf::Map<unsigned int,proto::GeneralRewardBin> *__for_range; // [rsp+30h] [rbp-E0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-D0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+48h] [rbp-C8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+50h] [rbp-C0h]
  google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::const_reference p_uid; // [rsp+58h] [rbp-B8h]
  google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::const_iterator __for_begin; // [rsp+60h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::const_iterator __for_end; // [rsp+80h] [rbp-90h] BYREF
  char v23[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 state:95";
  *(_QWORD *)(v2 + 16) = GadgetGeneralRewardComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_general_reward = proto::GroupGadgetBin::general_reward(bin);
  v5 = proto::GadgetGeneralRewardBin::resin(proto_general_reward);
  if ( *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resin_);
  }
  this->resin_ = v5;
  v6 = proto::GadgetGeneralRewardBin::dead_time(proto_general_reward);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = v6;
  v7 = proto::GadgetGeneralRewardBin::destroy_cd(proto_general_reward);
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd_);
  }
  this->destroy_cd_ = v7;
  v8 = proto::GadgetGeneralRewardBin::item_limit_type(proto_general_reward);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type_);
  }
  this->item_limit_type_ = v8;
  std::map<unsigned int,proto::GeneralRewardBin>::clear(&this->qualify_info_map_);
  __for_range = proto::GadgetGeneralRewardBin::qualify_info_map(proto_general_reward);
  google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_uid = google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::const_iterator::operator*(&__for_begin);
    v9 = std::map<unsigned int,proto::GeneralRewardBin>::operator[](&this->qualify_info_map_, &p_uid->first);
    proto::GeneralRewardBin::operator=(v9, &p_uid->second);
    google::protobuf::Map<unsigned int,proto::GeneralRewardBin>::const_iterator::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->remain_uid_set_);
  __for_range_0 = proto::GadgetGeneralRewardBin::remain_uid_list(proto_general_reward);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::set<unsigned int>::insert(&this->remain_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  v10 = proto::GadgetGeneralRewardBin::item_param(proto_general_reward);
  ItemParam::fromBin(&this->item_param_, v10);
  __for_range_1 = proto::GadgetGeneralRewardBin::open_state_list(proto_general_reward);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_1;
    std::set<unsigned int>::insert(&this->open_state_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_1;
  }
  result = 0;
  if ( v23 == (char *)v2 )
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

// Line 104: range 0000000014510EA4-0000000014510ED8
int32_t __cdecl GadgetGeneralRewardComp::toClient(
        const GadgetGeneralRewardComp *const this,
        proto::SceneGadgetInfo *gadget_info)
{
  proto::GadgetGeneralRewardInfo *v2; // rdx

  v2 = proto::SceneGadgetInfo::mutable_general_reward(gadget_info);
  GadgetGeneralRewardComp::fillGeneralRewardInfo(this, v2);
  return 0;
};

// Line 110: range 0000000014510EDA-0000000014510F3E
int32_t __cdecl GadgetGeneralRewardComp::start(GadgetGeneralRewardComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->dead_time_ )
    GadgetGeneralRewardComp::startLifeTimer(this);
  return 0;
};

// Line 121: range 0000000014510F40-0000000014511610
int32_t __cdecl GadgetGeneralRewardComp::interactCheck(
        GadgetGeneralRewardComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  time_t Now; // rcx
  char v7; // al
  common::milog::MiLogStream *v8; // rcx
  int32_t result; // eax
  char v10; // al
  common::milog::MiLogStream *v11; // rcx
  uint32_t Uid; // edx
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v14; // rax
  PlayerItemComp *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerItemComp *ItemComp; // rax
  unsigned int value; // [rsp+28h] [rbp-88h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-80h] BYREF
  char v24[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 param:149";
  *(_QWORD *)(v3 + 16) = GadgetGeneralRewardComp::interactCheck;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !this->dead_time_ )
    goto LABEL_11;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( Now >= this->dead_time_ )
    v7 = 1;
  else
LABEL_11:
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/general_reward_comp.cpp",
      "interactCheck",
      124);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v23,
           (const char (*)[49])"[GeneralReward] chest lifetime is over, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 821;
  }
  else
  {
    if ( std::set<unsigned int>::empty(&this->open_state_set_) )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    value = Gadget::getState(this->gadget_);
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->open_state_set_, &value) )
      v10 = 1;
    else
LABEL_21:
      v10 = 0;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/general_reward_comp.cpp",
        "interactCheck",
        130);
      v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v23,
              (const char (*)[42])"[GeneralReward] no in open state gadget: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 820;
    }
    else
    {
      Uid = Player::getUid(player);
      ret = GadgetGeneralRewardComp::checkRewardIsRemained(this, Uid);
      if ( ret )
      {
        result = ret;
        goto LABEL_51;
      }
      BasicComp = Player::getBasicComp(player);
      if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x2Du) )
      {
        v14 = Player::getBasicComp(player);
        PlayerBasicComp::setOpenState(v14, 0x2Du, 1u, 1);
      }
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( param->resin_cost_type == RESIN_COST_TYPE_MATERIAL )
        goto LABEL_38;
      if ( *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !this->resin_ )
      {
LABEL_38:
        if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( param->resin_cost_type == RESIN_COST_TYPE_MATERIAL )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->item_param_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->item_param_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !this->item_param_.item_id )
            goto LABEL_47;
          if ( *(_BYTE *)(((unsigned __int64)&this->item_param_.count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_param_.count >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !this->item_param_.count )
          {
LABEL_47:
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/general_reward_comp.cpp",
              "interactCheck",
              160);
            v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v23,
                    (const char (*)[43])off_253E8260);
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    &this->item_param_.item_id);
            v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v17,
                    (const char (*)[13])" item_count=");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->item_param_.count);
            common::milog::MiLogStream::~MiLogStream(&v23);
            result = -1;
            goto LABEL_51;
          }
          ItemComp = Player::getItemComp(player);
          if ( PlayerItemComp::checkSubItem(ItemComp, &this->item_param_) )
          {
            result = 609;
            goto LABEL_51;
          }
        }
      }
      else
      {
        *(_QWORD *)(v3 + 32) = 0LL;
        *(_QWORD *)(v3 + 40) = 0LL;
        *(_DWORD *)(v3 + 32) = 106;
        *(_DWORD *)(v3 + 36) = this->resin_;
        v15 = Player::getItemComp(player);
        if ( PlayerItemComp::checkSubItem(v15, (const ItemParam *)(v3 + 32)) )
        {
          result = 660;
          goto LABEL_51;
        }
      }
      result = 0;
    }
  }
LABEL_51:
  if ( v24 == (char *)v3 )
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

// Line 173: range 0000000014511612-00000000145133F1
int32_t __cdecl GadgetGeneralRewardComp::interact(
        GadgetGeneralRewardComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rcx
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  int v19; // r15d
  common::milog::MiLogStream *v20; // rcx
  PlayerItemComp *v21; // rax
  PlayerItemComp *v23; // rax
  Scene *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v28; // rcx
  PlayerItemComp *v29; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v30; // rax
  uint32_t v31; // eax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  Scene *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  PlayerItemComp *v38; // r14
  __int64 v39; // rdx
  PlayerItemComp *v40; // r14
  __int64 v41; // rdx
  PlayerEventComp *EventComp; // r14
  uint32_t v43; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  uint32_t *p_source_entity_id; // rax
  uint32_t v46; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rdx
  int32_t *p_param1; // rax
  uint32_t v49; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  Group *v51; // rax
  PlayerWorld *v52; // r14
  uint32_t Uid; // r15d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  uint32_t GroupId; // eax
  uint32_t v56; // r14d
  uint32_t v57; // edx
  common::milog::MiLogStream *v58; // rcx
  PlayerMpComp *MpComp; // rax
  int Now; // esi
  int v61; // ecx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  int32_t result; // eax
  std::string v66; // [rsp+0h] [rbp-2C0h]
  unsigned int __args_1; // [rsp+2Ch] [rbp-294h] BYREF
  std::map<unsigned int,proto::GeneralRewardBin>::key_type __k; // [rsp+30h] [rbp-290h] BYREF
  uint32_t reward_id; // [rsp+34h] [rbp-28Ch]
  int32_t ret; // [rsp+38h] [rbp-288h]
  uint32_t drop_id; // [rsp+3Ch] [rbp-284h]
  uint32_t drop_num; // [rsp+40h] [rbp-280h]
  uint32_t entity_id; // [rsp+44h] [rbp-27Ch]
  uint32_t config_id; // [rsp+48h] [rbp-278h]
  uint32_t gadget_id; // [rsp+4Ch] [rbp-274h]
  const proto::GeneralRewardBin *drop_reward; // [rsp+50h] [rbp-270h]
  const google::protobuf::Map<unsigned int,unsigned int> *drop_map; // [rsp+58h] [rbp-268h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-260h]
  unsigned int id; // [rsp+68h] [rbp-258h] BYREF
  uint32_t drop_count; // [rsp+6Ch] [rbp-254h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+70h] [rbp-250h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+90h] [rbp-230h] BYREF
  common::milog::MiLogStream v83; // [rsp+B0h] [rbp-210h] BYREF
  char v84[496]; // [rsp+D0h] [rbp-1F0h] BYREF

  *(&v66._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v66._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v66._M_string_length = (std::string::size_type)param;
  v4 = (unsigned __int64)v84;
  v66._M_dataplus._M_p = v84;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 1 10 holder:181 48 8 17 output_result:207 80 16 13 scene_ptr:182 112 16 13 world_ptr:188 1"
                        "44 16 13 cost_item:277 176 16 13 group_ptr:298 208 16 11 evt_ptr:305 240 24 10 reason:195 304 24"
                        " 18 item_param_vec:254 368 40 14 drop_param:262";
  *(_QWORD *)(v4 + 16) = GadgetGeneralRewardComp::interact;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = -218959360;
  v6[536862729] = 62194;
  v6[536862730] = -218959360;
  v6[536862731] = 62194;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  common::milog::MiLogStream::create(
    &v83,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/general_reward_comp.cpp",
    "interact",
    174);
  v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v83,
         (const char (*)[34])"[GeneralReward] interact gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v83);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(GadgetGeneralRewardComp *const, Player *, std::string::size_type))v8)(
         this,
         player,
         v66._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gadget/general_reward_comp.cpp",
      "interact",
      177);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v83,
           (const char (*)[47])"[GeneralReward] interactCheck failed, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v83);
    v3 = -1;
    goto LABEL_143;
  }
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v83, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x613u, v66);
  std::string::~string(&v83);
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v4 + 80));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/general_reward_comp.cpp",
      "interact",
      185);
    v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v83,
            (const char (*)[43])"[GeneralReward] scene_ptr is null, gadget:");
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
      v11,
      *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
    common::milog::MiLogStream::~MiLogStream(&v83);
    v3 = -1;
    goto LABEL_142;
  }
  v12 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  v13 = *(_QWORD *)v12 + 64LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v13)(v4 + 112, v12);
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/general_reward_comp.cpp",
      "interact",
      191);
    v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v83,
            (const char (*)[43])"[GeneralReward] world_ptr is null, gadget:");
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
      v14,
      *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
    common::milog::MiLogStream::~MiLogStream(&v83);
    v3 = -1;
    goto LABEL_141;
  }
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ActionReason::ActionReason(
    (ActionReason *const)(v4 + 240),
    ACTION_REASON_TAKE_GENERAL_REWARD,
    *(data::ItemLimitType *)(*(&v66._anon_0._M_allocated_capacity + 1) + 128));
  if ( *(char *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 224) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(*(&v66._anon_0._M_allocated_capacity + 1) + 224);
  *(_BYTE *)(v4 + 260) = *(_BYTE *)(*(&v66._anon_0._M_allocated_capacity + 1) + 224);
  __k = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
  drop_reward = std::map<unsigned int,proto::GeneralRewardBin>::operator[](
                  (std::map<unsigned int,proto::GeneralRewardBin> *const)(*(&v66._anon_0._M_allocated_capacity + 1) + 32),
                  &__k);
  if ( !proto::GeneralRewardBin::drop_id(drop_reward) )
  {
    if ( proto::GeneralRewardBin::reward_id(drop_reward) )
    {
      reward_id = proto::GeneralRewardBin::reward_id(drop_reward);
      ItemComp = Player::getItemComp((Player *const)v66._anon_0._M_allocated_capacity);
      ret = PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v4 + 240));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/general_reward_comp.cpp",
          "interact",
          238);
        v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v83,
                (const char (*)[50])"[GeneralReward] checkGrantReward failed, gadget: ");
        if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
          v28,
          *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
        common::milog::MiLogStream::~MiLogStream(&v83);
        v3 = ret;
        goto LABEL_141;
      }
      v29 = Player::getItemComp((Player *const)v66._anon_0._M_allocated_capacity);
      PlayerItemComp::grantReward(v29, reward_id, (const ActionReason *)(v4 + 240), 0LL);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/general_reward_comp.cpp",
        "interact",
        246);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        &v83,
        (const char (*)[53])"[GeneralReward] both drop_id and reward_id are empty");
      common::milog::MiLogStream::~MiLogStream(&v83);
    }
    goto LABEL_66;
  }
  drop_id = proto::GeneralRewardBin::drop_id(drop_reward);
  drop_num = proto::GeneralRewardBin::drop_num(drop_reward);
  if ( drop_num )
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 304));
    *(OutputResult *)(v4 + 48) = DropUtils::dropAndSplitItems(
                                   (Player *)v66._anon_0._M_allocated_capacity,
                                   drop_id,
                                   drop_num,
                                   (const ActionReason *)(v4 + 240),
                                   (std::vector<ItemParam> *)(v4 + 304));
    if ( *(_DWORD *)(v4 + 48) )
    {
      LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v4 + 48));
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        LogLevel,
        "./src/gadget/general_reward_comp.cpp",
        "interact",
        210);
      v16 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v83,
              (const char (*)[48])"[GeneralReward] dropAndSplitItems failed, uid: ");
      __k = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &__k);
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" ,gadget:");
      if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
        v18,
        *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
      common::milog::MiLogStream::~MiLogStream(&v83);
      v3 = *(_DWORD *)(v4 + 48);
      v19 = 0;
LABEL_57:
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 304));
      if ( v19 != 1 )
        goto LABEL_141;
      goto LABEL_66;
    }
    DropParam::DropParam((DropParam *const)(v4 + 368));
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (unsigned int)Entity::buildDropParamForPlayer(
                         *(Entity *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8),
                         drop_id,
                         drop_num,
                         (Player *)v66._anon_0._M_allocated_capacity,
                         v4 + 368) )
    {
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/general_reward_comp.cpp",
        "interact",
        217);
      v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v83,
              (const char (*)[57])"[GeneralReward] buildDropParamForPlayer failed, gadget: ");
      if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_43:
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
        v20,
        *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
      common::milog::MiLogStream::~MiLogStream(&v83);
      v3 = -1;
      v19 = 0;
      goto LABEL_57;
    }
    if ( *(char *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 168) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(*(&v66._anon_0._M_allocated_capacity + 1) + 168);
    if ( *(_BYTE *)(*(&v66._anon_0._M_allocated_capacity + 1) + 168)
      && (v21 = Player::getItemComp((Player *const)v66._anon_0._M_allocated_capacity),
          !PlayerItemComp::checkAddItemBatch(
             v21,
             (const std::vector<ItemParam> *)(v4 + 304),
             (const ActionReason *)(v4 + 240))) )
    {
      v23 = Player::getItemComp((Player *const)v66._anon_0._M_allocated_capacity);
      PlayerItemComp::addItemBatch(
        v23,
        (const std::vector<ItemParam> *)(v4 + 304),
        (const ActionReason *)(v4 + 240),
        0LL);
    }
    else
    {
      v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( Scene::dropItems(
             v24,
             (const std::vector<ItemParam> *)(v4 + 304),
             (const DropParam *)(v4 + 368),
             (const ActionReason *)(v4 + 240)) )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/general_reward_comp.cpp",
          "interact",
          227);
        v25 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v83,
                (const char (*)[47])"[GeneralReward]  scene dropItems failed, uid: ");
        __k = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &__k);
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" ,gadget: ");
        if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_43;
      }
    }
    v19 = 1;
    goto LABEL_57;
  }
LABEL_66:
  drop_map = proto::GeneralRewardBin::drop_map(drop_reward);
  __for_range = drop_map;
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, drop_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    v30 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
      (google::protobuf::MapPair<unsigned int,unsigned int> *const)&id,
      v30);
    if ( !drop_count )
      goto LABEL_84;
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 304));
    *(OutputResult *)(v4 + 48) = DropUtils::dropAndSplitItems(
                                   (Player *)v66._anon_0._M_allocated_capacity,
                                   id,
                                   drop_count,
                                   (const ActionReason *)(v4 + 240),
                                   (std::vector<ItemParam> *)(v4 + 304));
    if ( *(_DWORD *)(v4 + 48) )
    {
      v31 = OutputResult::getLogLevel((const OutputResult *const)(v4 + 48));
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        v31,
        "./src/gadget/general_reward_comp.cpp",
        "interact",
        258);
      v32 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v83,
              (const char (*)[48])"[GeneralReward] dropAndSplitItems failed, uid: ");
      __k = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &__k);
      v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])" ,gadget:");
      if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_82:
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
        v34,
        *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
      common::milog::MiLogStream::~MiLogStream(&v83);
      goto LABEL_83;
    }
    DropParam::DropParam((DropParam *const)(v4 + 368));
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (unsigned int)Entity::buildDropParamForPlayer(
                         *(Entity *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8),
                         id,
                         drop_count,
                         (Player *)v66._anon_0._M_allocated_capacity,
                         v4 + 368) )
    {
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/general_reward_comp.cpp",
        "interact",
        265);
      v34 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v83,
              (const char (*)[57])"[GeneralReward] buildDropParamForPlayer failed, gadget: ");
      if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_82;
    }
    v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    if ( Scene::dropItems(
           v35,
           (const std::vector<ItemParam> *)(v4 + 304),
           (const DropParam *)(v4 + 368),
           (const ActionReason *)(v4 + 240)) )
    {
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/general_reward_comp.cpp",
        "interact",
        271);
      v36 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v83,
              (const char (*)[47])"[GeneralReward]  scene dropItems failed, uid: ");
      __k = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &__k);
      v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v37, (const char (*)[11])" ,gadget: ");
      if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_82;
    }
LABEL_83:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 304));
LABEL_84:
    google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)&id);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  *(_DWORD *)(v4 + 144) = 0;
  *(_DWORD *)(v4 + 148) = 0;
  *(_DWORD *)(v4 + 152) = 0;
  *(_DWORD *)(v4 + 156) = 0;
  if ( *(_BYTE *)((v66._M_string_length >> 3) + 0x7FFF8000) != 0
    && (char)((v66._M_string_length & 7) + 3) >= *(_BYTE *)((v66._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)v66._M_string_length == 5 )
    goto LABEL_92;
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !*(_DWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 16) )
  {
LABEL_92:
    if ( *(_BYTE *)((v66._M_string_length >> 3) + 0x7FFF8000) != 0
      && (char)((v66._M_string_length & 7) + 3) >= *(_BYTE *)((v66._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)v66._M_string_length == 5 )
    {
      v40 = Player::getItemComp((Player *const)v66._anon_0._M_allocated_capacity);
      SubItemReason::SubItemReason((SubItemReason *const)(v4 + 48), (const ActionReason *)(v4 + 240));
      PlayerItemComp::subItem(
        v40,
        (const ItemParam *)(*(&v66._anon_0._M_allocated_capacity + 1) + 152),
        (const SubItemReason *)(v4 + 48));
      if ( *(_WORD *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 152) >> 3) + 0x7FFF8000) )
        __asan_report_load16(*(&v66._anon_0._M_allocated_capacity + 1) + 152);
      v41 = *(_QWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 160);
      *(_QWORD *)(v4 + 144) = *(_QWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 152);
      *(_QWORD *)(v4 + 152) = v41;
    }
  }
  else
  {
    *(_QWORD *)(v4 + 208) = 0LL;
    *(_QWORD *)(v4 + 216) = 0LL;
    *(_DWORD *)(v4 + 208) = 106;
    *(_DWORD *)(v4 + 212) = *(_DWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 16);
    v38 = Player::getItemComp((Player *const)v66._anon_0._M_allocated_capacity);
    SubItemReason::SubItemReason((SubItemReason *const)(v4 + 48), (const ActionReason *)(v4 + 240));
    PlayerItemComp::subItem(v38, (const ItemParam *)(v4 + 208), (const SubItemReason *)(v4 + 48));
    v39 = *(_QWORD *)(v4 + 216);
    *(_QWORD *)(v4 + 144) = *(_QWORD *)(v4 + 208);
    *(_QWORD *)(v4 + 152) = v39;
  }
  __k = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
  std::set<unsigned int>::erase((std::set<unsigned int> *const)(*(&v66._anon_0._M_allocated_capacity + 1) + 80), &__k);
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::setState(*(Gadget *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8), 0x66u, 0, 1);
  EventComp = Player::getEventComp((Player *const)v66._anon_0._M_allocated_capacity);
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __k = Entity::getGroupId(*(const Entity *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __args_1 = Gadget::getGadgetId(*(const Gadget *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
  common::tools::perf::make_shared<TakeGeneralRewardEvent,unsigned int,unsigned int>(
    (unsigned int *)(v4 + 176),
    &__args_1,
    &__k,
    &__args_1);
  std::shared_ptr<BaseEvent>::shared_ptr<TakeGeneralRewardEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v4 + 208),
    (std::shared_ptr<TakeGeneralRewardEvent> *)(v4 + 176));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 208));
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 208));
  std::shared_ptr<TakeGeneralRewardEvent>::~shared_ptr((std::shared_ptr<TakeGeneralRewardEvent> *const)(v4 + 176));
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v4 + 176));
  entity_id = Entity::getEntityId(*(const Entity *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  config_id = Entity::getConfigId(*(const Entity *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
  if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_id = Gadget::getGadgetId(*(const Gadget *const *)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 176)) )
  {
    EventUtil::createEvent((data::EventType)(v4 + 208));
    if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v4 + 208)) )
    {
      v43 = entity_id;
      v44 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
      p_source_entity_id = &v44->source_entity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(p_source_entity_id);
      }
      v44->source_entity_id = v43;
      v46 = config_id;
      v47 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
      p_param1 = &v47->param1;
      if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param1);
      }
      v47->param1 = v46;
      v49 = gadget_id;
      v50 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&v50->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v50->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        v50 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v50->param2);
      }
      v50->param2 = v49;
      v51 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      Group::handleEvent(v51, (EventPtr *)(v4 + 208));
    }
    v52 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    Uid = Player::getUid((const Player *const)v66._anon_0._M_allocated_capacity);
    v54 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
    GroupId = Group::getGroupId(v54);
    PlayerWorld::onInteractRewardPoint(v52, GroupId, config_id, Uid);
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 208));
  }
  v56 = proto::GeneralRewardBin::reward_id(drop_reward);
  v57 = proto::GeneralRewardBin::drop_id(drop_reward);
  GadgetGeneralRewardComp::logTakeGeneralReward(
    *((GadgetGeneralRewardComp *const *)&v66._anon_0._M_allocated_capacity + 1),
    (Player *)v66._anon_0._M_allocated_capacity,
    v57,
    v56,
    (const ItemParam *)(v4 + 144));
  if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(*(&v66._anon_0._M_allocated_capacity + 1) + 80)) )
  {
    GadgetGeneralRewardComp::destroySelf(*((GadgetGeneralRewardComp *const *)&v66._anon_0._M_allocated_capacity + 1));
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/general_reward_comp.cpp",
      "interact",
      323);
    v58 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
            &v83,
            (const char (*)[75])"[GeneralReward] remain_uid_set_ is empty, destroy general reward, gadget: ");
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_139;
  }
  MpComp = Player::getMpComp((Player *const)v66._anon_0._M_allocated_capacity);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
      && (char)(((v66._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1)
                                                                            + 20) >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !*(_DWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 20) )
    {
      if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_DWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 24) )
      {
        Now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v61 = Now + *(_DWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 24);
        if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
          && (char)(((v66._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 20) >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(*(&v66._anon_0._M_allocated_capacity + 1) + 20);
        }
        *(_DWORD *)(*(&v66._anon_0._M_allocated_capacity + 1) + 20) = v61;
        GadgetGeneralRewardComp::startLifeTimer(*((GadgetGeneralRewardComp *const *)&v66._anon_0._M_allocated_capacity
                                                + 1));
      }
    }
    GadgetGeneralRewardComp::notifyGeneralRewardInfo(*((GadgetGeneralRewardComp *const *)&v66._anon_0._M_allocated_capacity
                                                     + 1));
  }
  else
  {
    GadgetGeneralRewardComp::destroySelf(*((GadgetGeneralRewardComp *const *)&v66._anon_0._M_allocated_capacity + 1));
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/general_reward_comp.cpp",
      "interact",
      341);
    v58 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
            &v83,
            (const char (*)[62])"[GeneralReward] single type, destroy general reward, gadget: ");
    if ( *(_BYTE *)(((*(&v66._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_139:
    v62 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
            v58,
            *(const Gadget **)(*(&v66._anon_0._M_allocated_capacity + 1) + 8));
    v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v62, (const char (*)[14])" ,owner_uid: ");
    v64 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    __k = Scene::getOwnerUid(v64);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &__k);
    common::milog::MiLogStream::~MiLogStream(&v83);
  }
  v3 = 0;
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 176));
LABEL_141:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 112));
LABEL_142:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 80));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
LABEL_143:
  result = v3;
  if ( v66._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 349: range 00000000145133F2-00000000145134FE
__int64 __fastcall GadgetGeneralRewardComp::checkRewardIsRemained(
        const GadgetGeneralRewardComp *const this,
        uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 player_uid:348";
  *(_QWORD *)(v2 + 16) = GadgetGeneralRewardComp::checkRewardIsRemained;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = player_uid;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::GeneralRewardBin> const,unsigned int>(
          &this->qualify_info_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    result = 820LL;
  }
  else if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &this->remain_uid_set_,
               (const unsigned int *)(v2 + 32)) )
  {
    result = 822LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v6 == (char *)v2 )
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

// Line 364: range 0000000014513500-0000000014513809
int32_t __cdecl GadgetGeneralRewardComp::fillGeneralRewardInfo(
        const GadgetGeneralRewardComp *const this,
        proto::GadgetGeneralRewardInfo *proto_general_reward_info)
{
  google::protobuf::uint32 *v2; // rdx
  const std::pair<unsigned int const,proto::GeneralRewardBin> *v3; // rax
  proto::ItemParam *v4; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,proto::GeneralRewardBin> *__for_range_0; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::GeneralRewardBin> >::type *uid_0; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::GeneralRewardBin> >::type *_; // [rsp+48h] [rbp-88h]
  std::pair<unsigned int const,proto::GeneralRewardBin> v12; // [rsp+50h] [rbp-80h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetGeneralRewardInfo::set_resin(proto_general_reward_info, this->resin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetGeneralRewardInfo::set_dead_time(proto_general_reward_info, this->dead_time_);
  __for_range = &this->remain_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->remain_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->remain_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GadgetGeneralRewardInfo::add_remain_uid_list(proto_general_reward_info, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->qualify_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::GeneralRewardBin>::begin(&this->qualify_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GeneralRewardBin>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin> >::_Self *)&__for_end) )
  {
    v3 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin> > *const)&__for_begin);
    std::pair<unsigned int const,proto::GeneralRewardBin>::pair(&v12, v3);
    uid_0 = std::get<0ul,unsigned int const,proto::GeneralRewardBin>(&v12);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::GeneralRewardBin> >::type *)std::get<1ul,unsigned int const,proto::GeneralRewardBin>(&v12);
    if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GadgetGeneralRewardInfo::add_qualify_uid_list(proto_general_reward_info, *uid_0);
    std::pair<unsigned int const,proto::GeneralRewardBin>::~pair(&v12);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GeneralRewardBin> > *const)&__for_begin);
  }
  v4 = proto::GadgetGeneralRewardInfo::mutable_item_param(proto_general_reward_info);
  ItemParam::toClient(&this->item_param_, v4);
  return 0;
};

// Line 384: range 000000001451380A-0000000014513A0E
void __cdecl GadgetGeneralRewardComp::notifyGeneralRewardInfo(GadgetGeneralRewardComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::GadgetGeneralRewardInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto::GadgetGeneralRewardInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::GadgetGeneralRewardInfo *v7; // rdx
  Entity *gadget; // r14
  std::shared_ptr<proto::GadgetGeneralRewardInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:385";
  *(_QWORD *)(v1 + 16) = GadgetGeneralRewardComp::notifyGeneralRewardInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::GadgetGeneralRewardInfoNotify>();
  v4 = std::__shared_ptr_access<proto::GadgetGeneralRewardInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GadgetGeneralRewardInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
  proto::GadgetGeneralRewardInfoNotify::set_entity_id(v4, EntityId);
  v6 = std::__shared_ptr_access<proto::GadgetGeneralRewardInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GadgetGeneralRewardInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v7 = proto::GadgetGeneralRewardInfoNotify::mutable_general_reward_info(v6);
  if ( !GadgetGeneralRewardComp::fillGeneralRewardInfo(this, v7) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget = (Entity *)this->gadget_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GadgetGeneralRewardInfoNotify>(&__r);
    Entity::notifyViewingPlayers(gadget, (common::minet::ConstMessagePtr *)&__r, 1);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::GadgetGeneralRewardInfoNotify>::~shared_ptr((std::shared_ptr<proto::GadgetGeneralRewardInfoNotify> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 0000000014513C60-0000000014514148
void __cdecl GadgetGeneralRewardComp::startLifeTimer(GadgetGeneralRewardComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  SceneUnixTimer *v5; // rax
  uint32_t life_time; // [rsp+18h] [rbp-D8h]
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<Gadget> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v9; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:396 64 16 14 gadget_wtr:415";
  *(_QWORD *)(v1 + 16) = GadgetGeneralRewardComp::startLifeTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/general_reward_comp.cpp",
      "startLifeTimer",
      399);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v10,
      (const char (*)[34])"[GeneralReward] scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    life_time = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now < this->dead_time_ )
      life_time = this->dead_time_ - now;
    if ( std::operator!=<SceneUnixTimer>(0LL, &this->life_timer_ptr_) )
    {
      v4 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->life_timer_ptr_);
      common::tools::MiTimer::cancel(v4);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}>(
      &v9,
      (GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->life_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v9);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v9);
    GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}::~startLifeTimer((GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(0LL, &this->life_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/general_reward_comp.cpp",
        "startLifeTimer",
        418);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v10,
        (const char (*)[45])"[GeneralReward] create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->life_timer_ptr_);
      if ( SceneUnixTimer::startS(v5, life_time, 0, "./src/gadget/general_reward_comp.cpp", "startLifeTimer", 422) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/general_reward_comp.cpp",
          "startLifeTimer",
          424);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v10,
          (const char (*)[40])"[GeneralReward] life_timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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

// Line 415: range 0000000014513A10-0000000014513C43
void __cdecl GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}::operator()(
        const GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:415 64 16 11 obj_ptr:415";
  *(_QWORD *)(v2 + 16) = GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/general_reward_comp.cpp",
      "operator()",
      415);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetGeneralRewardComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<GadgetGeneralRewardComp>((const std::shared_ptr<GadgetGeneralRewardComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetGeneralRewardComp::onLifeTimer(v5, now_ms);
    }
    std::shared_ptr<GadgetGeneralRewardComp>::~shared_ptr((std::shared_ptr<GadgetGeneralRewardComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
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
};

// Line 415: range 00000000145F3C64-00000000145F3C89
void __cdecl GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}::startLifeTimer(
        GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *const this,
        GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 415: range 00000000145F5EC8-00000000145F5EED
void __cdecl GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}::startLifeTimer(
        GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *const this,
        const GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 415: range 0000000014513C44-0000000014513C5E
void __cdecl GadgetGeneralRewardComp::startLifeTimer(void)::{lambda(unsigned long)#1}::~startLifeTimer(
        GadgetGeneralRewardComp::startLifeTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 430: range 000000001451414A-00000000145143AF
void __cdecl GadgetGeneralRewardComp::onLifeTimer(GadgetGeneralRewardComp *const this, uint64_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 owner_uid:431 64 16 13 scene_ptr:432";
  *(_QWORD *)(v2 + 16) = GadgetGeneralRewardComp::onLifeTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Scene::getOwnerUid(v5);
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/general_reward_comp.cpp",
    "onLifeTimer",
    437);
  v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
         &v9,
         (const char (*)[61])"[GeneralReward] onLifeTimer destroy general reward, gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" ,owner_uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v9);
  GadgetGeneralRewardComp::destroySelf(this);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
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

// Line 443: range 00000000145143B0-0000000014514D25
void __cdecl GadgetGeneralRewardComp::destroySelf(GadgetGeneralRewardComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Player *v7; // rax
  PlayerEventComp *EventComp; // r14
  Gadget *gadget; // r15
  _QWORD *baseclass_0; // rax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(Gadget *, VisionContext *); // r14
  uint32_t v13; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  uint32_t *p_source_entity_id; // rax
  uint32_t v16; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  int32_t *p_param1; // rax
  Group *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  PlayerWorld *v22; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t GroupId; // eax
  unsigned int __args_0; // [rsp+18h] [rbp-148h] BYREF
  uint32_t entity_id; // [rsp+1Ch] [rbp-144h]
  uint32_t config_id; // [rsp+20h] [rbp-140h]
  VisionContext v28; // [rsp+24h] [rbp-13Ch] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-130h] BYREF
  char v30[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 16 13 scene_ptr:445 64 16 20 owner_player_ptr:452 96 16 13 event_ptr:459 128 16 13 group_pt"
                        "r:463 160 16 11 evt_ptr:473 192 16 13 world_ptr:481";
  *(_QWORD *)(v1 + 16) = GadgetGeneralRewardComp::destroySelf;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -202178560;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/general_reward_comp.cpp",
    "destroySelf",
    444);
  v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v29,
         (const char (*)[38])"[GeneralReward] destroySelf, gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v29);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/general_reward_comp.cpp",
      "destroySelf",
      448);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v29,
           (const char (*)[39])"[GeneralReward] scene is null, gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Scene::getOwnPlayer((const Scene *const)(v1 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/general_reward_comp.cpp",
        "destroySelf",
        455);
      v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v29,
             (const char (*)[47])"[GeneralReward] getOwnerPlayer failed, gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __args_0 = Entity::getGroupId((const Entity *const)this->gadget_);
      common::tools::perf::make_shared<GeneralRewardDestroyEvent,unsigned int>((unsigned int *)(v1 + 192), &__args_0);
      std::shared_ptr<BaseEvent>::shared_ptr<GeneralRewardDestroyEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v1 + 96),
        (std::shared_ptr<GeneralRewardDestroyEvent> *)(v1 + 192));
      std::shared_ptr<GeneralRewardDestroyEvent>::~shared_ptr((std::shared_ptr<GeneralRewardDestroyEvent> *const)(v1 + 192));
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      EventComp = Player::getEventComp(v7);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)(v1 + 192),
        (const std::shared_ptr<BaseEvent> *)(v1 + 96));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v1 + 192));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getGroup((const Entity *const)(v1 + 128));
      entity_id = Entity::getEntityId((const Entity *const)this->gadget_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      config_id = Entity::getConfigId((const Entity *const)this->gadget_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Gadget::setEnableInteract(this->gadget_, 0, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Creature::changeLifeState(this->gadget_, LIFE_DEAD, 0LL, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gadget = this->gadget_;
      baseclass_0 = gadget->baseclass_0;
      if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
        baseclass_0 = (_QWORD *)__asan_report_load8();
      v11 = *baseclass_0 + 128LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(void (__fastcall **)(Gadget *, VisionContext *))v11;
      VisionContext::VisionContext(&v28, VISION_DIE);
      v12(gadget, &v28);
      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 128)) )
      {
        EventUtil::createEvent((data::EventType)(v1 + 160));
        if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 160)) )
        {
          v13 = entity_id;
          v14 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          p_source_entity_id = &v14->source_entity_id;
          if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(p_source_entity_id);
          }
          v14->source_entity_id = v13;
          v16 = config_id;
          v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          p_param1 = &v17->param1;
          if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param1);
          }
          v17->param1 = v16;
          v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          Group::handleEvent(v19, (EventPtr *)(v1 + 160));
        }
        v20 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8();
        v21 = *(_QWORD *)v20 + 64LL;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v21)(v1 + 192, v20);
        if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 192)) )
        {
          v22 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          GroupId = Group::getGroupId(v23);
          PlayerWorld::onDestroyRewardPoint(v22, GroupId, config_id);
        }
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 192));
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 160));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 128));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 490: range 0000000014514D26-0000000014515064
void __cdecl GadgetGeneralRewardComp::logTakeGeneralReward(
        GadgetGeneralRewardComp *const this,
        Player *player,
        uint32_t drop_id,
        uint32_t reward_id,
        const ItemParam *cost_item)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Entity *gadget; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto_log::EntityLog *v15; // rax
  Gadget *v16; // r14
  proto_log::LogItemParam *item; // [rsp+28h] [rbp-88h]
  std::shared_ptr<google::protobuf::Message> p_log_message_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 11 log_ptr:491";
  *(_QWORD *)(v5 + 16) = GadgetGeneralRewardComp::logTakeGeneralReward;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeGeneralReward>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  proto_log::PlayerLogBodyTakeGeneralReward::set_gadget_id(v8, GadgetId);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyTakeGeneralReward::set_drop_id(v10, drop_id);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyTakeGeneralReward::set_reward_id(v11, reward_id);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  item = proto_log::PlayerLogBodyTakeGeneralReward::mutable_cost_item(v12);
  if ( *(_BYTE *)(((unsigned __int64)cost_item >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost_item & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_item >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::LogItemParam::set_item_id(item, cost_item->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cost_item + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::LogItemParam::set_count(item, cost_item->count);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = (Entity *)this->gadget_;
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeGeneralReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  v15 = proto_log::PlayerLogBodyTakeGeneralReward::mutable_entity_log(v14);
  Entity::getEntityLog(gadget, v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v16 = this->gadget_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeGeneralReward,void>(
    &p_log_message_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTakeGeneralReward> *)(v5 + 32));
  Gadget::logGadgetInteract(v16, player, &p_log_message_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_message_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyTakeGeneralReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeGeneralReward> *const)(v5 + 32));
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
