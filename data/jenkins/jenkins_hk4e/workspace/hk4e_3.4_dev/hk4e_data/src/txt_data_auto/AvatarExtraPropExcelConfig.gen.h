// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarExtraPropExcelConfig.gen.h

// Line 16: range 0000000012F4A2D0-0000000012F4A3DF
data::ExtraPropConfig *__cdecl data::ExtraPropConfig::operator=(
        data::ExtraPropConfig *const this,
        const data::ExtraPropConfig *a2)
{
  data::FightPropType prop_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t prop_value; // ecx
  char v6; // dl
  const data::ExtraPropConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->prop_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->prop_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->prop_value);
  }
  prop_value = v8->prop_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->prop_value, v4);
  }
  this->prop_value = prop_value;
  return this;
};

// Line 16: range 00000000133D1A2E-00000000133D1AF3
void __cdecl data::ExtraPropConfig::ExtraPropConfig(data::ExtraPropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExtraPropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExtraPropConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_type, v1);
  }
  this->prop_type = FIGHT_PROP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prop_value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->prop_value = 0;
};

// Line 16: range 000000001341D784-000000001341D8C3
void __cdecl data::ExtraPropConfig::ExtraPropConfig(data::ExtraPropConfig *const this, const data::ExtraPropConfig *a2)
{
  int (**v2)(...); // rdx
  data::FightPropType prop_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t prop_value; // ecx
  char v7; // dl
  const data::ExtraPropConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExtraPropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExtraPropConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->prop_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->prop_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->prop_value);
  }
  prop_value = v8->prop_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->prop_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->prop_value, v5);
  }
  this->prop_value = prop_value;
};

// Line 19: range 00000000133D1C3C-00000000133D1C7D
void __cdecl data::ExtraPropConfig::~ExtraPropConfig(data::ExtraPropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExtraPropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExtraPropConfig = v2;
};

// Line 19: range 00000000133D1C7E-00000000133D1CA8
void __cdecl data::ExtraPropConfig::~ExtraPropConfig(data::ExtraPropConfig *const this)
{
  data::ExtraPropConfig::~ExtraPropConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 29: range 0000000013BDD74C-0000000013BDD819
void __cdecl data::AvatarExtraPropExcelConfig::AvatarExtraPropExcelConfig(data::AvatarExtraPropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarExtraPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarExtraPropExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::ExtraPropConfig>::vector(&this->extra_props);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count, v1);
  }
  this->max_count = 0;
};

// Line 29: range 000000001419B78E-000000001419B8D8
void __cdecl data::AvatarExtraPropExcelConfig::AvatarExtraPropExcelConfig(
        data::AvatarExtraPropExcelConfig *const this,
        const data::AvatarExtraPropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::ExtraPropConfig> *p_extra_props; // rsi
  uint32_t max_count; // ecx
  char v7; // al
  const data::AvatarExtraPropExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarExtraPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarExtraPropExcelConfig = v2;
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
  p_extra_props = &v8->extra_props;
  std::vector<data::ExtraPropConfig>::vector(&this->extra_props, &v8->extra_props);
  if ( *(_BYTE *)(((unsigned __int64)&v8->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->max_count);
  }
  max_count = v8->max_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_extra_props) = v7 != 0;
    __asan_report_store4(&this->max_count, p_extra_props);
  }
  this->max_count = max_count;
};

// Line 32: range 00000000142A64D4-00000000142A6525
void __cdecl data::AvatarExtraPropExcelConfig::~AvatarExtraPropExcelConfig(
        data::AvatarExtraPropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarExtraPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarExtraPropExcelConfig = v2;
  std::vector<data::ExtraPropConfig>::~vector(&this->extra_props);
};

// Line 32: range 00000000142A6526-00000000142A6550
void __cdecl data::AvatarExtraPropExcelConfig::~AvatarExtraPropExcelConfig(
        data::AvatarExtraPropExcelConfig *const this)
{
  data::AvatarExtraPropExcelConfig::~AvatarExtraPropExcelConfig(this);
  operator delete(this, 0x30uLL);
};
