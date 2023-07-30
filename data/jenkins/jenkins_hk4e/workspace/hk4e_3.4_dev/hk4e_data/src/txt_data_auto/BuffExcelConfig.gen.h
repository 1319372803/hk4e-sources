// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/BuffExcelConfig.gen.h

// Line 41: range 0000000013BED3D6-0000000013BED567
void __cdecl data::BuffExcelConfig::BuffExcelConfig(data::BuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::BaseServerBuffConfig::BaseServerBuffConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::BuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseServerBuffConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, v3);
  }
  this->time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_type, v3);
  }
  this->stack_type = BUFF_REFRESH;
  v4 = ((_BYTE)this + 92) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_persistent, v4, v5);
  this->is_persistent = 0;
  v6 = ((_BYTE)this + 93) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_del_when_leave_scene >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_del_when_leave_scene >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_del_when_leave_scene, v6, v7);
  this->is_del_when_leave_scene = 0;
};

// Line 41: range 00000000141AA8DA-00000000141AABA4
void __cdecl data::BuffExcelConfig::BuffExcelConfig(data::BuffExcelConfig *const this, const data::BuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  float time; // xmm0_4
  __int64 v6; // rsi
  data::BuffStackType stack_type; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_persistent; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_del_when_leave_scene; // cl
  char v17; // dl
  __int64 v18; // rdx
  const data::BuffExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  data::BaseServerBuffConfig::BaseServerBuffConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseServerBuffConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->group_id);
  }
  group_id = a2->group_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->group_id, a2);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->time);
  }
  time = v19->time;
  v6 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, v6);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&v19->stack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->stack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->stack_type);
  }
  stack_type = v19->stack_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->stack_type, v6);
  }
  this->stack_type = stack_type;
  v9 = ((_BYTE)v19 + 92) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v19->is_persistent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v19->is_persistent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v19->is_persistent, v9, v10);
  is_persistent = v19->is_persistent;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_persistent, v9, v13);
  this->is_persistent = is_persistent;
  v14 = ((_BYTE)v19 + 93) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v19->is_del_when_leave_scene >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v19->is_del_when_leave_scene >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v19->is_del_when_leave_scene, v14, v15);
  is_del_when_leave_scene = v19->is_del_when_leave_scene;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_del_when_leave_scene >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 93) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_del_when_leave_scene, v14, v18);
  this->is_del_when_leave_scene = is_del_when_leave_scene;
};

// Line 45: range 00000000142A5E6A-00000000142A5EB7
void __cdecl data::BuffExcelConfig::~BuffExcelConfig(data::BuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseServerBuffConfig = v2;
  data::BaseServerBuffConfig::~BaseServerBuffConfig(this);
};

// Line 45: range 00000000142A5EB8-00000000142A5EE2
void __cdecl data::BuffExcelConfig::~BuffExcelConfig(data::BuffExcelConfig *const this)
{
  data::BuffExcelConfig::~BuffExcelConfig(this);
  operator delete(this, 0x60uLL);
};
