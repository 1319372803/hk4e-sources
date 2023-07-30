// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBannerExcelConfig.gen.h

// Line 40: range 0000000012EAFF94-0000000012EB00B7
void __cdecl data::ActivityBannerExcelConfig::ActivityBannerExcelConfig(data::ActivityBannerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityBannerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityBannerExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->banner_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->banner_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->banner_type, v3);
  }
  this->banner_type = ACTIVITY_BANNER_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview_id, v3);
  }
  this->reward_preview_id = 0;
  std::string::basic_string(&this->json_config_name);
  std::string::basic_string(&this->prefab_path);
};

// Line 40: range 0000000013388EEC-00000000133890FD
void __cdecl data::ActivityBannerExcelConfig::ActivityBannerExcelConfig(
        data::ActivityBannerExcelConfig *const this,
        const data::ActivityBannerExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ActivityBannerType banner_type; // ecx
  char v7; // dl
  uint32_t reward_preview_id; // ecx
  char v9; // al
  const data::ActivityBannerExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityBannerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityBannerExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->banner_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->banner_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->banner_type);
  }
  banner_type = v10->banner_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->banner_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->banner_type, v5);
  }
  this->banner_type = banner_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_preview_id);
  }
  reward_preview_id = v10->reward_preview_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_preview_id, v5);
  }
  this->reward_preview_id = reward_preview_id;
  std::string::basic_string(&this->json_config_name, &v10->json_config_name);
  std::string::basic_string(&this->prefab_path, &v10->prefab_path);
};

// Line 43: range 0000000013420AB0-0000000013420B11
void __cdecl data::ActivityBannerExcelConfig::~ActivityBannerExcelConfig(data::ActivityBannerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityBannerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityBannerExcelConfig = v2;
  std::string::~string(&this->prefab_path);
  std::string::~string(&this->json_config_name);
};

// Line 43: range 0000000013420B12-0000000013420B3C
void __cdecl data::ActivityBannerExcelConfig::~ActivityBannerExcelConfig(data::ActivityBannerExcelConfig *const this)
{
  data::ActivityBannerExcelConfig::~ActivityBannerExcelConfig(this);
  operator delete(this, 0x58uLL);
};
