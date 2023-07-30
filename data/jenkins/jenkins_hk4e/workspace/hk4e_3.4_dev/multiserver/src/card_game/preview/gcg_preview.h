// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/preview/gcg_preview.h

// Line 64: range 000000000DCC1774-000000000DCC17CE
void __cdecl GCGSkillPreviewReactionItem::GCGSkillPreviewReactionItem(GCGSkillPreviewReactionItem *const this)
{
  std::vector<data::GCGTokenType>::vector(&this->source_element_attach_vec);
  std::vector<data::GCGTokenType>::vector(&this->change_element_attach_vec);
  std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::vector(&this->reaction_element_pair_vec);
  std::vector<data::GCGTokenType>::vector(&this->result_source_element_attach_vec);
  std::vector<data::GCGTokenType>::vector(&this->result_fresh_element_attach_vec);
};

// Line 86: range 000000000D82BC5C-000000000D82BCCD
void __cdecl GCGSkillPreviewHp::~GCGSkillPreviewHp(GCGSkillPreviewHp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewHp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::map<unsigned int,bool>::~map(&this->heal_flag_map);
  std::map<unsigned int,bool>::~map(&this->damage_flag_map);
  std::map<unsigned int,int>::~map(&this->character_damage_info_map);
};

// Line 89: range 000000000D827DB0-000000000D827E38
void __cdecl GCGSkillPreviewHp::GCGSkillPreviewHp(GCGSkillPreviewHp *const this, GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewHp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::map<unsigned int,int>::map(&this->character_damage_info_map);
  std::map<unsigned int,bool>::map(&this->damage_flag_map);
  std::map<unsigned int,bool>::map(&this->heal_flag_map);
};

// Line 95: range 000000000D827E3A-000000000D827E78
void __cdecl GCGSkillPreviewHp::clear(GCGSkillPreviewHp *const this)
{
  std::map<unsigned int,int>::clear(&this->character_damage_info_map);
  std::map<unsigned int,bool>::clear(&this->damage_flag_map);
  std::map<unsigned int,bool>::clear(&this->heal_flag_map);
};

// Line 112: range 000000000D82BCCE-000000000D82BD1F
void __cdecl GCGSkillPreviewReaction::~GCGSkillPreviewReaction(GCGSkillPreviewReaction *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewReaction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::map<unsigned int,GCGSkillPreviewReactionItem>::~map(&this->reaction_map);
};

// Line 115: range 000000000D827EEA-000000000D827F52
void __cdecl GCGSkillPreviewReaction::GCGSkillPreviewReaction(
        GCGSkillPreviewReaction *const this,
        GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewReaction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::map<unsigned int,GCGSkillPreviewReactionItem>::map(&this->reaction_map);
};

// Line 119: range 000000000D827F54-000000000D827F72
void __cdecl GCGSkillPreviewReaction::clear(GCGSkillPreviewReaction *const this)
{
  std::map<unsigned int,GCGSkillPreviewReactionItem>::clear(&this->reaction_map);
};

// Line 129: range 000000000D82BE16-000000000D82BE67
void __cdecl GCGSkillPreviewChangeOnstageCharacter::~GCGSkillPreviewChangeOnstageCharacter(
        GCGSkillPreviewChangeOnstageCharacter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewChangeOnstageCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::vector<std::pair<unsigned int,unsigned int>>::~vector(&this->change_vec);
};

// Line 129: range 000000000DB94E86-000000000DB94EE0
void __cdecl GCGSkillPreviewReactionItem::~GCGSkillPreviewReactionItem(GCGSkillPreviewReactionItem *const this)
{
  std::vector<data::GCGTokenType>::~vector(&this->result_fresh_element_attach_vec);
  std::vector<data::GCGTokenType>::~vector(&this->result_source_element_attach_vec);
  std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::~vector(&this->reaction_element_pair_vec);
  std::vector<data::GCGTokenType>::~vector(&this->change_element_attach_vec);
  std::vector<data::GCGTokenType>::~vector(&this->source_element_attach_vec);
};

// Line 132: range 000000000D827FC8-000000000D828030
void __cdecl GCGSkillPreviewChangeOnstageCharacter::GCGSkillPreviewChangeOnstageCharacter(
        GCGSkillPreviewChangeOnstageCharacter *const this,
        GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewChangeOnstageCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::vector<std::pair<unsigned int,unsigned int>>::vector(&this->change_vec);
};

// Line 136: range 000000000D828032-000000000D828050
void __cdecl GCGSkillPreviewChangeOnstageCharacter::clear(GCGSkillPreviewChangeOnstageCharacter *const this)
{
  std::vector<std::pair<unsigned int,unsigned int>>::clear(&this->change_vec);
};

// Line 148: range 000000000D82BD20-000000000D82BD71
void __cdecl GCGSkillPreviewAddCard::~GCGSkillPreviewAddCard(GCGSkillPreviewAddCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewAddCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::vector<GCGSkillPreviewCardItem>::~vector(&this->add_card_vec);
};

// Line 151: range 000000000D8280A6-000000000D82810E
void __cdecl GCGSkillPreviewAddCard::GCGSkillPreviewAddCard(
        GCGSkillPreviewAddCard *const this,
        GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewAddCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::vector<GCGSkillPreviewCardItem>::vector(&this->add_card_vec);
};

// Line 155: range 000000000D828110-000000000D82812E
void __cdecl GCGSkillPreviewAddCard::clear(GCGSkillPreviewAddCard *const this)
{
  std::vector<GCGSkillPreviewCardItem>::clear(&this->add_card_vec);
};

// Line 162: range 000000000D828130-000000000D828159
void __cdecl GCGSkillPreviewAddCard::addCard(
        GCGSkillPreviewAddCard *const this,
        const GCGSkillPreviewCardItem *card_item)
{
  std::vector<GCGSkillPreviewCardItem>::emplace_back<GCGSkillPreviewCardItem const&>(
    &this->add_card_vec,
    card_item,
    (const GCGSkillPreviewCardItem *)&this->add_card_vec);
};

// Line 170: range 000000000D82BE68-000000000D82BEB9
void __cdecl GCGSkillPreviewAddCardForRefresh::~GCGSkillPreviewAddCardForRefresh(
        GCGSkillPreviewAddCardForRefresh *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewAddCardForRefresh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::vector<GCGSkillPreviewCardItem>::~vector(&this->refresh_card_vec);
};

// Line 173: range 000000000D82815A-000000000D8281C2
void __cdecl GCGSkillPreviewAddCardForRefresh::GCGSkillPreviewAddCardForRefresh(
        GCGSkillPreviewAddCardForRefresh *const this,
        GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewAddCardForRefresh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::vector<GCGSkillPreviewCardItem>::vector(&this->refresh_card_vec);
};

// Line 177: range 000000000D8281C4-000000000D8281E2
void __cdecl GCGSkillPreviewAddCardForRefresh::clear(GCGSkillPreviewAddCardForRefresh *const this)
{
  std::vector<GCGSkillPreviewCardItem>::clear(&this->refresh_card_vec);
};

// Line 184: range 000000000D8281E4-000000000D82820D
void __cdecl GCGSkillPreviewAddCardForRefresh::addCard(
        GCGSkillPreviewAddCardForRefresh *const this,
        const GCGSkillPreviewCardItem *card_item)
{
  std::vector<GCGSkillPreviewCardItem>::emplace_back<GCGSkillPreviewCardItem const&>(
    &this->refresh_card_vec,
    card_item,
    (const GCGSkillPreviewCardItem *)&this->refresh_card_vec);
};

// Line 192: range 000000000D82BEBA-000000000D82BF0B
void __cdecl GCGSkillPreviewAddCardForFull::~GCGSkillPreviewAddCardForFull(GCGSkillPreviewAddCardForFull *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewAddCardForFull + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::vector<GCGSkillPreviewCardItem>::~vector(&this->not_add_for_full_card_vec);
};

// Line 195: range 000000000D82820E-000000000D828276
void __cdecl GCGSkillPreviewAddCardForFull::GCGSkillPreviewAddCardForFull(
        GCGSkillPreviewAddCardForFull *const this,
        GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewAddCardForFull + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::vector<GCGSkillPreviewCardItem>::vector(&this->not_add_for_full_card_vec);
};

// Line 199: range 000000000D828278-000000000D828296
void __cdecl GCGSkillPreviewAddCardForFull::clear(GCGSkillPreviewAddCardForFull *const this)
{
  std::vector<GCGSkillPreviewCardItem>::clear(&this->not_add_for_full_card_vec);
};

// Line 206: range 000000000D828298-000000000D8282C1
void __cdecl GCGSkillPreviewAddCardForFull::addCard(
        GCGSkillPreviewAddCardForFull *const this,
        const GCGSkillPreviewCardItem *card_item)
{
  std::vector<GCGSkillPreviewCardItem>::emplace_back<GCGSkillPreviewCardItem const&>(
    &this->not_add_for_full_card_vec,
    card_item,
    (const GCGSkillPreviewCardItem *)&this->not_add_for_full_card_vec);
};

// Line 214: range 000000000D82BD72-000000000D82BDC3
void __cdecl GCGSkillPreviewRmCard::~GCGSkillPreviewRmCard(GCGSkillPreviewRmCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewRmCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::vector<GCGSkillPreviewCardItem>::~vector(&this->rm_card_vec);
};

// Line 217: range 000000000D8282C2-000000000D82832A
void __cdecl GCGSkillPreviewRmCard::GCGSkillPreviewRmCard(GCGSkillPreviewRmCard *const this, GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewRmCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::vector<GCGSkillPreviewCardItem>::vector(&this->rm_card_vec);
};

// Line 221: range 000000000D82832C-000000000D82834A
void __cdecl GCGSkillPreviewRmCard::clear(GCGSkillPreviewRmCard *const this)
{
  std::vector<GCGSkillPreviewCardItem>::clear(&this->rm_card_vec);
};

// Line 228: range 000000000D82834C-000000000D828375
void __cdecl GCGSkillPreviewRmCard::addCard(
        GCGSkillPreviewRmCard *const this,
        const GCGSkillPreviewCardItem *card_item)
{
  std::vector<GCGSkillPreviewCardItem>::emplace_back<GCGSkillPreviewCardItem const&>(
    &this->rm_card_vec,
    card_item,
    (const GCGSkillPreviewCardItem *)&this->rm_card_vec);
};

// Line 236: range 000000000DCC0A68-000000000DCC0AFD
void __cdecl GCGSkillPreviewTokenValue::GCGSkillPreviewTokenValue(GCGSkillPreviewTokenValue *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->before_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->after_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->after_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->after_value);
  }
  this->after_value = 0;
};

// Line 242: range 000000000DCC08E8-000000000DCC0902
void __cdecl GCGSkillPreviewTokenItem::GCGSkillPreviewTokenItem(GCGSkillPreviewTokenItem *const this)
{
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::map(&this->token_map);
};

// Line 242: range 000000000DB9500E-000000000DB95028
void __cdecl GCGSkillPreviewTokenItem::~GCGSkillPreviewTokenItem(GCGSkillPreviewTokenItem *const this)
{
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::~map(&this->token_map);
};

// Line 248: range 000000000D82BDC4-000000000D82BE15
void __cdecl GCGSkillPreviewTokenChange::~GCGSkillPreviewTokenChange(GCGSkillPreviewTokenChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGSkillPreviewTokenChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v1;
  std::map<unsigned int,GCGSkillPreviewTokenItem>::~map(&this->token_change_map);
};

// Line 251: range 000000000D8283E6-000000000D82844E
void __cdecl GCGSkillPreviewTokenChange::GCGSkillPreviewTokenChange(
        GCGSkillPreviewTokenChange *const this,
        GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  GCGSkillPreviewBase::GCGSkillPreviewBase(this, info);
  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewTokenChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  std::map<unsigned int,GCGSkillPreviewTokenItem>::map(&this->token_change_map);
};

// Line 255: range 000000000D828450-000000000D82846E
void __cdecl GCGSkillPreviewTokenChange::clear(GCGSkillPreviewTokenChange *const this)
{
  std::map<unsigned int,GCGSkillPreviewTokenItem>::clear(&this->token_change_map);
};

// Line 268: range 000000000D82BF0C-000000000D82BFC8
void __cdecl GCGSkillPreviewInfo::~GCGSkillPreviewInfo(GCGSkillPreviewInfo *const this)
{
  GCGSkillPreviewAddCardForFull::~GCGSkillPreviewAddCardForFull(&this->not_add_for_full_card_info);
  GCGSkillPreviewAddCardForRefresh::~GCGSkillPreviewAddCardForRefresh(&this->refresh_add_card_info);
  std::set<unsigned int>::~set(&this->preview_del_card_guid_set);
  std::set<unsigned int>::~set(&this->preview_add_card_guid_set);
  GCGSkillPreviewChangeOnstageCharacter::~GCGSkillPreviewChangeOnstageCharacter(&this->onstage_character_change_info);
  GCGSkillPreviewTokenChange::~GCGSkillPreviewTokenChange(&this->token_change_info);
  GCGSkillPreviewRmCard::~GCGSkillPreviewRmCard(&this->rm_card_info);
  GCGSkillPreviewAddCard::~GCGSkillPreviewAddCard(&this->add_card_info);
  GCGSkillPreviewReaction::~GCGSkillPreviewReaction(&this->reaction_info);
  GCGSkillPreviewHp::~GCGSkillPreviewHp(&this->hp_info);
};

// Line 277: range 000000000D828470-000000000D828547
bool __fastcall GCGSkillPreviewInfo::isAddedCard(GCGSkillPreviewInfo *const this, uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 guid:277";
  *(_QWORD *)(v2 + 16) = GCGSkillPreviewInfo::isAddedCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = guid;
  result = std::set<unsigned int>::count(
             &this->preview_add_card_guid_set,
             (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
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

// Line 283: range 000000000D828548-000000000D82861F
bool __fastcall GCGSkillPreviewInfo::isDeletedCard(GCGSkillPreviewInfo *const this, uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 guid:283";
  *(_QWORD *)(v2 + 16) = GCGSkillPreviewInfo::isDeletedCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = guid;
  result = std::set<unsigned int>::count(
             &this->preview_del_card_guid_set,
             (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
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

// Line 288: range 000000000D828620-000000000D8286DC
void __cdecl GCGSkillPreviewInfo::clear(GCGSkillPreviewInfo *const this)
{
  GCGSkillPreviewHp::clear(&this->hp_info);
  GCGSkillPreviewReaction::clear(&this->reaction_info);
  GCGSkillPreviewAddCard::clear(&this->add_card_info);
  GCGSkillPreviewRmCard::clear(&this->rm_card_info);
  GCGSkillPreviewTokenChange::clear(&this->token_change_info);
  GCGSkillPreviewChangeOnstageCharacter::clear(&this->onstage_character_change_info);
  std::set<unsigned int>::clear(&this->preview_add_card_guid_set);
  std::set<unsigned int>::clear(&this->preview_del_card_guid_set);
  GCGSkillPreviewAddCardForRefresh::clear(&this->refresh_add_card_info);
  GCGSkillPreviewAddCardForFull::clear(&this->not_add_for_full_card_info);
};

// Line 319: range 000000000D82BFCA-000000000D82C021
void __cdecl GCGSkillPreviewContext::GCGSkillPreviewContext(GCGSkillPreviewContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->snapshot_version_id_ = 0;
  GCGSkillPreviewInfo::GCGSkillPreviewInfo(&this->preview_info);
};

// Line 319: range 000000000D82C022-000000000D82C040
void __cdecl GCGSkillPreviewContext::~GCGSkillPreviewContext(GCGSkillPreviewContext *const this)
{
  GCGSkillPreviewInfo::~GCGSkillPreviewInfo(&this->preview_info);
};

// Line 326: range 000000000D8286DE-000000000D828720
uint32_t __cdecl GCGSkillPreviewContext::getSnapshotVersionId(const GCGSkillPreviewContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->snapshot_version_id_;
};

// Line 331: range 000000000D828722-000000000D82877E
void __cdecl GCGSkillPreviewContext::init(GCGSkillPreviewContext *const this)
{
  GCGSkillPreviewInfo::clear(&this->preview_info);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  ++this->snapshot_version_id_;
};
