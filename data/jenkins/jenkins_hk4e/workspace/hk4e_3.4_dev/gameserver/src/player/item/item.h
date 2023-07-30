// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/item.h

// Line 33: range 00000000131C4AC8-00000000131C4D2D
void __cdecl ActionReason::ActionReason(
        ActionReason *const this,
        proto::ActionReasonType reason_type,
        data::ItemLimitType limit_type)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx

  v3 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v3);
  this->reason_type = reason_type;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->limit_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->limit_type, (((_BYTE)this + 4) & 7u) + 3, v4);
  this->limit_type = limit_type;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->quest_id, (((_BYTE)this + 8) & 7u) + 3, v5);
  this->quest_id = 0;
  v6 = ((_BYTE)this + 12) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_transfered_from_avatar_card >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_transfered_from_avatar_card >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_transfered_from_avatar_card, v6, v7);
  this->is_transfered_from_avatar_card = 0;
  v8 = ((_BYTE)this + 13) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_show_gadget_auto_pick_drop_info_notify >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_show_gadget_auto_pick_drop_info_notify >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_show_gadget_auto_pick_drop_info_notify, v8, v9);
  this->is_show_gadget_auto_pick_drop_info_notify = 0;
  v10 = ((_BYTE)this + 14) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_show_check_add_item_exceed_limit_notify >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_show_check_add_item_exceed_limit_notify >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_show_check_add_item_exceed_limit_notify, v10, v11);
  this->is_show_check_add_item_exceed_limit_notify = 1;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->item_exceed_msg_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_exceed_msg_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->item_exceed_msg_type, (((_BYTE)this + 16) & 7u) + 3, v12);
  this->item_exceed_msg_type = CheckAddItemExceedLimitNotify_ItemExceedLimitMsgType_ITEM_EXCEED_LIMIT_MSG_DEFAULT;
  v13 = ((_BYTE)this + 20) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_general_reward_hiden, v13, v14);
  this->is_general_reward_hiden = 0;
  v15 = ((_BYTE)this + 21) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_by_overflow_transform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_by_overflow_transform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_by_overflow_transform, v15, v16);
  this->is_by_overflow_transform = 0;
};

// Line 52: range 00000000131C4D2E-00000000131C4DC5
void __cdecl SubItemReason::SubItemReason(SubItemReason *const this, proto::ActionReasonType reason_type)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->reason_type = reason_type;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->sub_legendary_key_detail_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_legendary_key_detail_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->sub_legendary_key_detail_id, (((_BYTE)this + 4) & 7u) + 3, v3);
  this->sub_legendary_key_detail_id = 0;
};

// Line 53: range 00000000131C4DC6-00000000131C4E99
void __cdecl SubItemReason::SubItemReason(SubItemReason *const this, const ActionReason *action_reason)
{
  char v3; // dl
  __int64 v4; // rsi
  proto::ActionReasonType reason_type; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx

  v3 = *(_BYTE *)(((unsigned __int64)action_reason >> 3) + 0x7FFF8000);
  v4 = ((unsigned __int8)action_reason & 7u) + 3;
  if ( v3 != 0 && (char)v4 >= v3 )
    __asan_report_load4(action_reason);
  reason_type = action_reason->reason_type;
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(this, v4, v7);
  this->reason_type = reason_type;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->sub_legendary_key_detail_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_legendary_key_detail_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->sub_legendary_key_detail_id, (((_BYTE)this + 4) & 7u) + 3, v8);
  this->sub_legendary_key_detail_id = 0;
};

// Line 60: range 0000000013845EDE-0000000013845FFF
void __cdecl ItemParam::ItemParam(ItemParam *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->item_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->count = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->level, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->level = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->promote_level, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->promote_level = 0;
};

// Line 119: range 00000000166687AE-000000001666887D
void __cdecl OutputResult::OutputResult(OutputResult *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->retcode = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_by_whitelist >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_by_whitelist >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_by_whitelist, v2, v3);
  this->is_by_whitelist = 0;
  v4 = ((_BYTE)this + 5) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_error >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_error >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_error, v4, v5);
  this->is_error = 0;
};

// Line 120: range 000000001666887E-000000001666894F
void __cdecl OutputResult::OutputResult(OutputResult *const this, int32_t retcode)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->retcode = retcode;
  v3 = ((_BYTE)this + 4) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_by_whitelist >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_by_whitelist >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_by_whitelist, v3, v4);
  this->is_by_whitelist = 0;
  v5 = ((_BYTE)this + 5) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_error >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_error >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_error, v5, v6);
  this->is_error = 0;
};

// Line 131: range 0000000017D64FA6-0000000017D650C0
// local variable allocation has failed, the output may be wrong!
void __cdecl Item::Item(Item *const this, uint32_t item_type, uint32_t item_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::enable_shared_from_this<Item>::enable_shared_from_this(&this->std::enable_shared_from_this<Item>);
  v3 = (int (**)(...))(&`vtable for'Item + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&item_type);
  this->_vptr_Item = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_type_, *(_QWORD *)&item_type, &this->item_type_);
  }
  this->item_type_ = item_type;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->item_id_, v4, v5);
  this->item_id_ = item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid_, v4);
  this->guid_ = 0LL;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
};

// Line 132: range 0000000017887B62-0000000017887B8C
void __cdecl Item::~Item(Item *const this)
{
  Item::~Item(this);
  operator delete(this, 0x38uLL);
};

// Line 132: range 0000000017887B00-0000000017887B61
void __cdecl Item::~Item(Item *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Item + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Item = v2;
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::enable_shared_from_this<Item>::~enable_shared_from_this(&this->std::enable_shared_from_this<Item>);
};

// Line 159: range 000000001762C2B6-000000001762C2D3
void __cdecl Item::resetItemOwner(Item *const this)
{
  std::__weak_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset(&this->player_wtr_);
};

// Line 161: range 000000001762C2D4-000000001762C322
PlayerPtr __cdecl Item::getItemOwner(Item *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 167: range 00000000149EA980-00000000149EA9CF
uint32_t __cdecl Item::getItemId(const Item *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id_);
  }
  return this->item_id_;
};

// Line 168: range 000000001383FAB2-000000001383FAEC
uint64_t __cdecl Item::getGuid(const Item *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->guid_;
};

// Line 168: range 0000000017D650C2-0000000017D65105
void __cdecl Item::setGuid(Item *const this, uint64_t guid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid_, guid__out);
  this->guid_ = guid__out;
};

// Line 15816: range 000000001762C28C-000000001762C2B4
void __cdecl Item::setItemOwner(Item *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};
