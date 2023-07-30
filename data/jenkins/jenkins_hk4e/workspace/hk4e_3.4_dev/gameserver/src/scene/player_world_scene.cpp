// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_world_scene.cpp

// Line 29: range 0000000015C57F1C-0000000015C589AE
int32_t __cdecl PlayerWorldScene::fromBin(PlayerWorldScene *const this, const proto::SceneBin *scene_bin)
{
  int32_t v2; // r14d
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint64_t spring_recover_time_ms; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  WeatherArea *v12; // rax
  unsigned __int64 v13; // rax
  std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rsi
  common::milog::MiLogStream *v15; // rax
  PlayerWorldScene *v16; // rdx
  unsigned __int64 v17; // rax
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t v19; // edx
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int *v24; // rcx
  unsigned int *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // r14
  float v28; // ecx
  char v29; // dl
  const google::protobuf::RepeatedField<unsigned int> *v30; // rsi
  bool v31; // dl
  unsigned int v32; // eax
  __int64 v33; // rdx
  char v34; // al
  int32_t result; // eax
  unsigned __int8 (__fastcall *v36)(PlayerWorldScene *const, std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // [rsp+8h] [rbp-128h]
  uint32_t closed_weather_area_id; // [rsp+24h] [rbp-10Ch]
  google::protobuf::RepeatedPtrField<proto::SceneWeatherInfoBin>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::SceneWeatherInfoBin>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-F8h]
  const proto::SceneAllWeatherInfoBin *all_weather_info; // [rsp+40h] [rbp-F0h]
  const google::protobuf::RepeatedPtrField<proto::SceneWeatherInfoBin> *__for_range; // [rsp+48h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::SceneClimateAreaInfoBin> *__for_range_1; // [rsp+60h] [rbp-D0h]
  const proto::SceneClimateAreaInfoBin *climate_area_info; // [rsp+68h] [rbp-C8h]
  const proto::SceneWeatherInfoBin *weather_info; // [rsp+70h] [rbp-C0h]
  const data::WeatherExcelConfig *weather_config_ptr; // [rsp+78h] [rbp-B8h]
  common::milog::MiLogStream v51; // [rsp+80h] [rbp-B0h] BYREF
  char v52[144]; // [rsp+A0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 18 climate_area_id:73 48 4 17 height_area_id:41 64 16 19 weather_area_ptr:50";
  *(_QWORD *)(v4 + 16) = PlayerWorldScene::fromBin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  if ( Scene::fromBin((Scene *const)this, scene_bin) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "fromBin",
      32);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v51, (const char (*)[22])"Scene::fromBin failed");
    common::milog::MiLogStream::~MiLogStream(&v51);
    v2 = -1;
  }
  else
  {
    spring_recover_time_ms = proto::SceneBin::last_spring_recover_time_ms(scene_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
      spring_recover_time_ms = __asan_report_store8(&this->last_spring_recover_time_ms_, scene_bin);
    this->last_spring_recover_time_ms_ = spring_recover_time_ms;
    all_weather_info = proto::SceneBin::all_weather_info(scene_bin);
    __for_range = proto::SceneAllWeatherInfoBin::weather_info_list(all_weather_info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SceneWeatherInfoBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SceneWeatherInfoBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::SceneWeatherInfoBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      weather_info = google::protobuf::internal::RepeatedPtrIterator<proto::SceneWeatherInfoBin const>::operator*(&__for_begin);
      *(_DWORD *)(v4 + 48) = proto::SceneWeatherInfoBin::height_area_id(weather_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      weather_config_ptr = data::WeatherExcelConfigMgrBase::findWeatherExcelConfig(
                             &v8->design_config.txt_config_mgr.weather_config_mgr,
                             *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      if ( weather_config_ptr )
      {
        common::tools::perf::make_shared<WeatherArea,unsigned int &>(
          (unsigned int *)(v4 + 64),
          (unsigned int *)(v4 + 48));
        if ( std::operator==<WeatherArea>(0LL, (const std::shared_ptr<WeatherArea> *)(v4 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_world_scene.cpp",
            "fromBin",
            53);
          v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v51,
                  (const char (*)[40])"createWeatherArea fail, height_area_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v51);
          v2 = -1;
          v11 = 0;
        }
        else
        {
          v12 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          WeatherArea::fromBin(v12, weather_info);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = (unsigned __int64)(this->_vptr_DescribalBase + 38);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v36 = *(unsigned __int8 (__fastcall **)(PlayerWorldScene *const, std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13;
          v14 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( v36(this, v14) != 1 )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/player_world_scene.cpp",
              "fromBin",
              61);
            v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v51,
                    (const char (*)[42])"duplicate height_area_id, height_area_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v51);
            v2 = -1;
            v11 = 0;
          }
          else
          {
            v11 = 1;
          }
        }
        std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v4 + 64));
        if ( v11 != 1 )
          goto LABEL_46;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world_scene.cpp",
          "fromBin",
          46);
        v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v51,
               (const char (*)[46])"findWeatherExcelConfig fails, height_area_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::SceneWeatherInfoBin const>::operator++(&__for_begin);
    }
    __for_range_0 = proto::SceneAllWeatherInfoBin::closed_weather_area_list(all_weather_info);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
    __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
    while ( __for_begin_0 != __for_end_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_0);
      }
      closed_weather_area_id = *__for_begin_0;
      v16 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = (unsigned __int64)(this->_vptr_DescribalBase + 40);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      (*(void (__fastcall **)(PlayerWorldScene *, _QWORD))v17)(v16, closed_weather_area_id);
      ++__for_begin_0;
    }
    __for_range_1 = proto::SceneAllWeatherInfoBin::climate_area_info_list(all_weather_info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SceneClimateAreaInfoBin>::begin(__for_range_1).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SceneClimateAreaInfoBin>::end(__for_range_1).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::SceneClimateAreaInfoBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::SceneClimateAreaInfoBin> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::SceneClimateAreaInfoBin>::iterator *)&__for_end) )
    {
      climate_area_info = google::protobuf::internal::RepeatedPtrIterator<proto::SceneClimateAreaInfoBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::SceneClimateAreaInfoBin> *const)&__for_begin);
      *(_DWORD *)(v4 + 32) = proto::SceneClimateAreaInfoBin::climate_area_id(climate_area_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.json_config_mgr;
      v19 = *(_DWORD *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_json_config_mgr = (const JsonConfigMgr *)&this->scene_id_;
        __asan_report_load4(&this->scene_id_);
      }
      v20 = JsonConfigMgr::findClimateAreaConfig(p_json_config_mgr, this->scene_id_, v19) == 0LL;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      if ( v20 )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world_scene.cpp",
          "fromBin",
          76);
        v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v51,
                (const char (*)[38])"findClimateAreaConfig fail, scene_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->scene_id_);
        v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v22,
                (const char (*)[18])" climate_area_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
      else
      {
        *(_DWORD *)(v4 + 48) = proto::SceneClimateAreaInfoBin::json_climate_type(climate_area_info);
        v26 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int>(
                &this->climate_area_map_,
                (unsigned int *)(v4 + 32),
                (unsigned int *)(v4 + 48),
                v24,
                v25);
        if ( !v26.second )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_world_scene.cpp",
            "fromBin",
            81);
          v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v51,
                  (const char (*)[27])"duplicate climate_area_id:");
          *(_DWORD *)(v4 + 48) = proto::SceneClimateAreaInfoBin::climate_area_id(climate_area_info);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v51);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::SceneClimateAreaInfoBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::SceneClimateAreaInfoBin> *const)&__for_begin);
    }
    v30 = proto::SceneAllWeatherInfoBin::closed_climate_area_list(all_weather_info);
    common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->closed_climate_area_set_,
      v30);
    *(float *)v3.m128i_i32 = proto::SceneBin::cur_spring_volume(scene_bin);
    v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v29 = *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000);
    LOBYTE(v30) = v29 != 0;
    v31 = v29 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v29;
    if ( v31 )
      __asan_report_store4(&this->cur_spring_volume_, v30, v31);
    this->cur_spring_volume_ = v28;
    LOBYTE(v32) = proto::SceneBin::is_locked(scene_bin);
    v33 = v32;
    v34 = *(_BYTE *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000);
    if ( v34 < 0 )
    {
      LOBYTE(v30) = v34 != 0;
      __asan_report_store1(&this->is_locked_, v30, v33);
    }
    this->is_locked_ = v33;
    v2 = 0;
  }
LABEL_46:
  result = v2;
  if ( v52 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 95: range 0000000015C589B0-0000000015C59048
int32_t __cdecl PlayerWorldScene::toBin(const PlayerWorldScene *const this, proto::SceneBin *scene_bin)
{
  const PlayerWorldScene *v3; // rdx
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const PlayerWorldScene *v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  std::pair<unsigned int const,unsigned int> *v11; // rax
  std::pair<unsigned int const,unsigned int> *v12; // rdx
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-98h] BYREF
  proto::SceneAllWeatherInfoBin *all_weather_info; // [rsp+30h] [rbp-90h]
  const std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>> *__for_range; // [rsp+38h] [rbp-88h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-80h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *climate_area_id; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *json_climate_type; // [rsp+58h] [rbp-68h]
  proto::SceneClimateAreaInfoBin *climate_area_info_bin; // [rsp+60h] [rbp-60h]
  const std::pair<unsigned int const,std::shared_ptr<WeatherArea> > *v23; // [rsp+68h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WeatherArea> > >::type *height_area_id; // [rsp+70h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WeatherArea> > >::type *weather_area_ptr; // [rsp+78h] [rbp-48h]
  proto::SceneWeatherInfoBin *weather_info_bin; // [rsp+80h] [rbp-40h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+88h] [rbp-38h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-30h] BYREF

  if ( Scene::toBin((const Scene *const)this, scene_bin) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "toBin",
      98);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v28, (const char (*)[20])"Scene::toBin failed");
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    proto::SceneBin::set_last_spring_recover_time_ms(scene_bin, this->last_spring_recover_time_ms_);
    all_weather_info = proto::SceneBin::mutable_all_weather_info(scene_bin);
    v3 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(this->_vptr_DescribalBase + 39);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    __for_range = (const std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>> *)(*(__int64 (__fastcall **)(const PlayerWorldScene *))v4)(v3);
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>>::begin(__for_range)._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<WeatherArea>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<WeatherArea> >,false> *)&__for_end_0,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<WeatherArea> >,false> *)&__for_end) )
    {
      v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<WeatherArea>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<WeatherArea> >,false,false> *const)&__for_end_0);
      height_area_id = std::get<0ul,unsigned int const,std::shared_ptr<WeatherArea>>(v23);
      weather_area_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WeatherArea> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WeatherArea>>(v23);
      if ( std::operator==<WeatherArea>(0LL, weather_area_ptr) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world_scene.cpp",
          "toBin",
          109);
        v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v28,
               (const char (*)[42])"weather_area_ptr is null. height_area_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, height_area_id);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else
      {
        weather_info_bin = proto::SceneAllWeatherInfoBin::add_weather_info_list(all_weather_info);
        v6 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)weather_area_ptr);
        WeatherArea::toBin(v6, weather_info_bin);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<WeatherArea>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<WeatherArea> >,false,false> *const)&__for_end_0);
    }
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(this->_vptr_DescribalBase + 42);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    __for_range_0 = (const std::unordered_set<unsigned int> *)(*(__int64 (__fastcall **)(const PlayerWorldScene *))v8)(v7);
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(__for_range_0)._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v9 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      proto::SceneAllWeatherInfoBin::add_closed_weather_area_list(all_weather_info, *v10);
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
    }
    __for_range_1 = &this->climate_area_map_;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->climate_area_map_)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_0, &__for_end_0) )
    {
      v11 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      __for_end = *v12;
      climate_area_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      json_climate_type = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      climate_area_info_bin = proto::SceneAllWeatherInfoBin::add_climate_area_info_list(all_weather_info);
      if ( *(_BYTE *)(((unsigned __int64)climate_area_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)climate_area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)climate_area_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(climate_area_id);
      }
      proto::SceneClimateAreaInfoBin::set_climate_area_id(climate_area_info_bin, *climate_area_id);
      if ( *(_BYTE *)(((unsigned __int64)json_climate_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)json_climate_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)json_climate_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(json_climate_type);
      }
      proto::SceneClimateAreaInfoBin::set_json_climate_type(climate_area_info_bin, *json_climate_type);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
    }
    v13 = proto::SceneAllWeatherInfoBin::mutable_closed_climate_area_list(all_weather_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->closed_climate_area_set_,
      v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_spring_volume_);
    }
    proto::SceneBin::set_cur_spring_volume(scene_bin, this->cur_spring_volume_);
    if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_locked_);
    proto::SceneBin::set_is_locked(scene_bin, this->is_locked_);
    return 0;
  }
};

// Line 140: range 0000000015C5904A-0000000015C59285
int32_t __cdecl PlayerWorldScene::constructComps(PlayerWorldScene *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGridComp>(&this->EcsBase<Scene,SceneCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "constructComps",
      143);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"addComp SceneGridComp fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( Scene::constructComps((Scene *const)this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "constructComps",
      148);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v2,
      (const char (*)[29])"Scene::constructComps failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneEnvAnimalComp>(&this->EcsBase<Scene,SceneCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "constructComps",
      153);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v2,
      (const char (*)[34])"addComp SceneEnvAnimalComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneEncounterComp>(&this->EcsBase<Scene,SceneCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "constructComps",
      158);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v2,
      (const char (*)[34])"addComp SceneEncounterComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 167: range 0000000015C59286-0000000015C593AC
int32_t __cdecl PlayerWorldScene::init(PlayerWorldScene *const this, const SceneInitParam *init_param)
{
  uint64_t NowMs; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( Scene::init((Scene *const)this, init_param) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "init",
      170);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v4, (const char (*)[11])"init fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->last_spring_recover_time_ms_ )
    {
      NowMs = common::tools::TimeUtils::getNowMs();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
        NowMs = __asan_report_store8(&this->last_spring_recover_time_ms_, init_param);
      this->last_spring_recover_time_ms_ = NowMs;
    }
    PlayerWorldScene::initLoadGroup(this);
    return 0;
  }
};

// Line 185: range 0000000015C593AE-0000000015C59976
void __cdecl PlayerWorldScene::initLoadGroup(PlayerWorldScene *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Player *v4; // rax
  PlayerSceneComp *SceneComp; // rax
  unsigned __int64 v6; // rax
  uint32_t v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-110h] BYREF
  char v21[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 23 init_enter_scene_id:189 64 16 14 player_ptr:186 96 16 13 world_ptr:190 128 16 13 scene"
                        "_ptr:193 160 16 19 world_scene_ptr:196";
  *(_QWORD *)(v1 + 16) = PlayerWorldScene::initLoadGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  Scene::getOwnPlayer((const Scene *const)(v1 + 64));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    SceneComp = Player::getSceneComp(v4);
    *(_DWORD *)(v1 + 48) = PlayerSceneComp::getInitEnterPlayerSceneId(SceneComp);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_DescribalBase + 7);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, PlayerWorldScene *const))v6)(v1 + 96, this);
    if ( std::operator!=<World>(0LL, (const std::shared_ptr<World> *)(v1 + 96)) )
    {
      v7 = (unsigned int)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      World::findScene((World *const)(v1 + 128), v7);
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 128)) )
      {
        std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 160));
        if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 160)) )
          goto LABEL_17;
        v8 = (unsigned __int64)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 432LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8) )
LABEL_17:
          v10 = 1;
        else
          v10 = 0;
        if ( v10 )
        {
          v11 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          v12 = *(_QWORD *)v11 + 72LL;
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          *(_DWORD *)(v1 + 48) = (*(__int64 (__fastcall **)(unsigned __int64))v12)(v11);
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 160));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
    }
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world_scene.cpp",
      "initLoadGroup",
      203);
    v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v20,
            (const char (*)[21])"init_enter_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    if ( *(_DWORD *)(v1 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->scene_id_);
      }
      if ( this->scene_id_ == *(_DWORD *)(v1 + 48) )
      {
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp((Scene *const)this);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8();
        v15 = *(_QWORD *)BlockGroupComp + 48LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64))v15)(BlockGroupComp);
      }
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "initLoadGroup",
      212);
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"player not exist");
    val = Scene::getSceneId((const Scene *const)this);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
    *(_DWORD *)(v1 + 48) = Scene::getOwnerUid((const Scene *const)this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 217: range 0000000015C59978-0000000015C59A0B
WorldPtr __cdecl PlayerWorldScene::getOwnWorld(const PlayerWorldScene *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rax
  WorldPtr result; // rax
  std::shared_ptr<PlayerWorld> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)v1 + 64LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(std::shared_ptr<PlayerWorld> *))v2)(&__r);
  std::shared_ptr<World>::shared_ptr<PlayerWorld,void>((std::shared_ptr<World> *const)this, &__r);
  std::shared_ptr<PlayerWorld>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<World,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 222: range 0000000015C59A0C-0000000015C59B74
PlayerWorldPtr __cdecl PlayerWorldScene::getOwnPlayerWorld(const PlayerWorldScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Player *v4; // rax
  PlayerWorldPtr result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 owner_ptr:223";
  *(_QWORD *)(v1 + 16) = PlayerWorldScene::getOwnPlayerWorld;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Scene::getOwnPlayer((const Scene *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)this, 0LL);
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::getSceneComp(v4);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 233: range 0000000015C59B76-0000000015C5A005
int32_t __cdecl PlayerWorldScene::playerEnter(
        PlayerWorldScene *const this,
        Player *player,
        const Vector3 *pos,
        const Vector3 *rot,
        bool is_relogin,
        const std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *p_appear_avatar_ptr)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  int32_t v10; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  PlayerScenePlayComp *ScenePlayComp; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+38h] [rbp-108h] BYREF
  int32_t ret; // [rsp+3Ch] [rbp-104h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-100h] BYREF
  proto::PropValue __args_0; // [rsp+60h] [rbp-E0h] BYREF
  char v25[176]; // [rsp+90h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 16 20 owner_player_ptr:252 64 24 12 prop_vec:239";
  *(_QWORD *)(v7 + 16) = PlayerWorldScene::playerEnter;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219021312;
  v9[536862722] = -218103808;
  v9[536862723] = -202116109;
  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v7 + 32), p_appear_avatar_ptr);
  ret = Scene::playerEnter(
          (Scene *const)this,
          player,
          pos,
          rot,
          is_relogin,
          enter_scene_avatar_vec,
          (AvatarPtr *)(v7 + 32));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v7 + 32));
  if ( ret )
  {
    v10 = ret;
  }
  else
  {
    std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v7 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_spring_volume_);
    }
    buildHundredIntProp(&__args_0, 0x2712u, this->max_spring_volume_);
    std::vector<proto::PropValue>::emplace_back<proto::PropValue>(
      (std::vector<proto::PropValue> *const)(v7 + 64),
      &__args_0,
      &__args_0);
    proto::PropValue::~PropValue(&__args_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_spring_volume_);
    }
    buildHundredIntProp(&__args_0, 0x2713u, this->cur_spring_volume_);
    std::vector<proto::PropValue>::emplace_back<proto::PropValue>(
      (std::vector<proto::PropValue> *const)(v7 + 64),
      &__args_0,
      &__args_0);
    proto::PropValue::~PropValue(&__args_0);
    Player::notifyPlayerPropList(player, (const std::vector<proto::PropValue> *)(v7 + 64));
    SceneComp = Player::getSceneComp(player);
    if ( !PlayerSceneComp::getIsClientRelogin(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world_scene.cpp",
        "playerEnter",
        247);
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v23, (const char (*)[5])"uid:");
      val = Player::getUid(player);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        v13,
        (const char (*)[54])" not client relogin, so recreateInvisibleResetMonster");
      common::milog::MiLogStream::~MiLogStream(&v23);
      PlayerWorldScene::recreateInvisibleResetMonster(this);
    }
    Scene::getOwnPlayer((const Scene *const)(v7 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v7 + 32), 0LL) )
    {
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
      ScenePlayComp = Player::getScenePlayComp(v14);
      PlayerScenePlayComp::notifyScenePlayBattleInfoList(ScenePlayComp, player);
    }
    v10 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 32));
    std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v7 + 64));
  }
  result = v10;
  if ( v25 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 263: range 0000000015C5A006-0000000015C5A5A8
void __cdecl PlayerWorldScene::updateMaxSpringVolume(
        PlayerWorldScene *const this,
        bool is_change_cur_spring,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v6; // rax
  uint32_t v7; // esi
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  Player *v11; // r14
  float max_spring_volume; // [rsp+18h] [rbp-E8h]
  float prev_max_spring_volume; // [rsp+1Ch] [rbp-E4h]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  proto::PropValue prop_value; // [rsp+40h] [rbp-C0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 25 scene_trans_point_ptr:268 64 16 14 player_ptr:287";
  *(_QWORD *)(v3 + 16) = PlayerWorldScene::updateMaxSpringVolume;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_spring_volume_);
  }
  prev_max_spring_volume = this->max_spring_volume_;
  max_spring_volume = 0.0;
  __for_range = &this->unlock_info_.unlocked_point_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlock_info_.unlocked_point_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlock_info_.unlocked_point_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))
       + 93080;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->scene_id_);
    }
    JsonConfigMgr::findScenePoint<data::SceneTransPoint>((const JsonConfigMgr *const)(v3 + 32), v7, this->scene_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    if ( !std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->type >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->type);
      }
      if ( v8->type == TOWER )
      {
        v9 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v9->max_spring_volume >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v9 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->max_spring_volume >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v9->max_spring_volume);
        }
        max_spring_volume = (float)(int)v9->max_spring_volume + max_spring_volume;
      }
    }
    std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 32));
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_spring_volume_, &__for_end, (_BYTE)this + 104);
  }
  this->max_spring_volume_ = max_spring_volume;
  if ( is_change_cur_spring && std::abs(max_spring_volume - prev_max_spring_volume) > 0.00000011920929 )
    PlayerWorldScene::changeCurSpringVolume(this, max_spring_volume - prev_max_spring_volume, is_notify);
  if ( is_notify )
  {
    Scene::getOwnPlayer((const Scene *const)(v3 + 64));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->max_spring_volume_);
      }
      buildHundredIntProp(&prop_value, 0x2712u, this->max_spring_volume_);
      Player::notifyPlayerProp(v11, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  if ( v20 == (char *)v3 )
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

// Line 295: range 0000000015C5A5AA-0000000015C5A8FC
int32_t __cdecl PlayerWorldScene::changeCurSpringVolume(PlayerWorldScene *const this, float delta, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  float cur_spring_volume; // xmm0_4
  Player *v8; // r14
  proto::PropValue prop_value; // [rsp+10h] [rbp-A0h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:305";
  *(_QWORD *)(v3 + 16) = PlayerWorldScene::changeCurSpringVolume;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( delta == 0.0 )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_spring_volume_);
    }
    this->cur_spring_volume_ = this->cur_spring_volume_ + delta;
    if ( this->cur_spring_volume_ < 0.0 )
      this->cur_spring_volume_ = 0.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_spring_volume_);
    }
    cur_spring_volume = this->cur_spring_volume_;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_spring_volume_);
    }
    if ( cur_spring_volume >= this->max_spring_volume_ )
      this->cur_spring_volume_ = this->max_spring_volume_;
    if ( is_notify )
    {
      Scene::getOwnPlayer((const Scene *const)(v3 + 32));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_spring_volume_);
        }
        buildHundredIntProp(&prop_value, 0x2713u, this->cur_spring_volume_);
        Player::notifyPlayerProp(v8, &prop_value);
        proto::PropValue::~PropValue(&prop_value);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
    result = 0;
  }
  if ( v10 == (char *)v3 )
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

// Line 314: range 0000000015C5A8FE-0000000015C5A9C3
int32_t __cdecl PlayerWorldScene::updateScene(PlayerWorldScene *const this)
{
  common::milog::MiLogStream *v1; // rdx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( Scene::updateScene((Scene *const)this) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world_scene.cpp",
      "updateScene",
      317);
    v1 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v3, (const char (*)[18])"updateScene fails");
    common::milog::MiLogStream::operator<<<PlayerWorldScene,(PlayerWorldScene*)0>(v1, this);
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
  else
  {
    PlayerWorldScene::updateMaxSpringVolume(this, 0, 0);
    return 0;
  }
};

// Line 326: range 0000000015C5B2E8-0000000015C5BC18
void __cdecl PlayerWorldScene::onTimer(PlayerWorldScene *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 EnvAnimalComp; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 EncounterComp; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v12; // rax
  GameserverService *v13; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  float v19; // xmm0_4
  uint32_t now; // [rsp+14h] [rbp-10Ch]
  uint32_t unload_invalid_groups_interval; // [rsp+18h] [rbp-108h]
  int recover_interval; // [rsp+1Ch] [rbp-104h]
  float single_recover_volumne; // [rsp+20h] [rbp-100h]
  __int64 recover_count; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-E0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 21 full_recover_time:412 64 8 12 interval:405 96 16 14 config_ptr:340";
  *(_QWORD *)(v2 + 16) = PlayerWorldScene::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  Scene::onTimer((Scene *const)this, now_ms);
  now = common::tools::TimeUtils::getNow();
  EnvAnimalComp = (unsigned __int64)PlayerWorldScene::getEnvAnimalComp(this);
  if ( *(_BYTE *)((EnvAnimalComp >> 3) + 0x7FFF8000) )
    EnvAnimalComp = __asan_report_load8();
  v6 = *(_QWORD *)EnvAnimalComp + 40LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    EnvAnimalComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, _QWORD))v6)(EnvAnimalComp, now);
  EncounterComp = (unsigned __int64)PlayerWorldScene::getEncounterComp(this);
  if ( *(_BYTE *)((EncounterComp >> 3) + 0x7FFF8000) )
    EncounterComp = __asan_report_load8();
  v8 = *(_QWORD *)EncounterComp + 40LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    EncounterComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, _QWORD))v8)(EncounterComp, now);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_location_notify_time_);
  }
  if ( now > this->last_location_notify_time_ + 5 )
  {
    this->last_location_notify_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_DescribalBase + 61);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(PlayerWorldScene *const))v9)(this);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  if ( std::operator!=<Config>((const std::shared_ptr<Config> *)(v2 + 96), 0LL) )
  {
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v10->unload_invalid_groups_interval >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->unload_invalid_groups_interval >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->unload_invalid_groups_interval);
    }
    unload_invalid_groups_interval = v10->unload_invalid_groups_interval;
    if ( unload_invalid_groups_interval )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_check_residual_invalid_groups_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_check_residual_invalid_groups_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_check_residual_invalid_groups_time_);
      }
      if ( now > this->last_check_residual_invalid_groups_time_ + unload_invalid_groups_interval )
      {
        this->last_check_residual_invalid_groups_time_ = now;
        BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
        SceneBlockGroupComp::tryUnloadResidualInvalidGroups(BlockGroupComp);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned __int64)(this->_vptr_DescribalBase + 54);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(PlayerWorldScene *const))v12)(this) )
  {
    std::function<ForeachPolicy ()(Player &)>::function<PlayerWorldScene::onTimer(unsigned long)::{lambda(Player &)#1},void,void>(
      &p_func,
      (PlayerWorldScene::onTimer::<lambda(Player&)>)this);
    Scene::foreachPlayer((Scene *const)this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  }
  v13 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  recover_interval = ConstValueExcelConfigMgr::getSpringRecoverInterval(&v14->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  *(_QWORD *)(v2 + 64) = 1000LL * (unsigned int)recover_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( now_ms >= this->last_spring_recover_time_ms_ + *(_QWORD *)(v2 + 64) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_spring_volume_);
    }
    if ( this->max_spring_volume_ <= 0.0 )
      goto LABEL_64;
    v13 = (GameserverService *)((((_BYTE)this + 100) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_spring_volume_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_spring_volume_);
    }
    if ( this->max_spring_volume_ <= this->cur_spring_volume_ )
    {
LABEL_64:
      if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_spring_recover_time_ms_, v13);
      this->last_spring_recover_time_ms_ = now_ms;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
      *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getSpringFullRecoverTime(&v15->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( *(_DWORD *)(v2 + 48) && *(_QWORD *)(v2 + 64) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->max_spring_volume_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->max_spring_volume_);
        }
        single_recover_volumne = (float)(this->max_spring_volume_ * (float)recover_interval) / (float)*(int *)(v2 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        recover_count = (now_ms - this->last_spring_recover_time_ms_) / *(_QWORD *)(v2 + 64);
        if ( recover_count < 0 )
          v19 = (float)(recover_count & 1 | (unsigned int)((unsigned __int64)recover_count >> 1))
              + (float)(recover_count & 1 | (unsigned int)((unsigned __int64)recover_count >> 1));
        else
          v19 = (float)(int)recover_count;
        PlayerWorldScene::changeCurSpringVolume(this, v19 * single_recover_volumne, 1);
        if ( *(_BYTE *)(((unsigned __int64)&this->last_spring_recover_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        this->last_spring_recover_time_ms_ += recover_count * *(_QWORD *)(v2 + 64);
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world_scene.cpp",
          "onTimer",
          415);
        v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[19])"full_recover_time:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" interval:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v18,
          (const unsigned __int64 *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      }
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( v29 == (char *)v2 )
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
};

// Line 354: range 0000000015C5A9C4-0000000015C5B2E6
ForeachPolicy __cdecl PlayerWorldScene::onTimer(unsigned long)::{lambda(Player &)#1}::operator()(
        const PlayerWorldScene::onTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  ForeachPolicy v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r15
  common::milog::MiLogStream *v7; // rbx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // rbx
  PlayerSceneComp *v10; // rax
  common::milog::MiLogStream *v11; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  uint32_t v14; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int v17; // r15d
  Scene *v18; // r15
  uint32_t Uid; // eax
  PlayerSceneComp *v20; // r15
  Scene *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rbx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  PlayerSceneComp *v26; // rax
  common::milog::MiLogStream *v27; // rbx
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  std::shared_ptr<PlayerWorldScene> __b; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-110h] BYREF
  TransferReason p_reason; // [rsp+60h] [rbp-F0h] BYREF
  char v33[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 12 quit_pos:380 64 12 12 quit_rot:381 96 16 18 quit_scene_ptr:373";
  *(_QWORD *)(v3 + 16) = PlayerWorldScene::onTimer(unsigned long)::{lambda(Player &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<PlayerWorldScene>((PlayerWorldScene *)&__b);
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
  v6 = std::operator!=<Scene,PlayerWorldScene>((const std::shared_ptr<Scene> *)(v3 + 96), &__b);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__b);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world_scene.cpp",
      "operator()",
      358);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v31,
           (const char (*)[56])"[PLAYER_WORLD_SCENE] player is not on this scene, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v2 = FOREACH_CONTINUE;
    goto LABEL_25;
  }
  SceneComp = Player::getSceneComp(player);
  if ( PlayerSceneComp::isInTransfer(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world_scene.cpp",
      "operator()",
      365);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v31,
           (const char (*)[50])"[PLAYER_WORLD_SCENE] player is in transfer, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v2 = FOREACH_CONTINUE;
    goto LABEL_25;
  }
  v10 = Player::getSceneComp(player);
  if ( !PlayerSceneComp::isInMyPlayerWorld(v10) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world_scene.cpp",
      "operator()",
      391);
    v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v31,
            (const char (*)[48])"[PLAYER_WORLD_SCENE] scene invalid, guest uid: ");
    val = Player::getUid(player);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
    v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])" ,scene id: ");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &__closure->__this->scene_id_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v26 = Player::getSceneComp(player);
    if ( PlayerSceneComp::backMyWorld(v26, E_BACK_MY_WORLD_BY_HOST_SCENE_INVALID) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world_scene.cpp",
        "operator()",
        395);
      v27 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v31,
              (const char (*)[54])"[PLAYER_WORLD_SCENE] player backMyWorld failed, uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v2 = FOREACH_CONTINUE;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world_scene.cpp",
    "operator()",
    371);
  v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v31,
          (const char (*)[47])"[PLAYER_WORLD_SCENE] scene invalid, host uid: ");
  val = Player::getUid(player);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" ,scene id: ");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__closure->__this->scene_id_);
  common::milog::MiLogStream::~MiLogStream(&v31);
  v14 = (unsigned int)Player::getSceneComp(player);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__b);
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__b);
  TxtConfigMgr::getDefaultWorldMainSceneId(&v15->design_config.txt_config_mgr);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 96), v14);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__b);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world_scene.cpp",
      "operator()",
      376);
    v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v31,
            (const char (*)[54])"[PLAYER_WORLD_SCENE] quit_scene_ptr is nullptr, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v2 = FOREACH_CONTINUE;
    v17 = 0;
  }
  else
  {
    Vector3::Vector3((Vector3 *const)(v3 + 32), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v3 + 64), 0.0, 0.0, 0.0);
    v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    Uid = Player::getUid(player);
    Scene::getPlayerLocation(v18, Uid, (Vector3 *)(v3 + 32), (Vector3 *)(v3 + 64));
    v20 = Player::getSceneComp(player);
    TransferReason::TransferReason(&p_reason, ENTER_REASON_FORCE_QUIT_SCENE);
    v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    LOBYTE(v20) = PlayerSceneComp::jumpToScene(
                    v20,
                    v21,
                    (const Vector3 *)(v3 + 32),
                    (const Vector3 *)(v3 + 64),
                    0,
                    &p_reason) != 0;
    TransferReason::~TransferReason(&p_reason);
    if ( (_BYTE)v20 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world_scene.cpp",
        "operator()",
        385);
      v22 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v31,
              (const char (*)[47])"[PLAYER_WORLD_SCENE] jumpToScene failed, uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v2 = FOREACH_CONTINUE;
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  if ( v17 == 1 )
LABEL_24:
    v2 = FOREACH_CONTINUE;
LABEL_25:
  result = v2;
  if ( v33 == (char *)v3 )
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
  return result;
};

// Line 432: range 0000000015C5BC1A-0000000015C5C042
void __cdecl PlayerWorldScene::refreshWeatherOnTime(PlayerWorldScene *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rdx
  Player *v5; // rax
  const std::shared_ptr<WeatherArea> *v6; // rax
  WeatherArea *v7; // rax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+28h] [rbp-138h]
  std::set<std::shared_ptr<WeatherArea>> *__for_range_0; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,std::weak_ptr<Player> > *v12; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *uid; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *player_wtr; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-110h] BYREF
  char v16[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 14 player_ptr:437 80 16 20 weather_area_ptr:447 112 48 20 weather_area_set:433";
  *(_QWORD *)(v1 + 16) = PlayerWorldScene::refreshWeatherOnTime;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  std::set<std::shared_ptr<WeatherArea>>::set((std::set<std::shared_ptr<WeatherArea>> *const)(v1 + 112));
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::weak_ptr<Player>>(v12);
    player_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Player> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Player>>(v12);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 48));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world_scene.cpp",
        "refreshWeatherOnTime",
        440);
      v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v15, (const char (*)[15])"player is null");
      common::milog::MiLogStream::operator<<<PlayerWorldScene,(PlayerWorldScene*)0>(v4, this);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      Player::getSceneComp(v5);
      PlayerSceneComp::getWeatherArea((const PlayerSceneComp *const)(v1 + 80));
      std::set<std::shared_ptr<WeatherArea>>::insert(
        (std::set<std::shared_ptr<WeatherArea>> *const)(v1 + 112),
        (std::set<std::shared_ptr<WeatherArea>>::value_type *)(v1 + 80));
      std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v1 + 80));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 48));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<std::shared_ptr<WeatherArea>> *)(v1 + 112);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > >::_Base_ptr)std::set<std::shared_ptr<WeatherArea>>::begin((const std::set<std::shared_ptr<WeatherArea>> *const)(v1 + 112))._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player> > >::_Base_ptr)std::set<std::shared_ptr<WeatherArea>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::shared_ptr<WeatherArea> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::shared_ptr<WeatherArea> >::_Self *)&__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::shared_ptr<WeatherArea>>::operator*((const std::_Rb_tree_const_iterator<std::shared_ptr<WeatherArea> > *const)&__for_begin);
    std::shared_ptr<WeatherArea>::shared_ptr((std::shared_ptr<WeatherArea> *const)(v1 + 80), v6);
    if ( std::operator!=<WeatherArea>((const std::shared_ptr<WeatherArea> *)(v1 + 80), 0LL) )
    {
      v7 = std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeatherArea,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      WeatherArea::refreshWeatherArea(v7, REFRESH_WEATHER_HOUR);
    }
    std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v1 + 80));
    std::_Rb_tree_const_iterator<std::shared_ptr<WeatherArea>>::operator++((std::_Rb_tree_const_iterator<std::shared_ptr<WeatherArea> > *const)&__for_begin);
  }
  std::set<std::shared_ptr<WeatherArea>>::~set((std::set<std::shared_ptr<WeatherArea>> *const)(v1 + 112));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 458: range 0000000015C5C1B8-0000000015C5C492
void __cdecl PlayerWorldScene::refreshMonsterLevel(PlayerWorldScene *const this, uint32_t world_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SceneBlockGroupComp *BlockGroupComp; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerWorldScene::refreshMonsterLevel::<lambda(Group&)> v13; // [rsp-20h] [rbp-130h]
  int val; // [rsp+1Ch] [rbp-F4h] BYREF
  PlayerWorldScene::refreshMonsterLevel::<lambda(Group&)> __f; // [rsp+20h] [rbp-F0h]
  std::function<ForeachPolicy(Group&)> p_func; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 owner_uid:461 64 4 15 group_count:462 80 4 17 monster_count:463 96 16 9 timer:464";
  *(_QWORD *)(v2 + 16) = PlayerWorldScene::refreshMonsterLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = Scene::getOwnerUid((const Scene *const)this);
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
  __f.__world_level = world_level;
  __f.__monster_count = (uint32_t *)(v2 + 80);
  __f.__group_count = (uint32_t *)(v2 + 64);
  v13.__group_count = (uint32_t *)(v2 + 64);
  v13.__monster_count = (uint32_t *)(v2 + 80);
  *(_QWORD *)&v13.__world_level = *(_QWORD *)&__f.__world_level;
  std::function<ForeachPolicy ()(Group &)>::function<PlayerWorldScene::refreshMonsterLevel(unsigned int)::{lambda(Group &)#1},void,void>(
    &p_func,
    v13);
  SceneBlockGroupComp::foreachGroup(BlockGroupComp, &p_func);
  std::function<ForeachPolicy ()(Group &)>::~function(&p_func);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world_scene.cpp",
    "refreshMonsterLevel",
    471);
  v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         (common::milog::MiLogStream *const)&p_func,
         (const char (*)[41])"[PERF] refreshMonsterLevel group count: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
  v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" monster count: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
  v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" cost: ");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
  v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])"us uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  if ( v17 == (char *)v2 )
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
};

// Line 465: range 0000000015C5C044-0000000015C5C1B7
ForeachPolicy __cdecl PlayerWorldScene::refreshMonsterLevel(unsigned int)::{lambda(Group &)#1}::operator()(
        const PlayerWorldScene::refreshMonsterLevel::<lambda(Group&)> *const __closure,
        Group *group)
{
  uint32_t refreshed; // esi
  uint32_t *monster_count; // rdx
  int v4; // ecx
  uint32_t *v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 group_count; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  refreshed = Group::refreshMonsterLevel(group, __closure->__world_level);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster_count >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  monster_count = __closure->__monster_count;
  if ( *(_BYTE *)(((unsigned __int64)monster_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)monster_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__monster_count);
  }
  v4 = *monster_count;
  v5 = __closure->__monster_count;
  v6 = v4 + refreshed;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__monster_count, v6, (_BYTE)v5);
  }
  *v5 = v6;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__group_count >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  group_count = (unsigned __int64)__closure->__group_count;
  if ( *(_BYTE *)((group_count >> 3) + 0x7FFF8000) != 0
    && (char)((group_count & 7) + 3) >= *(_BYTE *)((group_count >> 3) + 0x7FFF8000) )
  {
    group_count = __asan_report_load4(__closure->__group_count);
  }
  ++*(_DWORD *)group_count;
  return 0;
};

// Line 477: range 0000000015C5C608-0000000015C5C8E2
void __cdecl PlayerWorldScene::refreshMonsterMpProp(PlayerWorldScene *const this, uint32_t mp_players)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SceneBlockGroupComp *BlockGroupComp; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerWorldScene::refreshMonsterMpProp::<lambda(Group&)> v13; // [rsp-20h] [rbp-130h]
  int val; // [rsp+1Ch] [rbp-F4h] BYREF
  PlayerWorldScene::refreshMonsterMpProp::<lambda(Group&)> __f; // [rsp+20h] [rbp-F0h]
  std::function<ForeachPolicy(Group&)> p_func; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 owner_uid:480 64 4 15 group_count:481 80 4 17 monster_count:482 96 16 9 timer:483";
  *(_QWORD *)(v2 + 16) = PlayerWorldScene::refreshMonsterMpProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = Scene::getOwnerUid((const Scene *const)this);
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
  __f.__mp_players = mp_players;
  __f.__monster_count = (uint32_t *)(v2 + 80);
  __f.__group_count = (uint32_t *)(v2 + 64);
  v13.__group_count = (uint32_t *)(v2 + 64);
  v13.__monster_count = (uint32_t *)(v2 + 80);
  *(_QWORD *)&v13.__mp_players = *(_QWORD *)&__f.__mp_players;
  std::function<ForeachPolicy ()(Group &)>::function<PlayerWorldScene::refreshMonsterMpProp(unsigned int)::{lambda(Group &)#1},void,void>(
    &p_func,
    v13);
  SceneBlockGroupComp::foreachGroup(BlockGroupComp, &p_func);
  std::function<ForeachPolicy ()(Group &)>::~function(&p_func);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world_scene.cpp",
    "refreshMonsterMpProp",
    490);
  v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         (common::milog::MiLogStream *const)&p_func,
         (const char (*)[42])"[PERF] refreshMonsterMpProp group count: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
  v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" monster count: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
  v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" cost: ");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
  v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])"us uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  if ( v17 == (char *)v2 )
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
};

// Line 484: range 0000000015C5C494-0000000015C5C607
ForeachPolicy __cdecl PlayerWorldScene::refreshMonsterMpProp(unsigned int)::{lambda(Group &)#1}::operator()(
        const PlayerWorldScene::refreshMonsterMpProp::<lambda(Group&)> *const __closure,
        Group *group)
{
  uint32_t refreshed; // esi
  uint32_t *monster_count; // rdx
  int v4; // ecx
  uint32_t *v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 group_count; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  refreshed = Group::refreshMonsterMpProp(group, __closure->__mp_players);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster_count >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  monster_count = __closure->__monster_count;
  if ( *(_BYTE *)(((unsigned __int64)monster_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)monster_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__monster_count);
  }
  v4 = *monster_count;
  v5 = __closure->__monster_count;
  v6 = v4 + refreshed;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__monster_count, v6, (_BYTE)v5);
  }
  *v5 = v6;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__group_count >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  group_count = (unsigned __int64)__closure->__group_count;
  if ( *(_BYTE *)((group_count >> 3) + 0x7FFF8000) != 0
    && (char)((group_count & 7) + 3) >= *(_BYTE *)((group_count >> 3) + 0x7FFF8000) )
  {
    group_count = __asan_report_load4(__closure->__group_count);
  }
  ++*(_DWORD *)group_count;
  return 0;
};

// Line 496: range 0000000015C5C8E4-0000000015C5CAC0
std::string *__cdecl PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](
        std::string *retstr,
        PlayerWorldScene *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rsi
  std::allocator<char> __a; // [rsp+1Fh] [rbp-61h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:497";
  *(_QWORD *)(v2 + 16) = PlayerWorldScene::getOwnerNextTransNo[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BasicComp = Player::getBasicComp(v5);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      BasicComp = (PlayerBasicComp *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    PlayerBasicComp::getNextTransNo[abi:cxx11](retstr, BasicComp);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "unknow-owner", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 507: range 0000000015C5CAC2-0000000015C5CB33
void __cdecl PlayerWorldScene::addInvisibleResetAndAlertMonster(PlayerWorldScene *const this, Monster *monster)
{
  std::unordered_set<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( Entity::getGroupId((const Entity *const)monster) && Entity::getConfigId((const Entity *const)monster) )
  {
    __x[0] = Entity::getEntityId((const Entity *const)monster);
    std::unordered_set<unsigned int>::insert(&this->invisible_reset_alert_monster_set_, __x);
  }
};

// Line 515: range 0000000015C5CB34-0000000015C5CB75
void __cdecl PlayerWorldScene::delInvisibleResetAndAlertMonster(PlayerWorldScene *const this, Monster *monster)
{
  std::unordered_set<unsigned int>::key_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  __x[0] = Entity::getEntityId((const Entity *const)monster);
  std::unordered_set<unsigned int>::erase(&this->invisible_reset_alert_monster_set_, __x);
};

// Line 520: range 0000000015C5CB76-0000000015C5D29A
void __cdecl PlayerWorldScene::recreateInvisibleResetMonster(PlayerWorldScene *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v4; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-3B8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-3B0h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-3A8h]
  VisionContext v23; // [rsp+34h] [rbp-39Ch] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-390h] BYREF
  char v25[880]; // [rsp+60h] [rbp-370h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(832LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 12 set_size:521 48 4 7 num:522 64 4 13 config_id:533 80 16 15 monster_ptr:525 112 16 13 g"
                        "roup_ptr:532 144 16 15 monster_ptr:540 176 520 16 entity_param:538";
  *(_QWORD *)(v1 + 16) = PlayerWorldScene::recreateInvisibleResetMonster;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862741] = -218103808;
  v3[536862742] = -202116109;
  v3[536862743] = -202116109;
  v3[536862744] = -202116109;
  v3[536862745] = -202116109;
  *(_DWORD *)(v1 + 32) = std::unordered_set<unsigned int>::size(&this->invisible_reset_alert_monster_set_);
  *(_DWORD *)(v1 + 48) = 0;
  __for_range = &this->invisible_reset_alert_monster_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->invisible_reset_alert_monster_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->invisible_reset_alert_monster_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    Scene::findEntity<Monster>((const Scene *const)(v1 + 80), (uint32_t)this);
    if ( !std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v1 + 80)) )
    {
      v5 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      if ( !Entity::isAnyPlayerViewing((const Entity *const)v5) )
      {
        std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        Entity::getGroup((const Entity *const)(v1 + 112));
        v7 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        *(_DWORD *)(v1 + 64) = Entity::getConfigId((const Entity *const)v7);
        if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 112), 0LL) && *(_DWORD *)(v1 + 64) )
        {
          v9 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v10 = *(_QWORD *)v9->baseclass_0 + 128LL;
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8();
          v11 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v10;
          VisionContext::VisionContext(&v23, VISION_REFRESH);
          v11(v9, &v23);
          GroupEntityParam::GroupEntityParam((GroupEntityParam *const)(v1 + 176));
          *(_DWORD *)(v1 + 176) = *(_DWORD *)(v1 + 64);
          v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
          Group::createMonster((Group *const)(v1 + 144), (const GroupEntityParam *)v12);
          if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v1 + 144), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_world_scene.cpp",
              "recreateInvisibleResetMonster",
              543);
            v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v24,
                    (const char (*)[15])"createMonster ");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v1 + 64));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
          else
          {
            ++*(_DWORD *)(v1 + 48);
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v1 + 144));
          GroupEntityParam::~GroupEntityParam((GroupEntityParam *const)(v1 + 176));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 112));
      }
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v1 + 80));
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  std::unordered_set<unsigned int>::clear(&this->invisible_reset_alert_monster_set_);
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/scene/player_world_scene.cpp",
    "recreateInvisibleResetMonster",
    552);
  v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v24,
          (const char (*)[22])"recreate monster num:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
  v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])" from set size: ");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v1 + 32));
  v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" owner_uid: ");
  *(_DWORD *)(v1 + 64) = Scene::getOwnerUid((const Scene *const)this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v1 + 64));
  common::milog::MiLogStream::~MiLogStream(&v24);
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 556: range 0000000015C5D29C-0000000015C5D776
void __cdecl PlayerWorldScene::onCreatureHurt(
        PlayerWorldScene *const this,
        Creature *attacker,
        Creature *defenser,
        HurtContext *context)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Creature *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // rax
  PlayerScenePlayComp *ScenePlayComp; // r15
  float final_damage; // r14d
  uint32_t GroupId; // eax
  uint32_t config_id; // [rsp+Ch] [rbp-E4h]
  uint32_t attacker_uid; // [rsp+3Ch] [rbp-B4h]
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 23 attacker_avatar_ptr:572 64 16 17 top_owner_ptr:575 96 16 20 owner_player_ptr:590";
  *(_QWORD *)(v4 + 16) = PlayerWorldScene::onCreatureHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  Scene::onCreatureHurt((Scene *const)this, attacker, defenser, context);
  if ( *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&context->reason);
  }
  if ( context->reason == CHANGE_HP_SUB_AVATAR || context->reason == CHANGE_HP_SUB_MONSTER )
  {
    if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&context->final_damage);
    }
    if ( context->final_damage >= 0.00000011920929 )
    {
      attacker_uid = 0;
      v7 = defenser;
      if ( *(_BYTE *)(((unsigned __int64)defenser >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = *(_QWORD *)defenser->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(Creature *))v8)(v7) == 2 )
      {
        toThisPtr<Creature>((Creature *)(v4 + 96));
        std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 32));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 96));
        if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
          goto LABEL_23;
        Creature::findTopOwner((const Creature *const)(v4 + 64));
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v4 + 64)) )
        {
          v9 = 0;
        }
        else
        {
          std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 96));
          std::shared_ptr<Avatar>::operator=(
            (std::shared_ptr<Avatar> *const)(v4 + 32),
            (std::shared_ptr<Avatar> *)(v4 + 96));
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
          {
            v9 = 0;
          }
          else
          {
            v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            attacker_uid = Avatar::getUid(v10);
            v9 = 1;
          }
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 64));
        if ( v9 == 1 )
        {
LABEL_23:
          Scene::getOwnPlayer((const Scene *const)(v4 + 96));
          if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 96)) )
          {
            v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            ScenePlayComp = Player::getScenePlayComp(v11);
            if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&context->final_damage);
            }
            final_damage = context->final_damage;
            config_id = Entity::getConfigId((const Entity *const)defenser);
            GroupId = Entity::getGroupId((const Entity *const)defenser);
            PlayerScenePlayComp::onMonsterHurt(ScenePlayComp, attacker_uid, GroupId, config_id, final_damage);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
      }
    }
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 601: range 0000000015C5D778-0000000015C5D9C0
int32_t __cdecl PlayerWorldScene::checkIsValid(PlayerWorldScene *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t DefaultWorldMainSceneId; // ecx
  bool v3; // bl
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v7; // rdx
  char v8; // r12
  std::shared_ptr<Config> v9[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
  DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(&v1->design_config.txt_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id_);
  }
  v3 = DefaultWorldMainSceneId == this->scene_id_;
  std::shared_ptr<Config>::~shared_ptr(v9);
  if ( v3 )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_locked_);
  if ( this->is_locked_ )
    return -1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9)->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id_);
  }
  if ( SceneExcelConfigMgr::isSceneAbandonBlockbin(p_scene_config_mgr, this->scene_id_) )
    goto LABEL_17;
  BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp((Scene *const)this);
  if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
    BlockGroupComp = __asan_report_load8();
  v7 = *(_QWORD *)BlockGroupComp + 192LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    BlockGroupComp = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v7)(BlockGroupComp) )
LABEL_17:
    v8 = 1;
  else
    v8 = 0;
  std::shared_ptr<Config>::~shared_ptr(v9);
  if ( v8 )
    return -1;
  else
    return 0;
};

// Line 624: range 0000000015C5D9C2-0000000015C5DC2B
void __cdecl PlayerWorldScene::notifyAllPlayerLocation(PlayerWorldScene *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rax
  uint32_t SceneId; // eax
  World *v6; // rax
  char v7[224]; // [rsp+20h] [rbp-E0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 13 world_ptr:630 80 72 10 notify:625";
  *(_QWORD *)(v1 + 16) = PlayerWorldScene::notifyAllPlayerLocation;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  proto::ScenePlayerLocationNotify::ScenePlayerLocationNotify((proto::ScenePlayerLocationNotify *const)(v1 + 80));
  if ( Scene::fillScenePlayerLocationNotify((Scene *const)this, (proto::ScenePlayerLocationNotify *)(v1 + 80)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(this->_vptr_DescribalBase + 7);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, PlayerWorldScene *const))v4)(v1 + 48, this);
    if ( std::operator!=<World>(0LL, (const std::shared_ptr<World> *)(v1 + 48)) )
    {
      SceneId = Scene::getSceneId((const Scene *const)this);
      proto::ScenePlayerLocationNotify::set_scene_id((proto::ScenePlayerLocationNotify *const)(v1 + 80), SceneId);
      v6 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      World::notifyAllPlayer<proto::ScenePlayerLocationNotify>(
        v6,
        (const proto::ScenePlayerLocationNotify *)(v1 + 80),
        0);
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 48));
  }
  proto::ScenePlayerLocationNotify::~ScenePlayerLocationNotify((proto::ScenePlayerLocationNotify *const)(v1 + 80));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
