// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ShopmallExcelConfig.h

// Line 18: range 000000000D35E8B2-000000000D35E8DC
void __cdecl PlatformProductInfo::PlatformProductInfo(PlatformProductInfo *const this)
{
  std::string::basic_string(this);
  std::map<unsigned int,std::string>::map(&this->platform_2_product_map);
};

// Line 18: range 000000000D2C69AA-000000000D2C69D4
void __cdecl PlatformProductInfo::~PlatformProductInfo(PlatformProductInfo *const this)
{
  std::map<unsigned int,std::string>::~map(&this->platform_2_product_map);
  std::string::~string(this);
};

// Line 24: range 000000000D35E8DE-000000000D35E92C
void __cdecl ConfigProductInfo::ConfigProductInfo(ConfigProductInfo *const this)
{
  PlatformProductInfo::PlatformProductInfo(&this->internal_info);
  PlatformProductInfo::PlatformProductInfo(&this->abroad_info);
  std::string::basic_string(&this->psn_product_id);
  std::string::basic_string(&this->epic_product_id);
};

// Line 24: range 000000000D2C69D6-000000000D2C6A24
void __cdecl ConfigProductInfo::~ConfigProductInfo(ConfigProductInfo *const this)
{
  std::string::~string(&this->epic_product_id);
  std::string::~string(&this->psn_product_id);
  PlatformProductInfo::~PlatformProductInfo(&this->abroad_info);
  PlatformProductInfo::~PlatformProductInfo(&this->internal_info);
};

// Line 71: range 000000000CE01C80-000000000CE01CCB
uint32_t __cdecl ShopmallExcelConfigMgr::getAuditMcoinFromTier(
        const ShopmallExcelConfigMgr *const this,
        const data::PriceTierConfig *tier_config)
{
  if ( *(_BYTE *)(((unsigned __int64)&tier_config->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tier_config->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tier_config->vip_point);
  }
  return tier_config->vip_point;
};
