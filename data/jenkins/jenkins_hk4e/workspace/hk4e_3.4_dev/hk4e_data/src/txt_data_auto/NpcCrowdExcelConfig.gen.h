// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/NpcCrowdExcelConfig.gen.h

// Line 17: range 0000000014779738-00000000147797D0
void __cdecl data::NpcCrowdExcelConfig::NpcCrowdExcelConfig(data::NpcCrowdExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::EntityExcelConfig::EntityExcelConfig((data::EntityExcelConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::NpcCrowdExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->config_id = 0;
};

// Line 17: range 0000000014D59546-0000000014D5962D
void __cdecl data::NpcCrowdExcelConfig::NpcCrowdExcelConfig(
        data::NpcCrowdExcelConfig *const this,
        const data::NpcCrowdExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t config_id; // ecx
  char v5; // dl

  data::EntityExcelConfig::EntityExcelConfig((data::EntityExcelConfig *const)this, (const data::EntityExcelConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::NpcCrowdExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
  v3 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = config_id;
};

// Line 21: range 0000000014DE6F1C-0000000014DE6F69
void __cdecl data::NpcCrowdExcelConfig::~NpcCrowdExcelConfig(data::NpcCrowdExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcCrowdExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  data::EntityExcelConfig::~EntityExcelConfig((data::EntityExcelConfig *const)this);
};

// Line 21: range 0000000014DE6F6A-0000000014DE6F94
void __cdecl data::NpcCrowdExcelConfig::~NpcCrowdExcelConfig(data::NpcCrowdExcelConfig *const this)
{
  data::NpcCrowdExcelConfig::~NpcCrowdExcelConfig(this);
  operator delete(this, 0x158uLL);
};
