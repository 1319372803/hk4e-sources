// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGGrowthExcelConfig.h

// Line 24: range 000000000F00FB1A-000000000F00FB66
uint32_t __cdecl GCGGrowthExcelConfigMgr::getMaxLevel(const GCGGrowthExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_level_);
  }
  return this->max_level_;
};
