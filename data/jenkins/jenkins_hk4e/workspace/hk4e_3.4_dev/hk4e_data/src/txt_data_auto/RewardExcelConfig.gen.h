// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/RewardExcelConfig.gen.h

// Line 17: range 000000000CE0B308-000000000CE0B451
void __cdecl data::RewardItemConfig::RewardItemConfig(data::RewardItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RewardItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RewardItemConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_count, v3);
  }
  this->item_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->promote_level, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->promote_level = 0;
};

// Line 20: range 000000000D492880-000000000D4928C1
void __cdecl data::RewardItemConfig::~RewardItemConfig(data::RewardItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RewardItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RewardItemConfig = v2;
};

// Line 20: range 000000000D4928C2-000000000D4928EC
void __cdecl data::RewardItemConfig::~RewardItemConfig(data::RewardItemConfig *const this)
{
  data::RewardItemConfig::~RewardItemConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 32: range 000000001478A6D6-000000001478A96F
void __cdecl data::RewardExcelConfig::RewardExcelConfig(data::RewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::OutputControlConfig::OutputControlConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::RewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v1);
  }
  this->reward_id = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hcoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hcoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hcoin, v3);
  }
  this->hcoin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scoin, v3);
  }
  this->scoin = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_exp, v4);
  }
  this->player_exp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_exp, v4);
  }
  this->avatar_exp = 0;
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fetter_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fetter_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fetter_exp, v5);
  }
  this->fetter_exp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->resin, v5);
  }
  this->resin = 0;
  std::vector<data::RewardItemConfig>::vector(&this->reward_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type, v5);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  std::string::basic_string(&this->daily_output_limit_str);
  std::string::basic_string(&this->total_output_limit_str);
  std::string::basic_string(&this->activity_output_limit_str);
};

// Line 32: range 0000000014D7300C-0000000014D73516
void __cdecl data::RewardExcelConfig::RewardExcelConfig(
        data::RewardExcelConfig *const this,
        const data::RewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t reward_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t hcoin; // ecx
  char v7; // dl
  uint32_t scoin; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t player_exp; // ecx
  char v12; // dl
  uint32_t avatar_exp; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t fetter_exp; // ecx
  char v17; // dl
  uint32_t resin; // ecx
  char v19; // al
  std::vector<data::RewardItemConfig> *p_reward_item_list; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v22; // al
  const data::RewardExcelConfig *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  data::OutputControlConfig::OutputControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::RewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OutputControlConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_id);
  }
  reward_id = a2->reward_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->reward_id, a2);
  }
  this->reward_id = reward_id;
  v5 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->hcoin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->hcoin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->hcoin);
  }
  hcoin = v23->hcoin;
  v7 = *(_BYTE *)(((unsigned __int64)&this->hcoin >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->hcoin, v5);
  }
  this->hcoin = hcoin;
  if ( *(_BYTE *)(((unsigned __int64)&v23->scoin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->scoin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->scoin);
  }
  scoin = v23->scoin;
  v9 = *(_BYTE *)(((unsigned __int64)&this->scoin >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->scoin, v5);
  }
  this->scoin = scoin;
  v10 = (((_BYTE)v23 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->player_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->player_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->player_exp);
  }
  player_exp = v23->player_exp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->player_exp >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->player_exp, v10);
  }
  this->player_exp = player_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v23->avatar_exp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->avatar_exp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->avatar_exp);
  }
  avatar_exp = v23->avatar_exp;
  v14 = *(_BYTE *)(((unsigned __int64)&this->avatar_exp >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->avatar_exp, v10);
  }
  this->avatar_exp = avatar_exp;
  v15 = (((_BYTE)v23 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->fetter_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->fetter_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->fetter_exp);
  }
  fetter_exp = v23->fetter_exp;
  v17 = *(_BYTE *)(((unsigned __int64)&this->fetter_exp >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->fetter_exp, v15);
  }
  this->fetter_exp = fetter_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v23->resin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->resin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->resin);
  }
  resin = v23->resin;
  v19 = *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->resin, v15);
  }
  this->resin = resin;
  p_reward_item_list = &v23->reward_item_list;
  std::vector<data::RewardItemConfig>::vector(&this->reward_item_list, &v23->reward_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&v23->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->item_limit_type);
  }
  item_limit_type = v23->item_limit_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_reward_item_list) = v22 != 0;
    __asan_report_store4(&this->item_limit_type, p_reward_item_list);
  }
  this->item_limit_type = item_limit_type;
  std::string::basic_string(&this->daily_output_limit_str, &v23->daily_output_limit_str);
  std::string::basic_string(&this->total_output_limit_str, &v23->total_output_limit_str);
  std::string::basic_string(&this->activity_output_limit_str, &v23->activity_output_limit_str);
};

// Line 36: range 0000000014DEB350-0000000014DEB3E1
void __cdecl data::RewardExcelConfig::~RewardExcelConfig(data::RewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  std::string::~string(&this->activity_output_limit_str);
  std::string::~string(&this->total_output_limit_str);
  std::string::~string(&this->daily_output_limit_str);
  std::vector<data::RewardItemConfig>::~vector(&this->reward_item_list);
  data::OutputControlConfig::~OutputControlConfig(this);
};

// Line 36: range 0000000014DEB3E2-0000000014DEB40C
void __cdecl data::RewardExcelConfig::~RewardExcelConfig(data::RewardExcelConfig *const this)
{
  data::RewardExcelConfig::~RewardExcelConfig(this);
  operator delete(this, 0xD8uLL);
};

// Line 75: range 000000000D01F1C8-000000000D01F401
void __cdecl data::RewardItemConfig::RewardItemConfig(
        data::RewardItemConfig *const this,
        const data::RewardItemConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_count; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t promote_level; // ecx
  char v12; // dl
  const data::RewardItemConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RewardItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RewardItemConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->item_count);
  }
  item_count = v13->item_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_count, v5);
  }
  this->item_count = item_count;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level);
  }
  level = v13->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->promote_level);
  }
  promote_level = v13->promote_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->promote_level, v10);
  }
  this->promote_level = promote_level;
};

// Line 1260: range 000000000CE4F14E-000000000CE4F357
data::RewardItemConfig *__cdecl data::RewardItemConfig::operator=(
        data::RewardItemConfig *const this,
        const data::RewardItemConfig *a2)
{
  uint32_t item_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t item_count; // ecx
  char v6; // dl
  uint32_t level; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t promote_level; // ecx
  char v11; // dl
  const data::RewardItemConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
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
  v4 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->item_count);
  }
  item_count = v13->item_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->item_count, v4);
  }
  this->item_count = item_count;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level);
  }
  level = v13->level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  v9 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->promote_level);
  }
  promote_level = v13->promote_level;
  v11 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->promote_level, v9);
  }
  this->promote_level = promote_level;
  return this;
};
