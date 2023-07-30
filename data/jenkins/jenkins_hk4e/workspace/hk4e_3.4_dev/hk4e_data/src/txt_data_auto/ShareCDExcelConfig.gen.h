// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ShareCDExcelConfig.gen.h

// Line 15: range 0000000014D0D2CA-0000000014D0D391
void __cdecl data::CoolDownInfo::CoolDownInfo(data::CoolDownInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoolDownInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoolDownInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cool_down_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cool_down_time, v1);
  }
  this->cool_down_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->token >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->token = 0;
};

// Line 15: range 0000000014DD77D0-0000000014DD7912
void __cdecl data::CoolDownInfo::CoolDownInfo(data::CoolDownInfo *const this, const data::CoolDownInfo *a2)
{
  int (**v2)(...); // rdx
  float cool_down_time; // xmm0_4
  __int64 v4; // rsi
  uint32_t token; // ecx
  char v6; // dl

  v2 = (int (**)(...))(&`vtable for'data::CoolDownInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoolDownInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cool_down_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cool_down_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cool_down_time);
  }
  cool_down_time = a2->cool_down_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cool_down_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cool_down_time, a2);
  }
  this->cool_down_time = cool_down_time;
  v4 = (((_BYTE)a2 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->token >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->token);
  }
  token = a2->token;
  v6 = *(_BYTE *)(((unsigned __int64)&this->token >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->token, v4);
  }
  this->token = token;
};

// Line 18: range 0000000014C62DEE-0000000014C62E2F
void __cdecl data::CoolDownInfo::~CoolDownInfo(data::CoolDownInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoolDownInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoolDownInfo = v2;
};

// Line 18: range 0000000014C62E30-0000000014C62E5A
void __cdecl data::CoolDownInfo::~CoolDownInfo(data::CoolDownInfo *const this)
{
  data::CoolDownInfo::~CoolDownInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 28: range 000000001478E4A6-000000001478E5B0
void __cdecl data::ShareCDExcelConfig::ShareCDExcelConfig(data::ShareCDExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShareCDExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShareCDExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::CoolDownInfo>::vector(&this->cool_down_list);
  if ( *(char *)(((unsigned __int64)&this->is_use_real_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_real_time, v1, &this->is_use_real_time);
  this->is_use_real_time = 0;
  v3 = ((_BYTE)this + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_use_external_system >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_use_external_system >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_use_external_system, v3, v4);
  this->is_use_external_system = 0;
};

// Line 28: range 0000000014D78ED0-0000000014D7909B
void __cdecl data::ShareCDExcelConfig::ShareCDExcelConfig(
        data::ShareCDExcelConfig *const this,
        const data::ShareCDExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::CoolDownInfo> *p_cool_down_list; // rsi
  bool is_use_real_time; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_use_external_system; // cl
  char v11; // dl
  __int64 v12; // rdx
  const data::ShareCDExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ShareCDExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ShareCDExcelConfig = v2;
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
  p_cool_down_list = &v13->cool_down_list;
  std::vector<data::CoolDownInfo>::vector(&this->cool_down_list, &v13->cool_down_list);
  if ( *(char *)(((unsigned __int64)&v13->is_use_real_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_use_real_time, p_cool_down_list, &v13->is_use_real_time);
  is_use_real_time = v13->is_use_real_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_use_real_time >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_cool_down_list) = v7 != 0;
    __asan_report_store1(&this->is_use_real_time, p_cool_down_list, &this->is_use_real_time);
  }
  this->is_use_real_time = is_use_real_time;
  v8 = ((_BYTE)v13 + 41) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v13->is_use_external_system >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v13->is_use_external_system >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v13->is_use_external_system, v8, v9);
  is_use_external_system = v13->is_use_external_system;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_use_external_system >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_use_external_system, v8, v12);
  this->is_use_external_system = is_use_external_system;
};

// Line 31: range 0000000014DE75F6-0000000014DE7647
void __cdecl data::ShareCDExcelConfig::~ShareCDExcelConfig(data::ShareCDExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ShareCDExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ShareCDExcelConfig = v2;
  std::vector<data::CoolDownInfo>::~vector(&this->cool_down_list);
};

// Line 31: range 0000000014DE7648-0000000014DE7672
void __cdecl data::ShareCDExcelConfig::~ShareCDExcelConfig(data::ShareCDExcelConfig *const this)
{
  data::ShareCDExcelConfig::~ShareCDExcelConfig(this);
  operator delete(this, 0x30uLL);
};
