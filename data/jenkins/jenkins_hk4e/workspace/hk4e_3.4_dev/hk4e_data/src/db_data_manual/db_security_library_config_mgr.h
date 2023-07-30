// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_security_library_config_mgr.h

// Line 23: range 000000000CE47032-000000000CE470D4
void __cdecl data::DbSecurityLibraryConfig::DbSecurityLibraryConfig(data::DbSecurityLibraryConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->platform_type = 0;
  std::string::basic_string(&this->version_str);
  std::unordered_set<std::string>::unordered_set(&this->md5_set);
  if ( *(char *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_forbid_login);
  this->is_forbid_login = 0;
};

// Line 23: range 000000000D3C407C-000000000D3C41A5
void __cdecl data::DbSecurityLibraryConfig::DbSecurityLibraryConfig(
        data::DbSecurityLibraryConfig *const this,
        data::DbSecurityLibraryConfig *a2)
{
  uint32_t platform_type; // ecx
  bool is_forbid_login; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  platform_type = a2->platform_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->platform_type = platform_type;
  std::string::basic_string(&this->version_str, &a2->version_str);
  std::unordered_set<std::string>::unordered_set(&this->md5_set, &a2->md5_set);
  if ( *(char *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_forbid_login);
  is_forbid_login = a2->is_forbid_login;
  if ( *(char *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_forbid_login);
  this->is_forbid_login = is_forbid_login;
};

// Line 23: range 000000000CE470D6-000000000CE47104
void __cdecl data::DbSecurityLibraryConfig::~DbSecurityLibraryConfig(data::DbSecurityLibraryConfig *const this)
{
  std::unordered_set<std::string>::~unordered_set(&this->md5_set);
  std::string::~string(&this->version_str);
};
