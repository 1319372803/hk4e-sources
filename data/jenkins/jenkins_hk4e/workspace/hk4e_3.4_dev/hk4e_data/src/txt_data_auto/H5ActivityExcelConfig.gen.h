// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/H5ActivityExcelConfig.gen.h

// Line 42: range 00000000147C7C38-00000000147C7D52
data::H5ActivityCondConfig *__cdecl data::H5ActivityCondConfig::operator=(
        data::H5ActivityCondConfig *const this,
        const data::H5ActivityCondConfig *a2)
{
  data::H5ActivityCondType type; // ecx
  char v3; // al
  std::string *p_param_str; // rsi
  uint32_t param; // ecx
  char v6; // al
  const data::H5ActivityCondConfig *v8; // [rsp+0h] [rbp-10h]

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
  p_param_str = &v8->param_str;
  std::string::operator=(&this->param_str, &v8->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v8->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->param);
  }
  param = v8->param;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_param_str) = v6 != 0;
    __asan_report_store4(&this->param, p_param_str);
  }
  this->param = param;
  return this;
};

// Line 42: range 0000000014CAA638-0000000014CAA705
void __cdecl data::H5ActivityCondConfig::H5ActivityCondConfig(data::H5ActivityCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::H5ActivityCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_H5ActivityCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = H5_ACTIVITY_COND_NONE;
  std::string::basic_string(&this->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param, v1);
  }
  this->param = 0;
};

// Line 42: range 0000000014D394D0-0000000014D3961A
void __cdecl data::H5ActivityCondConfig::H5ActivityCondConfig(
        data::H5ActivityCondConfig *const this,
        const data::H5ActivityCondConfig *a2)
{
  int (**v2)(...); // rdx
  data::H5ActivityCondType type; // ecx
  char v4; // al
  std::string *p_param_str; // rsi
  uint32_t param; // ecx
  char v7; // al
  const data::H5ActivityCondConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::H5ActivityCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_H5ActivityCondConfig = v2;
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
  p_param_str = &v8->param_str;
  std::string::basic_string(&this->param_str, &v8->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v8->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->param);
  }
  param = v8->param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_param_str) = v7 != 0;
    __asan_report_store4(&this->param, p_param_str);
  }
  this->param = param;
};

// Line 45: range 0000000014BE4582-0000000014BE45D3
void __cdecl data::H5ActivityCondConfig::~H5ActivityCondConfig(data::H5ActivityCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::H5ActivityCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_H5ActivityCondConfig = v2;
  std::string::~string(&this->param_str);
};

// Line 45: range 0000000014BE45D4-0000000014BE45FE
void __cdecl data::H5ActivityCondConfig::~H5ActivityCondConfig(data::H5ActivityCondConfig *const this)
{
  data::H5ActivityCondConfig::~H5ActivityCondConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 56: range 000000001475B886-000000001475B96B
void __cdecl data::H5ActivityExcelConfig::H5ActivityExcelConfig(data::H5ActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::H5ActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_H5ActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->h5_activity_id, v1);
  }
  this->h5_activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_comb, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::H5ActivityCondConfig>::vector(&this->cond_list);
  std::vector<unsigned int>::vector(&this->h5_activity_watcher_id_list);
};

// Line 56: range 0000000014D3969E-0000000014D3983A
void __cdecl data::H5ActivityExcelConfig::H5ActivityExcelConfig(
        data::H5ActivityExcelConfig *const this,
        const data::H5ActivityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t h5_activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LogicType cond_comb; // ecx
  char v7; // dl
  const data::H5ActivityExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::H5ActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_H5ActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->h5_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->h5_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->h5_activity_id);
  }
  h5_activity_id = a2->h5_activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->h5_activity_id, a2);
  }
  this->h5_activity_id = h5_activity_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->cond_comb);
  }
  cond_comb = v8->cond_comb;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_comb, v5);
  }
  this->cond_comb = cond_comb;
  std::vector<data::H5ActivityCondConfig>::vector(&this->cond_list, &v8->cond_list);
  std::vector<unsigned int>::vector(&this->h5_activity_watcher_id_list, &v8->h5_activity_watcher_id_list);
};

// Line 59: range 0000000014DE84A4-0000000014DE8505
void __cdecl data::H5ActivityExcelConfig::~H5ActivityExcelConfig(data::H5ActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::H5ActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_H5ActivityExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->h5_activity_watcher_id_list);
  std::vector<data::H5ActivityCondConfig>::~vector(&this->cond_list);
};

// Line 59: range 0000000014DE8506-0000000014DE8530
void __cdecl data::H5ActivityExcelConfig::~H5ActivityExcelConfig(data::H5ActivityExcelConfig *const this)
{
  data::H5ActivityExcelConfig::~H5ActivityExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 73: range 000000001475B96C-000000001475BA8D
void __cdecl data::H5ActivityWatcherExcelConfig::H5ActivityWatcherExcelConfig(
        data::H5ActivityWatcherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::H5ActivityWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->h5_activity_id, v3);
  }
  this->h5_activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::H5ActivityCondConfig>::vector(&this->cond_list);
  if ( *(char *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_daily_refresh, v3, &this->is_daily_refresh);
  this->is_daily_refresh = 0;
};

// Line 73: range 0000000014D3997C-0000000014D39B8C
void __cdecl data::H5ActivityWatcherExcelConfig::H5ActivityWatcherExcelConfig(
        data::H5ActivityWatcherExcelConfig *const this,
        const data::H5ActivityWatcherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t h5_activity_id; // ecx
  char v5; // dl
  data::LogicType cond_comb; // ecx
  char v7; // al
  std::vector<data::H5ActivityCondConfig> *p_cond_list; // rsi
  bool is_daily_refresh; // cl
  char v10; // al

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::H5ActivityWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->h5_activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->h5_activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->h5_activity_id);
  }
  h5_activity_id = a2->h5_activity_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->h5_activity_id, v3);
  }
  this->h5_activity_id = h5_activity_id;
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
  std::vector<data::H5ActivityCondConfig>::vector(&this->cond_list, &a2->cond_list);
  if ( *(char *)(((unsigned __int64)&a2->is_daily_refresh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_daily_refresh, p_cond_list, &a2->is_daily_refresh);
  is_daily_refresh = a2->is_daily_refresh;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_cond_list) = v10 != 0;
    __asan_report_store1(&this->is_daily_refresh, p_cond_list, &this->is_daily_refresh);
  }
  this->is_daily_refresh = is_daily_refresh;
};

// Line 77: range 0000000014DE841A-0000000014DE8477
void __cdecl data::H5ActivityWatcherExcelConfig::~H5ActivityWatcherExcelConfig(
        data::H5ActivityWatcherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::H5ActivityWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::vector<data::H5ActivityCondConfig>::~vector(&this->cond_list);
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 77: range 0000000014DE8478-0000000014DE84A2
void __cdecl data::H5ActivityWatcherExcelConfig::~H5ActivityWatcherExcelConfig(
        data::H5ActivityWatcherExcelConfig *const this)
{
  data::H5ActivityWatcherExcelConfig::~H5ActivityWatcherExcelConfig(this);
  operator delete(this, 0x98uLL);
};
