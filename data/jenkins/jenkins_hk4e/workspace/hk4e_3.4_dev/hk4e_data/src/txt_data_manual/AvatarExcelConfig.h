// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarExcelConfig.h

// Line 26: range 000000000F00F4B2-000000000F00F4FE
uint32_t __cdecl AvatarExcelConfigMgr::getAvatarMaxPromoteLevel(const AvatarExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_max_promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_max_promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_max_promote_level);
  }
  return this->avatar_max_promote_level;
};

// Line 34: range 0000000013BC9688-0000000013BC96D4
uint32_t __cdecl AvatarExcelConfigMgr::getAvatarMaxFetterLevel(const AvatarExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_max_fetter_level);
  }
  return this->avatar_max_fetter_level;
};
