// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityShopExcelConfig.gen.h

// Line 43: range 0000000013BD5E8A-0000000013BD5F5F
void __cdecl data::ActivityShopOverallExcelConfig::ActivityShopOverallExcelConfig(
        data::ActivityShopOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityShopOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityShopOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shop_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->shop_type = SHOP_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->sheet_list);
};

// Line 43: range 000000001418A8AE-000000001418AA08
void __cdecl data::ActivityShopOverallExcelConfig::ActivityShopOverallExcelConfig(
        data::ActivityShopOverallExcelConfig *const this,
        const data::ActivityShopOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ShopType shop_type; // ecx
  char v7; // dl
  const data::ActivityShopOverallExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityShopOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityShopOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->shop_type);
  }
  shop_type = v8->shop_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->shop_type, v5);
  }
  this->shop_type = shop_type;
  std::vector<unsigned int>::vector(&this->sheet_list, &v8->sheet_list);
};

// Line 46: range 00000000142A4176-00000000142A41C7
void __cdecl data::ActivityShopOverallExcelConfig::~ActivityShopOverallExcelConfig(
        data::ActivityShopOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityShopOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityShopOverallExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->sheet_list);
};

// Line 46: range 00000000142A41C8-00000000142A41F2
void __cdecl data::ActivityShopOverallExcelConfig::~ActivityShopOverallExcelConfig(
        data::ActivityShopOverallExcelConfig *const this)
{
  data::ActivityShopOverallExcelConfig::~ActivityShopOverallExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 59: range 00000000140D6C90-00000000140D6D1F
void __cdecl data::ActivityShopSheetCond::ActivityShopSheetCond(data::ActivityShopSheetCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityShopSheetCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityShopSheetCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = ACTIVITY_SHOP_SHEET_COND_NONE;
  std::vector<unsigned int>::vector(&this->param);
};

// Line 59: range 000000001418A756-000000001418A82B
void __cdecl data::ActivityShopSheetCond::ActivityShopSheetCond(
        data::ActivityShopSheetCond *const this,
        const data::ActivityShopSheetCond *a2)
{
  int (**v2)(...); // rdx
  data::ActivityShopSheetCondType type; // ecx
  char v4; // al
  const data::ActivityShopSheetCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityShopSheetCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityShopSheetCond = v2;
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
  std::vector<unsigned int>::vector(&this->param, &v5->param);
};

// Line 62: range 0000000013FEC850-0000000013FEC8A1
void __cdecl data::ActivityShopSheetCond::~ActivityShopSheetCond(data::ActivityShopSheetCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityShopSheetCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityShopSheetCond = v2;
  std::vector<unsigned int>::~vector(&this->param);
};

// Line 62: range 0000000013FEC8A2-0000000013FEC8CC
void __cdecl data::ActivityShopSheetCond::~ActivityShopSheetCond(data::ActivityShopSheetCond *const this)
{
  data::ActivityShopSheetCond::~ActivityShopSheetCond(this);
  operator delete(this, 0x28uLL);
};

// Line 72: range 0000000013BD5FB4-0000000013BD60C1
void __cdecl data::ActivityShopSheetExcelConfig::ActivityShopSheetExcelConfig(
        data::ActivityShopSheetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityShopSheetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityShopSheetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_ahead_preview >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_ahead_preview >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_ahead_preview, v3, v4);
  this->is_ahead_preview = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::ActivityShopSheetCond>::vector(&this->cond);
};

// Line 72: range 000000001418AB4A-000000001418AD14
void __cdecl data::ActivityShopSheetExcelConfig::ActivityShopSheetExcelConfig(
        data::ActivityShopSheetExcelConfig *const this,
        const data::ActivityShopSheetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_ahead_preview; // cl
  char v8; // dl
  __int64 v9; // rdx
  data::LogicType cond_comb; // ecx
  char v11; // al
  const data::ActivityShopSheetExcelConfig *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityShopSheetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityShopSheetExcelConfig = v2;
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
  v5 = ((_BYTE)v12 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v12->is_ahead_preview >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v12->is_ahead_preview >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v12->is_ahead_preview, v5, v6);
  is_ahead_preview = v12->is_ahead_preview;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_ahead_preview >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_ahead_preview, v5, v9);
  this->is_ahead_preview = is_ahead_preview;
  if ( *(_BYTE *)(((unsigned __int64)&v12->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->cond_comb);
  }
  cond_comb = v12->cond_comb;
  v11 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->cond_comb, v5);
  }
  this->cond_comb = cond_comb;
  std::vector<data::ActivityShopSheetCond>::vector(&this->cond, &v12->cond);
};

// Line 75: range 00000000142A40F8-00000000142A4149
void __cdecl data::ActivityShopSheetExcelConfig::~ActivityShopSheetExcelConfig(
        data::ActivityShopSheetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityShopSheetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityShopSheetExcelConfig = v2;
  std::vector<data::ActivityShopSheetCond>::~vector(&this->cond);
};

// Line 75: range 00000000142A414A-00000000142A4174
void __cdecl data::ActivityShopSheetExcelConfig::~ActivityShopSheetExcelConfig(
        data::ActivityShopSheetExcelConfig *const this)
{
  data::ActivityShopSheetExcelConfig::~ActivityShopSheetExcelConfig(this);
  operator delete(this, 0x30uLL);
};
