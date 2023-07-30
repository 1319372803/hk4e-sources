// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ExpeditionDataExcelConfig.gen.h

// Line 41: range 0000000014C75900-0000000014C75A03
void __cdecl data::ExpeditionOpenCondition::ExpeditionOpenCondition(data::ExpeditionOpenCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionOpenCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionOpenCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = EXP_OPEN_COND_LEVEL;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->para >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->para >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->para, v3);
  }
  this->para = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->para2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->para2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->para2, v3);
  }
  this->para2 = 0;
};

// Line 41: range 0000000014DB8004-0000000014DB81B8
void __cdecl data::ExpeditionOpenCondition::ExpeditionOpenCondition(
        data::ExpeditionOpenCondition *const this,
        const data::ExpeditionOpenCondition *a2)
{
  int (**v2)(...); // rdx
  data::ExpeditionOpenCondType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t para; // ecx
  char v7; // dl
  uint32_t para2; // ecx
  char v9; // al
  const data::ExpeditionOpenCondition *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionOpenCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionOpenCondition = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->para >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->para >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->para);
  }
  para = v10->para;
  v7 = *(_BYTE *)(((unsigned __int64)&this->para >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->para, v5);
  }
  this->para = para;
  if ( *(_BYTE *)(((unsigned __int64)&v10->para2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->para2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->para2);
  }
  para2 = v10->para2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->para2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->para2, v5);
  }
  this->para2 = para2;
};

// Line 44: range 0000000014B9D7C8-0000000014B9D809
void __cdecl data::ExpeditionOpenCondition::~ExpeditionOpenCondition(data::ExpeditionOpenCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionOpenCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionOpenCondition = v2;
};

// Line 44: range 0000000014B9D80A-0000000014B9D834
void __cdecl data::ExpeditionOpenCondition::~ExpeditionOpenCondition(data::ExpeditionOpenCondition *const this)
{
  data::ExpeditionOpenCondition::~ExpeditionOpenCondition(this);
  operator delete(this, 0x18uLL);
};

// Line 55: range 0000000014C75B98-0000000014C75C5D
void __cdecl data::ExpeditionReward::ExpeditionReward(data::ExpeditionReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->htime >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->htime >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->htime, v1);
  }
  this->htime = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_drop_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->reward_drop_id = 0;
};

// Line 55: range 0000000014DB8278-0000000014DB83B7
void __cdecl data::ExpeditionReward::ExpeditionReward(
        data::ExpeditionReward *const this,
        const data::ExpeditionReward *a2)
{
  int (**v2)(...); // rdx
  uint32_t htime; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_drop_id; // ecx
  char v7; // dl
  const data::ExpeditionReward *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->htime >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->htime >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->htime);
  }
  htime = a2->htime;
  v4 = *(_BYTE *)(((unsigned __int64)&this->htime >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->htime, a2);
  }
  this->htime = htime;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->reward_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->reward_drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->reward_drop_id);
  }
  reward_drop_id = v8->reward_drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_drop_id, v5);
  }
  this->reward_drop_id = reward_drop_id;
};

// Line 58: range 0000000014B9D8A6-0000000014B9D8E7
void __cdecl data::ExpeditionReward::~ExpeditionReward(data::ExpeditionReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionReward = v2;
};

// Line 58: range 0000000014B9D8E8-0000000014B9D912
void __cdecl data::ExpeditionReward::~ExpeditionReward(data::ExpeditionReward *const this)
{
  data::ExpeditionReward::~ExpeditionReward(this);
  operator delete(this, 0x10uLL);
};

// Line 68: range 0000000014740FF8-00000000147410DD
void __cdecl data::ExpeditionDataExcelConfig::ExpeditionDataExcelConfig(data::ExpeditionDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->city_id = 0;
  std::vector<data::ExpeditionOpenCondition>::vector(&this->open_condition_vec);
  std::vector<data::ExpeditionReward>::vector(&this->time_reward_vec);
};

// Line 68: range 0000000014D16DC2-0000000014D16F5E
void __cdecl data::ExpeditionDataExcelConfig::ExpeditionDataExcelConfig(
        data::ExpeditionDataExcelConfig *const this,
        const data::ExpeditionDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  const data::ExpeditionDataExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->city_id);
  }
  city_id = v8->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  std::vector<data::ExpeditionOpenCondition>::vector(&this->open_condition_vec, &v8->open_condition_vec);
  std::vector<data::ExpeditionReward>::vector(&this->time_reward_vec, &v8->time_reward_vec);
};

// Line 71: range 0000000014DEAD8C-0000000014DEADED
void __cdecl data::ExpeditionDataExcelConfig::~ExpeditionDataExcelConfig(data::ExpeditionDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionDataExcelConfig = v2;
  std::vector<data::ExpeditionReward>::~vector(&this->time_reward_vec);
  std::vector<data::ExpeditionOpenCondition>::~vector(&this->open_condition_vec);
};

// Line 71: range 0000000014DEADEE-0000000014DEAE18
void __cdecl data::ExpeditionDataExcelConfig::~ExpeditionDataExcelConfig(data::ExpeditionDataExcelConfig *const this)
{
  data::ExpeditionDataExcelConfig::~ExpeditionDataExcelConfig(this);
  operator delete(this, 0x40uLL);
};
