// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ShopmallExcelConfig.gen.h

// Line 197: range 000000000D35F4BA-000000000D35F5DD
void __cdecl data::ShopmallRecommendCond::ShopmallRecommendCond(data::ShopmallRecommendCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopmallRecommendCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallRecommendCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = SHOPMALL_RECOMMEND_COND_TYPE_NONE;
  std::string::basic_string(&this->param1_str);
  std::string::basic_string(&this->param2_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param1, v1);
  }
  this->param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param2, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->param2 = 0;
};

// Line 200: range 000000000D35F77E-000000000D35F7A8
void __cdecl data::ShopmallRecommendCond::~ShopmallRecommendCond(data::ShopmallRecommendCond *const this)
{
  data::ShopmallRecommendCond::~ShopmallRecommendCond(this);
  operator delete(this, 0x58uLL);
};

// Line 200: range 000000000D35F71C-000000000D35F77D
void __cdecl data::ShopmallRecommendCond::~ShopmallRecommendCond(data::ShopmallRecommendCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopmallRecommendCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallRecommendCond = v2;
  std::string::~string(&this->param2_str);
  std::string::~string(&this->param1_str);
};

// Line 213: range 000000000D11B056-000000000D11B1F5
data::ShopmallEntranceExcelConfig *__cdecl data::ShopmallEntranceExcelConfig::operator=(
        data::ShopmallEntranceExcelConfig *const this,
        const data::ShopmallEntranceExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  std::string *p_name; // rsi
  data::ShopType shop_type; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t order; // ecx
  char v9; // dl
  const data::ShopmallEntranceExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
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
  p_name = &v11->name;
  std::string::operator=(&this->name, &v11->name);
  if ( *(_BYTE *)(((unsigned __int64)&v11->shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->shop_type);
  }
  shop_type = v11->shop_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->shop_type, p_name);
  }
  this->shop_type = shop_type;
  v7 = (((_BYTE)v11 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->order);
  }
  order = v11->order;
  v9 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->order, v7);
  }
  this->order = order;
  return this;
};

// Line 213: range 000000000F0277B4-000000000F0278C7
void __cdecl data::ShopmallEntranceExcelConfig::ShopmallEntranceExcelConfig(
        data::ShopmallEntranceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopmallEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallEntranceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shop_type, v1);
  }
  this->shop_type = SHOP_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->order, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->order = 0;
};

// Line 213: range 000000000D11AE08-000000000D11AFD7
void __cdecl data::ShopmallEntranceExcelConfig::ShopmallEntranceExcelConfig(
        data::ShopmallEntranceExcelConfig *const this,
        const data::ShopmallEntranceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_name; // rsi
  data::ShopType shop_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t order; // ecx
  char v10; // dl
  const data::ShopmallEntranceExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopmallEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopmallEntranceExcelConfig = v2;
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
  p_name = &v11->name;
  std::string::basic_string(&this->name, &v11->name);
  if ( *(_BYTE *)(((unsigned __int64)&v11->shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->shop_type);
  }
  shop_type = v11->shop_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_name) = v7 != 0;
    __asan_report_store4(&this->shop_type, p_name);
  }
  this->shop_type = shop_type;
  v8 = (((_BYTE)v11 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->order);
  }
  order = v11->order;
  v10 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->order, v8);
  }
  this->order = order;
};

// Line 213: range 000000000D11AFD8-000000000D11B029
void __cdecl data::ShopmallEntranceExcelConfig::~ShopmallEntranceExcelConfig(
        data::ShopmallEntranceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopmallEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallEntranceExcelConfig = v2;
  std::string::~string(&this->name);
};

// Line 216: range 000000000D11B02A-000000000D11B054
void __cdecl data::ShopmallEntranceExcelConfig::~ShopmallEntranceExcelConfig(
        data::ShopmallEntranceExcelConfig *const this)
{
  data::ShopmallEntranceExcelConfig::~ShopmallEntranceExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 230: range 000000000CE0BE14-000000000CE0BF27
void __cdecl data::ProductDetailConfig::ProductDetailConfig(data::ProductDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  std::string::basic_string(&this->price_tier);
  if ( *(_BYTE *)(((unsigned __int64)&this->product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->product_type, v1);
  }
  this->product_type = PRODUCT_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shop_type, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->shop_type = SHOP_TYPE_NONE;
};

// Line 230: range 000000000D35EE26-000000000D35EFF5
void __cdecl data::ProductDetailConfig::ProductDetailConfig(
        data::ProductDetailConfig *const this,
        const data::ProductDetailConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  std::string *p_price_tier; // rsi
  data::ProductType product_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::ShopType shop_type; // ecx
  char v10; // dl
  const data::ProductDetailConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ProductDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  p_price_tier = &v11->price_tier;
  std::string::basic_string(&this->price_tier, &v11->price_tier);
  if ( *(_BYTE *)(((unsigned __int64)&v11->product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->product_type);
  }
  product_type = v11->product_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->product_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_price_tier) = v7 != 0;
    __asan_report_store4(&this->product_type, p_price_tier);
  }
  this->product_type = product_type;
  v8 = (((_BYTE)v11 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->shop_type);
  }
  shop_type = v11->shop_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->shop_type, v8);
  }
  this->shop_type = shop_type;
};

// Line 233: range 000000000CE0BF28-000000000CE0BF79
void __cdecl data::ProductDetailConfig::~ProductDetailConfig(data::ProductDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::string::~string(&this->price_tier);
};

// Line 233: range 000000000CE0BF7A-000000000CE0BFA4
void __cdecl data::ProductDetailConfig::~ProductDetailConfig(data::ProductDetailConfig *const this)
{
  data::ProductDetailConfig::~ProductDetailConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 245: range 000000000F02791C-000000000F027ACB
void __cdecl data::ShopmallRecommendConfig::ShopmallRecommendConfig(data::ShopmallRecommendConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ShopmallRecommendConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallRecommendConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tab_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tab_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tab_type, v3);
  }
  this->tab_type = RECOMMEND_ONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shop_type, v3);
  }
  this->shop_type = SHOP_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->goods_id_vec);
  std::vector<unsigned int>::vector(&this->config_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::ShopmallRecommendCond>::vector(&this->cond_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order, v3);
  }
  this->order = 0;
};

// Line 245: range 000000000F0CF232-000000000F0CF55D
void __cdecl data::ShopmallRecommendConfig::ShopmallRecommendConfig(
        data::ShopmallRecommendConfig *const this,
        const data::ShopmallRecommendConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ShopRecommendTabType tab_type; // ecx
  char v7; // dl
  data::ShopType shop_type; // ecx
  char v9; // al
  std::vector<unsigned int> *p_config_id_vec; // rsi
  data::LogicType cond_comb; // ecx
  char v12; // al
  std::vector<data::ShopmallRecommendCond> *p_cond_vec; // rsi
  uint32_t order; // ecx
  char v15; // al
  const data::ShopmallRecommendConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopmallRecommendConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopmallRecommendConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->tab_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->tab_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->tab_type);
  }
  tab_type = v16->tab_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->tab_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->tab_type, v5);
  }
  this->tab_type = tab_type;
  if ( *(_BYTE *)(((unsigned __int64)&v16->shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->shop_type);
  }
  shop_type = v16->shop_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->shop_type, v5);
  }
  this->shop_type = shop_type;
  std::vector<unsigned int>::vector(&this->goods_id_vec, &v16->goods_id_vec);
  p_config_id_vec = &v16->config_id_vec;
  std::vector<unsigned int>::vector(&this->config_id_vec, &v16->config_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v16->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->cond_comb);
  }
  cond_comb = v16->cond_comb;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_config_id_vec) = v12 != 0;
    __asan_report_store4(&this->cond_comb, p_config_id_vec);
  }
  this->cond_comb = cond_comb;
  p_cond_vec = &v16->cond_vec;
  std::vector<data::ShopmallRecommendCond>::vector(&this->cond_vec, &v16->cond_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v16->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->order);
  }
  order = v16->order;
  v15 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_cond_vec) = v15 != 0;
    __asan_report_store4(&this->order, p_cond_vec);
  }
  this->order = order;
};

// Line 248: range 000000000F1C4DBC-000000000F1C4DE6
void __cdecl data::ShopmallRecommendConfig::~ShopmallRecommendConfig(data::ShopmallRecommendConfig *const this)
{
  data::ShopmallRecommendConfig::~ShopmallRecommendConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 248: range 000000000F1C4D4A-000000000F1C4DBB
void __cdecl data::ShopmallRecommendConfig::~ShopmallRecommendConfig(data::ShopmallRecommendConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopmallRecommendConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallRecommendConfig = v2;
  std::vector<data::ShopmallRecommendCond>::~vector(&this->cond_vec);
  std::vector<unsigned int>::~vector(&this->config_id_vec);
  std::vector<unsigned int>::~vector(&this->goods_id_vec);
};

// Line 266: range 000000000CE0BFA6-000000000CE0C184
void __cdecl data::ProductMcoinDetailConfig::ProductMcoinDetailConfig(data::ProductMcoinDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductMcoinDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mcoin_num, v1);
  }
  this->mcoin_num = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_non_first >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mcoin_non_first >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mcoin_non_first, v3);
  }
  this->mcoin_non_first = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_first >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_first >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mcoin_first, v3);
  }
  this->mcoin_first = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->seqence >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seqence >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->seqence, v4);
  }
  this->seqence = 0;
  if ( *(char *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_audit, v4, &this->is_audit);
  this->is_audit = 0;
  std::string::basic_string(&this->audit_display_tier);
  if ( *(_BYTE *)(((unsigned __int64)&this->original_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->original_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->original_product_type, v4);
  }
  this->original_product_type = PRODUCT_TYPE_NONE;
};

// Line 266: range 000000000D35EFF6-000000000D35F36B
void __cdecl data::ProductMcoinDetailConfig::ProductMcoinDetailConfig(
        data::ProductMcoinDetailConfig *const this,
        const data::ProductMcoinDetailConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t mcoin_num; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t mcoin_non_first; // ecx
  char v7; // dl
  uint32_t mcoin_first; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t seqence; // ecx
  char v12; // dl
  bool is_audit; // cl
  char v14; // al
  std::string *p_audit_display_tier; // rsi
  data::ProductType original_product_type; // ecx
  char v17; // al
  const data::ProductMcoinDetailConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductMcoinDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mcoin_num);
  }
  mcoin_num = a2->mcoin_num;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mcoin_num >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mcoin_num, a2);
  }
  this->mcoin_num = mcoin_num;
  v5 = (((_BYTE)v18 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->mcoin_non_first >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->mcoin_non_first >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->mcoin_non_first);
  }
  mcoin_non_first = v18->mcoin_non_first;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mcoin_non_first >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->mcoin_non_first, v5);
  }
  this->mcoin_non_first = mcoin_non_first;
  if ( *(_BYTE *)(((unsigned __int64)&v18->mcoin_first >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->mcoin_first >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->mcoin_first);
  }
  mcoin_first = v18->mcoin_first;
  v9 = *(_BYTE *)(((unsigned __int64)&this->mcoin_first >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->mcoin_first, v5);
  }
  this->mcoin_first = mcoin_first;
  v10 = (((_BYTE)v18 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->seqence >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->seqence >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->seqence);
  }
  seqence = v18->seqence;
  v12 = *(_BYTE *)(((unsigned __int64)&this->seqence >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
    __asan_report_store4(&this->seqence, v10);
  this->seqence = seqence;
  if ( *(char *)(((unsigned __int64)&v18->is_audit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_audit, v10, &v18->is_audit);
  is_audit = v18->is_audit;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_audit, v10, &this->is_audit);
  }
  this->is_audit = is_audit;
  p_audit_display_tier = &v18->audit_display_tier;
  std::string::basic_string(&this->audit_display_tier, &v18->audit_display_tier);
  if ( *(_BYTE *)(((unsigned __int64)&v18->original_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->original_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->original_product_type);
  }
  original_product_type = v18->original_product_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->original_product_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_audit_display_tier) = v17 != 0;
    __asan_report_store4(&this->original_product_type, p_audit_display_tier);
  }
  this->original_product_type = original_product_type;
};

// Line 270: range 000000000D4920F8-000000000D492155
void __cdecl data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig(data::ProductMcoinDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductMcoinDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::string::~string(&this->audit_display_tier);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 270: range 000000000D492156-000000000D492180
void __cdecl data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig(data::ProductMcoinDetailConfig *const this)
{
  data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 287: range 000000000F027ACC-000000000F027D50
void __cdecl data::ProductCardDetailConfig::ProductCardDetailConfig(data::ProductCardDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_product_type, v1);
  }
  this->card_product_type = CARD_PRODUCT_TYPE_INVALID;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_limit_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_limit_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_limit_days, v3);
  }
  this->total_limit_days = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->days, v3);
  }
  this->days = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hcoin_per_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hcoin_per_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hcoin_per_day, v4);
  }
  this->hcoin_per_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mcoin_base, v4);
  }
  this->mcoin_base = 0;
  std::map<unsigned int,unsigned int>::map(&this->base_item_map);
  std::map<unsigned int,unsigned int>::map(&this->per_day_item_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replace_mcoin_num, v4);
  }
  this->replace_mcoin_num = 0;
  v5 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->remind_mail_before_day_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remind_mail_before_day_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->remind_mail_before_day_num, v5);
  }
  this->remind_mail_before_day_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->remind_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remind_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remind_mail_id, v5);
  }
  this->remind_mail_id = 0;
};

// Line 287: range 000000000F1ACEBA-000000000F1AD376
void __cdecl data::ProductCardDetailConfig::ProductCardDetailConfig(
        data::ProductCardDetailConfig *const this,
        const data::ProductCardDetailConfig *a2)
{
  int (**v2)(...); // rdx
  data::CardProductType card_product_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t total_limit_days; // ecx
  char v7; // dl
  uint32_t days; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t hcoin_per_day; // ecx
  char v12; // dl
  uint32_t mcoin_base; // ecx
  char v14; // al
  std::map<unsigned int,unsigned int> *p_per_day_item_map; // rsi
  uint32_t replace_mcoin_num; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t remind_mail_before_day_num; // ecx
  char v20; // dl
  uint32_t remind_mail_id; // ecx
  char v22; // al
  const data::ProductCardDetailConfig *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->card_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->card_product_type);
  }
  card_product_type = a2->card_product_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->card_product_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->card_product_type, a2);
  }
  this->card_product_type = card_product_type;
  v5 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->total_limit_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->total_limit_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->total_limit_days);
  }
  total_limit_days = v23->total_limit_days;
  v7 = *(_BYTE *)(((unsigned __int64)&this->total_limit_days >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->total_limit_days, v5);
  }
  this->total_limit_days = total_limit_days;
  if ( *(_BYTE *)(((unsigned __int64)&v23->days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->days);
  }
  days = v23->days;
  v9 = *(_BYTE *)(((unsigned __int64)&this->days >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->days, v5);
  }
  this->days = days;
  v10 = (((_BYTE)v23 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->hcoin_per_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->hcoin_per_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->hcoin_per_day);
  }
  hcoin_per_day = v23->hcoin_per_day;
  v12 = *(_BYTE *)(((unsigned __int64)&this->hcoin_per_day >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->hcoin_per_day, v10);
  }
  this->hcoin_per_day = hcoin_per_day;
  if ( *(_BYTE *)(((unsigned __int64)&v23->mcoin_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->mcoin_base);
  }
  mcoin_base = v23->mcoin_base;
  v14 = *(_BYTE *)(((unsigned __int64)&this->mcoin_base >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->mcoin_base, v10);
  }
  this->mcoin_base = mcoin_base;
  std::map<unsigned int,unsigned int>::map(&this->base_item_map, &v23->base_item_map);
  p_per_day_item_map = &v23->per_day_item_map;
  std::map<unsigned int,unsigned int>::map(&this->per_day_item_map, &v23->per_day_item_map);
  if ( *(_BYTE *)(((unsigned __int64)&v23->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->replace_mcoin_num);
  }
  replace_mcoin_num = v23->replace_mcoin_num;
  v17 = *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_per_day_item_map) = v17 != 0;
    __asan_report_store4(&this->replace_mcoin_num, p_per_day_item_map);
  }
  this->replace_mcoin_num = replace_mcoin_num;
  v18 = (((_BYTE)v23 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->remind_mail_before_day_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->remind_mail_before_day_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->remind_mail_before_day_num);
  }
  remind_mail_before_day_num = v23->remind_mail_before_day_num;
  v20 = *(_BYTE *)(((unsigned __int64)&this->remind_mail_before_day_num >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->remind_mail_before_day_num, v18);
  }
  this->remind_mail_before_day_num = remind_mail_before_day_num;
  if ( *(_BYTE *)(((unsigned __int64)&v23->remind_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->remind_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->remind_mail_id);
  }
  remind_mail_id = v23->remind_mail_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->remind_mail_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->remind_mail_id, v18);
  }
  this->remind_mail_id = remind_mail_id;
};

// Line 291: range 000000000D2C652C-000000000D2C6556
void __cdecl data::ProductCardDetailConfig::~ProductCardDetailConfig(data::ProductCardDetailConfig *const this)
{
  data::ProductCardDetailConfig::~ProductCardDetailConfig(this);
  operator delete(this, 0xC0uLL);
};

// Line 291: range 000000000D2C64BE-000000000D2C652B
void __cdecl data::ProductCardDetailConfig::~ProductCardDetailConfig(data::ProductCardDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::map<unsigned int,unsigned int>::~map(&this->per_day_item_map);
  std::map<unsigned int,unsigned int>::~map(&this->base_item_map);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 311: range 000000000F027D52-000000000F027E23
void __cdecl data::ProductPlayDetailConfig::ProductPlayDetailConfig(data::ProductPlayDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductPlayDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_type, v1);
  }
  this->play_type = PRODUCT_PLAY_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->replace_mcoin_num, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->replace_mcoin_num = 0;
};

// Line 311: range 000000000F1AD4B8-000000000F1AD60A
void __cdecl data::ProductPlayDetailConfig::ProductPlayDetailConfig(
        data::ProductPlayDetailConfig *const this,
        const data::ProductPlayDetailConfig *a2)
{
  int (**v2)(...); // rdx
  data::ProductPlayType play_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t replace_mcoin_num; // ecx
  char v7; // dl
  const data::ProductPlayDetailConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductPlayDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_type);
  }
  play_type = a2->play_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->play_type, a2);
  }
  this->play_type = play_type;
  v5 = (((_BYTE)v8 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->replace_mcoin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->replace_mcoin_num);
  }
  replace_mcoin_num = v8->replace_mcoin_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->replace_mcoin_num, v5);
  }
  this->replace_mcoin_num = replace_mcoin_num;
};

// Line 315: range 000000000D2C663C-000000000D2C6666
void __cdecl data::ProductPlayDetailConfig::~ProductPlayDetailConfig(data::ProductPlayDetailConfig *const this)
{
  data::ProductPlayDetailConfig::~ProductPlayDetailConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 315: range 000000000D2C65EE-000000000D2C663B
void __cdecl data::ProductPlayDetailConfig::~ProductPlayDetailConfig(data::ProductPlayDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductPlayDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 327: range 000000000CE58136-000000000CE58245
data::PackageContentConfig *__cdecl data::PackageContentConfig::operator=(
        data::PackageContentConfig *const this,
        const data::PackageContentConfig *a2)
{
  uint32_t material_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t material_num; // ecx
  char v6; // dl
  const data::PackageContentConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->material_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->material_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->material_num);
  }
  material_num = v8->material_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->material_num, v4);
  }
  this->material_num = material_num;
  return this;
};

// Line 327: range 000000000D35F920-000000000D35F9E5
void __cdecl data::PackageContentConfig::PackageContentConfig(data::PackageContentConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PackageContentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PackageContentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v1);
  }
  this->material_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_num, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->material_num = 0;
};

// Line 327: range 000000000D43DEC8-000000000D43E007
void __cdecl data::PackageContentConfig::PackageContentConfig(
        data::PackageContentConfig *const this,
        const data::PackageContentConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t material_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_num; // ecx
  char v7; // dl
  const data::PackageContentConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PackageContentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PackageContentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->material_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->material_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->material_num);
  }
  material_num = v8->material_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_num, v5);
  }
  this->material_num = material_num;
};

// Line 330: range 000000000D35FB2E-000000000D35FB6F
void __cdecl data::PackageContentConfig::~PackageContentConfig(data::PackageContentConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PackageContentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PackageContentConfig = v2;
};

// Line 330: range 000000000D35FB70-000000000D35FB9A
void __cdecl data::PackageContentConfig::~PackageContentConfig(data::PackageContentConfig *const this)
{
  data::PackageContentConfig::~PackageContentConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 340: range 000000000F027E5C-000000000F027EF7
void __cdecl data::ProductPS4PackageDetailConfig::ProductPS4PackageDetailConfig(
        data::ProductPS4PackageDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductPS4PackageDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_config_id, v1);
  }
  this->mail_config_id = 0;
};

// Line 340: range 000000000F1AD74C-000000000F1AD857
void __cdecl data::ProductPS4PackageDetailConfig::ProductPS4PackageDetailConfig(
        data::ProductPS4PackageDetailConfig *const this,
        const data::ProductPS4PackageDetailConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<data::PackageContentConfig> *p_content_vec; // rsi
  uint32_t mail_config_id; // ecx
  char v5; // al

  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductPS4PackageDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  p_content_vec = &a2->content_vec;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec, &a2->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mail_config_id);
  }
  mail_config_id = a2->mail_config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_content_vec) = v5 != 0;
    __asan_report_store4(&this->mail_config_id, p_content_vec);
  }
  this->mail_config_id = mail_config_id;
};

// Line 344: range 000000000F1C4CC0-000000000F1C4D1D
void __cdecl data::ProductPS4PackageDetailConfig::~ProductPS4PackageDetailConfig(
        data::ProductPS4PackageDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductPS4PackageDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::~vector(&this->content_vec);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 344: range 000000000F1C4D1E-000000000F1C4D48
void __cdecl data::ProductPS4PackageDetailConfig::~ProductPS4PackageDetailConfig(
        data::ProductPS4PackageDetailConfig *const this)
{
  data::ProductPS4PackageDetailConfig::~ProductPS4PackageDetailConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 356: range 000000000F027EF8-000000000F027F93
void __cdecl data::ProductGoogleGiftCardDetailConfig::ProductGoogleGiftCardDetailConfig(
        data::ProductGoogleGiftCardDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductGoogleGiftCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_config_id, v1);
  }
  this->mail_config_id = 0;
};

// Line 356: range 000000000F1AD998-000000000F1ADAA3
void __cdecl data::ProductGoogleGiftCardDetailConfig::ProductGoogleGiftCardDetailConfig(
        data::ProductGoogleGiftCardDetailConfig *const this,
        const data::ProductGoogleGiftCardDetailConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<data::PackageContentConfig> *p_content_vec; // rsi
  uint32_t mail_config_id; // ecx
  char v5; // al

  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductGoogleGiftCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  p_content_vec = &a2->content_vec;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec, &a2->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mail_config_id);
  }
  mail_config_id = a2->mail_config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_content_vec) = v5 != 0;
    __asan_report_store4(&this->mail_config_id, p_content_vec);
  }
  this->mail_config_id = mail_config_id;
};

// Line 360: range 000000000F1C4C94-000000000F1C4CBE
void __cdecl data::ProductGoogleGiftCardDetailConfig::~ProductGoogleGiftCardDetailConfig(
        data::ProductGoogleGiftCardDetailConfig *const this)
{
  data::ProductGoogleGiftCardDetailConfig::~ProductGoogleGiftCardDetailConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 360: range 000000000F1C4C36-000000000F1C4C93
void __cdecl data::ProductGoogleGiftCardDetailConfig::~ProductGoogleGiftCardDetailConfig(
        data::ProductGoogleGiftCardDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductGoogleGiftCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::~vector(&this->content_vec);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 372: range 000000000F027F94-000000000F028175
void __cdecl data::ProductConcertPackageDetailConfig::ProductConcertPackageDetailConfig(
        data::ProductConcertPackageDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductConcertPackageDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replace_mcoin_num, v1);
  }
  this->replace_mcoin_num = 0;
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->delivery_end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_timestamp, v1);
  }
  this->begin_timestamp = 0;
  v3 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_timestamp, v3);
  }
  this->end_timestamp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delivery_end_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delivery_end_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delivery_end_timestamp, v3);
  }
  this->delivery_end_timestamp = 0;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_config_id, v3);
  }
  this->mail_config_id = 0;
};

// Line 372: range 000000000F1ADBE4-000000000F1ADF90
void __cdecl data::ProductConcertPackageDetailConfig::ProductConcertPackageDetailConfig(
        data::ProductConcertPackageDetailConfig *const this,
        const data::ProductConcertPackageDetailConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t replace_mcoin_num; // ecx
  char v4; // al
  std::string *p_delivery_end_time; // rsi
  uint32_t begin_timestamp; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t end_timestamp; // ecx
  char v10; // dl
  uint32_t delivery_end_timestamp; // ecx
  char v12; // al
  std::vector<data::PackageContentConfig> *p_content_vec; // rsi
  uint32_t mail_config_id; // ecx
  char v15; // al
  const data::ProductConcertPackageDetailConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductConcertPackageDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->replace_mcoin_num);
  }
  replace_mcoin_num = a2->replace_mcoin_num;
  v4 = *(_BYTE *)(((unsigned __int64)&this->replace_mcoin_num >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->replace_mcoin_num, a2);
  }
  this->replace_mcoin_num = replace_mcoin_num;
  std::string::basic_string(&this->begin_time, &v16->begin_time);
  std::string::basic_string(&this->end_time, &v16->end_time);
  p_delivery_end_time = &v16->delivery_end_time;
  std::string::basic_string(&this->delivery_end_time, &v16->delivery_end_time);
  if ( *(_BYTE *)(((unsigned __int64)&v16->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->begin_timestamp);
  }
  begin_timestamp = v16->begin_timestamp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_timestamp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_delivery_end_time) = v7 != 0;
    __asan_report_store4(&this->begin_timestamp, p_delivery_end_time);
  }
  this->begin_timestamp = begin_timestamp;
  v8 = (((_BYTE)v16 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->end_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->end_timestamp);
  }
  end_timestamp = v16->end_timestamp;
  v10 = *(_BYTE *)(((unsigned __int64)&this->end_timestamp >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->end_timestamp, v8);
  }
  this->end_timestamp = end_timestamp;
  if ( *(_BYTE *)(((unsigned __int64)&v16->delivery_end_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->delivery_end_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->delivery_end_timestamp);
  }
  delivery_end_timestamp = v16->delivery_end_timestamp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->delivery_end_timestamp >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->delivery_end_timestamp, v8);
  }
  this->delivery_end_timestamp = delivery_end_timestamp;
  p_content_vec = &v16->content_vec;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec, &v16->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v16->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->mail_config_id);
  }
  mail_config_id = v16->mail_config_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_content_vec) = v15 != 0;
    __asan_report_store4(&this->mail_config_id, p_content_vec);
  }
  this->mail_config_id = mail_config_id;
};

// Line 376: range 000000000D2C66FE-000000000D2C678D
void __cdecl data::ProductConcertPackageDetailConfig::~ProductConcertPackageDetailConfig(
        data::ProductConcertPackageDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductConcertPackageDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::~vector(&this->content_vec);
  std::string::~string(&this->delivery_end_time);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 376: range 000000000D2C678E-000000000D2C67B8
void __cdecl data::ProductConcertPackageDetailConfig::~ProductConcertPackageDetailConfig(
        data::ProductConcertPackageDetailConfig *const this)
{
  data::ProductConcertPackageDetailConfig::~ProductConcertPackageDetailConfig(this);
  operator delete(this, 0xD0uLL);
};

// Line 395: range 000000000F028176-000000000F028221
void __cdecl data::ProductAppleGiftCardDetailConfig::ProductAppleGiftCardDetailConfig(
        data::ProductAppleGiftCardDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductAppleGiftCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_config_id, v1);
  }
  this->mail_config_id = 0;
  std::string::basic_string(&this->audit_display_tier);
};

// Line 395: range 000000000F1AE0D2-000000000F1AE20D
void __cdecl data::ProductAppleGiftCardDetailConfig::ProductAppleGiftCardDetailConfig(
        data::ProductAppleGiftCardDetailConfig *const this,
        const data::ProductAppleGiftCardDetailConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<data::PackageContentConfig> *p_content_vec; // rsi
  uint32_t mail_config_id; // ecx
  char v5; // al

  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductAppleGiftCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  p_content_vec = &a2->content_vec;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec, &a2->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mail_config_id);
  }
  mail_config_id = a2->mail_config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_content_vec) = v5 != 0;
    __asan_report_store4(&this->mail_config_id, p_content_vec);
  }
  this->mail_config_id = mail_config_id;
  std::string::basic_string(&this->audit_display_tier, &a2->audit_display_tier);
};

// Line 399: range 000000000D2C6850-000000000D2C68BD
void __cdecl data::ProductAppleGiftCardDetailConfig::~ProductAppleGiftCardDetailConfig(
        data::ProductAppleGiftCardDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductAppleGiftCardDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::string::~string(&this->audit_display_tier);
  std::vector<data::PackageContentConfig>::~vector(&this->content_vec);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 399: range 000000000D2C68BE-000000000D2C68E8
void __cdecl data::ProductAppleGiftCardDetailConfig::~ProductAppleGiftCardDetailConfig(
        data::ProductAppleGiftCardDetailConfig *const this)
{
  data::ProductAppleGiftCardDetailConfig::~ProductAppleGiftCardDetailConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 412: range 000000000F028222-000000000F028303
void __cdecl data::ProductPsnCompensationDetailConfig::ProductPsnCompensationDetailConfig(
        data::ProductPsnCompensationDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ProductDetailConfig::ProductDetailConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProductPsnCompensationDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_config_id, v1);
  }
  this->mail_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_count, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->limit_count = 0;
};

// Line 412: range 000000000F1AE34E-000000000F1AE4DE
void __cdecl data::ProductPsnCompensationDetailConfig::ProductPsnCompensationDetailConfig(
        data::ProductPsnCompensationDetailConfig *const this,
        const data::ProductPsnCompensationDetailConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<data::PackageContentConfig> *p_content_vec; // rsi
  uint32_t mail_config_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t limit_count; // ecx
  char v8; // dl

  data::ProductDetailConfig::ProductDetailConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProductPsnCompensationDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductDetailConfig = v2;
  p_content_vec = &a2->content_vec;
  std::vector<data::PackageContentConfig>::vector(&this->content_vec, &a2->content_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mail_config_id);
  }
  mail_config_id = a2->mail_config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mail_config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_content_vec) = v5 != 0;
    __asan_report_store4(&this->mail_config_id, p_content_vec);
  }
  this->mail_config_id = mail_config_id;
  v6 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_count);
  }
  limit_count = a2->limit_count;
  v8 = *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->limit_count, v6);
  }
  this->limit_count = limit_count;
};

// Line 416: range 000000000F1C4C0A-000000000F1C4C34
void __cdecl data::ProductPsnCompensationDetailConfig::~ProductPsnCompensationDetailConfig(
        data::ProductPsnCompensationDetailConfig *const this)
{
  data::ProductPsnCompensationDetailConfig::~ProductPsnCompensationDetailConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 416: range 000000000F1C4BAC-000000000F1C4C09
void __cdecl data::ProductPsnCompensationDetailConfig::~ProductPsnCompensationDetailConfig(
        data::ProductPsnCompensationDetailConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductPsnCompensationDetailConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductDetailConfig = v2;
  std::vector<data::PackageContentConfig>::~vector(&this->content_vec);
  data::ProductDetailConfig::~ProductDetailConfig(this);
};

// Line 429: range 000000000F028304-000000000F028393
void __cdecl data::PriceTierConfig::PriceTierConfig(data::PriceTierConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PriceTierConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PriceTierConfig = v2;
  std::string::basic_string(&this->tier_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vip_point, v1);
  }
  this->vip_point = 0;
};

// Line 429: range 000000000F1AE620-000000000F1AE6F5
void __cdecl data::PriceTierConfig::PriceTierConfig(data::PriceTierConfig *const this, const data::PriceTierConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_tier_name; // rsi
  uint32_t vip_point; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::PriceTierConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PriceTierConfig = v2;
  p_tier_name = &a2->tier_name;
  std::string::basic_string(&this->tier_name, &a2->tier_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vip_point);
  }
  vip_point = a2->vip_point;
  v5 = *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_tier_name) = v5 != 0;
    __asan_report_store4(&this->vip_point, p_tier_name);
  }
  this->vip_point = vip_point;
};

// Line 432: range 000000000F1C4B80-000000000F1C4BAA
void __cdecl data::PriceTierConfig::~PriceTierConfig(data::PriceTierConfig *const this)
{
  data::PriceTierConfig::~PriceTierConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 432: range 000000000F1C4B2E-000000000F1C4B7F
void __cdecl data::PriceTierConfig::~PriceTierConfig(data::PriceTierConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PriceTierConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PriceTierConfig = v2;
  std::string::~string(&this->tier_name);
};

// Line 444: range 000000000F028394-000000000F028423
void __cdecl data::EpicCatalogShieldConfig::EpicCatalogShieldConfig(data::EpicCatalogShieldConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EpicCatalogShieldConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EpicCatalogShieldConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->catalog_item_id);
};

// Line 444: range 000000000F1AE7F0-000000000F1AE8C5
void __cdecl data::EpicCatalogShieldConfig::EpicCatalogShieldConfig(
        data::EpicCatalogShieldConfig *const this,
        const data::EpicCatalogShieldConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::EpicCatalogShieldConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EpicCatalogShieldConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EpicCatalogShieldConfig = v2;
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
  std::string::basic_string(&this->catalog_item_id, &v5->catalog_item_id);
};

// Line 447: range 000000000F1C4AB0-000000000F1C4B01
void __cdecl data::EpicCatalogShieldConfig::~EpicCatalogShieldConfig(data::EpicCatalogShieldConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EpicCatalogShieldConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EpicCatalogShieldConfig = v2;
  std::string::~string(&this->catalog_item_id);
};

// Line 447: range 000000000F1C4B02-000000000F1C4B2C
void __cdecl data::EpicCatalogShieldConfig::~EpicCatalogShieldConfig(data::EpicCatalogShieldConfig *const this)
{
  data::EpicCatalogShieldConfig::~EpicCatalogShieldConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 459: range 000000000F028424-000000000F028535
void __cdecl data::ProductIdConfig::ProductIdConfig(data::ProductIdConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductIdConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductIdConfig = v2;
  std::string::basic_string(&this->product_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_internal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_internal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_internal, v3, v4);
  this->is_internal = 0;
  std::string::basic_string(&this->entitlement_id);
  std::string::basic_string(&this->catalog_item_id);
  std::vector<std::string>::vector(&this->platform_type_str_list);
  std::vector<unsigned int>::vector(&this->platform_type_list);
};

// Line 459: range 000000000F1AEA06-000000000F1AEC32
void __cdecl data::ProductIdConfig::ProductIdConfig(data::ProductIdConfig *const this, const data::ProductIdConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_product_id; // rsi
  uint32_t config_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_internal; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductIdConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProductIdConfig = v2;
  p_product_id = &a2->product_id;
  std::string::basic_string(&this->product_id, &a2->product_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_product_id) = v5 != 0;
    __asan_report_store4(&this->config_id, p_product_id);
  }
  this->config_id = config_id;
  v6 = ((_BYTE)a2 + 44) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_internal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_internal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_internal, v6, v7);
  is_internal = a2->is_internal;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_internal >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_internal, v6, v10);
  this->is_internal = is_internal;
  std::string::basic_string(&this->entitlement_id, &a2->entitlement_id);
  std::string::basic_string(&this->catalog_item_id, &a2->catalog_item_id);
  std::vector<std::string>::vector(&this->platform_type_str_list, &a2->platform_type_str_list);
  std::vector<unsigned int>::vector(&this->platform_type_list, &a2->platform_type_list);
};

// Line 462: range 000000000F1C4A84-000000000F1C4AAE
void __cdecl data::ProductIdConfig::~ProductIdConfig(data::ProductIdConfig *const this)
{
  data::ProductIdConfig::~ProductIdConfig(this);
  operator delete(this, 0xA0uLL);
};

// Line 462: range 000000000F1C49F0-000000000F1C4A83
void __cdecl data::ProductIdConfig::~ProductIdConfig(data::ProductIdConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProductIdConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProductIdConfig = v2;
  std::vector<unsigned int>::~vector(&this->platform_type_list);
  std::vector<std::string>::~vector(&this->platform_type_str_list);
  std::string::~string(&this->catalog_item_id);
  std::string::~string(&this->entitlement_id);
  std::string::~string(&this->product_id);
};

// Line 479: range 000000000F028536-000000000F028761
void __cdecl data::ShopmallGoodsSaleConfig::ShopmallGoodsSaleConfig(data::ShopmallGoodsSaleConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ShopmallGoodsSaleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallGoodsSaleConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->goods_id, v3);
  }
  this->goods_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->discount_scoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->discount_scoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->discount_scoin, v3);
  }
  this->discount_scoin = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->discount_hcoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->discount_hcoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->discount_hcoin, v4);
  }
  this->discount_hcoin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->discount_mcoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->discount_mcoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->discount_mcoin, v4);
  }
  this->discount_mcoin = 0;
  std::string::basic_string(&this->discount_begin_time);
  std::string::basic_string(&this->discount_end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->discount_begin_timestamp, v4);
  }
  this->discount_begin_timestamp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->discount_end_timestamp >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->discount_end_timestamp, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->discount_end_timestamp = 0;
};

// Line 479: range 000000000F1AED2E-000000000F1AF133
void __cdecl data::ShopmallGoodsSaleConfig::ShopmallGoodsSaleConfig(
        data::ShopmallGoodsSaleConfig *const this,
        const data::ShopmallGoodsSaleConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t goods_id; // ecx
  char v7; // dl
  uint32_t discount_scoin; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t discount_hcoin; // ecx
  char v12; // dl
  uint32_t discount_mcoin; // ecx
  char v14; // al
  std::string *p_discount_end_time; // rsi
  uint32_t discount_begin_timestamp; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t discount_end_timestamp; // ecx
  char v20; // dl
  const data::ShopmallGoodsSaleConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopmallGoodsSaleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopmallGoodsSaleConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->goods_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->goods_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->goods_id);
  }
  goods_id = v21->goods_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->goods_id, v5);
  }
  this->goods_id = goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->discount_scoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->discount_scoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->discount_scoin);
  }
  discount_scoin = v21->discount_scoin;
  v9 = *(_BYTE *)(((unsigned __int64)&this->discount_scoin >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->discount_scoin, v5);
  }
  this->discount_scoin = discount_scoin;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->discount_hcoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->discount_hcoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->discount_hcoin);
  }
  discount_hcoin = v21->discount_hcoin;
  v12 = *(_BYTE *)(((unsigned __int64)&this->discount_hcoin >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->discount_hcoin, v10);
  }
  this->discount_hcoin = discount_hcoin;
  if ( *(_BYTE *)(((unsigned __int64)&v21->discount_mcoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->discount_mcoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->discount_mcoin);
  }
  discount_mcoin = v21->discount_mcoin;
  v14 = *(_BYTE *)(((unsigned __int64)&this->discount_mcoin >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->discount_mcoin, v10);
  }
  this->discount_mcoin = discount_mcoin;
  std::string::basic_string(&this->discount_begin_time, &v21->discount_begin_time);
  p_discount_end_time = &v21->discount_end_time;
  std::string::basic_string(&this->discount_end_time, &v21->discount_end_time);
  if ( *(_BYTE *)(((unsigned __int64)&v21->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->discount_begin_timestamp);
  }
  discount_begin_timestamp = v21->discount_begin_timestamp;
  v17 = *(_BYTE *)(((unsigned __int64)&this->discount_begin_timestamp >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_discount_end_time) = v17 != 0;
    __asan_report_store4(&this->discount_begin_timestamp, p_discount_end_time);
  }
  this->discount_begin_timestamp = discount_begin_timestamp;
  v18 = (((_BYTE)v21 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->discount_end_timestamp >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->discount_end_timestamp);
  }
  discount_end_timestamp = v21->discount_end_timestamp;
  v20 = *(_BYTE *)(((unsigned __int64)&this->discount_end_timestamp >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->discount_end_timestamp, v18);
  }
  this->discount_end_timestamp = discount_end_timestamp;
};

// Line 482: range 000000000F1C49C4-000000000F1C49EE
void __cdecl data::ShopmallGoodsSaleConfig::~ShopmallGoodsSaleConfig(data::ShopmallGoodsSaleConfig *const this)
{
  data::ShopmallGoodsSaleConfig::~ShopmallGoodsSaleConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 482: range 000000000F1C4962-000000000F1C49C3
void __cdecl data::ShopmallGoodsSaleConfig::~ShopmallGoodsSaleConfig(data::ShopmallGoodsSaleConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShopmallGoodsSaleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallGoodsSaleConfig = v2;
  std::string::~string(&this->discount_end_time);
  std::string::~string(&this->discount_begin_time);
};

// Line 820: range 000000000CE5772C-000000000CE578E6
data::ShopmallRecommendCond *__cdecl data::ShopmallRecommendCond::operator=(
        data::ShopmallRecommendCond *const this,
        const data::ShopmallRecommendCond *a2)
{
  data::ShopmallRecommendCondType type; // ecx
  char v3; // al
  std::string *p_param2_str; // rsi
  uint32_t param1; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t param2; // ecx
  char v9; // dl
  const data::ShopmallRecommendCond *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
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
  std::string::operator=(&this->param1_str, &v11->param1_str);
  p_param2_str = &v11->param2_str;
  std::string::operator=(&this->param2_str, &v11->param2_str);
  if ( *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->param1);
  }
  param1 = v11->param1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_param2_str) = v6 != 0;
    __asan_report_store4(&this->param1, p_param2_str);
  }
  this->param1 = param1;
  v7 = (((_BYTE)v11 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->param2);
  }
  param2 = v11->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->param2, v7);
  }
  this->param2 = param2;
  return this;
};

// Line 2127: range 000000000D3D3D80-000000000D3D3F91
void __cdecl data::ShopmallRecommendCond::ShopmallRecommendCond(
        data::ShopmallRecommendCond *const this,
        const data::ShopmallRecommendCond *a2)
{
  int (**v2)(...); // rdx
  data::ShopmallRecommendCondType type; // ecx
  char v4; // al
  std::string *p_param2_str; // rsi
  uint32_t param1; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t param2; // ecx
  char v10; // dl
  const data::ShopmallRecommendCond *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShopmallRecommendCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopmallRecommendCond = v2;
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
  std::string::basic_string(&this->param1_str, &v11->param1_str);
  p_param2_str = &v11->param2_str;
  std::string::basic_string(&this->param2_str, &v11->param2_str);
  if ( *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->param1);
  }
  param1 = v11->param1;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_param2_str) = v7 != 0;
    __asan_report_store4(&this->param1, p_param2_str);
  }
  this->param1 = param1;
  v8 = (((_BYTE)v11 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->param2);
  }
  param2 = v11->param2;
  v10 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->param2, v8);
  }
  this->param2 = param2;
};
