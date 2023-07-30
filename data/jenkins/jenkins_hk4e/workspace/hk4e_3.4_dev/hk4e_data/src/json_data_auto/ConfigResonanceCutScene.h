// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigResonanceCutScene.h

// Line 20: range 000000001217B006-000000001217B098
void __cdecl data::ConfigResonanceCutScene::ConfigResonanceCutScene(data::ConfigResonanceCutScene *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->cutscene_index = 0;
  std::string::basic_string(&this->vfx_ability);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 0000000012653DA2-0000000012653EB0
void __cdecl data::ConfigResonanceCutScene::ConfigResonanceCutScene(
        data::ConfigResonanceCutScene *const this,
        const data::ConfigResonanceCutScene *a2)
{
  uint32_t cutscene_index; // ecx
  char v3; // al
  std::string *p_vfx_ability; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigResonanceCutScene *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cutscene_index = a2->cutscene_index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->cutscene_index = cutscene_index;
  p_vfx_ability = &v7->vfx_ability;
  std::string::basic_string(&this->vfx_ability, &v7->vfx_ability);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_vfx_ability, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_vfx_ability) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_vfx_ability, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000001217B09A-000000001217B0B8
void __cdecl data::ConfigResonanceCutScene::~ConfigResonanceCutScene(data::ConfigResonanceCutScene *const this)
{
  std::string::~string(&this->vfx_ability);
};
