// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityVintageMarketExcelConfig.gen.h

// Line 125: range 0000000012A58C96-0000000012A58D99
void __cdecl data::VintageMarketTraderExcelConfig::VintageMarketTraderExcelConfig(
        data::VintageMarketTraderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketTraderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketTraderExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->price >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->price >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->price, v3);
  }
  this->price = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, v3);
  }
  this->num = 0;
};

// Line 125: range 0000000012A98422-0000000012A985D6
void __cdecl data::VintageMarketTraderExcelConfig::VintageMarketTraderExcelConfig(
        data::VintageMarketTraderExcelConfig *const this,
        const data::VintageMarketTraderExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t price; // ecx
  char v7; // dl
  uint32_t num; // ecx
  char v9; // al
  const data::VintageMarketTraderExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketTraderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketTraderExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->price >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->price >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->price);
  }
  price = v10->price;
  v7 = *(_BYTE *)(((unsigned __int64)&this->price >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->price, v5);
  }
  this->price = price;
  if ( *(_BYTE *)(((unsigned __int64)&v10->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->num);
  }
  num = v10->num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->num, v5);
  }
  this->num = num;
};

// Line 128: range 0000000012A28446-0000000012A28487
void __cdecl data::VintageMarketTraderExcelConfig::~VintageMarketTraderExcelConfig(
        data::VintageMarketTraderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketTraderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketTraderExcelConfig = v2;
};

// Line 128: range 0000000012A28488-0000000012A284B2
void __cdecl data::VintageMarketTraderExcelConfig::~VintageMarketTraderExcelConfig(
        data::VintageMarketTraderExcelConfig *const this)
{
  data::VintageMarketTraderExcelConfig::~VintageMarketTraderExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 139: range 00000000128E2518-00000000128E25A7
void __cdecl data::VintageMarketDealExcelConfig::VintageMarketDealExcelConfig(
        data::VintageMarketDealExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketDealExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketDealExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  std::vector<data::VintageMarketTraderExcelConfig>::vector(&this->trader_config);
};

// Line 139: range 0000000012A7C9A0-0000000012A7CA75
void __cdecl data::VintageMarketDealExcelConfig::VintageMarketDealExcelConfig(
        data::VintageMarketDealExcelConfig *const this,
        const data::VintageMarketDealExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  const data::VintageMarketDealExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketDealExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketDealExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  std::vector<data::VintageMarketTraderExcelConfig>::vector(&this->trader_config, &v5->trader_config);
};

// Line 142: range 0000000012AA03F2-0000000012AA041C
void __cdecl data::VintageMarketDealExcelConfig::~VintageMarketDealExcelConfig(
        data::VintageMarketDealExcelConfig *const this)
{
  data::VintageMarketDealExcelConfig::~VintageMarketDealExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 142: range 0000000012AA03A0-0000000012AA03F1
void __cdecl data::VintageMarketDealExcelConfig::~VintageMarketDealExcelConfig(
        data::VintageMarketDealExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketDealExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketDealExcelConfig = v2;
  std::vector<data::VintageMarketTraderExcelConfig>::~vector(&this->trader_config);
};

// Line 154: range 0000000012A7CBB6-0000000012A7CDEF
void __cdecl data::VintageMarketBargainExcelConfig::VintageMarketBargainExcelConfig(
        data::VintageMarketBargainExcelConfig *const this,
        const data::VintageMarketBargainExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t bargain_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  uint32_t quest_item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t fail_coin_num; // ecx
  char v12; // dl
  const data::VintageMarketBargainExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketBargainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketBargainExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bargain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bargain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bargain_id);
  }
  bargain_id = a2->bargain_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->bargain_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->bargain_id, a2);
  }
  this->bargain_id = bargain_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->quest_id);
  }
  quest_id = v13->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->quest_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->quest_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->quest_item_id);
  }
  quest_item_id = v13->quest_item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->quest_item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->quest_item_id, v5);
  }
  this->quest_item_id = quest_item_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->fail_coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->fail_coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->fail_coin_num);
  }
  fail_coin_num = v13->fail_coin_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->fail_coin_num >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->fail_coin_num, v10);
  }
  this->fail_coin_num = fail_coin_num;
};

// Line 157: range 0000000012AA0374-0000000012AA039E
void __cdecl data::VintageMarketBargainExcelConfig::~VintageMarketBargainExcelConfig(
        data::VintageMarketBargainExcelConfig *const this)
{
  data::VintageMarketBargainExcelConfig::~VintageMarketBargainExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 157: range 0000000012AA0332-0000000012AA0373
void __cdecl data::VintageMarketBargainExcelConfig::~VintageMarketBargainExcelConfig(
        data::VintageMarketBargainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketBargainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketBargainExcelConfig = v2;
};

// Line 171: range 0000000012A58F2E-0000000012A58FF3
void __cdecl data::VintageMarketAttrExcelConfig::VintageMarketAttrExcelConfig(
        data::VintageMarketAttrExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_value, v1);
  }
  this->default_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->max_value = 0;
};

// Line 171: range 0000000012A98696-0000000012A987D5
void __cdecl data::VintageMarketAttrExcelConfig::VintageMarketAttrExcelConfig(
        data::VintageMarketAttrExcelConfig *const this,
        const data::VintageMarketAttrExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t default_value; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_value; // ecx
  char v7; // dl
  const data::VintageMarketAttrExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketAttrExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->default_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->default_value);
  }
  default_value = a2->default_value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->default_value, a2);
  }
  this->default_value = default_value;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->max_value);
  }
  max_value = v8->max_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_value, v5);
  }
  this->max_value = max_value;
};

// Line 174: range 0000000012A290D4-0000000012A29115
void __cdecl data::VintageMarketAttrExcelConfig::~VintageMarketAttrExcelConfig(
        data::VintageMarketAttrExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrExcelConfig = v2;
};

// Line 174: range 0000000012A29116-0000000012A29140
void __cdecl data::VintageMarketAttrExcelConfig::~VintageMarketAttrExcelConfig(
        data::VintageMarketAttrExcelConfig *const this)
{
  data::VintageMarketAttrExcelConfig::~VintageMarketAttrExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 184: range 00000000128E25FC-00000000128E271F
void __cdecl data::VintageMarketStoreExcelConfig::VintageMarketStoreExcelConfig(
        data::VintageMarketStoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketStoreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->store_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->store_id, v1);
  }
  this->store_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->default_coin, v3);
  }
  this->default_coin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slot_count, v3);
  }
  this->slot_count = 0;
  std::vector<unsigned int>::vector(&this->slot_cost);
  std::vector<data::VintageMarketAttrExcelConfig>::vector(&this->attr_list);
};

// Line 184: range 0000000012A7CF30-0000000012A7D141
void __cdecl data::VintageMarketStoreExcelConfig::VintageMarketStoreExcelConfig(
        data::VintageMarketStoreExcelConfig *const this,
        const data::VintageMarketStoreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t store_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t default_coin; // ecx
  char v7; // dl
  uint32_t slot_count; // ecx
  char v9; // al
  const data::VintageMarketStoreExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketStoreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->store_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->store_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->store_id);
  }
  store_id = a2->store_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->store_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->store_id, a2);
  }
  this->store_id = store_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->default_coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->default_coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->default_coin);
  }
  default_coin = v10->default_coin;
  v7 = *(_BYTE *)(((unsigned __int64)&this->default_coin >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->default_coin, v5);
  }
  this->default_coin = default_coin;
  if ( *(_BYTE *)(((unsigned __int64)&v10->slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->slot_count);
  }
  slot_count = v10->slot_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->slot_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->slot_count, v5);
  }
  this->slot_count = slot_count;
  std::vector<unsigned int>::vector(&this->slot_cost, &v10->slot_cost);
  std::vector<data::VintageMarketAttrExcelConfig>::vector(&this->attr_list, &v10->attr_list);
};

// Line 187: range 0000000012AA0306-0000000012AA0330
void __cdecl data::VintageMarketStoreExcelConfig::~VintageMarketStoreExcelConfig(
        data::VintageMarketStoreExcelConfig *const this)
{
  data::VintageMarketStoreExcelConfig::~VintageMarketStoreExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 187: range 0000000012AA02A4-0000000012AA0305
void __cdecl data::VintageMarketStoreExcelConfig::~VintageMarketStoreExcelConfig(
        data::VintageMarketStoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketStoreExcelConfig = v2;
  std::vector<data::VintageMarketAttrExcelConfig>::~vector(&this->attr_list);
  std::vector<unsigned int>::~vector(&this->slot_cost);
};

// Line 202: range 0000000012A59150-0000000012A592AD
void __cdecl data::VintageMarketStoreRoundExcelConfig::VintageMarketStoreRoundExcelConfig(
        data::VintageMarketStoreRoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketStoreRoundExcelConfig = v2;
  std::vector<float>::vector(&this->attr_low_limit_facotr_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->random_template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->random_template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->random_template_id, v1);
  }
  this->random_template_id = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_factor, v3);
  }
  this->reward_factor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_income >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_income >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_income, v3);
  }
  this->fixed_income = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->income_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->income_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->income_factor, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->income_factor = 0.0;
};

// Line 202: range 0000000012A7C456-0000000012A7C6B0
void __cdecl data::VintageMarketStoreRoundExcelConfig::VintageMarketStoreRoundExcelConfig(
        data::VintageMarketStoreRoundExcelConfig *const this,
        const data::VintageMarketStoreRoundExcelConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<float> *p_attr_low_limit_facotr_list; // rsi
  uint32_t random_template_id; // ecx
  char v5; // al
  float reward_factor; // xmm0_4
  __int64 v7; // rsi
  uint32_t fixed_income; // ecx
  char v9; // al
  float income_factor; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketStoreRoundExcelConfig = v2;
  p_attr_low_limit_facotr_list = &a2->attr_low_limit_facotr_list;
  std::vector<float>::vector(&this->attr_low_limit_facotr_list, &a2->attr_low_limit_facotr_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->random_template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->random_template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->random_template_id);
  }
  random_template_id = a2->random_template_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->random_template_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_attr_low_limit_facotr_list) = v5 != 0;
    __asan_report_store4(&this->random_template_id, p_attr_low_limit_facotr_list);
  }
  this->random_template_id = random_template_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->reward_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->reward_factor);
  }
  reward_factor = a2->reward_factor;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_factor, v7);
  }
  this->reward_factor = reward_factor;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_income >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fixed_income >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fixed_income);
  }
  fixed_income = a2->fixed_income;
  v9 = *(_BYTE *)(((unsigned __int64)&this->fixed_income >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->fixed_income, v7);
  }
  this->fixed_income = fixed_income;
  if ( *(_BYTE *)(((unsigned __int64)&a2->income_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->income_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->income_factor);
  }
  income_factor = a2->income_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->income_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->income_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->income_factor, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->income_factor = income_factor;
};

// Line 205: range 0000000012A297DC-0000000012A29806
void __cdecl data::VintageMarketStoreRoundExcelConfig::~VintageMarketStoreRoundExcelConfig(
        data::VintageMarketStoreRoundExcelConfig *const this)
{
  data::VintageMarketStoreRoundExcelConfig::~VintageMarketStoreRoundExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 205: range 0000000012A2978A-0000000012A297DB
void __cdecl data::VintageMarketStoreRoundExcelConfig::~VintageMarketStoreRoundExcelConfig(
        data::VintageMarketStoreRoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketStoreRoundExcelConfig = v2;
  std::vector<float>::~vector(&this->attr_low_limit_facotr_list);
};

// Line 218: range 00000000128E2774-00000000128E2803
void __cdecl data::VintageMarketRoundExcelConfig::VintageMarketRoundExcelConfig(
        data::VintageMarketRoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketRoundExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::VintageMarketStoreRoundExcelConfig>::vector(&this->store_list);
};

// Line 218: range 0000000012A7D282-0000000012A7D357
void __cdecl data::VintageMarketRoundExcelConfig::VintageMarketRoundExcelConfig(
        data::VintageMarketRoundExcelConfig *const this,
        const data::VintageMarketRoundExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::VintageMarketRoundExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketRoundExcelConfig = v2;
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
  std::vector<data::VintageMarketStoreRoundExcelConfig>::vector(&this->store_list, &v5->store_list);
};

// Line 221: range 0000000012AA0278-0000000012AA02A2
void __cdecl data::VintageMarketRoundExcelConfig::~VintageMarketRoundExcelConfig(
        data::VintageMarketRoundExcelConfig *const this)
{
  data::VintageMarketRoundExcelConfig::~VintageMarketRoundExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 221: range 0000000012AA0226-0000000012AA0277
void __cdecl data::VintageMarketRoundExcelConfig::~VintageMarketRoundExcelConfig(
        data::VintageMarketRoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketRoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketRoundExcelConfig = v2;
  std::vector<data::VintageMarketStoreRoundExcelConfig>::~vector(&this->store_list);
};

// Line 233: range 00000000128E2804-00000000128E28D9
void __cdecl data::VintageMarketAttrRandomTemplateExcelConfig::VintageMarketAttrRandomTemplateExcelConfig(
        data::VintageMarketAttrRandomTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrRandomTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrRandomTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->template_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->template_id = 0;
  std::vector<unsigned int>::vector(&this->add_attr_list);
};

// Line 233: range 0000000012A7D498-0000000012A7D5F2
void __cdecl data::VintageMarketAttrRandomTemplateExcelConfig::VintageMarketAttrRandomTemplateExcelConfig(
        data::VintageMarketAttrRandomTemplateExcelConfig *const this,
        const data::VintageMarketAttrRandomTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t template_id; // ecx
  char v7; // dl
  const data::VintageMarketAttrRandomTemplateExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrRandomTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketAttrRandomTemplateExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->template_id);
  }
  template_id = v8->template_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->template_id, v5);
  }
  this->template_id = template_id;
  std::vector<unsigned int>::vector(&this->add_attr_list, &v8->add_attr_list);
};

// Line 236: range 0000000012AA01FA-0000000012AA0224
void __cdecl data::VintageMarketAttrRandomTemplateExcelConfig::~VintageMarketAttrRandomTemplateExcelConfig(
        data::VintageMarketAttrRandomTemplateExcelConfig *const this)
{
  data::VintageMarketAttrRandomTemplateExcelConfig::~VintageMarketAttrRandomTemplateExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 236: range 0000000012AA01A8-0000000012AA01F9
void __cdecl data::VintageMarketAttrRandomTemplateExcelConfig::~VintageMarketAttrRandomTemplateExcelConfig(
        data::VintageMarketAttrRandomTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrRandomTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrRandomTemplateExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->add_attr_list);
};

// Line 249: range 0000000012A59418-0000000012A59469
void __cdecl data::VintageMarketStoreAttrUpgradeExcelConfig::VintageMarketStoreAttrUpgradeExcelConfig(
        data::VintageMarketStoreAttrUpgradeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreAttrUpgradeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketStoreAttrUpgradeExcelConfig = v2;
  std::vector<unsigned int>::vector(&this->cost);
};

// Line 249: range 0000000012A7C720-0000000012A7C780
void __cdecl data::VintageMarketStoreAttrUpgradeExcelConfig::VintageMarketStoreAttrUpgradeExcelConfig(
        data::VintageMarketStoreAttrUpgradeExcelConfig *const this,
        const data::VintageMarketStoreAttrUpgradeExcelConfig *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreAttrUpgradeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketStoreAttrUpgradeExcelConfig = v2;
  std::vector<unsigned int>::vector(&this->cost, &a2->cost);
};

// Line 252: range 0000000012A2A47A-0000000012A2A4A4
void __cdecl data::VintageMarketStoreAttrUpgradeExcelConfig::~VintageMarketStoreAttrUpgradeExcelConfig(
        data::VintageMarketStoreAttrUpgradeExcelConfig *const this)
{
  data::VintageMarketStoreAttrUpgradeExcelConfig::~VintageMarketStoreAttrUpgradeExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 252: range 0000000012A2A428-0000000012A2A479
void __cdecl data::VintageMarketStoreAttrUpgradeExcelConfig::~VintageMarketStoreAttrUpgradeExcelConfig(
        data::VintageMarketStoreAttrUpgradeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketStoreAttrUpgradeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketStoreAttrUpgradeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cost);
};

// Line 261: range 00000000128E292E-00000000128E29BD
void __cdecl data::VintageMarketAttrUpgradeExcelConfig::VintageMarketAttrUpgradeExcelConfig(
        data::VintageMarketAttrUpgradeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrUpgradeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrUpgradeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::vector(&this->store_config);
};

// Line 261: range 0000000012A7D734-0000000012A7D809
void __cdecl data::VintageMarketAttrUpgradeExcelConfig::VintageMarketAttrUpgradeExcelConfig(
        data::VintageMarketAttrUpgradeExcelConfig *const this,
        const data::VintageMarketAttrUpgradeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::VintageMarketAttrUpgradeExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrUpgradeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketAttrUpgradeExcelConfig = v2;
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
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::vector(&this->store_config, &v5->store_config);
};

// Line 264: range 0000000012AA017C-0000000012AA01A6
void __cdecl data::VintageMarketAttrUpgradeExcelConfig::~VintageMarketAttrUpgradeExcelConfig(
        data::VintageMarketAttrUpgradeExcelConfig *const this)
{
  data::VintageMarketAttrUpgradeExcelConfig::~VintageMarketAttrUpgradeExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 264: range 0000000012AA012A-0000000012AA017B
void __cdecl data::VintageMarketAttrUpgradeExcelConfig::~VintageMarketAttrUpgradeExcelConfig(
        data::VintageMarketAttrUpgradeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrUpgradeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrUpgradeExcelConfig = v2;
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::~vector(&this->store_config);
};

// Line 276: range 0000000012A7D94A-0000000012A7DB01
void __cdecl data::VintageMarketAttrFactorExcelConfig::VintageMarketAttrFactorExcelConfig(
        data::VintageMarketAttrFactorExcelConfig *const this,
        const data::VintageMarketAttrFactorExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t attr_value; // ecx
  char v7; // dl
  float factor; // xmm0_4
  const data::VintageMarketAttrFactorExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrFactorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketAttrFactorExcelConfig = v2;
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
  v5 = (((_BYTE)v9 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->attr_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->attr_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->attr_value);
  }
  attr_value = v9->attr_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->attr_value >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->attr_value, v5);
  this->attr_value = attr_value;
  if ( *(_BYTE *)(((unsigned __int64)&v9->factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->factor);
  }
  factor = v9->factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor, v5);
  }
  this->factor = factor;
};

// Line 279: range 0000000012AA00FE-0000000012AA0128
void __cdecl data::VintageMarketAttrFactorExcelConfig::~VintageMarketAttrFactorExcelConfig(
        data::VintageMarketAttrFactorExcelConfig *const this)
{
  data::VintageMarketAttrFactorExcelConfig::~VintageMarketAttrFactorExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 279: range 0000000012AA00BC-0000000012AA00FD
void __cdecl data::VintageMarketAttrFactorExcelConfig::~VintageMarketAttrFactorExcelConfig(
        data::VintageMarketAttrFactorExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketAttrFactorExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketAttrFactorExcelConfig = v2;
};

// Line 292: range 00000000128E29BE-00000000128E2B17
void __cdecl data::VintageMarketEventExcelConfig::VintageMarketEventExcelConfig(
        data::VintageMarketEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_type, v3);
  }
  this->trigger_type = VINTAGE_MARKET_EVENT_TRIGGER_NONE;
  std::string::basic_string(&this->trigger_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->event_type, v3);
  }
  this->event_type = VINTAGE_MARKET_EVENT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->event_id = 0;
};

// Line 292: range 0000000012A7DC42-0000000012A7DE96
void __cdecl data::VintageMarketEventExcelConfig::VintageMarketEventExcelConfig(
        data::VintageMarketEventExcelConfig *const this,
        const data::VintageMarketEventExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::VintageMarketEventTriggerType trigger_type; // ecx
  char v7; // dl
  std::string *p_trigger_param; // rsi
  data::VintageMarketEventType event_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t event_id; // ecx
  char v13; // dl
  const data::VintageMarketEventExcelConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketEventExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v14->trigger_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->trigger_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->trigger_type);
  }
  trigger_type = v14->trigger_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->trigger_type, v5);
  }
  this->trigger_type = trigger_type;
  p_trigger_param = &v14->trigger_param;
  std::string::basic_string(&this->trigger_param, &v14->trigger_param);
  if ( *(_BYTE *)(((unsigned __int64)&v14->event_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->event_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->event_type);
  }
  event_type = v14->event_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_trigger_param) = v10 != 0;
    __asan_report_store4(&this->event_type, p_trigger_param);
  }
  this->event_type = event_type;
  v11 = (((_BYTE)v14 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->event_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->event_id);
  }
  event_id = v14->event_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->event_id, v11);
  }
  this->event_id = event_id;
};

// Line 295: range 0000000012AA0090-0000000012AA00BA
void __cdecl data::VintageMarketEventExcelConfig::~VintageMarketEventExcelConfig(
        data::VintageMarketEventExcelConfig *const this)
{
  data::VintageMarketEventExcelConfig::~VintageMarketEventExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 295: range 0000000012AA003E-0000000012AA008F
void __cdecl data::VintageMarketEventExcelConfig::~VintageMarketEventExcelConfig(
        data::VintageMarketEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketEventExcelConfig = v2;
  std::string::~string(&this->trigger_param);
};

// Line 310: range 00000000128E2E0C-00000000128E2E9B
void __cdecl data::VintageMarketEffectExcelConfig::VintageMarketEffectExcelConfig(
        data::VintageMarketEffectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketEffectExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = VINTAGE_MARKET_EFFECT_NONE;
  std::string::basic_string(&this->param);
};

// Line 310: range 0000000012A7C7F0-0000000012A7C8C5
void __cdecl data::VintageMarketEffectExcelConfig::VintageMarketEffectExcelConfig(
        data::VintageMarketEffectExcelConfig *const this,
        const data::VintageMarketEffectExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::VintageMarketEffectType type; // ecx
  char v4; // al
  const data::VintageMarketEffectExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketEffectExcelConfig = v2;
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
  std::string::basic_string(&this->param, &v5->param);
};

// Line 313: range 0000000012AA0012-0000000012AA003C
void __cdecl data::VintageMarketEffectExcelConfig::~VintageMarketEffectExcelConfig(
        data::VintageMarketEffectExcelConfig *const this)
{
  data::VintageMarketEffectExcelConfig::~VintageMarketEffectExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 313: range 0000000012A9FFC0-0000000012AA0011
void __cdecl data::VintageMarketEffectExcelConfig::~VintageMarketEffectExcelConfig(
        data::VintageMarketEffectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketEffectExcelConfig = v2;
  std::string::~string(&this->param);
};

// Line 323: range 00000000128E2B6C-00000000128E2BFB
void __cdecl data::VintageMarketSkillExcelConfig::VintageMarketSkillExcelConfig(
        data::VintageMarketSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::VintageMarketEffectExcelConfig>::vector(&this->effect_list);
};

// Line 323: range 0000000012A7DFD8-0000000012A7E0AD
void __cdecl data::VintageMarketSkillExcelConfig::VintageMarketSkillExcelConfig(
        data::VintageMarketSkillExcelConfig *const this,
        const data::VintageMarketSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::VintageMarketSkillExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketSkillExcelConfig = v2;
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
  std::vector<data::VintageMarketEffectExcelConfig>::vector(&this->effect_list, &v5->effect_list);
};

// Line 326: range 0000000012A9FF94-0000000012A9FFBE
void __cdecl data::VintageMarketSkillExcelConfig::~VintageMarketSkillExcelConfig(
        data::VintageMarketSkillExcelConfig *const this)
{
  data::VintageMarketSkillExcelConfig::~VintageMarketSkillExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 326: range 0000000012A9FF42-0000000012A9FF93
void __cdecl data::VintageMarketSkillExcelConfig::~VintageMarketSkillExcelConfig(
        data::VintageMarketSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketSkillExcelConfig = v2;
  std::vector<data::VintageMarketEffectExcelConfig>::~vector(&this->effect_list);
};

// Line 338: range 0000000012A5972E-0000000012A597F3
void __cdecl data::VintageMarketNpcEventBranchExcelConfig::VintageMarketNpcEventBranchExcelConfig(
        data::VintageMarketNpcEventBranchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketNpcEventBranchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketNpcEventBranchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_id, v1);
  }
  this->talk_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->reward_id = 0;
};

// Line 338: range 0000000012A98894-0000000012A989D3
void __cdecl data::VintageMarketNpcEventBranchExcelConfig::VintageMarketNpcEventBranchExcelConfig(
        data::VintageMarketNpcEventBranchExcelConfig *const this,
        const data::VintageMarketNpcEventBranchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t talk_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_id; // ecx
  char v7; // dl
  const data::VintageMarketNpcEventBranchExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketNpcEventBranchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketNpcEventBranchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->talk_id);
  }
  talk_id = a2->talk_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->talk_id, a2);
  }
  this->talk_id = talk_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->reward_id);
  }
  reward_id = v8->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 341: range 0000000012A2BCE8-0000000012A2BD29
void __cdecl data::VintageMarketNpcEventBranchExcelConfig::~VintageMarketNpcEventBranchExcelConfig(
        data::VintageMarketNpcEventBranchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketNpcEventBranchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketNpcEventBranchExcelConfig = v2;
};

// Line 341: range 0000000012A2BD2A-0000000012A2BD54
void __cdecl data::VintageMarketNpcEventBranchExcelConfig::~VintageMarketNpcEventBranchExcelConfig(
        data::VintageMarketNpcEventBranchExcelConfig *const this)
{
  data::VintageMarketNpcEventBranchExcelConfig::~VintageMarketNpcEventBranchExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 351: range 00000000128E2C50-00000000128E2D35
void __cdecl data::VintageMarketNpcEventExcelConfig::VintageMarketNpcEventExcelConfig(
        data::VintageMarketNpcEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketNpcEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketNpcEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->duration = 0;
  std::vector<unsigned int>::vector(&this->reward_skill_list);
  std::vector<data::VintageMarketNpcEventBranchExcelConfig>::vector(&this->branch_list);
};

// Line 351: range 0000000012A7E1EE-0000000012A7E38A
void __cdecl data::VintageMarketNpcEventExcelConfig::VintageMarketNpcEventExcelConfig(
        data::VintageMarketNpcEventExcelConfig *const this,
        const data::VintageMarketNpcEventExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t duration; // ecx
  char v7; // dl
  const data::VintageMarketNpcEventExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketNpcEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketNpcEventExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->duration);
  }
  duration = v8->duration;
  v7 = *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->duration, v5);
  }
  this->duration = duration;
  std::vector<unsigned int>::vector(&this->reward_skill_list, &v8->reward_skill_list);
  std::vector<data::VintageMarketNpcEventBranchExcelConfig>::vector(&this->branch_list, &v8->branch_list);
};

// Line 354: range 0000000012A9FEB4-0000000012A9FF15
void __cdecl data::VintageMarketNpcEventExcelConfig::~VintageMarketNpcEventExcelConfig(
        data::VintageMarketNpcEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketNpcEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketNpcEventExcelConfig = v2;
  std::vector<data::VintageMarketNpcEventBranchExcelConfig>::~vector(&this->branch_list);
  std::vector<unsigned int>::~vector(&this->reward_skill_list);
};

// Line 354: range 0000000012A9FF16-0000000012A9FF40
void __cdecl data::VintageMarketNpcEventExcelConfig::~VintageMarketNpcEventExcelConfig(
        data::VintageMarketNpcEventExcelConfig *const this)
{
  data::VintageMarketNpcEventExcelConfig::~VintageMarketNpcEventExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 368: range 00000000128E2D36-00000000128E2E0B
void __cdecl data::VintageMarketEnvEventExcelConfig::VintageMarketEnvEventExcelConfig(
        data::VintageMarketEnvEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEnvEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketEnvEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->duration = 0;
  std::vector<data::VintageMarketEffectExcelConfig>::vector(&this->effect_list);
};

// Line 368: range 0000000012A7E4CC-0000000012A7E626
void __cdecl data::VintageMarketEnvEventExcelConfig::VintageMarketEnvEventExcelConfig(
        data::VintageMarketEnvEventExcelConfig *const this,
        const data::VintageMarketEnvEventExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t duration; // ecx
  char v7; // dl
  const data::VintageMarketEnvEventExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEnvEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketEnvEventExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->duration);
  }
  duration = v8->duration;
  v7 = *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->duration, v5);
  }
  this->duration = duration;
  std::vector<data::VintageMarketEffectExcelConfig>::vector(&this->effect_list, &v8->effect_list);
};

// Line 371: range 0000000012A9FE88-0000000012A9FEB2
void __cdecl data::VintageMarketEnvEventExcelConfig::~VintageMarketEnvEventExcelConfig(
        data::VintageMarketEnvEventExcelConfig *const this)
{
  data::VintageMarketEnvEventExcelConfig::~VintageMarketEnvEventExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 371: range 0000000012A9FE36-0000000012A9FE87
void __cdecl data::VintageMarketEnvEventExcelConfig::~VintageMarketEnvEventExcelConfig(
        data::VintageMarketEnvEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketEnvEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketEnvEventExcelConfig = v2;
  std::vector<data::VintageMarketEffectExcelConfig>::~vector(&this->effect_list);
};

// Line 384: range 0000000012A7E768-0000000012A7EA16
void __cdecl data::VintageMarketConstValueExcelConfig::VintageMarketConstValueExcelConfig(
        data::VintageMarketConstValueExcelConfig *const this,
        const data::VintageMarketConstValueExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t help_cd_round; // ecx
  char v7; // dl
  uint32_t help_reward; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t help_reward_count_limit; // ecx
  char v12; // dl
  uint32_t help_display_count_limit; // ecx
  char v14; // al
  const data::VintageMarketConstValueExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketConstValueExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->help_cd_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->help_cd_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->help_cd_round);
  }
  help_cd_round = v15->help_cd_round;
  v7 = *(_BYTE *)(((unsigned __int64)&this->help_cd_round >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->help_cd_round, v5);
  }
  this->help_cd_round = help_cd_round;
  if ( *(_BYTE *)(((unsigned __int64)&v15->help_reward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->help_reward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->help_reward);
  }
  help_reward = v15->help_reward;
  v9 = *(_BYTE *)(((unsigned __int64)&this->help_reward >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->help_reward, v5);
  }
  this->help_reward = help_reward;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->help_reward_count_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->help_reward_count_limit >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->help_reward_count_limit);
  }
  help_reward_count_limit = v15->help_reward_count_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->help_reward_count_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->help_reward_count_limit, v10);
  }
  this->help_reward_count_limit = help_reward_count_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v15->help_display_count_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->help_display_count_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->help_display_count_limit);
  }
  help_display_count_limit = v15->help_display_count_limit;
  v14 = *(_BYTE *)(((unsigned __int64)&this->help_display_count_limit >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->help_display_count_limit, v10);
  }
  this->help_display_count_limit = help_display_count_limit;
};

// Line 387: range 0000000012A9FE0A-0000000012A9FE34
void __cdecl data::VintageMarketConstValueExcelConfig::~VintageMarketConstValueExcelConfig(
        data::VintageMarketConstValueExcelConfig *const this)
{
  data::VintageMarketConstValueExcelConfig::~VintageMarketConstValueExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 387: range 0000000012A9FDC8-0000000012A9FE09
void __cdecl data::VintageMarketConstValueExcelConfig::~VintageMarketConstValueExcelConfig(
        data::VintageMarketConstValueExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketConstValueExcelConfig = v2;
};

// Line 402: range 00000000128E2E9C-00000000128E2F2B
void __cdecl data::VintageMarketHelpSkillExcelConfig::VintageMarketHelpSkillExcelConfig(
        data::VintageMarketHelpSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketHelpSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketHelpSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  data::VintageMarketEffectExcelConfig::VintageMarketEffectExcelConfig(&this->effect);
};

// Line 402: range 0000000012A7EB58-0000000012A7EC2D
void __cdecl data::VintageMarketHelpSkillExcelConfig::VintageMarketHelpSkillExcelConfig(
        data::VintageMarketHelpSkillExcelConfig *const this,
        const data::VintageMarketHelpSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::VintageMarketHelpSkillExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::VintageMarketHelpSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_VintageMarketHelpSkillExcelConfig = v2;
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
  data::VintageMarketEffectExcelConfig::VintageMarketEffectExcelConfig(&this->effect, &v5->effect);
};

// Line 405: range 0000000012A9FD9C-0000000012A9FDC6
void __cdecl data::VintageMarketHelpSkillExcelConfig::~VintageMarketHelpSkillExcelConfig(
        data::VintageMarketHelpSkillExcelConfig *const this)
{
  data::VintageMarketHelpSkillExcelConfig::~VintageMarketHelpSkillExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 405: range 0000000012A9FD4A-0000000012A9FD9B
void __cdecl data::VintageMarketHelpSkillExcelConfig::~VintageMarketHelpSkillExcelConfig(
        data::VintageMarketHelpSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VintageMarketHelpSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VintageMarketHelpSkillExcelConfig = v2;
  data::VintageMarketEffectExcelConfig::~VintageMarketEffectExcelConfig(&this->effect);
};
