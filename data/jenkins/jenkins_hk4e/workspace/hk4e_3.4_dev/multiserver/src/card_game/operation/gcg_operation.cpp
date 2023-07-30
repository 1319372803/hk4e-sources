// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/operation/gcg_operation.cpp

// Line 19: range 000000000D7840FC-000000000D7841CC
int32_t __cdecl GCGOperationBase::toProto(const GCGOperationBase *const this, proto::GCGReplayOperationData *proto)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(const GCGOperationBase *const, proto::GCGOperation *); // rbx
  proto::GCGOperation *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGReplayOperationData::set_controller_id(proto, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_GCGOperationBase + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGOperationBase + 4);
  v3 = *(void (__fastcall **)(const GCGOperationBase *const, proto::GCGOperation *))v2;
  v4 = proto::GCGReplayOperationData::mutable_op(proto);
  v3(this, v4);
  return 0;
};

// Line 26: range 000000000D7841CE-000000000D7841E0
int32_t __cdecl GCGOperationStart::toProto(const GCGOperationStart *const this, proto::GCGOperation *proto)
{
  return 0;
};

// Line 31: range 000000000D7841E2-000000000D78421A
int32_t __cdecl GCGOperationRedraw::fromClient(GCGOperationRedraw *const this, const proto::GCGOperationRedraw *proto)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax

  v2 = proto::GCGOperationRedraw::card_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->select_card_set, v2);
  return 0;
};

// Line 37: range 000000000D78421C-000000000D784264
int32_t __cdecl GCGOperationRedraw::toProto(const GCGOperationRedraw *const this, proto::GCGOperation *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  proto::GCGOperationRedraw *op; // [rsp+18h] [rbp-8h]

  op = proto::GCGOperation::mutable_op_redraw(proto);
  v2 = proto::GCGOperationRedraw::mutable_card_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->select_card_set, v2);
  return 0;
};

// Line 44: range 000000000D784266-000000000D7842EF
int32_t __cdecl GCGOperationOnStageSelect::fromClient(
        GCGOperationOnStageSelect *const this,
        const proto::GCGOperationOnStageSelect *proto)
{
  uint32_t v2; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax

  v2 = proto::GCGOperationOnStageSelect::card_guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = v2;
  v3 = proto::GCGOperationOnStageSelect::cost_dice_index_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->select_dice_set, v3);
  return 0;
};

// Line 51: range 000000000D7842F0-000000000D784388
int32_t __cdecl GCGOperationOnStageSelect::toProto(
        const GCGOperationOnStageSelect *const this,
        proto::GCGOperation *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  proto::GCGOperationOnStageSelect *op; // [rsp+18h] [rbp-8h]

  op = proto::GCGOperation::mutable_op_select_on_stage(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGOperationOnStageSelect::set_card_guid(op, this->card_guid);
  v2 = proto::GCGOperationOnStageSelect::mutable_cost_dice_index_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->select_dice_set, v2);
  return 0;
};

// Line 59: range 000000000D78438A-000000000D7843C2
int32_t __cdecl GCGOperationReroll::fromClient(GCGOperationReroll *const this, const proto::GCGOperationReroll *proto)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax

  v2 = proto::GCGOperationReroll::dice_index_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->select_dice_set, v2);
  return 0;
};

// Line 65: range 000000000D7843C4-000000000D78440C
int32_t __cdecl GCGOperationReroll::toProto(const GCGOperationReroll *const this, proto::GCGOperation *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  proto::GCGOperationReroll *op; // [rsp+18h] [rbp-8h]

  op = proto::GCGOperation::mutable_op_reroll(proto);
  v2 = proto::GCGOperationReroll::mutable_dice_index_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->select_dice_set, v2);
  return 0;
};

// Line 72: range 000000000D78440E-000000000D784434
int32_t __cdecl GCGOperationPass::toProto(const GCGOperationPass *const this, proto::GCGOperation *proto)
{
  proto::GCGOperation::mutable_op_pass(proto);
  return 0;
};

// Line 78: range 000000000D784436-000000000D7844BF
int32_t __cdecl GCGOperationAttack::fromClient(GCGOperationAttack *const this, const proto::GCGOperationAttack *proto)
{
  uint32_t v2; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax

  v2 = proto::GCGOperationAttack::skill_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = v2;
  v3 = proto::GCGOperationAttack::cost_dice_index_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->cost_dice_set, v3);
  return 0;
};

// Line 85: range 000000000D7844C0-000000000D784558
int32_t __cdecl GCGOperationAttack::toProto(const GCGOperationAttack *const this, proto::GCGOperation *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  proto::GCGOperationAttack *op; // [rsp+18h] [rbp-8h]

  op = proto::GCGOperation::mutable_op_attack(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id);
  }
  proto::GCGOperationAttack::set_skill_id(op, this->skill_id);
  v2 = proto::GCGOperationAttack::mutable_cost_dice_index_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->cost_dice_set, v2);
  return 0;
};

// Line 93: range 000000000D78455A-000000000D784651
int32_t __cdecl GCGOperationPlayCard::fromClient(
        GCGOperationPlayCard *const this,
        const proto::GCGOperationPlayCard *proto)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax
  uint32_t v3; // ecx
  uint32_t v4; // edx
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax

  v2 = proto::GCGOperationPlayCard::cost_dice_index_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->cost_dice_set, v2);
  v3 = proto::GCGOperationPlayCard::card_guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = v3;
  v4 = proto::GCGOperationPlayCard::replace_card_guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replace_card_guid);
  }
  this->replace_card_guid = v4;
  v5 = proto::GCGOperationPlayCard::target_card_guid_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, &this->target_param_vec);
  return 0;
};

// Line 102: range 000000000D784652-000000000D784754
int32_t __cdecl GCGOperationPlayCard::toProto(const GCGOperationPlayCard *const this, proto::GCGOperation *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGOperationPlayCard *op; // [rsp+18h] [rbp-8h]

  op = proto::GCGOperation::mutable_op_play_card(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGOperationPlayCard::set_card_guid(op, this->card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->replace_card_guid);
  }
  proto::GCGOperationPlayCard::set_replace_card_guid(op, this->replace_card_guid);
  v2 = proto::GCGOperationPlayCard::mutable_cost_dice_index_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->cost_dice_set, v2);
  v3 = proto::GCGOperationPlayCard::mutable_target_card_guid_list(op);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->target_param_vec, v3);
  return 0;
};

// Line 112: range 000000000D784756-000000000D7847B0
int32_t __cdecl GCGOperationReboot::fromClient(GCGOperationReboot *const this, const proto::GCGOperationReboot *proto)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax

  v2 = proto::GCGOperationReboot::cost_card_guid_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->cost_card_set, v2);
  v3 = proto::GCGOperationReboot::dice_index_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->select_dice_set, v3);
  return 0;
};

// Line 119: range 000000000D7847B2-000000000D78481C
int32_t __cdecl GCGOperationReboot::toProto(const GCGOperationReboot *const this, proto::GCGOperation *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGOperationReboot *op; // [rsp+18h] [rbp-8h]

  op = proto::GCGOperation::mutable_op_reboot(proto);
  v2 = proto::GCGOperationReboot::mutable_cost_card_guid_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->cost_card_set, v2);
  v3 = proto::GCGOperationReboot::mutable_dice_index_list(op);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->select_dice_set, v3);
  return 0;
};

// Line 127: range 000000000D78481E-000000000D784830
int32_t __cdecl GCGOperationSurrender::fromClient(
        GCGOperationSurrender *const this,
        const proto::GCGOperationSurrender *proto)
{
  return 0;
};

// Line 132: range 000000000D784832-000000000D784858
int32_t __cdecl GCGOperationSurrender::toProto(const GCGOperationSurrender *const this, proto::GCGOperation *proto)
{
  proto::GCGOperation::mutable_op_surrender(proto);
  return 0;
};

// Line 138: range 000000000D78485A-000000000D78486C
int32_t __cdecl GCGOperationAuto::toProto(const GCGOperationAuto *const this, proto::GCGOperation *proto)
{
  return 0;
};
