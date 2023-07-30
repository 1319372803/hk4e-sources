// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/PlayerExcelConfig.gen.h

// Line 17: range 0000000014D67FF2-0000000014D682FA
void __cdecl data::PlayerLevelExcelConfig::PlayerLevelExcelConfig(
        data::PlayerLevelExcelConfig *const this,
        const data::PlayerLevelExcelConfig *a2)
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
  __int64 v11; // rsi
  uint32_t expedition_limit_add; // ecx
  char v13; // dl
  uint32_t unlock_world_level; // ecx
  char v15; // al
  const data::PlayerLevelExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PlayerLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->exp);
  }
  exp = v16->exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->exp, v5);
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&v16->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v16->total_exp);
  total_exp = v16->total_exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->total_exp, v5);
  this->total_exp = total_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->reward_id);
  }
  reward_id = v16->reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  v11 = (((_BYTE)v16 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->expedition_limit_add >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->expedition_limit_add >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->expedition_limit_add);
  }
  expedition_limit_add = v16->expedition_limit_add;
  v13 = *(_BYTE *)(((unsigned __int64)&this->expedition_limit_add >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->expedition_limit_add, v11);
  }
  this->expedition_limit_add = expedition_limit_add;
  if ( *(_BYTE *)(((unsigned __int64)&v16->unlock_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->unlock_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->unlock_world_level);
  }
  unlock_world_level = v16->unlock_world_level;
  v15 = *(_BYTE *)(((unsigned __int64)&this->unlock_world_level >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->unlock_world_level, v11);
  }
  this->unlock_world_level = unlock_world_level;
};

// Line 20: range 0000000014DEB4FA-0000000014DEB53B
void __cdecl data::PlayerLevelExcelConfig::~PlayerLevelExcelConfig(data::PlayerLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PlayerLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerLevelExcelConfig = v2;
};

// Line 20: range 0000000014DEB53C-0000000014DEB566
void __cdecl data::PlayerLevelExcelConfig::~PlayerLevelExcelConfig(data::PlayerLevelExcelConfig *const this)
{
  data::PlayerLevelExcelConfig::~PlayerLevelExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 36: range 0000000014D6843C-0000000014D68675
void __cdecl data::PlayerLevelLockExcelConfig::PlayerLevelLockExcelConfig(
        data::PlayerLevelLockExcelConfig *const this,
        const data::PlayerLevelLockExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t world_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t unlock_main_quest_id; // ecx
  char v7; // dl
  uint32_t unlock_player_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t player_level_upper_limit; // ecx
  char v12; // dl
  const data::PlayerLevelLockExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PlayerLevelLockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerLevelLockExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->world_level);
  }
  world_level = a2->world_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->world_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->world_level, a2);
  }
  this->world_level = world_level;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->unlock_main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->unlock_main_quest_id);
  }
  unlock_main_quest_id = v13->unlock_main_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_main_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_main_quest_id, v5);
  }
  this->unlock_main_quest_id = unlock_main_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->unlock_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->unlock_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->unlock_player_level);
  }
  unlock_player_level = v13->unlock_player_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_player_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_player_level, v5);
  }
  this->unlock_player_level = unlock_player_level;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->player_level_upper_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->player_level_upper_limit >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->player_level_upper_limit);
  }
  player_level_upper_limit = v13->player_level_upper_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->player_level_upper_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->player_level_upper_limit, v10);
  }
  this->player_level_upper_limit = player_level_upper_limit;
};

// Line 39: range 0000000014DEB48C-0000000014DEB4CD
void __cdecl data::PlayerLevelLockExcelConfig::~PlayerLevelLockExcelConfig(
        data::PlayerLevelLockExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PlayerLevelLockExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerLevelLockExcelConfig = v2;
};

// Line 39: range 0000000014DEB4CE-0000000014DEB4F8
void __cdecl data::PlayerLevelLockExcelConfig::~PlayerLevelLockExcelConfig(
        data::PlayerLevelLockExcelConfig *const this)
{
  data::PlayerLevelLockExcelConfig::~PlayerLevelLockExcelConfig(this);
  operator delete(this, 0x18uLL);
};
