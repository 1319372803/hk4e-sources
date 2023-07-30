// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GachaExcelConfig.gen.h

// Line 150: range 000000000D000788-000000000D000A06
data::GachaPoolExcelConfig *__cdecl data::GachaPoolExcelConfig::operator=(
        data::GachaPoolExcelConfig *const this,
        const data::GachaPoolExcelConfig *a2)
{
  uint32_t pool_root_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t item_id; // ecx
  char v6; // dl
  data::GachaItemType gacha_item_type; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t weight; // ecx
  char v11; // dl
  uint32_t flash_card_prob; // ecx
  char v13; // al
  const data::GachaPoolExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pool_root_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pool_root_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pool_root_id);
  }
  pool_root_id = a2->pool_root_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->pool_root_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->pool_root_id, a2);
  }
  this->pool_root_id = pool_root_id;
  v4 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->item_id);
  }
  item_id = v15->item_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->item_id, v4);
  }
  this->item_id = item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->gacha_item_type);
  }
  gacha_item_type = v15->gacha_item_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->gacha_item_type, v4);
  }
  this->gacha_item_type = gacha_item_type;
  v9 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->weight);
  }
  weight = v15->weight;
  v11 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->weight, v9);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v15->flash_card_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->flash_card_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->flash_card_prob);
  }
  flash_card_prob = v15->flash_card_prob;
  v13 = *(_BYTE *)(((unsigned __int64)&this->flash_card_prob >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->flash_card_prob, v9);
  }
  this->flash_card_prob = flash_card_prob;
  return this;
};

// Line 150: range 0000000014963F20-00000000149641CE
void __cdecl data::GachaPoolExcelConfig::GachaPoolExcelConfig(
        data::GachaPoolExcelConfig *const this,
        const data::GachaPoolExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t pool_root_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  data::GachaItemType gacha_item_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weight; // ecx
  char v12; // dl
  uint32_t flash_card_prob; // ecx
  char v14; // al
  const data::GachaPoolExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaPoolExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pool_root_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pool_root_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pool_root_id);
  }
  pool_root_id = a2->pool_root_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->pool_root_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->pool_root_id, a2);
  }
  this->pool_root_id = pool_root_id;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->item_id);
  }
  item_id = v15->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->gacha_item_type);
  }
  gacha_item_type = v15->gacha_item_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gacha_item_type, v5);
  }
  this->gacha_item_type = gacha_item_type;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->weight);
  }
  weight = v15->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v15->flash_card_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->flash_card_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->flash_card_prob);
  }
  flash_card_prob = v15->flash_card_prob;
  v14 = *(_BYTE *)(((unsigned __int64)&this->flash_card_prob >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->flash_card_prob, v10);
  }
  this->flash_card_prob = flash_card_prob;
};

// Line 153: range 0000000014DEAD60-0000000014DEAD8A
void __cdecl data::GachaPoolExcelConfig::~GachaPoolExcelConfig(data::GachaPoolExcelConfig *const this)
{
  data::GachaPoolExcelConfig::~GachaPoolExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 153: range 0000000014DEAD1E-0000000014DEAD5F
void __cdecl data::GachaPoolExcelConfig::~GachaPoolExcelConfig(data::GachaPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaPoolExcelConfig = v2;
};

// Line 179: range 000000001498B1D6-000000001498B315
void __cdecl data::GachaGuaranteeParentTypeWeight::GachaGuaranteeParentTypeWeight(
        data::GachaGuaranteeParentTypeWeight *const this,
        const data::GachaGuaranteeParentTypeWeight *a2)
{
  int (**v2)(...); // rdx
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  const data::GachaGuaranteeParentTypeWeight *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWeight + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaGuaranteeParentTypeWeight = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_item_parent_type);
  }
  gacha_item_parent_type = a2->gacha_item_parent_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, a2);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
};

// Line 182: range 0000000014DEACB0-0000000014DEACF1
void __cdecl data::GachaGuaranteeParentTypeWeight::~GachaGuaranteeParentTypeWeight(
        data::GachaGuaranteeParentTypeWeight *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWeight + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaGuaranteeParentTypeWeight = v2;
};

// Line 182: range 0000000014DEACF2-0000000014DEAD1C
void __cdecl data::GachaGuaranteeParentTypeWeight::~GachaGuaranteeParentTypeWeight(
        data::GachaGuaranteeParentTypeWeight *const this)
{
  data::GachaGuaranteeParentTypeWeight::~GachaGuaranteeParentTypeWeight(this);
  operator delete(this, 0x10uLL);
};

// Line 190: range 0000000014757B64-0000000014757C39
void __cdecl data::GachaGuaranteeParentTypeWeightWithChilds::GachaGuaranteeParentTypeWeightWithChilds(
        data::GachaGuaranteeParentTypeWeightWithChilds *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWeightWithChilds + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaGuaranteeParentTypeWeightWithChilds = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_item_parent_type, v1);
  }
  this->gacha_item_parent_type = GACHA_ITEM_PARENT_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->weight = 0;
  std::vector<unsigned int>::vector(&this->item_type_vec);
};

// Line 190: range 000000001498B8AE-000000001498BA08
void __cdecl data::GachaGuaranteeParentTypeWeightWithChilds::GachaGuaranteeParentTypeWeightWithChilds(
        data::GachaGuaranteeParentTypeWeightWithChilds *const this,
        const data::GachaGuaranteeParentTypeWeightWithChilds *a2)
{
  int (**v2)(...); // rdx
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  const data::GachaGuaranteeParentTypeWeightWithChilds *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWeightWithChilds + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaGuaranteeParentTypeWeightWithChilds = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_item_parent_type);
  }
  gacha_item_parent_type = a2->gacha_item_parent_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, a2);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  std::vector<unsigned int>::vector(&this->item_type_vec, &v8->item_type_vec);
};

// Line 193: range 0000000014DEAC32-0000000014DEAC83
void __cdecl data::GachaGuaranteeParentTypeWeightWithChilds::~GachaGuaranteeParentTypeWeightWithChilds(
        data::GachaGuaranteeParentTypeWeightWithChilds *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWeightWithChilds + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaGuaranteeParentTypeWeightWithChilds = v2;
  std::vector<unsigned int>::~vector(&this->item_type_vec);
};

// Line 193: range 0000000014DEAC84-0000000014DEACAE
void __cdecl data::GachaGuaranteeParentTypeWeightWithChilds::~GachaGuaranteeParentTypeWeightWithChilds(
        data::GachaGuaranteeParentTypeWeightWithChilds *const this)
{
  data::GachaGuaranteeParentTypeWeightWithChilds::~GachaGuaranteeParentTypeWeightWithChilds(this);
  operator delete(this, 0x28uLL);
};

// Line 202: range 0000000014757C3A-0000000014757CDF
data::GachaGuaranteeParentTypeWithChilds *__cdecl data::GachaGuaranteeParentTypeWithChilds::operator=(
        data::GachaGuaranteeParentTypeWithChilds *const this,
        const data::GachaGuaranteeParentTypeWithChilds *a2)
{
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v3; // al
  const data::GachaGuaranteeParentTypeWithChilds *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_item_parent_type);
  }
  gacha_item_parent_type = a2->gacha_item_parent_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, a2);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  std::vector<unsigned int>::operator=(&this->item_type_vec, &v5->item_type_vec);
  return this;
};

// Line 202: range 000000001474C664-000000001474C6F3
void __cdecl data::GachaGuaranteeParentTypeWithChilds::GachaGuaranteeParentTypeWithChilds(
        data::GachaGuaranteeParentTypeWithChilds *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWithChilds + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaGuaranteeParentTypeWithChilds = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_item_parent_type, v1);
  }
  this->gacha_item_parent_type = GACHA_ITEM_PARENT_INVALID;
  std::vector<unsigned int>::vector(&this->item_type_vec);
};

// Line 202: range 0000000014D255A6-0000000014D2567B
void __cdecl data::GachaGuaranteeParentTypeWithChilds::GachaGuaranteeParentTypeWithChilds(
        data::GachaGuaranteeParentTypeWithChilds *const this,
        const data::GachaGuaranteeParentTypeWithChilds *a2)
{
  int (**v2)(...); // rdx
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v4; // al
  const data::GachaGuaranteeParentTypeWithChilds *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWithChilds + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaGuaranteeParentTypeWithChilds = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_item_parent_type);
  }
  gacha_item_parent_type = a2->gacha_item_parent_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, a2);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  std::vector<unsigned int>::vector(&this->item_type_vec, &v5->item_type_vec);
};

// Line 205: range 0000000014DEAC06-0000000014DEAC30
void __cdecl data::GachaGuaranteeParentTypeWithChilds::~GachaGuaranteeParentTypeWithChilds(
        data::GachaGuaranteeParentTypeWithChilds *const this)
{
  data::GachaGuaranteeParentTypeWithChilds::~GachaGuaranteeParentTypeWithChilds(this);
  operator delete(this, 0x28uLL);
};

// Line 205: range 0000000014DEABB4-0000000014DEAC05
void __cdecl data::GachaGuaranteeParentTypeWithChilds::~GachaGuaranteeParentTypeWithChilds(
        data::GachaGuaranteeParentTypeWithChilds *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaGuaranteeParentTypeWithChilds + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaGuaranteeParentTypeWithChilds = v2;
  std::vector<unsigned int>::~vector(&this->item_type_vec);
};

// Line 213: range 000000001474C6F4-000000001474C951
void __cdecl data::GachaRuleExcelConfig::GachaRuleExcelConfig(data::GachaRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GachaRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_rule_id, v1);
  }
  this->gacha_rule_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_guarantee_type, v3);
  }
  this->gacha_guarantee_type = GACHA_GUARANTEE_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_times >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_guarantee_times, v4);
  }
  this->gacha_guarantee_times = 0;
  std::vector<std::string>::vector(&this->gacha_guarantee_params);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_reset_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_reset_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_guarantee_reset_type, v4);
  }
  this->gacha_guarantee_reset_type = GACHA_GUARANTEE_RESET_NONE;
  std::string::basic_string(&this->gacha_guarantee_reset_param);
  std::vector<data::GachaGuaranteeParentTypeWeight>::vector(&this->gacha_guarantee_parent_type_weight_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_guarantee_item, v4);
  }
  this->gacha_guarantee_item = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_item_parent_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_guarantee_item_parent_type, (((_BYTE)this + 116) & 7u) + 3);
  }
  this->gacha_guarantee_item_parent_type = GACHA_ITEM_PARENT_INVALID;
  std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::vector(&this->gacha_guarantee_parent_type_weight_childs_vec);
  data::GachaGuaranteeParentTypeWithChilds::GachaGuaranteeParentTypeWithChilds(&this->gacha_guarantee_item_parent_type_childs);
};

// Line 213: range 0000000014D2567C-0000000014D25B16
void __cdecl data::GachaRuleExcelConfig::GachaRuleExcelConfig(
        data::GachaRuleExcelConfig *const this,
        const data::GachaRuleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gacha_rule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t priority; // ecx
  char v7; // dl
  data::GachaGuaranteeType gacha_guarantee_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gacha_guarantee_times; // ecx
  char v12; // dl
  std::vector<std::string> *p_gacha_guarantee_params; // rsi
  data::GachaGuaranteeResetType gacha_guarantee_reset_type; // ecx
  char v15; // al
  std::vector<data::GachaGuaranteeParentTypeWeight> *p_gacha_guarantee_parent_type_weight_vec; // rsi
  uint32_t gacha_guarantee_item; // ecx
  char v18; // al
  __int64 v19; // rsi
  data::GachaItemParentType gacha_guarantee_item_parent_type; // ecx
  char v21; // dl
  const data::GachaRuleExcelConfig *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaRuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_rule_id);
  }
  gacha_rule_id = a2->gacha_rule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_rule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_rule_id, a2);
  }
  this->gacha_rule_id = gacha_rule_id;
  v5 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->priority);
  }
  priority = v22->priority;
  v7 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->priority, v5);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->gacha_guarantee_type);
  }
  gacha_guarantee_type = v22->gacha_guarantee_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gacha_guarantee_type, v5);
  }
  this->gacha_guarantee_type = gacha_guarantee_type;
  v10 = (((_BYTE)v22 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_times >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->gacha_guarantee_times);
  }
  gacha_guarantee_times = v22->gacha_guarantee_times;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_times >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gacha_guarantee_times, v10);
  }
  this->gacha_guarantee_times = gacha_guarantee_times;
  p_gacha_guarantee_params = &v22->gacha_guarantee_params;
  std::vector<std::string>::vector(&this->gacha_guarantee_params, &v22->gacha_guarantee_params);
  if ( *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_reset_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_reset_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->gacha_guarantee_reset_type);
  }
  gacha_guarantee_reset_type = v22->gacha_guarantee_reset_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_reset_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_gacha_guarantee_params) = v15 != 0;
    __asan_report_store4(&this->gacha_guarantee_reset_type, p_gacha_guarantee_params);
  }
  this->gacha_guarantee_reset_type = gacha_guarantee_reset_type;
  std::string::basic_string(&this->gacha_guarantee_reset_param, &v22->gacha_guarantee_reset_param);
  p_gacha_guarantee_parent_type_weight_vec = &v22->gacha_guarantee_parent_type_weight_vec;
  std::vector<data::GachaGuaranteeParentTypeWeight>::vector(
    &this->gacha_guarantee_parent_type_weight_vec,
    &v22->gacha_guarantee_parent_type_weight_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->gacha_guarantee_item);
  }
  gacha_guarantee_item = v22->gacha_guarantee_item;
  v18 = *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_item >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_gacha_guarantee_parent_type_weight_vec) = v18 != 0;
    __asan_report_store4(&this->gacha_guarantee_item, p_gacha_guarantee_parent_type_weight_vec);
  }
  this->gacha_guarantee_item = gacha_guarantee_item;
  v19 = (((_BYTE)v22 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->gacha_guarantee_item_parent_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->gacha_guarantee_item_parent_type);
  }
  gacha_guarantee_item_parent_type = v22->gacha_guarantee_item_parent_type;
  v21 = *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->gacha_guarantee_item_parent_type, v19);
  }
  this->gacha_guarantee_item_parent_type = gacha_guarantee_item_parent_type;
  std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::vector(
    &this->gacha_guarantee_parent_type_weight_childs_vec,
    &v22->gacha_guarantee_parent_type_weight_childs_vec);
  data::GachaGuaranteeParentTypeWithChilds::GachaGuaranteeParentTypeWithChilds(
    &this->gacha_guarantee_item_parent_type_childs,
    &v22->gacha_guarantee_item_parent_type_childs);
};

// Line 216: range 0000000014DEAB88-0000000014DEABB2
void __cdecl data::GachaRuleExcelConfig::~GachaRuleExcelConfig(data::GachaRuleExcelConfig *const this)
{
  data::GachaRuleExcelConfig::~GachaRuleExcelConfig(this);
  operator delete(this, 0xB8uLL);
};

// Line 216: range 0000000014DEAAF4-0000000014DEAB87
void __cdecl data::GachaRuleExcelConfig::~GachaRuleExcelConfig(data::GachaRuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaRuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaRuleExcelConfig = v2;
  data::GachaGuaranteeParentTypeWithChilds::~GachaGuaranteeParentTypeWithChilds(&this->gacha_guarantee_item_parent_type_childs);
  std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::~vector(&this->gacha_guarantee_parent_type_weight_childs_vec);
  std::vector<data::GachaGuaranteeParentTypeWeight>::~vector(&this->gacha_guarantee_parent_type_weight_vec);
  std::string::~string(&this->gacha_guarantee_reset_param);
  std::vector<std::string>::~vector(&this->gacha_guarantee_params);
};

// Line 238: range 0000000014964AF2-0000000014964F1A
void __cdecl data::GachaProbRuleConfig::GachaProbRuleConfig(
        data::GachaProbRuleConfig *const this,
        const data::GachaProbRuleConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gacha_prob_rule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v7; // dl
  data::GachaItemType gacha_item_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t round_table_priority; // ecx
  char v12; // dl
  uint32_t base_prob; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_guaranteed; // cl
  char v18; // dl
  __int64 v19; // rdx
  uint32_t start_guarantee_count; // ecx
  char v21; // al
  __int64 v22; // rsi
  uint32_t inc_guarantee_prob; // ecx
  char v24; // dl
  const data::GachaProbRuleConfig *v25; // [rsp+0h] [rbp-10h]

  v25 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaProbRuleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaProbRuleConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_prob_rule_id, a2);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  v5 = (((_BYTE)v25 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->gacha_item_parent_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->gacha_item_parent_type);
  }
  gacha_item_parent_type = v25->gacha_item_parent_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gacha_item_parent_type, v5);
  }
  this->gacha_item_parent_type = gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)&v25->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->gacha_item_type);
  }
  gacha_item_type = v25->gacha_item_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gacha_item_type, v5);
  }
  this->gacha_item_type = gacha_item_type;
  v10 = (((_BYTE)v25 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->round_table_priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->round_table_priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->round_table_priority);
  }
  round_table_priority = v25->round_table_priority;
  v12 = *(_BYTE *)(((unsigned __int64)&this->round_table_priority >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->round_table_priority, v10);
  }
  this->round_table_priority = round_table_priority;
  if ( *(_BYTE *)(((unsigned __int64)&v25->base_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->base_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->base_prob);
  }
  base_prob = v25->base_prob;
  v14 = *(_BYTE *)(((unsigned __int64)&this->base_prob >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->base_prob, v10);
  }
  this->base_prob = base_prob;
  v15 = ((_BYTE)v25 + 28) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v25->is_guaranteed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v25->is_guaranteed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v25->is_guaranteed, v15, v16);
  is_guaranteed = v25->is_guaranteed;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_guaranteed >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_guaranteed, v15, v19);
  this->is_guaranteed = is_guaranteed;
  if ( *(_BYTE *)(((unsigned __int64)&v25->start_guarantee_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->start_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->start_guarantee_count);
  }
  start_guarantee_count = v25->start_guarantee_count;
  v21 = *(_BYTE *)(((unsigned __int64)&this->start_guarantee_count >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v15) = v21 != 0;
    __asan_report_store4(&this->start_guarantee_count, v15);
  }
  this->start_guarantee_count = start_guarantee_count;
  v22 = (((_BYTE)v25 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->inc_guarantee_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->inc_guarantee_prob);
  }
  inc_guarantee_prob = v25->inc_guarantee_prob;
  v24 = *(_BYTE *)(((unsigned __int64)&this->inc_guarantee_prob >> 3) + 0x7FFF8000);
  if ( v24 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v24 )
  {
    LOBYTE(v22) = v24 != 0;
    __asan_report_store4(&this->inc_guarantee_prob, v22);
  }
  this->inc_guarantee_prob = inc_guarantee_prob;
};

// Line 241: range 0000000014DEAAC8-0000000014DEAAF2
void __cdecl data::GachaProbRuleConfig::~GachaProbRuleConfig(data::GachaProbRuleConfig *const this)
{
  data::GachaProbRuleConfig::~GachaProbRuleConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 241: range 0000000014DEAA86-0000000014DEAAC7
void __cdecl data::GachaProbRuleConfig::~GachaProbRuleConfig(data::GachaProbRuleConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaProbRuleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaProbRuleConfig = v2;
};

// Line 259: range 00000000147C168A-00000000147C17B4
data::GachaNewbieUpConfig *__cdecl data::GachaNewbieUpConfig::operator=(
        data::GachaNewbieUpConfig *const this,
        const data::GachaNewbieUpConfig *a2)
{
  uint32_t item_parent_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t prob; // ecx
  char v6; // dl
  const data::GachaNewbieUpConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_parent_type);
  }
  item_parent_type = a2->item_parent_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->item_parent_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->item_parent_type, a2);
  }
  this->item_parent_type = item_parent_type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->prob);
  }
  prob = v8->prob;
  v6 = *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->prob, v4);
  }
  this->prob = prob;
  std::vector<unsigned int>::operator=(&this->item_list, &v8->item_list);
  return this;
};

// Line 259: range 0000000014C8C666-0000000014C8C73B
void __cdecl data::GachaNewbieUpConfig::GachaNewbieUpConfig(data::GachaNewbieUpConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaNewbieUpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaNewbieUpConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_parent_type, v1);
  }
  this->item_parent_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prob, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->prob = 0;
  std::vector<unsigned int>::vector(&this->item_list);
};

// Line 259: range 0000000014D25372-0000000014D254CC
void __cdecl data::GachaNewbieUpConfig::GachaNewbieUpConfig(
        data::GachaNewbieUpConfig *const this,
        const data::GachaNewbieUpConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_parent_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t prob; // ecx
  char v7; // dl
  const data::GachaNewbieUpConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaNewbieUpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaNewbieUpConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_parent_type);
  }
  item_parent_type = a2->item_parent_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_parent_type, a2);
  }
  this->item_parent_type = item_parent_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->prob);
  }
  prob = v8->prob;
  v7 = *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->prob, v5);
  }
  this->prob = prob;
  std::vector<unsigned int>::vector(&this->item_list, &v8->item_list);
};

// Line 262: range 0000000014BBB1F4-0000000014BBB245
void __cdecl data::GachaNewbieUpConfig::~GachaNewbieUpConfig(data::GachaNewbieUpConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaNewbieUpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaNewbieUpConfig = v2;
  std::vector<unsigned int>::~vector(&this->item_list);
};

// Line 262: range 0000000014BBB246-0000000014BBB270
void __cdecl data::GachaNewbieUpConfig::~GachaNewbieUpConfig(data::GachaNewbieUpConfig *const this)
{
  data::GachaNewbieUpConfig::~GachaNewbieUpConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 273: range 000000001474C9A6-000000001474CD00
void __cdecl data::GachaNewbieDataConfig::GachaNewbieDataConfig(data::GachaNewbieDataConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GachaNewbieDataConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaNewbieDataConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_cost_item_id, v1);
  }
  this->single_cost_item_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_cost_item_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_cost_item_num, v3);
  }
  this->single_cost_item_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ten_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ten_cost_item_id, v3);
  }
  this->ten_cost_item_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ten_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ten_cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ten_cost_item_num, v4);
  }
  this->ten_cost_item_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_ten_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_ten_cost_item_id, v4);
  }
  this->first_ten_cost_item_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_ten_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_ten_cost_item_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_ten_cost_item_num, v5);
  }
  this->first_ten_cost_item_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_times_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_times_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_times_limit, v5);
  }
  this->gacha_times_limit = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_pool_id, v6);
  }
  this->gacha_pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_prob_rule_id, v6);
  }
  this->gacha_prob_rule_id = 0;
  std::vector<data::GachaNewbieUpConfig>::vector(&this->gacha_up_config_vec);
  std::vector<unsigned int>::vector(&this->gacha_guarantee_rule_list);
  std::string::basic_string(&this->gacha_prefab_path);
  std::string::basic_string(&this->gacha_preview_prefab_path);
  std::string::basic_string(&this->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea);
  std::string::basic_string(&this->gacha_record_url_oversea);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_sort_id, v6);
  }
  this->gacha_sort_id = 0;
};

// Line 273: range 000000001496549C-0000000014965B57
void __cdecl data::GachaNewbieDataConfig::GachaNewbieDataConfig(
        data::GachaNewbieDataConfig *const this,
        const data::GachaNewbieDataConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t single_cost_item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t single_cost_item_num; // ecx
  char v7; // dl
  uint32_t ten_cost_item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t ten_cost_item_num; // ecx
  char v12; // dl
  uint32_t first_ten_cost_item_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t first_ten_cost_item_num; // ecx
  char v17; // dl
  uint32_t gacha_times_limit; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t gacha_pool_id; // ecx
  char v22; // dl
  uint32_t gacha_prob_rule_id; // ecx
  char v24; // al
  std::string *p_gacha_record_url_oversea; // rsi
  uint32_t gacha_sort_id; // ecx
  char v27; // al
  const data::GachaNewbieDataConfig *v28; // [rsp+0h] [rbp-20h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaNewbieDataConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaNewbieDataConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->single_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->single_cost_item_id);
  }
  single_cost_item_id = a2->single_cost_item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->single_cost_item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->single_cost_item_id, a2);
  }
  this->single_cost_item_id = single_cost_item_id;
  v5 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->single_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->single_cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->single_cost_item_num);
  }
  single_cost_item_num = v28->single_cost_item_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->single_cost_item_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->single_cost_item_num, v5);
  }
  this->single_cost_item_num = single_cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&v28->ten_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->ten_cost_item_id);
  }
  ten_cost_item_id = v28->ten_cost_item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ten_cost_item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->ten_cost_item_id, v5);
  }
  this->ten_cost_item_id = ten_cost_item_id;
  v10 = (((_BYTE)v28 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->ten_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->ten_cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->ten_cost_item_num);
  }
  ten_cost_item_num = v28->ten_cost_item_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ten_cost_item_num >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->ten_cost_item_num, v10);
  }
  this->ten_cost_item_num = ten_cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&v28->first_ten_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->first_ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->first_ten_cost_item_id);
  }
  first_ten_cost_item_id = v28->first_ten_cost_item_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->first_ten_cost_item_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->first_ten_cost_item_id, v10);
  }
  this->first_ten_cost_item_id = first_ten_cost_item_id;
  v15 = (((_BYTE)v28 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->first_ten_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->first_ten_cost_item_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->first_ten_cost_item_num);
  }
  first_ten_cost_item_num = v28->first_ten_cost_item_num;
  v17 = *(_BYTE *)(((unsigned __int64)&this->first_ten_cost_item_num >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->first_ten_cost_item_num, v15);
  }
  this->first_ten_cost_item_num = first_ten_cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&v28->gacha_times_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->gacha_times_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->gacha_times_limit);
  }
  gacha_times_limit = v28->gacha_times_limit;
  v19 = *(_BYTE *)(((unsigned __int64)&this->gacha_times_limit >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->gacha_times_limit, v15);
  }
  this->gacha_times_limit = gacha_times_limit;
  v20 = (((_BYTE)v28 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->gacha_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->gacha_pool_id);
  }
  gacha_pool_id = v28->gacha_pool_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->gacha_pool_id, v20);
  }
  this->gacha_pool_id = gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = v28->gacha_prob_rule_id;
  v24 = *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->gacha_prob_rule_id, v20);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  std::vector<data::GachaNewbieUpConfig>::vector(&this->gacha_up_config_vec, &v28->gacha_up_config_vec);
  std::vector<unsigned int>::vector(&this->gacha_guarantee_rule_list, &v28->gacha_guarantee_rule_list);
  std::string::basic_string(&this->gacha_prefab_path, &v28->gacha_prefab_path);
  std::string::basic_string(&this->gacha_preview_prefab_path, &v28->gacha_preview_prefab_path);
  std::string::basic_string(&this->gacha_prob_url, &v28->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url, &v28->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea, &v28->gacha_prob_url_oversea);
  p_gacha_record_url_oversea = &v28->gacha_record_url_oversea;
  std::string::basic_string(&this->gacha_record_url_oversea, &v28->gacha_record_url_oversea);
  if ( *(_BYTE *)(((unsigned __int64)&v28->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->gacha_sort_id);
  }
  gacha_sort_id = v28->gacha_sort_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_gacha_record_url_oversea) = v27 != 0;
    __asan_report_store4(&this->gacha_sort_id, p_gacha_record_url_oversea);
  }
  this->gacha_sort_id = gacha_sort_id;
};

// Line 276: range 0000000014DEA990-0000000014DEAA59
void __cdecl data::GachaNewbieDataConfig::~GachaNewbieDataConfig(data::GachaNewbieDataConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaNewbieDataConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaNewbieDataConfig = v2;
  std::string::~string(&this->gacha_record_url_oversea);
  std::string::~string(&this->gacha_prob_url_oversea);
  std::string::~string(&this->gacha_record_url);
  std::string::~string(&this->gacha_prob_url);
  std::string::~string(&this->gacha_preview_prefab_path);
  std::string::~string(&this->gacha_prefab_path);
  std::vector<unsigned int>::~vector(&this->gacha_guarantee_rule_list);
  std::vector<data::GachaNewbieUpConfig>::~vector(&this->gacha_up_config_vec);
};

// Line 276: range 0000000014DEAA5A-0000000014DEAA84
void __cdecl data::GachaNewbieDataConfig::~GachaNewbieDataConfig(data::GachaNewbieDataConfig *const this)
{
  data::GachaNewbieDataConfig::~GachaNewbieDataConfig(this);
  operator delete(this, 0x128uLL);
};

// Line 304: range 0000000014D25EFC-0000000014D2603B
void __cdecl data::GachaTokenDropConfig::GachaTokenDropConfig(
        data::GachaTokenDropConfig *const this,
        const data::GachaTokenDropConfig *a2)
{
  int (**v2)(...); // rdx
  data::GachaItemType gacha_item_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t token_drop_id; // ecx
  char v7; // dl
  const data::GachaTokenDropConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaTokenDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaTokenDropConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_item_type);
  }
  gacha_item_type = a2->gacha_item_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_item_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_item_type, a2);
  }
  this->gacha_item_type = gacha_item_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->token_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->token_drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->token_drop_id);
  }
  token_drop_id = v8->token_drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->token_drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->token_drop_id, v5);
  }
  this->token_drop_id = token_drop_id;
};

// Line 307: range 0000000014DEA964-0000000014DEA98E
void __cdecl data::GachaTokenDropConfig::~GachaTokenDropConfig(data::GachaTokenDropConfig *const this)
{
  data::GachaTokenDropConfig::~GachaTokenDropConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 307: range 0000000014DEA922-0000000014DEA963
void __cdecl data::GachaTokenDropConfig::~GachaTokenDropConfig(data::GachaTokenDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaTokenDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaTokenDropConfig = v2;
};

// Line 319: range 0000000014D2617C-0000000014D26330
void __cdecl data::GachaWishConfig::GachaWishConfig(data::GachaWishConfig *const this, const data::GachaWishConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gacha_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GachaItemParentType wish_parent_type; // ecx
  char v7; // dl
  uint32_t wish_max_progress; // ecx
  char v9; // al
  const data::GachaWishConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaWishConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaWishConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_type);
  }
  gacha_type = a2->gacha_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_type, a2);
  }
  this->gacha_type = gacha_type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->wish_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->wish_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->wish_parent_type);
  }
  wish_parent_type = v10->wish_parent_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->wish_parent_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->wish_parent_type, v5);
  }
  this->wish_parent_type = wish_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->wish_max_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->wish_max_progress);
  }
  wish_max_progress = v10->wish_max_progress;
  v9 = *(_BYTE *)(((unsigned __int64)&this->wish_max_progress >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->wish_max_progress, v5);
  }
  this->wish_max_progress = wish_max_progress;
};

// Line 322: range 0000000014DEA8F6-0000000014DEA920
void __cdecl data::GachaWishConfig::~GachaWishConfig(data::GachaWishConfig *const this)
{
  data::GachaWishConfig::~GachaWishConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 322: range 0000000014DEA8B4-0000000014DEA8F5
void __cdecl data::GachaWishConfig::~GachaWishConfig(data::GachaWishConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaWishConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaWishConfig = v2;
};

// Line 335: range 0000000014D26472-0000000014D26720
void __cdecl data::GachaRestrictConfig::GachaRestrictConfig(
        data::GachaRestrictConfig *const this,
        const data::GachaRestrictConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gacha_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t general_limit_count; // ecx
  char v7; // dl
  uint32_t general_display_count; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t minors_limit_count; // ecx
  char v12; // dl
  uint32_t minors_display_count; // ecx
  char v14; // al
  const data::GachaRestrictConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GachaRestrictConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GachaRestrictConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_type);
  }
  gacha_type = a2->gacha_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gacha_type, a2);
  }
  this->gacha_type = gacha_type;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->general_limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->general_limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->general_limit_count);
  }
  general_limit_count = v15->general_limit_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->general_limit_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->general_limit_count, v5);
  }
  this->general_limit_count = general_limit_count;
  if ( *(_BYTE *)(((unsigned __int64)&v15->general_display_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->general_display_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->general_display_count);
  }
  general_display_count = v15->general_display_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->general_display_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->general_display_count, v5);
  }
  this->general_display_count = general_display_count;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->minors_limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->minors_limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->minors_limit_count);
  }
  minors_limit_count = v15->minors_limit_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->minors_limit_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->minors_limit_count, v10);
  }
  this->minors_limit_count = minors_limit_count;
  if ( *(_BYTE *)(((unsigned __int64)&v15->minors_display_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->minors_display_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->minors_display_count);
  }
  minors_display_count = v15->minors_display_count;
  v14 = *(_BYTE *)(((unsigned __int64)&this->minors_display_count >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->minors_display_count, v10);
  }
  this->minors_display_count = minors_display_count;
};

// Line 338: range 0000000014DEA846-0000000014DEA887
void __cdecl data::GachaRestrictConfig::~GachaRestrictConfig(data::GachaRestrictConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GachaRestrictConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GachaRestrictConfig = v2;
};

// Line 338: range 0000000014DEA888-0000000014DEA8B2
void __cdecl data::GachaRestrictConfig::~GachaRestrictConfig(data::GachaRestrictConfig *const this)
{
  data::GachaRestrictConfig::~GachaRestrictConfig(this);
  operator delete(this, 0x20uLL);
};
