// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/city/player_city_comp.cpp

// Line 28: range 00000000175CCB3A-00000000175CD058
int32_t __cdecl PlayerCityComp::fromBin(PlayerCityComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  City *v9; // rax
  std::shared_ptr<City> *v10; // r8
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  const proto::PlayerCityCompBin *proto_comp; // [rsp+28h] [rbp-E8h]
  const google::protobuf::Map<unsigned int,proto::CityBin> *__for_range; // [rsp+30h] [rbp-E0h]
  const unsigned int *p_city_id; // [rsp+38h] [rbp-D8h]
  google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator __for_begin; // [rsp+40h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator __for_end; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-90h] BYREF
  char v25[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 city_ptr:33";
  *(_QWORD *)(v3 + 16) = PlayerCityComp::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::city_bin(player_data_bin);
  __for_range = proto::PlayerCityCompBin::city_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::CityBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::CityBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_city_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator::operator*(&__for_begin);
    common::tools::perf::make_shared<City,unsigned int const&>((const unsigned int *)(v3 + 32), p_city_id);
    if ( std::operator==<City>((const std::shared_ptr<City> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/city/player_city_comp.cpp",
        "fromBin",
        36);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v24,
             (const char (*)[35])"make_shared<City> failed, city_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, p_city_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_17:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = -1;
      v16 = 0;
      goto LABEL_19;
    }
    v9 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( City::fromBin(v9, (const proto::CityBin *)(p_city_id + 2)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/city/player_city_comp.cpp",
        "fromBin",
        41);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v24,
              (const char (*)[35])"city_ptr->fromBin failed, city_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, p_city_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_17;
    }
    v13 = std::unordered_map<unsigned int,std::shared_ptr<City>>::emplace<unsigned int const&,std::shared_ptr<City>&>(
            &this->city_map_,
            p_city_id,
            (std::shared_ptr<City> *)(v3 + 32),
            (const unsigned int *)&this->city_map_,
            v10);
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/city/player_city_comp.cpp",
        "fromBin",
        46);
      v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v24,
              (const char (*)[25])"duplicate city, city_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, p_city_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_17;
    }
    v16 = 1;
LABEL_19:
    std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 32));
    if ( v16 != 1 )
      goto LABEL_22;
    google::protobuf::Map<unsigned int,proto::CityBin>::const_iterator::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_22:
  result = v2;
  if ( v25 == (char *)v3 )
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

// Line 56: range 00000000175CD05A-00000000175CD253
int32_t __cdecl PlayerCityComp::toBin(PlayerCityComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<City>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<City>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::PlayerCityCompBin *proto_comp; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::CityBin> *city_map; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,std::shared_ptr<City>> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,std::shared_ptr<City> > *v13; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_ptr; // [rsp+50h] [rbp-40h]
  proto::CityBin *city_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_city_bin(player_data_bin);
  city_map = proto::PlayerCityCompBin::mutable_city_map(proto_comp);
  __for_range = &this->city_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::begin(&this->city_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::end(&this->city_map_)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<City>>,false>(&__for_begin, &__for_end) )
      return 0;
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<City>>(v13);
    city_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<City>>(v13);
    city_bin = google::protobuf::Map<unsigned int,proto::CityBin>::operator[](city_map, city_id);
    v2 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)city_ptr);
    if ( City::toBin(v2, city_bin) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/city/player_city_comp.cpp",
    "toBin",
    65);
  v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v17,
         (const char (*)[33])"city_ptr->toBin failed, city_id:");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, city_id);
  v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v17);
  return -1;
};

// Line 75: range 00000000175CD254-00000000175CD588
void __cdecl PlayerCityComp::checkAndModifyCityData(PlayerCityComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rcx
  Scene *v5; // rax
  SceneAreaComp *AreaComp; // rdi
  std::unordered_map<unsigned int,std::shared_ptr<City>> *p_city_map; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 25 player_world_scene_ptr:76";
  *(_QWORD *)(v1 + 16) = PlayerCityComp::checkAndModifyCityData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/city/player_city_comp.cpp",
      "checkAndModifyCityData",
      79);
    v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v9,
           (const char (*)[32])"getMainWorldScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    goto LABEL_17;
  }
  if ( !std::unordered_map<unsigned int,std::shared_ptr<City>>::empty(&this->city_map_) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/city/player_city_comp.cpp",
      "checkAndModifyCityData",
      84);
    v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v9,
           (const char (*)[32])"city_map_ is not empty! player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_9;
  }
  v5 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  AreaComp = Scene::getAreaComp(v5);
  p_city_map = &this->city_map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
  {
    AreaComp = (SceneAreaComp *)&this->player_;
    __asan_report_load8(&this->player_);
  }
  SceneAreaComp::swapOutCityMapOnCheckAndModifyCityData(AreaComp, this->player_, p_city_map);
LABEL_17:
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 00000000175CD58A-00000000175CD8FD
int32_t __cdecl PlayerCityComp::onLogin(PlayerCityComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  std::shared_ptr<City> *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  int32_t result; // eax
  std::unordered_map<unsigned int,data::CityConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,data::CityConfig>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const std::unordered_map<unsigned int,data::CityConfig> *__for_range; // [rsp+20h] [rbp-B0h]
  const std::pair<unsigned int const,data::CityConfig> *v15; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::CityConfig> >::type *city_id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CityConfig> >::type *_; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 city_ptr:97";
  *(_QWORD *)(v2 + 16) = PlayerCityComp::onLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.txt_config_mgr.world_area_config_mgr.city_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  __for_begin._M_cur = std::unordered_map<unsigned int,data::CityConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::CityConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CityConfig>,false>(&__for_begin, &__for_end) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,data::CityConfig>(v15);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::CityConfig> >::type *)std::get<1ul,unsigned int const,data::CityConfig>(v15);
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    PlayerCityComp::findCity((const PlayerCityComp *const)(v2 + 32), (uint32_t)this);
    v5 = std::operator==<City>(0LL, (const std::shared_ptr<City> *)(v2 + 32));
    std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v2 + 32));
    if ( v5 )
    {
      common::tools::perf::make_shared<City,unsigned int const&>((const unsigned int *)(v2 + 32), city_id);
      v7 = std::unordered_map<unsigned int,std::shared_ptr<City>>::emplace<unsigned int const&,std::shared_ptr<City>&>(
             &this->city_map_,
             city_id,
             (std::shared_ptr<City> *)(v2 + 32),
             (const unsigned int *)&this->city_map_,
             v6);
      if ( !v7.second )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/city/player_city_comp.cpp",
          "onLogin",
          100);
        v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v18,
               (const char (*)[19])"duplicate city_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, city_id);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v2 + 32));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 108: range 00000000175CD8FE-00000000175CDA86
const PlayerCityComp *__fastcall PlayerCityComp::findCity(const PlayerCityComp *const this, __int64 city_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<City> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 city_id:107 64 8 8 iter:109";
  *(_QWORD *)(v3 + 16) = PlayerCityComp::findCity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<City>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<City>>::find(
                                                                                           (const std::unordered_map<unsigned int,std::shared_ptr<City>> *const)(city_id + 32),
                                                                                           (const std::unordered_map<unsigned int,std::shared_ptr<City>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::end((const std::unordered_map<unsigned int,std::shared_ptr<City>> *const)(city_id + 32))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<City>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<City> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<City>::shared_ptr((std::shared_ptr<City> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City> >,false,false> *const)(v3 + 64));
    std::shared_ptr<City>::shared_ptr((std::shared_ptr<City> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 116: range 00000000175CDA88-00000000175CDDD9
int32_t __cdecl PlayerCityComp::foreachCity(
        const PlayerCityComp *const this,
        std::function<ForeachPolicy(City&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::shared_ptr<City>>::size_type v6; // rax
  int v7; // r14d
  City *v8; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<City>>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<City>>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<City>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<City>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<City> *city_wtr; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,std::shared_ptr<City> > *v15; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *city_ptr; // [rsp+58h] [rbp-B8h]
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 city_ptr:126 64 24 12 city_vec:118";
  *(_QWORD *)(v3 + 16) = PlayerCityComp::foreachCity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<City>>::vector((std::vector<std::weak_ptr<City>> *const)(v3 + 64));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<City>>::size(&this->city_map_);
  std::vector<std::weak_ptr<City>>::reserve((std::vector<std::weak_ptr<City>> *const)(v3 + 64), v6);
  __for_range = &this->city_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::begin(&this->city_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<City>>::end(&this->city_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<City>>,false>(&__for_begin, &__for_end) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<City>>(v15);
    city_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<City> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<City>>(v15);
    std::vector<std::weak_ptr<City>>::emplace_back<std::shared_ptr<City> const&>(
      (std::vector<std::weak_ptr<City>> *const)(v3 + 64),
      city_ptr,
      city_ptr);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<City>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<City>> *)(v3 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<City> >,false>::__node_type *)std::vector<std::weak_ptr<City>>::begin((std::vector<std::weak_ptr<City>> *const)(v3 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<City> >,false>::__node_type *)std::vector<std::weak_ptr<City>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<City> *,std::vector<std::weak_ptr<City>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<City>*,std::vector<std::weak_ptr<City>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<City>*,std::vector<std::weak_ptr<City>> > *)&__for_end) )
  {
    city_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<City> *,std::vector<std::weak_ptr<City>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<City>*,std::vector<std::weak_ptr<City>> > *const)&__for_begin);
    std::weak_ptr<City>::lock((const std::weak_ptr<City> *const)(v3 + 32));
    if ( std::operator==<City>((const std::shared_ptr<City> *)(v3 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(City &)>::operator()(p_func, v8) )
      {
        v2 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
    std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 32));
    if ( v7 && v7 != 2 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::weak_ptr<City> *,std::vector<std::weak_ptr<City>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<City>*,std::vector<std::weak_ptr<City>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_18:
  std::vector<std::weak_ptr<City>>::~vector((std::vector<std::weak_ptr<City>> *const)(v3 + 64));
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 141: range 00000000175CDDDA-00000000175CDF20
void __cdecl PlayerCityComp::tryGetCityLevel(const PlayerCityComp *const this, uint32_t city_id, uint32_t *city_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char *v6; // rsi
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Level; // ecx
  char v9; // dl
  __int64 v10; // rdx
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 city_ptr:142";
  *(_QWORD *)(v3 + 16) = PlayerCityComp::tryGetCityLevel;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerCityComp::findCity((const PlayerCityComp *const)(v3 + 32), (__int64)this, city_id);
  v6 = (char *)(v3 + 32);
  if ( std::operator!=<City>(0LL, (const std::shared_ptr<City> *)(v3 + 32)) )
  {
    v7 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Level = City::getLevel(v7);
    v9 = *(_BYTE *)(((unsigned __int64)city_level >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v9 != 0;
    v10 = (v9 != 0) & (unsigned __int8)((char)(((unsigned __int8)city_level & 7) + 3) >= v9);
    if ( (_BYTE)v10 )
      __asan_report_store4(city_level, v6, v10);
    *city_level = Level;
  }
  std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 32));
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 150: range 00000000175CDF22-00000000175CDFC2
void __cdecl PlayerCityComp::tryGetCityLevelByLevel1AreaId(
        const PlayerCityComp *const this,
        uint32_t level1_area_id,
        uint32_t *city_level)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t city_id; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+30h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  city_id = WorldAreaExcelConfigMgr::findAreaCityId(
              &v3->design_config.txt_config_mgr.world_area_config_mgr,
              level1_area_id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( city_id )
    PlayerCityComp::tryGetCityLevel(this, city_id, city_level);
};

// Line 160: range 00000000175CDFC4-00000000175CED2A
void __cdecl PlayerCityComp::onLevelupCityReq(
        PlayerCityComp *const this,
        const proto::LevelupCityReq *req,
        proto::LevelupCityRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  Scene *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t Level; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool v21; // r14
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v23; // rax
  City *p_player; // rdi
  uint32_t v25; // ecx
  uint32_t v26; // edx
  City *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  PlayerItemComp *v31; // rax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t v33; // edx
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t CrystalNum; // edx
  std::string v36; // [rsp+0h] [rbp-230h]
  proto::LevelupCityRsp *rsp_0a; // [rsp+8h] [rbp-228h]
  const proto::LevelupCityReq *reqa; // [rsp+10h] [rbp-220h]
  PlayerCityComp *thisa; // [rsp+18h] [rbp-218h]
  uint32_t item_id; // [rsp+2Ch] [rbp-204h]
  const data::CityLevelupConfig *levelup_config_ptr; // [rsp+30h] [rbp-200h]
  proto::CityInfo *city_info; // [rsp+38h] [rbp-1F8h]
  std::string v43; // [rsp+40h] [rbp-1F0h] BYREF
  char v44[464]; // [rsp+60h] [rbp-1D0h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v36._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v36._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 1 10 holder:161 48 4 12 scene_id:171 64 4 12 item_num:178 80 4 11 area_id:186 96 4 11 city"
                        "_id:200 112 4 14 return_num:238 128 8 10 reason:232 160 16 13 scene_ptr:172 192 16 12 area_ptr:1"
                        "92 224 16 12 city_ptr:201 256 16 9 param:223 288 16 13 sub_param:231 320 16 13 add_param:245 352"
                        " 24 17 action_reason:246";
  *(_QWORD *)(v3 + 16) = PlayerCityComp::onLevelupCityReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -219021312;
  v5[536862730] = -219021312;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v43, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x5F2u, v36);
  std::string::~string(&v43);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  SceneComp = Player::getSceneComp(thisa->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    proto::LevelupCityRsp::set_retcode(rsp_0a, 512);
  }
  else
  {
    proto::LevelupCityRsp::set_retcode(rsp_0a, -1);
    *(_DWORD *)(v3 + 48) = proto::LevelupCityReq::scene_id(reqa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    v8 = (unsigned int)Player::getSceneComp(thisa->player_);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 160), v8);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/city/player_city_comp.cpp",
        "onLevelupCityReq",
        175);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             (common::milog::MiLogStream *const)&v43,
             (const char (*)[28])"findScene failed, scene_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      *(_DWORD *)(v3 + 112) = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
    }
    else
    {
      *(_DWORD *)(v3 + 64) = proto::LevelupCityReq::item_num(reqa);
      if ( *(_DWORD *)(v3 + 64) )
      {
        *(_DWORD *)(v3 + 80) = proto::LevelupCityReq::area_id(reqa);
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( !Scene::isAreaUnlocked(v12, *(_DWORD *)(v3 + 80)) )
        {
          proto::LevelupCityRsp::set_retcode(rsp_0a, 508);
        }
        else
        {
          v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          Scene::getArea((Scene *const)(v3 + 192), v13);
          if ( std::operator==<Area>((const std::shared_ptr<Area> *)(v3 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/city/player_city_comp.cpp",
              "onLevelupCityReq",
              195);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)&v43,
                    (const char (*)[16])"getArea fails: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 320));
            v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 320));
            *(_DWORD *)(v3 + 96) = WorldAreaExcelConfigMgr::findAreaCityId(
                                     &v15->design_config.txt_config_mgr.world_area_config_mgr,
                                     *(_DWORD *)(v3 + 80));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 320));
            PlayerCityComp::findCity((const PlayerCityComp *const)(v3 + 224), (__int64)thisa, *(_DWORD *)(v3 + 96));
            if ( std::operator==<City>((const std::shared_ptr<City> *)(v3 + 224), 0LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/city/player_city_comp.cpp",
                "onLevelupCityReq",
                204);
              v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      (common::milog::MiLogStream *const)&v43,
                      (const char (*)[17])"findCity fails: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 96));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v3 + 320));
              p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 320))->design_config.txt_config_mgr.world_area_config_mgr;
              v18 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
              Level = City::getLevel(v18);
              levelup_config_ptr = WorldAreaExcelConfigMgr::findCityLevelupConfig(
                                     p_world_area_config_mgr,
                                     *(_DWORD *)(v3 + 96),
                                     Level + 1);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 320));
              if ( levelup_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&levelup_config_ptr->consume_item.item_id);
                }
                item_id = levelup_config_ptr->consume_item.item_id;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v3 + 320));
                v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 320));
                v21 = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(
                        &v20->design_config.txt_config_mgr.world_area_config_mgr,
                        *(_DWORD *)(v3 + 48)) != *(_DWORD *)(v3 + 48);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 320));
                if ( v21 )
                {
                  proto::LevelupCityRsp::set_retcode(rsp_0a, 559);
                }
                else
                {
                  *(_QWORD *)(v3 + 256) = 0LL;
                  *(_QWORD *)(v3 + 264) = 0LL;
                  *(_DWORD *)(v3 + 256) = item_id;
                  *(_DWORD *)(v3 + 260) = *(_DWORD *)(v3 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&thisa->player_);
                  ItemComp = Player::getItemComp(thisa->player_);
                  if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 256)) )
                  {
                    proto::LevelupCityRsp::set_retcode(rsp_0a, 609);
                  }
                  else
                  {
                    *(_QWORD *)(v3 + 288) = 0LL;
                    *(_QWORD *)(v3 + 296) = 0LL;
                    *(_DWORD *)(v3 + 288) = item_id;
                    *(_DWORD *)(v3 + 292) = *(_DWORD *)(v3 + 64);
                    SubItemReason::SubItemReason((SubItemReason *const)(v3 + 128), ACTION_REASON_CITY_LEVELUP);
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&thisa->player_);
                    v23 = Player::getItemComp(thisa->player_);
                    PlayerItemComp::subItem(v23, (const ItemParam *)(v3 + 288), (const SubItemReason *)(v3 + 128));
                    p_player = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    v25 = *(_DWORD *)(v3 + 64);
                    v26 = *(_DWORD *)(v3 + 48);
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    {
                      p_player = (City *)&thisa->player_;
                      __asan_report_load8(&thisa->player_);
                    }
                    City::levelupWithCrystal(p_player, thisa->player_, v26, v25);
                    v27 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    *(_DWORD *)(v3 + 112) = City::returnLeftCrystalWhenFullLevel(v27);
                    if ( *(_DWORD *)(v3 + 112) )
                    {
                      if ( *(_DWORD *)(v3 + 112) >= *(_DWORD *)(v3 + 64) )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&v43,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/city/player_city_comp.cpp",
                          "onLevelupCityReq",
                          243);
                        v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                (common::milog::MiLogStream *const)&v43,
                                (const char (*)[14])byte_2615AB80);
                        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v28,
                                (const unsigned int *)(v3 + 112));
                        v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                v29,
                                (const char (*)[22])"is more than sub_num:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v30,
                          (const unsigned int *)(v3 + 64));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
                      }
                      *(_QWORD *)(v3 + 320) = 0LL;
                      *(_QWORD *)(v3 + 328) = 0LL;
                      *(_DWORD *)(v3 + 320) = item_id;
                      *(_DWORD *)(v3 + 324) = *(_DWORD *)(v3 + 112);
                      ActionReason::ActionReason(
                        (ActionReason *const)(v3 + 352),
                        ACTION_REASON_CITY_LEVELUP_RETURN,
                        ITEM_LIMIT_CITY_UPGRADE);
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&thisa->player_);
                      v31 = Player::getItemComp(thisa->player_);
                      PlayerItemComp::addItem(v31, (const ItemParam *)(v3 + 320), (const ActionReason *)(v3 + 352), 0LL);
                    }
                    proto::LevelupCityRsp::set_retcode(rsp_0a, 0);
                    proto::LevelupCityRsp::set_scene_id(rsp_0a, *(_DWORD *)(v3 + 48));
                    proto::LevelupCityRsp::set_area_id(rsp_0a, *(_DWORD *)(v3 + 80));
                    city_info = proto::LevelupCityRsp::mutable_city_info(rsp_0a);
                    proto::CityInfo::set_city_id(city_info, *(_DWORD *)(v3 + 96));
                    v32 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    v33 = City::getLevel(v32);
                    proto::CityInfo::set_level(city_info, v33);
                    v34 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    CrystalNum = City::getCrystalNum(v34);
                    proto::CityInfo::set_crystal_num(city_info, CrystalNum);
                  }
                }
              }
              else
              {
                proto::LevelupCityRsp::set_retcode(rsp_0a, 507);
              }
            }
            std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 224));
          }
          std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v3 + 192));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/city/player_city_comp.cpp",
          "onLevelupCityReq",
          181);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)&v43,
          (const char (*)[20])off_2615AAC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v43);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 261: range 00000000175CED2C-00000000175CF39D
__int64 __fastcall PlayerCityComp::levelupCityByGm(
        PlayerCityComp *const this,
        uint32_t scene_id,
        uint32_t city_id,
        proto::LevelupCityRsp *rsp_0)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  unsigned int v10; // r14d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v11; // rax
  PlayerCityComp *CityComp; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  City *p_player; // rdi
  uint32_t v25; // edx
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t Level; // eax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t CrystalNum; // eax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  uint32_t cur_level; // [rsp+24h] [rbp-FCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  const data::CityLevelupConfig *levelup_config_ptr; // [rsp+30h] [rbp-F0h]
  proto::CityInfo *city_info; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 scene_id:260 48 4 11 city_id:260 64 8 8 iter:263 96 16 12 city_ptr:273";
  *(_QWORD *)(v4 + 16) = PlayerCityComp::levelupCityByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = scene_id;
  *(_DWORD *)(v4 + 48) = city_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v7->design_config.txt_config_mgr.world_area_config_mgr.city_to_scene_ids_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v39);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v8->design_config.txt_config_mgr.world_area_config_mgr.city_to_scene_ids_map)._M_cur;
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v4 + 64),
         &__y);
  std::shared_ptr<Config>::~shared_ptr(&v39);
  if ( v9 )
  {
    v10 = 560;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v4 + 64));
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &v11->second,
            (const unsigned int *)(v4 + 32)) )
    {
      v10 = 561;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      CityComp = Player::getCityComp(this->player_);
      PlayerCityComp::findCity((const PlayerCityComp *const)(v4 + 96), (__int64)CityComp, *(_DWORD *)(v4 + 48));
      if ( std::operator==<City>((const std::shared_ptr<City> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/city/player_city_comp.cpp",
          "levelupCityByGm",
          276);
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v40,
                (const char (*)[15])"findCity uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" city_id: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v10 = -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        cur_level = City::getLevel(v17);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        levelup_config_ptr = WorldAreaExcelConfigMgr::findCityLevelupConfig(
                               &v18->design_config.txt_config_mgr.world_area_config_mgr,
                               *(_DWORD *)(v4 + 48),
                               cur_level + 1);
        std::shared_ptr<Config>::~shared_ptr(&v39);
        if ( levelup_config_ptr )
        {
          p_player = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v25 = *(_DWORD *)(v4 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          {
            p_player = (City *)&this->player_;
            __asan_report_load8(&this->player_);
          }
          City::levelupByGm(p_player, this->player_, v25);
          proto::LevelupCityRsp::set_retcode(rsp_0, 0);
          proto::LevelupCityRsp::set_scene_id(rsp_0, *(_DWORD *)(v4 + 32));
          city_info = proto::LevelupCityRsp::mutable_city_info(rsp_0);
          proto::CityInfo::set_city_id(city_info, *(_DWORD *)(v4 + 48));
          v26 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          Level = City::getLevel(v26);
          proto::CityInfo::set_level(city_info, Level);
          v28 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          CrystalNum = City::getCrystalNum(v28);
          proto::CityInfo::set_crystal_num(city_info, CrystalNum);
          v10 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/city/player_city_comp.cpp",
            "levelupCityByGm",
            283);
          v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v40,
                  (const char (*)[39])"findCityLevelupConfig failed, city_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v4 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" level:");
          val = cur_level + 1;
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v23, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v40);
          v10 = -1;
        }
      }
      std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v4 + 96));
    }
  }
  result = v10;
  if ( v41 == (char *)v4 )
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
  return result;
};
