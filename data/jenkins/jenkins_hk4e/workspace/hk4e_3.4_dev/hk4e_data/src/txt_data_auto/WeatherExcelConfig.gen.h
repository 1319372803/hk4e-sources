// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WeatherExcelConfig.gen.h

// Line 16: range 000000000CE26BEA-000000000CE26E64
void __cdecl data::WeatherExcelConfig::WeatherExcelConfig(data::WeatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v1);
  }
  this->area_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weather_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weather_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weather_area_id, v3);
  }
  this->weather_area_id = 0;
  std::string::basic_string(&this->max_height_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  v4 = ((_BYTE)this + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_default_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_default_valid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_default_valid, v4, v5);
  this->is_default_valid = 0;
  std::string::basic_string(&this->template_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v4);
  }
  this->priority = 0;
  std::string::basic_string(&this->profile_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_climate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_climate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_climate, v4);
  }
  this->default_climate = CLIMATE_NONE;
  v6 = ((_BYTE)this - 124) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_use_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_use_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_use_default, v6, v7);
  this->is_use_default = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v6);
  }
  this->scene_id = 0;
};

// Line 16: range 000000000D383204-000000000D3836BE
void __cdecl data::WeatherExcelConfig::WeatherExcelConfig(
        data::WeatherExcelConfig *const this,
        const data::WeatherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t area_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weather_area_id; // ecx
  char v7; // dl
  std::string *p_max_height_str; // rsi
  uint32_t gadget_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_default_valid; // cl
  char v14; // dl
  __int64 v15; // rdx
  std::string *p_template_name; // rsi
  uint32_t priority; // ecx
  char v18; // al
  std::string *p_profile_name; // rsi
  data::ClimateType default_climate; // ecx
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_use_default; // cl
  char v25; // dl
  __int64 v26; // rdx
  uint32_t scene_id; // ecx
  char v28; // al
  const data::WeatherExcelConfig *v29; // [rsp+0h] [rbp-20h]

  v29 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WeatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->area_id);
  }
  area_id = a2->area_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->area_id, a2);
  }
  this->area_id = area_id;
  v5 = (((_BYTE)v29 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->weather_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->weather_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->weather_area_id);
  }
  weather_area_id = v29->weather_area_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weather_area_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weather_area_id, v5);
  }
  this->weather_area_id = weather_area_id;
  p_max_height_str = &v29->max_height_str;
  std::string::basic_string(&this->max_height_str, &v29->max_height_str);
  if ( *(_BYTE *)(((unsigned __int64)&v29->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->gadget_id);
  }
  gadget_id = v29->gadget_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_max_height_str) = v10 != 0;
    __asan_report_store4(&this->gadget_id, p_max_height_str);
  }
  this->gadget_id = gadget_id;
  v11 = ((_BYTE)v29 + 52) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v29->is_default_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v29->is_default_valid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v29->is_default_valid, v11, v12);
  is_default_valid = v29->is_default_valid;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_default_valid >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_default_valid, v11, v15);
  this->is_default_valid = is_default_valid;
  p_template_name = &v29->template_name;
  std::string::basic_string(&this->template_name, &v29->template_name);
  if ( *(_BYTE *)(((unsigned __int64)&v29->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->priority);
  }
  priority = v29->priority;
  v18 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_template_name) = v18 != 0;
    __asan_report_store4(&this->priority, p_template_name);
  }
  this->priority = priority;
  p_profile_name = &v29->profile_name;
  std::string::basic_string(&this->profile_name, &v29->profile_name);
  if ( *(_BYTE *)(((unsigned __int64)&v29->default_climate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->default_climate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->default_climate);
  }
  default_climate = v29->default_climate;
  v21 = *(_BYTE *)(((unsigned __int64)&this->default_climate >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(p_profile_name) = v21 != 0;
    __asan_report_store4(&this->default_climate, p_profile_name);
  }
  this->default_climate = default_climate;
  v22 = ((_BYTE)v29 - 124) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v29->is_use_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v29->is_use_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v29->is_use_default, v22, v23);
  is_use_default = v29->is_use_default;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_use_default >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_use_default, v22, v26);
  this->is_use_default = is_use_default;
  if ( *(_BYTE *)(((unsigned __int64)&v29->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->scene_id);
  }
  scene_id = v29->scene_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v22) = v28 != 0;
    __asan_report_store4(&this->scene_id, v22);
  }
  this->scene_id = scene_id;
};

// Line 19: range 000000000D492C8E-000000000D492CFF
void __cdecl data::WeatherExcelConfig::~WeatherExcelConfig(data::WeatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeatherExcelConfig = v2;
  std::string::~string(&this->profile_name);
  std::string::~string(&this->template_name);
  std::string::~string(&this->max_height_str);
};

// Line 19: range 000000000D492D00-000000000D492D2A
void __cdecl data::WeatherExcelConfig::~WeatherExcelConfig(data::WeatherExcelConfig *const this)
{
  data::WeatherExcelConfig::~WeatherExcelConfig(this);
  operator delete(this, 0x90uLL);
};

// Line 40: range 000000000CE26E66-000000000CE270D5
void __cdecl data::WeatherTemplateExcelConfig::WeatherTemplateExcelConfig(data::WeatherTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WeatherTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeatherTemplateExcelConfig = v2;
  std::string::basic_string(&this->template_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->weather_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weather_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weather_type, v1);
  }
  this->weather_type = CLIMATE_NONE;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sunny_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sunny_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sunny_prob, v3);
  }
  this->sunny_prob = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cloudy_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cloudy_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cloudy_prob, v3);
  }
  this->cloudy_prob = 0.0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rain_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rain_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rain_prob, v4);
  }
  this->rain_prob = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thunderstorm_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thunderstorm_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thunderstorm_prob, v4);
  }
  this->thunderstorm_prob = 0.0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->snow_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snow_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->snow_prob, v5);
  }
  this->snow_prob = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mist_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mist_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mist_prob, v5);
  }
  this->mist_prob = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->desert_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->desert_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->desert_prob, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->desert_prob = 0.0;
};

// Line 40: range 000000000D083AAE-000000000D083F0B
void __cdecl data::WeatherTemplateExcelConfig::WeatherTemplateExcelConfig(
        data::WeatherTemplateExcelConfig *const this,
        const data::WeatherTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_template_name; // rsi
  data::ClimateType weather_type; // ecx
  char v5; // al
  float sunny_prob; // xmm0_4
  __int64 v7; // rsi
  float cloudy_prob; // xmm0_4
  float rain_prob; // xmm0_4
  __int64 v10; // rsi
  float thunderstorm_prob; // xmm0_4
  float snow_prob; // xmm0_4
  __int64 v13; // rsi
  float mist_prob; // xmm0_4
  float desert_prob; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::WeatherTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeatherTemplateExcelConfig = v2;
  p_template_name = &a2->template_name;
  std::string::basic_string(&this->template_name, &a2->template_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->weather_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weather_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weather_type);
  }
  weather_type = a2->weather_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->weather_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_template_name) = v5 != 0;
    __asan_report_store4(&this->weather_type, p_template_name);
  }
  this->weather_type = weather_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sunny_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->sunny_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->sunny_prob);
  }
  sunny_prob = a2->sunny_prob;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sunny_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sunny_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sunny_prob, v7);
  }
  this->sunny_prob = sunny_prob;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cloudy_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cloudy_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cloudy_prob);
  }
  cloudy_prob = a2->cloudy_prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->cloudy_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cloudy_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cloudy_prob, v7);
  }
  this->cloudy_prob = cloudy_prob;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rain_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rain_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rain_prob);
  }
  rain_prob = a2->rain_prob;
  v10 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rain_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rain_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rain_prob, v10);
  }
  this->rain_prob = rain_prob;
  if ( *(_BYTE *)(((unsigned __int64)&a2->thunderstorm_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->thunderstorm_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->thunderstorm_prob);
  }
  thunderstorm_prob = a2->thunderstorm_prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->thunderstorm_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thunderstorm_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thunderstorm_prob, v10);
  }
  this->thunderstorm_prob = thunderstorm_prob;
  if ( *(_BYTE *)(((unsigned __int64)&a2->snow_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->snow_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->snow_prob);
  }
  snow_prob = a2->snow_prob;
  v13 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->snow_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snow_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->snow_prob, v13);
  }
  this->snow_prob = snow_prob;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mist_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mist_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mist_prob);
  }
  mist_prob = a2->mist_prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->mist_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mist_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mist_prob, v13);
  }
  this->mist_prob = mist_prob;
  if ( *(_BYTE *)(((unsigned __int64)&a2->desert_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->desert_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->desert_prob);
  }
  desert_prob = a2->desert_prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->desert_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->desert_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->desert_prob, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->desert_prob = desert_prob;
};

// Line 43: range 000000000D492C10-000000000D492C61
void __cdecl data::WeatherTemplateExcelConfig::~WeatherTemplateExcelConfig(
        data::WeatherTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeatherTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeatherTemplateExcelConfig = v2;
  std::string::~string(&this->template_name);
};

// Line 43: range 000000000D492C62-000000000D492C8C
void __cdecl data::WeatherTemplateExcelConfig::~WeatherTemplateExcelConfig(
        data::WeatherTemplateExcelConfig *const this)
{
  data::WeatherTemplateExcelConfig::~WeatherTemplateExcelConfig(this);
  operator delete(this, 0x48uLL);
};
