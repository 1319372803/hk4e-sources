// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MpPlayExcelConfig.h

// Line 95: range 000000001477C732-000000001477C7C4
void __cdecl MpPlaySettleMonsterKillNumParam::MpPlaySettleMonsterKillNumParam(
        MpPlaySettleMonsterKillNumParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->group_id = 0;
  std::set<unsigned int>::set(&this->exclude_set);
  if ( *(char *)(((unsigned __int64)&this->is_max >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_max, v1, &this->is_max);
  this->is_max = 1;
};

// Line 95: range 00000000147FF7E4-00000000147FF8F2
void __cdecl MpPlaySettleMonsterKillNumParam::MpPlaySettleMonsterKillNumParam(
        MpPlaySettleMonsterKillNumParam *const this,
        const MpPlaySettleMonsterKillNumParam *a2)
{
  uint32_t group_id; // ecx
  char v3; // al
  std::set<unsigned int> *p_exclude_set; // rsi
  bool is_max; // cl
  char v6; // al
  const MpPlaySettleMonsterKillNumParam *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  group_id = a2->group_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->group_id = group_id;
  p_exclude_set = &v7->exclude_set;
  std::set<unsigned int>::set(&this->exclude_set, &v7->exclude_set);
  if ( *(char *)(((unsigned __int64)&v7->is_max >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_max, p_exclude_set, &v7->is_max);
  is_max = v7->is_max;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_max >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_exclude_set) = v6 != 0;
    __asan_report_store1(&this->is_max, p_exclude_set, &this->is_max);
  }
  this->is_max = is_max;
};

// Line 95: range 000000001477C7C6-000000001477C7E4
void __cdecl MpPlaySettleMonsterKillNumParam::~MpPlaySettleMonsterKillNumParam(
        MpPlaySettleMonsterKillNumParam *const this)
{
  std::set<unsigned int>::~set(&this->exclude_set);
};
