// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/msg/gcg_message.cpp

// Line 18: range 000000000D7813A8-000000000D781551
int32_t __cdecl GCGMsgPack::toClient(
        const GCGMsgPack *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessagePack *proto)
{
  std::__shared_ptr_access<GCGMessage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<GCGMessage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  int (**vptr_GCGMessage)(...); // rax
  int (*v6)(...); // r12
  proto::GCGMessage *v7; // rax
  std::vector<std::shared_ptr<GCGMessage>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<std::shared_ptr<GCGMessage>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<std::shared_ptr<GCGMessage>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::shared_ptr<GCGMessage> *msg_ptr; // [rsp+38h] [rbp-18h]

  __for_range = &this->msg_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGMessage>>::begin(&this->msg_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGMessage>>::end(&this->msg_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGMessage> const*,std::vector<std::shared_ptr<GCGMessage>>>(
            &__for_begin,
            &__for_end) )
  {
    msg_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMessage> const*,std::vector<std::shared_ptr<GCGMessage>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGMessage>(msg_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<GCGMessage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMessage,(__gnu_cxx::_Lock_policy)2,false,false> *const)msg_ptr);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3);
      vptr_GCGMessage = v4->_vptr_GCGMessage;
      if ( *(_BYTE *)(((unsigned __int64)v4->_vptr_GCGMessage >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4->_vptr_GCGMessage);
      v6 = *vptr_GCGMessage;
      v7 = proto::GCGMessagePack::add_msg_list(proto);
      v6(v4, (unsigned int)target_controller_id, v7);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMessage> const*,std::vector<std::shared_ptr<GCGMessage>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_type);
  }
  proto::GCGMessagePack::set_action_type(proto, this->action_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMessagePack::set_controller_id(proto, this->controller_id);
  return 0;
};

// Line 32: range 000000000D781552-000000000D7816F5
int32_t __cdecl GCGMsgTokenChange::toClient(
        const GCGMsgTokenChange *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgTokenChange *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_token_change(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgTokenChange::set_card_guid(msg, this->card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->token_type);
  }
  proto::GCGMsgTokenChange::set_token_type(msg, this->token_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->before >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->before >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->before);
  }
  proto::GCGMsgTokenChange::set_before(msg, this->before);
  if ( *(_BYTE *)(((unsigned __int64)&this->after >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->after >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->after);
  }
  proto::GCGMsgTokenChange::set_after(msg, this->after);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgTokenChange::set_reason(msg, this->reason);
  return 0;
};

// Line 43: range 000000000D7816F6-000000000D781921
int32_t __cdecl GCGMsgPhaseChange::toClient(
        const GCGMsgPhaseChange *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *v3; // rax
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type v4; // ebx
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *v6; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+2Ch] [rbp-54h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-48h] BYREF
  proto::GCGMsgPhaseChange *msg; // [rsp+40h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+48h] [rbp-38h]
  const std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+50h] [rbp-30h]
  const std::pair<const proto::GCGControllerValue,unsigned int> *v14; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *id; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *count; // [rsp+68h] [rbp-18h]

  msg = proto::GCGMessage::mutable_phase_change(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->before_phase >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->before_phase >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->before_phase);
  }
  proto::GCGMsgPhaseChange::set_before_phase(msg, this->before_phase);
  if ( *(_BYTE *)(((unsigned __int64)&this->after_phase >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->after_phase >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->after_phase);
  }
  proto::GCGMsgPhaseChange::set_after_phase(msg, this->after_phase);
  proto_map = proto::GCGMsgPhaseChange::mutable_allow_controller_map(msg);
  __for_range = &this->allow_controller_map;
  __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(&this->allow_controller_map)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(&this->allow_controller_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,proto::GCGControllerValue const,unsigned int>(v14);
    v3 = (std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *)std::get<1ul,proto::GCGControllerValue const,unsigned int>(v14);
    count = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v4 = *count;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    key = *id;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, &key);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v4;
    std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 56: range 000000000D781922-000000000D781A9F
int32_t __cdecl GCGMsgAddCards::toClient(
        const GCGMsgAddCards *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGMsgAddCards *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_add_cards(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgAddCards::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->zone);
  }
  proto::GCGMsgAddCards::set_zone(msg, this->zone);
  v3 = proto::GCGMsgAddCards::mutable_card_guid_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_guid_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pos);
  }
  proto::GCGMsgAddCards::set_pos(msg, this->pos);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgAddCards::set_reason(msg, this->reason);
  return 0;
};

// Line 67: range 000000000D781AA0-000000000D781BCD
int32_t __cdecl GCGMsgRemoveCards::toClient(
        const GCGMsgRemoveCards *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGMsgRemoveCards *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_remove_cards(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgRemoveCards::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->zone);
  }
  proto::GCGMsgRemoveCards::set_zone(msg, this->zone);
  v3 = proto::GCGMsgRemoveCards::mutable_card_guid_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_guid_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgRemoveCards::set_reason(msg, this->reason);
  return 0;
};

// Line 77: range 000000000D781BCE-000000000D781D65
int32_t __cdecl GCGMsgMoveCard::toClient(
        const GCGMsgMoveCard *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  proto::GCGMsgMoveCard *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_move_card(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgMoveCard::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->from);
  }
  proto::GCGMsgMoveCard::set_from(msg, this->from);
  if ( *(_BYTE *)(((unsigned __int64)&this->to >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->to >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->to);
  }
  proto::GCGMsgMoveCard::set_to(msg, this->to);
  v3 = proto::GCGMsgMoveCard::mutable_card_guid_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_guid_vec, v3);
  v4 = proto::GCGMsgMoveCard::mutable_fail_guid_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fail_guid_vec, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgMoveCard::set_reason(msg, this->reason);
  return 0;
};

// Line 89: range 000000000D781D66-000000000D781E71
int32_t __cdecl GCGMsgSelectOnStage::toClient(
        const GCGMsgSelectOnStage *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgSelectOnStage *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_select_on_stage(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgSelectOnStage::set_card_guid(msg, this->card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgSelectOnStage::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgSelectOnStage::set_reason(msg, this->reason);
  return 0;
};

// Line 98: range 000000000D781E72-000000000D781F7D
int32_t __cdecl GCGMsgSelectOnStageByEffect::toClient(
        const GCGMsgSelectOnStageByEffect *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgSelectOnStageByEffect *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_select_on_stage_by_effect(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgSelectOnStageByEffect::set_card_guid(msg, this->card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgSelectOnStageByEffect::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgSelectOnStageByEffect::set_skill_id(msg, this->skill_id);
  return 0;
};

// Line 107: range 000000000D781F7E-000000000D78210A
int32_t __cdecl GCGMsgDiceRoll::toClient(
        const GCGMsgDiceRoll *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::uint32 v3; // eax
  proto::GCGDiceSideType *v5; // rax
  proto::GCGDiceSideType *v6; // rdx
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+38h] [rbp-18h] BYREF
  proto::GCGMsgDiceRoll *msg; // [rsp+40h] [rbp-10h]
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+48h] [rbp-8h]

  msg = proto::GCGMessage::mutable_dice_roll(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgDiceRoll::set_controller_id(msg, this->controller_id);
  v3 = std::vector<proto::GCGDiceSideType>::size(&this->dice_vec);
  proto::GCGMsgDiceRoll::set_dice_num(msg, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  if ( target_controller_id != this->controller_id )
    return 0;
  __for_range = &this->dice_vec;
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(&this->dice_vec)._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(&this->dice_vec)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = (proto::GCGDiceSideType *)__gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::GCGMsgDiceRoll::add_dice_side_list(msg, *v6);
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 123: range 000000000D78210C-000000000D782328
int32_t __cdecl GCGMsgDiceReroll::toClient(
        const GCGMsgDiceReroll *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGDiceSideType *v4; // rax
  proto::GCGDiceSideType *v5; // rdx
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  std::vector<proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::vector<proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  proto::GCGMsgDiceReroll *msg; // [rsp+38h] [rbp-18h]
  const std::vector<proto::GCGDiceSideType> *__for_range; // [rsp+40h] [rbp-10h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-8h]

  msg = proto::GCGMessage::mutable_dice_reroll(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgDiceReroll::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  if ( target_controller_id != this->controller_id )
    return 0;
  __for_range = &this->dice_vec;
  __for_begin._M_current = std::vector<proto::GCGDiceSideType>::begin(&this->dice_vec)._M_current;
  __for_end._M_current = std::vector<proto::GCGDiceSideType>::end(&this->dice_vec)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = (proto::GCGDiceSideType *)__gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::GCGMsgDiceReroll::add_dice_side_list(msg, *v5);
    __gnu_cxx::__normal_iterator<proto::GCGDiceSideType const*,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->select_dice_index_vec;
  __for_begin._M_current = (const proto::GCGDiceSideType *)std::vector<unsigned int>::begin(&this->select_dice_index_vec)._M_current;
  __for_end._M_current = (const proto::GCGDiceSideType *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::GCGMsgDiceReroll::add_select_dice_index_list(msg, *v7);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
  }
  return 0;
};

// Line 142: range 000000000D78232A-000000000D78239D
int32_t __cdecl GCGMsgPass::toClient(
        const GCGMsgPass *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgPass *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_pass(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgPass::set_controller_id(msg, this->controller_id);
  return 0;
};

// Line 149: range 000000000D78239E-000000000D782461
int32_t __cdecl GCGMsgCharDie::toClient(
        const GCGMsgCharDie *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgCharDie *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_char_die(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgCharDie::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgCharDie::set_card_guid(msg, this->card_guid);
  return 0;
};

// Line 157: range 000000000D782462-000000000D782523
int32_t __cdecl GCGMsgUseSkill::toClient(
        const GCGMsgUseSkill *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgUseSkill *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_use_skill(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgUseSkill::set_skill_id(msg, this->skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgUseSkill::set_card_guid(msg, this->card_guid);
  return 0;
};

// Line 165: range 000000000D782524-000000000D7825E5
int32_t __cdecl GCGMsgUseSkillEnd::toClient(
        const GCGMsgUseSkillEnd *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgUseSkillEnd *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_use_skill_end(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgUseSkillEnd::set_skill_id(msg, this->skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgUseSkillEnd::set_card_guid(msg, this->card_guid);
  return 0;
};

// Line 173: range 000000000D7825E6-000000000D782984
int32_t __cdecl GCGMsgSkillResult::toClient(
        const GCGMsgSkillResult *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  std::vector<GCGMsgSkillResult::SkillDetailMsg>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<GCGMsgSkillResult::SkillDetailMsg>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  proto::GCGMsgSkillResult *msg; // [rsp+30h] [rbp-20h]
  const std::vector<GCGMsgSkillResult::SkillDetailMsg> *__for_range; // [rsp+38h] [rbp-18h]
  const GCGMsgSkillResult::SkillDetailMsg *skill_detail; // [rsp+40h] [rbp-10h]
  proto::GCGDamageDetail *proto_detail; // [rsp+48h] [rbp-8h]

  msg = proto::GCGMessage::mutable_skill_result(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgSkillResult::set_skill_id(msg, this->skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->damage);
  }
  proto::GCGMsgSkillResult::set_damage(msg, this->damage);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->effect_element);
  }
  proto::GCGMsgSkillResult::set_effect_element(msg, this->effect_element);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_hp);
  }
  proto::GCGMsgSkillResult::set_last_hp(msg, this->last_hp);
  if ( *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->src_card_guid);
  }
  proto::GCGMsgSkillResult::set_src_card_guid(msg, this->src_card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_card_guid);
  }
  proto::GCGMsgSkillResult::set_target_card_guid(msg, this->target_card_guid);
  __for_range = &this->skill_detail_vec;
  __for_begin._M_current = std::vector<GCGMsgSkillResult::SkillDetailMsg>::begin(&this->skill_detail_vec)._M_current;
  __for_end._M_current = std::vector<GCGMsgSkillResult::SkillDetailMsg>::end(&this->skill_detail_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGMsgSkillResult::SkillDetailMsg const*,std::vector<GCGMsgSkillResult::SkillDetailMsg>>(
            &__for_begin,
            &__for_end) )
  {
    skill_detail = __gnu_cxx::__normal_iterator<GCGMsgSkillResult::SkillDetailMsg const*,std::vector<GCGMsgSkillResult::SkillDetailMsg>>::operator*(&__for_begin);
    proto_detail = proto::GCGMsgSkillResult::add_detail_list(msg);
    if ( *(_BYTE *)(((unsigned __int64)skill_detail >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_detail & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_detail >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(skill_detail);
    }
    proto::GCGDamageDetail::set_card_guid(proto_detail, skill_detail->card_guid);
    if ( *(_BYTE *)(((unsigned __int64)&skill_detail->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_detail + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_detail->skill_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&skill_detail->skill_id);
    }
    proto::GCGDamageDetail::set_skill_id(proto_detail, skill_detail->skill_id);
    __gnu_cxx::__normal_iterator<GCGMsgSkillResult::SkillDetailMsg const*,std::vector<GCGMsgSkillResult::SkillDetailMsg>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->result_seq);
  }
  proto::GCGMsgSkillResult::set_result_seq(msg, this->result_seq);
  if ( *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->from_result_seq);
  }
  proto::GCGMsgSkillResult::set_from_result_seq(msg, this->from_result_seq);
  return 0;
};

// Line 193: range 000000000D782986-000000000D782C8C
int32_t __cdecl GCGMsgNoDamageSkillResult::toClient(
        const GCGMsgNoDamageSkillResult *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  proto::GCGMsgNoDamageSkillResult *msg; // [rsp+30h] [rbp-20h]
  const std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg> *__for_range; // [rsp+38h] [rbp-18h]
  const GCGMsgNoDamageSkillResult::SkillDetailMsg *skill_detail; // [rsp+40h] [rbp-10h]
  proto::GCGDamageDetail *proto_detail; // [rsp+48h] [rbp-8h]

  msg = proto::GCGMessage::mutable_no_damage_skill_result(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgNoDamageSkillResult::set_skill_id(msg, this->skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->effect_element);
  }
  proto::GCGMsgNoDamageSkillResult::set_effect_element(msg, this->effect_element);
  if ( *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->src_card_guid);
  }
  proto::GCGMsgNoDamageSkillResult::set_src_card_guid(msg, this->src_card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_card_guid);
  }
  proto::GCGMsgNoDamageSkillResult::set_target_card_guid(msg, this->target_card_guid);
  __for_range = &this->skill_detail_vec;
  __for_begin._M_current = std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::begin(&this->skill_detail_vec)._M_current;
  __for_end._M_current = std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::end(&this->skill_detail_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGMsgNoDamageSkillResult::SkillDetailMsg const*,std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>>(
            &__for_begin,
            &__for_end) )
  {
    skill_detail = __gnu_cxx::__normal_iterator<GCGMsgNoDamageSkillResult::SkillDetailMsg const*,std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>>::operator*(&__for_begin);
    proto_detail = proto::GCGMsgNoDamageSkillResult::add_detail_list(msg);
    if ( *(_BYTE *)(((unsigned __int64)skill_detail >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_detail & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_detail >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(skill_detail);
    }
    proto::GCGDamageDetail::set_card_guid(proto_detail, skill_detail->card_guid);
    if ( *(_BYTE *)(((unsigned __int64)&skill_detail->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_detail + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_detail->skill_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&skill_detail->skill_id);
    }
    proto::GCGDamageDetail::set_skill_id(proto_detail, skill_detail->skill_id);
    __gnu_cxx::__normal_iterator<GCGMsgNoDamageSkillResult::SkillDetailMsg const*,std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->result_seq);
  }
  proto::GCGMsgNoDamageSkillResult::set_result_seq(msg, this->result_seq);
  if ( *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->from_result_seq);
  }
  proto::GCGMsgNoDamageSkillResult::set_from_result_seq(msg, this->from_result_seq);
  return 0;
};

// Line 211: range 000000000D782C8E-000000000D782DF9
int32_t __cdecl GCGMsgCostDice::toClient(
        const GCGMsgCostDice *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  unsigned int *v3; // rax
  google::protobuf::uint32 *v4; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-18h] BYREF
  proto::GCGMsgCostDice *msg; // [rsp+40h] [rbp-10h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-8h]

  msg = proto::GCGMessage::mutable_cost_dice(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgCostDice::set_controller_id(msg, this->controller_id);
  __for_range = &this->dice_index_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->dice_index_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->dice_index_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    proto::GCGMsgCostDice::add_select_dice_index_list(msg, *v4);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgCostDice::set_reason(msg, this->reason);
  return 0;
};

// Line 223: range 000000000D782DFA-000000000D7831D9
int32_t __cdecl GCGMsgAddDice::toClient(
        const GCGMsgAddDice *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type v5; // ebx
  proto::GCGDiceSideType *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *v7; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type v9; // ebx
  proto::GCGDiceSideType *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *v11; // rdx
  std::map<unsigned int,proto::GCGDiceSideType>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::map<unsigned int,proto::GCGDiceSideType>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  proto::GCGMsgAddDice *msg; // [rsp+38h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::GCGDiceSideType> *proto_map; // [rsp+40h] [rbp-60h]
  const std::map<unsigned int,proto::GCGDiceSideType> *__for_range; // [rsp+48h] [rbp-58h]
  google::protobuf::Map<unsigned int,proto::GCGDiceSideType> *proto_before_map; // [rsp+50h] [rbp-50h]
  const std::map<unsigned int,proto::GCGDiceSideType> *__for_range_0; // [rsp+58h] [rbp-48h]
  const std::pair<unsigned int const,proto::GCGDiceSideType> *v19; // [rsp+60h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *index_0; // [rsp+68h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *dice_side_0; // [rsp+70h] [rbp-30h]
  const std::pair<unsigned int const,proto::GCGDiceSideType> *v22; // [rsp+78h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *index; // [rsp+80h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *dice_side; // [rsp+88h] [rbp-18h]

  msg = proto::GCGMessage::mutable_add_dice(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgAddDice::set_controller_id(msg, this->controller_id);
  proto_map = proto::GCGMsgAddDice::mutable_dice_map(msg);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->change_count);
  }
  proto::GCGMsgAddDice::set_change_count(msg, this->change_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgAddDice::set_reason(msg, this->reason);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  if ( target_controller_id != this->controller_id )
    return 0;
  __for_range = &this->dice_map;
  __for_begin._M_node = std::map<unsigned int,proto::GCGDiceSideType>::begin(&this->dice_map)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GCGDiceSideType>::end(&this->dice_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGDiceSideType>>::operator*(&__for_begin);
    index = std::get<0ul,unsigned int const,proto::GCGDiceSideType>(v22);
    v4 = (std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *)std::get<1ul,unsigned int const,proto::GCGDiceSideType>(v22);
    dice_side = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v5 = *dice_side;
    v6 = google::protobuf::Map<unsigned int,proto::GCGDiceSideType>::operator[](proto_map, index);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v5;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  proto_before_map = proto::GCGMsgAddDice::mutable_before_dice_map(msg);
  __for_range_0 = &this->before_dice_map;
  __for_begin._M_node = std::map<unsigned int,proto::GCGDiceSideType>::begin(&this->before_dice_map)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::GCGDiceSideType>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGDiceSideType>>::operator*(&__for_begin);
    index_0 = std::get<0ul,unsigned int const,proto::GCGDiceSideType>(v19);
    v8 = (std::tuple_element<1,const std::pair<unsigned int const,proto::GCGDiceSideType> >::type *)std::get<1ul,unsigned int const,proto::GCGDiceSideType>(v19);
    dice_side_0 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( *dice_side_0 )
    {
      v9 = *dice_side_0;
      v10 = google::protobuf::Map<unsigned int,proto::GCGDiceSideType>::operator[](proto_before_map, index_0);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v10);
      }
      *v11 = v9;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::GCGDiceSideType>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 247: range 000000000D7831DA-000000000D78322D
int32_t __cdecl GCGMsgNewCard::toClient(
        const GCGMsgNewCard *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGCard *v3; // rax
  proto::GCGMsgNewCard *msg; // [rsp+28h] [rbp-18h]

  msg = proto::GCGMessage::mutable_new_card(proto);
  v3 = proto::GCGMsgNewCard::mutable_card(msg);
  GCGCardDetailInfo::toClient(&this->card_info, target_controller_id, v3);
  return 0;
};

// Line 254: range 000000000D78322E-000000000D7833AB
int32_t __cdecl GCGMsgModifyAdd::toClient(
        const GCGMsgModifyAdd *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGMsgModifyAdd *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_modify_add(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgModifyAdd::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->owner_card_guid);
  }
  proto::GCGMsgModifyAdd::set_owner_card_guid(msg, this->owner_card_guid);
  v3 = proto::GCGMsgModifyAdd::mutable_card_guid_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_guid_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pos);
  }
  proto::GCGMsgModifyAdd::set_pos(msg, this->pos);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgModifyAdd::set_reason(msg, this->reason);
  return 0;
};

// Line 265: range 000000000D7833AC-000000000D7834D9
int32_t __cdecl GCGMsgModifyRemove::toClient(
        const GCGMsgModifyRemove *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGMsgModifyRemove *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_modify_remove(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgModifyRemove::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->owner_card_guid);
  }
  proto::GCGMsgModifyRemove::set_owner_card_guid(msg, this->owner_card_guid);
  v3 = proto::GCGMsgModifyRemove::mutable_card_guid_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_guid_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason);
  }
  proto::GCGMsgModifyRemove::set_reason(msg, this->reason);
  return 0;
};

// Line 275: range 000000000D7834DA-000000000D783525
int32_t __cdecl GCGMsgUpdateController::toClient(
        const GCGMsgUpdateController *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  proto::GCGMsgUpdateController *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_update_controller(proto);
  v3 = proto::GCGMsgUpdateController::mutable_allow_controller_map(msg);
  common::tools::MiscUtils::toProtoMap<std::map<proto::GCGControllerValue,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->allow_controller_map,
    v3);
  return 0;
};

// Line 282: range 000000000D783526-000000000D783667
int32_t __cdecl GCGMsgPVEIntentionInfo::toClient(
        const GCGMsgPVEIntentionInfo *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+28h] [rbp-48h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+30h] [rbp-40h] BYREF
  proto::GCGMsgPVEIntentionInfo *pb_intention_info; // [rsp+38h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::GCGMsgPVEIntention> *pb_intention_map; // [rsp+40h] [rbp-30h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v10; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *card_guid; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *skill_id_vec; // [rsp+60h] [rbp-10h]
  proto::GCGMsgPVEIntention *pb_intention; // [rsp+68h] [rbp-8h]

  pb_intention_info = proto::GCGMessage::mutable_pve_intention_info(proto);
  pb_intention_map = proto::GCGMsgPVEIntentionInfo::mutable_intention_map(pb_intention_info);
  __for_range = &this->intention_map;
  __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(&this->intention_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(&this->intention_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin);
    card_guid = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v10);
    skill_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v10);
    pb_intention = google::protobuf::Map<unsigned int,proto::GCGMsgPVEIntention>::operator[](
                     pb_intention_map,
                     card_guid);
    if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_guid);
    }
    proto::GCGMsgPVEIntention::set_card_guid(pb_intention, *card_guid);
    v3 = proto::GCGMsgPVEIntention::mutable_skill_id_list(pb_intention);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(skill_id_vec, v3);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 295: range 000000000D783668-000000000D7837ED
int32_t __cdecl GCGMsgPVEIntentionChange::toClient(
        const GCGMsgPVEIntentionChange *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  proto::GCGMsgPVEIntentionChange *pb_intention_change; // [rsp+30h] [rbp-30h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v9; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *guid; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *skill_id_vec; // [rsp+50h] [rbp-10h]
  proto::GCGMsgPVEIntention *pb_cur_intention; // [rsp+58h] [rbp-8h]

  pb_intention_change = proto::GCGMessage::mutable_pve_intention_change(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->change_type);
  }
  proto::GCGMsgPVEIntentionChange::set_change_type(pb_intention_change, this->change_type);
  __for_range = &this->change_intention_map;
  __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(&this->change_intention_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(&this->change_intention_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v9);
    skill_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v9);
    if ( !std::vector<unsigned int>::empty(skill_id_vec) )
    {
      pb_cur_intention = proto::GCGMsgPVEIntentionChange::add_change_intention_list(pb_intention_change);
      if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(guid);
      }
      proto::GCGMsgPVEIntention::set_card_guid(pb_cur_intention, *guid);
      v3 = proto::GCGMsgPVEIntention::mutable_skill_id_list(pb_cur_intention);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(skill_id_vec, v3);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 312: range 000000000D7837EE-000000000D78385F
int32_t __cdecl GCGMsgDuelDataChange::toClient(
        const GCGMsgDuelDataChange *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgDuelDataChange *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_duel_data_change(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->round);
  }
  proto::GCGMsgDuelDataChange::set_round(msg, this->round);
  return 0;
};

// Line 319: range 000000000D783860-000000000D7838F3
int32_t __cdecl GCGMsgClientPerform::toClient(
        const GCGMsgClientPerform *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGMsgClientPerform *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_client_perform(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->perform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->perform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->perform_type);
  }
  proto::GCGMsgClientPerform::set_perform_type(msg, this->perform_type);
  v3 = proto::GCGMsgClientPerform::mutable_param_list(msg);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->param_vec, v3);
  return 0;
};

// Line 327: range 000000000D7838F4-000000000D7839B7
int32_t __cdecl GCGMsgGameOver::toClient(
        const GCGMsgGameOver *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgGameOver *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_game_over(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->win_controller_id);
  }
  proto::GCGMsgGameOver::set_win_controller_id(msg, this->win_controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_reason);
  }
  proto::GCGMsgGameOver::set_end_reason(msg, this->end_reason);
  return 0;
};

// Line 335: range 000000000D7839B8-000000000D783AEB
int32_t __cdecl GCGMsgOpTimer::toClient(
        const GCGMsgOpTimer *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgOpTimer *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_op_timer(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgOpTimer::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->begin_time);
  proto::GCGMsgOpTimer::set_begin_time(msg, this->begin_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->time_stamp);
  proto::GCGMsgOpTimer::set_time_stamp(msg, this->time_stamp);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->phase >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->phase);
  }
  proto::GCGMsgOpTimer::set_phase(msg, this->phase);
  return 0;
};

// Line 345: range 000000000D783AEC-000000000D783B9C
int32_t __cdecl GCGMsgWaitingListChange::toClient(
        const GCGMsgWaitingListChange *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgWaitingListChange *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_waiting_list_change(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgWaitingListChange::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_index);
  proto::GCGMsgWaitingListChange::set_cur_index(msg, this->cur_index);
  return 0;
};

// Line 353: range 000000000D783B9E-000000000D783BF1
int32_t __cdecl GCGMsgCardUpdate::toClient(
        const GCGMsgCardUpdate *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGCard *v3; // rax
  proto::GCGMsgCardUpdate *msg; // [rsp+28h] [rbp-18h]

  msg = proto::GCGMessage::mutable_card_update(proto);
  v3 = proto::GCGMsgCardUpdate::mutable_card(msg);
  GCGCardDetailInfo::toClient(&this->card_info, target_controller_id, v3);
  return 0;
};

// Line 360: range 000000000D783BF2-000000000D783CC9
int32_t __cdecl GCGMsgCostRevise::toClient(
        const GCGMsgCostRevise *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGCostReviseInfo *v3; // rax
  proto::GCGMsgCostRevise *msg; // [rsp+28h] [rbp-18h]

  msg = proto::GCGMessage::mutable_cost_revise(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGMsgCostRevise::set_controller_id(msg, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  if ( target_controller_id == this->controller_id )
  {
    v3 = proto::GCGMsgCostRevise::mutable_cost_revise(msg);
    GCGCostReviseInfo::toClient(&this->cost_revise, v3);
  }
  return 0;
};

// Line 371: range 000000000D783CCA-000000000D783CF3
int32_t __cdecl GCGMsgPhaseContinue::toClient(
        const GCGMsgPhaseContinue *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMessage::mutable_phase_continue(proto);
  return 0;
};

// Line 378: range 000000000D783CF4-000000000D783FC6
int32_t __cdecl GCGMsgSkillLimitsChange::toClient(
        const GCGMsgSkillLimitsChange *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::vector<GCGSkillLimitsInfo>::const_iterator __for_begin_0; // [rsp+38h] [rbp-88h] BYREF
  std::vector<GCGSkillLimitsInfo>::const_iterator __for_end_0; // [rsp+40h] [rbp-80h] BYREF
  std::vector<GCGLimitsInfo>::const_iterator __for_begin_1; // [rsp+48h] [rbp-78h] BYREF
  std::vector<GCGLimitsInfo>::const_iterator __for_end_1; // [rsp+50h] [rbp-70h] BYREF
  proto::GCGMsgSkillLimitsChange *msg; // [rsp+58h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::GCGCardSkillLimitsInfo> *proto_card_limits_change_map; // [rsp+60h] [rbp-60h]
  const std::map<unsigned int,std::vector<GCGSkillLimitsInfo>> *__for_range; // [rsp+68h] [rbp-58h]
  const std::pair<unsigned int const,std::vector<GCGSkillLimitsInfo> > *v13; // [rsp+70h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<GCGSkillLimitsInfo> > >::type *guid; // [rsp+78h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<GCGSkillLimitsInfo> > >::type *skill_limits_info_vec; // [rsp+80h] [rbp-40h]
  proto::GCGCardSkillLimitsInfo *proto_card_limits_info; // [rsp+88h] [rbp-38h]
  const std::vector<GCGSkillLimitsInfo> *__for_range_0; // [rsp+90h] [rbp-30h]
  const GCGSkillLimitsInfo *skill_limits_info; // [rsp+98h] [rbp-28h]
  proto::GCGSkillLimitsInfo *proto_skill_limits_info; // [rsp+A0h] [rbp-20h]
  const std::vector<GCGLimitsInfo> *__for_range_1; // [rsp+A8h] [rbp-18h]
  const GCGLimitsInfo *limits_info; // [rsp+B0h] [rbp-10h]
  proto::GCGLimitsInfo *proto_limits_info; // [rsp+B8h] [rbp-8h]

  msg = proto::GCGMessage::mutable_skill_limits_change(proto);
  proto_card_limits_change_map = proto::GCGMsgSkillLimitsChange::mutable_card_limits_change_map(msg);
  __for_range = &this->card_skill_limits_map;
  __for_begin._M_node = std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::begin(&this->card_skill_limits_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::end(&this->card_skill_limits_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<GCGSkillLimitsInfo>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,std::vector<GCGSkillLimitsInfo>>(v13);
    skill_limits_info_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<GCGSkillLimitsInfo> > >::type *)std::get<1ul,unsigned int const,std::vector<GCGSkillLimitsInfo>>(v13);
    proto_card_limits_info = google::protobuf::Map<unsigned int,proto::GCGCardSkillLimitsInfo>::operator[](
                               proto_card_limits_change_map,
                               guid);
    __for_range_0 = skill_limits_info_vec;
    __for_begin_0._M_current = std::vector<GCGSkillLimitsInfo>::begin(skill_limits_info_vec)._M_current;
    __for_end_0._M_current = std::vector<GCGSkillLimitsInfo>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<GCGSkillLimitsInfo const*,std::vector<GCGSkillLimitsInfo>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      skill_limits_info = __gnu_cxx::__normal_iterator<GCGSkillLimitsInfo const*,std::vector<GCGSkillLimitsInfo>>::operator*(&__for_begin_0);
      proto_skill_limits_info = proto::GCGCardSkillLimitsInfo::add_skill_limits_list(proto_card_limits_info);
      if ( *(_BYTE *)(((unsigned __int64)skill_limits_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)skill_limits_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(skill_limits_info);
      }
      proto::GCGSkillLimitsInfo::set_skill_id(proto_skill_limits_info, skill_limits_info->skill_id);
      __for_range_1 = &skill_limits_info->limits_info_vec;
      __for_begin_1._M_current = std::vector<GCGLimitsInfo>::begin(&skill_limits_info->limits_info_vec)._M_current;
      __for_end_1._M_current = std::vector<GCGLimitsInfo>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<GCGLimitsInfo const*,std::vector<GCGLimitsInfo>>(&__for_begin_1, &__for_end_1) )
      {
        limits_info = __gnu_cxx::__normal_iterator<GCGLimitsInfo const*,std::vector<GCGLimitsInfo>>::operator*(&__for_begin_1);
        proto_limits_info = proto::GCGSkillLimitsInfo::add_limits_list(proto_skill_limits_info);
        if ( *(_BYTE *)(((unsigned __int64)limits_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)limits_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limits_info >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(limits_info);
        }
        proto::GCGLimitsInfo::set_limit_type(proto_limits_info, limits_info->limit_type);
        if ( *(_BYTE *)(((unsigned __int64)&limits_info->limit_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)limits_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limits_info->limit_value >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&limits_info->limit_value);
        }
        proto::GCGLimitsInfo::set_limit_value(proto_limits_info, limits_info->limit_value);
        __gnu_cxx::__normal_iterator<GCGLimitsInfo const*,std::vector<GCGLimitsInfo>>::operator++(&__for_begin_1);
      }
      __gnu_cxx::__normal_iterator<GCGSkillLimitsInfo const*,std::vector<GCGSkillLimitsInfo>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<GCGSkillLimitsInfo>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 401: range 000000000D783FC8-000000000D784089
int32_t __cdecl GCGMsgReactionBegin::toClient(
        const GCGMsgReactionBegin *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgReactionBegin *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_reaction_begin(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGMsgReactionBegin::set_card_guid(msg, this->card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgReactionBegin::set_skill_id(msg, this->skill_id);
  return 0;
};

// Line 409: range 000000000D78408A-000000000D7840FB
int32_t __cdecl GCGMsgReactionEnd::toClient(
        const GCGMsgReactionEnd *const this,
        GCGControllerValue target_controller_id,
        proto::GCGMessage *proto)
{
  proto::GCGMsgReactionEnd *msg; // [rsp+28h] [rbp-8h]

  msg = proto::GCGMessage::mutable_reaction_end(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGMsgReactionEnd::set_skill_id(msg, this->skill_id);
  return 0;
};
