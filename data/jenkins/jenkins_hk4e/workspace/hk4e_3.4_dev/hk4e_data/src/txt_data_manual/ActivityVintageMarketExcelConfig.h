// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityVintageMarketExcelConfig.h

// Line 19: range 0000000012ED5E86-0000000012ED5FAC
void __cdecl ActivityVintageMarketStoreRoundConfig::ActivityVintageMarketStoreRoundConfig(
        ActivityVintageMarketStoreRoundConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::vector<float>::vector(&this->attr_low_limit_factor_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->random_template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->random_template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->random_template_id, v1);
  }
  this->random_template_id = 0;
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_income >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fixed_income >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fixed_income, v2);
  }
  this->fixed_income = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_factor, v2);
  }
  this->reward_factor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->income_b_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->income_b_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->income_b_factor, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->income_b_factor = 0.0;
};

// Line 19: range 00000000133D0610-00000000133D082F
void __cdecl ActivityVintageMarketStoreRoundConfig::ActivityVintageMarketStoreRoundConfig(
        ActivityVintageMarketStoreRoundConfig *const this,
        ActivityVintageMarketStoreRoundConfig *a2)
{
  uint32_t random_template_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t fixed_income; // ecx
  char v6; // dl
  float reward_factor; // xmm0_4
  float income_b_factor; // xmm0_4
  ActivityVintageMarketStoreRoundConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::vector<float>::vector(&this->attr_low_limit_factor_vec, &a2->attr_low_limit_factor_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v9->random_template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->random_template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->random_template_id);
  }
  random_template_id = a2->random_template_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->random_template_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->random_template_id, a2);
  }
  this->random_template_id = random_template_id;
  v4 = (((_BYTE)v9 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->fixed_income >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->fixed_income >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->fixed_income);
  }
  fixed_income = v9->fixed_income;
  v6 = *(_BYTE *)(((unsigned __int64)&this->fixed_income >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v6 )
    __asan_report_store4(&this->fixed_income, v4);
  this->fixed_income = fixed_income;
  if ( *(_BYTE *)(((unsigned __int64)&v9->reward_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->reward_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->reward_factor);
  }
  reward_factor = v9->reward_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_factor, v4);
  }
  this->reward_factor = reward_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v9->income_b_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->income_b_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->income_b_factor);
  }
  income_b_factor = v9->income_b_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->income_b_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->income_b_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->income_b_factor, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->income_b_factor = income_b_factor;
};

// Line 19: range 0000000012ED5FAE-0000000012ED5FC8
void __cdecl ActivityVintageMarketStoreRoundConfig::~ActivityVintageMarketStoreRoundConfig(
        ActivityVintageMarketStoreRoundConfig *const this)
{
  std::vector<float>::~vector(&this->attr_low_limit_factor_vec);
};

// Line 29: range 0000000012ED5CC6-0000000012ED5DA0
void __cdecl ActivityVintageMarketStoreConfig::ActivityVintageMarketStoreConfig(
        ActivityVintageMarketStoreConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->store_id = 0;
  std::vector<unsigned int>::vector(&this->default_attr_vec);
  std::vector<unsigned int>::vector(&this->max_attr_vec);
  std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::map(&this->round_config_map);
  std::vector<std::map<unsigned int,unsigned int>>::vector(&this->attr_level_cost_map_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_coin_b_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_coin_b_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_coin_b_num, v1);
  }
  this->default_coin_b_num = 0;
  std::vector<unsigned int>::vector(&this->slot_cost_vec);
};

// Line 29: range 00000000133D03C6-00000000133D054A
void __cdecl ActivityVintageMarketStoreConfig::ActivityVintageMarketStoreConfig(
        ActivityVintageMarketStoreConfig *const this,
        ActivityVintageMarketStoreConfig *a2)
{
  uint32_t store_id; // ecx
  char v3; // al
  std::vector<std::map<unsigned int,unsigned int>> *p_attr_level_cost_map_vec; // rsi
  uint32_t default_coin_b_num; // ecx
  char v6; // al
  ActivityVintageMarketStoreConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  store_id = a2->store_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->store_id = store_id;
  std::vector<unsigned int>::vector(&this->default_attr_vec, &v7->default_attr_vec);
  std::vector<unsigned int>::vector(&this->max_attr_vec, &v7->max_attr_vec);
  std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::map(&this->round_config_map, &v7->round_config_map);
  p_attr_level_cost_map_vec = &v7->attr_level_cost_map_vec;
  std::vector<std::map<unsigned int,unsigned int>>::vector(&this->attr_level_cost_map_vec, &v7->attr_level_cost_map_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v7->default_coin_b_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->default_coin_b_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->default_coin_b_num);
  }
  default_coin_b_num = v7->default_coin_b_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->default_coin_b_num >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_attr_level_cost_map_vec) = v6 != 0;
    __asan_report_store4(&this->default_coin_b_num, p_attr_level_cost_map_vec);
  }
  this->default_coin_b_num = default_coin_b_num;
  std::vector<unsigned int>::vector(&this->slot_cost_vec, &v7->slot_cost_vec);
};

// Line 29: range 0000000012ED5DA2-0000000012ED5E02
void __cdecl ActivityVintageMarketStoreConfig::~ActivityVintageMarketStoreConfig(
        ActivityVintageMarketStoreConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->slot_cost_vec);
  std::vector<std::map<unsigned int,unsigned int>>::~vector(&this->attr_level_cost_map_vec);
  std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::~map(&this->round_config_map);
  std::vector<unsigned int>::~vector(&this->max_attr_vec);
  std::vector<unsigned int>::~vector(&this->default_attr_vec);
};
