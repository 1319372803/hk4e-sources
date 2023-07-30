// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReliquaryExcelConfig.h

// Line 35: range 0000000014736282-00000000147362CE
uint32_t __cdecl ReliquaryExcelConfigMgr::getMaxReliquaryRank(const ReliquaryExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_reliquary_rank >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_reliquary_rank >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_reliquary_rank);
  }
  return this->max_reliquary_rank;
};
