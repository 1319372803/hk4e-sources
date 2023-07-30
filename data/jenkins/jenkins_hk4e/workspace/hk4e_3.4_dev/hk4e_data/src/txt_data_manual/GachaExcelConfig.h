// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GachaExcelConfig.h

// Line 20: range 0000000014757D84-0000000014757F74
void __cdecl data::GachaParentProbRuleConfig::GachaParentProbRuleConfig(data::GachaParentProbRuleConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->gacha_prob_rule_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_item_parent_type, v2);
  }
  this->gacha_item_parent_type = GACHA_ITEM_PARENT_INVALID;
  std::set<data::GachaItemType>::set(&this->gacha_item_type_set);
  std::vector<data::GachaProbRuleConfig>::vector(&this->gacha_item_type_config_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->round_table_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_table_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_table_priority, v2);
  }
  this->round_table_priority = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_prob, v3);
  }
  this->base_prob = 0;
  if ( *(char *)(((unsigned __int64)&this->is_guaranteed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guaranteed, v3, &this->is_guaranteed);
  this->is_guaranteed = 0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_guarantee_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_guarantee_count, v4);
  }
  this->start_guarantee_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inc_guarantee_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inc_guarantee_prob, v4);
  }
  this->inc_guarantee_prob = 0;
};

// Line 20: range 0000000014BD493C-0000000014BD4D05
void __cdecl data::GachaParentProbRuleConfig::GachaParentProbRuleConfig(
        data::GachaParentProbRuleConfig *const this,
        const data::GachaParentProbRuleConfig *a2)
{
  uint32_t gacha_prob_rule_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v6; // dl
  std::vector<data::GachaProbRuleConfig> *p_gacha_item_type_config_vec; // rsi
  uint32_t round_table_priority; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t base_prob; // ecx
  char v12; // dl
  bool is_guaranteed; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t start_guarantee_count; // ecx
  char v17; // dl
  uint32_t inc_guarantee_prob; // ecx
  char v19; // al
  const data::GachaParentProbRuleConfig *v20; // [rsp+0h] [rbp-20h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  v4 = (((_BYTE)v20 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->gacha_item_parent_type >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->gacha_item_parent_type);
  }
  gacha_item_parent_type = v20->gacha_item_parent_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, v4);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  std::set<data::GachaItemType>::set(&this->gacha_item_type_set, &v20->gacha_item_type_set);
  p_gacha_item_type_config_vec = &v20->gacha_item_type_config_vec;
  std::vector<data::GachaProbRuleConfig>::vector(&this->gacha_item_type_config_vec, &v20->gacha_item_type_config_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v20->round_table_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->round_table_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->round_table_priority);
  }
  round_table_priority = v20->round_table_priority;
  v9 = *(_BYTE *)(((unsigned __int64)&this->round_table_priority >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_gacha_item_type_config_vec) = v9 != 0;
    __asan_report_store4(&this->round_table_priority, p_gacha_item_type_config_vec);
  }
  this->round_table_priority = round_table_priority;
  v10 = (((_BYTE)v20 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->base_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->base_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->base_prob);
  }
  base_prob = v20->base_prob;
  v12 = *(_BYTE *)(((unsigned __int64)&this->base_prob >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
    __asan_report_store4(&this->base_prob, v10);
  this->base_prob = base_prob;
  if ( *(char *)(((unsigned __int64)&v20->is_guaranteed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_guaranteed, v10, &v20->is_guaranteed);
  is_guaranteed = v20->is_guaranteed;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_guaranteed >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_guaranteed, v10, &this->is_guaranteed);
  }
  this->is_guaranteed = is_guaranteed;
  v15 = (((_BYTE)v20 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->start_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->start_guarantee_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->start_guarantee_count);
  }
  start_guarantee_count = v20->start_guarantee_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->start_guarantee_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->start_guarantee_count, v15);
  }
  this->start_guarantee_count = start_guarantee_count;
  if ( *(_BYTE *)(((unsigned __int64)&v20->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->inc_guarantee_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->inc_guarantee_prob);
  }
  inc_guarantee_prob = v20->inc_guarantee_prob;
  v19 = *(_BYTE *)(((unsigned __int64)&this->inc_guarantee_prob >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->inc_guarantee_prob, v15);
  }
  this->inc_guarantee_prob = inc_guarantee_prob;
};

// Line 20: range 000000001498E840-000000001498EBE2
void __cdecl data::GachaParentProbRuleConfig::GachaParentProbRuleConfig(
        data::GachaParentProbRuleConfig *const this,
        data::GachaParentProbRuleConfig *a2)
{
  uint32_t gacha_prob_rule_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v6; // dl
  std::vector<data::GachaProbRuleConfig> *p_gacha_item_type_config_vec; // rsi
  uint32_t round_table_priority; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t base_prob; // ecx
  char v12; // dl
  bool is_guaranteed; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t start_guarantee_count; // ecx
  char v17; // dl
  uint32_t inc_guarantee_prob; // ecx
  char v19; // al
  data::GachaParentProbRuleConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  v4 = (((_BYTE)v20 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->gacha_item_parent_type >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->gacha_item_parent_type);
  }
  gacha_item_parent_type = v20->gacha_item_parent_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, v4);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  std::set<data::GachaItemType>::set(&this->gacha_item_type_set, &v20->gacha_item_type_set);
  p_gacha_item_type_config_vec = &v20->gacha_item_type_config_vec;
  std::vector<data::GachaProbRuleConfig>::vector(&this->gacha_item_type_config_vec, &v20->gacha_item_type_config_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v20->round_table_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->round_table_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->round_table_priority);
  }
  round_table_priority = v20->round_table_priority;
  v9 = *(_BYTE *)(((unsigned __int64)&this->round_table_priority >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_gacha_item_type_config_vec) = v9 != 0;
    __asan_report_store4(&this->round_table_priority, p_gacha_item_type_config_vec);
  }
  this->round_table_priority = round_table_priority;
  v10 = (((_BYTE)v20 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->base_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->base_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->base_prob);
  }
  base_prob = v20->base_prob;
  v12 = *(_BYTE *)(((unsigned __int64)&this->base_prob >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
    __asan_report_store4(&this->base_prob, v10);
  this->base_prob = base_prob;
  if ( *(char *)(((unsigned __int64)&v20->is_guaranteed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_guaranteed, v10, &v20->is_guaranteed);
  is_guaranteed = v20->is_guaranteed;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_guaranteed >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_guaranteed, v10, &this->is_guaranteed);
  }
  this->is_guaranteed = is_guaranteed;
  v15 = (((_BYTE)v20 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->start_guarantee_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->start_guarantee_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->start_guarantee_count);
  }
  start_guarantee_count = v20->start_guarantee_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->start_guarantee_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->start_guarantee_count, v15);
  }
  this->start_guarantee_count = start_guarantee_count;
  if ( *(_BYTE *)(((unsigned __int64)&v20->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->inc_guarantee_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->inc_guarantee_prob);
  }
  inc_guarantee_prob = v20->inc_guarantee_prob;
  v19 = *(_BYTE *)(((unsigned __int64)&this->inc_guarantee_prob >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->inc_guarantee_prob, v15);
  }
  this->inc_guarantee_prob = inc_guarantee_prob;
};

// Line 20: range 000000000D2A8ABA-000000000D2A8AE8
void __cdecl data::GachaParentProbRuleConfig::~GachaParentProbRuleConfig(data::GachaParentProbRuleConfig *const this)
{
  std::vector<data::GachaProbRuleConfig>::~vector(&this->gacha_item_type_config_vec);
  std::set<data::GachaItemType>::~set(&this->gacha_item_type_set);
};

// Line 52: range 00000000147368D8-00000000147368EE
bool __cdecl GachaExcelConfigMgr::isSupportWish(const GachaExcelConfigMgr *const this, uint32_t gacha_type)
{
  return gacha_type == 302;
};
