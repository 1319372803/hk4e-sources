// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.h

// Line 31: range 000000000CE020CE-000000000CE0211A
uint32_t __cdecl ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(
        const ActivityEffigyChallengeV2ExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->highest_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->highest_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->highest_difficulty_);
  }
  return this->highest_difficulty_;
};
