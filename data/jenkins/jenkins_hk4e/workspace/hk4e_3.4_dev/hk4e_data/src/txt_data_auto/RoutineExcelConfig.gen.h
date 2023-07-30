// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/RoutineExcelConfig.gen.h

// Line 74: range 000000000CE51B20-000000000CE51CA4
data::RoutineCondContent *__cdecl data::RoutineCondContent::operator=(
        data::RoutineCondContent *const this,
        const data::RoutineCondContent *a2)
{
  data::RoutineCondType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t param1; // ecx
  char v6; // dl
  uint32_t param2; // ecx
  char v8; // al
  const data::RoutineCondContent *v10; // [rsp+0h] [rbp-10h]

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

// Line 87: range 0000000014D74C28-0000000014D74ED6
void __cdecl data::RoutineTypeExcelConfig::RoutineTypeExcelConfig(
        data::RoutineTypeExcelConfig *const this,
        const data::RoutineTypeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::GeneralRoutineType routine_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t refresh_num; // ecx
  char v7; // dl
  uint32_t reward_limit_num; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t refresh_id; // ecx
  char v12; // dl
  uint32_t delay_unload_time; // ecx
  char v14; // al
  const data::RoutineTypeExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoutineTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoutineTypeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->routine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->routine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->routine_type);
  }
  routine_type = a2->routine_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->routine_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->routine_type, a2);
  }
  this->routine_type = routine_type;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->refresh_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->refresh_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->refresh_num);
  }
  refresh_num = v15->refresh_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->refresh_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->refresh_num, v5);
  }
  this->refresh_num = refresh_num;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reward_limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->reward_limit_num);
  }
  reward_limit_num = v15->reward_limit_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_limit_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_limit_num, v5);
  }
  this->reward_limit_num = reward_limit_num;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->refresh_id);
  }
  refresh_id = v15->refresh_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->refresh_id, v10);
  }
  this->refresh_id = refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->delay_unload_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->delay_unload_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->delay_unload_time);
  }
  delay_unload_time = v15->delay_unload_time;
  v14 = *(_BYTE *)(((unsigned __int64)&this->delay_unload_time >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->delay_unload_time, v10);
  }
  this->delay_unload_time = delay_unload_time;
};

// Line 90: range 0000000014DE8CF6-0000000014DE8D20
void __cdecl data::RoutineTypeExcelConfig::~RoutineTypeExcelConfig(data::RoutineTypeExcelConfig *const this)
{
  data::RoutineTypeExcelConfig::~RoutineTypeExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 90: range 0000000014DE8CB4-0000000014DE8CF5
void __cdecl data::RoutineTypeExcelConfig::~RoutineTypeExcelConfig(data::RoutineTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoutineTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineTypeExcelConfig = v2;
};

// Line 105: range 000000001478BD7A-000000001478BEC3
void __cdecl data::RoutineFinishContent::RoutineFinishContent(data::RoutineFinishContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RoutineFinishContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineFinishContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_type, v1);
  }
  this->finish_type = ROUTINE_FINISH_NONE;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->progress, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->progress = 0;
};

// Line 105: range 0000000014D75018-0000000014D75251
void __cdecl data::RoutineFinishContent::RoutineFinishContent(
        data::RoutineFinishContent *const this,
        const data::RoutineFinishContent *a2)
{
  int (**v2)(...); // rdx
  data::RoutineFinishType finish_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param1; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t progress; // ecx
  char v12; // dl
  const data::RoutineFinishContent *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoutineFinishContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoutineFinishContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->finish_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->finish_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->finish_type);
  }
  finish_type = a2->finish_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->finish_type, a2);
  }
  this->finish_type = finish_type;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->param1);
  }
  param1 = v13->param1;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->param1, v5);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v13->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->param2);
  }
  param2 = v13->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->param2, v5);
  }
  this->param2 = param2;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->progress);
  }
  progress = v13->progress;
  v12 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->progress, v10);
  }
  this->progress = progress;
};

// Line 108: range 0000000014DE8C88-0000000014DE8CB2
void __cdecl data::RoutineFinishContent::~RoutineFinishContent(data::RoutineFinishContent *const this)
{
  data::RoutineFinishContent::~RoutineFinishContent(this);
  operator delete(this, 0x18uLL);
};

// Line 108: range 0000000014DE8C46-0000000014DE8C87
void __cdecl data::RoutineFinishContent::~RoutineFinishContent(data::RoutineFinishContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoutineFinishContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineFinishContent = v2;
};

// Line 120: range 000000000D35CA52-000000000D35CB55
void __cdecl data::RoutineCondContent::RoutineCondContent(data::RoutineCondContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RoutineCondContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineCondContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = ROUTINE_COND_NONE;
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

// Line 120: range 000000000D43D94A-000000000D43DAFE
void __cdecl data::RoutineCondContent::RoutineCondContent(
        data::RoutineCondContent *const this,
        const data::RoutineCondContent *a2)
{
  int (**v2)(...); // rdx
  data::RoutineCondType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param1; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  const data::RoutineCondContent *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoutineCondContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoutineCondContent = v2;
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

// Line 123: range 000000000D35CD18-000000000D35CD42
void __cdecl data::RoutineCondContent::~RoutineCondContent(data::RoutineCondContent *const this)
{
  data::RoutineCondContent::~RoutineCondContent(this);
  operator delete(this, 0x18uLL);
};

// Line 134: range 000000000CE51DA2-000000000CE51F26
data::RoutineActionContent *__cdecl data::RoutineActionContent::operator=(
        data::RoutineActionContent *const this,
        const data::RoutineActionContent *a2)
{
  data::RoutineActionype type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t param1; // ecx
  char v6; // dl
  uint32_t param2; // ecx
  char v8; // al
  const data::RoutineActionContent *v10; // [rsp+0h] [rbp-10h]

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

// Line 134: range 000000000D35CDC8-000000000D35CECB
void __cdecl data::RoutineActionContent::RoutineActionContent(data::RoutineActionContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RoutineActionContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineActionContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = ROUTINE_ACTION_NONE;
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

// Line 134: range 000000000D43DBBE-000000000D43DD72
void __cdecl data::RoutineActionContent::RoutineActionContent(
        data::RoutineActionContent *const this,
        const data::RoutineActionContent *a2)
{
  int (**v2)(...); // rdx
  data::RoutineActionype type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param1; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  const data::RoutineActionContent *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoutineActionContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoutineActionContent = v2;
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

// Line 137: range 000000000D35D08E-000000000D35D0B8
void __cdecl data::RoutineActionContent::~RoutineActionContent(data::RoutineActionContent *const this)
{
  data::RoutineActionContent::~RoutineActionContent(this);
  operator delete(this, 0x18uLL);
};

// Line 148: range 000000001478BF6C-000000001478C1A4
void __cdecl data::RoutineDetailExcelConfig::RoutineDetailExcelConfig(data::RoutineDetailExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RoutineDetailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineDetailExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->routine_id, v1);
  }
  this->routine_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->routine_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->routine_type, v3);
  }
  this->routine_type = ROUTINE_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tag, v4);
  }
  this->tag = 0;
  if ( *(char *)(((unsigned __int64)&this->is_backup >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_backup, v4, &this->is_backup);
  this->is_backup = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = 0;
  data::RoutineFinishContent::RoutineFinishContent(&this->finish_content);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v5);
  }
  this->cond_comb = LOGIC_NONE;
  std::vector<data::RoutineCondContent>::vector(&this->cond_vec);
  std::vector<data::RoutineActionContent>::vector(&this->action_vec);
};

// Line 148: range 0000000014D75252-0000000014D75688
void __cdecl data::RoutineDetailExcelConfig::RoutineDetailExcelConfig(
        data::RoutineDetailExcelConfig *const this,
        const data::RoutineDetailExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t routine_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GeneralRoutineType routine_type; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t tag; // ecx
  char v12; // dl
  bool is_backup; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t reward_id; // ecx
  char v17; // dl
  data::RoutineFinishContent *p_finish_content; // rsi
  data::LogicType cond_comb; // ecx
  char v20; // al
  const data::RoutineDetailExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoutineDetailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoutineDetailExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->routine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->routine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->routine_id);
  }
  routine_id = a2->routine_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->routine_id, a2);
  }
  this->routine_id = routine_id;
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->routine_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->routine_type);
  }
  routine_type = v21->routine_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->routine_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->routine_type, v5);
  }
  this->routine_type = routine_type;
  if ( *(_BYTE *)(((unsigned __int64)&v21->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->group_id);
  }
  group_id = v21->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->tag);
  }
  tag = v21->tag;
  v12 = *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->tag, v10);
  this->tag = tag;
  if ( *(char *)(((unsigned __int64)&v21->is_backup >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_backup, v10, &v21->is_backup);
  is_backup = v21->is_backup;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_backup >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_backup, v10, &this->is_backup);
  }
  this->is_backup = is_backup;
  v15 = (((_BYTE)v21 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->reward_id);
  }
  reward_id = v21->reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reward_id, v15);
  }
  this->reward_id = reward_id;
  p_finish_content = &v21->finish_content;
  data::RoutineFinishContent::RoutineFinishContent(&this->finish_content, &v21->finish_content);
  if ( *(_BYTE *)(((unsigned __int64)&v21->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->cond_comb);
  }
  cond_comb = v21->cond_comb;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_finish_content) = v20 != 0;
    __asan_report_store4(&this->cond_comb, p_finish_content);
  }
  this->cond_comb = cond_comb;
  std::vector<data::RoutineCondContent>::vector(&this->cond_vec, &v21->cond_vec);
  std::vector<data::RoutineActionContent>::vector(&this->action_vec, &v21->action_vec);
};

// Line 151: range 0000000014DE8BA8-0000000014DE8C19
void __cdecl data::RoutineDetailExcelConfig::~RoutineDetailExcelConfig(data::RoutineDetailExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoutineDetailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineDetailExcelConfig = v2;
  std::vector<data::RoutineActionContent>::~vector(&this->action_vec);
  std::vector<data::RoutineCondContent>::~vector(&this->cond_vec);
  data::RoutineFinishContent::~RoutineFinishContent(&this->finish_content);
};

// Line 151: range 0000000014DE8C1A-0000000014DE8C44
void __cdecl data::RoutineDetailExcelConfig::~RoutineDetailExcelConfig(data::RoutineDetailExcelConfig *const this)
{
  data::RoutineDetailExcelConfig::~RoutineDetailExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 935: range 000000000D35D04C-000000000D35D08D
void __cdecl data::RoutineActionContent::~RoutineActionContent(data::RoutineActionContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoutineActionContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineActionContent = v2;
};

// Line 935: range 000000000D35CCD6-000000000D35CD17
void __cdecl data::RoutineCondContent::~RoutineCondContent(data::RoutineCondContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoutineCondContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutineCondContent = v2;
};
