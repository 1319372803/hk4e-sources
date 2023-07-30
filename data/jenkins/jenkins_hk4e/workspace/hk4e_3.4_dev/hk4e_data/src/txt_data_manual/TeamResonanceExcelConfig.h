// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TeamResonanceExcelConfig.h

// Line 20: range 000000000CE0CFBE-000000000CE0D026
void __cdecl TeamResonanceGroupConfig::TeamResonanceGroupConfig(TeamResonanceGroupConfig *const this)
{
  __int64 v1; // rsi

  std::map<data::ElementType,unsigned int>::map(&this->elem_avatar_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = TEAM_RESONANCE_COND_NONE;
  std::map<unsigned int,unsigned int>::map(&this->total_promote_level_id_map);
};

// Line 20: range 000000000D362784-000000000D36285C
void __cdecl TeamResonanceGroupConfig::TeamResonanceGroupConfig(
        TeamResonanceGroupConfig *const this,
        const TeamResonanceGroupConfig *a2)
{
  data::TeamResonanceCondType cond_type; // ecx
  char v3; // al
  const TeamResonanceGroupConfig *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  std::map<data::ElementType,unsigned int>::map(&this->elem_avatar_count_map, &a2->elem_avatar_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&v4->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::map<unsigned int,unsigned int>::map(&this->total_promote_level_id_map, &v4->total_promote_level_id_map);
};

// Line 20: range 000000000CE0D028-000000000CE0D052
void __cdecl TeamResonanceGroupConfig::~TeamResonanceGroupConfig(TeamResonanceGroupConfig *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->total_promote_level_id_map);
  std::map<data::ElementType,unsigned int>::~map(&this->elem_avatar_count_map);
};
