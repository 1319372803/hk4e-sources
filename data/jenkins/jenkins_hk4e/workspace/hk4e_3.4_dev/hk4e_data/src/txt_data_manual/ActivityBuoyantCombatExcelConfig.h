// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBuoyantCombatExcelConfig.h

// Line 18: range 0000000012EAC9C6-0000000012EACA63
void __cdecl BuoyantCombatLevelInfo::BuoyantCombatLevelInfo(BuoyantCombatLevelInfo *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_score_vec);
};

// Line 18: range 000000001338160C-0000000013381729
void __cdecl BuoyantCombatLevelInfo::BuoyantCombatLevelInfo(
        BuoyantCombatLevelInfo *const this,
        const BuoyantCombatLevelInfo *a2)
{
  uint32_t day_index; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t gallery_id; // ecx
  char v6; // dl
  const BuoyantCombatLevelInfo *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  day_index = a2->day_index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->day_index = day_index;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->gallery_id);
  }
  gallery_id = v7->gallery_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->watcher_score_vec, &v7->watcher_score_vec);
};

// Line 18: range 0000000012EACA64-0000000012EACA82
void __cdecl BuoyantCombatLevelInfo::~BuoyantCombatLevelInfo(BuoyantCombatLevelInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->watcher_score_vec);
};
