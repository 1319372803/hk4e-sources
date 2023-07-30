// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ShopExcelConfig.gen.h

// Line 217: range 000000000D36C8EE-000000000D36CD1B
void __cdecl data::ShopExcelConfig::ShopExcelConfig(data::ShopExcelConfig *const this, const data::ShopExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t shop_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ShopType shop_type; // ecx
  char v7; // dl
  data::ShopRefreshType refresh_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t refresh_param; // ecx
  char v12; // dl
  data::OpenStateType open_state_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t city_id; // ecx
  char v17; // dl
  uint32_t city_discount_level; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t scoin_discount_rate; // ecx
  char v22; // dl
  const data::ShopExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->shop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->shop_id);
  }
  shop_id = a2->shop_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->shop_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->shop_id, a2);
  }
  this->shop_id = shop_id;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->shop_type);
  }
  shop_type = v23->shop_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->shop_type, v5);
  }
  this->shop_type = shop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v23->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->refresh_type);
  }
  refresh_type = v23->refresh_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->refresh_type, v5);
  }
  this->refresh_type = refresh_type;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->refresh_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->refresh_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->refresh_param);
  }
  refresh_param = v23->refresh_param;
  v12 = *(_BYTE *)(((unsigned __int64)&this->refresh_param >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->refresh_param, v10);
  }
  this->refresh_param = refresh_param;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_state_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->open_state_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->open_state_type);
  }
  open_state_type = v23->open_state_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->open_state_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->open_state_type, v10);
  }
  this->open_state_type = open_state_type;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->city_id);
  }
  city_id = v23->city_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->city_id, v15);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->city_discount_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->city_discount_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->city_discount_level);
  }
  city_discount_level = v23->city_discount_level;
  v19 = *(_BYTE *)(((unsigned __int64)&this->city_discount_level >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->city_discount_level, v15);
  }
  this->city_discount_level = city_discount_level;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->scoin_discount_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->scoin_discount_rate >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->scoin_discount_rate);
  }
  scoin_discount_rate = v23->scoin_discount_rate;
  v22 = *(_BYTE *)(((unsigned __int64)&this->scoin_discount_rate >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->scoin_discount_rate, v20);
  }
  this->scoin_discount_rate = scoin_discount_rate;
};

// Line 220: range 000000000D493578-000000000D4935B9
void __cdecl data::ShopExcelConfig::~ShopExcelConfig(data::ShopExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopExcelConfig = v2;
};

// Line 220: range 000000000D4935BA-000000000D4935E4
void __cdecl data::ShopExcelConfig::~ShopExcelConfig(data::ShopExcelConfig *const this)
{
  data::ShopExcelConfig::~ShopExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 238: range 000000000D2DEFCA-000000000D2DF0CD
void __cdecl data::LimitStrategy::LimitStrategy(data::LimitStrategy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LimitStrategy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LimitStrategy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_cond_type, v1);
  }
  this->limit_cond_type = SHOP_PRECONDITION_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_cond_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_cond_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_cond_param, v3);
  }
  this->limit_cond_param = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_num, v3);
  }
  this->limit_num = 0;
};

// Line 238: range 000000000D4140CA-000000000D41427E
void __cdecl data::LimitStrategy::LimitStrategy(data::LimitStrategy *const this, const data::LimitStrategy *a2)
{
  int (**v2)(...); // rdx
  data::ShopPrecondition limit_cond_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t limit_cond_param; // ecx
  char v7; // dl
  uint32_t limit_num; // ecx
  char v9; // al
  const data::LimitStrategy *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LimitStrategy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LimitStrategy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_cond_type);
  }
  limit_cond_type = a2->limit_cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->limit_cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->limit_cond_type, a2);
  }
  this->limit_cond_type = limit_cond_type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->limit_cond_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->limit_cond_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->limit_cond_param);
  }
  limit_cond_param = v10->limit_cond_param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->limit_cond_param >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->limit_cond_param, v5);
  }
  this->limit_cond_param = limit_cond_param;
  if ( *(_BYTE *)(((unsigned __int64)&v10->limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->limit_num);
  }
  limit_num = v10->limit_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->limit_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->limit_num, v5);
  }
  this->limit_num = limit_num;
};

// Line 241: range 000000000D23EDA0-000000000D23EDCA
void __cdecl data::LimitStrategy::~LimitStrategy(data::LimitStrategy *const this)
{
  data::LimitStrategy::~LimitStrategy(this);
  operator delete(this, 0x18uLL);
};

// Line 241: range 000000000D23ED5E-000000000D23ED9F
void __cdecl data::LimitStrategy::~LimitStrategy(data::LimitStrategy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LimitStrategy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LimitStrategy = v2;
};

// Line 252: range 000000000CE1486E-000000000CE14F6B
void __cdecl data::ShopGoodsExcelConfig::ShopGoodsExcelConfig(data::ShopGoodsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ShopGoodsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopGoodsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->goods_id, v1);
  }
  this->goods_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shop_type, v3);
  }
  this->shop_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rotate_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rotate_id, v4);
  }
  this->rotate_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_count, v4);
  }
  this->item_count = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_scoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_scoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_scoin, v5);
  }
  this->cost_scoin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_hcoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_hcoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_hcoin, v5);
  }
  this->cost_hcoin = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_mcoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_mcoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_mcoin, v6);
  }
  this->cost_mcoin = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->buy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buy_limit, v6);
  }
  this->buy_limit = 0;
  std::vector<data::LimitStrategy>::vector(&this->limit_strategy_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_type, v6);
  }
  this->refresh_type = SHOP_REFRESH_NONE;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_param, v7);
  }
  this->refresh_param = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->display_days_before_sell >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->display_days_before_sell >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->display_days_before_sell, v7);
  }
  this->display_days_before_sell = 0;
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_timestamp, v7);
  }
  this->begin_timestamp = 0;
  v8 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_timestamp, v8);
  }
  this->end_timestamp = 0;
  if ( *(char *)(((unsigned __int64)&this->is_buy_once >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_buy_once, v8, &this->is_buy_once);
  this->is_buy_once = 0;
  v9 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->precondition >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->precondition, v9);
  }
  this->precondition = SHOP_PRECONDITION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->precondition_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->precondition_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->precondition_param, v9);
  }
  this->precondition_param = 0;
  std::vector<std::string>::vector(&this->precondition_param_list);
  if ( *(char *)(((unsigned __int64)&this->precondition_hidden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->precondition_hidden, v9, &this->precondition_hidden);
  this->precondition_hidden = 0;
  v10 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_show_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_show_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_show_level, v10);
  }
  this->min_show_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_player_level, v10);
  }
  this->min_player_level = 0;
  v11 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_player_level, v11);
  }
  this->max_player_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sort_level, v11);
  }
  this->sort_level = 0;
  v12 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->secondary_sheet_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->secondary_sheet_id, v12);
  }
  this->secondary_sheet_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_one_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->choose_one_group_id, v12);
  }
  this->choose_one_group_id = 0;
  std::vector<unsigned int>::vector(&this->platform_type_list);
};

// Line 252: range 000000000D36CE5C-000000000D36DBE3
void __cdecl data::ShopGoodsExcelConfig::ShopGoodsExcelConfig(
        data::ShopGoodsExcelConfig *const this,
        const data::ShopGoodsExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t goods_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t shop_type; // ecx
  char v7; // dl
  uint32_t item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t rotate_id; // ecx
  char v12; // dl
  uint32_t item_count; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t cost_scoin; // ecx
  char v17; // dl
  uint32_t cost_hcoin; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t cost_mcoin; // ecx
  char v22; // dl
  std::vector<data::IdCountConfig> *p_cost_items; // rsi
  uint32_t buy_limit; // ecx
  char v25; // al
  std::vector<data::LimitStrategy> *p_limit_strategy_list; // rsi
  data::ShopRefreshType refresh_type; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t refresh_param; // ecx
  char v31; // dl
  uint32_t display_days_before_sell; // ecx
  char v33; // al
  std::string *p_end_time; // rsi
  uint32_t begin_timestamp; // ecx
  char v36; // al
  __int64 v37; // rsi
  uint32_t end_timestamp; // ecx
  char v39; // dl
  bool is_buy_once; // cl
  char v41; // al
  __int64 v42; // rsi
  data::ShopPrecondition precondition; // ecx
  char v44; // dl
  uint32_t precondition_param; // ecx
  char v46; // al
  std::vector<std::string> *p_precondition_param_list; // rsi
  bool precondition_hidden; // cl
  char v49; // al
  __int64 v50; // rsi
  uint32_t min_show_level; // ecx
  char v52; // dl
  uint32_t min_player_level; // ecx
  char v54; // al
  __int64 v55; // rsi
  uint32_t max_player_level; // ecx
  char v57; // dl
  uint32_t sort_level; // ecx
  char v59; // al
  __int64 v60; // rsi
  uint32_t secondary_sheet_id; // ecx
  char v62; // dl
  uint32_t choose_one_group_id; // ecx
  char v64; // al
  const data::ShopGoodsExcelConfig *v65; // [rsp+0h] [rbp-20h]

  v65 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopGoodsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopGoodsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->goods_id);
  }
  goods_id = a2->goods_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->goods_id, a2);
  }
  this->goods_id = goods_id;
  v5 = (((_BYTE)v65 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->shop_type);
  }
  shop_type = v65->shop_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->shop_type, v5);
  }
  this->shop_type = shop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v65->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->item_id);
  }
  item_id = v65->item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  v10 = (((_BYTE)v65 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->rotate_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->rotate_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->rotate_id);
  }
  rotate_id = v65->rotate_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rotate_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->rotate_id, v10);
  }
  this->rotate_id = rotate_id;
  if ( *(_BYTE *)(((unsigned __int64)&v65->item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->item_count);
  }
  item_count = v65->item_count;
  v14 = *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->item_count, v10);
  }
  this->item_count = item_count;
  v15 = (((_BYTE)v65 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->cost_scoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->cost_scoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->cost_scoin);
  }
  cost_scoin = v65->cost_scoin;
  v17 = *(_BYTE *)(((unsigned __int64)&this->cost_scoin >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->cost_scoin, v15);
  }
  this->cost_scoin = cost_scoin;
  if ( *(_BYTE *)(((unsigned __int64)&v65->cost_hcoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->cost_hcoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->cost_hcoin);
  }
  cost_hcoin = v65->cost_hcoin;
  v19 = *(_BYTE *)(((unsigned __int64)&this->cost_hcoin >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->cost_hcoin, v15);
  }
  this->cost_hcoin = cost_hcoin;
  v20 = (((_BYTE)v65 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->cost_mcoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->cost_mcoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->cost_mcoin);
  }
  cost_mcoin = v65->cost_mcoin;
  v22 = *(_BYTE *)(((unsigned __int64)&this->cost_mcoin >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->cost_mcoin, v20);
  }
  this->cost_mcoin = cost_mcoin;
  p_cost_items = &v65->cost_items;
  std::vector<data::IdCountConfig>::vector(&this->cost_items, &v65->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&v65->buy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->buy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->buy_limit);
  }
  buy_limit = v65->buy_limit;
  v25 = *(_BYTE *)(((unsigned __int64)&this->buy_limit >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_cost_items) = v25 != 0;
    __asan_report_store4(&this->buy_limit, p_cost_items);
  }
  this->buy_limit = buy_limit;
  p_limit_strategy_list = &v65->limit_strategy_list;
  std::vector<data::LimitStrategy>::vector(&this->limit_strategy_list, &v65->limit_strategy_list);
  if ( *(_BYTE *)(((unsigned __int64)&v65->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->refresh_type);
  }
  refresh_type = v65->refresh_type;
  v28 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_limit_strategy_list) = v28 != 0;
    __asan_report_store4(&this->refresh_type, p_limit_strategy_list);
  }
  this->refresh_type = refresh_type;
  v29 = (((_BYTE)v65 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->refresh_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->refresh_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->refresh_param);
  }
  refresh_param = v65->refresh_param;
  v31 = *(_BYTE *)(((unsigned __int64)&this->refresh_param >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->refresh_param, v29);
  }
  this->refresh_param = refresh_param;
  if ( *(_BYTE *)(((unsigned __int64)&v65->display_days_before_sell >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->display_days_before_sell >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->display_days_before_sell);
  }
  display_days_before_sell = v65->display_days_before_sell;
  v33 = *(_BYTE *)(((unsigned __int64)&this->display_days_before_sell >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->display_days_before_sell, v29);
  }
  this->display_days_before_sell = display_days_before_sell;
  std::string::basic_string(&this->begin_time, &v65->begin_time);
  p_end_time = &v65->end_time;
  std::string::basic_string(&this->end_time, &v65->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&v65->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->begin_timestamp);
  }
  begin_timestamp = v65->begin_timestamp;
  v36 = *(_BYTE *)(((unsigned __int64)&this->begin_timestamp >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(p_end_time) = v36 != 0;
    __asan_report_store4(&this->begin_timestamp, p_end_time);
  }
  this->begin_timestamp = begin_timestamp;
  v37 = (((_BYTE)v65 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->end_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->end_timestamp);
  }
  end_timestamp = v65->end_timestamp;
  v39 = *(_BYTE *)(((unsigned __int64)&this->end_timestamp >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v39 != 0;
  if ( v39 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v39 )
    __asan_report_store4(&this->end_timestamp, v37);
  this->end_timestamp = end_timestamp;
  if ( *(char *)(((unsigned __int64)&v65->is_buy_once >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v65->is_buy_once, v37, &v65->is_buy_once);
  is_buy_once = v65->is_buy_once;
  v41 = *(_BYTE *)(((unsigned __int64)&this->is_buy_once >> 3) + 0x7FFF8000);
  if ( v41 < 0 )
  {
    LOBYTE(v37) = v41 != 0;
    __asan_report_store1(&this->is_buy_once, v37, &this->is_buy_once);
  }
  this->is_buy_once = is_buy_once;
  v42 = (((_BYTE)v65 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->precondition >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->precondition);
  }
  precondition = v65->precondition;
  v44 = *(_BYTE *)(((unsigned __int64)&this->precondition >> 3) + 0x7FFF8000);
  if ( v44 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v44 )
  {
    LOBYTE(v42) = v44 != 0;
    __asan_report_store4(&this->precondition, v42);
  }
  this->precondition = precondition;
  if ( *(_BYTE *)(((unsigned __int64)&v65->precondition_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->precondition_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->precondition_param);
  }
  precondition_param = v65->precondition_param;
  v46 = *(_BYTE *)(((unsigned __int64)&this->precondition_param >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(v42) = v46 != 0;
    __asan_report_store4(&this->precondition_param, v42);
  }
  this->precondition_param = precondition_param;
  p_precondition_param_list = &v65->precondition_param_list;
  std::vector<std::string>::vector(&this->precondition_param_list, &v65->precondition_param_list);
  if ( *(char *)(((unsigned __int64)&v65->precondition_hidden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v65->precondition_hidden, p_precondition_param_list, &v65->precondition_hidden);
  precondition_hidden = v65->precondition_hidden;
  v49 = *(_BYTE *)(((unsigned __int64)&this->precondition_hidden >> 3) + 0x7FFF8000);
  if ( v49 < 0 )
  {
    LOBYTE(p_precondition_param_list) = v49 != 0;
    __asan_report_store1(&this->precondition_hidden, p_precondition_param_list, &this->precondition_hidden);
  }
  this->precondition_hidden = precondition_hidden;
  v50 = (((_BYTE)v65 - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->min_show_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->min_show_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->min_show_level);
  }
  min_show_level = v65->min_show_level;
  v52 = *(_BYTE *)(((unsigned __int64)&this->min_show_level >> 3) + 0x7FFF8000);
  if ( v52 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v52 )
  {
    LOBYTE(v50) = v52 != 0;
    __asan_report_store4(&this->min_show_level, v50);
  }
  this->min_show_level = min_show_level;
  if ( *(_BYTE *)(((unsigned __int64)&v65->min_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->min_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->min_player_level);
  }
  min_player_level = v65->min_player_level;
  v54 = *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000);
  if ( v54 != 0 && v54 <= 3 )
  {
    LOBYTE(v50) = v54 != 0;
    __asan_report_store4(&this->min_player_level, v50);
  }
  this->min_player_level = min_player_level;
  v55 = (((_BYTE)v65 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->max_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->max_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->max_player_level);
  }
  max_player_level = v65->max_player_level;
  v57 = *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000);
  if ( v57 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v57 )
  {
    LOBYTE(v55) = v57 != 0;
    __asan_report_store4(&this->max_player_level, v55);
  }
  this->max_player_level = max_player_level;
  if ( *(_BYTE *)(((unsigned __int64)&v65->sort_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->sort_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->sort_level);
  }
  sort_level = v65->sort_level;
  v59 = *(_BYTE *)(((unsigned __int64)&this->sort_level >> 3) + 0x7FFF8000);
  if ( v59 != 0 && v59 <= 3 )
  {
    LOBYTE(v55) = v59 != 0;
    __asan_report_store4(&this->sort_level, v55);
  }
  this->sort_level = sort_level;
  v60 = (((_BYTE)v65 - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v65->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v65 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v65->secondary_sheet_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v65->secondary_sheet_id);
  }
  secondary_sheet_id = v65->secondary_sheet_id;
  v62 = *(_BYTE *)(((unsigned __int64)&this->secondary_sheet_id >> 3) + 0x7FFF8000);
  if ( v62 != 0 && (char)((((_BYTE)this - 12) & 7) + 3) >= v62 )
  {
    LOBYTE(v60) = v62 != 0;
    __asan_report_store4(&this->secondary_sheet_id, v60);
  }
  this->secondary_sheet_id = secondary_sheet_id;
  if ( *(_BYTE *)(((unsigned __int64)&v65->choose_one_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v65->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v65->choose_one_group_id);
  }
  choose_one_group_id = v65->choose_one_group_id;
  v64 = *(_BYTE *)(((unsigned __int64)&this->choose_one_group_id >> 3) + 0x7FFF8000);
  if ( v64 != 0 && v64 <= 3 )
  {
    LOBYTE(v60) = v64 != 0;
    __asan_report_store4(&this->choose_one_group_id, v60);
  }
  this->choose_one_group_id = choose_one_group_id;
  std::vector<unsigned int>::vector(&this->platform_type_list, &v65->platform_type_list);
};

// Line 255: range 000000000D4934A4-000000000D49354B
void __cdecl data::ShopGoodsExcelConfig::~ShopGoodsExcelConfig(data::ShopGoodsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopGoodsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopGoodsExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->platform_type_list);
  std::vector<std::string>::~vector(&this->precondition_param_list);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
  std::vector<data::LimitStrategy>::~vector(&this->limit_strategy_list);
  std::vector<data::IdCountConfig>::~vector(&this->cost_items);
};

// Line 255: range 000000000D49354C-000000000D493576
void __cdecl data::ShopGoodsExcelConfig::~ShopGoodsExcelConfig(data::ShopGoodsExcelConfig *const this)
{
  data::ShopGoodsExcelConfig::~ShopGoodsExcelConfig(this);
  operator delete(this, 0x118uLL);
};

// Line 295: range 000000000D11A94E-000000000D11AB57
data::ShopRotateExcelConfig *__cdecl data::ShopRotateExcelConfig::operator=(
        data::ShopRotateExcelConfig *const this,
        const data::ShopRotateExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t rotate_id; // ecx
  char v6; // dl
  uint32_t item_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t rotate_order; // ecx
  char v11; // dl
  const data::ShopRotateExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
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
  v4 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->rotate_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->rotate_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->rotate_id);
  }
  rotate_id = v13->rotate_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->rotate_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->rotate_id, v4);
  }
  this->rotate_id = rotate_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->item_id);
  }
  item_id = v13->item_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->item_id, v4);
  }
  this->item_id = item_id;
  v9 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->rotate_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->rotate_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->rotate_order);
  }
  rotate_order = v13->rotate_order;
  v11 = *(_BYTE *)(((unsigned __int64)&this->rotate_order >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->rotate_order, v9);
  }
  this->rotate_order = rotate_order;
  return this;
};

// Line 295: range 000000000D0275C6-000000000D0277FF
void __cdecl data::ShopRotateExcelConfig::ShopRotateExcelConfig(
        data::ShopRotateExcelConfig *const this,
        const data::ShopRotateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t rotate_id; // ecx
  char v7; // dl
  uint32_t item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t rotate_order; // ecx
  char v12; // dl
  const data::ShopRotateExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopRotateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopRotateExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->rotate_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->rotate_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->rotate_id);
  }
  rotate_id = v13->rotate_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->rotate_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->rotate_id, v5);
  }
  this->rotate_id = rotate_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->item_id);
  }
  item_id = v13->item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->rotate_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->rotate_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->rotate_order);
  }
  rotate_order = v13->rotate_order;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rotate_order >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->rotate_order, v10);
  }
  this->rotate_order = rotate_order;
};

// Line 298: range 000000000D493436-000000000D493477
void __cdecl data::ShopRotateExcelConfig::~ShopRotateExcelConfig(data::ShopRotateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopRotateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopRotateExcelConfig = v2;
};

// Line 298: range 000000000D493478-000000000D4934A2
void __cdecl data::ShopRotateExcelConfig::~ShopRotateExcelConfig(data::ShopRotateExcelConfig *const this)
{
  data::ShopRotateExcelConfig::~ShopRotateExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 312: range 000000000D36DE64-000000000D36DFA3
void __cdecl data::ShopSpecialKeysDataExcelConfig::ShopSpecialKeysDataExcelConfig(
        data::ShopSpecialKeysDataExcelConfig *const this,
        const data::ShopSpecialKeysDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t goods_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t single_limit; // ecx
  char v7; // dl
  const data::ShopSpecialKeysDataExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopSpecialKeysDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopSpecialKeysDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->goods_id);
  }
  goods_id = a2->goods_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->goods_id, a2);
  }
  this->goods_id = goods_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->single_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->single_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->single_limit);
  }
  single_limit = v8->single_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->single_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->single_limit, v5);
  }
  this->single_limit = single_limit;
};

// Line 315: range 000000000D49340A-000000000D493434
void __cdecl data::ShopSpecialKeysDataExcelConfig::~ShopSpecialKeysDataExcelConfig(
        data::ShopSpecialKeysDataExcelConfig *const this)
{
  data::ShopSpecialKeysDataExcelConfig::~ShopSpecialKeysDataExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 315: range 000000000D4933C8-000000000D493409
void __cdecl data::ShopSpecialKeysDataExcelConfig::~ShopSpecialKeysDataExcelConfig(
        data::ShopSpecialKeysDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopSpecialKeysDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopSpecialKeysDataExcelConfig = v2;
};
