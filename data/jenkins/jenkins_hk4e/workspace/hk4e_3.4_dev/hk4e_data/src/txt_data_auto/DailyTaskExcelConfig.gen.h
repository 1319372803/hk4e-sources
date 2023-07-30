// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DailyTaskExcelConfig.gen.h

// Line 161: range 00000000141203EE-000000001412046D
void __cdecl data::DailyTaskTagType::DailyTaskTagType(data::DailyTaskTagType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskTagType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskTagType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
};

// Line 161: range 0000000014227DBE-0000000014227E78
void __cdecl data::DailyTaskTagType::DailyTaskTagType(
        data::DailyTaskTagType *const this,
        const data::DailyTaskTagType *a2)
{
  int (**v2)(...); // rdx
  uint32_t value; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskTagType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskTagType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 164: range 000000001404A864-000000001404A8A5
void __cdecl data::DailyTaskTagType::~DailyTaskTagType(data::DailyTaskTagType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskTagType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskTagType = v2;
};

// Line 164: range 000000001404A8A6-000000001404A8D0
void __cdecl data::DailyTaskTagType::~DailyTaskTagType(data::DailyTaskTagType *const this)
{
  data::DailyTaskTagType::~DailyTaskTagType(this);
  operator delete(this, 0x10uLL);
};

// Line 173: range 0000000013C72C0A-0000000013C73007
data::DailyTaskAction *__cdecl data::DailyTaskAction::operator=(
        data::DailyTaskAction *const this,
        const data::DailyTaskAction *a2)
{
  data::DailyTaskCondType cond_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t cond_param1; // ecx
  char v6; // dl
  int32_t cond_param2; // ecx
  char v8; // al
  __int64 v9; // rsi
  int32_t cond_param3; // ecx
  char v11; // dl
  data::DailyTaskActionType type; // ecx
  char v13; // al
  __int64 v14; // rsi
  int32_t param1; // ecx
  char v16; // dl
  int32_t param2; // ecx
  char v18; // al
  __int64 v19; // rsi
  int32_t param3; // ecx
  char v21; // dl
  const data::DailyTaskAction *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  v4 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cond_param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->cond_param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->cond_param1);
  }
  cond_param1 = v23->cond_param1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->cond_param1 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->cond_param1, v4);
  }
  this->cond_param1 = cond_param1;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cond_param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->cond_param2);
  }
  cond_param2 = v23->cond_param2;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cond_param2 >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->cond_param2, v4);
  }
  this->cond_param2 = cond_param2;
  v9 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cond_param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->cond_param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->cond_param3);
  }
  cond_param3 = v23->cond_param3;
  v11 = *(_BYTE *)(((unsigned __int64)&this->cond_param3 >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->cond_param3, v9);
  }
  this->cond_param3 = cond_param3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->type);
  }
  type = v23->type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->type, v9);
  }
  this->type = type;
  v14 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->param1);
  }
  param1 = v23->param1;
  v16 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->param1, v14);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v23->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->param2);
  }
  param2 = v23->param2;
  v18 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store4(&this->param2, v14);
  }
  this->param2 = param2;
  v19 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->param3);
  }
  param3 = v23->param3;
  v21 = *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->param3, v19);
  }
  this->param3 = param3;
  return this;
};

// Line 173: range 00000000141208A8-0000000014120AF9
void __cdecl data::DailyTaskAction::DailyTaskAction(data::DailyTaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = DAILY_TASK_COND_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_param1, v3);
  }
  this->cond_param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_param2, v3);
  }
  this->cond_param2 = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_param3, v4);
  }
  this->cond_param3 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v4);
  }
  this->type = DAILY_TASK_ACTION_NONE;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param1, v5);
  }
  this->param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param2, v5);
  }
  this->param2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param3, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->param3 = 0;
};

// Line 173: range 0000000014228254-0000000014228681
void __cdecl data::DailyTaskAction::DailyTaskAction(data::DailyTaskAction *const this, const data::DailyTaskAction *a2)
{
  int (**v2)(...); // rdx
  data::DailyTaskCondType cond_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t cond_param1; // ecx
  char v7; // dl
  int32_t cond_param2; // ecx
  char v9; // al
  __int64 v10; // rsi
  int32_t cond_param3; // ecx
  char v12; // dl
  data::DailyTaskActionType type; // ecx
  char v14; // al
  __int64 v15; // rsi
  int32_t param1; // ecx
  char v17; // dl
  int32_t param2; // ecx
  char v19; // al
  __int64 v20; // rsi
  int32_t param3; // ecx
  char v22; // dl
  const data::DailyTaskAction *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cond_param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->cond_param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->cond_param1);
  }
  cond_param1 = v23->cond_param1;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_param1 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_param1, v5);
  }
  this->cond_param1 = cond_param1;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cond_param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->cond_param2);
  }
  cond_param2 = v23->cond_param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cond_param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->cond_param2, v5);
  }
  this->cond_param2 = cond_param2;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cond_param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->cond_param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->cond_param3);
  }
  cond_param3 = v23->cond_param3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cond_param3 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->cond_param3, v10);
  }
  this->cond_param3 = cond_param3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->type);
  }
  type = v23->type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->type, v10);
  }
  this->type = type;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->param1);
  }
  param1 = v23->param1;
  v17 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->param1, v15);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v23->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->param2);
  }
  param2 = v23->param2;
  v19 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->param2, v15);
  }
  this->param2 = param2;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->param3);
  }
  param3 = v23->param3;
  v22 = *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->param3, v20);
  }
  this->param3 = param3;
};

// Line 176: range 000000001404AA20-000000001404AA61
void __cdecl data::DailyTaskAction::~DailyTaskAction(data::DailyTaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskAction = v2;
};

// Line 176: range 000000001404AA62-000000001404AA8C
void __cdecl data::DailyTaskAction::~DailyTaskAction(data::DailyTaskAction *const this)
{
  data::DailyTaskAction::~DailyTaskAction(this);
  operator delete(this, 0x28uLL);
};

// Line 192: range 000000001412058A-00000000141206D3
void __cdecl data::DailyTaskStatisfiedCond::DailyTaskStatisfiedCond(data::DailyTaskStatisfiedCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskStatisfiedCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskStatisfiedCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = CONDITION_NONE;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param3, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->param3 = 0;
};

// Line 192: range 0000000014227FC6-00000000142281FF
void __cdecl data::DailyTaskStatisfiedCond::DailyTaskStatisfiedCond(
        data::DailyTaskStatisfiedCond *const this,
        const data::DailyTaskStatisfiedCond *a2)
{
  int (**v2)(...); // rdx
  data::ConditionType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param1; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t param3; // ecx
  char v12; // dl
  const data::DailyTaskStatisfiedCond *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyTaskStatisfiedCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskStatisfiedCond = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->param3);
  }
  param3 = v13->param3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->param3, v10);
  }
  this->param3 = param3;
};

// Line 195: range 000000001404A942-000000001404A983
void __cdecl data::DailyTaskStatisfiedCond::~DailyTaskStatisfiedCond(data::DailyTaskStatisfiedCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskStatisfiedCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskStatisfiedCond = v2;
};

// Line 195: range 000000001404A984-000000001404A9AE
void __cdecl data::DailyTaskStatisfiedCond::~DailyTaskStatisfiedCond(data::DailyTaskStatisfiedCond *const this)
{
  data::DailyTaskStatisfiedCond::~DailyTaskStatisfiedCond(this);
  operator delete(this, 0x18uLL);
};

// Line 207: range 0000000013BFF5C2-0000000013BFFA4A
void __cdecl data::DailyTaskExcelConfig::DailyTaskExcelConfig(data::DailyTaskExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pool_id, v3);
  }
  this->pool_id = 0;
  std::vector<data::DailyTaskTagType>::vector(&this->tag_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v4);
  }
  this->type = DAILY_TASK_QUEST;
  if ( *(_BYTE *)(((unsigned __int64)&this->rarity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rarity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rarity, v4);
  }
  this->rarity = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->old_group_vec);
  std::vector<unsigned int>::vector(&this->new_group_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->statisfied_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->statisfied_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->statisfied_cond_comb, v5);
  }
  this->statisfied_cond_comb = LOGIC_NONE;
  std::vector<data::DailyTaskStatisfiedCond>::vector(&this->statisfied_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_type, v5);
  }
  this->finish_type = DAILY_FINISH_NONE;
  v6 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_param1, v6);
  }
  this->finish_param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_param2, v6);
  }
  this->finish_param2 = 0;
  v7 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_progress, v7);
  }
  this->finish_progress = 0;
  std::vector<data::DailyTaskAction>::vector(&this->finish_action_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->task_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_reward_id, v7);
  }
  this->task_reward_id = 0;
  v8 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_cycle_refresh_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_cycle_refresh_times >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_cycle_refresh_times, v8);
  }
  this->task_cycle_refresh_times = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->related_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->related_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->related_tag, v8);
  }
  this->related_tag = 0;
};

// Line 207: range 0000000013E35086-0000000013E3593E
void __cdecl data::DailyTaskExcelConfig::DailyTaskExcelConfig(
        data::DailyTaskExcelConfig *const this,
        const data::DailyTaskExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  uint32_t pool_id; // ecx
  char v9; // al
  std::vector<data::DailyTaskTagType> *p_tag_vec; // rsi
  uint32_t weight; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::DailyTaskType type; // ecx
  char v15; // dl
  uint32_t rarity; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t quest_id; // ecx
  char v20; // dl
  std::vector<unsigned int> *p_new_group_vec; // rsi
  data::LogicType statisfied_cond_comb; // ecx
  char v23; // al
  std::vector<data::DailyTaskStatisfiedCond> *p_statisfied_cond; // rsi
  data::DailyTaskFinishType finish_type; // ecx
  char v26; // al
  __int64 v27; // rsi
  uint32_t finish_param1; // ecx
  char v29; // dl
  uint32_t finish_param2; // ecx
  char v31; // al
  __int64 v32; // rsi
  uint32_t finish_progress; // ecx
  char v34; // dl
  std::vector<data::DailyTaskAction> *p_finish_action_vec; // rsi
  uint32_t task_reward_id; // ecx
  char v37; // al
  __int64 v38; // rsi
  uint32_t task_cycle_refresh_times; // ecx
  char v40; // dl
  uint32_t related_tag; // ecx
  char v42; // al
  const data::DailyTaskExcelConfig *v43; // [rsp+0h] [rbp-20h]

  v43 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskExcelConfig = v2;
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
  v5 = (((_BYTE)v43 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->city_id);
  }
  city_id = v43->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v43->pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->pool_id);
  }
  pool_id = v43->pool_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->pool_id, v5);
  }
  this->pool_id = pool_id;
  p_tag_vec = &v43->tag_vec;
  std::vector<data::DailyTaskTagType>::vector(&this->tag_vec, &v43->tag_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v43->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->weight);
  }
  weight = v43->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_tag_vec) = v12 != 0;
    __asan_report_store4(&this->weight, p_tag_vec);
  }
  this->weight = weight;
  v13 = (((_BYTE)v43 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->type);
  }
  type = v43->type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->type, v13);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v43->rarity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->rarity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->rarity);
  }
  rarity = v43->rarity;
  v17 = *(_BYTE *)(((unsigned __int64)&this->rarity >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->rarity, v13);
  }
  this->rarity = rarity;
  v18 = (((_BYTE)v43 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->quest_id);
  }
  quest_id = v43->quest_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->quest_id, v18);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->old_group_vec, &v43->old_group_vec);
  p_new_group_vec = &v43->new_group_vec;
  std::vector<unsigned int>::vector(&this->new_group_vec, &v43->new_group_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v43->statisfied_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->statisfied_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->statisfied_cond_comb);
  }
  statisfied_cond_comb = v43->statisfied_cond_comb;
  v23 = *(_BYTE *)(((unsigned __int64)&this->statisfied_cond_comb >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_new_group_vec) = v23 != 0;
    __asan_report_store4(&this->statisfied_cond_comb, p_new_group_vec);
  }
  this->statisfied_cond_comb = statisfied_cond_comb;
  p_statisfied_cond = &v43->statisfied_cond;
  std::vector<data::DailyTaskStatisfiedCond>::vector(&this->statisfied_cond, &v43->statisfied_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v43->finish_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->finish_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->finish_type);
  }
  finish_type = v43->finish_type;
  v26 = *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(p_statisfied_cond) = v26 != 0;
    __asan_report_store4(&this->finish_type, p_statisfied_cond);
  }
  this->finish_type = finish_type;
  v27 = (((_BYTE)v43 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->finish_param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->finish_param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->finish_param1);
  }
  finish_param1 = v43->finish_param1;
  v29 = *(_BYTE *)(((unsigned __int64)&this->finish_param1 >> 3) + 0x7FFF8000);
  if ( v29 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v29 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->finish_param1, v27);
  }
  this->finish_param1 = finish_param1;
  if ( *(_BYTE *)(((unsigned __int64)&v43->finish_param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->finish_param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->finish_param2);
  }
  finish_param2 = v43->finish_param2;
  v31 = *(_BYTE *)(((unsigned __int64)&this->finish_param2 >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(v27) = v31 != 0;
    __asan_report_store4(&this->finish_param2, v27);
  }
  this->finish_param2 = finish_param2;
  v32 = (((_BYTE)v43 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->finish_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->finish_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->finish_progress);
  }
  finish_progress = v43->finish_progress;
  v34 = *(_BYTE *)(((unsigned __int64)&this->finish_progress >> 3) + 0x7FFF8000);
  if ( v34 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v34 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store4(&this->finish_progress, v32);
  }
  this->finish_progress = finish_progress;
  p_finish_action_vec = &v43->finish_action_vec;
  std::vector<data::DailyTaskAction>::vector(&this->finish_action_vec, &v43->finish_action_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v43->task_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->task_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->task_reward_id);
  }
  task_reward_id = v43->task_reward_id;
  v37 = *(_BYTE *)(((unsigned __int64)&this->task_reward_id >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(p_finish_action_vec) = v37 != 0;
    __asan_report_store4(&this->task_reward_id, p_finish_action_vec);
  }
  this->task_reward_id = task_reward_id;
  v38 = (((_BYTE)v43 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->task_cycle_refresh_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->task_cycle_refresh_times >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->task_cycle_refresh_times);
  }
  task_cycle_refresh_times = v43->task_cycle_refresh_times;
  v40 = *(_BYTE *)(((unsigned __int64)&this->task_cycle_refresh_times >> 3) + 0x7FFF8000);
  if ( v40 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v40 )
  {
    LOBYTE(v38) = v40 != 0;
    __asan_report_store4(&this->task_cycle_refresh_times, v38);
  }
  this->task_cycle_refresh_times = task_cycle_refresh_times;
  if ( *(_BYTE *)(((unsigned __int64)&v43->related_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->related_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->related_tag);
  }
  related_tag = v43->related_tag;
  v42 = *(_BYTE *)(((unsigned __int64)&this->related_tag >> 3) + 0x7FFF8000);
  if ( v42 != 0 && v42 <= 3 )
  {
    LOBYTE(v38) = v42 != 0;
    __asan_report_store4(&this->related_tag, v38);
  }
  this->related_tag = related_tag;
};

// Line 210: range 00000000142A5CC4-00000000142A5CEE
void __cdecl data::DailyTaskExcelConfig::~DailyTaskExcelConfig(data::DailyTaskExcelConfig *const this)
{
  data::DailyTaskExcelConfig::~DailyTaskExcelConfig(this);
  operator delete(this, 0xC8uLL);
};

// Line 210: range 00000000142A5C30-00000000142A5CC3
void __cdecl data::DailyTaskExcelConfig::~DailyTaskExcelConfig(data::DailyTaskExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskExcelConfig = v2;
  std::vector<data::DailyTaskAction>::~vector(&this->finish_action_vec);
  std::vector<data::DailyTaskStatisfiedCond>::~vector(&this->statisfied_cond);
  std::vector<unsigned int>::~vector(&this->new_group_vec);
  std::vector<unsigned int>::~vector(&this->old_group_vec);
  std::vector<data::DailyTaskTagType>::~vector(&this->tag_vec);
};

// Line 240: range 0000000014120C44-0000000014120D09
void __cdecl data::DailyTaskDropConfig::DailyTaskDropConfig(data::DailyTaskDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskDropConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->preview_reward_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->preview_reward_id = 0;
};

// Line 240: range 00000000142666CC-000000001426680B
void __cdecl data::DailyTaskDropConfig::DailyTaskDropConfig(
        data::DailyTaskDropConfig *const this,
        const data::DailyTaskDropConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t drop_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t preview_reward_id; // ecx
  char v7; // dl
  const data::DailyTaskDropConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyTaskDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskDropConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->preview_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->preview_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->preview_reward_id);
  }
  preview_reward_id = v8->preview_reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->preview_reward_id, v5);
  }
  this->preview_reward_id = preview_reward_id;
};

// Line 243: range 000000001404B0FE-000000001404B128
void __cdecl data::DailyTaskDropConfig::~DailyTaskDropConfig(data::DailyTaskDropConfig *const this)
{
  data::DailyTaskDropConfig::~DailyTaskDropConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 243: range 000000001404B0BC-000000001404B0FD
void __cdecl data::DailyTaskDropConfig::~DailyTaskDropConfig(data::DailyTaskDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskDropConfig = v2;
};

// Line 253: range 0000000013BFFAA0-0000000013BFFB2F
void __cdecl data::DailyTaskRewardExcelConfig::DailyTaskRewardExcelConfig(data::DailyTaskRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::DailyTaskDropConfig>::vector(&this->drop_vec);
};

// Line 253: range 00000000141BED94-00000000141BEE69
void __cdecl data::DailyTaskRewardExcelConfig::DailyTaskRewardExcelConfig(
        data::DailyTaskRewardExcelConfig *const this,
        const data::DailyTaskRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::DailyTaskRewardExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyTaskRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskRewardExcelConfig = v2;
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
  std::vector<data::DailyTaskDropConfig>::vector(&this->drop_vec, &v5->drop_vec);
};

// Line 256: range 00000000142A5BB2-00000000142A5C03
void __cdecl data::DailyTaskRewardExcelConfig::~DailyTaskRewardExcelConfig(
        data::DailyTaskRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskRewardExcelConfig = v2;
  std::vector<data::DailyTaskDropConfig>::~vector(&this->drop_vec);
};

// Line 256: range 00000000142A5C04-00000000142A5C2E
void __cdecl data::DailyTaskRewardExcelConfig::~DailyTaskRewardExcelConfig(
        data::DailyTaskRewardExcelConfig *const this)
{
  data::DailyTaskRewardExcelConfig::~DailyTaskRewardExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 268: range 0000000013F6B21E-0000000013F6B521
data::DailyTaskLevelExcelConfig *__cdecl data::DailyTaskLevelExcelConfig::operator=(
        data::DailyTaskLevelExcelConfig *const this,
        const data::DailyTaskLevelExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t min_player_level; // ecx
  char v6; // dl
  uint32_t max_player_level; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t group_revise_level; // ecx
  char v11; // dl
  uint32_t score_drop_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t score_preview_reward_id; // ecx
  char v16; // dl
  const data::DailyTaskLevelExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
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
  v4 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->min_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->min_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->min_player_level);
  }
  min_player_level = v18->min_player_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->min_player_level, v4);
  }
  this->min_player_level = min_player_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->max_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->max_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->max_player_level);
  }
  max_player_level = v18->max_player_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->max_player_level, v4);
  }
  this->max_player_level = max_player_level;
  v9 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->group_revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->group_revise_level);
  }
  group_revise_level = v18->group_revise_level;
  v11 = *(_BYTE *)(((unsigned __int64)&this->group_revise_level >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->group_revise_level, v9);
  }
  this->group_revise_level = group_revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->score_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->score_drop_id);
  }
  score_drop_id = v18->score_drop_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->score_drop_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->score_drop_id, v9);
  }
  this->score_drop_id = score_drop_id;
  v14 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score_preview_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->score_preview_reward_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->score_preview_reward_id);
  }
  score_preview_reward_id = v18->score_preview_reward_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->score_preview_reward_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->score_preview_reward_id, v14);
  }
  this->score_preview_reward_id = score_preview_reward_id;
  return this;
};

// Line 268: range 0000000013E1F896-0000000013E1FBC9
void __cdecl data::DailyTaskLevelExcelConfig::DailyTaskLevelExcelConfig(
        data::DailyTaskLevelExcelConfig *const this,
        const data::DailyTaskLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t min_player_level; // ecx
  char v7; // dl
  uint32_t max_player_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_revise_level; // ecx
  char v12; // dl
  uint32_t score_drop_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t score_preview_reward_id; // ecx
  char v17; // dl
  const data::DailyTaskLevelExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DailyTaskLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DailyTaskLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->min_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->min_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->min_player_level);
  }
  min_player_level = v18->min_player_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_player_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->min_player_level, v5);
  }
  this->min_player_level = min_player_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->max_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->max_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->max_player_level);
  }
  max_player_level = v18->max_player_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_player_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_player_level, v5);
  }
  this->max_player_level = max_player_level;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->group_revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->group_revise_level);
  }
  group_revise_level = v18->group_revise_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_revise_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_revise_level, v10);
  }
  this->group_revise_level = group_revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->score_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->score_drop_id);
  }
  score_drop_id = v18->score_drop_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->score_drop_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->score_drop_id, v10);
  }
  this->score_drop_id = score_drop_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score_preview_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->score_preview_reward_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->score_preview_reward_id);
  }
  score_preview_reward_id = v18->score_preview_reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->score_preview_reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->score_preview_reward_id, v15);
  }
  this->score_preview_reward_id = score_preview_reward_id;
};

// Line 271: range 00000000142A5B44-00000000142A5B85
void __cdecl data::DailyTaskLevelExcelConfig::~DailyTaskLevelExcelConfig(data::DailyTaskLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DailyTaskLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DailyTaskLevelExcelConfig = v2;
};

// Line 271: range 00000000142A5B86-00000000142A5BB0
void __cdecl data::DailyTaskLevelExcelConfig::~DailyTaskLevelExcelConfig(data::DailyTaskLevelExcelConfig *const this)
{
  data::DailyTaskLevelExcelConfig::~DailyTaskLevelExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 287: range 0000000013BFFB30-0000000013BFFC05
void __cdecl data::CityTaskOpenExcelConfig::CityTaskOpenExcelConfig(data::CityTaskOpenExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CityTaskOpenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CityTaskOpenExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->backup_vec);
};

// Line 287: range 0000000013E201A6-0000000013E20300
void __cdecl data::CityTaskOpenExcelConfig::CityTaskOpenExcelConfig(
        data::CityTaskOpenExcelConfig *const this,
        const data::CityTaskOpenExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t city_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  const data::CityTaskOpenExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CityTaskOpenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CityTaskOpenExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->quest_id);
  }
  quest_id = v8->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->backup_vec, &v8->backup_vec);
};

// Line 290: range 00000000142A5AC6-00000000142A5B17
void __cdecl data::CityTaskOpenExcelConfig::~CityTaskOpenExcelConfig(data::CityTaskOpenExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CityTaskOpenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CityTaskOpenExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->backup_vec);
};

// Line 290: range 00000000142A5B18-00000000142A5B42
void __cdecl data::CityTaskOpenExcelConfig::~CityTaskOpenExcelConfig(data::CityTaskOpenExcelConfig *const this)
{
  data::CityTaskOpenExcelConfig::~CityTaskOpenExcelConfig(this);
  operator delete(this, 0x28uLL);
};
