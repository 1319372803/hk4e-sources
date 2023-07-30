// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ReputationExcelConfig.gen.h

// Line 68: range 0000000014B3C574-0000000014B3C971
data::ReputationLevelExcelConfig *__cdecl data::ReputationLevelExcelConfig::operator=(
        data::ReputationLevelExcelConfig *const this,
        const data::ReputationLevelExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t level; // ecx
  char v6; // dl
  uint32_t city_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t next_level_exp; // ecx
  char v11; // dl
  uint32_t reward_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t request_group_id; // ecx
  char v16; // dl
  uint32_t request_num; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t request_accept_num; // ecx
  char v21; // dl
  const data::ReputationLevelExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
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
  v4 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->level);
  }
  level = v23->level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v23->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->city_id);
  }
  city_id = v23->city_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->city_id, v4);
  }
  this->city_id = city_id;
  v9 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->next_level_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->next_level_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->next_level_exp);
  }
  next_level_exp = v23->next_level_exp;
  v11 = *(_BYTE *)(((unsigned __int64)&this->next_level_exp >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->next_level_exp, v9);
  }
  this->next_level_exp = next_level_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v23->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->reward_id);
  }
  reward_id = v23->reward_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->reward_id, v9);
  }
  this->reward_id = reward_id;
  v14 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->request_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->request_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->request_group_id);
  }
  request_group_id = v23->request_group_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->request_group_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->request_group_id, v14);
  }
  this->request_group_id = request_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->request_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->request_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->request_num);
  }
  request_num = v23->request_num;
  v18 = *(_BYTE *)(((unsigned __int64)&this->request_num >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store4(&this->request_num, v14);
  }
  this->request_num = request_num;
  v19 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->request_accept_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->request_accept_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->request_accept_num);
  }
  request_accept_num = v23->request_accept_num;
  v21 = *(_BYTE *)(((unsigned __int64)&this->request_accept_num >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->request_accept_num, v19);
  }
  this->request_accept_num = request_accept_num;
  return this;
};

// Line 68: range 00000000149FE06E-00000000149FE49B
void __cdecl data::ReputationLevelExcelConfig::ReputationLevelExcelConfig(
        data::ReputationLevelExcelConfig *const this,
        const data::ReputationLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level; // ecx
  char v7; // dl
  uint32_t city_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t next_level_exp; // ecx
  char v12; // dl
  uint32_t reward_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t request_group_id; // ecx
  char v17; // dl
  uint32_t request_num; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t request_accept_num; // ecx
  char v22; // dl
  const data::ReputationLevelExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->level);
  }
  level = v23->level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v23->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->city_id);
  }
  city_id = v23->city_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->next_level_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->next_level_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->next_level_exp);
  }
  next_level_exp = v23->next_level_exp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->next_level_exp >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->next_level_exp, v10);
  }
  this->next_level_exp = next_level_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v23->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->reward_id);
  }
  reward_id = v23->reward_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->request_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->request_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->request_group_id);
  }
  request_group_id = v23->request_group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->request_group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->request_group_id, v15);
  }
  this->request_group_id = request_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->request_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->request_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->request_num);
  }
  request_num = v23->request_num;
  v19 = *(_BYTE *)(((unsigned __int64)&this->request_num >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->request_num, v15);
  }
  this->request_num = request_num;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->request_accept_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->request_accept_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->request_accept_num);
  }
  request_accept_num = v23->request_accept_num;
  v22 = *(_BYTE *)(((unsigned __int64)&this->request_accept_num >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->request_accept_num, v20);
  }
  this->request_accept_num = request_accept_num;
};

// Line 71: range 0000000014DE953C-0000000014DE957D
void __cdecl data::ReputationLevelExcelConfig::~ReputationLevelExcelConfig(
        data::ReputationLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationLevelExcelConfig = v2;
};

// Line 71: range 0000000014DE957E-0000000014DE95A8
void __cdecl data::ReputationLevelExcelConfig::~ReputationLevelExcelConfig(
        data::ReputationLevelExcelConfig *const this)
{
  data::ReputationLevelExcelConfig::~ReputationLevelExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 89: range 000000001480DF3E-000000001480E0C2
data::ReputationEntranceCond *__cdecl data::ReputationEntranceCond::operator=(
        data::ReputationEntranceCond *const this,
        const data::ReputationEntranceCond *a2)
{
  data::ReputationEntranceCondType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t param1; // ecx
  char v6; // dl
  uint32_t param2; // ecx
  char v8; // al
  const data::ReputationEntranceCond *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
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
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->param1);
  }
  param1 = v10->param1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->param1, v4);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->param2);
  }
  param2 = v10->param2;
  v8 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->param2, v4);
  }
  this->param2 = param2;
  return this;
};

// Line 89: range 0000000014CFEC8C-0000000014CFED8F
void __cdecl data::ReputationEntranceCond::ReputationEntranceCond(data::ReputationEntranceCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReputationEntranceCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationEntranceCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = REPUTATION_ENTRANCE_COND_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param1, v3);
  }
  this->param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param2, v3);
  }
  this->param2 = 0;
};

// Line 89: range 0000000014C33C5C-0000000014C33E10
void __cdecl data::ReputationEntranceCond::ReputationEntranceCond(
        data::ReputationEntranceCond *const this,
        const data::ReputationEntranceCond *a2)
{
  int (**v2)(...); // rdx
  data::ReputationEntranceCondType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param1; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  const data::ReputationEntranceCond *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationEntranceCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationEntranceCond = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->param1);
  }
  param1 = v10->param1;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->param1, v5);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->param2);
  }
  param2 = v10->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->param2, v5);
  }
  this->param2 = param2;
};

// Line 92: range 0000000014C3392E-0000000014C3396F
void __cdecl data::ReputationEntranceCond::~ReputationEntranceCond(data::ReputationEntranceCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationEntranceCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationEntranceCond = v2;
};

// Line 92: range 0000000014C33970-0000000014C3399A
void __cdecl data::ReputationEntranceCond::~ReputationEntranceCond(data::ReputationEntranceCond *const this)
{
  data::ReputationEntranceCond::~ReputationEntranceCond(this);
  operator delete(this, 0x18uLL);
};

// Line 103: range 000000001477D480-000000001477D61F
data::ReputationEntranceExcelConfig *__cdecl data::ReputationEntranceExcelConfig::operator=(
        data::ReputationEntranceExcelConfig *const this,
        const data::ReputationEntranceExcelConfig *a2)
{
  data::ReputationEntranceType entrance_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t city_id; // ecx
  char v6; // dl
  data::LogicType cond_comb; // ecx
  char v8; // al
  const data::ReputationEntranceExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entrance_id);
  }
  entrance_id = a2->entrance_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->entrance_id, a2);
  }
  this->entrance_id = entrance_id;
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->city_id);
  }
  city_id = v10->city_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->city_id, v4);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->cond_comb);
  }
  cond_comb = v10->cond_comb;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->cond_comb, v4);
  }
  this->cond_comb = cond_comb;
  std::vector<data::ReputationEntranceCond>::operator=(&this->cond_vec, &v10->cond_vec);
  return this;
};

// Line 103: range 0000000014786EFC-000000001478700F
void __cdecl data::ReputationEntranceExcelConfig::ReputationEntranceExcelConfig(
        data::ReputationEntranceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReputationEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationEntranceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entrance_id, v1);
  }
  this->entrance_id = REPUTATION_ENTRANCE_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v3);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::ReputationEntranceCond>::vector(&this->cond_vec);
};

// Line 103: range 0000000014A223F0-0000000014A225BF
void __cdecl data::ReputationEntranceExcelConfig::ReputationEntranceExcelConfig(
        data::ReputationEntranceExcelConfig *const this,
        const data::ReputationEntranceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ReputationEntranceType entrance_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  data::LogicType cond_comb; // ecx
  char v9; // al
  const data::ReputationEntranceExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationEntranceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entrance_id);
  }
  entrance_id = a2->entrance_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->entrance_id, a2);
  }
  this->entrance_id = entrance_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->city_id);
  }
  city_id = v10->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->cond_comb);
  }
  cond_comb = v10->cond_comb;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->cond_comb, v5);
  }
  this->cond_comb = cond_comb;
  std::vector<data::ReputationEntranceCond>::vector(&this->cond_vec, &v10->cond_vec);
};

// Line 106: range 0000000014DE94BE-0000000014DE950F
void __cdecl data::ReputationEntranceExcelConfig::~ReputationEntranceExcelConfig(
        data::ReputationEntranceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationEntranceExcelConfig = v2;
  std::vector<data::ReputationEntranceCond>::~vector(&this->cond_vec);
};

// Line 106: range 0000000014DE9510-0000000014DE953A
void __cdecl data::ReputationEntranceExcelConfig::~ReputationEntranceExcelConfig(
        data::ReputationEntranceExcelConfig *const this)
{
  data::ReputationEntranceExcelConfig::~ReputationEntranceExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 120: range 0000000014A22B22-0000000014A22CD6
void __cdecl data::ReputationQuestExcelConfig::ReputationQuestExcelConfig(
        data::ReputationQuestExcelConfig *const this,
        const data::ReputationQuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t parent_quest_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  const data::ReputationQuestExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationQuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->parent_quest_id);
  }
  parent_quest_id = a2->parent_quest_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->parent_quest_id, a2);
  }
  this->parent_quest_id = parent_quest_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->city_id);
  }
  city_id = v10->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 123: range 0000000014DE9450-0000000014DE9491
void __cdecl data::ReputationQuestExcelConfig::~ReputationQuestExcelConfig(
        data::ReputationQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationQuestExcelConfig = v2;
};

// Line 123: range 0000000014DE9492-0000000014DE94BC
void __cdecl data::ReputationQuestExcelConfig::~ReputationQuestExcelConfig(
        data::ReputationQuestExcelConfig *const this)
{
  data::ReputationQuestExcelConfig::~ReputationQuestExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 136: range 0000000014D6F5DE-0000000014D6F911
void __cdecl data::ReputationRequestExcelConfig::ReputationRequestExcelConfig(
        data::ReputationRequestExcelConfig *const this,
        const data::ReputationRequestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t request_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weight; // ecx
  char v12; // dl
  uint32_t npc_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t reward_id; // ecx
  char v17; // dl
  const data::ReputationRequestExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationRequestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationRequestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->request_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->request_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->request_id);
  }
  request_id = a2->request_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->request_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->request_id, a2);
  }
  this->request_id = request_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->quest_id);
  }
  quest_id = v18->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->group_id);
  }
  group_id = v18->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->weight);
  }
  weight = v18->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v18->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->npc_id);
  }
  npc_id = v18->npc_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->npc_id, v10);
  }
  this->npc_id = npc_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reward_id);
  }
  reward_id = v18->reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reward_id, v15);
  }
  this->reward_id = reward_id;
};

// Line 139: range 0000000014DE93E2-0000000014DE9423
void __cdecl data::ReputationRequestExcelConfig::~ReputationRequestExcelConfig(
        data::ReputationRequestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationRequestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationRequestExcelConfig = v2;
};

// Line 139: range 0000000014DE9424-0000000014DE944E
void __cdecl data::ReputationRequestExcelConfig::~ReputationRequestExcelConfig(
        data::ReputationRequestExcelConfig *const this)
{
  data::ReputationRequestExcelConfig::~ReputationRequestExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 155: range 0000000014A235D2-0000000014A2380B
void __cdecl data::ReputationExploreExcelConfig::ReputationExploreExcelConfig(
        data::ReputationExploreExcelConfig *const this,
        const data::ReputationExploreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t explore_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  uint32_t explore_progress; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_id; // ecx
  char v12; // dl
  const data::ReputationExploreExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationExploreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->explore_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->explore_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->explore_id);
  }
  explore_id = a2->explore_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->explore_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->explore_id, a2);
  }
  this->explore_id = explore_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->city_id);
  }
  city_id = v13->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->explore_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->explore_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->explore_progress);
  }
  explore_progress = v13->explore_progress;
  v9 = *(_BYTE *)(((unsigned __int64)&this->explore_progress >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->explore_progress, v5);
  }
  this->explore_progress = explore_progress;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
};

// Line 158: range 0000000014DE9374-0000000014DE93B5
void __cdecl data::ReputationExploreExcelConfig::~ReputationExploreExcelConfig(
        data::ReputationExploreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationExploreExcelConfig = v2;
};

// Line 158: range 0000000014DE93B6-0000000014DE93E0
void __cdecl data::ReputationExploreExcelConfig::~ReputationExploreExcelConfig(
        data::ReputationExploreExcelConfig *const this)
{
  data::ReputationExploreExcelConfig::~ReputationExploreExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 172: range 0000000014787010-000000001478715E
void __cdecl data::ReputationCityExcelConfig::ReputationCityExcelConfig(data::ReputationCityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ReputationCityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationCityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
  std::vector<unsigned int>::vector(&this->explore_area_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->virtual_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->virtual_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->virtual_item_id, v1);
  }
  this->virtual_item_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_state, v3);
  }
  this->open_state = OPEN_STATE_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_sectional_releasing >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_sectional_releasing, v3, &this->is_sectional_releasing);
  this->is_sectional_releasing = 0;
};

// Line 172: range 0000000014D6FAA8-0000000014D6FCED
void __cdecl data::ReputationCityExcelConfig::ReputationCityExcelConfig(
        data::ReputationCityExcelConfig *const this,
        const data::ReputationCityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t city_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_explore_area_vec; // rsi
  uint32_t virtual_item_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::OpenStateType open_state; // ecx
  char v10; // dl
  bool is_sectional_releasing; // cl
  char v12; // al
  const data::ReputationCityExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReputationCityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReputationCityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->city_id, a2);
  }
  this->city_id = city_id;
  p_explore_area_vec = &v13->explore_area_vec;
  std::vector<unsigned int>::vector(&this->explore_area_vec, &v13->explore_area_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v13->virtual_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->virtual_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->virtual_item_id);
  }
  virtual_item_id = v13->virtual_item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->virtual_item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_explore_area_vec) = v7 != 0;
    __asan_report_store4(&this->virtual_item_id, p_explore_area_vec);
  }
  this->virtual_item_id = virtual_item_id;
  v8 = (((_BYTE)v13 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->open_state);
  }
  open_state = v13->open_state;
  v10 = *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
    __asan_report_store4(&this->open_state, v8);
  this->open_state = open_state;
  if ( *(char *)(((unsigned __int64)&v13->is_sectional_releasing >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_sectional_releasing, v8, &v13->is_sectional_releasing);
  is_sectional_releasing = v13->is_sectional_releasing;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_sectional_releasing >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->is_sectional_releasing, v8, &this->is_sectional_releasing);
  }
  this->is_sectional_releasing = is_sectional_releasing;
};

// Line 175: range 0000000014DE92F6-0000000014DE9347
void __cdecl data::ReputationCityExcelConfig::~ReputationCityExcelConfig(data::ReputationCityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReputationCityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReputationCityExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->explore_area_vec);
};

// Line 175: range 0000000014DE9348-0000000014DE9372
void __cdecl data::ReputationCityExcelConfig::~ReputationCityExcelConfig(data::ReputationCityExcelConfig *const this)
{
  data::ReputationCityExcelConfig::~ReputationCityExcelConfig(this);
  operator delete(this, 0x38uLL);
};
