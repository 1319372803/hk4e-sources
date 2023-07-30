// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WeaponExcelConfig.h

// Line 26: range 000000000F00F556-000000000F00F5AA
uint32_t __cdecl WeaponExcelConfigMgr::getWeaponMaxPromoteLevel(const WeaponExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_max_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_max_promote_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->weapon_max_promote_level);
  }
  return this->weapon_max_promote_level;
};

// Line 37: range 00000000147362D0-000000001473631C
uint32_t __cdecl WeaponExcelConfigMgr::getMaxWeaponRank(const WeaponExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_weapon_rank >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_weapon_rank >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_weapon_rank);
  }
  return this->max_weapon_rank;
};
