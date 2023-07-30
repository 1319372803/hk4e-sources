// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_config_mgr.h

// Line 47: range 000000000F779596-000000000F7795D4
void __cdecl ConfigRectZone::ConfigRectZone(ConfigRectZone *const this)
{
  data::ConfigEnvironmentZone::ConfigEnvironmentZone(&this->env_zone_config);
  data::Point2D::Point2D(&this->low_left);
  data::Point2D::Point2D(&this->high_right);
};

// Line 47: range 000000000F87232A-000000000F872549
void __cdecl ConfigRectZone::ConfigRectZone(ConfigRectZone *const this, ConfigRectZone *a2)
{
  data::ConfigEnvironmentZone::ConfigEnvironmentZone(&this->env_zone_config, &a2->env_zone_config);
  if ( *(char *)(((unsigned __int64)&this->low_left >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->low_left.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->low_left.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->low_left, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->low_left >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->low_left.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->low_left.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->low_left, 12LL);
  }
  this->low_left = a2->low_left;
  if ( (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->high_right >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->high_right >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->high_right.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 41) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->high_right.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->high_right, 12LL);
  }
  if ( (((unsigned __int8)a2 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->high_right >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->high_right >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->high_right.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 41) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->high_right.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->high_right, 12LL);
  }
  this->high_right = a2->high_right;
};

// Line 47: range 000000000F7795D6-000000000F7795F0
void __cdecl ConfigRectZone::~ConfigRectZone(ConfigRectZone *const this)
{
  data::ConfigEnvironmentZone::~ConfigEnvironmentZone(&this->env_zone_config);
};

// Line 55: range 000000000F784790-000000000F7847BA
void __cdecl ConfigSceneWeatherArea::ConfigSceneWeatherArea(ConfigSceneWeatherArea *const this)
{
  data::ConfigWeatherArea::ConfigWeatherArea(&this->config_weather_area);
  std::shared_ptr<InteriorCheckablePolygon>::shared_ptr(&this->polygon_ptr);
};

// Line 55: range 000000000F9AA31E-000000000F9AA35E
void __cdecl ConfigSceneWeatherArea::ConfigSceneWeatherArea(
        ConfigSceneWeatherArea *const this,
        ConfigSceneWeatherArea *a2)
{
  data::ConfigWeatherArea::ConfigWeatherArea(&this->config_weather_area, &a2->config_weather_area);
  std::shared_ptr<InteriorCheckablePolygon>::shared_ptr(&this->polygon_ptr, &a2->polygon_ptr);
};

// Line 55: range 000000000F7847BC-000000000F7847E6
void __cdecl ConfigSceneWeatherArea::~ConfigSceneWeatherArea(ConfigSceneWeatherArea *const this)
{
  std::shared_ptr<InteriorCheckablePolygon>::~shared_ptr(&this->polygon_ptr);
  data::ConfigWeatherArea::~ConfigWeatherArea(&this->config_weather_area);
};

// Line 74: range 000000000F9A697E-000000000F9A6B18
void __cdecl SceneJsonConfig::SceneJsonConfig(SceneJsonConfig *const this)
{
  __int64 v1; // rsi

  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::unordered_map(&this->point_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trans_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trans_radius, v1);
  }
  this->trans_radius = 0.0;
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_point_set);
  std::unordered_map<unsigned int,data::ConfigSceneArea>::unordered_map(&this->area_map);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_area_set);
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigForceField>>::unordered_map(&this->force_map);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_force_set);
  std::unordered_map<unsigned int,data::ConfigRoute>::unordered_map(&this->route_map);
  std::map<unsigned int,std::vector<ConfigRectZone>>::map(&this->rect_zone_list_map);
  std::unordered_map<unsigned int,ConfigSceneWeatherArea>::unordered_map(&this->config_scene_weather_area_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->room_entry_map);
  std::vector<data::Point2D>::vector(&this->open_area_point_vec);
  std::unordered_map<unsigned int,data::ConfigClimateArea>::unordered_map(&this->config_climate_area_map);
  std::unordered_map<unsigned int,data::ConfigCommonPolygon>::unordered_map(&this->config_common_polygon_map);
  std::unordered_map<unsigned int,InteriorCheckablePolygon>::unordered_map(&this->level1_area_polygon_map);
  std::unordered_map<unsigned int,data::ConfigPointArray>::unordered_map(&this->point_array_map);
  data::ConfigLevelLayout::ConfigLevelLayout(&this->level_layout);
  std::unordered_map<unsigned int,InteriorCheckablePolygon>::unordered_map(&this->level_layout_area_polygon_map);
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigLocalEntity>>::unordered_map(&this->local_entity_map);
  data::ConfigSceneHomeInfo::ConfigSceneHomeInfo(&this->home_config);
};

// Line 74: range 000000000F971B26-000000000F971C80
void __cdecl SceneJsonConfig::~SceneJsonConfig(SceneJsonConfig *const this)
{
  data::ConfigSceneHomeInfo::~ConfigSceneHomeInfo(&this->home_config);
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigLocalEntity>>::~unordered_map(&this->local_entity_map);
  std::unordered_map<unsigned int,InteriorCheckablePolygon>::~unordered_map(&this->level_layout_area_polygon_map);
  data::ConfigLevelLayout::~ConfigLevelLayout(&this->level_layout);
  std::unordered_map<unsigned int,data::ConfigPointArray>::~unordered_map(&this->point_array_map);
  std::unordered_map<unsigned int,InteriorCheckablePolygon>::~unordered_map(&this->level1_area_polygon_map);
  std::unordered_map<unsigned int,data::ConfigCommonPolygon>::~unordered_map(&this->config_common_polygon_map);
  std::unordered_map<unsigned int,data::ConfigClimateArea>::~unordered_map(&this->config_climate_area_map);
  std::vector<data::Point2D>::~vector(&this->open_area_point_vec);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->room_entry_map);
  std::unordered_map<unsigned int,ConfigSceneWeatherArea>::~unordered_map(&this->config_scene_weather_area_map);
  std::map<unsigned int,std::vector<ConfigRectZone>>::~map(&this->rect_zone_list_map);
  std::unordered_map<unsigned int,data::ConfigRoute>::~unordered_map(&this->route_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_force_set);
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigForceField>>::~unordered_map(&this->force_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_area_set);
  std::unordered_map<unsigned int,data::ConfigSceneArea>::~unordered_map(&this->area_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_point_set);
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::~unordered_map(&this->point_map);
};

// Line 100: range 000000000F9A712E-000000000F9A71FB
void __cdecl DungeonJsonConfig::DungeonJsonConfig(DungeonJsonConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->exit_scene_id = 0;
  Vector3::Vector3(&this->exit_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->exit_rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entry_point_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->entry_point_id = 0;
};

// Line 111: range 000000000F77A318-000000000F77A342
void __cdecl ConfigAbilityOverride::ConfigAbilityOverride(ConfigAbilityOverride *const this)
{
  std::string::basic_string(this);
  std::shared_ptr<data::ConfigAbility>::shared_ptr(&this->config_ability_ptr);
};

// Line 111: range 000000000F9CABDE-000000000F9CAC1E
void __cdecl ConfigAbilityOverride::ConfigAbilityOverride(ConfigAbilityOverride *const this, ConfigAbilityOverride *a2)
{
  std::string::basic_string(this, a2);
  std::shared_ptr<data::ConfigAbility>::shared_ptr(&this->config_ability_ptr, &a2->config_ability_ptr);
};

// Line 111: range 000000000F77A344-000000000F77A36E
void __cdecl ConfigAbilityOverride::~ConfigAbilityOverride(ConfigAbilityOverride *const this)
{
  std::shared_ptr<data::ConfigAbility>::~shared_ptr(&this->config_ability_ptr);
  std::string::~string(this);
};

// Line 118: range 000000000F77A41C-000000000F77A456
void __cdecl ConfigAbilityHashMap::ConfigAbilityHashMap(ConfigAbilityHashMap *const this)
{
  std::string::basic_string(this);
  std::unordered_map<int,std::string>::unordered_map(&this->modifier_name_hash_map);
  std::unordered_map<int,ConfigAbilityOverride>::unordered_map(&this->config_ability_override_map);
};

// Line 118: range 000000000F9CADC8-000000000F9CAE23
void __cdecl ConfigAbilityHashMap::ConfigAbilityHashMap(ConfigAbilityHashMap *const this, ConfigAbilityHashMap *a2)
{
  std::string::basic_string(this, a2);
  std::unordered_map<int,std::string>::unordered_map(&this->modifier_name_hash_map, &a2->modifier_name_hash_map);
  std::unordered_map<int,ConfigAbilityOverride>::unordered_map(
    &this->config_ability_override_map,
    &a2->config_ability_override_map);
};

// Line 118: range 000000000F77A458-000000000F77A492
void __cdecl ConfigAbilityHashMap::~ConfigAbilityHashMap(ConfigAbilityHashMap *const this)
{
  std::unordered_map<int,ConfigAbilityOverride>::~unordered_map(&this->config_ability_override_map);
  std::unordered_map<int,std::string>::~unordered_map(&this->modifier_name_hash_map);
  std::string::~string(this);
};

// Line 119: range 000000000F9E4FB4-000000000F9E509C
void __cdecl CustomCommonNodeData::CustomCommonNodeData(CustomCommonNodeData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->gadget_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v2);
  }
  this->config_id = 0;
  std::string::basic_string(&this->slot_identifier);
  std::map<std::string,unsigned int>::map(&this->child_map);
  if ( *(char *)(((unsigned __int64)&this->is_checked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_checked, v2, &this->is_checked);
  this->is_checked = 0;
};

// Line 129: range 000000000CE0554A-000000000CE05734
const WidgetJsonNewConfig *__fastcall WidgetJsonNewConfig::findWidgetConfigById(
        const WidgetJsonNewConfig *const this,
        const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>> *material_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>> *v6; // rdx
  const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigBaseWidgetToy> >,false,false>::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 material_id:190 64 8 8 iter:192 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WidgetJsonNewConfig::findWidgetConfigById;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  v6 = material_id + 2;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, material_id);
  *(std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>>::find(v6, (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>>::key_type *)(v3 + 48));
  v7 = material_id + 2;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::shared_ptr<data::ConfigBaseWidgetToy>::shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)this, 0LL);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigBaseWidgetToy> >,false,false> *const)(v3 + 64));
    std::shared_ptr<data::ConfigBaseWidgetToy>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseWidgetToy> *const)this,
      &v9->second);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 208: range 000000000F7D13BC-000000000F7D15FE
std::shared_ptr<data::ConfigWidgetToyAnchorPoint> __cdecl WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyAnchorPoint>(
        const WidgetJsonNewConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *v5; // rdx
  bool v6; // al
  std::shared_ptr<data::ConfigWidgetToyAnchorPoint> result; // rax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:210 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyAnchorPoint>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  std::type_index::type_index(
    (std::type_index *const)(v2 + 64),
    (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyAnchorPoint);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, &`typeinfo for'data::ConfigWidgetToyAnchorPoint);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 32) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::find((const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *const)(v1 + 176), (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::key_type *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  v5 = (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *)(v1 + 176);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 64);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 96) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::end(v5);
  v6 = std::__detail::operator==<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    std::shared_ptr<data::ConfigWidgetToyAnchorPoint>::shared_ptr(
      (std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *const)this,
      0LL);
  }
  else
  {
    std::__detail::_Node_const_iterator<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false,false> *const)(v2 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    result = std::dynamic_pointer_cast<data::ConfigWidgetToyAnchorPoint,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)this);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 208: range 000000000F7D1620-000000000F7D1862
std::shared_ptr<data::ConfigWidgetToyBonfire> __cdecl WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>(
        const WidgetJsonNewConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *v5; // rdx
  bool v6; // al
  std::shared_ptr<data::ConfigWidgetToyBonfire> result; // rax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:210 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  std::type_index::type_index(
    (std::type_index *const)(v2 + 64),
    (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyBonfire);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, &`typeinfo for'data::ConfigWidgetToyBonfire);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 32) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::find((const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *const)(v1 + 176), (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::key_type *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  v5 = (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *)(v1 + 176);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 64);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 96) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::end(v5);
  v6 = std::__detail::operator==<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    std::shared_ptr<data::ConfigWidgetToyBonfire>::shared_ptr(
      (std::shared_ptr<data::ConfigWidgetToyBonfire> *const)this,
      0LL);
  }
  else
  {
    std::__detail::_Node_const_iterator<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false,false> *const)(v2 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    result = std::dynamic_pointer_cast<data::ConfigWidgetToyBonfire,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)this);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 208: range 000000000F7C8196-000000000F7C83D8
std::shared_ptr<data::ConfigWidgetToyLunchBox> __cdecl WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyLunchBox>(
        const WidgetJsonNewConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *v5; // rdx
  bool v6; // al
  std::shared_ptr<data::ConfigWidgetToyLunchBox> result; // rax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:210 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyLunchBox>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  std::type_index::type_index(
    (std::type_index *const)(v2 + 64),
    (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyLunchBox);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, &`typeinfo for'data::ConfigWidgetToyLunchBox);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 32) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::find((const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *const)(v1 + 176), (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::key_type *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  v5 = (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *)(v1 + 176);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 64);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 96) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::end(v5);
  v6 = std::__detail::operator==<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    std::shared_ptr<data::ConfigWidgetToyLunchBox>::shared_ptr(
      (std::shared_ptr<data::ConfigWidgetToyLunchBox> *const)this,
      0LL);
  }
  else
  {
    std::__detail::_Node_const_iterator<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false,false> *const)(v2 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    result = std::dynamic_pointer_cast<data::ConfigWidgetToyLunchBox,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)this);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetToyLunchBox,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 208: range 000000000F7D1BF4-000000000F7D1E36
std::shared_ptr<data::ConfigWidgetToyMiracleRing> __cdecl WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>(
        const WidgetJsonNewConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *v5; // rdx
  bool v6; // al
  std::shared_ptr<data::ConfigWidgetToyMiracleRing> result; // rax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:210 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  std::type_index::type_index(
    (std::type_index *const)(v2 + 64),
    (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyMiracleRing);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, &`typeinfo for'data::ConfigWidgetToyMiracleRing);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 32) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::find((const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *const)(v1 + 176), (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::key_type *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  v5 = (const std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>> *)(v1 + 176);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 64);
  *(std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::const_iterator *)(v2 + 96) = std::unordered_map<std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy>>::end(v5);
  v6 = std::__detail::operator==<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    std::shared_ptr<data::ConfigWidgetToyMiracleRing>::shared_ptr(
      (std::shared_ptr<data::ConfigWidgetToyMiracleRing> *const)this,
      0LL);
  }
  else
  {
    std::__detail::_Node_const_iterator<std::pair<std::type_index const,std::shared_ptr<data::ConfigBaseWidgetToy>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::type_index,std::shared_ptr<data::ConfigBaseWidgetToy> >,false,false> *const)(v2 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    result = std::dynamic_pointer_cast<data::ConfigWidgetToyMiracleRing,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)this);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 239: range 000000000F9ABDDC-000000000F9ABEBB
void __cdecl FurnitureSuiteJsonConfig::FurnitureSuiteJsonConfig(FurnitureSuiteJsonConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->suite_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v2);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v2);
  }
  this->height = 0.0;
  std::map<unsigned int,unsigned int>::map(&this->included_furnite_id_count_map);
};

// Line 239: range 000000000F97223A-000000000F972258
void __cdecl FurnitureSuiteJsonConfig::~FurnitureSuiteJsonConfig(FurnitureSuiteJsonConfig *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->included_furnite_id_count_map);
};

// Line 247: range 000000000F9AC1B4-000000000F9AC265
void __cdecl FurnitureGroupJsonConfig::FurnitureGroupJsonConfig(FurnitureGroupJsonConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->height = 0.0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->scene_group_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->furniture_group_config_map);
};

// Line 247: range 000000000F9722B4-000000000F9722E2
void __cdecl FurnitureGroupJsonConfig::~FurnitureGroupJsonConfig(FurnitureGroupJsonConfig *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->furniture_group_config_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->scene_group_map);
};

// Line 256: range 000000000F788A8E-000000000F788B79
void __cdecl MainCoopJsonConfig::MainCoopJsonConfig(MainCoopJsonConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->main_coop_id = 0;
  std::unordered_map<unsigned int,bool>::unordered_map(&this->point_end_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_confidence, v1);
  }
  this->default_confidence = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_confidence >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_confidence >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_confidence, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->max_confidence = 0;
  std::unordered_map<unsigned int,std::pair<bool,int>>::unordered_map(&this->temp_var_map);
};

// Line 256: range 000000000F9B1D42-000000000F9B1F16
void __cdecl MainCoopJsonConfig::MainCoopJsonConfig(MainCoopJsonConfig *const this, const MainCoopJsonConfig *a2)
{
  uint32_t main_coop_id; // ecx
  char v3; // al
  std::unordered_map<unsigned int,bool> *p_point_end_map; // rsi
  uint32_t default_confidence; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t max_confidence; // ecx
  char v9; // dl
  const MainCoopJsonConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  main_coop_id = a2->main_coop_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->main_coop_id = main_coop_id;
  p_point_end_map = &v10->point_end_map;
  std::unordered_map<unsigned int,bool>::unordered_map(&this->point_end_map, &v10->point_end_map);
  if ( *(_BYTE *)(((unsigned __int64)&v10->default_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->default_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->default_confidence);
  }
  default_confidence = v10->default_confidence;
  v6 = *(_BYTE *)(((unsigned __int64)&this->default_confidence >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_point_end_map) = v6 != 0;
    __asan_report_store4(&this->default_confidence, p_point_end_map);
  }
  this->default_confidence = default_confidence;
  v7 = (((_BYTE)v10 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_confidence >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->max_confidence >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->max_confidence);
  }
  max_confidence = v10->max_confidence;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_confidence >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->max_confidence, v7);
  }
  this->max_confidence = max_confidence;
  std::unordered_map<unsigned int,std::pair<bool,int>>::unordered_map(&this->temp_var_map, &v10->temp_var_map);
};

// Line 256: range 000000000F788B7A-000000000F788BA8
void __cdecl MainCoopJsonConfig::~MainCoopJsonConfig(MainCoopJsonConfig *const this)
{
  std::unordered_map<unsigned int,std::pair<bool,int>>::~unordered_map(&this->temp_var_map);
  std::unordered_map<unsigned int,bool>::~unordered_map(&this->point_end_map);
};

// Line 265: range 000000000F788E1A-000000000F788EB9
void __cdecl RegionalPlayVarJsonConfig::RegionalPlayVarJsonConfig(RegionalPlayVarJsonConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->var_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_value, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->init_value = 0.0;
  std::string::basic_string(&this->play_name);
};

// Line 265: range 000000000F9B2B52-000000000F9B2C72
void __cdecl RegionalPlayVarJsonConfig::RegionalPlayVarJsonConfig(
        RegionalPlayVarJsonConfig *const this,
        RegionalPlayVarJsonConfig *a2)
{
  uint32_t var_type; // ecx
  char v3; // al
  float init_value; // xmm0_4
  RegionalPlayVarJsonConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  var_type = a2->var_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->var_type = var_type;
  if ( *(_BYTE *)(((unsigned __int64)&v5->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v5->init_value);
  }
  init_value = v5->init_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_value, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->init_value = init_value;
  std::string::basic_string(&this->play_name, &v5->play_name);
};

// Line 265: range 000000000F788EBA-000000000F788ED8
void __cdecl RegionalPlayVarJsonConfig::~RegionalPlayVarJsonConfig(RegionalPlayVarJsonConfig *const this)
{
  std::string::~string(&this->play_name);
};

// Line 273: range 000000000FA10D4C-000000000FA10D7A
void __cdecl CustomCommonNodeData::~CustomCommonNodeData(CustomCommonNodeData *const this)
{
  std::map<std::string,unsigned int>::~map(&this->child_map);
  std::string::~string(&this->slot_identifier);
};

// Line 401: range 000000000F7D64A0-000000000F7D6821
const JsonConfigMgr *__fastcall JsonConfigMgr::findScenePoint<data::PersonalSceneJumpPoint>(
        const JsonConfigMgr *const this,
        const JsonConfigMgr *scene_id,
        uint32_t point_id,
        int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // ecx
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 12 scene_id:949 48 4 12 point_id:949 64 16 20 config_point_ptr:951 96 16 13 point_ptr:952"
                        " 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = JsonConfigMgr::findScenePoint<data::PersonalSceneJumpPoint>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = point_id;
  *(_DWORD *)(v4 + 48) = a4;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = *(_DWORD *)(v4 + 32);
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v4 + 64), scene_id, v8, v7);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::dynamic_pointer_cast<data::PersonalSceneJumpPoint,data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v4 + 96));
  if ( std::operator==<data::PersonalSceneJumpPoint>(
         (const std::shared_ptr<data::PersonalSceneJumpPoint> *)(v4 + 96),
         0LL) )
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/json_config_mgr.h",
      "findScenePoint",
      955);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[29])"point_ptr is null, scene_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::PersonalSceneJumpPoint>::shared_ptr(
      (std::shared_ptr<data::PersonalSceneJumpPoint> *const)this,
      0LL);
  }
  else
  {
    std::shared_ptr<data::PersonalSceneJumpPoint>::shared_ptr(
      (std::shared_ptr<data::PersonalSceneJumpPoint> *const)this,
      (std::shared_ptr<data::PersonalSceneJumpPoint> *)(v4 + 96));
  }
  std::shared_ptr<data::PersonalSceneJumpPoint>::~shared_ptr((std::shared_ptr<data::PersonalSceneJumpPoint> *const)(v4 + 96));
  std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 64));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 616: range 000000000F776EAE-000000000F776EC1
const data::ConfigGlobalCombat *__cdecl JsonConfigMgr::getGlobalCombatConfig(const JsonConfigMgr *const this)
{
  return &this->config_global_combat_;
};

// Line 644: range 000000000CE05735-000000000CE05741
const std::string *__cdecl JsonConfigMgr::getCurLoadJsonFileName[abi:cxx11]()
{
  return &JsonConfigMgr::cur_load_json_file_name_[abi:cxx11];
};

// Line 710: range 000000000CE05742-000000000CE05755
const WidgetJsonNewConfig *__cdecl JsonConfigMgr::getWidgetNewConfig(const JsonConfigMgr *const this)
{
  return &this->widget_json_new_config_;
};

// Line 949: range 000000000CE7E1DA-000000000CE7E55B
const JsonConfigMgr *__fastcall JsonConfigMgr::findScenePoint<data::DungeonEntry>(
        const JsonConfigMgr *const this,
        const JsonConfigMgr *scene_id,
        uint32_t point_id,
        int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // ecx
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 12 scene_id:949 48 4 12 point_id:949 64 16 20 config_point_ptr:951 96 16 13 point_ptr:952"
                        " 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = JsonConfigMgr::findScenePoint<data::DungeonEntry>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = point_id;
  *(_DWORD *)(v4 + 48) = a4;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = *(_DWORD *)(v4 + 32);
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v4 + 64), scene_id, v8, v7);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::dynamic_pointer_cast<data::DungeonEntry,data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v4 + 96));
  if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v4 + 96), 0LL) )
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/json_config_mgr.h",
      "findScenePoint",
      955);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[29])"point_ptr is null, scene_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::DungeonEntry>::shared_ptr((std::shared_ptr<data::DungeonEntry> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<data::DungeonEntry>::shared_ptr(
      (std::shared_ptr<data::DungeonEntry> *const)this,
      (std::shared_ptr<data::DungeonEntry> *)(v4 + 96));
  }
  std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 96));
  std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 64));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 949: range 000000000CE7D368-000000000CE7D6E9
const JsonConfigMgr *__fastcall JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
        const JsonConfigMgr *const this,
        const JsonConfigMgr *scene_id,
        uint32_t point_id,
        int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // ecx
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 12 scene_id:949 48 4 12 point_id:949 64 16 20 config_point_ptr:951 96 16 13 point_ptr:952"
                        " 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = JsonConfigMgr::findScenePoint<data::SceneTransPoint>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = point_id;
  *(_DWORD *)(v4 + 48) = a4;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = *(_DWORD *)(v4 + 32);
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v4 + 64), scene_id, v8, v7);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::dynamic_pointer_cast<data::SceneTransPoint,data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v4 + 96));
  if ( std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v4 + 96), 0LL) )
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/json_config_mgr.h",
      "findScenePoint",
      955);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[29])"point_ptr is null, scene_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SceneTransPoint>::shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<data::SceneTransPoint>::shared_ptr(
      (std::shared_ptr<data::SceneTransPoint> *const)this,
      (std::shared_ptr<data::SceneTransPoint> *)(v4 + 96));
  }
  std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v4 + 96));
  std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 64));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 982: range 000000000F04B9A2-000000000F04BD32
const JsonConfigMgr *__fastcall JsonConfigMgr::findSceneForce<data::ConfigAirflowField>(
        const JsonConfigMgr *const this,
        const JsonConfigMgr *scene_id,
        uint32_t force_id,
        int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // ecx
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v16[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 12 scene_id:982 48 4 12 force_id:982 64 16 20 config_force_ptr:984 96 16 13 force_ptr:985"
                        " 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = JsonConfigMgr::findSceneForce<data::ConfigAirflowField>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = force_id;
  *(_DWORD *)(v4 + 48) = a4;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = *(_DWORD *)(v4 + 32);
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  JsonConfigMgr::findSceneForce((const JsonConfigMgr *const)(v4 + 64), scene_id, v8, v7);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::dynamic_pointer_cast<data::ConfigAirflowField,data::ConfigForceField>((const std::shared_ptr<data::ConfigForceField> *)(v4 + 96));
  if ( std::operator==<data::ConfigAirflowField>((const std::shared_ptr<data::ConfigAirflowField> *)(v4 + 96), 0LL) )
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/json_config_mgr.h",
      "findSceneForce",
      988);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v9,
            (const char (*)[29])"force_ptr is null, scene_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", force_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigAirflowField>::shared_ptr((std::shared_ptr<data::ConfigAirflowField> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<data::ConfigAirflowField>::shared_ptr(
      (std::shared_ptr<data::ConfigAirflowField> *const)this,
      (std::shared_ptr<data::ConfigAirflowField> *)(v4 + 96));
  }
  std::shared_ptr<data::ConfigAirflowField>::~shared_ptr((std::shared_ptr<data::ConfigAirflowField> *const)(v4 + 96));
  std::shared_ptr<data::ConfigForceField>::~shared_ptr((std::shared_ptr<data::ConfigForceField> *const)(v4 + 64));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};
