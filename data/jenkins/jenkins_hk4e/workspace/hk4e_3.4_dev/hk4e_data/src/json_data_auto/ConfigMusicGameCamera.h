// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigMusicGameCamera.h

// Line 49: range 000000001216E8AA-000000001216E992
void __cdecl data::ConfigMusicCamera::ConfigMusicCamera(data::ConfigMusicCamera *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::string::basic_string(this);
  std::vector<data::CameraPlayCondition>::vector(&this->condition_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->style, v1);
  }
  this->style = 1;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->disable_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->disable_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->disable_dither, v2, v3);
  this->disable_dither = 0;
  v4 = ((_BYTE)this + 61) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 49: range 00000000123603D4-0000000012360589
void __cdecl data::ConfigMusicCamera::ConfigMusicCamera(
        data::ConfigMusicCamera *const this,
        data::ConfigMusicCamera *a2)
{
  std::vector<data::CameraPlayCondition> *p_condition_list; // rsi
  uint32_t style; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool disable_dither; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  std::string::basic_string(this, a2);
  p_condition_list = &a2->condition_list;
  std::vector<data::CameraPlayCondition>::vector(&this->condition_list, p_condition_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->style);
  }
  style = a2->style;
  v4 = *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_condition_list) = v4 != 0;
    __asan_report_store4(&this->style, p_condition_list);
  }
  this->style = style;
  v5 = ((_BYTE)a2 + 60) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->disable_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->disable_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->disable_dither, v5, v6);
  disable_dither = a2->disable_dither;
  v8 = *(_BYTE *)(((unsigned __int64)&this->disable_dither >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->disable_dither, v5, v9);
  this->disable_dither = disable_dither;
  v10 = ((_BYTE)a2 + 61) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 61) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 49: range 000000001216E994-000000001216E9BE
void __cdecl data::ConfigMusicCamera::~ConfigMusicCamera(data::ConfigMusicCamera *const this)
{
  std::vector<data::CameraPlayCondition>::~vector(&this->condition_list);
  std::string::~string(this);
};
