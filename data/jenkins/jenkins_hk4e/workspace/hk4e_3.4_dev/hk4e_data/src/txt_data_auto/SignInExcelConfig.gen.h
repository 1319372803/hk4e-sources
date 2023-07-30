// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/SignInExcelConfig.gen.h

// Line 96: range 000000000CE5A708-000000000CE5A7AD
data::SignInCondConfig *__cdecl data::SignInCondConfig::operator=(
        data::SignInCondConfig *const this,
        const data::SignInCondConfig *a2)
{
  data::SignInCondType type; // ecx
  char v3; // al
  const data::SignInCondConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
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
  std::vector<int>::operator=(&this->param_list, &v5->param_list);
  return this;
};

// Line 96: range 000000000D2E2C40-000000000D2E2CCF
void __cdecl data::SignInCondConfig::SignInCondConfig(data::SignInCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = SIGN_IN_COND_NONE;
  std::vector<int>::vector(&this->param_list);
};

// Line 96: range 000000000D36F87A-000000000D36F94F
void __cdecl data::SignInCondConfig::SignInCondConfig(
        data::SignInCondConfig *const this,
        const data::SignInCondConfig *a2)
{
  int (**v2)(...); // rdx
  data::SignInCondType type; // ecx
  char v4; // al
  const data::SignInCondConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SignInCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SignInCondConfig = v2;
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
  std::vector<int>::vector(&this->param_list, &v5->param_list);
};

// Line 99: range 000000000D2435BE-000000000D24360F
void __cdecl data::SignInCondConfig::~SignInCondConfig(data::SignInCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInCondConfig = v2;
  std::vector<int>::~vector(&this->param_list);
};

// Line 99: range 000000000D243610-000000000D24363A
void __cdecl data::SignInCondConfig::~SignInCondConfig(data::SignInCondConfig *const this)
{
  data::SignInCondConfig::~SignInCondConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 109: range 000000000CE16FC4-000000000CE170D7
void __cdecl data::SignInCondExcelConfig::SignInCondExcelConfig(data::SignInCondExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SignInCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInCondExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::SignInCondConfig>::vector(&this->cond_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_day_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_day_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_day_count, v3);
  }
  this->total_day_count = 0;
};

// Line 109: range 000000000D36FA2A-000000000D36FBF9
void __cdecl data::SignInCondExcelConfig::SignInCondExcelConfig(
        data::SignInCondExcelConfig *const this,
        const data::SignInCondExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LogicType cond_comb; // ecx
  char v7; // dl
  std::vector<data::SignInCondConfig> *p_cond_list; // rsi
  uint32_t total_day_count; // ecx
  char v10; // al
  const data::SignInCondExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SignInCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SignInCondExcelConfig = v2;
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
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->cond_comb);
  }
  cond_comb = v11->cond_comb;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_comb, v5);
  }
  this->cond_comb = cond_comb;
  p_cond_list = &v11->cond_list;
  std::vector<data::SignInCondConfig>::vector(&this->cond_list, &v11->cond_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->total_day_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->total_day_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->total_day_count);
  }
  total_day_count = v11->total_day_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->total_day_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_cond_list) = v10 != 0;
    __asan_report_store4(&this->total_day_count, p_cond_list);
  }
  this->total_day_count = total_day_count;
};

// Line 112: range 000000000D4922EE-000000000D492318
void __cdecl data::SignInCondExcelConfig::~SignInCondExcelConfig(data::SignInCondExcelConfig *const this)
{
  data::SignInCondExcelConfig::~SignInCondExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 112: range 000000000D49229C-000000000D4922ED
void __cdecl data::SignInCondExcelConfig::~SignInCondExcelConfig(data::SignInCondExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInCondExcelConfig = v2;
  std::vector<data::SignInCondConfig>::~vector(&this->cond_list);
};

// Line 126: range 000000000CE5B084-000000000CE5B193
data::SignInRewardItemConfig *__cdecl data::SignInRewardItemConfig::operator=(
        data::SignInRewardItemConfig *const this,
        const data::SignInRewardItemConfig *a2)
{
  uint32_t item_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t count; // ecx
  char v6; // dl
  const data::SignInRewardItemConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
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

// Line 126: range 000000000D2E2E1E-000000000D2E2EE3
void __cdecl data::SignInRewardItemConfig::SignInRewardItemConfig(data::SignInRewardItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInRewardItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInRewardItemConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->count = 0;
};

// Line 126: range 000000000D226522-000000000D226661
void __cdecl data::SignInRewardItemConfig::SignInRewardItemConfig(
        data::SignInRewardItemConfig *const this,
        const data::SignInRewardItemConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  const data::SignInRewardItemConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SignInRewardItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SignInRewardItemConfig = v2;
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

// Line 129: range 000000000D226124-000000000D226165
void __cdecl data::SignInRewardItemConfig::~SignInRewardItemConfig(data::SignInRewardItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInRewardItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInRewardItemConfig = v2;
};

// Line 129: range 000000000D226166-000000000D226190
void __cdecl data::SignInRewardItemConfig::~SignInRewardItemConfig(data::SignInRewardItemConfig *const this)
{
  data::SignInRewardItemConfig::~SignInRewardItemConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 139: range 000000000CE0C590-000000000CE0C6BA
data::SignInDayExcelConfig *__cdecl data::SignInDayExcelConfig::operator=(
        data::SignInDayExcelConfig *const this,
        const data::SignInDayExcelConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t day_count; // ecx
  char v6; // dl
  const data::SignInDayExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->day_count);
  }
  day_count = v8->day_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->day_count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->day_count, v4);
  }
  this->day_count = day_count;
  std::vector<data::SignInRewardItemConfig>::operator=(&this->reward_item_list, &v8->reward_item_list);
  return this;
};

// Line 139: range 000000000CE1712C-000000000CE17201
void __cdecl data::SignInDayExcelConfig::SignInDayExcelConfig(data::SignInDayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInDayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInDayExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->day_count = 0;
  std::vector<data::SignInRewardItemConfig>::vector(&this->reward_item_list);
};

// Line 139: range 000000000D0627EA-000000000D062944
void __cdecl data::SignInDayExcelConfig::SignInDayExcelConfig(
        data::SignInDayExcelConfig *const this,
        const data::SignInDayExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_count; // ecx
  char v7; // dl
  const data::SignInDayExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SignInDayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SignInDayExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->day_count);
  }
  day_count = v8->day_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_count, v5);
  }
  this->day_count = day_count;
  std::vector<data::SignInRewardItemConfig>::vector(&this->reward_item_list, &v8->reward_item_list);
};

// Line 142: range 000000000D49221E-000000000D49226F
void __cdecl data::SignInDayExcelConfig::~SignInDayExcelConfig(data::SignInDayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SignInDayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SignInDayExcelConfig = v2;
  std::vector<data::SignInRewardItemConfig>::~vector(&this->reward_item_list);
};

// Line 142: range 000000000D492270-000000000D49229A
void __cdecl data::SignInDayExcelConfig::~SignInDayExcelConfig(data::SignInDayExcelConfig *const this)
{
  data::SignInDayExcelConfig::~SignInDayExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 155: range 000000000CE175FE-000000000CE17734
void __cdecl data::BonusActivityExcelConfig::BonusActivityExcelConfig(data::BonusActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::BonusActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_activity_id, v3);
  }
  this->bonus_activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::SignInCondConfig>::vector(&this->cond_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, v3);
  }
  this->watcher_id = 0;
  std::vector<data::IdCountConfig>::vector(&this->reward_item_list);
};

// Line 155: range 000000000D3702E8-000000000D37052C
void __cdecl data::BonusActivityExcelConfig::BonusActivityExcelConfig(
        data::BonusActivityExcelConfig *const this,
        const data::BonusActivityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t bonus_activity_id; // ecx
  char v5; // dl
  data::LogicType cond_comb; // ecx
  char v7; // al
  std::vector<data::SignInCondConfig> *p_cond_list; // rsi
  uint32_t watcher_id; // ecx
  char v10; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::BonusActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->bonus_activity_id);
  }
  bonus_activity_id = a2->bonus_activity_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->bonus_activity_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->bonus_activity_id, v3);
  }
  this->bonus_activity_id = bonus_activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_comb);
  }
  cond_comb = a2->cond_comb;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = cond_comb;
  p_cond_list = &a2->cond_list;
  std::vector<data::SignInCondConfig>::vector(&this->cond_list, &a2->cond_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->watcher_id);
  }
  watcher_id = a2->watcher_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_cond_list) = v10 != 0;
    __asan_report_store4(&this->watcher_id, p_cond_list);
  }
  this->watcher_id = watcher_id;
  std::vector<data::IdCountConfig>::vector(&this->reward_item_list, &a2->reward_item_list);
};

// Line 159: range 000000000D492182-000000000D4921F1
void __cdecl data::BonusActivityExcelConfig::~BonusActivityExcelConfig(data::BonusActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BonusActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->reward_item_list);
  std::vector<data::SignInCondConfig>::~vector(&this->cond_list);
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 159: range 000000000D4921F2-000000000D49221C
void __cdecl data::BonusActivityExcelConfig::~BonusActivityExcelConfig(data::BonusActivityExcelConfig *const this)
{
  data::BonusActivityExcelConfig::~BonusActivityExcelConfig(this);
  operator delete(this, 0xB0uLL);
};
