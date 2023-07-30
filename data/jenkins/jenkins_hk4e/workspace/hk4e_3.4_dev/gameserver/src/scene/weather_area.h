// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/weather_area.h

// Line 34: range 0000000015C2E6C6-0000000015C2E710
void __cdecl WeatherArea::~WeatherArea(WeatherArea *const this)
{
  std::list<unsigned int>::~list(&this->forcast_climate_list_);
  std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::~set(&this->player_set_);
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  std::enable_shared_from_this<WeatherArea>::~enable_shared_from_this(this);
};

// Line 37: range 0000000015A1A1FE-0000000015A1A20F
const std::list<unsigned int> *__cdecl WeatherArea::getForcastClimateList[abi:cxx11](const WeatherArea *const this)
{
  return &this->forcast_climate_list_;
};

// Line 37: range 0000000015A1A038-0000000015A1A1FD
// local variable allocation has failed, the output may be wrong!
void __cdecl WeatherArea::WeatherArea(WeatherArea *const this, uint32_t height_area_id)
{
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  std::enable_shared_from_this<WeatherArea>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height_area_id_, *(_QWORD *)&height_area_id, (_BYTE)this + 16);
  }
  this->height_area_id_ = height_area_id;
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->weather_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weather_area_id_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->weather_area_id_, v2, v3);
  this->weather_area_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->climate_type_, v2, (_BYTE)this + 24);
  }
  this->climate_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->next_climate_time_, v2);
  this->next_climate_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_climate_type_, v2, (_BYTE)this + 40);
  }
  this->ability_climate_type_ = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->trans_duration_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trans_duration_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->trans_duration_, (((_BYTE)this + 44) & 7u) + 3, v4);
  this->trans_duration_ = 0.0;
  std::weak_ptr<Scene>::weak_ptr(&this->scene_wtr_);
  std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::set(&this->player_set_);
  std::list<unsigned int>::list(&this->forcast_climate_list_);
};

// Line 86: range 0000000015A1A258-0000000015A1A29F
uint32_t __cdecl WeatherArea::getClimateType(const WeatherArea *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->climate_type_;
};

// Line 86: range 0000000015A1A210-0000000015A1A257
uint32_t __cdecl WeatherArea::getHeightAreaId(const WeatherArea *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->height_area_id_;
};

// Line 87: range 0000000013EB9FA4-0000000013EB9FF3
uint32_t __cdecl WeatherArea::getWeatherAreaId(const WeatherArea *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weather_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weather_area_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->weather_area_id_;
};

// Line 89: range 0000000015A1A2A0-0000000015A1A2DA
uint64_t __cdecl WeatherArea::getNextClimateTime(const WeatherArea *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->next_climate_time_;
};

// Line 90: range 00000000138433E2-0000000013843430
// local variable allocation has failed, the output may be wrong!
void __cdecl WeatherArea::setAbilityClimateType(WeatherArea *const this, uint32_t ability_climate_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_climate_type_, *(_QWORD *)&ability_climate_type__out, (_BYTE)this + 40);
  }
  this->ability_climate_type_ = ability_climate_type__out;
};

// Line 91: range 0000000013843432-000000001384348E
void __cdecl WeatherArea::setTransDuration(WeatherArea *const this, float trans_duration__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->trans_duration_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trans_duration_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->trans_duration_, (((_BYTE)this + 44) & 7u) + 3, v2);
  this->trans_duration_ = trans_duration__out;
};

// Line 14708: range 00000000180AC374-00000000180AC3C2
ScenePtr __cdecl WeatherArea::getScene(const WeatherArea *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
