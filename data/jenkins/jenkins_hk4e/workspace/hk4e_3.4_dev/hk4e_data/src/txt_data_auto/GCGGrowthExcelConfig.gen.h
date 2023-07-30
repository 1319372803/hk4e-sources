// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GCGGrowthExcelConfig.gen.h

// Line 45: range 0000000014D22806-0000000014D22A14
void __cdecl data::GCGLevelExcelConfig::GCGLevelExcelConfig(
        data::GCGLevelExcelConfig *const this,
        const data::GCGLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exp; // ecx
  char v7; // dl
  uint64_t total_exp; // rdx
  uint32_t reward_id; // ecx
  char v10; // al
  const data::GCGLevelExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->exp);
  }
  exp = v11->exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->exp, v5);
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&v11->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v11->total_exp);
  total_exp = v11->total_exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->total_exp, v5);
  this->total_exp = total_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v11->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->reward_id);
  }
  reward_id = v11->reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 48: range 0000000014DE780A-0000000014DE784B
void __cdecl data::GCGLevelExcelConfig::~GCGLevelExcelConfig(data::GCGLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGLevelExcelConfig = v2;
};

// Line 48: range 0000000014DE784C-0000000014DE7876
void __cdecl data::GCGLevelExcelConfig::~GCGLevelExcelConfig(data::GCGLevelExcelConfig *const this)
{
  data::GCGLevelExcelConfig::~GCGLevelExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 62: range 000000001474920E-0000000014749331
void __cdecl data::GCGLevelLockExcelConfig::GCGLevelLockExcelConfig(data::GCGLevelLockExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGLevelLockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGLevelLockExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_level, v1);
  }
  this->unlock_level = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_main_quest_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_main_quest_id, v3);
  }
  this->unlock_main_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v3);
  }
  this->level_id = 0;
  std::string::basic_string(&this->quest_title);
  std::string::basic_string(&this->quest_desc);
};

// Line 62: range 0000000014D22B56-0000000014D22D67
void __cdecl data::GCGLevelLockExcelConfig::GCGLevelLockExcelConfig(
        data::GCGLevelLockExcelConfig *const this,
        const data::GCGLevelLockExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t unlock_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t unlock_main_quest_id; // ecx
  char v7; // dl
  uint32_t level_id; // ecx
  char v9; // al
  const data::GCGLevelLockExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGLevelLockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGLevelLockExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->unlock_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->unlock_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->unlock_level);
  }
  unlock_level = a2->unlock_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->unlock_level, a2);
  }
  this->unlock_level = unlock_level;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->unlock_main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->unlock_main_quest_id);
  }
  unlock_main_quest_id = v10->unlock_main_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_main_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_main_quest_id, v5);
  }
  this->unlock_main_quest_id = unlock_main_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->level_id);
  }
  level_id = v10->level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_id, v5);
  }
  this->level_id = level_id;
  std::string::basic_string(&this->quest_title, &v10->quest_title);
  std::string::basic_string(&this->quest_desc, &v10->quest_desc);
};

// Line 65: range 0000000014DE777C-0000000014DE77DD
void __cdecl data::GCGLevelLockExcelConfig::~GCGLevelLockExcelConfig(data::GCGLevelLockExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGLevelLockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGLevelLockExcelConfig = v2;
  std::string::~string(&this->quest_desc);
  std::string::~string(&this->quest_title);
};

// Line 65: range 0000000014DE77DE-0000000014DE7808
void __cdecl data::GCGLevelLockExcelConfig::~GCGLevelLockExcelConfig(data::GCGLevelLockExcelConfig *const this)
{
  data::GCGLevelLockExcelConfig::~GCGLevelLockExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 80: range 0000000014749332-000000001474938F
void __cdecl data::GCGShopTabExcelConfig::GCGShopTabExcelConfig(data::GCGShopTabExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ShopmallEntranceExcelConfig::ShopmallEntranceExcelConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGShopTabExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallEntranceExcelConfig = v2;
  std::string::basic_string(&this->lock_tip);
};

// Line 80: range 000000001495E9EC-000000001495EA82
void __cdecl data::GCGShopTabExcelConfig::GCGShopTabExcelConfig(
        data::GCGShopTabExcelConfig *const this,
        const data::GCGShopTabExcelConfig *a2)
{
  int (**v2)(...); // rdx

  data::ShopmallEntranceExcelConfig::ShopmallEntranceExcelConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGShopTabExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShopmallEntranceExcelConfig = v2;
  std::string::basic_string(&this->lock_tip, &a2->lock_tip);
};

// Line 84: range 0000000014DE76F2-0000000014DE774F
void __cdecl data::GCGShopTabExcelConfig::~GCGShopTabExcelConfig(data::GCGShopTabExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGShopTabExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShopmallEntranceExcelConfig = v2;
  std::string::~string(&this->lock_tip);
  data::ShopmallEntranceExcelConfig::~ShopmallEntranceExcelConfig(this);
};

// Line 84: range 0000000014DE7750-0000000014DE777A
void __cdecl data::GCGShopTabExcelConfig::~GCGShopTabExcelConfig(data::GCGShopTabExcelConfig *const this)
{
  data::GCGShopTabExcelConfig::~GCGShopTabExcelConfig(this);
  operator delete(this, 0x58uLL);
};
