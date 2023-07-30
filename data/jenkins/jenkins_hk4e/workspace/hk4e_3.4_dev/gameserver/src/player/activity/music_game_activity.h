// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/music_game_activity.h

// Line 36: range 0000000016D60D52-0000000016D60FC4
void __cdecl MusicGameUgcSaveRecord::MusicGameUgcSaveRecord(MusicGameUgcSaveRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->save_idx);
  }
  this->save_idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->save_time);
  }
  this->save_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = 0;
  if ( *(char *)(((unsigned __int64)&this->is_published >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_published);
  this->is_published = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_changed_after_publish);
  }
  this->is_changed_after_publish = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = 0LL;
};

// Line 54: range 0000000016D79C56-0000000016D7A00F
MusicGameUgcSearchRecord *__cdecl MusicGameUgcSearchRecord::operator=(
        MusicGameUgcSearchRecord *const this,
        const MusicGameUgcSearchRecord *a2)
{
  uint64_t ugc_guid; // rdx
  uint32_t music_id; // ecx
  uint32_t publish_time; // ecx
  uint32_t max_score; // ecx
  uint32_t note_count; // ecx
  uint32_t version; // ecx
  bool is_psn_platform; // cl
  uint64_t import_from_ugc_guid; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ugc_guid = a2->ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  music_id = a2->music_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = music_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  publish_time = a2->publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->publish_time);
  }
  this->publish_time = publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_score = a2->max_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = max_score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  note_count = a2->note_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = note_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  version = a2->version;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = version;
  std::string::operator=(&this->creator_nickname, &a2->creator_nickname);
  if ( *(char *)(((unsigned __int64)&a2->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_psn_platform);
  is_psn_platform = a2->is_psn_platform;
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_platform);
  this->is_psn_platform = is_psn_platform;
  if ( *(_BYTE *)(((unsigned __int64)&a2->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  import_from_ugc_guid = a2->import_from_ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = import_from_ugc_guid;
  return this;
};

// Line 54: range 0000000016D60FC6-0000000016D611C2
void __cdecl MusicGameUgcSearchRecord::MusicGameUgcSearchRecord(MusicGameUgcSearchRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->publish_time);
  }
  this->publish_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = 0;
  std::string::basic_string(&this->creator_nickname);
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_platform);
  this->is_psn_platform = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = 0LL;
};

// Line 54: range 0000000016F166C2-0000000016F16A78
void __cdecl MusicGameUgcSearchRecord::MusicGameUgcSearchRecord(
        MusicGameUgcSearchRecord *const this,
        MusicGameUgcSearchRecord *a2)
{
  double v2; // xmm0_8
  uint64_t ugc_guid; // rdx
  uint32_t music_id; // ecx
  uint32_t publish_time; // ecx
  uint32_t max_score; // ecx
  uint32_t note_count; // ecx
  uint32_t version; // ecx
  bool is_psn_platform; // cl
  uint64_t import_from_ugc_guid; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ugc_guid = a2->ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8(this);
  this->ugc_guid = ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  music_id = a2->music_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = music_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->publish_time >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  publish_time = a2->publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->publish_time);
  }
  this->publish_time = publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  max_score = a2->max_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = max_score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->note_count >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  note_count = a2->note_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = note_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->version >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  version = a2->version;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = version;
  std::string::basic_string(&this->creator_nickname, &a2->creator_nickname, v2);
  if ( *(char *)(((unsigned __int64)&a2->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_psn_platform);
  is_psn_platform = a2->is_psn_platform;
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_platform);
  this->is_psn_platform = is_psn_platform;
  if ( *(_BYTE *)(((unsigned __int64)&a2->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  import_from_ugc_guid = a2->import_from_ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = import_from_ugc_guid;
};

// Line 54: range 0000000016D61368-0000000016D6171E
void __cdecl MusicGameUgcSearchRecord::MusicGameUgcSearchRecord(
        MusicGameUgcSearchRecord *const this,
        const MusicGameUgcSearchRecord *a2)
{
  uint64_t ugc_guid; // rdx
  uint32_t music_id; // ecx
  uint32_t publish_time; // ecx
  uint32_t max_score; // ecx
  uint32_t note_count; // ecx
  uint32_t version; // ecx
  bool is_psn_platform; // cl
  uint64_t import_from_ugc_guid; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ugc_guid = a2->ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  music_id = a2->music_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = music_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  publish_time = a2->publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->publish_time);
  }
  this->publish_time = publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_score = a2->max_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = max_score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  note_count = a2->note_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = note_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  version = a2->version;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = version;
  std::string::basic_string(&this->creator_nickname, &a2->creator_nickname);
  if ( *(char *)(((unsigned __int64)&a2->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_psn_platform);
  is_psn_platform = a2->is_psn_platform;
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_platform);
  this->is_psn_platform = is_psn_platform;
  if ( *(_BYTE *)(((unsigned __int64)&a2->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  import_from_ugc_guid = a2->import_from_ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = import_from_ugc_guid;
};

// Line 54: range 0000000016D611C4-0000000016D611E2
void __cdecl MusicGameUgcSearchRecord::~MusicGameUgcSearchRecord(MusicGameUgcSearchRecord *const this)
{
  std::string::~string(&this->creator_nickname);
};

// Line 80: range 00000000170255D0-00000000170255FE
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::~ActivityLru(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this)
{
  std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::~unordered_map(&this->key_iterator_map_);
  std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::~list(&this->pair_list_);
};

// Line 80: range 0000000017025568-0000000017025596
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::~ActivityLru(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this)
{
  std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::~unordered_map(&this->key_iterator_map_);
  std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::~list(&this->pair_list_);
};

// Line 87: range 000000001705AD6C-000000001705ADD3
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::ActivityLru(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = 0;
  std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::list(&this->pair_list_);
  std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::unordered_map(&this->key_iterator_map_);
};

// Line 87: range 000000001705AAC2-000000001705AB29
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::ActivityLru(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = 0;
  std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::list(&this->pair_list_);
  std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::unordered_map(&this->key_iterator_map_);
};

// Line 91: range 0000000016D7B082-0000000016D7B351
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::put(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this,
        const unsigned __int64 *key,
        const MusicGameUgcPlayRecord *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false>::pointer v6; // rax
  std::__detail::_List_node_base *M_node; // r14
  std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::mapped_type *v8; // rax
  std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::size_type v9; // rcx
  std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >::pointer v10; // rax
  std::pair<long unsigned int,MusicGameUgcPlayRecord> __x; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 iter:93 64 8 8 last:106";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcPlayRecord>::put;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> *)(v3 + 64)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false> *const)(v3 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)(v3 + 64),
      &v6->second);
    std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::const_iterator *)(v3 + 64));
  }
  std::pair<unsigned long,MusicGameUgcPlayRecord>::pair<unsigned long,MusicGameUgcPlayRecord,true>(&__x, key, value);
  std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::push_front(&this->pair_list_, &__x);
  M_node = std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::begin(&this->pair_list_)._M_node;
  v8 = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::operator[](
         &this->key_iterator_map_,
         key);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v8);
  v8->_M_node = M_node;
  while ( 1 )
  {
    v9 = std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::size(&this->pair_list_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v9 <= this->max_size_ )
      break;
    *(std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::iterator *)(v3 + 64) = std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::operator--(
      (std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)(v3 + 64),
      0);
    v10 = std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::operator->((const std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)(v3 + 64));
    std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::erase(
      &this->key_iterator_map_,
      &v10->first);
    std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::pop_back(&this->pair_list_);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 115: range 0000000016D78960-0000000016D78C4D
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::append(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this,
        const unsigned __int64 *key,
        const MusicGameUgcPlayRecord *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false>::pointer v6; // rax
  std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::size_type v7; // rcx
  char v8; // al
  std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::mapped_type *v9; // rax
  std::pair<long unsigned int,MusicGameUgcPlayRecord> __x; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:117 64 8 8 last:133";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcPlayRecord>::append;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> *)(v3 + 64)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false> *const)(v3 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)(v3 + 64),
      &v6->second);
    std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::const_iterator *)(v3 + 64));
    std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->max_size_ )
    goto LABEL_13;
  v7 = std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::size(&this->pair_list_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v7 > this->max_size_ )
    v8 = 1;
  else
LABEL_13:
    v8 = 0;
  if ( !v8 )
  {
    std::pair<unsigned long,MusicGameUgcPlayRecord>::pair<unsigned long,MusicGameUgcPlayRecord,true>(&__x, key, value);
    std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::push_back(&this->pair_list_, &__x);
    *(std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::iterator *)(v3 + 64) = std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::operator--(
      (std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)(v3 + 64),
      0);
    v9 = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::operator[](
           &this->key_iterator_map_,
           key);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_store8(v9);
    v9->_M_node = *(std::__detail::_List_node_base **)(v3 + 64);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 115: range 0000000016D78468-0000000016D78783
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::append(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this,
        const unsigned __int64 *key,
        const MusicGameUgcSearchRecord *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false>::pointer v6; // rax
  std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::size_type v7; // rcx
  char v8; // al
  std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::mapped_type *v9; // rax
  std::pair<long unsigned int,MusicGameUgcSearchRecord> __x; // [rsp+20h] [rbp-F0h] BYREF
  char v12[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:117 64 8 8 last:133";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::append;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v3 + 64)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false> *const)(v3 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)(v3 + 64),
      &v6->second);
    std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::const_iterator *)(v3 + 64));
    std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->max_size_ )
    goto LABEL_13;
  v7 = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::size(&this->pair_list_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v7 > this->max_size_ )
    v8 = 1;
  else
LABEL_13:
    v8 = 0;
  if ( !v8 )
  {
    std::pair<unsigned long,MusicGameUgcSearchRecord>::pair<unsigned long,MusicGameUgcSearchRecord,true>(
      &__x,
      key,
      value);
    std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::push_back(&this->pair_list_, &__x);
    std::pair<unsigned long,MusicGameUgcSearchRecord>::~pair(&__x);
    *(std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::iterator *)(v3 + 64) = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator--(
      (std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)(v3 + 64),
      0);
    v9 = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::operator[](
           &this->key_iterator_map_,
           key);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_store8(v9);
    v9->_M_node = *(std::__detail::_List_node_base **)(v3 + 64);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 129: range 0000000016D60818-0000000016D6085D
bool __cdecl MusicGameActivity::isInMusicGame(const MusicGameActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_music_game_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->current_music_game_id_ != 0;
};

// Line 139: range 0000000016D7976E-0000000016D7998D
bool __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::get(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this,
        const unsigned __int64 *key,
        MusicGameUgcPlayRecord *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false>::pointer v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false>::pointer v10; // rax
  std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >::iterator __x; // [rsp+28h] [rbp-88h] BYREF
  std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > __position; // [rsp+30h] [rbp-80h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> __y; // [rsp+38h] [rbp-78h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:141";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcPlayRecord>::get;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::end(&this->key_iterator_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> *)(v3 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false> *const)(v3 + 32));
    v8 = (__int64)std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::operator->(&v7->second);
    if ( *(_WORD *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      v8 = __asan_report_store16(value);
    if ( *(_WORD *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load16(v8 + 8);
    v9 = *(_QWORD *)(v8 + 16);
    value->ugc_guid = *(_QWORD *)(v8 + 8);
    *(_QWORD *)&value->version = v9;
    v10 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false> *const)(v3 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)&__y,
      &v10->second);
    __x._M_node = std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::begin(&this->pair_list_)._M_node;
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::_List_const_iterator(&__position, &__x);
    std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::splice(
      &this->pair_list_,
      __position,
      &this->pair_list_,
      (std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::const_iterator)__y._M_cur);
    result = 1;
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 0000000016D7A318-0000000016D7A4F0
bool __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::get(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this,
        const unsigned __int64 *key,
        MusicGameUgcSearchRecord *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false>::pointer v7; // rax
  MusicGameUgcSearchRecord *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false>::pointer v9; // rax
  std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >::iterator __x; // [rsp+28h] [rbp-88h] BYREF
  std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > __position; // [rsp+30h] [rbp-80h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> __y; // [rsp+38h] [rbp-78h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:141";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::get;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::end(&this->key_iterator_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v3 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false> *const)(v3 + 32));
    p_second = &std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator->(&v7->second)->second;
    MusicGameUgcSearchRecord::operator=(value, p_second);
    v9 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false> *const)(v3 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)&__y,
      &v9->second);
    __x._M_node = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::begin(&this->pair_list_)._M_node;
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::_List_const_iterator(
      &__position,
      &__x);
    std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::splice(
      &this->pair_list_,
      __position,
      &this->pair_list_,
      (std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::const_iterator)__y._M_cur);
    result = 1;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 156: range 0000000016D7A010-0000000016D7A14E
bool __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::find(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this,
        const unsigned __int64 *key,
        MusicGameUgcSearchRecord *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false>::pointer v7; // rax
  MusicGameUgcSearchRecord *p_second; // rdx
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> __y; // [rsp+28h] [rbp-68h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:158";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::end(&this->key_iterator_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v3 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false> *const)(v3 + 32));
    p_second = &std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator->(&v7->second)->second;
    MusicGameUgcSearchRecord::operator=(value, p_second);
    result = 1;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 169: range 0000000016D7A77C-0000000016D7A8E2
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::remove(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this,
        const unsigned __int64 *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> __y; // [rsp+18h] [rbp-78h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:171";
  *(_QWORD *)(v2 + 16) = ActivityLru<unsigned long,MusicGameUgcPlayRecord>::remove;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v2 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::end(&this->key_iterator_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false> *)(v2 + 32),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > >,false,false> *const)(v2 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)&__y,
      &v5->second);
    std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::erase(
      &this->pair_list_,
      (std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>>::const_iterator)__y._M_cur);
    std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >>::iterator *)(v2 + 32));
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 169: range 0000000016D7B352-0000000016D7B4B8
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::remove(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this,
        const unsigned __int64 *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> __y; // [rsp+18h] [rbp-78h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:171";
  *(_QWORD *)(v2 + 16) = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::remove;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v2 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::end(&this->key_iterator_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v2 + 32),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false> *const)(v2 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)&__y,
      &v5->second);
    std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::erase(
      &this->pair_list_,
      (std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::const_iterator)__y._M_cur);
    std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v2 + 32));
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 180: range 0000000016D78784-0000000016D787B2
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::clear(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this)
{
  std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::clear(&this->pair_list_);
  std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>>::clear(&this->key_iterator_map_);
};

// Line 180: range 0000000016D7826C-0000000016D7829A
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::clear(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this)
{
  std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::clear(&this->pair_list_);
  std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::clear(&this->key_iterator_map_);
};

// Line 186: range 0000000016D791FE-0000000016D7920F
const std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>> *__cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::getPairList[abi:cxx11](
        const ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this)
{
  return &this->pair_list_;
};

// Line 186: range 0000000016D79052-0000000016D79063
const std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>> *__cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::getPairList[abi:cxx11](
        const ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this)
{
  return &this->pair_list_;
};

// Line 191: range 0000000016D799F4-0000000016D79A3D
void __cdecl ActivityLru<unsigned long,MusicGameUgcPlayRecord>::setMaxSize(
        ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *const this,
        uint32_t max_size__out)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = max_size__out;
};

// Line 191: range 0000000016D799AA-0000000016D799F3
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::setMaxSize(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this,
        uint32_t max_size__out)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = max_size__out;
};

// Line 196: range 0000000017095B1E-0000000017095B48
void __cdecl MusicGameActivity::~MusicGameActivity(MusicGameActivity *const this)
{
  MusicGameActivity::~MusicGameActivity(this);
  operator delete(this, 0x4D0uLL);
};

// Line 196: range 0000000017095A88-0000000017095B1D
void __cdecl MusicGameActivity::~MusicGameActivity(MusicGameActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MusicGameActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  ActivityLru<unsigned long,MusicGameUgcPlayRecord>::~ActivityLru(&this->ugc_play_record_lru_);
  ActivityLru<unsigned long,MusicGameUgcSearchRecord>::~ActivityLru(&this->ugc_search_record_lru_);
  std::map<unsigned long,MusicGameUgcSaveRecord>::~map(&this->ugc_save_record_map_);
  std::map<unsigned int,MusicGameRecord>::~map(&this->music_game_record_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 199: range 0000000017025600-000000001702584F
void __fastcall ZN17MusicGameActivityCI212BaseActivityER6Playerj(MusicGameActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN17MusicGameActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MusicGameActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,MusicGameRecord>::map(&this->music_game_record_map_);
  std::map<unsigned long,MusicGameUgcSaveRecord>::map(&this->ugc_save_record_map_);
  ActivityLru<unsigned long,MusicGameUgcSearchRecord>::ActivityLru(&this->ugc_search_record_lru_);
  ActivityLru<unsigned long,MusicGameUgcPlayRecord>::ActivityLru(&this->ugc_play_record_lru_);
  if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_all_cond_level_);
  this->is_finish_all_cond_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_music_game_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->current_music_game_id_);
  this->current_music_game_id_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_try_self_ugc_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_try_self_ugc_);
  this->is_try_self_ugc_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_trans_no_);
  }
  this->cur_trans_no_ = 0;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 201: range 000000001384A510-000000001384A51A
data::NewActivityType __cdecl MusicGameActivity::getActivityStaticType()
{
  return 2202;
};

// Line 229: range 0000000017D7155A-0000000017D7156D
std::map<unsigned int,MusicGameRecord> *__cdecl MusicGameActivity::getMusicGameRecordMapByGm(
        MusicGameActivity *const this)
{
  return &this->music_game_record_map_;
};

// Line 353: range 0000000016FC5E3A-0000000016FC5F0F
void __cdecl MusicGameRecord::MusicGameRecord(MusicGameRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->max_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_combo);
  }
  this->max_combo = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_unlock);
  }
  this->is_unlock = 0;
};

// Line 1036: range 0000000016D7AD80-0000000016D7B081
void __cdecl ActivityLru<unsigned long,MusicGameUgcSearchRecord>::put(
        ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *const this,
        const unsigned __int64 *key,
        const MusicGameUgcSearchRecord *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false>::pointer v6; // rax
  std::__detail::_List_node_base *M_node; // r14
  std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::mapped_type *v8; // rax
  std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::size_type v9; // rcx
  std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >::pointer v10; // rax
  std::pair<long unsigned int,MusicGameUgcSearchRecord> __x; // [rsp+20h] [rbp-F0h] BYREF
  char v13[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 iter:93 64 8 8 last:106";
  *(_QWORD *)(v3 + 16) = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::put;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<long unsigned int,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false> *)(v3 + 64)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > >,false,false> *const)(v3 + 32));
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)(v3 + 64),
      &v6->second);
    std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::const_iterator *)(v3 + 64));
  }
  std::pair<unsigned long,MusicGameUgcSearchRecord>::pair<unsigned long,MusicGameUgcSearchRecord,true>(&__x, key, value);
  std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::push_front(&this->pair_list_, &__x);
  std::pair<unsigned long,MusicGameUgcSearchRecord>::~pair(&__x);
  M_node = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::begin(&this->pair_list_)._M_node;
  v8 = std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::operator[](
         &this->key_iterator_map_,
         key);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v8);
  v8->_M_node = M_node;
  while ( 1 )
  {
    v9 = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::size(&this->pair_list_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v9 <= this->max_size_ )
      break;
    *(std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::iterator *)(v3 + 64) = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator--(
      (std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)(v3 + 64),
      0);
    v10 = std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator->((const std::_List_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)(v3 + 64));
    std::unordered_map<unsigned long,std::_List_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>>::erase(
      &this->key_iterator_map_,
      &v10->first);
    std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::pop_back(&this->pair_list_);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};
