// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GCGGameExcelConfig.gen.h

// Line 75: range 00000000137B6F8A-00000000137B70C9
void __cdecl data::GCGTokenConfig::GCGTokenConfig(data::GCGTokenConfig *const this, const data::GCGTokenConfig *a2)
{
  int (**v2)(...); // rdx
  data::GCGTokenType token_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t value; // ecx
  char v7; // dl
  const data::GCGTokenConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGTokenConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGTokenConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->token_type, a2);
  }
  this->token_type = token_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->value);
  }
  value = v8->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->value, v5);
  }
  this->value = value;
};

// Line 115: range 000000000D2C7F94-000000000D2C7FE5
void __cdecl data::GCGAdvantureRuleExcelConfig::~GCGAdvantureRuleExcelConfig(
        data::GCGAdvantureRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGAdvantureRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGAdvantureRuleExcelConfig = v2;
  std::vector<data::GCGVirtualDiceCurveConfig>::~vector(&this->virtual_dice_curve_config);
};

// Line 115: range 000000000D2C8496-000000000D2C84D7
void __cdecl data::GCGCardViewExcelConfig::~GCGCardViewExcelConfig(data::GCGCardViewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCardViewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardViewExcelConfig = v2;
};

// Line 115: range 000000000D2C79F6-000000000D2C7A43
void __cdecl data::GCGCharExcelConfig::~GCGCharExcelConfig(data::GCGCharExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCharExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardConfig = v2;
  data::GCGCardConfig::~GCGCardConfig(this);
};

// Line 115: range 000000000D2C7C7E-000000000D2C7CEF
void __cdecl data::GCGChooseExcelConfig::~GCGChooseExcelConfig(data::GCGChooseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChooseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChooseExcelConfig = v2;
  std::vector<data::GCGChooseSortCond>::~vector(&this->sort_list);
  std::vector<data::GCGChooseTargetCond>::~vector(&this->cond_list);
  std::vector<data::GCGTagType>::~vector(&this->tag_list);
};

// Line 115: range 000000000D2C7DCC-000000000D2C7EB7
void __cdecl data::GCGDeckExcelConfig::~GCGDeckExcelConfig(data::GCGDeckExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckExcelConfig = v2;
  std::vector<bool>::~vector(&this->character_card_face_gold_list);
  std::vector<unsigned int>::~vector(&this->protected_priority_list);
  std::vector<data::GCGWaitingCharacterInfo>::~vector(&this->waiting_character_list);
  std::string::~string(&this->behavior_tree_file_name);
  std::vector<unsigned int>::~vector(&this->init_energy_list);
  std::vector<unsigned int>::~vector(&this->init_hp_list);
  std::vector<std::vector<unsigned int>>::~vector(&this->init_modify_card_list);
  std::vector<std::string>::~vector(&this->init_modify_card_str_list);
  std::vector<unsigned int>::~vector(&this->card_list);
  std::vector<unsigned int>::~vector(&this->character_list);
};

// Line 115: range 000000000D2C80C2-000000000D2C8103
void __cdecl data::GCGElementReactionExcelConfig::~GCGElementReactionExcelConfig(
        data::GCGElementReactionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGElementReactionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGElementReactionExcelConfig = v2;
};

// Line 115: range 000000000D2C8314-000000000D2C83B9
void __cdecl data::GCGRuleExcelConfig::~GCGRuleExcelConfig(data::GCGRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGRuleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->ai_normal_action_think_time);
  std::vector<unsigned int>::~vector(&this->ai_first_action_think_time);
  std::vector<unsigned int>::~vector(&this->ai_redraw_think_time);
  std::vector<unsigned int>::~vector(&this->ai_select_on_stage_think_time);
  std::vector<unsigned int>::~vector(&this->ai_reroll_think_time);
  std::vector<unsigned int>::~vector(&this->element_reaction_list);
};

// Line 115: range 000000000D2C7B20-000000000D2C7BA1
void __cdecl data::GCGSkillExcelConfig::~GCGSkillExcelConfig(data::GCGSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGSkillExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->block_ai_card_list);
  std::vector<data::GCGSkillTagType>::~vector(&this->skill_tag_list);
  std::vector<data::GCGCost>::~vector(&this->cost_list);
  std::string::~string(&this->skill_json);
};

// Line 139: range 00000000137548F6-00000000137549F3
void __cdecl data::GCGChooseSortCond::GCGChooseSortCond(data::GCGChooseSortCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChooseSortCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChooseSortCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NONE_1;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->larger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->larger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->larger, v3, v4);
  this->larger = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag, v3);
  }
  this->tag = GCG_TAG_NONE;
};

// Line 139: range 00000000137546D4-0000000013754799
void __cdecl data::GCGChooseTargetCond::GCGChooseTargetCond(data::GCGChooseTargetCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChooseTargetCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChooseTargetCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NONE_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->value = 0;
};

// Line 139: range 0000000013754334-00000000137543F9
void __cdecl data::GCGCost::GCGCost(data::GCGCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCost = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_type, v1);
  }
  this->cost_type = GCG_COST_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->count = 0;
};

// Line 139: range 0000000013754112-00000000137541D7
void __cdecl data::GCGTokenConfig::GCGTokenConfig(data::GCGTokenConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGTokenConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGTokenConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_type, v1);
  }
  this->token_type = GCG_TOKEN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->value = 0;
};

// Line 290: range 0000000014D30676-0000000014D30785
data::GCGCost *__cdecl data::GCGCost::operator=(data::GCGCost *const this, const data::GCGCost *a2)
{
  data::GCGCostType cost_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t count; // ecx
  char v6; // dl
  const data::GCGCost *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cost_type, a2);
  }
  this->cost_type = cost_type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->count, v4);
  }
  this->count = count;
  return this;
};

// Line 290: range 00000000137B7188-00000000137B72C7
void __cdecl data::GCGCost::GCGCost(data::GCGCost *const this, const data::GCGCost *a2)
{
  int (**v2)(...); // rdx
  data::GCGCostType cost_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  const data::GCGCost *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCost = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cost_type, a2);
  }
  this->cost_type = cost_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
};

// Line 293: range 0000000013713A0A-0000000013713A4B
void __cdecl data::GCGCost::~GCGCost(data::GCGCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCost = v2;
};

// Line 293: range 0000000013713A4C-0000000013713A76
void __cdecl data::GCGCost::~GCGCost(data::GCGCost *const this)
{
  data::GCGCost::~GCGCost(this);
  operator delete(this, 0x10uLL);
};

// Line 303: range 0000000014BD07D4-0000000014BD08E3
data::GCGTokenConfig *__cdecl data::GCGTokenConfig::operator=(
        data::GCGTokenConfig *const this,
        const data::GCGTokenConfig *a2)
{
  data::GCGTokenType token_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t value; // ecx
  char v6; // dl
  const data::GCGTokenConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->token_type, a2);
  }
  this->token_type = token_type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->value);
  }
  value = v8->value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->value, v4);
  }
  this->value = value;
  return this;
};

// Line 306: range 00000000137139DE-0000000013713A08
void __cdecl data::GCGTokenConfig::~GCGTokenConfig(data::GCGTokenConfig *const this)
{
  data::GCGTokenConfig::~GCGTokenConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 306: range 000000001371399C-00000000137139DD
void __cdecl data::GCGTokenConfig::~GCGTokenConfig(data::GCGTokenConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGTokenConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGTokenConfig = v2;
};

// Line 316: range 00000000147573FE-0000000014757659
data::GCGCardConfig *__cdecl data::GCGCardConfig::operator=(
        data::GCGCardConfig *const this,
        const data::GCGCardConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::GCGCardType card_type; // ecx
  char v6; // dl
  std::vector<unsigned int> *p_skill_list; // rsi
  bool is_can_obtain; // cl
  char v9; // al
  __int64 v10; // rsi
  uint32_t limit; // ecx
  char v12; // dl
  const data::GCGCardConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->card_type);
  }
  card_type = v14->card_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->card_type, v4);
  }
  this->card_type = card_type;
  std::vector<data::GCGTagType>::operator=(&this->tag_list, &v14->tag_list);
  std::vector<data::GCGTokenConfig>::operator=(&this->token_list, &v14->token_list);
  p_skill_list = &v14->skill_list;
  std::vector<unsigned int>::operator=(&this->skill_list, &v14->skill_list);
  if ( *(char *)(((unsigned __int64)&v14->is_can_obtain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_can_obtain, p_skill_list, &v14->is_can_obtain);
  is_can_obtain = v14->is_can_obtain;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_can_obtain >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_skill_list) = v9 != 0;
    __asan_report_store1(&this->is_can_obtain, p_skill_list, &this->is_can_obtain);
  }
  this->is_can_obtain = is_can_obtain;
  v10 = (((_BYTE)v14 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->limit);
  }
  limit = v14->limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->limit, v10);
  }
  this->limit = limit;
  return this;
};

// Line 316: range 00000000135B7E8C-00000000135B8002
void __cdecl data::GCGCardConfig::GCGCardConfig(data::GCGCardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGCardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type, v3);
  }
  this->card_type = GCG_CARD_INVALID;
  std::vector<data::GCGTagType>::vector(&this->tag_list);
  std::vector<data::GCGTokenConfig>::vector(&this->token_list);
  std::vector<unsigned int>::vector(&this->skill_list);
  if ( *(char *)(((unsigned __int64)&this->is_can_obtain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_obtain, v3, &this->is_can_obtain);
  this->is_can_obtain = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->limit = 0;
};

// Line 316: range 00000000137842AC-0000000013784573
void __cdecl data::GCGCardConfig::GCGCardConfig(data::GCGCardConfig *const this, const data::GCGCardConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGCardType card_type; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_skill_list; // rsi
  bool is_can_obtain; // cl
  char v10; // al
  __int64 v11; // rsi
  uint32_t limit; // ecx
  char v13; // dl
  const data::GCGCardConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGCardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->card_type);
  }
  card_type = v14->card_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->card_type, v5);
  }
  this->card_type = card_type;
  std::vector<data::GCGTagType>::vector(&this->tag_list, &v14->tag_list);
  std::vector<data::GCGTokenConfig>::vector(&this->token_list, &v14->token_list);
  p_skill_list = &v14->skill_list;
  std::vector<unsigned int>::vector(&this->skill_list, &v14->skill_list);
  if ( *(char *)(((unsigned __int64)&v14->is_can_obtain >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_can_obtain, p_skill_list, &v14->is_can_obtain);
  is_can_obtain = v14->is_can_obtain;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_can_obtain >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_skill_list) = v10 != 0;
    __asan_report_store1(&this->is_can_obtain, p_skill_list, &this->is_can_obtain);
  }
  this->is_can_obtain = is_can_obtain;
  v11 = (((_BYTE)v14 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->limit);
  }
  limit = v14->limit;
  v13 = *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->limit, v11);
  }
  this->limit = limit;
};

// Line 316: range 0000000013784574-0000000013784A59
void __cdecl data::GCGCardExcelConfig::GCGCardExcelConfig(
        data::GCGCardExcelConfig *const this,
        const data::GCGCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::GCGTokenType token_to_show; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGChooseTargetType choose_target_type; // ecx
  char v7; // dl
  std::vector<data::GCGCost> *p_cost_list; // rsi
  int32_t revise_priority; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t block_ai_card_id; // ecx
  char v13; // dl
  data::GCGTagType ai_target_exclude_card_tag; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t pay_card_ai_min_dice_num; // ecx
  char v18; // dl
  uint32_t pay_card_ai_max_dice_num; // ecx
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool is_need_preview; // cl
  char v24; // dl
  __int64 v25; // rdx
  const data::GCGCardExcelConfig *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  data::GCGCardConfig::GCGCardConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_to_show >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->token_to_show >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->token_to_show);
  }
  token_to_show = a2->token_to_show;
  v4 = *(_BYTE *)(((unsigned __int64)&this->token_to_show >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->token_to_show, a2);
  }
  this->token_to_show = token_to_show;
  v5 = (((_BYTE)v26 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->choose_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->choose_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->choose_target_type);
  }
  choose_target_type = v26->choose_target_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->choose_target_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->choose_target_type, v5);
  }
  this->choose_target_type = choose_target_type;
  std::vector<unsigned int>::vector(&this->choose_target_list, &v26->choose_target_list);
  p_cost_list = &v26->cost_list;
  std::vector<data::GCGCost>::vector(&this->cost_list, &v26->cost_list);
  if ( *(_BYTE *)(((unsigned __int64)&v26->revise_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->revise_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->revise_priority);
  }
  revise_priority = v26->revise_priority;
  v10 = *(_BYTE *)(((unsigned __int64)&this->revise_priority >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_cost_list) = v10 != 0;
    __asan_report_store4(&this->revise_priority, p_cost_list);
  }
  this->revise_priority = revise_priority;
  v11 = (((_BYTE)v26 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->block_ai_card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->block_ai_card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->block_ai_card_id);
  }
  block_ai_card_id = v26->block_ai_card_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->block_ai_card_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->block_ai_card_id, v11);
  }
  this->block_ai_card_id = block_ai_card_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->ai_target_exclude_card_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->ai_target_exclude_card_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->ai_target_exclude_card_tag);
  }
  ai_target_exclude_card_tag = v26->ai_target_exclude_card_tag;
  v15 = *(_BYTE *)(((unsigned __int64)&this->ai_target_exclude_card_tag >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->ai_target_exclude_card_tag, v11);
  }
  this->ai_target_exclude_card_tag = ai_target_exclude_card_tag;
  v16 = (((_BYTE)v26 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->pay_card_ai_min_dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->pay_card_ai_min_dice_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->pay_card_ai_min_dice_num);
  }
  pay_card_ai_min_dice_num = v26->pay_card_ai_min_dice_num;
  v18 = *(_BYTE *)(((unsigned __int64)&this->pay_card_ai_min_dice_num >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->pay_card_ai_min_dice_num, v16);
  }
  this->pay_card_ai_min_dice_num = pay_card_ai_min_dice_num;
  if ( *(_BYTE *)(((unsigned __int64)&v26->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->pay_card_ai_max_dice_num);
  }
  pay_card_ai_max_dice_num = v26->pay_card_ai_max_dice_num;
  v20 = *(_BYTE *)(((unsigned __int64)&this->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->pay_card_ai_max_dice_num, v16);
  }
  this->pay_card_ai_max_dice_num = pay_card_ai_max_dice_num;
  v21 = ((_BYTE)v26 - 84) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&v26->is_need_preview >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&v26->is_need_preview >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&v26->is_need_preview, v21, v22);
  is_need_preview = v26->is_need_preview;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_need_preview >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_need_preview, v21, v25);
  this->is_need_preview = is_need_preview;
};

// Line 319: range 000000000D2C7880-000000000D2C78AA
void __cdecl data::GCGCardConfig::~GCGCardConfig(data::GCGCardConfig *const this)
{
  data::GCGCardConfig::~GCGCardConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 319: range 000000000D2C780E-000000000D2C787F
void __cdecl data::GCGCardConfig::~GCGCardConfig(data::GCGCardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardConfig = v2;
  std::vector<unsigned int>::~vector(&this->skill_list);
  std::vector<data::GCGTokenConfig>::~vector(&this->token_list);
  std::vector<data::GCGTagType>::~vector(&this->tag_list);
};

// Line 334: range 00000000135B803C-00000000135B82D1
void __cdecl data::GCGCardExcelConfig::GCGCardExcelConfig(data::GCGCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::GCGCardConfig::GCGCardConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_to_show >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_to_show >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_to_show, v1);
  }
  this->token_to_show = GCG_TOKEN_NONE;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_target_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_target_type, v3);
  }
  this->choose_target_type = GCG_CHOOSE_NONE;
  std::vector<unsigned int>::vector(&this->choose_target_list);
  std::vector<data::GCGCost>::vector(&this->cost_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_priority, v3);
  }
  this->revise_priority = 0;
  v4 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_ai_card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_ai_card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_ai_card_id, v4);
  }
  this->block_ai_card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_target_exclude_card_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_target_exclude_card_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_target_exclude_card_tag, v4);
  }
  this->ai_target_exclude_card_tag = GCG_TAG_NONE;
  v5 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pay_card_ai_min_dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pay_card_ai_min_dice_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pay_card_ai_min_dice_num, v5);
  }
  this->pay_card_ai_min_dice_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pay_card_ai_max_dice_num, v5);
  }
  this->pay_card_ai_max_dice_num = 0;
  v6 = ((_BYTE)this - 84) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_need_preview >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_need_preview >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_need_preview, v6, v7);
  this->is_need_preview = 0;
};

// Line 338: range 000000000D2C791A-000000000D2C7944
void __cdecl data::GCGCardExcelConfig::~GCGCardExcelConfig(data::GCGCardExcelConfig *const this)
{
  data::GCGCardExcelConfig::~GCGCardExcelConfig(this);
  operator delete(this, 0xB0uLL);
};

// Line 338: range 000000000D2C78AC-000000000D2C7919
void __cdecl data::GCGCardExcelConfig::~GCGCardExcelConfig(data::GCGCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardConfig = v2;
  std::vector<data::GCGCost>::~vector(&this->cost_list);
  std::vector<unsigned int>::~vector(&this->choose_target_list);
  data::GCGCardConfig::~GCGCardConfig(this);
};

// Line 358: range 00000000135B82D2-00000000135B8462
void __cdecl data::GCGCharExcelConfig::GCGCharExcelConfig(data::GCGCharExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::GCGCardConfig::GCGCardConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGCharExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_tag, v1);
  }
  this->element_tag = GCG_TAG_NONE;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp, v3);
  }
  this->hp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_energy, v3);
  }
  this->max_energy = 0;
  v4 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_intention_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_intention_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_intention_num, v4);
  }
  this->max_intention_num = 0;
  if ( *(char *)(((unsigned __int64)&this->is_remove_after_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_remove_after_die, v4, &this->is_remove_after_die);
  this->is_remove_after_die = 0;
};

// Line 358: range 0000000013784B9A-0000000013784E5C
void __cdecl data::GCGCharExcelConfig::GCGCharExcelConfig(
        data::GCGCharExcelConfig *const this,
        const data::GCGCharExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::GCGTagType element_tag; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t hp; // ecx
  char v7; // dl
  uint32_t max_energy; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t max_intention_num; // ecx
  char v12; // dl
  bool is_remove_after_die; // cl
  char v14; // al
  const data::GCGCharExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  data::GCGCardConfig::GCGCardConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGCharExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_tag);
  }
  element_tag = a2->element_tag;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element_tag >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element_tag, a2);
  }
  this->element_tag = element_tag;
  v5 = (((_BYTE)v15 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->hp);
  }
  hp = v15->hp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->hp, v5);
  }
  this->hp = hp;
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->max_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->max_energy);
  }
  max_energy = v15->max_energy;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_energy >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_energy, v5);
  }
  this->max_energy = max_energy;
  v10 = (((_BYTE)v15 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_intention_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->max_intention_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->max_intention_num);
  }
  max_intention_num = v15->max_intention_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_intention_num >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v12 )
    __asan_report_store4(&this->max_intention_num, v10);
  this->max_intention_num = max_intention_num;
  if ( *(char *)(((unsigned __int64)&v15->is_remove_after_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_remove_after_die, v10, &v15->is_remove_after_die);
  is_remove_after_die = v15->is_remove_after_die;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_remove_after_die >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_remove_after_die, v10, &this->is_remove_after_die);
  }
  this->is_remove_after_die = is_remove_after_die;
};

// Line 362: range 000000000D2C7A44-000000000D2C7A6E
void __cdecl data::GCGCharExcelConfig::~GCGCharExcelConfig(data::GCGCharExcelConfig *const this)
{
  data::GCGCharExcelConfig::~GCGCharExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 377: range 00000000135B849C-00000000135B8773
void __cdecl data::GCGSkillExcelConfig::GCGSkillExcelConfig(data::GCGSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->skill_json);
  std::vector<data::GCGCost>::vector(&this->cost_list);
  std::vector<data::GCGSkillTagType>::vector(&this->skill_tag_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_recharge >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_recharge >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_recharge, v1);
  }
  this->energy_recharge = 0;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_ai_card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_ai_card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_ai_card_id, v3);
  }
  this->block_ai_card_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_hidden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_hidden, v3, &this->is_hidden);
  this->is_hidden = 0;
  v4 = ((_BYTE)this + 105) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_hidden_hint_banner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_hidden_hint_banner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_hidden_hint_banner, v4, v5);
  this->is_hidden_hint_banner = 0;
  std::vector<unsigned int>::vector(&this->block_ai_card_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_ai_card_sum_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_ai_card_sum_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_ai_card_sum_num, v4);
  }
  this->block_ai_card_sum_num = 0;
  v6 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_ai_summon_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_ai_summon_num >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_ai_summon_num, v6);
  }
  this->block_ai_summon_num = 0;
  if ( *(char *)(((unsigned __int64)&this->is_not_add_ai_direct_use_skill_num >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_not_add_ai_direct_use_skill_num, v6, &this->is_not_add_ai_direct_use_skill_num);
  this->is_not_add_ai_direct_use_skill_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->statistic_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statistic_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statistic_damage, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->statistic_damage = 0;
};

// Line 377: range 0000000013784F9E-0000000013785522
void __cdecl data::GCGSkillExcelConfig::GCGSkillExcelConfig(
        data::GCGSkillExcelConfig *const this,
        const data::GCGSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::GCGSkillTagType> *p_skill_tag_list; // rsi
  uint32_t energy_recharge; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t block_ai_card_id; // ecx
  char v10; // dl
  bool is_hidden; // cl
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_hidden_hint_banner; // cl
  char v16; // dl
  __int64 v17; // rdx
  std::vector<unsigned int> *p_block_ai_card_list; // rsi
  uint32_t block_ai_card_sum_num; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t block_ai_summon_num; // ecx
  char v23; // dl
  bool is_not_add_ai_direct_use_skill_num; // cl
  char v25; // al
  __int64 v26; // rsi
  uint32_t statistic_damage; // ecx
  char v28; // dl
  const data::GCGSkillExcelConfig *v29; // [rsp+0h] [rbp-20h]

  v29 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  std::string::basic_string(&this->skill_json, &v29->skill_json);
  std::vector<data::GCGCost>::vector(&this->cost_list, &v29->cost_list);
  p_skill_tag_list = &v29->skill_tag_list;
  std::vector<data::GCGSkillTagType>::vector(&this->skill_tag_list, &v29->skill_tag_list);
  if ( *(_BYTE *)(((unsigned __int64)&v29->energy_recharge >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->energy_recharge >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->energy_recharge);
  }
  energy_recharge = v29->energy_recharge;
  v7 = *(_BYTE *)(((unsigned __int64)&this->energy_recharge >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_skill_tag_list) = v7 != 0;
    __asan_report_store4(&this->energy_recharge, p_skill_tag_list);
  }
  this->energy_recharge = energy_recharge;
  v8 = (((_BYTE)v29 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->block_ai_card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->block_ai_card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->block_ai_card_id);
  }
  block_ai_card_id = v29->block_ai_card_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->block_ai_card_id >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v10 )
    __asan_report_store4(&this->block_ai_card_id, v8);
  this->block_ai_card_id = block_ai_card_id;
  if ( *(char *)(((unsigned __int64)&v29->is_hidden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v29->is_hidden, v8, &v29->is_hidden);
  is_hidden = v29->is_hidden;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_hidden >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->is_hidden, v8, &this->is_hidden);
  }
  this->is_hidden = is_hidden;
  v13 = ((_BYTE)v29 + 105) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v29->is_hidden_hint_banner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v29->is_hidden_hint_banner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v29->is_hidden_hint_banner, v13, v14);
  is_hidden_hint_banner = v29->is_hidden_hint_banner;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_hidden_hint_banner >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_hidden_hint_banner, v13, v17);
  this->is_hidden_hint_banner = is_hidden_hint_banner;
  p_block_ai_card_list = &v29->block_ai_card_list;
  std::vector<unsigned int>::vector(&this->block_ai_card_list, &v29->block_ai_card_list);
  if ( *(_BYTE *)(((unsigned __int64)&v29->block_ai_card_sum_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->block_ai_card_sum_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->block_ai_card_sum_num);
  }
  block_ai_card_sum_num = v29->block_ai_card_sum_num;
  v20 = *(_BYTE *)(((unsigned __int64)&this->block_ai_card_sum_num >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_block_ai_card_list) = v20 != 0;
    __asan_report_store4(&this->block_ai_card_sum_num, p_block_ai_card_list);
  }
  this->block_ai_card_sum_num = block_ai_card_sum_num;
  v21 = (((_BYTE)v29 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->block_ai_summon_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->block_ai_summon_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->block_ai_summon_num);
  }
  block_ai_summon_num = v29->block_ai_summon_num;
  v23 = *(_BYTE *)(((unsigned __int64)&this->block_ai_summon_num >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  if ( v23 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v23 )
    __asan_report_store4(&this->block_ai_summon_num, v21);
  this->block_ai_summon_num = block_ai_summon_num;
  if ( *(char *)(((unsigned __int64)&v29->is_not_add_ai_direct_use_skill_num >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v29->is_not_add_ai_direct_use_skill_num, v21, &v29->is_not_add_ai_direct_use_skill_num);
  is_not_add_ai_direct_use_skill_num = v29->is_not_add_ai_direct_use_skill_num;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_not_add_ai_direct_use_skill_num >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store1(&this->is_not_add_ai_direct_use_skill_num, v21, &this->is_not_add_ai_direct_use_skill_num);
  }
  this->is_not_add_ai_direct_use_skill_num = is_not_add_ai_direct_use_skill_num;
  v26 = (((_BYTE)v29 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->statistic_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->statistic_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->statistic_damage);
  }
  statistic_damage = v29->statistic_damage;
  v28 = *(_BYTE *)(((unsigned __int64)&this->statistic_damage >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->statistic_damage, v26);
  }
  this->statistic_damage = statistic_damage;
};

// Line 380: range 000000000D2C7BA2-000000000D2C7BCC
void __cdecl data::GCGSkillExcelConfig::~GCGSkillExcelConfig(data::GCGSkillExcelConfig *const this)
{
  data::GCGSkillExcelConfig::~GCGSkillExcelConfig(this);
  operator delete(this, 0x98uLL);
};

// Line 403: range 0000000014D3115C-0000000014D3126B
data::GCGChooseTargetCond *__cdecl data::GCGChooseTargetCond::operator=(
        data::GCGChooseTargetCond *const this,
        const data::GCGChooseTargetCond *a2)
{
  data::GCGChooseTargetCondType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t value; // ecx
  char v6; // dl
  const data::GCGChooseTargetCond *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->value);
  }
  value = v8->value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->value, v4);
  }
  this->value = value;
  return this;
};

// Line 403: range 00000000137B7386-00000000137B74C5
void __cdecl data::GCGChooseTargetCond::GCGChooseTargetCond(
        data::GCGChooseTargetCond *const this,
        const data::GCGChooseTargetCond *a2)
{
  int (**v2)(...); // rdx
  data::GCGChooseTargetCondType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t value; // ecx
  char v7; // dl
  const data::GCGChooseTargetCond *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGChooseTargetCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGChooseTargetCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->value);
  }
  value = v8->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->value, v5);
  }
  this->value = value;
};

// Line 406: range 0000000013714B76-0000000013714BB7
void __cdecl data::GCGChooseTargetCond::~GCGChooseTargetCond(data::GCGChooseTargetCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChooseTargetCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChooseTargetCond = v2;
};

// Line 406: range 0000000013714BB8-0000000013714BE2
void __cdecl data::GCGChooseTargetCond::~GCGChooseTargetCond(data::GCGChooseTargetCond *const this)
{
  data::GCGChooseTargetCond::~GCGChooseTargetCond(this);
  operator delete(this, 0x10uLL);
};

// Line 416: range 0000000014D312CC-0000000014D3144B
data::GCGChooseSortCond *__cdecl data::GCGChooseSortCond::operator=(
        data::GCGChooseSortCond *const this,
        const data::GCGChooseSortCond *a2)
{
  data::GCGChooseSortCondType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool larger; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::GCGTagType tag; // ecx
  char v10; // al
  const data::GCGChooseSortCond *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v4 = ((_BYTE)v12 + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->larger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->larger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->larger, v4, v5);
  larger = v12->larger;
  v7 = *(_BYTE *)(((unsigned __int64)&this->larger >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->larger, v4, v8);
  this->larger = larger;
  if ( *(_BYTE *)(((unsigned __int64)&v12->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->tag);
  }
  tag = v12->tag;
  v10 = *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v4) = v10 != 0;
    __asan_report_store4(&this->tag, v4);
  }
  this->tag = tag;
  return this;
};

// Line 416: range 00000000137B7584-00000000137B7733
void __cdecl data::GCGChooseSortCond::GCGChooseSortCond(
        data::GCGChooseSortCond *const this,
        const data::GCGChooseSortCond *a2)
{
  int (**v2)(...); // rdx
  data::GCGChooseSortCondType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool larger; // cl
  char v8; // dl
  __int64 v9; // rdx
  data::GCGTagType tag; // ecx
  char v11; // al
  const data::GCGChooseSortCond *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGChooseSortCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGChooseSortCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v5 = ((_BYTE)v12 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v12->larger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v12->larger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v12->larger, v5, v6);
  larger = v12->larger;
  v8 = *(_BYTE *)(((unsigned __int64)&this->larger >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->larger, v5, v9);
  this->larger = larger;
  if ( *(_BYTE *)(((unsigned __int64)&v12->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->tag);
  }
  tag = v12->tag;
  v11 = *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->tag, v5);
  }
  this->tag = tag;
};

// Line 419: range 0000000013714BE4-0000000013714C25
void __cdecl data::GCGChooseSortCond::~GCGChooseSortCond(data::GCGChooseSortCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChooseSortCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChooseSortCond = v2;
};

// Line 419: range 0000000013714C26-0000000013714C50
void __cdecl data::GCGChooseSortCond::~GCGChooseSortCond(data::GCGChooseSortCond *const this)
{
  data::GCGChooseSortCond::~GCGChooseSortCond(this);
  operator delete(this, 0x18uLL);
};

// Line 430: range 00000000135B87E4-00000000135B8917
void __cdecl data::GCGChooseExcelConfig::GCGChooseExcelConfig(data::GCGChooseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGChooseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChooseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type, v3);
  }
  this->card_type = GCG_CARD_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_camp, v3);
  }
  this->target_camp = DEFAULT;
  std::vector<data::GCGTagType>::vector(&this->tag_list);
  std::vector<data::GCGChooseTargetCond>::vector(&this->cond_list);
  std::vector<data::GCGChooseSortCond>::vector(&this->sort_list);
};

// Line 430: range 0000000013785664-00000000137858A5
void __cdecl data::GCGChooseExcelConfig::GCGChooseExcelConfig(
        data::GCGChooseExcelConfig *const this,
        const data::GCGChooseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGCardType card_type; // ecx
  char v7; // dl
  data::GCGChooseTargetCamp target_camp; // ecx
  char v9; // al
  const data::GCGChooseExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGChooseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGChooseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->card_type);
  }
  card_type = v10->card_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->card_type, v5);
  }
  this->card_type = card_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->target_camp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->target_camp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->target_camp);
  }
  target_camp = v10->target_camp;
  v9 = *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->target_camp, v5);
  }
  this->target_camp = target_camp;
  std::vector<data::GCGTagType>::vector(&this->tag_list, &v10->tag_list);
  std::vector<data::GCGChooseTargetCond>::vector(&this->cond_list, &v10->cond_list);
  std::vector<data::GCGChooseSortCond>::vector(&this->sort_list, &v10->sort_list);
};

// Line 433: range 000000000D2C7CF0-000000000D2C7D1A
void __cdecl data::GCGChooseExcelConfig::~GCGChooseExcelConfig(data::GCGChooseExcelConfig *const this)
{
  data::GCGChooseExcelConfig::~GCGChooseExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 449: range 0000000014D314BE-0000000014D315CD
data::GCGWaitingCharacterInfo *__cdecl data::GCGWaitingCharacterInfo::operator=(
        data::GCGWaitingCharacterInfo *const this,
        const data::GCGWaitingCharacterInfo *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t cond_count; // ecx
  char v6; // dl
  const data::GCGWaitingCharacterInfo *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->cond_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->cond_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->cond_count);
  }
  cond_count = v8->cond_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->cond_count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->cond_count, v4);
  }
  this->cond_count = cond_count;
  return this;
};

// Line 449: range 0000000013754B82-0000000013754C47
void __cdecl data::GCGWaitingCharacterInfo::GCGWaitingCharacterInfo(data::GCGWaitingCharacterInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWaitingCharacterInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWaitingCharacterInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->cond_count = 0;
};

// Line 449: range 00000000137B77F2-00000000137B7931
void __cdecl data::GCGWaitingCharacterInfo::GCGWaitingCharacterInfo(
        data::GCGWaitingCharacterInfo *const this,
        const data::GCGWaitingCharacterInfo *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t cond_count; // ecx
  char v7; // dl
  const data::GCGWaitingCharacterInfo *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGWaitingCharacterInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGWaitingCharacterInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->cond_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->cond_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->cond_count);
  }
  cond_count = v8->cond_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_count, v5);
  }
  this->cond_count = cond_count;
};

// Line 452: range 00000000137151FC-000000001371523D
void __cdecl data::GCGWaitingCharacterInfo::~GCGWaitingCharacterInfo(data::GCGWaitingCharacterInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWaitingCharacterInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWaitingCharacterInfo = v2;
};

// Line 452: range 000000001371523E-0000000013715268
void __cdecl data::GCGWaitingCharacterInfo::~GCGWaitingCharacterInfo(data::GCGWaitingCharacterInfo *const this)
{
  data::GCGWaitingCharacterInfo::~GCGWaitingCharacterInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 462: range 00000000135B8950-00000000135B8B8C
void __cdecl data::GCGDeckExcelConfig::GCGDeckExcelConfig(data::GCGDeckExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeckExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeckExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->character_list);
  std::vector<unsigned int>::vector(&this->card_list);
  std::vector<std::string>::vector(&this->init_modify_card_str_list);
  std::vector<std::vector<unsigned int>>::vector(&this->init_modify_card_list);
  std::vector<unsigned int>::vector(&this->init_hp_list);
  std::vector<unsigned int>::vector(&this->init_energy_list);
  std::string::basic_string(&this->behavior_tree_file_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->advanture_rule_id, v1);
  }
  this->advanture_rule_id = 0;
  std::vector<data::GCGWaitingCharacterInfo>::vector(&this->waiting_character_list);
  std::vector<unsigned int>::vector(&this->protected_priority_list);
  std::vector<bool>::vector(&this->character_card_face_gold_list);
  if ( *(char *)(((unsigned __int64)&this->is_card_face_gold >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_card_face_gold, v1, &this->is_card_face_gold);
  this->is_card_face_gold = 0;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_deck_invalid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_deck_invalid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_deck_invalid, v3, v4);
  this->is_deck_invalid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_back_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->card_back_id = 0;
};

// Line 462: range 00000000137859E6-0000000013785EB9
void __cdecl data::GCGDeckExcelConfig::GCGDeckExcelConfig(
        data::GCGDeckExcelConfig *const this,
        const data::GCGDeckExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_behavior_tree_file_name; // rsi
  uint32_t advanture_rule_id; // ecx
  char v7; // al
  std::vector<bool> *p_character_card_face_gold_list; // rsi
  bool is_card_face_gold; // cl
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_deck_invalid; // cl
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rsi
  uint32_t card_back_id; // ecx
  char v18; // dl
  const data::GCGDeckExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGDeckExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeckExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  std::vector<unsigned int>::vector(&this->character_list, &v19->character_list);
  std::vector<unsigned int>::vector(&this->card_list, &v19->card_list);
  std::vector<std::string>::vector(&this->init_modify_card_str_list, &v19->init_modify_card_str_list);
  std::vector<std::vector<unsigned int>>::vector(&this->init_modify_card_list, &v19->init_modify_card_list);
  std::vector<unsigned int>::vector(&this->init_hp_list, &v19->init_hp_list);
  std::vector<unsigned int>::vector(&this->init_energy_list, &v19->init_energy_list);
  p_behavior_tree_file_name = &v19->behavior_tree_file_name;
  std::string::basic_string(&this->behavior_tree_file_name, &v19->behavior_tree_file_name);
  if ( *(_BYTE *)(((unsigned __int64)&v19->advanture_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->advanture_rule_id);
  }
  advanture_rule_id = v19->advanture_rule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_behavior_tree_file_name) = v7 != 0;
    __asan_report_store4(&this->advanture_rule_id, p_behavior_tree_file_name);
  }
  this->advanture_rule_id = advanture_rule_id;
  std::vector<data::GCGWaitingCharacterInfo>::vector(&this->waiting_character_list, &v19->waiting_character_list);
  std::vector<unsigned int>::vector(&this->protected_priority_list, &v19->protected_priority_list);
  p_character_card_face_gold_list = &v19->character_card_face_gold_list;
  std::vector<bool>::vector(&this->character_card_face_gold_list, &v19->character_card_face_gold_list);
  if ( *(char *)(((unsigned __int64)&v19->is_card_face_gold >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_card_face_gold, p_character_card_face_gold_list, &v19->is_card_face_gold);
  is_card_face_gold = v19->is_card_face_gold;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_card_face_gold >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_character_card_face_gold_list) = v10 != 0;
    __asan_report_store1(&this->is_card_face_gold, p_character_card_face_gold_list, &this->is_card_face_gold);
  }
  this->is_card_face_gold = is_card_face_gold;
  v11 = ((_BYTE)v19 + 33) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v19->is_deck_invalid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v19->is_deck_invalid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v19->is_deck_invalid, v11, v12);
  is_deck_invalid = v19->is_deck_invalid;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_deck_invalid >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_deck_invalid, v11, v15);
  this->is_deck_invalid = is_deck_invalid;
  v16 = (((_BYTE)v19 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->card_back_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->card_back_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->card_back_id);
  }
  card_back_id = v19->card_back_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->card_back_id, v16);
  }
  this->card_back_id = card_back_id;
};

// Line 465: range 000000000D2C7EB8-000000000D2C7EE2
void __cdecl data::GCGDeckExcelConfig::~GCGDeckExcelConfig(data::GCGDeckExcelConfig *const this)
{
  data::GCGDeckExcelConfig::~GCGDeckExcelConfig(this);
  operator delete(this, 0x128uLL);
};

// Line 490: range 0000000013754DA4-0000000013754EED
void __cdecl data::GCGVirtualDiceCurveConfig::GCGVirtualDiceCurveConfig(data::GCGVirtualDiceCurveConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGVirtualDiceCurveConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGVirtualDiceCurveConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dice_type, v1);
  }
  this->dice_type = GCG_VIRTUAL_DICE_INVALID;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_init_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dice_init_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dice_init_num, v3);
  }
  this->dice_init_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_round_incre_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_round_incre_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dice_round_incre_num, v3);
  }
  this->dice_round_incre_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_incre_limit_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dice_incre_limit_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dice_incre_limit_num, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->dice_incre_limit_num = 0;
};

// Line 490: range 00000000137B79F0-00000000137B7C29
void __cdecl data::GCGVirtualDiceCurveConfig::GCGVirtualDiceCurveConfig(
        data::GCGVirtualDiceCurveConfig *const this,
        const data::GCGVirtualDiceCurveConfig *a2)
{
  int (**v2)(...); // rdx
  data::GCGVirtualDiceType dice_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dice_init_num; // ecx
  char v7; // dl
  uint32_t dice_round_incre_num; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dice_incre_limit_num; // ecx
  char v12; // dl
  const data::GCGVirtualDiceCurveConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGVirtualDiceCurveConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGVirtualDiceCurveConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dice_type);
  }
  dice_type = a2->dice_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dice_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dice_type, a2);
  }
  this->dice_type = dice_type;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dice_init_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->dice_init_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->dice_init_num);
  }
  dice_init_num = v13->dice_init_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dice_init_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dice_init_num, v5);
  }
  this->dice_init_num = dice_init_num;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dice_round_incre_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->dice_round_incre_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->dice_round_incre_num);
  }
  dice_round_incre_num = v13->dice_round_incre_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dice_round_incre_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dice_round_incre_num, v5);
  }
  this->dice_round_incre_num = dice_round_incre_num;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dice_incre_limit_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->dice_incre_limit_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->dice_incre_limit_num);
  }
  dice_incre_limit_num = v13->dice_incre_limit_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dice_incre_limit_num >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dice_incre_limit_num, v10);
  }
  this->dice_incre_limit_num = dice_incre_limit_num;
};

// Line 493: range 0000000013715856-0000000013715880
void __cdecl data::GCGVirtualDiceCurveConfig::~GCGVirtualDiceCurveConfig(data::GCGVirtualDiceCurveConfig *const this)
{
  data::GCGVirtualDiceCurveConfig::~GCGVirtualDiceCurveConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 493: range 0000000013715814-0000000013715855
void __cdecl data::GCGVirtualDiceCurveConfig::~GCGVirtualDiceCurveConfig(data::GCGVirtualDiceCurveConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGVirtualDiceCurveConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGVirtualDiceCurveConfig = v2;
};

// Line 505: range 00000000135B8BC6-00000000135B8E1F
void __cdecl data::GCGAdvantureRuleExcelConfig::GCGAdvantureRuleExcelConfig(
        data::GCGAdvantureRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGAdvantureRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGAdvantureRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::GCGVirtualDiceCurveConfig>::vector(&this->virtual_dice_curve_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_specify_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_specify_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority_revise_per_specify_cost, v1);
  }
  this->priority_revise_per_specify_cost = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_same_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_same_cost >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority_revise_per_same_cost, v3);
  }
  this->priority_revise_per_same_cost = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_void_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_void_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority_revise_per_void_cost, v3);
  }
  this->priority_revise_per_void_cost = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_energy_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_energy_cost >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority_revise_per_energy_cost, v4);
  }
  this->priority_revise_per_energy_cost = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_intention >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_intention >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority_revise_per_intention, v4);
  }
  this->priority_revise_per_intention = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_order >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority_revise_per_order, v5);
  }
  this->priority_revise_per_order = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority_revise_per_skill_tag, v5);
  }
  this->priority_revise_per_skill_tag = 0;
};

// Line 505: range 0000000013785FFA-0000000013786432
void __cdecl data::GCGAdvantureRuleExcelConfig::GCGAdvantureRuleExcelConfig(
        data::GCGAdvantureRuleExcelConfig *const this,
        const data::GCGAdvantureRuleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::GCGVirtualDiceCurveConfig> *p_virtual_dice_curve_config; // rsi
  int32_t priority_revise_per_specify_cost; // ecx
  char v7; // al
  __int64 v8; // rsi
  int32_t priority_revise_per_same_cost; // ecx
  char v10; // dl
  int32_t priority_revise_per_void_cost; // ecx
  char v12; // al
  __int64 v13; // rsi
  int32_t priority_revise_per_energy_cost; // ecx
  char v15; // dl
  int32_t priority_revise_per_intention; // ecx
  char v17; // al
  __int64 v18; // rsi
  int32_t priority_revise_per_order; // ecx
  char v20; // dl
  int32_t priority_revise_per_skill_tag; // ecx
  char v22; // al
  const data::GCGAdvantureRuleExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGAdvantureRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGAdvantureRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  p_virtual_dice_curve_config = &v23->virtual_dice_curve_config;
  std::vector<data::GCGVirtualDiceCurveConfig>::vector(
    &this->virtual_dice_curve_config,
    &v23->virtual_dice_curve_config);
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_specify_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_specify_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->priority_revise_per_specify_cost);
  }
  priority_revise_per_specify_cost = v23->priority_revise_per_specify_cost;
  v7 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_specify_cost >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_virtual_dice_curve_config) = v7 != 0;
    __asan_report_store4(&this->priority_revise_per_specify_cost, p_virtual_dice_curve_config);
  }
  this->priority_revise_per_specify_cost = priority_revise_per_specify_cost;
  v8 = (((_BYTE)v23 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_same_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_same_cost >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->priority_revise_per_same_cost);
  }
  priority_revise_per_same_cost = v23->priority_revise_per_same_cost;
  v10 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_same_cost >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->priority_revise_per_same_cost, v8);
  }
  this->priority_revise_per_same_cost = priority_revise_per_same_cost;
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_void_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_void_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->priority_revise_per_void_cost);
  }
  priority_revise_per_void_cost = v23->priority_revise_per_void_cost;
  v12 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_void_cost >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->priority_revise_per_void_cost, v8);
  }
  this->priority_revise_per_void_cost = priority_revise_per_void_cost;
  v13 = (((_BYTE)v23 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_energy_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_energy_cost >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->priority_revise_per_energy_cost);
  }
  priority_revise_per_energy_cost = v23->priority_revise_per_energy_cost;
  v15 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_energy_cost >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->priority_revise_per_energy_cost, v13);
  }
  this->priority_revise_per_energy_cost = priority_revise_per_energy_cost;
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_intention >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_intention >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->priority_revise_per_intention);
  }
  priority_revise_per_intention = v23->priority_revise_per_intention;
  v17 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_intention >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->priority_revise_per_intention, v13);
  }
  this->priority_revise_per_intention = priority_revise_per_intention;
  v18 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_order >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->priority_revise_per_order);
  }
  priority_revise_per_order = v23->priority_revise_per_order;
  v20 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_order >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->priority_revise_per_order, v18);
  }
  this->priority_revise_per_order = priority_revise_per_order;
  if ( *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->priority_revise_per_skill_tag);
  }
  priority_revise_per_skill_tag = v23->priority_revise_per_skill_tag;
  v22 = *(_BYTE *)(((unsigned __int64)&this->priority_revise_per_skill_tag >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->priority_revise_per_skill_tag, v18);
  }
  this->priority_revise_per_skill_tag = priority_revise_per_skill_tag;
};

// Line 508: range 000000000D2C7FE6-000000000D2C8010
void __cdecl data::GCGAdvantureRuleExcelConfig::~GCGAdvantureRuleExcelConfig(
        data::GCGAdvantureRuleExcelConfig *const this)
{
  data::GCGAdvantureRuleExcelConfig::~GCGAdvantureRuleExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 527: range 0000000013786574-00000000137867AD
void __cdecl data::GCGElementReactionExcelConfig::GCGElementReactionExcelConfig(
        data::GCGElementReactionExcelConfig *const this,
        const data::GCGElementReactionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGEffectElementType element_type1; // ecx
  char v7; // dl
  data::GCGEffectElementType element_type2; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t skill_id; // ecx
  char v12; // dl
  const data::GCGElementReactionExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGElementReactionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGElementReactionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->element_type1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->element_type1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->element_type1);
  }
  element_type1 = v13->element_type1;
  v7 = *(_BYTE *)(((unsigned __int64)&this->element_type1 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->element_type1, v5);
  }
  this->element_type1 = element_type1;
  if ( *(_BYTE *)(((unsigned __int64)&v13->element_type2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->element_type2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->element_type2);
  }
  element_type2 = v13->element_type2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->element_type2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->element_type2, v5);
  }
  this->element_type2 = element_type2;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->skill_id);
  }
  skill_id = v13->skill_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->skill_id, v10);
  }
  this->skill_id = skill_id;
};

// Line 530: range 000000000D2C8104-000000000D2C812E
void __cdecl data::GCGElementReactionExcelConfig::~GCGElementReactionExcelConfig(
        data::GCGElementReactionExcelConfig *const this)
{
  data::GCGElementReactionExcelConfig::~GCGElementReactionExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 544: range 00000000135B8E20-00000000135B911C
void __cdecl data::GCGGameExcelConfig::GCGGameExcelConfig(data::GCGGameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rule_id, v3);
  }
  this->rule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_group_id, v3);
  }
  this->card_group_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enemy_card_group_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enemy_card_group_id, v4);
  }
  this->enemy_card_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_type, v4);
  }
  this->game_type = PVP;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_hand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_hand >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_hand, v5);
  }
  this->init_hand = RANDOM;
  std::vector<unsigned int>::vector(&this->init_card_list);
  std::vector<unsigned int>::vector(&this->init_enemy_card_list);
  if ( *(char *)(((unsigned __int64)&this->is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_deck_shuffle, v5, &this->is_ignore_deck_shuffle);
  this->is_ignore_deck_shuffle = 0;
  v6 = ((_BYTE)this + 81) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_ignore_redraw >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_redraw >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_ignore_redraw, v6, v7);
  this->is_ignore_redraw = 0;
  std::vector<unsigned int>::vector(&this->init_onstage_character_index_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_onstage_character_index, v6);
  }
  this->init_onstage_character_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enemy_init_onstage_character_index >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enemy_init_onstage_character_index, (((_BYTE)this + 116) & 7u) + 3);
  }
  this->enemy_init_onstage_character_index = 0;
};

// Line 544: range 00000000137868EE-0000000013786E9E
void __cdecl data::GCGGameExcelConfig::GCGGameExcelConfig(
        data::GCGGameExcelConfig *const this,
        const data::GCGGameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t rule_id; // ecx
  char v7; // dl
  uint32_t card_group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t enemy_card_group_id; // ecx
  char v12; // dl
  data::GCGGameType game_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  data::GCGInitHand init_hand; // ecx
  char v17; // dl
  std::vector<unsigned int> *p_init_enemy_card_list; // rsi
  bool is_ignore_deck_shuffle; // cl
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool is_ignore_redraw; // cl
  char v24; // dl
  __int64 v25; // rdx
  std::vector<unsigned int> *p_init_onstage_character_index_list; // rsi
  uint32_t init_onstage_character_index; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t enemy_init_onstage_character_index; // ecx
  char v31; // dl
  const data::GCGGameExcelConfig *v32; // [rsp+0h] [rbp-20h]

  v32 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGGameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGGameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v32 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->rule_id);
  }
  rule_id = v32->rule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->rule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->rule_id, v5);
  }
  this->rule_id = rule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v32->card_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->card_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->card_group_id);
  }
  card_group_id = v32->card_group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->card_group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->card_group_id, v5);
  }
  this->card_group_id = card_group_id;
  v10 = (((_BYTE)v32 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->enemy_card_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->enemy_card_group_id);
  }
  enemy_card_group_id = v32->enemy_card_group_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->enemy_card_group_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->enemy_card_group_id, v10);
  }
  this->enemy_card_group_id = enemy_card_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v32->game_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->game_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->game_type);
  }
  game_type = v32->game_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->game_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->game_type, v10);
  }
  this->game_type = game_type;
  v15 = (((_BYTE)v32 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->init_hand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->init_hand >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->init_hand);
  }
  init_hand = v32->init_hand;
  v17 = *(_BYTE *)(((unsigned __int64)&this->init_hand >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->init_hand, v15);
  }
  this->init_hand = init_hand;
  std::vector<unsigned int>::vector(&this->init_card_list, &v32->init_card_list);
  p_init_enemy_card_list = &v32->init_enemy_card_list;
  std::vector<unsigned int>::vector(&this->init_enemy_card_list, &v32->init_enemy_card_list);
  if ( *(char *)(((unsigned __int64)&v32->is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v32->is_ignore_deck_shuffle, p_init_enemy_card_list, &v32->is_ignore_deck_shuffle);
  is_ignore_deck_shuffle = v32->is_ignore_deck_shuffle;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_deck_shuffle >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_init_enemy_card_list) = v20 != 0;
    __asan_report_store1(&this->is_ignore_deck_shuffle, p_init_enemy_card_list, &this->is_ignore_deck_shuffle);
  }
  this->is_ignore_deck_shuffle = is_ignore_deck_shuffle;
  v21 = ((_BYTE)v32 + 81) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&v32->is_ignore_redraw >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&v32->is_ignore_redraw >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&v32->is_ignore_redraw, v21, v22);
  is_ignore_redraw = v32->is_ignore_redraw;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_redraw >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_ignore_redraw, v21, v25);
  this->is_ignore_redraw = is_ignore_redraw;
  p_init_onstage_character_index_list = &v32->init_onstage_character_index_list;
  std::vector<unsigned int>::vector(&this->init_onstage_character_index_list, &v32->init_onstage_character_index_list);
  if ( *(_BYTE *)(((unsigned __int64)&v32->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->init_onstage_character_index);
  }
  init_onstage_character_index = v32->init_onstage_character_index;
  v28 = *(_BYTE *)(((unsigned __int64)&this->init_onstage_character_index >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_init_onstage_character_index_list) = v28 != 0;
    __asan_report_store4(&this->init_onstage_character_index, p_init_onstage_character_index_list);
  }
  this->init_onstage_character_index = init_onstage_character_index;
  v29 = (((_BYTE)v32 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v32->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->enemy_init_onstage_character_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->enemy_init_onstage_character_index);
  }
  enemy_init_onstage_character_index = v32->enemy_init_onstage_character_index;
  v31 = *(_BYTE *)(((unsigned __int64)&this->enemy_init_onstage_character_index >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->enemy_init_onstage_character_index, v29);
  }
  this->enemy_init_onstage_character_index = enemy_init_onstage_character_index;
};

// Line 547: range 000000000D2C8238-000000000D2C8262
void __cdecl data::GCGGameExcelConfig::~GCGGameExcelConfig(data::GCGGameExcelConfig *const this)
{
  data::GCGGameExcelConfig::~GCGGameExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 547: range 000000000D2C81C6-000000000D2C8237
void __cdecl data::GCGGameExcelConfig::~GCGGameExcelConfig(data::GCGGameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->init_onstage_character_index_list);
  std::vector<unsigned int>::~vector(&this->init_enemy_card_list);
  std::vector<unsigned int>::~vector(&this->init_card_list);
};

// Line 570: range 00000000135B911E-00000000135B94D8
void __cdecl data::GCGRuleExcelConfig::GCGRuleExcelConfig(data::GCGRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_draw_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_draw_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_draw_num, v3);
  }
  this->first_draw_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->second_draw_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->second_draw_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->second_draw_num, v3);
  }
  this->second_draw_num = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->draw_card_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draw_card_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->draw_card_num, v4);
  }
  this->draw_card_num = 0;
  std::vector<unsigned int>::vector(&this->element_reaction_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_card_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hand_card_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hand_card_limit, v4);
  }
  this->hand_card_limit = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_bonus_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_bonus_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_bonus_time, v5);
  }
  this->start_bonus_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->roll_bonus_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->roll_bonus_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->roll_bonus_time, v5);
  }
  this->roll_bonus_time = 0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_time, v6);
  }
  this->round_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_time, v6);
  }
  this->turn_time = 0;
  v7 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disconnect_time_out >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disconnect_time_out >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disconnect_time_out, v7);
  }
  this->disconnect_time_out = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_time_out >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_time_out >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_time_out, v7);
  }
  this->init_time_out = 0;
  std::vector<unsigned int>::vector(&this->ai_reroll_think_time);
  std::vector<unsigned int>::vector(&this->ai_select_on_stage_think_time);
  std::vector<unsigned int>::vector(&this->ai_redraw_think_time);
  std::vector<unsigned int>::vector(&this->ai_first_action_think_time);
  std::vector<unsigned int>::vector(&this->ai_normal_action_think_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_think_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_think_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_think_time, v7);
  }
  this->monster_think_time = 0;
};

// Line 570: range 0000000013786FE0-0000000013787724
void __cdecl data::GCGRuleExcelConfig::GCGRuleExcelConfig(
        data::GCGRuleExcelConfig *const this,
        const data::GCGRuleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t first_draw_num; // ecx
  char v7; // dl
  uint32_t second_draw_num; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t draw_card_num; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_element_reaction_list; // rsi
  uint32_t hand_card_limit; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t start_bonus_time; // ecx
  char v18; // dl
  uint32_t roll_bonus_time; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t round_time; // ecx
  char v23; // dl
  uint32_t turn_time; // ecx
  char v25; // al
  __int64 v26; // rsi
  uint32_t disconnect_time_out; // ecx
  char v28; // dl
  uint32_t init_time_out; // ecx
  char v30; // al
  std::vector<unsigned int> *p_ai_normal_action_think_time; // rsi
  uint32_t monster_think_time; // ecx
  char v33; // al
  const data::GCGRuleExcelConfig *v34; // [rsp+0h] [rbp-20h]

  v34 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v34 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->first_draw_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->first_draw_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->first_draw_num);
  }
  first_draw_num = v34->first_draw_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->first_draw_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->first_draw_num, v5);
  }
  this->first_draw_num = first_draw_num;
  if ( *(_BYTE *)(((unsigned __int64)&v34->second_draw_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->second_draw_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->second_draw_num);
  }
  second_draw_num = v34->second_draw_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->second_draw_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->second_draw_num, v5);
  }
  this->second_draw_num = second_draw_num;
  v10 = (((_BYTE)v34 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->draw_card_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->draw_card_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->draw_card_num);
  }
  draw_card_num = v34->draw_card_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->draw_card_num >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->draw_card_num, v10);
  }
  this->draw_card_num = draw_card_num;
  p_element_reaction_list = &v34->element_reaction_list;
  std::vector<unsigned int>::vector(&this->element_reaction_list, &v34->element_reaction_list);
  if ( *(_BYTE *)(((unsigned __int64)&v34->hand_card_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->hand_card_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->hand_card_limit);
  }
  hand_card_limit = v34->hand_card_limit;
  v15 = *(_BYTE *)(((unsigned __int64)&this->hand_card_limit >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_element_reaction_list) = v15 != 0;
    __asan_report_store4(&this->hand_card_limit, p_element_reaction_list);
  }
  this->hand_card_limit = hand_card_limit;
  v16 = (((_BYTE)v34 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->start_bonus_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->start_bonus_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->start_bonus_time);
  }
  start_bonus_time = v34->start_bonus_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->start_bonus_time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->start_bonus_time, v16);
  }
  this->start_bonus_time = start_bonus_time;
  if ( *(_BYTE *)(((unsigned __int64)&v34->roll_bonus_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->roll_bonus_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->roll_bonus_time);
  }
  roll_bonus_time = v34->roll_bonus_time;
  v20 = *(_BYTE *)(((unsigned __int64)&this->roll_bonus_time >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->roll_bonus_time, v16);
  }
  this->roll_bonus_time = roll_bonus_time;
  v21 = (((_BYTE)v34 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->round_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->round_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->round_time);
  }
  round_time = v34->round_time;
  v23 = *(_BYTE *)(((unsigned __int64)&this->round_time >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->round_time, v21);
  }
  this->round_time = round_time;
  if ( *(_BYTE *)(((unsigned __int64)&v34->turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->turn_time);
  }
  turn_time = v34->turn_time;
  v25 = *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->turn_time, v21);
  }
  this->turn_time = turn_time;
  v26 = (((_BYTE)v34 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->disconnect_time_out >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->disconnect_time_out >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->disconnect_time_out);
  }
  disconnect_time_out = v34->disconnect_time_out;
  v28 = *(_BYTE *)(((unsigned __int64)&this->disconnect_time_out >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->disconnect_time_out, v26);
  }
  this->disconnect_time_out = disconnect_time_out;
  if ( *(_BYTE *)(((unsigned __int64)&v34->init_time_out >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->init_time_out >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->init_time_out);
  }
  init_time_out = v34->init_time_out;
  v30 = *(_BYTE *)(((unsigned __int64)&this->init_time_out >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->init_time_out, v26);
  }
  this->init_time_out = init_time_out;
  std::vector<unsigned int>::vector(&this->ai_reroll_think_time, &v34->ai_reroll_think_time);
  std::vector<unsigned int>::vector(&this->ai_select_on_stage_think_time, &v34->ai_select_on_stage_think_time);
  std::vector<unsigned int>::vector(&this->ai_redraw_think_time, &v34->ai_redraw_think_time);
  std::vector<unsigned int>::vector(&this->ai_first_action_think_time, &v34->ai_first_action_think_time);
  p_ai_normal_action_think_time = &v34->ai_normal_action_think_time;
  std::vector<unsigned int>::vector(&this->ai_normal_action_think_time, &v34->ai_normal_action_think_time);
  if ( *(_BYTE *)(((unsigned __int64)&v34->monster_think_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->monster_think_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->monster_think_time);
  }
  monster_think_time = v34->monster_think_time;
  v33 = *(_BYTE *)(((unsigned __int64)&this->monster_think_time >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(p_ai_normal_action_think_time) = v33 != 0;
    __asan_report_store4(&this->monster_think_time, p_ai_normal_action_think_time);
  }
  this->monster_think_time = monster_think_time;
};

// Line 573: range 000000000D2C83BA-000000000D2C83E4
void __cdecl data::GCGRuleExcelConfig::~GCGRuleExcelConfig(data::GCGRuleExcelConfig *const this)
{
  data::GCGRuleExcelConfig::~GCGRuleExcelConfig(this);
  operator delete(this, 0xD0uLL);
};

// Line 601: range 0000000013787866-0000000013787920
void __cdecl data::GCGCardViewExcelConfig::GCGCardViewExcelConfig(
        data::GCGCardViewExcelConfig *const this,
        const data::GCGCardViewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::GCGCardViewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCardViewExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
};

// Line 604: range 000000000D2C84D8-000000000D2C8502
void __cdecl data::GCGCardViewExcelConfig::~GCGCardViewExcelConfig(data::GCGCardViewExcelConfig *const this)
{
  data::GCGCardViewExcelConfig::~GCGCardViewExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 614: range 000000000D42FE2A-000000000D42FF19
void __cdecl data::GCGGameExcelConfigMgrBase::GCGGameExcelConfigMgrBase(data::GCGGameExcelConfigMgrBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameExcelConfigMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameExcelConfigMgrBase = v2;
  std::unordered_map<unsigned int,data::GCGCardExcelConfig>::unordered_map(&this->gcg_card_excel_config_map);
  std::unordered_map<unsigned int,data::GCGCharExcelConfig>::unordered_map(&this->gcg_char_excel_config_map);
  std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::unordered_map(&this->gcg_skill_excel_config_map);
  std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::unordered_map(&this->gcg_choose_excel_config_map);
  std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::unordered_map(&this->gcg_deck_excel_config_map);
  std::unordered_map<unsigned int,data::GCGAdvantureRuleExcelConfig>::unordered_map(&this->gcg_advanture_rule_excel_config_map);
  std::unordered_map<unsigned int,data::GCGElementReactionExcelConfig>::unordered_map(&this->gcg_element_reaction_excel_config_map);
  std::unordered_map<unsigned int,data::GCGGameExcelConfig>::unordered_map(&this->gcg_game_excel_config_map);
  std::unordered_map<unsigned int,data::GCGRuleExcelConfig>::unordered_map(&this->gcg_rule_excel_config_map);
  std::unordered_map<unsigned int,data::GCGCardViewExcelConfig>::unordered_map(&this->gcg_card_view_excel_config_map);
};

// Line 614: range 000000000CE0ACFE-000000000CE0ADED
void __cdecl data::GCGGameExcelConfigMgrBase::~GCGGameExcelConfigMgrBase(data::GCGGameExcelConfigMgrBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameExcelConfigMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameExcelConfigMgrBase = v2;
  std::unordered_map<unsigned int,data::GCGCardViewExcelConfig>::~unordered_map(&this->gcg_card_view_excel_config_map);
  std::unordered_map<unsigned int,data::GCGRuleExcelConfig>::~unordered_map(&this->gcg_rule_excel_config_map);
  std::unordered_map<unsigned int,data::GCGGameExcelConfig>::~unordered_map(&this->gcg_game_excel_config_map);
  std::unordered_map<unsigned int,data::GCGElementReactionExcelConfig>::~unordered_map(&this->gcg_element_reaction_excel_config_map);
  std::unordered_map<unsigned int,data::GCGAdvantureRuleExcelConfig>::~unordered_map(&this->gcg_advanture_rule_excel_config_map);
  std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::~unordered_map(&this->gcg_deck_excel_config_map);
  std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::~unordered_map(&this->gcg_choose_excel_config_map);
  std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::~unordered_map(&this->gcg_skill_excel_config_map);
  std::unordered_map<unsigned int,data::GCGCharExcelConfig>::~unordered_map(&this->gcg_char_excel_config_map);
  std::unordered_map<unsigned int,data::GCGCardExcelConfig>::~unordered_map(&this->gcg_card_excel_config_map);
};
