// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/weather_area.cpp

// Line 24: range 0000000017FA042F-0000000017FA06F1
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const WeatherArea *weather_area)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  char v13[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 scene_ptr:27 64 16 13 player_ptr:31";
  *(_QWORD *)(v2 + 16) = operator<<;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(stream, (const char (*)[17])"[height_area_id:");
  val = WeatherArea::getHeightAreaId(weather_area);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(stream, (const char (*)[18])" weather_area_id:");
  val = WeatherArea::getWeatherAreaId(weather_area);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  WeatherArea::getScene((const WeatherArea *const)(v2 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(stream, (const char (*)[11])" scene_id:");
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    val = Scene::getSceneId(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getOwnPlayer((const Scene *const)(v2 + 64));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(stream, (const char (*)[6])" uid:");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(stream, (const char (*)[2])"]");
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = stream;
  if ( v13 == (char *)v2 )
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

// Line 43: range 0000000017FA06F2-0000000017FA0935
void __cdecl WeatherArea::fromBin(WeatherArea *const this, const proto::SceneWeatherInfoBin *weather_info_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  char v6; // al
  uint32_t v7; // edx
  char v8; // al
  uint64_t climate_time; // rax
  const proto::SceneWeatherInfoBin *weather_info_bina; // [rsp+0h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  weather_info_bina = weather_info_bin;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 23 forcast_climate_type:47";
  *(_QWORD *)(v2 + 16) = WeatherArea::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::SceneWeatherInfoBin::height_area_id(weather_info_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(weather_info_bin) = v6 != 0;
    __asan_report_store4(&this->height_area_id_, weather_info_bin, v5);
  }
  this->height_area_id_ = v5;
  v7 = proto::SceneWeatherInfoBin::climate_type(weather_info_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000);
  LOBYTE(weather_info_bin) = v8 != 0;
  if ( v8 != 0 && v8 <= 3 )
    __asan_report_store4(&this->climate_type_, weather_info_bin, v7);
  this->climate_type_ = v7;
  climate_time = proto::SceneWeatherInfoBin::next_climate_time(weather_info_bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
    climate_time = __asan_report_store8(&this->next_climate_time_, weather_info_bin);
  this->next_climate_time_ = climate_time;
  __for_range = proto::SceneWeatherInfoBin::forcast_climate_list(weather_info_bina);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::list<unsigned int>::push_back(
      &this->forcast_climate_list_,
      (const std::list<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 0000000017FA0936-0000000017FA0AC4
void __cdecl WeatherArea::toBin(const WeatherArea *const this, proto::SceneWeatherInfoBin *weather_info_bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::list<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::list<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::list<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneWeatherInfoBin::set_height_area_id(weather_info_bin, this->height_area_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneWeatherInfoBin::set_climate_type(weather_info_bin, this->climate_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::SceneWeatherInfoBin::set_next_climate_time(weather_info_bin, this->next_climate_time_);
  __for_range = &this->forcast_climate_list_;
  __for_begin._M_node = std::list<unsigned int>::begin(&this->forcast_climate_list_)._M_node;
  __for_end._M_node = std::list<unsigned int>::end(&this->forcast_climate_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_List_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneWeatherInfoBin::add_forcast_climate_list(weather_info_bin, *v2);
    std::_List_const_iterator<unsigned int>::operator++(&__for_begin);
  }
};

// Line 67: range 0000000017FA0AC6-0000000017FA0C4E
int32_t __cdecl WeatherArea::init(WeatherArea *const this, Scene *scene)
{
  common::milog::MiLogStream *v2; // rax
  __int64 v4; // rsi
  uint32_t weather_area_id; // ecx
  char v6; // dl
  bool v7; // dl
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Scene> __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  weather_config_ptr = WeatherArea::getConfig(this);
  if ( weather_config_ptr )
  {
    toThisPtr<Scene>((Scene *)&__r);
    std::weak_ptr<Scene>::operator=<Scene>(&this->scene_wtr_, &__r);
    std::shared_ptr<Scene>::~shared_ptr(&__r);
    v4 = (((_BYTE)weather_config_ptr + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->weather_area_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)weather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weather_config_ptr->weather_area_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    weather_area_id = weather_config_ptr->weather_area_id;
    v6 = *(_BYTE *)(((unsigned __int64)&this->weather_area_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v4) = v6 != 0;
    v7 = v6 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v6;
    if ( v7 )
      __asan_report_store4(&this->weather_area_id_, v4, v7);
    this->weather_area_id_ = weather_area_id;
    WeatherArea::refreshWeatherArea(this, REFRESH_WEATHER_INIT);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/weather_area.cpp",
      "init",
      71);
    v2 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v10,
           (const char (*)[33])"getConfig fails, height_area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->height_area_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 83: range 0000000017FA0C50-0000000017FA0D18
void __cdecl WeatherArea::toClient(const WeatherArea *const this, proto::SceneAreaWeatherNotify *notify)
{
  uint32_t CurClimateType; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneAreaWeatherNotify::set_weather_area_id(notify, this->height_area_id_);
  CurClimateType = WeatherArea::getCurClimateType(this);
  proto::SceneAreaWeatherNotify::set_climate_type(notify, CurClimateType);
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_duration_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trans_duration_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneAreaWeatherNotify::set_trans_duration(notify, this->trans_duration_);
};

// Line 91: range 0000000017FA0D1A-0000000017FA0DD3
const data::WeatherExcelConfig *__cdecl WeatherArea::getConfig(const WeatherArea *const this)
{
  WeatherExcelConfigMgr *p_weather_config_mgr; // rcx
  const data::WeatherExcelConfig *WeatherExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_weather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.weather_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  WeatherExcelConfig = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(
                         p_weather_config_mgr,
                         this->height_area_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return WeatherExcelConfig;
};

// Line 97: range 0000000017FA0DD4-0000000017FA0E62
uint32_t __cdecl WeatherArea::getCurClimateType(const WeatherArea *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->ability_climate_type_ )
    return this->ability_climate_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->climate_type_;
};

// Line 107: range 0000000017FA0E64-0000000017FA0F81
const WeatherTemplate *__cdecl WeatherArea::getWeatherTemplate(const WeatherArea *const this)
{
  common::milog::MiLogStream *v1; // rdx
  const WeatherTemplate *WeatherTemplate; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  weather_config_ptr = WeatherArea::getConfig(this);
  if ( weather_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
    WeatherTemplate = WeatherExcelConfigMgr::findWeatherTemplate(
                        &v3->design_config.txt_config_mgr.weather_config_mgr,
                        &weather_config_ptr->template_name);
    std::shared_ptr<Config>::~shared_ptr(&v6);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/weather_area.cpp",
      "getWeatherTemplate",
      111);
    v1 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v7,
           (const char (*)[42])"weather_config_ptr is null, weather_area:");
    operator<<(v1, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0LL;
  }
  return WeatherTemplate;
};

// Line 120: range 0000000017FA0F82-0000000017FA1162
void __cdecl WeatherArea::enterWeatherArea(WeatherArea *const this, Player *player)
{
  std::pair<std::_Rb_tree_const_iterator<std::weak_ptr<Player> >,bool> v2; // rax
  bool v3; // bl
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  std::shared_ptr<Player> __r; // [rsp+10h] [rbp-50h] BYREF
  std::weak_ptr<Player> __x; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  toThisPtr<Player>((Player *)&__r);
  std::weak_ptr<Player>::weak_ptr<Player,void>(&__x, &__r);
  v2 = std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::insert(
         &this->player_set_,
         &__x);
  v3 = !v2.second;
  std::weak_ptr<Player>::~weak_ptr(&__x);
  std::shared_ptr<Player>::~shared_ptr(&__r);
  if ( v3 )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/weather_area.cpp",
      "enterWeatherArea",
      123);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"duplicate player:");
    v5 = operator<<(v4, player);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" weather_area:");
    operator<<(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/weather_area.cpp",
      "enterWeatherArea",
      127);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"player enter weather area:");
    v8 = operator<<(v7, this);
    operator<<(v8, player);
    common::milog::MiLogStream::~MiLogStream(&v11);
    WeatherArea::refreshWeatherArea(this, REFRESH_WEATHER_ENTER);
  }
};

// Line 133: range 0000000017FA1164-0000000017FA1332
void __cdecl WeatherArea::leaveWeatherArea(WeatherArea *const this, Player *player)
{
  bool v2; // bl
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  std::shared_ptr<Player> __r; // [rsp+10h] [rbp-50h] BYREF
  std::weak_ptr<Player> __x; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  toThisPtr<Player>((Player *)&__r);
  std::weak_ptr<Player>::weak_ptr<Player,void>(&__x, &__r);
  v2 = std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::erase(
         &this->player_set_,
         &__x) == 0;
  std::weak_ptr<Player>::~weak_ptr(&__x);
  std::shared_ptr<Player>::~shared_ptr(&__r);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/weather_area.cpp",
      "leaveWeatherArea",
      136);
    v3 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])off_2647FA80);
    v4 = operator<<(v3, player);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])" weather_area:");
    operator<<(v5, this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/weather_area.cpp",
      "leaveWeatherArea",
      140);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v10,
           (const char (*)[27])"player leave weather area:");
    v7 = operator<<(v6, this);
    operator<<(v7, player);
  }
  common::milog::MiLogStream::~MiLogStream(&v10);
};

// Line 145: range 0000000017FA1334-0000000017FA1B5E
void __cdecl WeatherArea::removeAllPlayers(WeatherArea *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  std::_Rb_tree_const_iterator<std::weak_ptr<Player> >::_Base_ptr M_node; // r14
  std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player> >,std::allocator<std::weak_ptr<Player> > >::iterator v10; // rax
  common::milog::MiLogStream *v11; // rdx
  Player *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  Player *v16; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(std::shared_ptr<WeatherArea> *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *, _QWORD); // r15
  Player *v20; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  const Vector3 *Position; // rax
  Player *v24; // rax
  PlayerSceneComp *v25; // r14
  uint32_t PrevWeatherAreaId; // [rsp+14h] [rbp-19Ch]
  std::allocator<std::weak_ptr<Player> > __a; // [rsp+27h] [rbp-189h] BYREF
  std::vector<std::weak_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  std::vector<std::weak_ptr<Player>>::iterator __for_end; // [rsp+30h] [rbp-180h] BYREF
  std::vector<std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-170h]
  const PlayerWtr *player_wtr; // [rsp+48h] [rbp-168h]
  std::shared_ptr<WeatherArea> __r; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-150h] BYREF
  char v35[304]; // [rsp+80h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 16 13 scene_ptr:146 64 16 14 player_ptr:163 96 16 14 avatar_ptr:170 128 16 20 weather_area_"
                        "ptr:177 160 16 17 cur_scene_ptr:178 192 24 19 temp_player_vec:160";
  *(_QWORD *)(v1 + 16) = WeatherArea::removeAllPlayers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  WeatherArea::getScene((const WeatherArea *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/weather_area.cpp",
      "removeAllPlayers",
      149);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v34, (const char (*)[18])"scene_ptr is null");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( Scene::getScriptConfig(v5) )
    {
      std::allocator<std::weak_ptr<Player>>::allocator(&__a);
      M_node = std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::end(&this->player_set_)._M_node;
      v10._M_node = std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::begin(&this->player_set_)._M_node;
      std::vector<std::weak_ptr<Player>>::vector<std::_Rb_tree_const_iterator<std::weak_ptr<Player>>,void>(
        (std::vector<std::weak_ptr<Player>> *const)(v1 + 192),
        v10,
        (std::_Rb_tree_const_iterator<std::weak_ptr<Player> >)M_node,
        &__a);
      std::allocator<std::weak_ptr<Player>>::~allocator(&__a);
      __for_range = (std::vector<std::weak_ptr<Player>> *)(v1 + 192);
      __for_begin._M_current = std::vector<std::weak_ptr<Player>>::begin((std::vector<std::weak_ptr<Player>> *const)(v1 + 192))._M_current;
      __for_end._M_current = std::vector<std::weak_ptr<Player>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>(
                &__for_begin,
                &__for_end) )
      {
        player_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator*(&__for_begin);
        std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 64));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/weather_area.cpp",
            "removeAllPlayers",
            166);
          v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v34,
                  (const char (*)[15])"player is null");
          operator<<(v11, this);
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
        else
        {
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          Player::getAvatarComp(v12);
          PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 96));
          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/weather_area.cpp",
              "removeAllPlayers",
              173);
            v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v34,
                    (const char (*)[19])off_2647FCC0);
            v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            v15 = operator<<(v13, v14);
            operator<<(v15, this);
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          else
          {
            std::shared_ptr<WeatherArea>::shared_ptr((std::shared_ptr<WeatherArea> *const)(v1 + 128), 0LL);
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            Player::getSceneComp(v16);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 160));
            if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 160)) )
            {
              v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v18 = (unsigned __int64)(v17->_vptr_DescribalBase + 47);
              if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                v18 = __asan_report_load8();
              v19 = *(void (__fastcall **)(std::shared_ptr<WeatherArea> *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *, _QWORD))v18;
              v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              SceneComp = Player::getSceneComp(v20);
              PrevWeatherAreaId = PlayerSceneComp::getPrevWeatherAreaId(SceneComp);
              v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Position = Entity::getPosition((const Entity *const)v22);
              v19(&__r, v17, Position, PrevWeatherAreaId);
              std::shared_ptr<WeatherArea>::operator=((std::shared_ptr<WeatherArea> *const)(v1 + 128), &__r);
              std::shared_ptr<WeatherArea>::~shared_ptr(&__r);
            }
            v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            v25 = Player::getSceneComp(v24);
            std::shared_ptr<WeatherArea>::shared_ptr(&__r, (const std::shared_ptr<WeatherArea> *)(v1 + 128));
            PlayerSceneComp::updateCurrentWeatherArea(v25, &__r);
            std::shared_ptr<WeatherArea>::~shared_ptr(&__r);
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 160));
            std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v1 + 128));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 96));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
        __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator++(&__for_begin);
      }
      std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::clear(&this->player_set_);
      std::vector<std::weak_ptr<Player>>::~vector((std::vector<std::weak_ptr<Player>> *const)(v1 + 192));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/weather_area.cpp",
        "removeAllPlayers",
        156);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v34,
             (const char (*)[29])"getScriptConfig fail, scene:");
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v6, v7);
      operator<<(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v35 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 191: range 0000000017FA1B60-0000000017FA2A5F
void __fastcall WeatherArea::refreshWeatherArea(
        WeatherArea *const this,
        RefreshWeatherType refresh_weather_type,
        __m128i a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 v7; // rsi
  uint32_t default_climate; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  GameserverService *v18; // rsi
  common::milog::MiLogStream *v19; // rax
  Player *v20; // rax
  PlayerBasicComp *v21; // rax
  uint64_t v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rsi
  uint64_t v29; // rcx
  char v30; // al
  std::list<unsigned int>::reference v31; // rdx
  uint32_t v32; // ecx
  char v33; // al
  GameserverService *height_area_id; // rsi
  uint32_t v35; // eax
  char v36; // dl
  bool v37; // dl
  uint64_t v38; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  uint32_t climate_type; // eax
  std::list<unsigned int>::reference v43; // rdx
  PlayerWorldScene *v44; // rax
  SceneEnvAnimalComp *EnvAnimalComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  uint32_t idx; // [rsp+1Ch] [rbp-164h]
  uint32_t forcast_weather_num; // [rsp+24h] [rbp-15Ch]
  uint32_t interval_seconds; // [rsp+28h] [rbp-158h]
  uint32_t game_time; // [rsp+2Ch] [rbp-154h]
  uint32_t old_climate_type; // [rsp+30h] [rbp-150h]
  uint32_t prev_climate_type; // [rsp+34h] [rbp-14Ch]
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+38h] [rbp-148h]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+40h] [rbp-140h]
  WeatherExcelConfigMgr *weather_config_mgr; // [rsp+48h] [rbp-138h]
  std::shared_ptr<Config> v56; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<Config> v57; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v58; // [rsp+70h] [rbp-110h] BYREF
  char v59[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 20 next_change_time:238 64 4 21 next_climate_type:276 80 4 24 refresh_weather_type:190 96"
                        " 16 13 scene_ptr:207 128 16 14 player_ptr:214 160 16 19 world_scene_ptr:291";
  *(_QWORD *)(v3 + 16) = WeatherArea::refreshWeatherArea;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 80) = refresh_weather_type;
  weather_config_ptr = WeatherArea::getConfig(this);
  if ( weather_config_ptr )
  {
    v7 = ((_BYTE)weather_config_ptr - 124) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->is_use_default >> 3) + 0x7FFF8000) != 0
      && (char)v7 >= *(_BYTE *)(((unsigned __int64)&weather_config_ptr->is_use_default >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&weather_config_ptr->is_use_default);
    }
    if ( weather_config_ptr->is_use_default )
    {
      if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      default_climate = weather_config_ptr->default_climate;
      v9 = *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(v7) = v9 != 0;
        __asan_report_store4(&this->climate_type_, v7, (_BYTE)this + 24);
      }
      this->climate_type_ = default_climate;
      std::list<unsigned int>::clear(&this->forcast_climate_list_);
    }
    else
    {
      WeatherArea::getScene((const WeatherArea *const)(v3 + 96));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/weather_area.cpp",
          "refreshWeatherArea",
          210);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v58,
                (const char (*)[29])"getScene fail, weather_area:");
        v11 = operator<<(v10, this);
        v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" refresh_type:");
        common::milog::MiLogStream::operator<<<RefreshWeatherType,(RefreshWeatherType*)0>(
          v12,
          (const RefreshWeatherType *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v58);
      }
      else
      {
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Scene::getOwnPlayer((const Scene *const)(v3 + 128));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/weather_area.cpp",
            "refreshWeatherArea",
            217);
          v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v58,
                  (const char (*)[30])"player is null, weather_area:");
          v14 = operator<<(v13, this);
          v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v14,
                  (const char (*)[15])" refresh_type:");
          common::milog::MiLogStream::operator<<<RefreshWeatherType,(RefreshWeatherType*)0>(
            v15,
            (const RefreshWeatherType *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v58);
        }
        else
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          BasicComp = Player::getBasicComp(v16);
          if ( !PlayerBasicComp::getIsWeatherLocked(BasicComp) )
          {
            v18 = ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v56);
            const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.const_value_config_mgr;
            std::shared_ptr<Config>::~shared_ptr(&v56);
            *(float *)a3.m128i_i32 = ConstValueExcelConfigMgr::getWeatherChangeInterval(const_value_config_mgr);
            forcast_weather_num = ConstValueExcelConfigMgr::getWeatherForcastNum(const_value_config_mgr);
            interval_seconds = (int)(float)((float)(int)ConstValueExcelConfigMgr::getGameHourSeconds(const_value_config_mgr)
                                          * COERCE_FLOAT(_mm_cvtsi128_si32(a3)));
            if ( interval_seconds )
            {
              v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v21 = Player::getBasicComp(v20);
              game_time = PlayerBasicComp::getGameTime(v21);
              if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              old_climate_type = this->climate_type_;
              *(_DWORD *)(v3 + 48) = interval_seconds - game_time % interval_seconds + game_time;
              v22 = game_time;
              if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( v22 >= this->next_climate_time_ )
              {
                while ( 1 )
                {
                  if ( std::list<unsigned int>::empty(&this->forcast_climate_list_) )
                    goto LABEL_36;
                  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  if ( this->next_climate_time_ < *(unsigned int *)(v3 + 48) )
                    v30 = 1;
                  else
LABEL_36:
                    v30 = 0;
                  if ( !v30 )
                    break;
                  v31 = std::list<unsigned int>::front(&this->forcast_climate_list_);
                  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v32 = *v31;
                  v33 = *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000);
                  if ( v33 != 0 && v33 <= 3 )
                  {
                    LOBYTE(v18) = v33 != 0;
                    __asan_report_store4(&this->climate_type_, v18, (_BYTE)this + 24);
                  }
                  this->climate_type_ = v32;
                  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  this->next_climate_time_ += interval_seconds;
                  std::list<unsigned int>::pop_front(&this->forcast_climate_list_);
                }
                height_area_id = ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v57);
                weather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.weather_config_mgr;
                std::shared_ptr<Config>::~shared_ptr(&v57);
                if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                if ( this->next_climate_time_ < *(unsigned int *)(v3 + 48) )
                {
                  if ( this->next_climate_time_ )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    height_area_id = (GameserverService *)this->height_area_id_;
                    v35 = WeatherExcelConfigMgr::randWeather(weather_config_mgr, (uint32_t)height_area_id);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&weather_config_ptr->default_climate >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    v35 = weather_config_ptr->default_climate;
                  }
                  v36 = *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000);
                  LOBYTE(height_area_id) = v36 != 0;
                  v37 = v36 != 0 && v36 <= 3;
                  if ( v37 )
                    v35 = __asan_report_store4(&this->climate_type_, height_area_id, v37);
                  this->climate_type_ = v35;
                  v38 = *(unsigned int *)(v3 + 48);
                  if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
                    __asan_report_store8(&this->next_climate_time_, height_area_id);
                  this->next_climate_time_ = v38;
                  common::milog::MiLogStream::create(
                    &v58,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/weather_area.cpp",
                    "refreshWeatherArea",
                    269);
                  v39 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          &v58,
                          (const char (*)[35])"weather reset: next_climate_time_:");
                  v40 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v39,
                          &this->next_climate_time_);
                  v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v40,
                          (const char (*)[16])" climate_type_:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &this->climate_type_);
                  common::milog::MiLogStream::~MiLogStream(&v58);
                }
                for ( idx = std::list<unsigned int>::size(&this->forcast_climate_list_); idx < forcast_weather_num; ++idx )
                {
                  if ( std::list<unsigned int>::empty(&this->forcast_climate_list_) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    climate_type = this->climate_type_;
                  }
                  else
                  {
                    v43 = std::list<unsigned int>::back(&this->forcast_climate_list_);
                    if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    climate_type = *v43;
                  }
                  prev_climate_type = climate_type;
                  if ( *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->height_area_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v3 + 64) = WeatherExcelConfigMgr::randNextWeather(
                                           weather_config_mgr,
                                           this->height_area_id_,
                                           prev_climate_type);
                  std::list<unsigned int>::push_back(
                    &this->forcast_climate_list_,
                    (const std::list<unsigned int>::value_type *)(v3 + 64));
                }
                if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( old_climate_type != this->climate_type_ )
                {
                  if ( *(_DWORD *)(v3 + 80) == 1 )
                    WeatherArea::notifyWeatherToPlayers(this);
                  std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 160));
                  if ( std::operator!=<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 160)) )
                  {
                    if ( *(_DWORD *)(v3 + 80) <= 2u )
                    {
                      v44 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                      EnvAnimalComp = PlayerWorldScene::getEnvAnimalComp(v44);
                      SceneEnvAnimalComp::onWeatherChange(EnvAnimalComp);
                    }
                  }
                  else
                  {
                    v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( Scene::getSceneType(v46) == SCENE_WORLD )
                    {
                      common::milog::MiLogStream::create(
                        &v58,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/scene/weather_area.cpp",
                        "refreshWeatherArea",
                        309);
                      common::milog::MiLogStream::operator()(&v58, off_26480060);
                      common::milog::MiLogStream::~MiLogStream(&v58);
                    }
                  }
                  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 160));
                }
              }
              else if ( this->next_climate_time_ > *(unsigned int *)(v3 + 48) )
              {
                common::milog::MiLogStream::create(
                  &v58,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/weather_area.cpp",
                  "refreshWeatherArea",
                  246);
                v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v58,
                        (const char (*)[28])"rollback next_climate_time:");
                v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v23,
                        &this->next_climate_time_);
                v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" to:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 48));
                v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
                v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                operator<<(v27, v28);
                common::milog::MiLogStream::~MiLogStream(&v58);
                v29 = *(unsigned int *)(v3 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&this->next_climate_time_ >> 3) + 0x7FFF8000) )
                  __asan_report_store8(&this->next_climate_time_, v28);
                this->next_climate_time_ = v29;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v58,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/weather_area.cpp",
                "refreshWeatherArea",
                232);
              v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v58,
                      (const char (*)[22])"interval_seconds is 0");
              operator<<(v19, this);
              common::milog::MiLogStream::~MiLogStream(&v58);
            }
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/weather_area.cpp",
      "refreshWeatherArea",
      195);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v58,
           (const char (*)[33])"getConfig fails, height_area_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->height_area_id_);
    common::milog::MiLogStream::~MiLogStream(&v58);
  }
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 317: range 0000000017FA2A60-0000000017FA2D84
void __cdecl WeatherArea::notifyWeatherToPlayers(const WeatherArea *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rdx
  Player *v5; // rax
  std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player> >,std::allocator<std::weak_ptr<Player> > >::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player> >,std::allocator<std::weak_ptr<Player> > >::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  const std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player> >,std::allocator<std::weak_ptr<Player> > > *__for_range; // [rsp+20h] [rbp-140h]
  const PlayerWtr *player_wtr; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-130h] BYREF
  char v11[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 14 player_ptr:326 80 112 10 notify:322";
  *(_QWORD *)(v1 + 16) = WeatherArea::notifyWeatherToPlayers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862726] = -202116109;
  if ( !std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::empty(&this->player_set_) )
  {
    proto::SceneAreaWeatherNotify::SceneAreaWeatherNotify((proto::SceneAreaWeatherNotify *const)(v1 + 80));
    WeatherArea::toClient(this, (proto::SceneAreaWeatherNotify *)(v1 + 80));
    __for_range = &this->player_set_;
    __for_begin._M_node = std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::begin(&this->player_set_)._M_node;
    __for_end._M_node = std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::end(&this->player_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      player_wtr = std::_Rb_tree_const_iterator<std::weak_ptr<Player>>::operator*(&__for_begin);
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 48));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/weather_area.cpp",
          "notifyWeatherToPlayers",
          329);
        v4 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v10, (const char (*)[12])"player null");
        operator<<(v4, this);
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
      else
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        Player::sendProto(v5, (const google::protobuf::Message *)(v1 + 80));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 48));
      std::_Rb_tree_const_iterator<std::weak_ptr<Player>>::operator++(&__for_begin);
    }
    proto::SceneAreaWeatherNotify::~SceneAreaWeatherNotify((proto::SceneAreaWeatherNotify *const)(v1 + 80));
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 338: range 0000000017FA2D86-0000000017FA3119
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl WeatherArea::setCurrentWeatherTypeByGm(
        WeatherArea *const this,
        uint32_t climate_type,
        uint32_t extra_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  bool v6; // dl
  common::milog::MiLogStream *v7; // rdx
  Player *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  uint32_t idx; // [rsp+1Ch] [rbp-C4h]
  std::list<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::list<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::list<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  uint32_t *forcast_climate; // [rsp+38h] [rbp-A8h]
  std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player> >,std::allocator<std::weak_ptr<Player> > > *__for_range_0; // [rsp+40h] [rbp-A0h]
  const PlayerWtr *player_wtr; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:353";
  *(_QWORD *)(v3 + 16) = WeatherArea::setCurrentWeatherTypeByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->climate_type_, *(_QWORD *)&climate_type, (_BYTE)this + 24);
  }
  this->climate_type_ = climate_type;
  idx = 0;
  __for_range = &this->forcast_climate_list_;
  __for_begin._M_node = std::list<unsigned int>::begin(&this->forcast_climate_list_)._M_node;
  __for_end._M_node = std::list<unsigned int>::end(&this->forcast_climate_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    forcast_climate = std::_List_iterator<unsigned int>::operator*(&__for_begin);
    if ( idx >= extra_count )
      break;
    v6 = *(_BYTE *)(((unsigned __int64)forcast_climate >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)forcast_climate & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forcast_climate >> 3)
                                                                        + 0x7FFF8000);
    if ( v6 )
      __asan_report_store4(forcast_climate, ((unsigned __int8)forcast_climate & 7u) + 3, v6);
    *forcast_climate = climate_type;
    ++idx;
    std::_List_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->player_set_;
  __for_begin._M_node = (std::__detail::_List_node_base *)std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::begin(&this->player_set_)._M_node;
  __for_end._M_node = (std::__detail::_List_node_base *)std::set<std::weak_ptr<Player>,std::owner_less<std::weak_ptr<Player>>,std::allocator<std::weak_ptr<Player>>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::weak_ptr<Player> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::weak_ptr<Player> >::_Self *)&__for_end) )
  {
    player_wtr = std::_Rb_tree_const_iterator<std::weak_ptr<Player>>::operator*((const std::_Rb_tree_const_iterator<std::weak_ptr<Player> > *const)&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/weather_area.cpp",
        "setCurrentWeatherTypeByGm",
        356);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v19, (const char (*)[12])"player null");
      operator<<(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      SceneComp = Player::getSceneComp(v8);
      PlayerSceneComp::notifyCurrentWeather(SceneComp);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_const_iterator<std::weak_ptr<Player>>::operator++((std::_Rb_tree_const_iterator<std::weak_ptr<Player> > *const)&__for_begin);
  }
  result = 0;
  if ( v20 == (char *)v3 )
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
