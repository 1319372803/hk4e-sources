// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBlessingExcelConfig.gen.h

// Line 41: range 0000000013310396-000000001331045B
void __cdecl data::BlessingPicUpConfig::BlessingPicUpConfig(data::BlessingPicUpConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlessingPicUpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingPicUpConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prob, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->prob = 0;
};

// Line 41: range 000000001340A936-000000001340AA75
void __cdecl data::BlessingPicUpConfig::BlessingPicUpConfig(
        data::BlessingPicUpConfig *const this,
        const data::BlessingPicUpConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t prob; // ecx
  char v7; // dl
  const data::BlessingPicUpConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlessingPicUpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlessingPicUpConfig = v2;
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
};

// Line 44: range 000000001326961A-0000000013269644
void __cdecl data::BlessingPicUpConfig::~BlessingPicUpConfig(data::BlessingPicUpConfig *const this)
{
  data::BlessingPicUpConfig::~BlessingPicUpConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 44: range 00000000132695D8-0000000013269619
void __cdecl data::BlessingPicUpConfig::~BlessingPicUpConfig(data::BlessingPicUpConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlessingPicUpConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingPicUpConfig = v2;
};

// Line 54: range 0000000012EB28F6-0000000012EB2AD3
void __cdecl data::BlessingScanExcelConfig::BlessingScanExcelConfig(data::BlessingScanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlessingScanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingScanExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type_id, v3);
  }
  this->type_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_type, v3);
  }
  this->scan_type = BLESSING_SCAN_TYPE_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ref_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ref_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ref_id, v4);
  }
  this->ref_id = 0;
  std::vector<data::BlessingPicUpConfig>::vector(&this->pic_up_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_duration, v4);
  }
  this->scan_duration = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scan_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scan_time, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->scan_time = 0;
};

// Line 54: range 000000001338C9FC-000000001338CD4A
void __cdecl data::BlessingScanExcelConfig::BlessingScanExcelConfig(
        data::BlessingScanExcelConfig *const this,
        const data::BlessingScanExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t type_id; // ecx
  char v7; // dl
  data::BlessingScanType scan_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t ref_id; // ecx
  char v12; // dl
  std::vector<data::BlessingPicUpConfig> *p_pic_up_config; // rsi
  uint32_t scan_duration; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t scan_time; // ecx
  char v18; // dl
  const data::BlessingScanExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlessingScanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlessingScanExcelConfig = v2;
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
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->type_id);
  }
  type_id = v19->type_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type_id, v5);
  }
  this->type_id = type_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->scan_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->scan_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->scan_type);
  }
  scan_type = v19->scan_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->scan_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->scan_type, v5);
  }
  this->scan_type = scan_type;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->ref_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->ref_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->ref_id);
  }
  ref_id = v19->ref_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ref_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->ref_id, v10);
  }
  this->ref_id = ref_id;
  p_pic_up_config = &v19->pic_up_config;
  std::vector<data::BlessingPicUpConfig>::vector(&this->pic_up_config, &v19->pic_up_config);
  if ( *(_BYTE *)(((unsigned __int64)&v19->scan_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->scan_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->scan_duration);
  }
  scan_duration = v19->scan_duration;
  v15 = *(_BYTE *)(((unsigned __int64)&this->scan_duration >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_pic_up_config) = v15 != 0;
    __asan_report_store4(&this->scan_duration, p_pic_up_config);
  }
  this->scan_duration = scan_duration;
  v16 = (((_BYTE)v19 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->scan_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->scan_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->scan_time);
  }
  scan_time = v19->scan_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->scan_time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->scan_time, v16);
  }
  this->scan_time = scan_time;
};

// Line 57: range 0000000013425ED0-0000000013425EFA
void __cdecl data::BlessingScanExcelConfig::~BlessingScanExcelConfig(data::BlessingScanExcelConfig *const this)
{
  data::BlessingScanExcelConfig::~BlessingScanExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 57: range 0000000013425E7E-0000000013425ECF
void __cdecl data::BlessingScanExcelConfig::~BlessingScanExcelConfig(data::BlessingScanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlessingScanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingScanExcelConfig = v2;
  std::vector<data::BlessingPicUpConfig>::~vector(&this->pic_up_config);
};

// Line 74: range 0000000012EB2AD4-0000000012EB2C25
void __cdecl data::BlessingScanTypeExcelConfig::BlessingScanTypeExcelConfig(
        data::BlessingScanTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlessingScanTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingScanTypeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type_id, v3);
  }
  this->type_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  std::vector<unsigned int>::vector(&this->up_pool_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_scan_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_scan_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_scan_limit, v3);
  }
  this->daily_scan_limit = 0;
};

// Line 74: range 000000001338CE8C-000000001338D0D0
void __cdecl data::BlessingScanTypeExcelConfig::BlessingScanTypeExcelConfig(
        data::BlessingScanTypeExcelConfig *const this,
        const data::BlessingScanTypeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t type_id; // ecx
  char v7; // dl
  uint32_t priority; // ecx
  char v9; // al
  std::vector<unsigned int> *p_up_pool_id; // rsi
  uint32_t daily_scan_limit; // ecx
  char v12; // al
  const data::BlessingScanTypeExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlessingScanTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlessingScanTypeExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->type_id);
  }
  type_id = v13->type_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type_id, v5);
  }
  this->type_id = type_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->priority);
  }
  priority = v13->priority;
  v9 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->priority, v5);
  }
  this->priority = priority;
  p_up_pool_id = &v13->up_pool_id;
  std::vector<unsigned int>::vector(&this->up_pool_id, &v13->up_pool_id);
  if ( *(_BYTE *)(((unsigned __int64)&v13->daily_scan_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->daily_scan_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->daily_scan_limit);
  }
  daily_scan_limit = v13->daily_scan_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->daily_scan_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_up_pool_id) = v12 != 0;
    __asan_report_store4(&this->daily_scan_limit, p_up_pool_id);
  }
  this->daily_scan_limit = daily_scan_limit;
};

// Line 77: range 0000000013425E00-0000000013425E51
void __cdecl data::BlessingScanTypeExcelConfig::~BlessingScanTypeExcelConfig(
        data::BlessingScanTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlessingScanTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingScanTypeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->up_pool_id);
};

// Line 77: range 0000000013425E52-0000000013425E7C
void __cdecl data::BlessingScanTypeExcelConfig::~BlessingScanTypeExcelConfig(
        data::BlessingScanTypeExcelConfig *const this)
{
  data::BlessingScanTypeExcelConfig::~BlessingScanTypeExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 92: range 000000001338D212-000000001338D351
void __cdecl data::BlessingScanPicExcelConfig::BlessingScanPicExcelConfig(
        data::BlessingScanPicExcelConfig *const this,
        const data::BlessingScanPicExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t grant_reward_cost; // ecx
  char v7; // dl
  const data::BlessingScanPicExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlessingScanPicExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlessingScanPicExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->grant_reward_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->grant_reward_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->grant_reward_cost);
  }
  grant_reward_cost = v8->grant_reward_cost;
  v7 = *(_BYTE *)(((unsigned __int64)&this->grant_reward_cost >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->grant_reward_cost, v5);
  }
  this->grant_reward_cost = grant_reward_cost;
};

// Line 95: range 0000000013425D92-0000000013425DD3
void __cdecl data::BlessingScanPicExcelConfig::~BlessingScanPicExcelConfig(
        data::BlessingScanPicExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlessingScanPicExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingScanPicExcelConfig = v2;
};

// Line 95: range 0000000013425DD4-0000000013425DFE
void __cdecl data::BlessingScanPicExcelConfig::~BlessingScanPicExcelConfig(
        data::BlessingScanPicExcelConfig *const this)
{
  data::BlessingScanPicExcelConfig::~BlessingScanPicExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 107: range 000000001338D492-000000001338D6CB
void __cdecl data::BlessingScanDropExcelConfig::BlessingScanDropExcelConfig(
        data::BlessingScanDropExcelConfig *const this,
        const data::BlessingScanDropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t up_pool_id; // ecx
  char v7; // dl
  uint32_t pic_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t drop_prob; // ecx
  char v12; // dl
  const data::BlessingScanDropExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlessingScanDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlessingScanDropExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->up_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->up_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->up_pool_id);
  }
  up_pool_id = v13->up_pool_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->up_pool_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->up_pool_id, v5);
  }
  this->up_pool_id = up_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->pic_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->pic_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->pic_id);
  }
  pic_id = v13->pic_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->pic_id, v5);
  }
  this->pic_id = pic_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->drop_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->drop_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->drop_prob);
  }
  drop_prob = v13->drop_prob;
  v12 = *(_BYTE *)(((unsigned __int64)&this->drop_prob >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->drop_prob, v10);
  }
  this->drop_prob = drop_prob;
};

// Line 110: range 0000000013425D66-0000000013425D90
void __cdecl data::BlessingScanDropExcelConfig::~BlessingScanDropExcelConfig(
        data::BlessingScanDropExcelConfig *const this)
{
  data::BlessingScanDropExcelConfig::~BlessingScanDropExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 110: range 0000000013425D24-0000000013425D65
void __cdecl data::BlessingScanDropExcelConfig::~BlessingScanDropExcelConfig(
        data::BlessingScanDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlessingScanDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlessingScanDropExcelConfig = v2;
};
