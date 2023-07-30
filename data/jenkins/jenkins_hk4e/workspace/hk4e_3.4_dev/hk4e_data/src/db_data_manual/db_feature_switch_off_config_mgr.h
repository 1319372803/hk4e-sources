// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_feature_switch_off_config_mgr.h

// Line 25: range 000000000CE41BE6-000000000CE41C83
void __cdecl data::FeatureSwitchConfig::FeatureSwitchConfig(data::FeatureSwitchConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type);
  }
  this->type = 0;
  std::string::basic_string(&this->msg);
};

// Line 25: range 000000000D3B1636-000000000D3B1753
void __cdecl data::FeatureSwitchConfig::FeatureSwitchConfig(
        data::FeatureSwitchConfig *const this,
        data::FeatureSwitchConfig *a2)
{
  uint32_t id; // ecx
  uint32_t type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type);
  }
  this->type = type;
  std::string::basic_string(&this->msg, &a2->msg);
};

// Line 25: range 000000000CE41C84-000000000CE41CA2
void __cdecl data::FeatureSwitchConfig::~FeatureSwitchConfig(data::FeatureSwitchConfig *const this)
{
  std::string::~string(&this->msg);
};
