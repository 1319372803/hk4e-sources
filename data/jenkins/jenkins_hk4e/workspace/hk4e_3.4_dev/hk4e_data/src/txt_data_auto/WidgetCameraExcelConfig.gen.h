// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WidgetCameraExcelConfig.gen.h

// Line 40: range 000000000D383F2C-000000000D383FE6
void __cdecl data::WidgetCameraExcelConfig::WidgetCameraExcelConfig(
        data::WidgetCameraExcelConfig *const this,
        const data::WidgetCameraExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::WidgetCameraExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetCameraExcelConfig = v2;
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
};

// Line 43: range 000000000D49156A-000000000D4915AB
void __cdecl data::WidgetCameraExcelConfig::~WidgetCameraExcelConfig(data::WidgetCameraExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetCameraExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetCameraExcelConfig = v2;
};

// Line 43: range 000000000D4915AC-000000000D4915D6
void __cdecl data::WidgetCameraExcelConfig::~WidgetCameraExcelConfig(data::WidgetCameraExcelConfig *const this)
{
  data::WidgetCameraExcelConfig::~WidgetCameraExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 54: range 000000000CE2766C-000000000CE277BD
void __cdecl data::WidgetCameraScanExcelConfig::WidgetCameraScanExcelConfig(
        data::WidgetCameraScanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WidgetCameraScanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetCameraScanExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_id, v3);
  }
  this->camera_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = 0;
  std::vector<unsigned int>::vector(&this->scannable_state);
  if ( *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action, v3);
  }
  this->action = WIDGET_CAMERA_ACTION_NONE;
};

// Line 54: range 000000000D384128-000000000D38436C
void __cdecl data::WidgetCameraScanExcelConfig::WidgetCameraScanExcelConfig(
        data::WidgetCameraScanExcelConfig *const this,
        const data::WidgetCameraScanExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t camera_id; // ecx
  char v7; // dl
  uint32_t config_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_scannable_state; // rsi
  data::WidgetCameraActionType action; // ecx
  char v12; // al
  const data::WidgetCameraScanExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WidgetCameraScanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetCameraScanExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->camera_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->camera_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->camera_id);
  }
  camera_id = v13->camera_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camera_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->camera_id, v5);
  }
  this->camera_id = camera_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->config_id);
  }
  config_id = v13->config_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->config_id, v5);
  }
  this->config_id = config_id;
  p_scannable_state = &v13->scannable_state;
  std::vector<unsigned int>::vector(&this->scannable_state, &v13->scannable_state);
  if ( *(_BYTE *)(((unsigned __int64)&v13->action >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->action >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->action);
  }
  action = v13->action;
  v12 = *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_scannable_state) = v12 != 0;
    __asan_report_store4(&this->action, p_scannable_state);
  }
  this->action = action;
};

// Line 57: range 000000000D4914EC-000000000D49153D
void __cdecl data::WidgetCameraScanExcelConfig::~WidgetCameraScanExcelConfig(
        data::WidgetCameraScanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetCameraScanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetCameraScanExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->scannable_state);
};

// Line 57: range 000000000D49153E-000000000D491568
void __cdecl data::WidgetCameraScanExcelConfig::~WidgetCameraScanExcelConfig(
        data::WidgetCameraScanExcelConfig *const this)
{
  data::WidgetCameraScanExcelConfig::~WidgetCameraScanExcelConfig(this);
  operator delete(this, 0x38uLL);
};
