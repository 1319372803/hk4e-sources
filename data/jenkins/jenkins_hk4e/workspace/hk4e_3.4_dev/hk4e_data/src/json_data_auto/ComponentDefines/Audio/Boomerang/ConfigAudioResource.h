// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioResource.h

// Line 20: range 0000000013C1C5C8-0000000013C1C63D
void __cdecl data::ConfigAudioIncrementalResources::ConfigAudioIncrementalResources(
        data::ConfigAudioIncrementalResources *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->sfx_files);
  std::vector<std::string>::vector(&this->music_files);
  std::vector<std::string>::vector(&this->vo_files);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 00000000141F5E64-00000000141F5F6D
void __cdecl data::ConfigAudioIncrementalResources::ConfigAudioIncrementalResources(
        data::ConfigAudioIncrementalResources *const this,
        const data::ConfigAudioIncrementalResources *a2)
{
  data::StringArray *p_vo_files; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->sfx_files, &a2->sfx_files);
  std::vector<std::string>::vector(&this->music_files, &a2->music_files);
  p_vo_files = &a2->vo_files;
  std::vector<std::string>::vector(&this->vo_files, p_vo_files);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_vo_files, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_vo_files) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_vo_files, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000013C1C63E-0000000013C1C678
void __cdecl data::ConfigAudioIncrementalResources::~ConfigAudioIncrementalResources(
        data::ConfigAudioIncrementalResources *const this)
{
  std::vector<std::string>::~vector(&this->vo_files);
  std::vector<std::string>::~vector(&this->music_files);
  std::vector<std::string>::~vector(&this->sfx_files);
};
