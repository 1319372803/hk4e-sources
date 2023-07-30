// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/RandTaskExcelConfig.gen.h

// Line 41: range 0000000014D68F3E-0000000014D690F2
void __cdecl data::RandTaskExcelConfig::RandTaskExcelConfig(
        data::RandTaskExcelConfig *const this,
        const data::RandTaskExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RandTaskContentType content_type; // ecx
  char v7; // dl
  uint32_t reward; // ecx
  char v9; // al
  const data::RandTaskExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandTaskExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->content_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->content_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->content_type);
  }
  content_type = v10->content_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->content_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->content_type, v5);
  }
  this->content_type = content_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward);
  }
  reward = v10->reward;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward, v5);
  }
  this->reward = reward;
};

// Line 44: range 0000000014DEB238-0000000014DEB262
void __cdecl data::RandTaskExcelConfig::~RandTaskExcelConfig(data::RandTaskExcelConfig *const this)
{
  data::RandTaskExcelConfig::~RandTaskExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 44: range 0000000014DEB1F6-0000000014DEB237
void __cdecl data::RandTaskExcelConfig::~RandTaskExcelConfig(data::RandTaskExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandTaskExcelConfig = v2;
};

// Line 57: range 0000000014CF3D68-0000000014CF3DE7
void __cdecl data::RandTaskDropConfig::RandTaskDropConfig(data::RandTaskDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandTaskDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandTaskDropConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
};

// Line 57: range 0000000014DD29BE-0000000014DD2A78
void __cdecl data::RandTaskDropConfig::RandTaskDropConfig(
        data::RandTaskDropConfig *const this,
        const data::RandTaskDropConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t drop_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::RandTaskDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandTaskDropConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->drop_id);
  }
  drop_id = a2->drop_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->drop_id, a2);
  }
  this->drop_id = drop_id;
};

// Line 60: range 0000000014C425FE-0000000014C4263F
void __cdecl data::RandTaskDropConfig::~RandTaskDropConfig(data::RandTaskDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandTaskDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandTaskDropConfig = v2;
};

// Line 60: range 0000000014C42640-0000000014C4266A
void __cdecl data::RandTaskDropConfig::~RandTaskDropConfig(data::RandTaskDropConfig *const this)
{
  data::RandTaskDropConfig::~RandTaskDropConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 69: range 0000000014781918-00000000147819A7
void __cdecl data::RandTaskRewardConfig::RandTaskRewardConfig(data::RandTaskRewardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandTaskRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandTaskRewardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::RandTaskDropConfig>::vector(&this->drop_vec);
};

// Line 69: range 0000000014D69234-0000000014D69309
void __cdecl data::RandTaskRewardConfig::RandTaskRewardConfig(
        data::RandTaskRewardConfig *const this,
        const data::RandTaskRewardConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::RandTaskRewardConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandTaskRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandTaskRewardConfig = v2;
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
  std::vector<data::RandTaskDropConfig>::vector(&this->drop_vec, &v5->drop_vec);
};

// Line 72: range 0000000014DEB178-0000000014DEB1C9
void __cdecl data::RandTaskRewardConfig::~RandTaskRewardConfig(data::RandTaskRewardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandTaskRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandTaskRewardConfig = v2;
  std::vector<data::RandTaskDropConfig>::~vector(&this->drop_vec);
};

// Line 72: range 0000000014DEB1CA-0000000014DEB1F4
void __cdecl data::RandTaskRewardConfig::~RandTaskRewardConfig(data::RandTaskRewardConfig *const this)
{
  data::RandTaskRewardConfig::~RandTaskRewardConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 84: range 0000000014B33C5C-0000000014B33E65
data::RandTaskLevelConfig *__cdecl data::RandTaskLevelConfig::operator=(
        data::RandTaskLevelConfig *const this,
        const data::RandTaskLevelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t min_zone_level; // ecx
  char v6; // dl
  uint32_t max_zone_level; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t revise_level; // ecx
  char v11; // dl
  const data::RandTaskLevelConfig *v13; // [rsp+0h] [rbp-10h]

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
  if ( *(_BYTE *)(((unsigned __int64)&v13->min_zone_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->min_zone_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->min_zone_level);
  }
  min_zone_level = v13->min_zone_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->min_zone_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->min_zone_level, v4);
  }
  this->min_zone_level = min_zone_level;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_zone_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->max_zone_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->max_zone_level);
  }
  max_zone_level = v13->max_zone_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->max_zone_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->max_zone_level, v4);
  }
  this->max_zone_level = max_zone_level;
  v9 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->revise_level);
  }
  revise_level = v13->revise_level;
  v11 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->revise_level, v9);
  }
  this->revise_level = revise_level;
  return this;
};

// Line 84: range 0000000014A15B44-0000000014A15D7D
void __cdecl data::RandTaskLevelConfig::RandTaskLevelConfig(
        data::RandTaskLevelConfig *const this,
        const data::RandTaskLevelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t min_zone_level; // ecx
  char v7; // dl
  uint32_t max_zone_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t revise_level; // ecx
  char v12; // dl
  const data::RandTaskLevelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandTaskLevelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandTaskLevelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->min_zone_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->min_zone_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->min_zone_level);
  }
  min_zone_level = v13->min_zone_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_zone_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->min_zone_level, v5);
  }
  this->min_zone_level = min_zone_level;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_zone_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->max_zone_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->max_zone_level);
  }
  max_zone_level = v13->max_zone_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_zone_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_zone_level, v5);
  }
  this->max_zone_level = max_zone_level;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->revise_level);
  }
  revise_level = v13->revise_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->revise_level, v10);
  }
  this->revise_level = revise_level;
};

// Line 87: range 0000000014DEB10A-0000000014DEB14B
void __cdecl data::RandTaskLevelConfig::~RandTaskLevelConfig(data::RandTaskLevelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandTaskLevelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandTaskLevelConfig = v2;
};

// Line 87: range 0000000014DEB14C-0000000014DEB176
void __cdecl data::RandTaskLevelConfig::~RandTaskLevelConfig(data::RandTaskLevelConfig *const this)
{
  data::RandTaskLevelConfig::~RandTaskLevelConfig(this);
  operator delete(this, 0x18uLL);
};
