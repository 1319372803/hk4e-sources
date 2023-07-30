// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WeatherExcelConfig.cpp

// Line 21: range 000000000CB5C8FE-000000000CB5CB12
int32_t __cdecl WeatherExcelConfigMgr::rewriteConfig(WeatherExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeatherExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = WeatherExcelConfigMgr::rewriteWeatherExcelConfig(this, txt_config_mgr) != 0;
  if ( v5 | (WeatherExcelConfigMgr::rewriteWeatherTemplateExcelConfig(this, txt_config_mgr) != 0) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WeatherExcelConfig.cpp",
      "rewriteConfig",
      25);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v6,
      (const char (*)[43])"WeatherExcelConfigMgr rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 32: range 000000000CB5CB14-000000000CB5CCF7
int32_t __cdecl WeatherExcelConfigMgr::checkConfig(
        WeatherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeatherExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( WeatherExcelConfigMgr::checkWeatherExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WeatherExcelConfig.cpp",
      "checkConfig",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"WeatherExcelConfigMgr checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 43: range 000000000CB5CCF8-000000000CB5CEF3
__int64 __fastcall WeatherExcelConfigMgr::findWeatherAreaPriority(
        const WeatherExcelConfigMgr *const this,
        __int64 weather_area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_weather_id_priority_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 weather_area_id:42 64 8 7 iter:44 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeatherExcelConfigMgr::findWeatherAreaPriority;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = weather_area_id;
  p_weather_id_priority_map = &this->weather_id_priority_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, weather_area_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_weather_id_priority_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->weather_id_priority_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 54: range 000000000CB5CEF4-000000000CB5CF69
uint32_t __cdecl WeatherExcelConfigMgr::findWeatherAreaIdByHeightAreaId(
        const WeatherExcelConfigMgr *const this,
        uint32_t height_area_id)
{
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+18h] [rbp-8h]

  weather_config_ptr = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(this, height_area_id);
  if ( !weather_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->weather_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)weather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weather_config_ptr->weather_area_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&weather_config_ptr->weather_area_id);
  }
  return weather_config_ptr->weather_area_id;
};

// Line 65: range 000000000CB5CF6A-000000000CB5D0F3
const WeatherTemplate *__cdecl WeatherExcelConfigMgr::findWeatherTemplate(
        const WeatherExcelConfigMgr *const this,
        const std::string *weather_template_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<std::string,WeatherTemplate> *p_weather_template_map; // rdx
  std::unordered_map<std::string,WeatherTemplate> *v6; // rdx
  const WeatherTemplate *result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 7 iter:66 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeatherExcelConfigMgr::findWeatherTemplate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_weather_template_map = &this->weather_template_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, weather_template_name);
  *(std::unordered_map<std::string,WeatherTemplate>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,WeatherTemplate>::find(
                                                                                    p_weather_template_map,
                                                                                    weather_template_name);
  v6 = &this->weather_template_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, weather_template_name);
  *(std::unordered_map<std::string,WeatherTemplate>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,WeatherTemplate>::end(v6);
  if ( std::__detail::operator==<std::pair<std::string const,WeatherTemplate>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,WeatherTemplate>,true> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,WeatherTemplate>,true> *)(v2 + 64)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,WeatherTemplate>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,WeatherTemplate>,false,true> *const)(v2 + 32))->second;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 72: range 000000000CB5D0F4-000000000CB5D176
uint32_t __cdecl WeatherExcelConfigMgr::randWeather(const WeatherExcelConfigMgr *const this, uint32_t height_area_id)
{
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+18h] [rbp-8h]

  weather_config_ptr = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(this, height_area_id);
  if ( !weather_config_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&weather_config_ptr->default_climate);
  }
  return WeatherExcelConfigMgr::randNextWeather(this, height_area_id, weather_config_ptr->default_climate);
};

// Line 84: range 000000000CB5D178-000000000CB5E028
__int64 __fastcall WeatherExcelConfigMgr::randNextWeather(
        const WeatherExcelConfigMgr *const this,
        uint32_t height_area_id,
        uint32_t prev_climate_type)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<std::string,WeatherTemplate> *p_weather_template_map; // rdx
  const std::unordered_map<std::string,WeatherTemplate>::key_type *p_template_name; // rcx
  __int64 v10; // rsi
  const std::unordered_map<std::string,WeatherTemplate>::key_type *v11; // rsi
  std::unordered_map<std::string,WeatherTemplate> *v12; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  char *v19; // rsi
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  char *v24; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *v25; // rax
  float v26; // xmm1_4
  __m128i v27; // xmm0
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *v28; // rax
  int v29; // edx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  __int64 result; // rax
  float rand_prob; // [rsp+10h] [rbp-2F0h]
  uint32_t result_climate; // [rsp+14h] [rbp-2ECh]
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+18h] [rbp-2E8h]
  WeatherTemplate *climate_prob_map; // [rsp+20h] [rbp-2E0h]
  std::map<unsigned int,float> *prob_map; // [rsp+28h] [rbp-2D8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::reference v44; // [rsp+40h] [rbp-2C0h]
  std::tuple_element<0,std::pair<unsigned int const,float> >::type *climate_type_0; // [rsp+48h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *prob_0; // [rsp+50h] [rbp-2B0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::reference v47; // [rsp+58h] [rbp-2A8h]
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *prob; // [rsp+68h] [rbp-298h]
  char v49[656]; // [rsp+70h] [rbp-290h] BYREF

  v4 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(608LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "15 48 4 14 total_prob:112 64 4 17 height_area_id:83 80 4 20 prev_climate_type:83 96 8 16 templat"
                        "e_iter:94 128 8 9 <unknown> 160 8 20 climate_map_iter:103 192 8 9 <unknown> 224 8 15 __for_begin"
                        ":113 256 8 13 __for_end:113 288 8 15 __for_begin:125 320 8 13 __for_end:125 352 32 9 <unknown> 4"
                        "16 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = WeatherExcelConfigMgr::randNextWeather;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -202116109;
  *(_DWORD *)(v4 + 64) = height_area_id;
  *(_DWORD *)(v4 + 80) = prev_climate_type;
  weather_config_ptr = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(this, *(unsigned int *)(v4 + 64));
  if ( weather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weather_config_ptr->default_climate);
    }
    result_climate = weather_config_ptr->default_climate;
    p_weather_template_map = &this->weather_template_map_;
    p_template_name = &weather_config_ptr->template_name;
    v10 = *(unsigned __int8 *)(((v4 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v10 )
      __asan_report_store8(v4 + 96, v10);
    v11 = p_template_name;
    *(std::unordered_map<std::string,WeatherTemplate>::const_iterator *)(v4 + 96) = std::unordered_map<std::string,WeatherTemplate>::find(
                                                                                      p_weather_template_map,
                                                                                      p_template_name);
    v12 = &this->weather_template_map_;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v11);
    *(std::unordered_map<std::string,WeatherTemplate>::const_iterator *)(v4 + 128) = std::unordered_map<std::string,WeatherTemplate>::end(v12);
    v13 = std::__detail::operator==<std::pair<std::string const,WeatherTemplate>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,WeatherTemplate>,true> *)(v4 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,WeatherTemplate>,true> *)(v4 + 128));
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/WeatherExcelConfig.cpp",
        "randNextWeather",
        97);
      v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)(v4 + 416),
              (const char (*)[44])"weather_template not found, height_area_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v15,
              (const char (*)[20])" prev_climate_type:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 80));
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])" template_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &weather_config_ptr->template_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
      v3 = result_climate;
    }
    else
    {
      climate_prob_map = &std::__detail::_Node_const_iterator<std::pair<std::string const,WeatherTemplate>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,WeatherTemplate>,false,true> *const)(v4 + 96))->second;
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, v4 + 128);
      *(std::map<unsigned int,std::map<unsigned int,float>>::const_iterator *)(v4 + 160) = std::map<unsigned int,std::map<unsigned int,float>>::find(
                                                                                             &climate_prob_map->climate_prob_map,
                                                                                             (const std::map<unsigned int,std::map<unsigned int,float>>::key_type *)(v4 + 80));
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v4 + 80);
      *(std::map<unsigned int,std::map<unsigned int,float>>::const_iterator *)(v4 + 192) = std::map<unsigned int,std::map<unsigned int,float>>::end(&climate_prob_map->climate_prob_map);
      v19 = (char *)(v4 + 192);
      v20 = std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,float> > >::_Self *)(v4 + 160),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,float> > >::_Self *)(v4 + 192));
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
      {
        *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/WeatherExcelConfig.cpp",
          "randNextWeather",
          106);
        v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)(v4 + 480),
                (const char (*)[44])"climate_prob_map not found, height_area_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v4 + 64));
        v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v22,
                (const char (*)[20])" prev_climate_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        v3 = result_climate;
      }
      else
      {
        prob_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,float>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,float> > > *const)(v4 + 160))->second;
        *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 48, v19);
        *(_DWORD *)(v4 + 48) = 0;
        *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 224, v19);
        *(std::map<unsigned int,float>::const_iterator *)(v4 + 224) = std::map<unsigned int,float>::begin(prob_map);
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 256, v19);
        *(std::map<unsigned int,float>::const_iterator *)(v4 + 256) = std::map<unsigned int,float>::end(prob_map);
        while ( 1 )
        {
          v24 = (char *)(v4 + 256);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v4 + 224),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v4 + 256)) )
            break;
          v47 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v4 + 224));
          std::get<0ul,unsigned int const,float>(v47);
          v25 = (std::tuple_element<1,const std::pair<unsigned int const,float> >::type *)std::get<1ul,unsigned int const,float>(v47);
          prob = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          v26 = *prob;
          if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 48);
          *(float *)(v4 + 48) = *(float *)(v4 + 48) + v26;
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v4 + 224));
        }
        *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 48);
        if ( *(float *)(v4 + 48) == 0.0 )
        {
          v3 = result_climate;
        }
        else
        {
          if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 48);
          v27 = 0LL;
          *(float *)v27.m128i_i32 = common::tools::RandomUtils::rand<float>(0.0, *(float *)(v4 + 48));
          rand_prob = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
          *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 288, v24);
          *(std::map<unsigned int,float>::const_iterator *)(v4 + 288) = std::map<unsigned int,float>::begin(prob_map);
          *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 320, v24);
          *(std::map<unsigned int,float>::const_iterator *)(v4 + 320) = std::map<unsigned int,float>::end(prob_map);
          while ( 1 )
          {
            if ( !std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v4 + 288),
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v4 + 320)) )
            {
              v29 = 1;
              goto LABEL_61;
            }
            v44 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v4 + 288));
            climate_type_0 = std::get<0ul,unsigned int const,float>(v44);
            v28 = (std::tuple_element<1,const std::pair<unsigned int const,float> >::type *)std::get<1ul,unsigned int const,float>(v44);
            prob_0 = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            if ( *prob_0 >= rand_prob )
              break;
            if ( *(_BYTE *)(((unsigned __int64)prob_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)prob_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prob_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(prob_0);
            }
            rand_prob = rand_prob - *prob_0;
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v4 + 288));
          }
          if ( *(_BYTE *)(((unsigned __int64)climate_type_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)climate_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)climate_type_0 >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(climate_type_0);
          }
          v3 = *climate_type_0;
          v29 = 0;
LABEL_61:
          *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( v29 == 1 )
          {
            *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/txt_data_manual/WeatherExcelConfig.cpp",
              "randNextWeather",
              135);
            v30 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    (common::milog::MiLogStream *const)(v4 + 544),
                    (const char (*)[35])"rand weather fail, height_area_id:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v4 + 64));
            v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v31,
                    (const char (*)[13])" total_prob:");
            v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v32, (const float *)(v4 + 48));
            v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v33,
                    (const char (*)[20])" prev_climate_type:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v4 + 80));
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v35,
                    (const char (*)[16])" template_name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &weather_config_ptr->template_name);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
            v3 = result_climate;
          }
        }
      }
    }
  }
  else
  {
    if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/WeatherExcelConfig.cpp",
      "randNextWeather",
      88);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)(v4 + 352),
           (const char (*)[45])"findWeatherExcelConfig fail, height_area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
    v3 = 1;
  }
  result = v3;
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 142: range 000000000CB5E02A-000000000CB5E5BF
__int64 __fastcall WeatherExcelConfigMgr::findHeightAreaIdByWeatherAreaIdAndHeight(
        const WeatherExcelConfigMgr *const this,
        __int64 weather_area_id,
        float height)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>> *p_weather_height_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  __int64 result; // rax
  const std::pair<float,unsigned int> *M_current; // r14
  const std::pair<float,unsigned int> *v12; // rcx
  bool v13; // al
  bool v14; // al
  bool v15; // al
  __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> >::pointer v16; // rdx
  unsigned int *p_second; // rax
  std::vector<std::pair<float,unsigned int>> *height_id_vec; // [rsp+18h] [rbp-178h]
  char v19[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 9 <unknown> 64 4 19 weather_area_id:141 80 4 10 height:141 96 8 12 vec_iter:143 128 8 9 "
                        "<unknown> 160 8 8 iter:149 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeatherExcelConfigMgr::findHeightAreaIdByWeatherAreaIdAndHeight;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -202116352;
  *(_DWORD *)(v3 + 64) = weather_area_id;
  *(float *)(v3 + 80) = height;
  p_weather_height_id_map = &this->weather_height_id_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, weather_area_id);
  *(std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::find(p_weather_height_id_map, (const std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::key_type *)(v3 + 64));
  v7 = &this->weather_height_id_map_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 64);
  *(std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::end(v7);
  v8 = (char *)(v3 + 128);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false> *)(v3 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0LL;
    goto LABEL_30;
  }
  height_id_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false,false> *const)(v3 + 96))->second;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, v8);
  *(_DWORD *)(v3 + 48) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v8);
  *(std::pair<float,unsigned int> *)(v3 + 192) = std::make_pair<float &,unsigned int>(
                                                   (float *)(v3 + 80),
                                                   (unsigned int *)(v3 + 48));
  M_current = std::vector<std::pair<float,unsigned int>>::end(height_id_vec)._M_current;
  v12 = std::vector<std::pair<float,unsigned int>>::begin(height_id_vec)._M_current;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v3 + 48);
  *(__gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 160) = std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>,std::pair<float,unsigned int>>((__gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> >)v12, (__gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> >)M_current, (const std::pair<float,unsigned int> *)(v3 + 192));
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, M_current);
  *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 224) = std::vector<std::pair<float,unsigned int>>::end(height_id_vec);
  v13 = __gnu_cxx::operator==<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 160),
          (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 224));
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( !v13 )
    goto LABEL_27;
  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 256, v3 + 224);
  *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 256) = std::vector<std::pair<float,unsigned int>>::begin(height_id_vec);
  v14 = __gnu_cxx::operator==<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 160),
          (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 256));
  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
  if ( v14 )
  {
    result = 0LL;
    goto LABEL_30;
  }
  __gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>::operator--((__gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *const)(v3 + 160));
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 288, v3 + 256);
  *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 288) = std::vector<std::pair<float,unsigned int>>::end(height_id_vec);
  v15 = __gnu_cxx::operator==<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 160),
          (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 288));
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
  if ( v15 )
  {
    result = 0LL;
  }
  else
  {
LABEL_27:
    v16 = __gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *const)(v3 + 160));
    p_second = &v16->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v16->second;
  }
LABEL_30:
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 167: range 000000000CB5E5C0-000000000CB5E839
__int64 __fastcall WeatherExcelConfigMgr::checkAndGatherWeatherExecCheckInfo(
        const WeatherExcelConfigMgr *const this,
        WeatherExecCheckInfo *weather_exec_check_info,
        char is_open_weather,
        uint32_t height_area_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::map<unsigned int,std::set<unsigned int>> *v10; // rax
  std::set<unsigned int> *v11; // rax
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+28h] [rbp-A8h]
  char v15[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 19 is_open_weather:166 48 4 18 height_area_id:166 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = WeatherExcelConfigMgr::checkAndGatherWeatherExecCheckInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862723] = -202116109;
  *(_BYTE *)(v4 + 32) = is_open_weather;
  *(_DWORD *)(v4 + 48) = height_area_id;
  weather_config_ptr = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(this, *(unsigned int *)(v4 + 48));
  if ( weather_config_ptr )
  {
    v10 = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::operator[](
            weather_exec_check_info,
            (const std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::key_type *)(v4 + 32));
    v11 = std::map<unsigned int,std::set<unsigned int>>::operator[](v10, &weather_config_ptr->weather_area_id);
    std::set<unsigned int>::insert(v11, (const std::set<unsigned int>::value_type *)(v4 + 48));
    result = 0LL;
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WeatherExcelConfig.cpp",
      "checkAndGatherWeatherExecCheckInfo",
      171);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           v7,
           (const char (*)[45])"findWeatherExcelConfig fail, height_area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 179: range 000000000CB5E83A-000000000CB5F636
int32_t __cdecl WeatherExcelConfigMgr::checkWeatherExecCheckInfo(
        const WeatherExcelConfigMgr *const this,
        const WeatherExecCheckInfo *weather_exec_check_info,
        bool is_need_error)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  _BOOL8 v9; // rsi
  bool v10; // al
  std::map<unsigned int,std::set<unsigned int>> *p_second; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>> *p_weather_height_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>> *v18; // rdx
  char *v19; // rsi
  bool v20; // al
  __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> >::reference v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned __int64 v28; // rax
  int32_t ret; // [rsp+24h] [rbp-2ECh]
  std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::reference v33; // [rsp+30h] [rbp-2E0h]
  std::tuple_element<0,std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::type *is_open_weather; // [rsp+38h] [rbp-2D8h]
  const std::tuple_element<1,std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::type *__for_range_0; // [rsp+48h] [rbp-2C8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::reference v36; // [rsp+50h] [rbp-2C0h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *weather_area_id; // [rsp+58h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *height_area_id_set; // [rsp+60h] [rbp-2B0h]
  std::vector<std::pair<float,unsigned int>> *__for_range_1; // [rsp+68h] [rbp-2A8h]
  const std::set<unsigned int>::value_type *height_area_id; // [rsp+78h] [rbp-298h]
  char v41[656]; // [rsp+80h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 8 15 __for_begin:181 80 8 13 __for_end:181 112 8 15 __for_begin:183 144 8"
                        " 13 __for_end:183 176 8 19 other_side_iter:185 208 8 9 <unknown> 240 8 8 iter:199 272 8 9 <unkno"
                        "wn> 304 8 9 <unknown> 336 8 15 __for_begin:202 368 8 13 __for_end:202 400 32 9 <unknown> 464 32 "
                        "9 <unknown> 528 48 29 expect_height_area_id_set:198";
  *(_QWORD *)(v3 + 16) = WeatherExcelConfigMgr::checkWeatherExecCheckInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862738] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, weather_exec_check_info);
  *(std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 48) = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::begin(weather_exec_check_info);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, weather_exec_check_info);
  *(std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 80) = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::end(weather_exec_check_info);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)(v3 + 48),
            (const std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)(v3 + 80)) )
      break;
    v33 = std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > > *const)(v3 + 48));
    is_open_weather = std::get<0ul,bool const,std::map<unsigned int,std::set<unsigned int>>>(v33);
    __for_range_0 = std::get<1ul,bool const,std::map<unsigned int,std::set<unsigned int>>>(v33);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 112) = std::map<unsigned int,std::set<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 144) = std::map<unsigned int,std::set<unsigned int>>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 112),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 144)) )
    {
      v36 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 112));
      weather_area_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v36);
      height_area_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v36);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      v7 = (unsigned __int8)is_open_weather & 7;
      v8 = (*(_BYTE *)(((unsigned __int64)is_open_weather >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)is_open_weather >> 3) + 0x7FFF8000));
      if ( (_BYTE)v8 )
        __asan_report_load1(is_open_weather, v7, v8);
      v9 = !*is_open_weather;
      if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 32, v9, v3 + 32);
      *(_BYTE *)(v3 + 32) = v9;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, v9);
      *(std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 176) = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::find(weather_exec_check_info, (const std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::key_type *)(v3 + 32));
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 208, v3 + 32);
      *(std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 208) = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::end(weather_exec_check_info);
      v10 = std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)(v3 + 176),
              (const std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)(v3 + 208));
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        p_second = &std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > > *const)(v3 + 176))->second;
        if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::set<unsigned int>> const,unsigned int>(
               p_second,
               weather_area_id) )
        {
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WeatherExcelConfig.cpp",
            "checkWeatherExecCheckInfo",
            190);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                  v12,
                  (const char (*)[76])"you cannot open and close a weather area at the same time! weather_area_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, weather_area_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      v14 = (unsigned __int8)is_open_weather & 7;
      v15 = (*(_BYTE *)(((unsigned __int64)is_open_weather >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)is_open_weather >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_load1(is_open_weather, v14, v15);
      if ( *is_open_weather )
      {
        v16 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v16 = 0;
        *(_WORD *)(v16 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 528));
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        p_weather_height_id_map = &this->weather_height_id_map_;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 240, v14);
        *(std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::const_iterator *)(v3 + 240) = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::find(p_weather_height_id_map, weather_area_id);
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        v18 = &this->weather_height_id_map_;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 272, weather_area_id);
        *(std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::const_iterator *)(v3 + 272) = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::end(v18);
        v19 = (char *)(v3 + 272);
        v20 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false> *)(v3 + 240),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false> *)(v3 + 272));
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        if ( v20 )
        {
          __for_range_1 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false,false> *const)(v3 + 240))->second;
          *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 336, v19);
          *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 336) = std::vector<std::pair<float,unsigned int>>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 368, v19);
          *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 368) = std::vector<std::pair<float,unsigned int>>::end(__for_range_1);
          while ( __gnu_cxx::operator!=<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>(
                    (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 336),
                    (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 368)) )
          {
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            v21 = __gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *const)(v3 + 336));
            if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 304, v3 + 368);
            if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v21 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(v21, 8LL);
            }
            *(std::pair<float,unsigned int> *)(v3 + 304) = *v21;
            std::get<0ul,float,unsigned int>((std::pair<float,unsigned int> *)(v3 + 304));
            height_area_id = std::get<1ul,float,unsigned int>((std::pair<float,unsigned int> *)(v3 + 304));
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 528), height_area_id);
            __gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *const)(v3 + 336));
          }
          *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
        }
        if ( !std::operator==<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                height_area_id_set,
                (const std::set<unsigned int> *)(v3 + 528)) )
        {
          if ( is_need_error )
          {
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 464, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 464),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WeatherExcelConfig.cpp",
              "checkWeatherExecCheckInfo",
              213);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 464),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    v22,
                    (const char (*)[52])"you must open weather areas together! json_area_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, weather_area_id);
            v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v24,
                    (const char (*)[14])" area_id_set:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int>(v25, height_area_id_set);
            v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" expect:");
            common::milog::MiLogStream::operator<<<unsigned int>(v27, (const std::set<unsigned int> *)(v3 + 528));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
          }
          ret = -1;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 528));
      }
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      v28 = ((v3 + 528) >> 3) + 2147450880;
      *(_DWORD *)v28 = -117901064;
      *(_WORD *)(v28 + 4) = -1800;
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 112));
    }
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > > *const)(v3 + 48));
  }
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return ret;
};

// Line 223: range 000000000CB5F638-000000000CB5FF33
int32_t __cdecl WeatherExcelConfigMgr::rewriteWeatherExcelConfig(
        WeatherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::WeatherExcelConfigMap *p_weather_excel_config_map; // rsi
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  uint32_t priority; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  char v14; // cl
  uint32_t *p_weather_area_id; // rsi
  __m128i v16; // xmm0
  int v17; // edx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int *v23; // r8
  std::vector<std::pair<float,unsigned int>>::reference v24; // rax
  _DWORD *v25; // rdx
  double v26; // xmm0_8
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  std::vector<unsigned int> *__for_range; // [rsp+18h] [rbp-188h]
  data::WeatherExcelConfig *weather_area_config; // [rsp+20h] [rbp-180h]
  std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::mapped_type *height_area_vec; // [rsp+28h] [rbp-178h]
  char v35[368]; // [rsp+30h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 18 height_area_id:225 48 4 14 max_height:231 64 8 15 __for_begin:225 96 8 13 __for_end:22"
                        "5 128 24 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeatherExcelConfigMgr::rewriteWeatherExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  p_weather_excel_config_map = &this->weather_excel_config_map;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) )
  {
    p_weather_excel_config_map = (data::WeatherExcelConfigMap *)24;
    __asan_report_store_n(v2 + 128, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::WeatherExcelConfig>>(
    (std::vector<unsigned int> *)(v2 + 128),
    p_weather_excel_config_map);
  __for_range = (std::vector<unsigned int> *)(v2 + 128);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, p_weather_excel_config_map);
  *(std::vector<unsigned int>::iterator *)(v2 + 64) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, p_weather_excel_config_map);
  *(std::vector<unsigned int>::iterator *)(v2 + 96) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v2 + 96);
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96)) )
      break;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 64));
    v8 = (int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    v10 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v6) = v10 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v9;
    weather_area_config = std::unordered_map<unsigned int,data::WeatherExcelConfig>::operator[](
                            &this->weather_excel_config_map,
                            (const std::unordered_map<unsigned int,data::WeatherExcelConfig>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&weather_area_config->priority >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weather_area_config->priority >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weather_area_config->priority);
    }
    priority = weather_area_config->priority;
    p_weather_area_id = &weather_area_config->weather_area_id;
    v12 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->weather_id_priority_map_,
            &weather_area_config->weather_area_id);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    LOBYTE(p_weather_area_id) = v14 != 0;
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      __asan_report_store4(v12, p_weather_area_id);
    *v13 = priority;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, p_weather_area_id);
    v16 = 0LL;
    *(_DWORD *)(v2 + 48) = 0;
    if ( (unsigned __int8)std::string::empty() )
    {
      *(float *)v16.m128i_i32 = std::numeric_limits<float>::max();
      v17 = _mm_cvtsi128_si32(v16);
      v18 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(p_weather_area_id) = v18 != 0;
        __asan_report_store4(v2 + 48, p_weather_area_id);
      }
      *(_DWORD *)(v2 + 48) = v17;
LABEL_30:
      height_area_vec = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::operator[](
                          &this->weather_height_id_map_,
                          &weather_area_config->weather_area_id);
      if ( std::vector<std::pair<float,unsigned int>>::empty(height_area_vec) )
        goto LABEL_37;
      v24 = std::vector<std::pair<float,unsigned int>>::back(height_area_vec);
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      LODWORD(v26) = *v25;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        v26 = __asan_report_load4(v2 + 48);
      if ( *(float *)&v26 >= *(float *)(v2 + 48) )
        v27 = 1;
      else
LABEL_37:
        v27 = 0;
      if ( v27 )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WeatherExcelConfig.cpp",
          "rewriteWeatherExcelConfig",
          248);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v28, (const char (*)[65])byte_1A136C80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v29,
          &weather_area_config->weather_area_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        std::vector<std::pair<float,unsigned int>>::emplace_back<float &,unsigned int &>(
          height_area_vec,
          (float *)(v2 + 48),
          (unsigned int *)(v2 + 32),
          (float *)(v2 + 48),
          v23);
      }
      goto LABEL_43;
    }
    if ( !common::tools::StringUtils::strToNum<float>(&weather_area_config->max_height_str, (float *)(v2 + 48), 1) )
      goto LABEL_30;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WeatherExcelConfig.cpp",
      "rewriteWeatherExcelConfig",
      240);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v19, (const char (*)[28])byte_1A136C00);
    v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &weather_area_config->max_height_str);
    v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])" height_area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
LABEL_43:
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 64));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  result = ret;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 258: range 000000000CB5FF34-000000000CB60B0A
int32_t __cdecl WeatherExcelConfigMgr::rewriteWeatherTemplateExcelConfig(
        WeatherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  char *v7; // rsi
  unsigned __int64 v8; // rax
  data::ClimateType weather_type; // ecx
  char v10; // al
  std::map<unsigned int,float> *v11; // rdx
  std::map<unsigned int,float> *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,float> > >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // eax
  int32_t result; // eax
  int v21; // [rsp+14h] [rbp-28Ch]
  int32_t v22; // [rsp+18h] [rbp-288h]
  common::milog::MiLogStream *v23; // [rsp+18h] [rbp-288h]
  data::WeatherTemplateExcelConfigVec *__for_range; // [rsp+30h] [rbp-270h]
  const data::WeatherTemplateExcelConfig *template_config; // [rsp+38h] [rbp-268h]
  const std::string *template_name; // [rsp+40h] [rbp-260h]
  std::unordered_map<std::string,WeatherTemplate>::mapped_type *climate_prob_map; // [rsp+48h] [rbp-258h]
  char v28[592]; // [rsp+50h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 16 climate_type:273 208 8"
                        " 15 __for_begin:259 240 8 13 __for_end:259 272 8 9 <unknown> 304 32 9 <unknown> 368 48 12 prob_m"
                        "ap:261 448 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeatherExcelConfigMgr::rewriteWeatherTemplateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = 61956;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  __for_range = &this->weather_template_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 208, txt_config_mgr);
  *(std::vector<data::WeatherTemplateExcelConfig>::iterator *)(v2 + 208) = std::vector<data::WeatherTemplateExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 240, txt_config_mgr);
  *(std::vector<data::WeatherTemplateExcelConfig>::iterator *)(v2 + 240) = std::vector<data::WeatherTemplateExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::WeatherTemplateExcelConfig *,std::vector<data::WeatherTemplateExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::WeatherTemplateExcelConfig*,std::vector<data::WeatherTemplateExcelConfig> > *)(v2 + 208),
            (const __gnu_cxx::__normal_iterator<data::WeatherTemplateExcelConfig*,std::vector<data::WeatherTemplateExcelConfig> > *)(v2 + 240)) )
  {
    template_config = __gnu_cxx::__normal_iterator<data::WeatherTemplateExcelConfig *,std::vector<data::WeatherTemplateExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::WeatherTemplateExcelConfig*,std::vector<data::WeatherTemplateExcelConfig> > *const)(v2 + 208));
    v5 = ((v2 + 368) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_WORD *)(v5 + 4) = 0;
    v6 = ((v2 + 448) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 6) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80, v2 + 240);
    *(_DWORD *)(v2 + 80) = 1;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 448),
      (data::ClimateType *)(v2 + 80),
      &template_config->sunny_prob);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 96, v2 + 80);
    *(_DWORD *)(v2 + 96) = 2;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 456),
      (data::ClimateType *)(v2 + 96),
      &template_config->cloudy_prob);
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 112, v2 + 96);
    *(_DWORD *)(v2 + 112) = 3;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 464),
      (data::ClimateType *)(v2 + 112),
      &template_config->rain_prob);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 128, v2 + 112);
    *(_DWORD *)(v2 + 128) = 4;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 472),
      (data::ClimateType *)(v2 + 128),
      &template_config->thunderstorm_prob);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 144, v2 + 128);
    *(_DWORD *)(v2 + 144) = 5;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 480),
      (data::ClimateType *)(v2 + 144),
      &template_config->snow_prob);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 160, v2 + 144);
    *(_DWORD *)(v2 + 160) = 6;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 488),
      (data::ClimateType *)(v2 + 160),
      &template_config->mist_prob);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 176, v2 + 160);
    *(_DWORD *)(v2 + 176) = 7;
    std::pair<unsigned int const,float>::pair<data::ClimateType,true>(
      (std::pair<unsigned int const,float> *const)(v2 + 496),
      (data::ClimateType *)(v2 + 176),
      &template_config->desert_prob);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::pair<unsigned int const,float>>::allocator((std::allocator<std::pair<unsigned int const,float> > *const)(v2 + 64));
    v7 = (char *)(v2 + 448);
    std::map<unsigned int,float>::map(
      (std::map<unsigned int,float> *const)(v2 + 368),
      (std::initializer_list<std::pair<unsigned int const,float> >)__PAIR128__(7LL, v2 + 448),
      (const std::less<unsigned int> *)(v2 + 48),
      (const std::map<unsigned int,float>::allocator_type *)(v2 + 64));
    std::allocator<std::pair<unsigned int const,float>>::~allocator((std::allocator<std::pair<unsigned int const,float> > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v8 = ((v2 + 448) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    template_name = &template_config->template_name;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&template_config->weather_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&template_config->weather_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&template_config->weather_type);
    }
    weather_type = template_config->weather_type;
    v10 = *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v2 + 192, v7);
    }
    *(_DWORD *)(v2 + 192) = weather_type;
    climate_prob_map = std::unordered_map<std::string,WeatherTemplate>::operator[](
                         &this->weather_template_map_,
                         template_name);
    v11 = std::move<std::map<unsigned int,float> &>((std::map<unsigned int,float> *)(v2 + 368));
    v13 = std::map<unsigned int,std::map<unsigned int,float>>::emplace<unsigned int &,std::map<unsigned int,float>>(
            &climate_prob_map->climate_prob_map,
            (unsigned int *)(v2 + 192),
            v11,
            (unsigned int *)(v2 + 192),
            v12);
    if ( !v13.second )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeatherExcelConfig.cpp",
        "rewriteWeatherTemplateExcelConfig",
        277);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v14,
              (const char (*)[24])"duplicate climate_type:");
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&template_config->weather_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&template_config->weather_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&template_config->weather_type);
      }
      v15 = (__int64)data::enumValToStr(template_config->weather_type, (__int64)"duplicate climate_type:");
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
        v15 = __asan_report_store8(v2 + 272, "duplicate climate_type:");
      *(_QWORD *)(v2 + 272) = v15;
      v16 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)(v2 + 272));
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" template_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, template_name);
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v22 = -1;
      v21 = 0;
    }
    else
    {
      v21 = 1;
    }
    std::map<unsigned int,float>::~map((std::map<unsigned int,float> *const)(v2 + 368));
    v18 = ((v2 + 368) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_WORD *)(v18 + 4) = -1800;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v19 = 0;
      goto LABEL_41;
    }
    __gnu_cxx::__normal_iterator<data::WeatherTemplateExcelConfig *,std::vector<data::WeatherTemplateExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::WeatherTemplateExcelConfig*,std::vector<data::WeatherTemplateExcelConfig> > *const)(v2 + 208));
  }
  v19 = 1;
LABEL_41:
  if ( v19 == 1 )
    v22 = 0;
  result = v22;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 286: range 000000000CB60B0C-000000000CB61DAB
int32_t __cdecl WeatherExcelConfigMgr::checkWeatherExcelConfig(
        WeatherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  std::tuple_element<1,const std::pair<float,unsigned int> >::type *v21; // rax
  WeatherExcelConfigMgr *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t v28; // edx
  __int64 scene_id; // rsi
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  int v34; // edx
  int v35; // eax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<std::pair<float,unsigned int> >,std::pair<float,unsigned int> >::value_type *v38; // rax
  float *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  int32_t result; // eax
  float v44; // [rsp+Ch] [rbp-364h]
  int32_t ret; // [rsp+20h] [rbp-350h]
  uint32_t priority; // [rsp+24h] [rbp-34Ch]
  data::WeatherExcelConfigMap *__for_range; // [rsp+28h] [rbp-348h]
  std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>> *__for_range_0; // [rsp+30h] [rbp-340h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false,false>::reference v51; // [rsp+38h] [rbp-338h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> > >::type *weather_area_id; // [rsp+40h] [rbp-330h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> > >::type *weather_area_vec; // [rsp+48h] [rbp-328h]
  __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> >::reference v54; // [rsp+58h] [rbp-318h]
  std::tuple_element<1,const std::pair<float,unsigned int> >::type *height_area_id; // [rsp+68h] [rbp-308h]
  data::WeatherExcelConfig *weather_config_ptr; // [rsp+70h] [rbp-300h]
  const ConfigSceneWeatherArea *config_scene_weather_area_ptr; // [rsp+78h] [rbp-2F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false>::reference v58; // [rsp+80h] [rbp-2F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WeatherExcelConfig> >::type *weather_config; // [rsp+90h] [rbp-2E0h]
  const WeatherTemplate *weather_template_ptr; // [rsp+98h] [rbp-2D8h]
  char v61[720]; // [rsp+A0h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 8 15 __for_begin:288 64 8 13 __for_end:288 96 8 15 __for_begin:305 128 8 13 __for_end:305 "
                        "160 8 15 __for_begin:309 192 8 13 __for_end:309 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeatherExcelConfigMgr::checkWeatherExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -202116109;
  ret = 0;
  __for_range = &this->weather_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeatherExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::WeatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeatherExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WeatherExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WeatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeatherExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeatherExcelConfig>,false> *)(v3 + 64)) )
      break;
    v58 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::WeatherExcelConfig>(v58);
    weather_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WeatherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WeatherExcelConfig>(v58);
    weather_template_ptr = WeatherExcelConfigMgr::findWeatherTemplate(this, &weather_config->template_name);
    if ( weather_template_ptr )
    {
      v11 = ((_BYTE)weather_config - 124) & 7;
      v12 = (*(_BYTE *)(((unsigned __int64)&weather_config->is_use_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&weather_config->is_use_default >> 3) + 0x7FFF8000));
      if ( (_BYTE)v12 )
        __asan_report_load1(&weather_config->is_use_default, v11, v12);
      if ( !weather_config->is_use_default
        && !common::tools::MiscUtils::isContains<std::map<unsigned int,std::map<unsigned int,float>> const,data::ClimateType>(
              &weather_template_ptr->climate_prob_map,
              &weather_config->default_climate) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WeatherExcelConfig.cpp",
          "checkWeatherExcelConfig",
          299);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v14, (const char (*)[66])byte_1A1370C0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &weather_config->area_id);
        v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])byte_1A137140);
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &weather_config->template_name);
        v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v18, (const char (*)[23])byte_1A137180);
        common::milog::MiLogStream::operator<<<data::ClimateType,(data::ClimateType*)0>(
          v19,
          &weather_config->default_climate);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeatherExcelConfig.cpp",
        "checkWeatherExcelConfig",
        293);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v7, (const char (*)[31])byte_1A137040);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &weather_config->template_name);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])byte_1A137080);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &weather_config->area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->weather_height_id_map_;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v6);
  *(std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<std::pair<float,unsigned int>>>::end(__for_range_0);
  while ( 2 )
  {
    v20 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false> *)(v3 + 128)) )
    {
      v35 = 1;
      break;
    }
    v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false,false> *const)(v3 + 96));
    weather_area_id = std::get<0ul,unsigned int const,std::vector<std::pair<float,unsigned int>>>(v51);
    weather_area_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::pair<float,unsigned int>>>(v51);
    priority = 0;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v20);
    *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 160) = std::vector<std::pair<float,unsigned int>>::begin(weather_area_vec);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v20);
    *(std::vector<std::pair<float,unsigned int>>::const_iterator *)(v3 + 192) = std::vector<std::pair<float,unsigned int>>::end(weather_area_vec);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *)(v3 + 192)) )
      {
        v34 = 1;
        goto LABEL_66;
      }
      v54 = __gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *const)(v3 + 160));
      std::get<0ul,float,unsigned int>(v54);
      v21 = (std::tuple_element<1,const std::pair<float,unsigned int> >::type *)std::get<1ul,float,unsigned int>(v54);
      height_area_id = v21;
      v22 = this;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      weather_config_ptr = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(v22, *height_area_id);
      if ( !weather_config_ptr )
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WeatherExcelConfig.cpp",
          "checkWeatherExcelConfig",
          314);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v23,
                (const char (*)[45])"findWeatherExcelConfig fail, height_area_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, height_area_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        goto LABEL_64;
      }
      if ( priority )
      {
        if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->priority >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->priority >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&weather_config_ptr->priority);
        }
        if ( priority != weather_config_ptr->priority )
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WeatherExcelConfig.cpp",
            "checkWeatherExcelConfig",
            320);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v25, (const char (*)[48])byte_1A1371C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, height_area_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          goto LABEL_64;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->priority >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->priority >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&weather_config_ptr->priority);
      }
      priority = weather_config_ptr->priority;
      if ( std::vector<std::pair<float,unsigned int>>::size(weather_area_vec) > 1 )
      {
        p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->weather_area_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)weather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weather_config_ptr->weather_area_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          p_json_config_mgr = (JsonConfigMgr *)&weather_config_ptr->weather_area_id;
          __asan_report_load4(&weather_config_ptr->weather_area_id);
        }
        v28 = weather_config_ptr->weather_area_id;
        if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_json_config_mgr = (JsonConfigMgr *)&weather_config_ptr->scene_id;
          __asan_report_load4(&weather_config_ptr->scene_id);
        }
        scene_id = weather_config_ptr->scene_id;
        config_scene_weather_area_ptr = JsonConfigMgr::findConfigSceneWeatherArea(p_json_config_mgr, scene_id, v28);
        if ( config_scene_weather_area_ptr )
        {
          if ( *(char *)(((unsigned __int64)&config_scene_weather_area_ptr->config_weather_area.is_use_height_border >> 3)
                       + 0x7FFF8000) < 0 )
            __asan_report_load1(
              &config_scene_weather_area_ptr->config_weather_area.is_use_height_border,
              scene_id,
              &config_scene_weather_area_ptr->config_weather_area.is_use_height_border);
          if ( config_scene_weather_area_ptr->config_weather_area.is_use_height_border )
            break;
        }
      }
LABEL_64:
      __gnu_cxx::__normal_iterator<std::pair<float,unsigned int> const*,std::vector<std::pair<float,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<float,unsigned int>*,std::vector<std::pair<float,unsigned int>> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WeatherExcelConfig.cpp",
      "checkWeatherExcelConfig",
      331);
    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v31 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v30, (const char (*)[74])byte_1A137220);
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, height_area_id);
    v33 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v32, (const char (*)[23])byte_1A1372A0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, weather_area_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v34 = 0;
LABEL_66:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v34 != 1 )
    {
      v35 = 0;
      break;
    }
    if ( std::vector<std::pair<float,unsigned int>>::empty(weather_area_vec) )
    {
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeatherExcelConfig.cpp",
        "checkWeatherExcelConfig",
        339);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v36, (const char (*)[17])"weather_area_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, weather_area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      v2 = -1;
      v35 = 0;
    }
    else
    {
      v38 = (__gnu_cxx::__alloc_traits<std::allocator<std::pair<float,unsigned int> >,std::pair<float,unsigned int> >::value_type *)std::vector<std::pair<float,unsigned int>>::back(weather_area_vec);
      v39 = (float *)v38;
      if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v38);
      }
      v44 = *v39;
      if ( v44 == std::numeric_limits<float>::max() )
      {
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<float,unsigned int>> >,false,false> *const)(v3 + 96));
        continue;
      }
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeatherExcelConfig.cpp",
        "checkWeatherExcelConfig",
        344);
      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v40, (const char (*)[17])"weather_area_id:");
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, weather_area_id);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v42, (const char (*)[35])byte_1A137320);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      v2 = -1;
      v35 = 0;
    }
    break;
  }
  if ( v35 == 1 )
    v2 = ret;
  result = v2;
  if ( v61 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};
