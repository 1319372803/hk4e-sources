// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/FishExcelConfig.gen.h

// Line 91: range 0000000014C7EE7C-0000000014C7EF7F
void __cdecl data::FishStockLimit::FishStockLimit(data::FishStockLimit *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FishStockLimit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishStockLimit = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stock_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stock_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stock_type, v1);
  }
  this->stock_type = FISH_STOCK_TYPE_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_num, v3);
  }
  this->min_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_num, v3);
  }
  this->max_num = 0;
};

// Line 91: range 0000000014DBA3B6-0000000014DBA56A
void __cdecl data::FishStockLimit::FishStockLimit(data::FishStockLimit *const this, const data::FishStockLimit *a2)
{
  int (**v2)(...); // rdx
  data::FishStockType stock_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t min_num; // ecx
  char v7; // dl
  uint32_t max_num; // ecx
  char v9; // al
  const data::FishStockLimit *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishStockLimit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishStockLimit = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stock_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stock_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stock_type);
  }
  stock_type = a2->stock_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stock_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stock_type, a2);
  }
  this->stock_type = stock_type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->min_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->min_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->min_num);
  }
  min_num = v10->min_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->min_num, v5);
  }
  this->min_num = min_num;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->max_num);
  }
  max_num = v10->max_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_num, v5);
  }
  this->max_num = max_num;
};

// Line 94: range 0000000014BA9C96-0000000014BA9CD7
void __cdecl data::FishStockLimit::~FishStockLimit(data::FishStockLimit *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishStockLimit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishStockLimit = v2;
};

// Line 94: range 0000000014BA9CD8-0000000014BA9D02
void __cdecl data::FishStockLimit::~FishStockLimit(data::FishStockLimit *const this)
{
  data::FishStockLimit::~FishStockLimit(this);
  operator delete(this, 0x18uLL);
};

// Line 105: range 0000000014756EB4-000000001475703E
data::FishBaitFeature *__cdecl data::FishBaitFeature::operator=(
        data::FishBaitFeature *const this,
        const data::FishBaitFeature *a2)
{
  uint32_t feature_tag; // ecx
  char v3; // al
  float weight; // xmm0_4
  __int64 v5; // rsi
  float bonus_range; // xmm0_4
  const data::FishBaitFeature *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->feature_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->feature_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->feature_tag);
  }
  feature_tag = a2->feature_tag;
  v3 = *(_BYTE *)(((unsigned __int64)&this->feature_tag >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->feature_tag, a2);
  }
  this->feature_tag = feature_tag;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v5 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v8->bonus_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->bonus_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->bonus_range);
  }
  bonus_range = v8->bonus_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_range, v5);
  }
  this->bonus_range = bonus_range;
  return this;
};

// Line 105: range 0000000014C7F114-0000000014C7F21B
void __cdecl data::FishBaitFeature::FishBaitFeature(data::FishBaitFeature *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FishBaitFeature + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishBaitFeature = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->feature_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->feature_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->feature_tag, v1);
  }
  this->feature_tag = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_range, v3);
  }
  this->bonus_range = 0.0;
};

// Line 105: range 0000000014DBA62A-0000000014DBA7E4
void __cdecl data::FishBaitFeature::FishBaitFeature(data::FishBaitFeature *const this, const data::FishBaitFeature *a2)
{
  int (**v2)(...); // rdx
  uint32_t feature_tag; // ecx
  char v4; // al
  float weight; // xmm0_4
  __int64 v6; // rsi
  float bonus_range; // xmm0_4
  const data::FishBaitFeature *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishBaitFeature + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishBaitFeature = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->feature_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->feature_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->feature_tag);
  }
  feature_tag = a2->feature_tag;
  v4 = *(_BYTE *)(((unsigned __int64)&this->feature_tag >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->feature_tag, a2);
  }
  this->feature_tag = feature_tag;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, v6);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v8->bonus_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->bonus_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->bonus_range);
  }
  bonus_range = v8->bonus_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_range, v6);
  }
  this->bonus_range = bonus_range;
};

// Line 108: range 0000000014BAAEC8-0000000014BAAF09
void __cdecl data::FishBaitFeature::~FishBaitFeature(data::FishBaitFeature *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishBaitFeature + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishBaitFeature = v2;
};

// Line 108: range 0000000014BAAF0A-0000000014BAAF34
void __cdecl data::FishBaitFeature::~FishBaitFeature(data::FishBaitFeature *const this)
{
  data::FishBaitFeature::~FishBaitFeature(this);
  operator delete(this, 0x18uLL);
};

// Line 119: range 0000000014745CD2-0000000014745DA7
void __cdecl data::FishStockExcelConfig::FishStockExcelConfig(data::FishStockExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishStockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishStockExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->type = FISH_STOCK_TYPE_NONE;
  std::map<unsigned int,unsigned int>::map(&this->fish_weight);
};

// Line 119: range 0000000014D1C312-0000000014D1C46C
void __cdecl data::FishStockExcelConfig::FishStockExcelConfig(
        data::FishStockExcelConfig *const this,
        const data::FishStockExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::FishStockType type; // ecx
  char v7; // dl
  const data::FishStockExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishStockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishStockExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->type);
  }
  type = v8->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  std::map<unsigned int,unsigned int>::map(&this->fish_weight, &v8->fish_weight);
};

// Line 122: range 0000000014DE8154-0000000014DE81A5
void __cdecl data::FishStockExcelConfig::~FishStockExcelConfig(data::FishStockExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishStockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishStockExcelConfig = v2;
  std::map<unsigned int,unsigned int>::~map(&this->fish_weight);
};

// Line 122: range 0000000014DE81A6-0000000014DE81D0
void __cdecl data::FishStockExcelConfig::~FishStockExcelConfig(data::FishStockExcelConfig *const this)
{
  data::FishStockExcelConfig::~FishStockExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 135: range 0000000014745DFC-0000000014745FB5
void __cdecl data::FishPoolExcelConfig::FishPoolExcelConfig(data::FishPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishPoolExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->stock_list);
  std::map<unsigned int,unsigned int>::map(&this->stock_guarantee);
  std::vector<data::FishStockLimit>::vector(&this->stock_limit_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_num, v1);
  }
  this->max_num = 0;
  std::string::basic_string(&this->ability_group);
  std::string::basic_string(&this->team_ability_group);
  std::vector<unsigned int>::vector(&this->drop_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_limit_num, v1);
  }
  this->daily_limit_num = 0;
  std::vector<unsigned int>::vector(&this->exclude_fish);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
};

// Line 135: range 0000000014D1C5AE-0000000014D1C93E
void __cdecl data::FishPoolExcelConfig::FishPoolExcelConfig(
        data::FishPoolExcelConfig *const this,
        const data::FishPoolExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::FishStockLimit> *p_stock_limit_list; // rsi
  uint32_t max_num; // ecx
  char v7; // al
  std::vector<unsigned int> *p_drop_id_list; // rsi
  uint32_t daily_limit_num; // ecx
  char v10; // al
  std::vector<unsigned int> *p_exclude_fish; // rsi
  uint32_t city_id; // ecx
  char v13; // al
  const data::FishPoolExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishPoolExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->stock_list, &v14->stock_list);
  std::map<unsigned int,unsigned int>::map(&this->stock_guarantee, &v14->stock_guarantee);
  p_stock_limit_list = &v14->stock_limit_list;
  std::vector<data::FishStockLimit>::vector(&this->stock_limit_list, &v14->stock_limit_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->max_num);
  }
  max_num = v14->max_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_stock_limit_list) = v7 != 0;
    __asan_report_store4(&this->max_num, p_stock_limit_list);
  }
  this->max_num = max_num;
  std::string::basic_string(&this->ability_group, &v14->ability_group);
  std::string::basic_string(&this->team_ability_group, &v14->team_ability_group);
  p_drop_id_list = &v14->drop_id_list;
  std::vector<unsigned int>::vector(&this->drop_id_list, &v14->drop_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->daily_limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->daily_limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->daily_limit_num);
  }
  daily_limit_num = v14->daily_limit_num;
  v10 = *(_BYTE *)(((unsigned __int64)&this->daily_limit_num >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_drop_id_list) = v10 != 0;
    __asan_report_store4(&this->daily_limit_num, p_drop_id_list);
  }
  this->daily_limit_num = daily_limit_num;
  p_exclude_fish = &v14->exclude_fish;
  std::vector<unsigned int>::vector(&this->exclude_fish, &v14->exclude_fish);
  if ( *(_BYTE *)(((unsigned __int64)&v14->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->city_id);
  }
  city_id = v14->city_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_exclude_fish) = v13 != 0;
    __asan_report_store4(&this->city_id, p_exclude_fish);
  }
  this->city_id = city_id;
};

// Line 138: range 0000000014DE8128-0000000014DE8152
void __cdecl data::FishPoolExcelConfig::~FishPoolExcelConfig(data::FishPoolExcelConfig *const this)
{
  data::FishPoolExcelConfig::~FishPoolExcelConfig(this);
  operator delete(this, 0xF8uLL);
};

// Line 138: range 0000000014DE8070-0000000014DE8127
void __cdecl data::FishPoolExcelConfig::~FishPoolExcelConfig(data::FishPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishPoolExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->exclude_fish);
  std::vector<unsigned int>::~vector(&this->drop_id_list);
  std::string::~string(&this->team_ability_group);
  std::string::~string(&this->ability_group);
  std::vector<data::FishStockLimit>::~vector(&this->stock_limit_list);
  std::map<unsigned int,unsigned int>::~map(&this->stock_guarantee);
  std::vector<unsigned int>::~vector(&this->stock_list);
};

// Line 159: range 0000000014745FB6-00000000147463D6
void __cdecl data::FishExcelConfig::FishExcelConfig(data::FishExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FishExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id, v3);
  }
  this->monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp, v4);
  }
  this->hp = 0;
  std::vector<unsigned int>::vector(&this->skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->proficient_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proficient_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proficient_id, v4);
  }
  this->proficient_id = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_width >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_width, v5);
  }
  this->bonus_width = 0;
  std::vector<float>::vector(&this->bonus_duration);
  std::vector<unsigned int>::vector(&this->bonus_offset);
  std::vector<float>::vector(&this->bonus_speed);
  std::vector<float>::vector(&this->feeler_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attract_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attract_range, v5);
  }
  this->attract_range = 0.0;
  v6 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_range, v6);
  }
  this->flee_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v6);
  }
  this->reward_id = 0;
  std::vector<unsigned int>::vector(&this->drop_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_cate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_cate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_cate_id, v6);
  }
  this->fish_cate_id = 0;
  v7 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bite_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bite_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bite_timeout, v7);
  }
  this->bite_timeout = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_pose, v7);
  }
  this->init_pose = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->compound_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compound_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compound_id, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->compound_id = 0;
};

// Line 159: range 0000000014D1CA80-0000000014D1D284
void __cdecl data::FishExcelConfig::FishExcelConfig(data::FishExcelConfig *const this, const data::FishExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t monster_id; // ecx
  char v7; // dl
  uint32_t item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t hp; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_skill_id; // rsi
  uint32_t proficient_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t bonus_width; // ecx
  char v18; // dl
  float attract_range; // xmm0_4
  float flee_range; // xmm0_4
  __int64 v21; // rsi
  uint32_t reward_id; // ecx
  char v23; // al
  std::vector<unsigned int> *p_drop_id_list; // rsi
  uint32_t fish_cate_id; // ecx
  char v26; // al
  __int64 v27; // rsi
  uint32_t bite_timeout; // ecx
  char v29; // dl
  uint32_t init_pose; // ecx
  char v31; // al
  __int64 v32; // rsi
  uint32_t compound_id; // ecx
  char v34; // dl
  const data::FishExcelConfig *v35; // [rsp+0h] [rbp-20h]

  v35 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishExcelConfig = v2;
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
  v5 = (((_BYTE)v35 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->monster_id);
  }
  monster_id = v35->monster_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->monster_id, v5);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&v35->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->item_id);
  }
  item_id = v35->item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  v10 = (((_BYTE)v35 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->hp);
  }
  hp = v35->hp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->hp, v10);
  }
  this->hp = hp;
  p_skill_id = &v35->skill_id;
  std::vector<unsigned int>::vector(&this->skill_id, &v35->skill_id);
  if ( *(_BYTE *)(((unsigned __int64)&v35->proficient_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->proficient_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->proficient_id);
  }
  proficient_id = v35->proficient_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->proficient_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_skill_id) = v15 != 0;
    __asan_report_store4(&this->proficient_id, p_skill_id);
  }
  this->proficient_id = proficient_id;
  v16 = (((_BYTE)v35 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->bonus_width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->bonus_width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->bonus_width);
  }
  bonus_width = v35->bonus_width;
  v18 = *(_BYTE *)(((unsigned __int64)&this->bonus_width >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->bonus_width, v16);
  }
  this->bonus_width = bonus_width;
  std::vector<float>::vector(&this->bonus_duration, &v35->bonus_duration);
  std::vector<unsigned int>::vector(&this->bonus_offset, &v35->bonus_offset);
  std::vector<float>::vector(&this->bonus_speed, &v35->bonus_speed);
  std::vector<float>::vector(&this->feeler_times, &v35->feeler_times);
  if ( *(_BYTE *)(((unsigned __int64)&v35->attract_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->attract_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->attract_range);
  }
  attract_range = v35->attract_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attract_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attract_range, &v35->feeler_times);
  }
  this->attract_range = attract_range;
  if ( *(_BYTE *)(((unsigned __int64)&v35->flee_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->flee_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->flee_range);
  }
  flee_range = v35->flee_range;
  v21 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_range, v21);
  }
  this->flee_range = flee_range;
  if ( *(_BYTE *)(((unsigned __int64)&v35->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->reward_id);
  }
  reward_id = v35->reward_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->reward_id, v21);
  }
  this->reward_id = reward_id;
  p_drop_id_list = &v35->drop_id_list;
  std::vector<unsigned int>::vector(&this->drop_id_list, &v35->drop_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v35->fish_cate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->fish_cate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->fish_cate_id);
  }
  fish_cate_id = v35->fish_cate_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->fish_cate_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(p_drop_id_list) = v26 != 0;
    __asan_report_store4(&this->fish_cate_id, p_drop_id_list);
  }
  this->fish_cate_id = fish_cate_id;
  v27 = (((_BYTE)v35 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->bite_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->bite_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->bite_timeout);
  }
  bite_timeout = v35->bite_timeout;
  v29 = *(_BYTE *)(((unsigned __int64)&this->bite_timeout >> 3) + 0x7FFF8000);
  if ( v29 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v29 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->bite_timeout, v27);
  }
  this->bite_timeout = bite_timeout;
  if ( *(_BYTE *)(((unsigned __int64)&v35->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->init_pose);
  }
  init_pose = v35->init_pose;
  v31 = *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(v27) = v31 != 0;
    __asan_report_store4(&this->init_pose, v27);
  }
  this->init_pose = init_pose;
  v32 = (((_BYTE)v35 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->compound_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->compound_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->compound_id);
  }
  compound_id = v35->compound_id;
  v34 = *(_BYTE *)(((unsigned __int64)&this->compound_id >> 3) + 0x7FFF8000);
  if ( v34 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v34 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store4(&this->compound_id, v32);
  }
  this->compound_id = compound_id;
};

// Line 162: range 0000000014DE8044-0000000014DE806E
void __cdecl data::FishExcelConfig::~FishExcelConfig(data::FishExcelConfig *const this)
{
  data::FishExcelConfig::~FishExcelConfig(this);
  operator delete(this, 0xD0uLL);
};

// Line 162: range 0000000014DE7FA0-0000000014DE8043
void __cdecl data::FishExcelConfig::~FishExcelConfig(data::FishExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->drop_id_list);
  std::vector<float>::~vector(&this->feeler_times);
  std::vector<float>::~vector(&this->bonus_speed);
  std::vector<unsigned int>::~vector(&this->bonus_offset);
  std::vector<float>::~vector(&this->bonus_duration);
  std::vector<unsigned int>::~vector(&this->skill_id);
};

// Line 191: range 00000000147463D8-0000000014746641
void __cdecl data::FishSkillExcelConfig::FishSkillExcelConfig(data::FishSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FishSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_category >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_category >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_category, v3);
  }
  this->skill_category = FISH_SKILL_CATEGORY_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_type, v3);
  }
  this->skill_type = FISH_SKILL_NONE;
  std::vector<float>::vector(&this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->strength >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->strength >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->strength, v3);
  }
  this->strength = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_factor, v4);
  }
  this->force_factor = 0.0;
  std::vector<float>::vector(&this->bonus_width);
  std::vector<float>::vector(&this->bonus_duration);
  std::vector<unsigned int>::vector(&this->bonus_offset);
  std::vector<float>::vector(&this->bonus_speed);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v4);
  }
  this->duration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority, (((_BYTE)this - 100) & 7u) + 3);
  }
  this->priority = 0;
};

// Line 191: range 0000000014D1D3C6-0000000014D1D875
void __cdecl data::FishSkillExcelConfig::FishSkillExcelConfig(
        data::FishSkillExcelConfig *const this,
        const data::FishSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::FishSkillCategory skill_category; // ecx
  char v7; // dl
  data::FishSkillType skill_type; // ecx
  char v9; // al
  std::vector<float> *p_param; // rsi
  uint32_t strength; // ecx
  char v12; // al
  float force_factor; // xmm0_4
  float duration; // xmm0_4
  __int64 v15; // rsi
  uint32_t priority; // ecx
  char v17; // dl
  const data::FishSkillExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishSkillExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->skill_category >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->skill_category >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->skill_category);
  }
  skill_category = v18->skill_category;
  v7 = *(_BYTE *)(((unsigned __int64)&this->skill_category >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->skill_category, v5);
  }
  this->skill_category = skill_category;
  if ( *(_BYTE *)(((unsigned __int64)&v18->skill_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->skill_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->skill_type);
  }
  skill_type = v18->skill_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->skill_type, v5);
  }
  this->skill_type = skill_type;
  p_param = &v18->param;
  std::vector<float>::vector(&this->param, &v18->param);
  if ( *(_BYTE *)(((unsigned __int64)&v18->strength >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->strength >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->strength);
  }
  strength = v18->strength;
  v12 = *(_BYTE *)(((unsigned __int64)&this->strength >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_param) = v12 != 0;
    __asan_report_store4(&this->strength, p_param);
  }
  this->strength = strength;
  if ( *(_BYTE *)(((unsigned __int64)&v18->force_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->force_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->force_factor);
  }
  force_factor = v18->force_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_factor, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->force_factor = force_factor;
  std::vector<float>::vector(&this->bonus_width, &v18->bonus_width);
  std::vector<float>::vector(&this->bonus_duration, &v18->bonus_duration);
  std::vector<unsigned int>::vector(&this->bonus_offset, &v18->bonus_offset);
  std::vector<float>::vector(&this->bonus_speed, &v18->bonus_speed);
  if ( *(_BYTE *)(((unsigned __int64)&v18->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->duration);
  }
  duration = v18->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, &v18->bonus_speed);
  }
  this->duration = duration;
  v15 = (((_BYTE)v18 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->priority);
  }
  priority = v18->priority;
  v17 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->priority, v15);
  }
  this->priority = priority;
};

// Line 194: range 0000000014DE7EE2-0000000014DE7F73
void __cdecl data::FishSkillExcelConfig::~FishSkillExcelConfig(data::FishSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishSkillExcelConfig = v2;
  std::vector<float>::~vector(&this->bonus_speed);
  std::vector<unsigned int>::~vector(&this->bonus_offset);
  std::vector<float>::~vector(&this->bonus_duration);
  std::vector<float>::~vector(&this->bonus_width);
  std::vector<float>::~vector(&this->param);
};

// Line 194: range 0000000014DE7F74-0000000014DE7F9E
void __cdecl data::FishSkillExcelConfig::~FishSkillExcelConfig(data::FishSkillExcelConfig *const this)
{
  data::FishSkillExcelConfig::~FishSkillExcelConfig(this);
  operator delete(this, 0xA0uLL);
};

// Line 216: range 0000000014746696-0000000014746735
void __cdecl data::FishBaitExcelConfig::FishBaitExcelConfig(data::FishBaitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishBaitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishBaitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::FishBaitFeature>::vector(&this->feature_list);
  std::vector<unsigned int>::vector(&this->pool_id_list);
};

// Line 216: range 0000000014D1D9B6-0000000014D1DACD
void __cdecl data::FishBaitExcelConfig::FishBaitExcelConfig(
        data::FishBaitExcelConfig *const this,
        const data::FishBaitExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::FishBaitExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishBaitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishBaitExcelConfig = v2;
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
  std::vector<data::FishBaitFeature>::vector(&this->feature_list, &v5->feature_list);
  std::vector<unsigned int>::vector(&this->pool_id_list, &v5->pool_id_list);
};

// Line 219: range 0000000014DE7EB6-0000000014DE7EE0
void __cdecl data::FishBaitExcelConfig::~FishBaitExcelConfig(data::FishBaitExcelConfig *const this)
{
  data::FishBaitExcelConfig::~FishBaitExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 219: range 0000000014DE7E54-0000000014DE7EB5
void __cdecl data::FishBaitExcelConfig::~FishBaitExcelConfig(data::FishBaitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishBaitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishBaitExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->pool_id_list);
  std::vector<data::FishBaitFeature>::~vector(&this->feature_list);
};

// Line 232: range 0000000014D1DC0E-0000000014D1DF4D
void __cdecl data::FishRodExcelConfig::FishRodExcelConfig(
        data::FishRodExcelConfig *const this,
        const data::FishRodExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  float base_attack; // xmm0_4
  __int64 v6; // rsi
  float attack_acc; // xmm0_4
  float max_attack; // xmm0_4
  __int64 v9; // rsi
  uint32_t city_id; // ecx
  char v11; // al
  float attack_mag; // xmm0_4
  const data::FishRodExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FishRodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FishRodExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->base_attack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->base_attack >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->base_attack);
  }
  base_attack = v13->base_attack;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_attack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_attack >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_attack, v6);
  }
  this->base_attack = base_attack;
  if ( *(_BYTE *)(((unsigned __int64)&v13->attack_acc >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->attack_acc >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->attack_acc);
  }
  attack_acc = v13->attack_acc;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_acc >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_acc >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_acc, v6);
  }
  this->attack_acc = attack_acc;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_attack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->max_attack >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->max_attack);
  }
  max_attack = v13->max_attack;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_attack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_attack >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_attack, v9);
  }
  this->max_attack = max_attack;
  if ( *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->city_id);
  }
  city_id = v13->city_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->city_id, v9);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->attack_mag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->attack_mag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->attack_mag);
  }
  attack_mag = v13->attack_mag;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_mag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_mag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_mag, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->attack_mag = attack_mag;
};

// Line 235: range 0000000014DE7E28-0000000014DE7E52
void __cdecl data::FishRodExcelConfig::~FishRodExcelConfig(data::FishRodExcelConfig *const this)
{
  data::FishRodExcelConfig::~FishRodExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 235: range 0000000014DE7DE6-0000000014DE7E27
void __cdecl data::FishRodExcelConfig::~FishRodExcelConfig(data::FishRodExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FishRodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FishRodExcelConfig = v2;
};
