// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMimiTomoExcelConfig.h

// Line 18: range 00000000133ECC70-00000000133ECD4C
void __cdecl FindHilichurlLevelInfo::FindHilichurlLevelInfo(FindHilichurlLevelInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::vector<unsigned int>::vector(&this->quest_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index, v1);
  }
  this->day_index = 0;
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v2);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, v2);
  }
  this->watcher_id = 0;
};

// Line 18: range 000000001333ABC4-000000001333ABDE
void __cdecl FindHilichurlLevelInfo::~FindHilichurlLevelInfo(FindHilichurlLevelInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->quest_id_vec);
};

// Line 26: range 00000000133ED006-00000000133ED09B
void __cdecl FindHilichurlActivityInfo::FindHilichurlActivityInfo(FindHilichurlActivityInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->content_duration = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_quest_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->end_quest_id = 0;
};
