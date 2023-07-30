// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityMusicGameConfig.gen.h

// Line 40: range 0000000012ED1D30-0000000012ED1F4D
void __cdecl data::MusicGameDrumConfig::MusicGameDrumConfig(data::MusicGameDrumConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MusicGameDrumConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicGameDrumConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_per_music_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ugc_per_music_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ugc_per_music_num, v3);
  }
  this->ugc_per_music_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_max_history_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_max_history_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ugc_max_history_num, v3);
  }
  this->ugc_max_history_num = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_max_saved_score_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ugc_max_saved_score_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ugc_max_saved_score_num, v4);
  }
  this->ugc_max_saved_score_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_max_note_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_max_note_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ugc_max_note_num, v4);
  }
  this->ugc_max_note_num = 0;
  std::vector<float>::vector(&this->ugc_regional_note_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_long_press_note_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_long_press_note_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ugc_long_press_note_weight, v4);
  }
  this->ugc_long_press_note_weight = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_publish_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ugc_publish_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ugc_publish_limit, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->ugc_publish_limit = 0;
};

// Line 40: range 00000000133C5872-00000000133C5C38
void __cdecl data::MusicGameDrumConfig::MusicGameDrumConfig(
        data::MusicGameDrumConfig *const this,
        const data::MusicGameDrumConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t ugc_per_music_num; // ecx
  char v7; // dl
  uint32_t ugc_max_history_num; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t ugc_max_saved_score_num; // ecx
  char v12; // dl
  uint32_t ugc_max_note_num; // ecx
  char v14; // al
  float ugc_long_press_note_weight; // xmm0_4
  __int64 v16; // rsi
  uint32_t ugc_publish_limit; // ecx
  char v18; // dl
  const data::MusicGameDrumConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MusicGameDrumConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MusicGameDrumConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->ugc_per_music_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->ugc_per_music_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->ugc_per_music_num);
  }
  ugc_per_music_num = v19->ugc_per_music_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->ugc_per_music_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->ugc_per_music_num, v5);
  }
  this->ugc_per_music_num = ugc_per_music_num;
  if ( *(_BYTE *)(((unsigned __int64)&v19->ugc_max_history_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->ugc_max_history_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->ugc_max_history_num);
  }
  ugc_max_history_num = v19->ugc_max_history_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ugc_max_history_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->ugc_max_history_num, v5);
  }
  this->ugc_max_history_num = ugc_max_history_num;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->ugc_max_saved_score_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->ugc_max_saved_score_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->ugc_max_saved_score_num);
  }
  ugc_max_saved_score_num = v19->ugc_max_saved_score_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ugc_max_saved_score_num >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->ugc_max_saved_score_num, v10);
  }
  this->ugc_max_saved_score_num = ugc_max_saved_score_num;
  if ( *(_BYTE *)(((unsigned __int64)&v19->ugc_max_note_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->ugc_max_note_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->ugc_max_note_num);
  }
  ugc_max_note_num = v19->ugc_max_note_num;
  v14 = *(_BYTE *)(((unsigned __int64)&this->ugc_max_note_num >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->ugc_max_note_num, v10);
  }
  this->ugc_max_note_num = ugc_max_note_num;
  std::vector<float>::vector(&this->ugc_regional_note_limit, &v19->ugc_regional_note_limit);
  if ( *(_BYTE *)(((unsigned __int64)&v19->ugc_long_press_note_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->ugc_long_press_note_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->ugc_long_press_note_weight);
  }
  ugc_long_press_note_weight = v19->ugc_long_press_note_weight;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_long_press_note_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_long_press_note_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ugc_long_press_note_weight, &v19->ugc_regional_note_limit);
  }
  this->ugc_long_press_note_weight = ugc_long_press_note_weight;
  v16 = (((_BYTE)v19 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->ugc_publish_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->ugc_publish_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->ugc_publish_limit);
  }
  ugc_publish_limit = v19->ugc_publish_limit;
  v18 = *(_BYTE *)(((unsigned __int64)&this->ugc_publish_limit >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->ugc_publish_limit, v16);
  }
  this->ugc_publish_limit = ugc_publish_limit;
};

// Line 43: range 0000000013425494-00000000134254BE
void __cdecl data::MusicGameDrumConfig::~MusicGameDrumConfig(data::MusicGameDrumConfig *const this)
{
  data::MusicGameDrumConfig::~MusicGameDrumConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 43: range 0000000013425442-0000000013425493
void __cdecl data::MusicGameDrumConfig::~MusicGameDrumConfig(data::MusicGameDrumConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicGameDrumConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicGameDrumConfig = v2;
  std::vector<float>::~vector(&this->ugc_regional_note_limit);
};

// Line 61: range 0000000012ED1F4E-0000000012ED20F5
void __cdecl data::MusicGameBasicConfig::MusicGameBasicConfig(data::MusicGameBasicConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MusicGameBasicConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicGameBasicConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->music_id, v3);
  }
  this->music_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_level, v3);
  }
  this->music_level = 0;
  std::vector<unsigned int>::vector(&this->score_level_list);
  std::vector<unsigned int>::vector(&this->ugc_beat_division_options);
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_default_beat_division >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_default_beat_division >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ugc_default_beat_division, v3);
  }
  this->ugc_default_beat_division = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->note_count, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->note_count = 0;
};

// Line 61: range 00000000133C5D7A-00000000133C6085
void __cdecl data::MusicGameBasicConfig::MusicGameBasicConfig(
        data::MusicGameBasicConfig *const this,
        const data::MusicGameBasicConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t music_id; // ecx
  char v7; // dl
  uint32_t music_level; // ecx
  char v9; // al
  std::vector<unsigned int> *p_ugc_beat_division_options; // rsi
  uint32_t ugc_default_beat_division; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t note_count; // ecx
  char v15; // dl
  const data::MusicGameBasicConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MusicGameBasicConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MusicGameBasicConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->music_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->music_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->music_id);
  }
  music_id = v16->music_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->music_id, v5);
  }
  this->music_id = music_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->music_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->music_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->music_level);
  }
  music_level = v16->music_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->music_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->music_level, v5);
  }
  this->music_level = music_level;
  std::vector<unsigned int>::vector(&this->score_level_list, &v16->score_level_list);
  p_ugc_beat_division_options = &v16->ugc_beat_division_options;
  std::vector<unsigned int>::vector(&this->ugc_beat_division_options, &v16->ugc_beat_division_options);
  if ( *(_BYTE *)(((unsigned __int64)&v16->ugc_default_beat_division >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->ugc_default_beat_division >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->ugc_default_beat_division);
  }
  ugc_default_beat_division = v16->ugc_default_beat_division;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ugc_default_beat_division >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_ugc_beat_division_options) = v12 != 0;
    __asan_report_store4(&this->ugc_default_beat_division, p_ugc_beat_division_options);
  }
  this->ugc_default_beat_division = ugc_default_beat_division;
  v13 = (((_BYTE)v16 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->note_count);
  }
  note_count = v16->note_count;
  v15 = *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->note_count, v13);
  }
  this->note_count = note_count;
};

// Line 64: range 0000000013425416-0000000013425440
void __cdecl data::MusicGameBasicConfig::~MusicGameBasicConfig(data::MusicGameBasicConfig *const this)
{
  data::MusicGameBasicConfig::~MusicGameBasicConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 64: range 00000000134253B4-0000000013425415
void __cdecl data::MusicGameBasicConfig::~MusicGameBasicConfig(data::MusicGameBasicConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicGameBasicConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicGameBasicConfig = v2;
  std::vector<unsigned int>::~vector(&this->ugc_beat_division_options);
  std::vector<unsigned int>::~vector(&this->score_level_list);
};

// Line 81: range 0000000012ED20F6-0000000012ED21DB
void __cdecl data::MusicInfoConfig::MusicInfoConfig(data::MusicInfoConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicInfoConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicInfoConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id, v1);
  }
  this->music_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->music_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->music_time, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->music_time = 0;
  std::vector<unsigned int>::vector(&this->level_id);
  std::vector<unsigned int>::vector(&this->watcher_list);
};

// Line 81: range 00000000133C61C6-00000000133C6362
void __cdecl data::MusicInfoConfig::MusicInfoConfig(data::MusicInfoConfig *const this, const data::MusicInfoConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t music_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t music_time; // ecx
  char v7; // dl
  const data::MusicInfoConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MusicInfoConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MusicInfoConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->music_id);
  }
  music_id = a2->music_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->music_id, a2);
  }
  this->music_id = music_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->music_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->music_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->music_time);
  }
  music_time = v8->music_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->music_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->music_time, v5);
  }
  this->music_time = music_time;
  std::vector<unsigned int>::vector(&this->level_id, &v8->level_id);
  std::vector<unsigned int>::vector(&this->watcher_list, &v8->watcher_list);
};

// Line 84: range 0000000013425388-00000000134253B2
void __cdecl data::MusicInfoConfig::~MusicInfoConfig(data::MusicInfoConfig *const this)
{
  data::MusicInfoConfig::~MusicInfoConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 84: range 0000000013425326-0000000013425387
void __cdecl data::MusicInfoConfig::~MusicInfoConfig(data::MusicInfoConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicInfoConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicInfoConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
  std::vector<unsigned int>::~vector(&this->level_id);
};

// Line 98: range 0000000012ED21DC-0000000012ED23B3
void __cdecl data::MusicRiddleConfig::MusicRiddleConfig(data::MusicRiddleConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicRiddleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicRiddleConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id, v1);
  }
  this->music_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tutorial_catalog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tutorial_catalog_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tutorial_catalog_id, v3);
  }
  this->tutorial_catalog_id = 0;
  std::vector<unsigned int>::vector(&this->play_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->push_tips_id, v3);
  }
  this->push_tips_id = 0;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_hide >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_hide >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_hide, v4, v5);
  this->is_hide = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->explain_push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explain_push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->explain_push_tips_id, v4);
  }
  this->explain_push_tips_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->not_get_explain_push_tips_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->not_get_explain_push_tips_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->not_get_explain_push_tips_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->not_get_explain_push_tips_id = 0;
};

// Line 98: range 00000000133C64A4-00000000133C67ED
void __cdecl data::MusicRiddleConfig::MusicRiddleConfig(
        data::MusicRiddleConfig *const this,
        const data::MusicRiddleConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t music_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t tutorial_catalog_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_play_list; // rsi
  uint32_t push_tips_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_hide; // cl
  char v14; // dl
  __int64 v15; // rdx
  uint32_t explain_push_tips_id; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t not_get_explain_push_tips_id; // ecx
  char v20; // dl
  const data::MusicRiddleConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MusicRiddleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MusicRiddleConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->music_id);
  }
  music_id = a2->music_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->music_id, a2);
  }
  this->music_id = music_id;
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->tutorial_catalog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->tutorial_catalog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->tutorial_catalog_id);
  }
  tutorial_catalog_id = v21->tutorial_catalog_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->tutorial_catalog_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->tutorial_catalog_id, v5);
  }
  this->tutorial_catalog_id = tutorial_catalog_id;
  p_play_list = &v21->play_list;
  std::vector<unsigned int>::vector(&this->play_list, &v21->play_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->push_tips_id);
  }
  push_tips_id = v21->push_tips_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_play_list) = v10 != 0;
    __asan_report_store4(&this->push_tips_id, p_play_list);
  }
  this->push_tips_id = push_tips_id;
  v11 = ((_BYTE)v21 + 44) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v21->is_hide >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v21->is_hide >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v21->is_hide, v11, v12);
  is_hide = v21->is_hide;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_hide >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_hide, v11, v15);
  this->is_hide = is_hide;
  if ( *(_BYTE *)(((unsigned __int64)&v21->explain_push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->explain_push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->explain_push_tips_id);
  }
  explain_push_tips_id = v21->explain_push_tips_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->explain_push_tips_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v11) = v17 != 0;
    __asan_report_store4(&this->explain_push_tips_id, v11);
  }
  this->explain_push_tips_id = explain_push_tips_id;
  v18 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->not_get_explain_push_tips_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->not_get_explain_push_tips_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->not_get_explain_push_tips_id);
  }
  not_get_explain_push_tips_id = v21->not_get_explain_push_tips_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->not_get_explain_push_tips_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->not_get_explain_push_tips_id, v18);
  }
  this->not_get_explain_push_tips_id = not_get_explain_push_tips_id;
};

// Line 101: range 00000000134252A8-00000000134252F9
void __cdecl data::MusicRiddleConfig::~MusicRiddleConfig(data::MusicRiddleConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicRiddleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicRiddleConfig = v2;
  std::vector<unsigned int>::~vector(&this->play_list);
};

// Line 101: range 00000000134252FA-0000000013425324
void __cdecl data::MusicRiddleConfig::~MusicRiddleConfig(data::MusicRiddleConfig *const this)
{
  data::MusicRiddleConfig::~MusicRiddleConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 118: range 0000000012ED23B4-0000000012ED2517
void __cdecl data::MusicRiddlePlayConfig::MusicRiddlePlayConfig(data::MusicRiddlePlayConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MusicRiddlePlayConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicRiddlePlayConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_id, v1);
  }
  this->play_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  std::string::basic_string(&this->audio_event_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->audio_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audio_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audio_length, v3);
  }
  this->audio_length = 0.0;
  std::vector<int>::vector(&this->answer);
  if ( *(_BYTE *)(((unsigned __int64)&this->note_center >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->note_center >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->note_center, v3);
  }
  this->note_center = 0;
};

// Line 118: range 00000000133C692E-00000000133C6BB7
void __cdecl data::MusicRiddlePlayConfig::MusicRiddlePlayConfig(
        data::MusicRiddlePlayConfig *const this,
        const data::MusicRiddlePlayConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t play_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_id; // ecx
  char v7; // dl
  float audio_length; // xmm0_4
  std::vector<int> *p_answer; // rsi
  uint32_t note_center; // ecx
  char v11; // al
  const data::MusicRiddlePlayConfig *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MusicRiddlePlayConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MusicRiddlePlayConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_id);
  }
  play_id = a2->play_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->play_id, a2);
  }
  this->play_id = play_id;
  v5 = (((_BYTE)v12 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->material_id);
  }
  material_id = v12->material_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  std::string::basic_string(&this->audio_event_name, &v12->audio_event_name);
  if ( *(_BYTE *)(((unsigned __int64)&v12->audio_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->audio_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->audio_length);
  }
  audio_length = v12->audio_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->audio_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audio_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audio_length, &v12->audio_event_name);
  }
  this->audio_length = audio_length;
  p_answer = &v12->answer;
  std::vector<int>::vector(&this->answer, &v12->answer);
  if ( *(_BYTE *)(((unsigned __int64)&v12->note_center >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->note_center >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->note_center);
  }
  note_center = v12->note_center;
  v11 = *(_BYTE *)(((unsigned __int64)&this->note_center >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_answer) = v11 != 0;
    __asan_report_store4(&this->note_center, p_answer);
  }
  this->note_center = note_center;
};

// Line 121: range 000000001342527C-00000000134252A6
void __cdecl data::MusicRiddlePlayConfig::~MusicRiddlePlayConfig(data::MusicRiddlePlayConfig *const this)
{
  data::MusicRiddlePlayConfig::~MusicRiddlePlayConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 121: range 000000001342521A-000000001342527B
void __cdecl data::MusicRiddlePlayConfig::~MusicRiddlePlayConfig(data::MusicRiddlePlayConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MusicRiddlePlayConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MusicRiddlePlayConfig = v2;
  std::vector<int>::~vector(&this->answer);
  std::string::~string(&this->audio_event_name);
};
