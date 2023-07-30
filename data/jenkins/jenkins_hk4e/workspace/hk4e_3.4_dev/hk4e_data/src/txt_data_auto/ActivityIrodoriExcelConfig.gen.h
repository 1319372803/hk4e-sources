// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityIrodoriExcelConfig.gen.h

// Line 275: range 0000000012F1088E-0000000012F10933
data::IrodoriFlowerConfig *__cdecl data::IrodoriFlowerConfig::operator=(
        data::IrodoriFlowerConfig *const this,
        const data::IrodoriFlowerConfig *a2)
{
  std::string *p_slot_identifier; // rsi
  uint32_t config_id; // ecx
  char v4; // al

  p_slot_identifier = &a2->slot_identifier;
  std::string::operator=(&this->slot_identifier, p_slot_identifier);
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_slot_identifier) = v4 != 0;
    __asan_report_store4(&this->config_id, p_slot_identifier);
  }
  this->config_id = config_id;
  return this;
};

// Line 275: range 0000000012A3FFD6-0000000012A40065
void __cdecl data::IrodoriFlowerConfig::IrodoriFlowerConfig(data::IrodoriFlowerConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriFlowerConfig = v2;
  std::string::basic_string(&this->slot_identifier);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
};

// Line 275: range 0000000012A69742-0000000012A69817
void __cdecl data::IrodoriFlowerConfig::IrodoriFlowerConfig(
        data::IrodoriFlowerConfig *const this,
        const data::IrodoriFlowerConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_slot_identifier; // rsi
  uint32_t config_id; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriFlowerConfig = v2;
  p_slot_identifier = &a2->slot_identifier;
  std::string::basic_string(&this->slot_identifier, &a2->slot_identifier);
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_slot_identifier) = v5 != 0;
    __asan_report_store4(&this->config_id, p_slot_identifier);
  }
  this->config_id = config_id;
};

// Line 278: range 0000000012A06C80-0000000012A06CD1
void __cdecl data::IrodoriFlowerConfig::~IrodoriFlowerConfig(data::IrodoriFlowerConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriFlowerConfig = v2;
  std::string::~string(&this->slot_identifier);
};

// Line 278: range 0000000012A06CD2-0000000012A06CFC
void __cdecl data::IrodoriFlowerConfig::~IrodoriFlowerConfig(data::IrodoriFlowerConfig *const this)
{
  data::IrodoriFlowerConfig::~IrodoriFlowerConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 288: range 00000000128D3A80-00000000128D3B0F
void __cdecl data::IrodoriFlowerGroupExcelConfig::IrodoriFlowerGroupExcelConfig(
        data::IrodoriFlowerGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriFlowerGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  std::vector<data::IrodoriFlowerConfig>::vector(&this->flower_list);
};

// Line 288: range 0000000012A69DCE-0000000012A69EA3
void __cdecl data::IrodoriFlowerGroupExcelConfig::IrodoriFlowerGroupExcelConfig(
        data::IrodoriFlowerGroupExcelConfig *const this,
        const data::IrodoriFlowerGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  const data::IrodoriFlowerGroupExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriFlowerGroupExcelConfig = v2;
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
  std::vector<data::IrodoriFlowerConfig>::vector(&this->flower_list, &v5->flower_list);
};

// Line 291: range 0000000012AA0ABC-0000000012AA0AE6
void __cdecl data::IrodoriFlowerGroupExcelConfig::~IrodoriFlowerGroupExcelConfig(
        data::IrodoriFlowerGroupExcelConfig *const this)
{
  data::IrodoriFlowerGroupExcelConfig::~IrodoriFlowerGroupExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 291: range 0000000012AA0A6A-0000000012AA0ABB
void __cdecl data::IrodoriFlowerGroupExcelConfig::~IrodoriFlowerGroupExcelConfig(
        data::IrodoriFlowerGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriFlowerGroupExcelConfig = v2;
  std::vector<data::IrodoriFlowerConfig>::~vector(&this->flower_list);
};

// Line 303: range 00000000128D3B10-00000000128D3D69
void __cdecl data::IrodoriFlowerThemeExcelConfig::IrodoriFlowerThemeExcelConfig(
        data::IrodoriFlowerThemeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerThemeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriFlowerThemeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->theme_id, v1);
  }
  this->theme_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_day, v3);
  }
  this->unlock_day = 0;
  std::vector<unsigned int>::vector(&this->flower_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_unlock_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_unlock_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_unlock_cond_id, v3);
  }
  this->stage_unlock_cond_id = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->theme_unlock_cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->theme_unlock_cond_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->theme_unlock_cond_id, v4);
  }
  this->theme_unlock_cond_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flower_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->flower_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->flower_group_id, v4);
  }
  this->flower_group_id = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = 0;
};

// Line 303: range 0000000012A69FE4-0000000012A6A41C
void __cdecl data::IrodoriFlowerThemeExcelConfig::IrodoriFlowerThemeExcelConfig(
        data::IrodoriFlowerThemeExcelConfig *const this,
        const data::IrodoriFlowerThemeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t theme_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  uint32_t unlock_day; // ecx
  char v9; // al
  std::vector<unsigned int> *p_flower_id; // rsi
  uint32_t stage_unlock_cond_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t theme_unlock_cond_id; // ecx
  char v15; // dl
  uint32_t flower_group_id; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t watcher_id; // ecx
  char v20; // dl
  uint32_t quest_id; // ecx
  char v22; // al
  const data::IrodoriFlowerThemeExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerThemeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriFlowerThemeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->theme_id);
  }
  theme_id = a2->theme_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->theme_id, a2);
  }
  this->theme_id = theme_id;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->gadget_id);
  }
  gadget_id = v23->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->unlock_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->unlock_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->unlock_day);
  }
  unlock_day = v23->unlock_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_day, v5);
  }
  this->unlock_day = unlock_day;
  p_flower_id = &v23->flower_id;
  std::vector<unsigned int>::vector(&this->flower_id, &v23->flower_id);
  if ( *(_BYTE *)(((unsigned __int64)&v23->stage_unlock_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->stage_unlock_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->stage_unlock_cond_id);
  }
  stage_unlock_cond_id = v23->stage_unlock_cond_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->stage_unlock_cond_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_flower_id) = v12 != 0;
    __asan_report_store4(&this->stage_unlock_cond_id, p_flower_id);
  }
  this->stage_unlock_cond_id = stage_unlock_cond_id;
  v13 = (((_BYTE)v23 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->theme_unlock_cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->theme_unlock_cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->theme_unlock_cond_id);
  }
  theme_unlock_cond_id = v23->theme_unlock_cond_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->theme_unlock_cond_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->theme_unlock_cond_id, v13);
  }
  this->theme_unlock_cond_id = theme_unlock_cond_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->flower_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->flower_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->flower_group_id);
  }
  flower_group_id = v23->flower_group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->flower_group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->flower_group_id, v13);
  }
  this->flower_group_id = flower_group_id;
  v18 = (((_BYTE)v23 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->watcher_id);
  }
  watcher_id = v23->watcher_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->watcher_id, v18);
  }
  this->watcher_id = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->quest_id);
  }
  quest_id = v23->quest_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->quest_id, v18);
  }
  this->quest_id = quest_id;
};

// Line 306: range 0000000012AA09EC-0000000012AA0A3D
void __cdecl data::IrodoriFlowerThemeExcelConfig::~IrodoriFlowerThemeExcelConfig(
        data::IrodoriFlowerThemeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriFlowerThemeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriFlowerThemeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->flower_id);
};

// Line 306: range 0000000012AA0A3E-0000000012AA0A68
void __cdecl data::IrodoriFlowerThemeExcelConfig::~IrodoriFlowerThemeExcelConfig(
        data::IrodoriFlowerThemeExcelConfig *const this)
{
  data::IrodoriFlowerThemeExcelConfig::~IrodoriFlowerThemeExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 325: range 0000000012A6A55E-0000000012A6A892
void __cdecl data::IrodoriChessGearExcelConfig::IrodoriChessGearExcelConfig(
        data::IrodoriChessGearExcelConfig *const this,
        const data::IrodoriChessGearExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gear_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t build_cost; // ecx
  char v7; // dl
  uint32_t demolition_refund; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gadget_id; // ecx
  char v12; // dl
  bool is_enable_rotate; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t init_level; // ecx
  char v17; // dl
  const data::IrodoriChessGearExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gear_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gear_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gear_id);
  }
  gear_id = a2->gear_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gear_id, a2);
  }
  this->gear_id = gear_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->build_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->build_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->build_cost);
  }
  build_cost = v18->build_cost;
  v7 = *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->build_cost, v5);
  }
  this->build_cost = build_cost;
  if ( *(_BYTE *)(((unsigned __int64)&v18->demolition_refund >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->demolition_refund);
  }
  demolition_refund = v18->demolition_refund;
  v9 = *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->demolition_refund, v5);
  }
  this->demolition_refund = demolition_refund;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gadget_id);
  }
  gadget_id = v18->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->gadget_id, v10);
  this->gadget_id = gadget_id;
  if ( *(char *)(((unsigned __int64)&v18->is_enable_rotate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_enable_rotate, v10, &v18->is_enable_rotate);
  is_enable_rotate = v18->is_enable_rotate;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_enable_rotate >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_enable_rotate, v10, &this->is_enable_rotate);
  }
  this->is_enable_rotate = is_enable_rotate;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->init_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->init_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->init_level);
  }
  init_level = v18->init_level;
  v17 = *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->init_level, v15);
  }
  this->init_level = init_level;
};

// Line 328: range 0000000012AA09C0-0000000012AA09EA
void __cdecl data::IrodoriChessGearExcelConfig::~IrodoriChessGearExcelConfig(
        data::IrodoriChessGearExcelConfig *const this)
{
  data::IrodoriChessGearExcelConfig::~IrodoriChessGearExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 328: range 0000000012AA097E-0000000012AA09BF
void __cdecl data::IrodoriChessGearExcelConfig::~IrodoriChessGearExcelConfig(
        data::IrodoriChessGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessGearExcelConfig = v2;
};

// Line 344: range 00000000128D3D6A-00000000128D3F01
void __cdecl data::IrodoriChessLevelExcelConfig::IrodoriChessLevelExcelConfig(
        data::IrodoriChessLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_days, v3);
  }
  this->open_days = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normal_map_id, v3);
  }
  this->normal_map_id = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_map_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_map_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hard_map_id, v4);
  }
  this->hard_map_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_hard_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_hard_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_hard_score, v4);
  }
  this->unlock_hard_score = 0;
};

// Line 344: range 0000000012A6A9D4-0000000012A6AC9D
void __cdecl data::IrodoriChessLevelExcelConfig::IrodoriChessLevelExcelConfig(
        data::IrodoriChessLevelExcelConfig *const this,
        const data::IrodoriChessLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_days; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_watcher_list; // rsi
  uint32_t normal_map_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t hard_map_id; // ecx
  char v13; // dl
  uint32_t unlock_hard_score; // ecx
  char v15; // al
  const data::IrodoriChessLevelExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->open_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->open_days);
  }
  open_days = v16->open_days;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_days >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_days, v5);
  }
  this->open_days = open_days;
  p_watcher_list = &v16->watcher_list;
  std::vector<unsigned int>::vector(&this->watcher_list, &v16->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->normal_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->normal_map_id);
  }
  normal_map_id = v16->normal_map_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->normal_map_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_watcher_list) = v10 != 0;
    __asan_report_store4(&this->normal_map_id, p_watcher_list);
  }
  this->normal_map_id = normal_map_id;
  v11 = (((_BYTE)v16 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->hard_map_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->hard_map_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->hard_map_id);
  }
  hard_map_id = v16->hard_map_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->hard_map_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->hard_map_id, v11);
  }
  this->hard_map_id = hard_map_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->unlock_hard_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->unlock_hard_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->unlock_hard_score);
  }
  unlock_hard_score = v16->unlock_hard_score;
  v15 = *(_BYTE *)(((unsigned __int64)&this->unlock_hard_score >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->unlock_hard_score, v11);
  }
  this->unlock_hard_score = unlock_hard_score;
};

// Line 347: range 0000000012AA0952-0000000012AA097C
void __cdecl data::IrodoriChessLevelExcelConfig::~IrodoriChessLevelExcelConfig(
        data::IrodoriChessLevelExcelConfig *const this)
{
  data::IrodoriChessLevelExcelConfig::~IrodoriChessLevelExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 347: range 0000000012AA0900-0000000012AA0951
void __cdecl data::IrodoriChessLevelExcelConfig::~IrodoriChessLevelExcelConfig(
        data::IrodoriChessLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 363: range 00000000128D3F02-00000000128D415D
void __cdecl data::IrodoriChessMapExcelConfig::IrodoriChessMapExcelConfig(data::IrodoriChessMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessMapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_id, v1);
  }
  this->map_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entry_point_id, v3);
  }
  this->entry_point_id = 0;
  std::vector<unsigned int>::vector(&this->card_pool);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_card_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_card_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_card_points, v3);
  }
  this->total_card_points = 0;
  std::map<unsigned int,unsigned int>::map(&this->single_gear_limits);
  if ( *(_BYTE *)(((unsigned __int64)&this->all_gear_limits >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->all_gear_limits >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->all_gear_limits, v3);
  }
  this->all_gear_limits = 0;
  std::vector<unsigned int>::vector(&this->entrance_point_list);
  std::vector<unsigned int>::vector(&this->exit_point_list);
  std::vector<unsigned int>::vector(&this->disorder_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_building_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_building_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_building_points, v3);
  }
  this->init_building_points = 0;
  v4 = ((_BYTE)this - 68) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_hard_map, v4, v5);
  this->is_hard_map = 0;
};

// Line 363: range 0000000012A6ADDE-0000000012A6B27E
void __cdecl data::IrodoriChessMapExcelConfig::IrodoriChessMapExcelConfig(
        data::IrodoriChessMapExcelConfig *const this,
        const data::IrodoriChessMapExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t map_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t entry_point_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_card_pool; // rsi
  uint32_t total_card_points; // ecx
  char v12; // al
  std::map<unsigned int,unsigned int> *p_single_gear_limits; // rsi
  uint32_t all_gear_limits; // ecx
  char v15; // al
  std::vector<unsigned int> *p_disorder_list; // rsi
  uint32_t init_building_points; // ecx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_hard_map; // cl
  char v22; // dl
  __int64 v23; // rdx
  const data::IrodoriChessMapExcelConfig *v24; // [rsp+0h] [rbp-20h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessMapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->map_id);
  }
  map_id = a2->map_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->map_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->map_id, a2);
  }
  this->map_id = map_id;
  v5 = (((_BYTE)v24 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->dungeon_id);
  }
  dungeon_id = v24->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v24->entry_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->entry_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->entry_point_id);
  }
  entry_point_id = v24->entry_point_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->entry_point_id, v5);
  }
  this->entry_point_id = entry_point_id;
  p_card_pool = &v24->card_pool;
  std::vector<unsigned int>::vector(&this->card_pool, &v24->card_pool);
  if ( *(_BYTE *)(((unsigned __int64)&v24->total_card_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->total_card_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->total_card_points);
  }
  total_card_points = v24->total_card_points;
  v12 = *(_BYTE *)(((unsigned __int64)&this->total_card_points >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_card_pool) = v12 != 0;
    __asan_report_store4(&this->total_card_points, p_card_pool);
  }
  this->total_card_points = total_card_points;
  p_single_gear_limits = &v24->single_gear_limits;
  std::map<unsigned int,unsigned int>::map(&this->single_gear_limits, &v24->single_gear_limits);
  if ( *(_BYTE *)(((unsigned __int64)&v24->all_gear_limits >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->all_gear_limits >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->all_gear_limits);
  }
  all_gear_limits = v24->all_gear_limits;
  v15 = *(_BYTE *)(((unsigned __int64)&this->all_gear_limits >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_single_gear_limits) = v15 != 0;
    __asan_report_store4(&this->all_gear_limits, p_single_gear_limits);
  }
  this->all_gear_limits = all_gear_limits;
  std::vector<unsigned int>::vector(&this->entrance_point_list, &v24->entrance_point_list);
  std::vector<unsigned int>::vector(&this->exit_point_list, &v24->exit_point_list);
  p_disorder_list = &v24->disorder_list;
  std::vector<unsigned int>::vector(&this->disorder_list, &v24->disorder_list);
  if ( *(_BYTE *)(((unsigned __int64)&v24->init_building_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->init_building_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->init_building_points);
  }
  init_building_points = v24->init_building_points;
  v18 = *(_BYTE *)(((unsigned __int64)&this->init_building_points >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_disorder_list) = v18 != 0;
    __asan_report_store4(&this->init_building_points, p_disorder_list);
  }
  this->init_building_points = init_building_points;
  v19 = ((_BYTE)v24 - 68) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v24->is_hard_map >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v24->is_hard_map >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v24->is_hard_map, v19, v20);
  is_hard_map = v24->is_hard_map;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_hard_map >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_hard_map, v19, v23);
  this->is_hard_map = is_hard_map;
};

// Line 366: range 0000000012AA08D4-0000000012AA08FE
void __cdecl data::IrodoriChessMapExcelConfig::~IrodoriChessMapExcelConfig(
        data::IrodoriChessMapExcelConfig *const this)
{
  data::IrodoriChessMapExcelConfig::~IrodoriChessMapExcelConfig(this);
  operator delete(this, 0xC0uLL);
};

// Line 366: range 0000000012AA083E-0000000012AA08D3
void __cdecl data::IrodoriChessMapExcelConfig::~IrodoriChessMapExcelConfig(
        data::IrodoriChessMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessMapExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->disorder_list);
  std::vector<unsigned int>::~vector(&this->exit_point_list);
  std::vector<unsigned int>::~vector(&this->entrance_point_list);
  std::map<unsigned int,unsigned int>::~map(&this->single_gear_limits);
  std::vector<unsigned int>::~vector(&this->card_pool);
};

// Line 388: range 00000000128D415E-00000000128D41ED
void __cdecl data::IrodoriChessMapPointExcelConfig::IrodoriChessMapPointExcelConfig(
        data::IrodoriChessMapPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessMapPointExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->monster_pool_list);
};

// Line 388: range 0000000012A6B3C0-0000000012A6B495
void __cdecl data::IrodoriChessMapPointExcelConfig::IrodoriChessMapPointExcelConfig(
        data::IrodoriChessMapPointExcelConfig *const this,
        const data::IrodoriChessMapPointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::IrodoriChessMapPointExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessMapPointExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->monster_pool_list, &v5->monster_pool_list);
};

// Line 391: range 0000000012AA0812-0000000012AA083C
void __cdecl data::IrodoriChessMapPointExcelConfig::~IrodoriChessMapPointExcelConfig(
        data::IrodoriChessMapPointExcelConfig *const this)
{
  data::IrodoriChessMapPointExcelConfig::~IrodoriChessMapPointExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 391: range 0000000012AA07C0-0000000012AA0811
void __cdecl data::IrodoriChessMapPointExcelConfig::~IrodoriChessMapPointExcelConfig(
        data::IrodoriChessMapPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessMapPointExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->monster_pool_list);
};

// Line 403: range 0000000012A6B5D6-0000000012A6B690
void __cdecl data::IrodoriChessDisorderExcelConfig::IrodoriChessDisorderExcelConfig(
        data::IrodoriChessDisorderExcelConfig *const this,
        const data::IrodoriChessDisorderExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t disorder_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessDisorderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessDisorderExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disorder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->disorder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->disorder_id);
  }
  disorder_id = a2->disorder_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->disorder_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->disorder_id, a2);
  }
  this->disorder_id = disorder_id;
};

// Line 406: range 0000000012AA0794-0000000012AA07BE
void __cdecl data::IrodoriChessDisorderExcelConfig::~IrodoriChessDisorderExcelConfig(
        data::IrodoriChessDisorderExcelConfig *const this)
{
  data::IrodoriChessDisorderExcelConfig::~IrodoriChessDisorderExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 406: range 0000000012AA0752-0000000012AA0793
void __cdecl data::IrodoriChessDisorderExcelConfig::~IrodoriChessDisorderExcelConfig(
        data::IrodoriChessDisorderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessDisorderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessDisorderExcelConfig = v2;
};

// Line 417: range 0000000012F11B8A-0000000012F11EB3
data::IrodoriChessCardEffect *__cdecl data::IrodoriChessCardEffect::operator=(
        data::IrodoriChessCardEffect *const this,
        const data::IrodoriChessCardEffect *a2)
{
  data::IrodoriChessCardTargetType target_type; // ecx
  char v3; // al
  std::vector<unsigned int> *p_target_param_list; // rsi
  data::IrodoriChessCardEffectType effect_type; // ecx
  char v6; // al
  std::string *p_effect_str_param; // rsi
  int32_t effect_param1; // ecx
  char v9; // al
  __int64 v10; // rsi
  int32_t effect_param2; // ecx
  char v12; // dl
  int32_t effect_param3; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t effect_index; // ecx
  char v17; // dl
  const data::IrodoriChessCardEffect *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->target_type, a2);
  }
  this->target_type = target_type;
  p_target_param_list = &v19->target_param_list;
  std::vector<unsigned int>::operator=(&this->target_param_list, &v19->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_type);
  }
  effect_type = v19->effect_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_target_param_list) = v6 != 0;
    __asan_report_store4(&this->effect_type, p_target_param_list);
  }
  this->effect_type = effect_type;
  p_effect_str_param = &v19->effect_str_param;
  std::string::operator=(&this->effect_str_param, &v19->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_param1);
  }
  effect_param1 = v19->effect_param1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_effect_str_param) = v9 != 0;
    __asan_report_store4(&this->effect_param1, p_effect_str_param);
  }
  this->effect_param1 = effect_param1;
  v10 = (((_BYTE)v19 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->effect_param2);
  }
  effect_param2 = v19->effect_param2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->effect_param2, v10);
  }
  this->effect_param2 = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_param3);
  }
  effect_param3 = v19->effect_param3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->effect_param3, v10);
  }
  this->effect_param3 = effect_param3;
  v15 = (((_BYTE)v19 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->effect_index);
  }
  effect_index = v19->effect_index;
  v17 = *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->effect_index, v15);
  }
  this->effect_index = effect_index;
  return this;
};

// Line 417: range 00000000128D41EE-00000000128D43D3
void __cdecl data::IrodoriChessCardEffect::IrodoriChessCardEffect(data::IrodoriChessCardEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessCardEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessCardEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v1);
  }
  this->target_type = IRODORI_CHESS_CARD_TARGET_DEFAULT;
  std::vector<unsigned int>::vector(&this->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type, v1);
  }
  this->effect_type = IRODORI_CHESS_CARD_EFFECT_DEFAULT;
  std::string::basic_string(&this->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_param1, v1);
  }
  this->effect_param1 = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_param2, v3);
  }
  this->effect_param2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_param3, v3);
  }
  this->effect_param3 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_index, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->effect_index = 0;
};

// Line 417: range 0000000012A69886-0000000012A69C06
void __cdecl data::IrodoriChessCardEffect::IrodoriChessCardEffect(
        data::IrodoriChessCardEffect *const this,
        const data::IrodoriChessCardEffect *a2)
{
  int (**v2)(...); // rdx
  data::IrodoriChessCardTargetType target_type; // ecx
  char v4; // al
  std::vector<unsigned int> *p_target_param_list; // rsi
  data::IrodoriChessCardEffectType effect_type; // ecx
  char v7; // al
  std::string *p_effect_str_param; // rsi
  int32_t effect_param1; // ecx
  char v10; // al
  __int64 v11; // rsi
  int32_t effect_param2; // ecx
  char v13; // dl
  int32_t effect_param3; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t effect_index; // ecx
  char v18; // dl
  const data::IrodoriChessCardEffect *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessCardEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessCardEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->target_type, a2);
  }
  this->target_type = target_type;
  p_target_param_list = &v19->target_param_list;
  std::vector<unsigned int>::vector(&this->target_param_list, &v19->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_type);
  }
  effect_type = v19->effect_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_target_param_list) = v7 != 0;
    __asan_report_store4(&this->effect_type, p_target_param_list);
  }
  this->effect_type = effect_type;
  p_effect_str_param = &v19->effect_str_param;
  std::string::basic_string(&this->effect_str_param, &v19->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_param1);
  }
  effect_param1 = v19->effect_param1;
  v10 = *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_effect_str_param) = v10 != 0;
    __asan_report_store4(&this->effect_param1, p_effect_str_param);
  }
  this->effect_param1 = effect_param1;
  v11 = (((_BYTE)v19 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->effect_param2);
  }
  effect_param2 = v19->effect_param2;
  v13 = *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->effect_param2, v11);
  }
  this->effect_param2 = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_param3);
  }
  effect_param3 = v19->effect_param3;
  v15 = *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->effect_param3, v11);
  }
  this->effect_param3 = effect_param3;
  v16 = (((_BYTE)v19 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->effect_index);
  }
  effect_index = v19->effect_index;
  v18 = *(_BYTE *)(((unsigned __int64)&this->effect_index >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->effect_index, v16);
  }
  this->effect_index = effect_index;
};

// Line 420: range 0000000012AA0726-0000000012AA0750
void __cdecl data::IrodoriChessCardEffect::~IrodoriChessCardEffect(data::IrodoriChessCardEffect *const this)
{
  data::IrodoriChessCardEffect::~IrodoriChessCardEffect(this);
  operator delete(this, 0x60uLL);
};

// Line 420: range 0000000012AA06C4-0000000012AA0725
void __cdecl data::IrodoriChessCardEffect::~IrodoriChessCardEffect(data::IrodoriChessCardEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessCardEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessCardEffect = v2;
  std::string::~string(&this->effect_str_param);
  std::vector<unsigned int>::~vector(&this->target_param_list);
};

// Line 450: range 00000000128D4428-00000000128D4550
void __cdecl data::IrodoriChessCardExcelConfig::IrodoriChessCardExcelConfig(
        data::IrodoriChessCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessCardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_points, v3);
  }
  this->cost_points = 0;
  data::IrodoriChessCardEffect::IrodoriChessCardEffect(&this->effect);
  std::vector<data::IrodoriChessCardEffect>::vector(&this->extra_effect_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type, v3);
  }
  this->card_type = IRODORI_CHESS_CARD_MECHANISM;
};

// Line 450: range 0000000012A6B7D2-0000000012A6B9ED
void __cdecl data::IrodoriChessCardExcelConfig::IrodoriChessCardExcelConfig(
        data::IrodoriChessCardExcelConfig *const this,
        const data::IrodoriChessCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t cost_points; // ecx
  char v7; // dl
  std::vector<data::IrodoriChessCardEffect> *p_extra_effect_list; // rsi
  data::IrodoriChessCardType card_type; // ecx
  char v10; // al
  const data::IrodoriChessCardExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriChessCardExcelConfig = v2;
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
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->cost_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->cost_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->cost_points);
  }
  cost_points = v11->cost_points;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cost_points, v5);
  }
  this->cost_points = cost_points;
  data::IrodoriChessCardEffect::IrodoriChessCardEffect(&this->effect, &v11->effect);
  p_extra_effect_list = &v11->extra_effect_list;
  std::vector<data::IrodoriChessCardEffect>::vector(&this->extra_effect_list, &v11->extra_effect_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->card_type);
  }
  card_type = v11->card_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_extra_effect_list) = v10 != 0;
    __asan_report_store4(&this->card_type, p_extra_effect_list);
  }
  this->card_type = card_type;
};

// Line 453: range 0000000012AA0636-0000000012AA0697
void __cdecl data::IrodoriChessCardExcelConfig::~IrodoriChessCardExcelConfig(
        data::IrodoriChessCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriChessCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriChessCardExcelConfig = v2;
  std::vector<data::IrodoriChessCardEffect>::~vector(&this->extra_effect_list);
  data::IrodoriChessCardEffect::~IrodoriChessCardEffect(&this->effect);
};

// Line 453: range 0000000012AA0698-0000000012AA06C2
void __cdecl data::IrodoriChessCardExcelConfig::~IrodoriChessCardExcelConfig(
        data::IrodoriChessCardExcelConfig *const this)
{
  data::IrodoriChessCardExcelConfig::~IrodoriChessCardExcelConfig(this);
  operator delete(this, 0x90uLL);
};

// Line 468: range 00000000128D4552-00000000128D4837
void __cdecl data::IrodoriMasterExcelConfig::IrodoriMasterExcelConfig(data::IrodoriMasterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriMasterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriMasterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_id, v3);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_type, v3);
  }
  this->level_type = IRODORI_MASTER_LEVEL_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_day, v4);
  }
  this->unlock_day = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->sliver_challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sliver_challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sliver_challenge_id, v4);
  }
  this->sliver_challenge_id = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_challenge_id, v5);
  }
  this->gold_challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_challenge_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gold_challenge_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gold_challenge_time, v5);
  }
  this->gold_challenge_time = 0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_id, v6);
  }
  this->cond_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_cond_id, v6);
  }
  this->guide_cond_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_quest_id, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->guide_quest_id = 0;
};

// Line 468: range 0000000012A6BB2E-0000000012A6C070
void __cdecl data::IrodoriMasterExcelConfig::IrodoriMasterExcelConfig(
        data::IrodoriMasterExcelConfig *const this,
        const data::IrodoriMasterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level_id; // ecx
  char v7; // dl
  data::IrodoriMasterLevelType level_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t unlock_day; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_watcher_list; // rsi
  uint32_t sliver_challenge_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t gold_challenge_id; // ecx
  char v18; // dl
  uint32_t gold_challenge_time; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t cond_id; // ecx
  char v23; // dl
  uint32_t guide_cond_id; // ecx
  char v25; // al
  __int64 v26; // rsi
  uint32_t guide_quest_id; // ecx
  char v28; // dl
  const data::IrodoriMasterExcelConfig *v29; // [rsp+0h] [rbp-10h]

  v29 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriMasterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriMasterExcelConfig = v2;
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
  v5 = (((_BYTE)v29 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->level_id);
  }
  level_id = v29->level_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_id, v5);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&v29->level_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->level_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->level_type);
  }
  level_type = v29->level_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_type, v5);
  }
  this->level_type = level_type;
  v10 = (((_BYTE)v29 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->unlock_day);
  }
  unlock_day = v29->unlock_day;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_day, v10);
  }
  this->unlock_day = unlock_day;
  p_watcher_list = &v29->watcher_list;
  std::vector<unsigned int>::vector(&this->watcher_list, &v29->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v29->sliver_challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->sliver_challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->sliver_challenge_id);
  }
  sliver_challenge_id = v29->sliver_challenge_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->sliver_challenge_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_watcher_list) = v15 != 0;
    __asan_report_store4(&this->sliver_challenge_id, p_watcher_list);
  }
  this->sliver_challenge_id = sliver_challenge_id;
  v16 = (((_BYTE)v29 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->gold_challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->gold_challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->gold_challenge_id);
  }
  gold_challenge_id = v29->gold_challenge_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->gold_challenge_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->gold_challenge_id, v16);
  }
  this->gold_challenge_id = gold_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&v29->gold_challenge_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->gold_challenge_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->gold_challenge_time);
  }
  gold_challenge_time = v29->gold_challenge_time;
  v20 = *(_BYTE *)(((unsigned __int64)&this->gold_challenge_time >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->gold_challenge_time, v16);
  }
  this->gold_challenge_time = gold_challenge_time;
  v21 = (((_BYTE)v29 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->cond_id);
  }
  cond_id = v29->cond_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->cond_id, v21);
  }
  this->cond_id = cond_id;
  if ( *(_BYTE *)(((unsigned __int64)&v29->guide_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->guide_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->guide_cond_id);
  }
  guide_cond_id = v29->guide_cond_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->guide_cond_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->guide_cond_id, v21);
  }
  this->guide_cond_id = guide_cond_id;
  v26 = (((_BYTE)v29 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->guide_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->guide_quest_id);
  }
  guide_quest_id = v29->guide_quest_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->guide_quest_id, v26);
  }
  this->guide_quest_id = guide_quest_id;
};

// Line 471: range 0000000012AA060A-0000000012AA0634
void __cdecl data::IrodoriMasterExcelConfig::~IrodoriMasterExcelConfig(data::IrodoriMasterExcelConfig *const this)
{
  data::IrodoriMasterExcelConfig::~IrodoriMasterExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 471: range 0000000012AA05B8-0000000012AA0609
void __cdecl data::IrodoriMasterExcelConfig::~IrodoriMasterExcelConfig(data::IrodoriMasterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriMasterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriMasterExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 492: range 00000000128D4838-00000000128D4A2D
void __cdecl data::IrodoriMasterLevelExcelConfig::IrodoriMasterLevelExcelConfig(
        data::IrodoriMasterLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriMasterLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriMasterLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id, v4);
  }
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  std::string::basic_string(&this->cutscene);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_ability_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_ability_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_ability_group_index, v4);
  }
  this->gallery_ability_group_index = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
  std::vector<unsigned int>::vector(&this->watcher_list);
};

// Line 492: range 0000000012A6C1B2-0000000012A6C562
void __cdecl data::IrodoriMasterLevelExcelConfig::IrodoriMasterLevelExcelConfig(
        data::IrodoriMasterLevelExcelConfig *const this,
        const data::IrodoriMasterLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t point_id; // ecx
  char v12; // dl
  uint32_t gallery_id; // ecx
  char v14; // al
  std::string *p_cutscene; // rsi
  uint32_t gallery_ability_group_index; // ecx
  char v17; // al
  const data::IrodoriMasterLevelExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriMasterLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriMasterLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->scene_id);
  }
  scene_id = v18->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->point_id);
  }
  point_id = v18->point_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->point_id, v10);
  }
  this->point_id = point_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->gallery_id);
  }
  gallery_id = v18->gallery_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  p_cutscene = &v18->cutscene;
  std::string::basic_string(&this->cutscene, &v18->cutscene);
  if ( *(_BYTE *)(((unsigned __int64)&v18->gallery_ability_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->gallery_ability_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->gallery_ability_group_index);
  }
  gallery_ability_group_index = v18->gallery_ability_group_index;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gallery_ability_group_index >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_cutscene) = v17 != 0;
    __asan_report_store4(&this->gallery_ability_group_index, p_cutscene);
  }
  this->gallery_ability_group_index = gallery_ability_group_index;
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v18->trial_avatar_list);
  std::vector<unsigned int>::vector(&this->watcher_list, &v18->watcher_list);
};

// Line 495: range 0000000012AA051A-0000000012AA058B
void __cdecl data::IrodoriMasterLevelExcelConfig::~IrodoriMasterLevelExcelConfig(
        data::IrodoriMasterLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriMasterLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriMasterLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
  std::string::~string(&this->cutscene);
};

// Line 495: range 0000000012AA058C-0000000012AA05B6
void __cdecl data::IrodoriMasterLevelExcelConfig::~IrodoriMasterLevelExcelConfig(
        data::IrodoriMasterLevelExcelConfig *const this)
{
  data::IrodoriMasterLevelExcelConfig::~IrodoriMasterLevelExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 514: range 0000000012F12038-0000000012F120DD
data::IrodoriPoetryScanConfig *__cdecl data::IrodoriPoetryScanConfig::operator=(
        data::IrodoriPoetryScanConfig *const this,
        const data::IrodoriPoetryScanConfig *a2)
{
  std::vector<unsigned int> *p_index_id_list; // rsi
  uint32_t line_id; // ecx
  char v4; // al

  p_index_id_list = &a2->index_id_list;
  std::vector<unsigned int>::operator=(&this->index_id_list, p_index_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->line_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->line_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->line_id);
  }
  line_id = a2->line_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->line_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_index_id_list) = v4 != 0;
    __asan_report_store4(&this->line_id, p_index_id_list);
  }
  this->line_id = line_id;
  return this;
};

// Line 514: range 0000000012A40322-0000000012A403B1
void __cdecl data::IrodoriPoetryScanConfig::IrodoriPoetryScanConfig(data::IrodoriPoetryScanConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryScanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriPoetryScanConfig = v2;
  std::vector<unsigned int>::vector(&this->index_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->line_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->line_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->line_id, v1);
  }
  this->line_id = 0;
};

// Line 514: range 0000000012A69C76-0000000012A69D4B
void __cdecl data::IrodoriPoetryScanConfig::IrodoriPoetryScanConfig(
        data::IrodoriPoetryScanConfig *const this,
        const data::IrodoriPoetryScanConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<unsigned int> *p_index_id_list; // rsi
  uint32_t line_id; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryScanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriPoetryScanConfig = v2;
  p_index_id_list = &a2->index_id_list;
  std::vector<unsigned int>::vector(&this->index_id_list, &a2->index_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->line_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->line_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->line_id);
  }
  line_id = a2->line_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->line_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_index_id_list) = v5 != 0;
    __asan_report_store4(&this->line_id, p_index_id_list);
  }
  this->line_id = line_id;
};

// Line 517: range 0000000012A0A8A2-0000000012A0A8CC
void __cdecl data::IrodoriPoetryScanConfig::~IrodoriPoetryScanConfig(data::IrodoriPoetryScanConfig *const this)
{
  data::IrodoriPoetryScanConfig::~IrodoriPoetryScanConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 517: range 0000000012A0A850-0000000012A0A8A1
void __cdecl data::IrodoriPoetryScanConfig::~IrodoriPoetryScanConfig(data::IrodoriPoetryScanConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryScanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriPoetryScanConfig = v2;
  std::vector<unsigned int>::~vector(&this->index_id_list);
};

// Line 527: range 00000000128D4A82-00000000128D4DB5
void __cdecl data::IrodoriPoetryExcelConfig::IrodoriPoetryExcelConfig(data::IrodoriPoetryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriPoetryExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_id, v3);
  }
  this->cond_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->theme_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->theme_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->theme_cond_id, v3);
  }
  this->theme_cond_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_day, v4);
  }
  this->unlock_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_type, v4);
  }
  this->entity_type = IRODORI_POETRY_ENTITY_TYPE_NONE;
  std::vector<data::IrodoriPoetryScanConfig>::vector(&this->scan_config_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_quest_id, v4);
  }
  this->main_quest_id = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_inspiration_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_inspiration_quest_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_inspiration_quest_id, v5);
  }
  this->min_inspiration_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fill_poetry_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fill_poetry_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fill_poetry_quest_id, v5);
  }
  this->fill_poetry_quest_id = 0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_inspiration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_inspiration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_inspiration, v6);
  }
  this->min_inspiration = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inspiration_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inspiration_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inspiration_limit, v6);
  }
  this->inspiration_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->watcher_id, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->watcher_id = 0;
  std::vector<unsigned int>::vector(&this->exists_line_id_list);
};

// Line 527: range 0000000012A6C6A4-0000000012A6CC9D
void __cdecl data::IrodoriPoetryExcelConfig::IrodoriPoetryExcelConfig(
        data::IrodoriPoetryExcelConfig *const this,
        const data::IrodoriPoetryExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t cond_id; // ecx
  char v7; // dl
  uint32_t theme_cond_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t unlock_day; // ecx
  char v12; // dl
  data::IrodoriPoetryEntityType entity_type; // ecx
  char v14; // al
  std::vector<data::IrodoriPoetryScanConfig> *p_scan_config_list; // rsi
  uint32_t main_quest_id; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t min_inspiration_quest_id; // ecx
  char v20; // dl
  uint32_t fill_poetry_quest_id; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t min_inspiration; // ecx
  char v25; // dl
  uint32_t inspiration_limit; // ecx
  char v27; // al
  __int64 v28; // rsi
  uint32_t watcher_id; // ecx
  char v30; // dl
  const data::IrodoriPoetryExcelConfig *v31; // [rsp+0h] [rbp-20h]

  v31 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriPoetryExcelConfig = v2;
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
  v5 = (((_BYTE)v31 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->cond_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->cond_id);
  }
  cond_id = v31->cond_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_id, v5);
  }
  this->cond_id = cond_id;
  if ( *(_BYTE *)(((unsigned __int64)&v31->theme_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->theme_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->theme_cond_id);
  }
  theme_cond_id = v31->theme_cond_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->theme_cond_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->theme_cond_id, v5);
  }
  this->theme_cond_id = theme_cond_id;
  v10 = (((_BYTE)v31 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->unlock_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->unlock_day);
  }
  unlock_day = v31->unlock_day;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_day >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_day, v10);
  }
  this->unlock_day = unlock_day;
  if ( *(_BYTE *)(((unsigned __int64)&v31->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->entity_type);
  }
  entity_type = v31->entity_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->entity_type, v10);
  }
  this->entity_type = entity_type;
  p_scan_config_list = &v31->scan_config_list;
  std::vector<data::IrodoriPoetryScanConfig>::vector(&this->scan_config_list, &v31->scan_config_list);
  if ( *(_BYTE *)(((unsigned __int64)&v31->main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->main_quest_id);
  }
  main_quest_id = v31->main_quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_scan_config_list) = v17 != 0;
    __asan_report_store4(&this->main_quest_id, p_scan_config_list);
  }
  this->main_quest_id = main_quest_id;
  v18 = (((_BYTE)v31 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->min_inspiration_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->min_inspiration_quest_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->min_inspiration_quest_id);
  }
  min_inspiration_quest_id = v31->min_inspiration_quest_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->min_inspiration_quest_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->min_inspiration_quest_id, v18);
  }
  this->min_inspiration_quest_id = min_inspiration_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v31->fill_poetry_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->fill_poetry_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->fill_poetry_quest_id);
  }
  fill_poetry_quest_id = v31->fill_poetry_quest_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->fill_poetry_quest_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->fill_poetry_quest_id, v18);
  }
  this->fill_poetry_quest_id = fill_poetry_quest_id;
  v23 = (((_BYTE)v31 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->min_inspiration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->min_inspiration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->min_inspiration);
  }
  min_inspiration = v31->min_inspiration;
  v25 = *(_BYTE *)(((unsigned __int64)&this->min_inspiration >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->min_inspiration, v23);
  }
  this->min_inspiration = min_inspiration;
  if ( *(_BYTE *)(((unsigned __int64)&v31->inspiration_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->inspiration_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->inspiration_limit);
  }
  inspiration_limit = v31->inspiration_limit;
  v27 = *(_BYTE *)(((unsigned __int64)&this->inspiration_limit >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v23) = v27 != 0;
    __asan_report_store4(&this->inspiration_limit, v23);
  }
  this->inspiration_limit = inspiration_limit;
  v28 = (((_BYTE)v31 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->watcher_id);
  }
  watcher_id = v31->watcher_id;
  v30 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v30 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v30 )
  {
    LOBYTE(v28) = v30 != 0;
    __asan_report_store4(&this->watcher_id, v28);
  }
  this->watcher_id = watcher_id;
  std::vector<unsigned int>::vector(&this->exists_line_id_list, &v31->exists_line_id_list);
};

// Line 530: range 0000000012AA048C-0000000012AA04ED
void __cdecl data::IrodoriPoetryExcelConfig::~IrodoriPoetryExcelConfig(data::IrodoriPoetryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriPoetryExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->exists_line_id_list);
  std::vector<data::IrodoriPoetryScanConfig>::~vector(&this->scan_config_list);
};

// Line 530: range 0000000012AA04EE-0000000012AA0518
void __cdecl data::IrodoriPoetryExcelConfig::~IrodoriPoetryExcelConfig(data::IrodoriPoetryExcelConfig *const this)
{
  data::IrodoriPoetryExcelConfig::~IrodoriPoetryExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 553: range 0000000012A6CDDE-0000000012A6CF1D
void __cdecl data::IrodoriPoetryLineExcelConfig::IrodoriPoetryLineExcelConfig(
        data::IrodoriPoetryLineExcelConfig *const this,
        const data::IrodoriPoetryLineExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t var; // ecx
  char v7; // dl
  const data::IrodoriPoetryLineExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryLineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IrodoriPoetryLineExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->var >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->var >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->var);
  }
  var = v8->var;
  v7 = *(_BYTE *)(((unsigned __int64)&this->var >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->var, v5);
  }
  this->var = var;
};

// Line 556: range 0000000012AA0460-0000000012AA048A
void __cdecl data::IrodoriPoetryLineExcelConfig::~IrodoriPoetryLineExcelConfig(
        data::IrodoriPoetryLineExcelConfig *const this)
{
  data::IrodoriPoetryLineExcelConfig::~IrodoriPoetryLineExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 556: range 0000000012AA041E-0000000012AA045F
void __cdecl data::IrodoriPoetryLineExcelConfig::~IrodoriPoetryLineExcelConfig(
        data::IrodoriPoetryLineExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IrodoriPoetryLineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IrodoriPoetryLineExcelConfig = v2;
};
