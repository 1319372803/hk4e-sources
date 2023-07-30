// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/OpenStateExcelConfig.gen.h

// Line 46: range 00000000148F1C60-00000000148F1DE4
data::OpenStateCond *__cdecl data::OpenStateCond::operator=(
        data::OpenStateCond *const this,
        const data::OpenStateCond *a2)
{
  data::OpenStateCondType cond_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t param; // ecx
  char v6; // dl
  uint32_t param2; // ecx
  char v8; // al
  const data::OpenStateCond *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
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
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->param);
  }
  param = v10->param;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->param, v4);
  }
  this->param = param;
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

// Line 46: range 000000001477CA56-000000001477CB59
void __cdecl data::OpenStateCond::OpenStateCond(data::OpenStateCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::OpenStateCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpenStateCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = OPEN_STATE_COND_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param, v3);
  }
  this->param = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param2, v3);
  }
  this->param2 = 0;
};

// Line 46: range 0000000014DA702A-0000000014DA71DE
void __cdecl data::OpenStateCond::OpenStateCond(data::OpenStateCond *const this, const data::OpenStateCond *a2)
{
  int (**v2)(...); // rdx
  data::OpenStateCondType cond_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t param; // ecx
  char v7; // dl
  uint32_t param2; // ecx
  char v9; // al
  const data::OpenStateCond *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OpenStateCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OpenStateCond = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->param);
  }
  param = v10->param;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->param, v5);
  }
  this->param = param;
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

// Line 49: range 0000000014DEB85C-0000000014DEB89D
void __cdecl data::OpenStateCond::~OpenStateCond(data::OpenStateCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OpenStateCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpenStateCond = v2;
};

// Line 49: range 0000000014DEB89E-0000000014DEB8C8
void __cdecl data::OpenStateCond::~OpenStateCond(data::OpenStateCond *const this)
{
  data::OpenStateCond::~OpenStateCond(this);
  operator delete(this, 0x18uLL);
};

// Line 60: range 000000001477F788-000000001477F8D5
void __cdecl data::OpenStateConfig::OpenStateConfig(data::OpenStateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::OpenStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpenStateConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->default_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->default_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->default_state, v3, v4);
  this->default_state = 0;
  v5 = ((_BYTE)this + 13) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->allow_client_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->allow_client_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->allow_client_open, v5, v6);
  this->allow_client_open = 0;
  std::vector<data::OpenStateCond>::vector(&this->cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->system_open_ui_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->system_open_ui_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->system_open_ui_id, v5);
  }
  this->system_open_ui_id = 0;
};

// Line 60: range 0000000014D654F4-0000000014D6573E
void __cdecl data::OpenStateConfig::OpenStateConfig(data::OpenStateConfig *const this, const data::OpenStateConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool default_state; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool allow_client_open; // cl
  char v13; // dl
  __int64 v14; // rdx
  std::vector<data::OpenStateCond> *p_cond; // rsi
  uint32_t system_open_ui_id; // ecx
  char v17; // al
  const data::OpenStateConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OpenStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OpenStateConfig = v2;
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
  v5 = ((_BYTE)v18 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v18->default_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v18->default_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v18->default_state, v5, v6);
  default_state = v18->default_state;
  v8 = *(_BYTE *)(((unsigned __int64)&this->default_state >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->default_state, v5, v9);
  this->default_state = default_state;
  v10 = ((_BYTE)v18 + 13) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v18->allow_client_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v18->allow_client_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v18->allow_client_open, v10, v11);
  allow_client_open = v18->allow_client_open;
  v13 = *(_BYTE *)(((unsigned __int64)&this->allow_client_open >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->allow_client_open, v10, v14);
  this->allow_client_open = allow_client_open;
  p_cond = &v18->cond;
  std::vector<data::OpenStateCond>::vector(&this->cond, &v18->cond);
  if ( *(_BYTE *)(((unsigned __int64)&v18->system_open_ui_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->system_open_ui_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->system_open_ui_id);
  }
  system_open_ui_id = v18->system_open_ui_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->system_open_ui_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_cond) = v17 != 0;
    __asan_report_store4(&this->system_open_ui_id, p_cond);
  }
  this->system_open_ui_id = system_open_ui_id;
};

// Line 63: range 0000000014DEB7DE-0000000014DEB82F
void __cdecl data::OpenStateConfig::~OpenStateConfig(data::OpenStateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OpenStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpenStateConfig = v2;
  std::vector<data::OpenStateCond>::~vector(&this->cond);
};

// Line 63: range 0000000014DEB830-0000000014DEB85A
void __cdecl data::OpenStateConfig::~OpenStateConfig(data::OpenStateConfig *const this)
{
  data::OpenStateConfig::~OpenStateConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 78: range 000000001477F8D6-000000001477F9C3
void __cdecl data::SystemOpenUIConfig::SystemOpenUIConfig(data::SystemOpenUIConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SystemOpenUIConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SystemOpenUIConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->icon_path);
  std::string::basic_string(&this->desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tutorial_id, v1);
  }
  this->tutorial_id = 0;
};

// Line 78: range 0000000014D65880-0000000014D65A3C
void __cdecl data::SystemOpenUIConfig::SystemOpenUIConfig(
        data::SystemOpenUIConfig *const this,
        const data::SystemOpenUIConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_desc; // rsi
  uint32_t tutorial_id; // ecx
  char v7; // al
  const data::SystemOpenUIConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SystemOpenUIConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SystemOpenUIConfig = v2;
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
  std::string::basic_string(&this->name, &v8->name);
  std::string::basic_string(&this->icon_path, &v8->icon_path);
  p_desc = &v8->desc;
  std::string::basic_string(&this->desc, &v8->desc);
  if ( *(_BYTE *)(((unsigned __int64)&v8->tutorial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->tutorial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->tutorial_id);
  }
  tutorial_id = v8->tutorial_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_desc) = v7 != 0;
    __asan_report_store4(&this->tutorial_id, p_desc);
  }
  this->tutorial_id = tutorial_id;
};

// Line 81: range 0000000014DEB740-0000000014DEB7B1
void __cdecl data::SystemOpenUIConfig::~SystemOpenUIConfig(data::SystemOpenUIConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SystemOpenUIConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SystemOpenUIConfig = v2;
  std::string::~string(&this->desc);
  std::string::~string(&this->icon_path);
  std::string::~string(&this->name);
};

// Line 81: range 0000000014DEB7B2-0000000014DEB7DC
void __cdecl data::SystemOpenUIConfig::~SystemOpenUIConfig(data::SystemOpenUIConfig *const this)
{
  data::SystemOpenUIConfig::~SystemOpenUIConfig(this);
  operator delete(this, 0x78uLL);
};
