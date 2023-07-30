// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp

// Line 32: range 000000001513F95E-000000001513FADB
int32_t __cdecl LanV3BoatMultistagePlay::toClient(
        const LanV3BoatMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::LanV3BoatStageInfo *lan_v3_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "toClient",
      35);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v5,
      (const char (*)[52])"[LAN_V3_MULTI] SceneMultistagePlay::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    lan_v3_info = proto::MultistagePlayInfo::mutable_lan_v3_boat_info(info);
    if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::LanV3BoatStageInfo::set_map_id(lan_v3_info, this->map_id_);
    if ( *(char *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_single_);
    proto::LanV3BoatStageInfo::set_is_single(lan_v3_info, this->is_single_);
    v3 = proto::LanV3BoatStageInfo::mutable_player_uid_list(lan_v3_info);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, v3);
    return 0;
  }
};

// Line 46: range 000000001513FADC-000000001514099E
int32_t __cdecl LanV3BoatMultistagePlay::initByParamMap(
        LanV3BoatMultistagePlay *const this,
        const std::unordered_map<std::string,unsigned int> *param_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *p_y; // rsi
  __int64 v8; // rax
  uint32_t v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t gallery_id; // ecx
  char v13; // dl
  bool v14; // dl
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *v15; // rsi
  __int64 v16; // rax
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *v20; // rsi
  __int64 v21; // rax
  uint32_t v22; // ecx
  char v23; // al
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *v24; // rsi
  __int64 v25; // rax
  uint32_t v26; // ecx
  char v27; // dl
  bool v28; // dl
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *v29; // rsi
  __int64 v30; // rax
  bool v31; // cl
  char v32; // al
  Player *v33; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  __int64 activity_id; // rsi
  uint32_t SeriesIdByActivityId; // edx
  char v37; // al
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-141h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> __y; // [rsp+20h] [rbp-140h] BYREF
  const data::LanV3BoatExcelConfig *boat_config_ptr; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v43; // [rsp+30h] [rbp-130h] BYREF
  char v44[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 map_id_iter:55 64 8 13 match_iter:73 96 8 16 activity_iter:82 128 8 16 schedule_iter:9"
                        "1 160 8 18 is_single_iter:100 192 16 14 player_ptr:109";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::initByParamMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202178560;
  if ( std::set<unsigned int>::empty(&this->player_uid_set_) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "initByParamMap",
      49);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v43,
      (const char (*)[35])"[LAN_V3_MULTI] player set is empty");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v5 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "initByParamMap",
      52);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v43,
           (const char (*)[24])"[LAN_V3_MULTI] uid set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->player_uid_set_);
    common::milog::MiLogStream::~MiLogStream(&v43);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "map_id", &__a);
    *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::find(
                                                                                   param_map,
                                                                                   (const std::unordered_map<std::string,unsigned int>::key_type *)&v43);
    std::string::~string(&v43);
    std::allocator<char>::~allocator(&__a);
    __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
    p_y = &__y;
    if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "initByParamMap",
        58);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v43,
        (const char (*)[36])"[LAN_V3_MULTI] param have no map_id");
      common::milog::MiLogStream::~MiLogStream(&v43);
      v5 = -1;
    }
    else
    {
      v8 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v8 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v8 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = __asan_report_load4();
      }
      v9 = *(_DWORD *)(v8 + 32);
      v10 = *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(p_y) = v10 != 0;
        __asan_report_store4(&this->map_id_, p_y, (_BYTE)this + 96);
      }
      this->map_id_ = v9;
      boat_config_ptr = LanV3BoatMultistagePlay::findBoatConfig(this);
      if ( boat_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        gallery_id = boat_config_ptr->gallery_id;
        v13 = *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000);
        LOBYTE(p_y) = v13 != 0;
        v14 = v13 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v13;
        if ( v14 )
          __asan_report_store4(&this->gallery_id_, p_y, v14);
        this->gallery_id_ = gallery_id;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "match_id", &__a);
        *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,unsigned int>::find(
                                                                                       param_map,
                                                                                       (const std::unordered_map<std::string,unsigned int>::key_type *)&v43);
        std::string::~string(&v43);
        std::allocator<char>::~allocator(&__a);
        __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
        v15 = &__y;
        if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
            "initByParamMap",
            76);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v43,
            (const char (*)[38])"[LAN_V3_MULTI] param have no match_id");
          common::milog::MiLogStream::~MiLogStream(&v43);
          v5 = -1;
        }
        else
        {
          v16 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)(v16 + 32) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v16 + 32) >> 3) + 0x7FFF8000) <= 3 )
          {
            v16 = __asan_report_load4();
          }
          v17 = *(_DWORD *)(v16 + 32);
          v18 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
          LOBYTE(v15) = v18 != 0;
          v19 = v18 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v18;
          if ( v19 )
            __asan_report_store4(&this->match_id_, v15, v19);
          this->match_id_ = v17;
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v43, aActivityId_9[0], &__a);
          *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,unsigned int>::find(
                                                                                         param_map,
                                                                                         (const std::unordered_map<std::string,unsigned int>::key_type *)&v43);
          std::string::~string(&v43);
          std::allocator<char>::~allocator(&__a);
          __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
          v20 = &__y;
          if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
                 (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 96),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
              "initByParamMap",
              85);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v43,
              (const char (*)[41])"[LAN_V3_MULTI] param have no activity_id");
            common::milog::MiLogStream::~MiLogStream(&v43);
            v5 = -1;
          }
          else
          {
            v21 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)(v21 + 32) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(v21 + 32) >> 3) + 0x7FFF8000) <= 3 )
            {
              v21 = __asan_report_load4();
            }
            v22 = *(_DWORD *)(v21 + 32);
            v23 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
            if ( v23 != 0 && v23 <= 3 )
            {
              LOBYTE(v20) = v23 != 0;
              __asan_report_store4(&this->activity_id_, v20, (_BYTE)this + 104);
            }
            this->activity_id_ = v22;
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "schedule_id", &__a);
            *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 128) = std::unordered_map<std::string,unsigned int>::find(
                                                                                            param_map,
                                                                                            (const std::unordered_map<std::string,unsigned int>::key_type *)&v43);
            std::string::~string(&v43);
            std::allocator<char>::~allocator(&__a);
            __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
            v24 = &__y;
            if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
                   (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 128),
                   &__y) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
                "initByParamMap",
                94);
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v43,
                (const char (*)[41])"[LAN_V3_MULTI] param have no schedule_id");
              common::milog::MiLogStream::~MiLogStream(&v43);
              v5 = -1;
            }
            else
            {
              v25 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 128));
              if ( *(_BYTE *)(((unsigned __int64)(v25 + 32) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(v25 + 32) >> 3) + 0x7FFF8000) <= 3 )
              {
                v25 = __asan_report_load4();
              }
              v26 = *(_DWORD *)(v25 + 32);
              v27 = *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000);
              LOBYTE(v24) = v27 != 0;
              v28 = v27 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v27;
              if ( v28 )
                __asan_report_store4(&this->schedule_id_, v24, v28);
              this->schedule_id_ = v26;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "is_single", &__a);
              *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 160) = std::unordered_map<std::string,unsigned int>::find(
                                                                                              param_map,
                                                                                              (const std::unordered_map<std::string,unsigned int>::key_type *)&v43);
              std::string::~string(&v43);
              std::allocator<char>::~allocator(&__a);
              __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
              v29 = &__y;
              if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
                     (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 160),
                     &__y) )
              {
                common::milog::MiLogStream::create(
                  &v43,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
                  "initByParamMap",
                  103);
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v43,
                  (const char (*)[39])"[LAN_V3_MULTI] param have no is_single");
                common::milog::MiLogStream::~MiLogStream(&v43);
                v5 = -1;
              }
              else
              {
                v30 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 160));
                if ( *(_BYTE *)(((unsigned __int64)(v30 + 32) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)(v30 + 32) >> 3) + 0x7FFF8000) <= 3 )
                {
                  v30 = __asan_report_load4();
                }
                v31 = *(_DWORD *)(v30 + 32) != 0;
                v32 = *(_BYTE *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000);
                if ( v32 < 0 )
                {
                  LOBYTE(v29) = v32 != 0;
                  __asan_report_store1(&this->is_single_, v29, &this->is_single_);
                }
                this->is_single_ = v31;
                LanV3BoatMultistagePlay::initPlayerBornOrder(this);
                if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Scene::getOwnPlayer((const Scene *const)(v2 + 192));
                if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 192)) )
                {
                  common::milog::MiLogStream::create(
                    &v43,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
                    "initByParamMap",
                    112);
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v43,
                    (const char (*)[33])"[LAN_V3_MULTI] owner player null");
                  common::milog::MiLogStream::~MiLogStream(&v43);
                  v5 = 0;
                }
                else
                {
                  v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  ExhibitionComp = Player::getExhibitionComp(v33);
                  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  activity_id = this->activity_id_;
                  SeriesIdByActivityId = PlayerExhibitionComp::getSeriesIdByActivityId(ExhibitionComp, activity_id);
                  v37 = *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000);
                  if ( v37 != 0 && v37 <= 3 )
                  {
                    LOBYTE(activity_id) = v37 != 0;
                    __asan_report_store4(&this->series_id_, activity_id, SeriesIdByActivityId);
                  }
                  this->series_id_ = SeriesIdByActivityId;
                  v5 = 0;
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
              }
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "initByParamMap",
          67);
        v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v43,
                (const char (*)[49])"[LAN_V3_MULTI] can not find map config, map_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->map_id_);
        common::milog::MiLogStream::~MiLogStream(&v43);
        v5 = -1;
      }
    }
  }
  result = v5;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 120: range 00000000151409A0-00000000151409ED
int32_t __cdecl LanV3BoatMultistagePlay::initStage(
        LanV3BoatMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  int32_t ret; // [rsp+3Ch] [rbp-4h]

  ret = SceneMultistagePlay::initStage(this, stage_type, duration, stage_name, param_table);
  if ( ret )
    return ret;
  else
    return 0;
};

// Line 130: range 0000000015140B40-00000000151414DE
void __cdecl LanV3BoatMultistagePlay::onStageStart(LanV3BoatMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  data::MultistageStageType stage_type; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int v7; // r14d
  std::pair<Vector3,Vector3> *v8; // rax
  SceneTransferGuardComp *TransferGuardComp; // r14
  common::milog::MiLogStream *v10; // rax
  SceneTransferGuardComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t ret; // [rsp+14h] [rbp-27Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-278h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-270h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-268h]
  std::enable_shared_from_this<SceneMultistagePlay> v19; // [rsp+30h] [rbp-260h] BYREF
  std::pair<Vector3,Vector3> __p; // [rsp+40h] [rbp-250h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-230h] BYREF
  char v22[528]; // [rsp+80h] [rbp-210h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(480LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 7 uid:140 48 12 12 tran_pos:139 80 12 12 tran_rot:139 112 16 9 s_ptr:153 144 16 9 w_ptr:1"
                        "53 176 232 9 param:138";
  *(_QWORD *)(v1 + 16) = LanV3BoatMultistagePlay::onStageStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = 0x4000000;
  v3[536862722] = 62194;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862732] = -218103808;
  v3[536862733] = -202116109;
  v3[536862734] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE )
  {
    LanV3BoatMultistagePlay::settleLanV3Boat(this);
    goto LABEL_36;
  }
  if ( stage_type > MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE )
  {
LABEL_35:
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onStageStart",
      188);
    v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v21,
            (const char (*)[37])"[LAN_V3_MULTI] unknown stage_type_: ");
    common::milog::MiLogStream::operator<<<data::MultistageStageType,(data::MultistageStageType*)0>(
      v14,
      &this->stage_type_);
    common::milog::MiLogStream::~MiLogStream(&v21);
LABEL_36:
    if ( ret )
      LanV3BoatMultistagePlay::endLanV3BoatPlay(this, 0);
    goto LABEL_38;
  }
  if ( stage_type != MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE )
  {
    if ( stage_type == MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY )
    {
      if ( LanV3BoatMultistagePlay::tryStartGallery(this) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "onStageStart",
          175);
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v21,
                (const char (*)[49])"[LAN_V3_MULTI] tryStartGallery failed, map_id_: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->map_id_);
        common::milog::MiLogStream::~MiLogStream(&v21);
        ret = -1;
      }
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  TransferGuardParam::TransferGuardParam((TransferGuardParam *const)(v1 + 176));
  Vector3::Vector3((Vector3 *const)(v1 + 48), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v1 + 80), 0.0, 0.0, 0.0);
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v5;
    if ( LanV3BoatMultistagePlay::getPlayerBornPos(
           this,
           *(_DWORD *)(v1 + 32),
           (Vector3 *)(v1 + 48),
           (Vector3 *)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onStageStart",
        144);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v21,
             (const char (*)[45])"[LAN_V3_MULTI] getPlayerBornPos failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v7 = 0;
      goto LABEL_30;
    }
    std::make_pair<Vector3 &,Vector3 &>(&__p, (Vector3 *)(v1 + 48), (Vector3 *)(v1 + 80));
    v8 = std::map<unsigned int,std::pair<Vector3,Vector3>>::operator[](
           (std::map<unsigned int,std::pair<Vector3,Vector3>> *const)(v1 + 176),
           (const std::map<unsigned int,std::pair<Vector3,Vector3>>::key_type *)(v1 + 32));
    std::pair<Vector3,Vector3>::operator=(v8, &__p);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  *(_BYTE *)(v1 + 328) = 1;
  *(_DWORD *)(v1 + 332) = 93;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 340) = this->match_id_;
  std::set<proto::EnterReason>::emplace<proto::EnterReason&>(
    (std::set<proto::EnterReason> *const)(v1 + 224),
    (proto::EnterReason *)(v1 + 332),
    (proto::EnterReason *)(v1 + 332));
  std::enable_shared_from_this<SceneMultistagePlay>::shared_from_this(&v19);
  std::dynamic_pointer_cast<LanV3BoatMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v1 + 112));
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&v19);
  std::weak_ptr<LanV3BoatMultistagePlay>::weak_ptr<LanV3BoatMultistagePlay,void>(
    (std::weak_ptr<LanV3BoatMultistagePlay> *const)(v1 + 144),
    (const std::shared_ptr<LanV3BoatMultistagePlay> *)(v1 + 112));
  std::weak_ptr<LanV3BoatMultistagePlay>::weak_ptr(
    (std::weak_ptr<LanV3BoatMultistagePlay> *const)&v19,
    (const std::weak_ptr<LanV3BoatMultistagePlay> *)(v1 + 144));
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::operator=<LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}>(
    (std::function<void(const std::set<unsigned int>&,unsigned int,bool)> *const)(v1 + 344),
    (LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *)&v19);
  LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::~set((LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const)&v19);
  std::weak_ptr<LanV3BoatMultistagePlay>::~weak_ptr((std::weak_ptr<LanV3BoatMultistagePlay> *const)(v1 + 144));
  std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)(v1 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
  std::any::any((std::any *const)&v19);
  LOBYTE(TransferGuardComp) = SceneTransferGuardComp::startTransferGuard(
                                TransferGuardComp,
                                (const TransferGuardParam *)(v1 + 176),
                                (std::any *)&v19) != 0;
  std::any::~any((std::any *const)&v19);
  if ( (_BYTE)TransferGuardComp )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onStageStart",
      156);
    v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v21,
            (const char (*)[52])"[LAN_V3_MULTI] startTransferGuard failed, map_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    ret = -1;
    v7 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Scene::getTransferGuardComp(this->scene_);
    if ( SceneTransferGuardComp::attachTransferGuard(v11) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onStageStart",
        162);
      v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v21,
              (const char (*)[53])"[LAN_V3_MULTI] attachTransferGuard failed, map_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->map_id_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      ret = -1;
    }
    else
    {
      LanV3BoatMultistagePlay::startSubChatChannel(this);
    }
    v7 = 1;
  }
LABEL_30:
  TransferGuardParam::~TransferGuardParam((TransferGuardParam *const)(v1 + 176));
  if ( v7 )
    goto LABEL_36;
LABEL_38:
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 153: range 00000000151409EE-0000000015140B22
void __cdecl LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::operator()(
        const LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const __closure,
        const std::set<unsigned int> *enter_uid_set,
        uint32_t enter_uid,
        bool is_new_arrive)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  LanV3BoatMultistagePlay *v7; // rdi
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 s_ptr:153";
  *(_QWORD *)(v4 + 16) = LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<LanV3BoatMultistagePlay>::lock((const std::weak_ptr<LanV3BoatMultistagePlay> *const)(v4 + 32));
  if ( std::operator!=<LanV3BoatMultistagePlay>((const std::shared_ptr<LanV3BoatMultistagePlay> *)(v4 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    LanV3BoatMultistagePlay::onPlayerPostEnterScene(v7, enter_uid_set, enter_uid, is_new_arrive);
  }
  std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 153: range 000000001514CF54-000000001514CF79
void __cdecl LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::set(
        LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const this,
        LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *a2)
{
  std::weak_ptr<LanV3BoatMultistagePlay>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 153: range 00000000151686E6-000000001516870B
void __cdecl LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::set(
        LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const this,
        const LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *a2)
{
  std::weak_ptr<LanV3BoatMultistagePlay>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 153: range 0000000015140B24-0000000015140B3E
void __cdecl LanV3BoatMultistagePlay::onStageStart(void)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::~set(
        LanV3BoatMultistagePlay::onStageStart::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const this)
{
  std::weak_ptr<LanV3BoatMultistagePlay>::~weak_ptr(&this->__w_ptr);
};

// Line 200: range 00000000151414E0-0000000015141883
int32_t __cdecl LanV3BoatMultistagePlay::tryStartGallery(LanV3BoatMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  SceneGalleryComp *GalleryComp; // rdi
  std::set<unsigned int> *p_entered_uid_set; // rcx
  common::milog::MiLogStream *v5; // rax
  SceneGalleryComp *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-30h] BYREF

  if ( LanV3BoatMultistagePlay::checkCanStartGallery(this) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "tryStartGallery",
      203);
    v1 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v12,
           (const char (*)[54])"[LAN_V3_MULTI] checkCanStartGallery failed, map_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GalleryComp = Scene::getGalleryComp(this->scene_);
    p_entered_uid_set = &this->entered_uid_set_;
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
    {
      GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::initGallery(GalleryComp, this->gallery_id_, p_entered_uid_set) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "tryStartGallery",
        208);
      v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v12,
             (const char (*)[48])"[LAN_V3_MULTI] gallery init failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( (unsigned int)SceneGalleryComp::startGallery(v6, this->gallery_id_) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "tryStartGallery",
          213);
        v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v12,
               (const char (*)[49])"[LAN_V3_MULTI] gallery start failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v12);
        return -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "tryStartGallery",
          216);
        v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v12,
               (const char (*)[29])"[LAN_V3_MULTI] startGallery:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", map_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->map_id_);
        common::milog::MiLogStream::~MiLogStream(&v12);
        return 0;
      }
    }
  }
};

// Line 221: range 0000000015142002-0000000015142104
int32_t __cdecl LanV3BoatMultistagePlay::checkCanStartGallery(LanV3BoatMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  int32_t ret; // [rsp+1Ch] [rbp-34h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<LanV3BoatMultistagePlay::checkCanStartGallery(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (LanV3BoatMultistagePlay::checkCanStartGallery::<lambda(Player&)>)this);
  ret = LanV3BoatMultistagePlay::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  if ( !LanV3BoatMultistagePlay::checkPlayerCountCanContinue(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "checkCanStartGallery",
      260);
    v1 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[61])"[LAN_V3_MULTI] checkPlayerCountCanContinue failed, map_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    return -1;
  }
  return ret;
};

// Line 222: range 0000000015141884-0000000015142000
ForeachPolicy __cdecl LanV3BoatMultistagePlay::checkCanStartGallery(void)::{lambda(Player &)#1}::operator()(
        const LanV3BoatMultistagePlay::checkCanStartGallery::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  ForeachPolicy v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t Uid; // r14d
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  ForeachPolicy result; // eax
  unsigned int v25; // [rsp+18h] [rbp-F8h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:224 64 16 22 vehicle_gadget_ptr:232 96 16 27 gadget_vehicle_comp_ptr:238 128 16 13 owner_ptr:244";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::checkCanStartGallery(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &__closure->__this->entered_uid_set_,
          (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "operator()",
      228);
    v5 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
           &v27,
           (const char (*)[86])"[LAN_V3_MULTI] player in player_uid_set_ and scene but not in entered_uid_set_, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = FOREACH_CONTINUE;
  }
  else
  {
    Player::getVehicleComp(player);
    PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v2 + 64));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "operator()",
        235);
      v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v27,
             (const char (*)[60])"[LAN_V3_MULTI] player not in vehicle when play start, uid: ");
      val = Player::getUid(player);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", map_id: ");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &__closure->__this->map_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v6 = FOREACH_BREAK;
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 96));
      if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "operator()",
          241);
        v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v27,
                (const char (*)[52])"[LAN_V3_MULTI] cannot find GadgetVehicleComp, uid: ");
        val = Player::getUid(player);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", map_id: ");
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__closure->__this->map_id_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = FOREACH_BREAK;
      }
      else
      {
        std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        GadgetVehicleComp::getOwnerPlayer((const GadgetVehicleComp *const)(v2 + 128));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
            "operator()",
            247);
          v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v27,
                  (const char (*)[58])"[LAN_V3_MULTI] vehicle failed to find owner player, uid: ");
          val = Player::getUid(player);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", map_id: ");
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &__closure->__this->map_id_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v6 = FOREACH_BREAK;
        }
        else
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Uid = Player::getUid(v16);
          if ( Uid == Player::getUid(player) )
          {
            v6 = FOREACH_CONTINUE;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
              "operator()",
              252);
            v18 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v27,
                    (const char (*)[51])"[LAN_V3_MULTI] player is in other's vehicle, uid: ");
            v25 = Player::getUid(player);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v25);
            v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v19,
                    (const char (*)[14])", owner_uid: ");
            v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            val = Player::getUid(v21);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])", map_id: ");
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &__closure->__this->map_id_);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v6 = FOREACH_BREAK;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
      }
      std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v2 + 96));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  }
  result = v6;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 267: range 0000000015142106-00000000151425E8
void __cdecl LanV3BoatMultistagePlay::onStageEnd(LanV3BoatMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  data::MultistageStageType stage_type; // eax
  common::milog::MiLogStream *v7; // rax
  std::allocator<char> __a; // [rsp+17h] [rbp-B9h] BYREF
  const data::LanV3BoatExcelConfig *boat_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 duration:279 64 16 15 param_table:280";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::onStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( is_succ )
  {
    boat_config_ptr = LanV3BoatMultistagePlay::findBoatConfig(this);
    if ( !boat_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onStageEnd",
        276);
      v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v10,
             (const char (*)[49])"[LAN_V3_MULTI] cannot find boat config, map_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->map_id_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      goto LABEL_23;
    }
    *(_DWORD *)(v2 + 48) = 0;
    luabind::adl::object::object((luabind::adl::object *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stage_type = this->stage_type_;
    if ( stage_type == MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE )
    {
      LanV3BoatMultistagePlay::endLanV3BoatPlay(this, 1);
    }
    else
    {
      if ( stage_type > MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE )
        goto LABEL_21;
      if ( stage_type == MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE )
      {
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->play_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)boat_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->play_time >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = boat_config_ptr->play_time;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v10, byte_25685560, &__a);
        SceneMultistagePlay::startStage(
          this,
          MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY,
          (uint32_t *)(v2 + 48),
          (const std::string *)&v10,
          (const luabind::adl::object *)(v2 + 64));
        std::string::~string(&v10);
        std::allocator<char>::~allocator(&__a);
        goto LABEL_22;
      }
      if ( stage_type == MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY )
      {
        LanV3BoatMultistagePlay::endLanV3BoatGallery(this, 0);
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->settle_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->settle_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = boat_config_ptr->settle_time;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v10, byte_25685560, &__a);
        SceneMultistagePlay::startStage(
          this,
          MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE,
          (uint32_t *)(v2 + 48),
          (const std::string *)&v10,
          (const luabind::adl::object *)(v2 + 64));
        std::string::~string(&v10);
        std::allocator<char>::~allocator(&__a);
      }
      else
      {
LABEL_21:
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "onStageEnd",
          307);
        v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v10,
               (const char (*)[37])"[LAN_V3_MULTI] unknown stage_type_: ");
        common::milog::MiLogStream::operator<<<data::MultistageStageType,(data::MultistageStageType*)0>(
          v7,
          &this->stage_type_);
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
LABEL_22:
    luabind::adl::object::~object((luabind::adl::object *const)(v2 + 64));
  }
LABEL_23:
  if ( v11 == (char *)v2 )
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
};

// Line 314: range 00000000151427C0-0000000015142C4A
void __cdecl LanV3BoatMultistagePlay::onEnd(LanV3BoatMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  SeaLampV3Activity *v11; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:319 64 16 16 activity_ptr:326";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::onEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  LanV3BoatMultistagePlay::unregisterPlayGroup(this);
  LanV3BoatMultistagePlay::endLanV3BoatGallery(this, !is_succ);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onEnd",
      322);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v14,
      (const char (*)[33])"[LAN_V3_MULTI] owner player null");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ActivityComp = (unsigned int)Player::getActivityComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::findActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v2 + 64), ActivityComp);
    if ( std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onEnd",
        329);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v14,
             (const char (*)[49])"[LAN_V3_MULTI] findActivity failed, activity_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", uid: ");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v11 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      SeaLampV3Activity::onLanV3BoatPlayEnd(v11);
      LanV3BoatMultistagePlay::endSubChatChannel(this);
      std::function<ForeachPolicy ()(Player &)>::function<LanV3BoatMultistagePlay::onEnd(bool)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v14,
        (LanV3BoatMultistagePlay::onEnd::<lambda(Player&)>)this);
      ret = LanV3BoatMultistagePlay::foreachPlayer(this, (std::function<ForeachPolicy(Player&)> *)&v14);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v14);
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onEnd",
        349);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])"[LAN_V3_MULTI] onEnd");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
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
};

// Line 337: range 00000000151425EA-00000000151427BF
ForeachPolicy __cdecl LanV3BoatMultistagePlay::onEnd(bool)::{lambda(Player &)#1}::operator()(
        const LanV3BoatMultistagePlay::onEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  ForeachPolicy result; // eax
  PlayerSocialComp *SocialComp; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:339";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::onEnd(bool)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &__closure->__this->entered_uid_set_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "operator()",
      343);
    v5 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
           &v9,
           (const char (*)[86])"[LAN_V3_MULTI] player in player_uid_set_ and scene but not in entered_uid_set_, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    SocialComp = Player::getSocialComp(player);
    PlayerSocialComp::unshieldChatChannel(SocialComp, 6u);
  }
  result = FOREACH_CONTINUE;
  if ( v10 == (char *)v2 )
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

// Line 353: range 0000000015142C4C-0000000015142C56
void __cdecl LanV3BoatMultistagePlay::onClear(LanV3BoatMultistagePlay *const this)
{
  ;
};

// Line 358: range 0000000015142C58-00000000151431F3
void __cdecl LanV3BoatMultistagePlay::onPlayerLeaveWorld(
        LanV3BoatMultistagePlay *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerSocialComp *SocialComp; // rax
  common::milog::MiLogStream *v9; // rax
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v13; // rax
  char v14; // al
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:359 64 16 13 group_ptr:378";
  *(_QWORD *)(v3 + 16) = LanV3BoatMultistagePlay::onPlayerLeaveWorld;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->player_uid_set_,
          (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onPlayerLeaveWorld",
      363);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v15,
           (const char (*)[43])"[LAN_V3_MULTI] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               &this->entered_uid_set_,
               (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onPlayerLeaveWorld",
      369);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v15,
           (const char (*)[42])"[LAN_V3_MULTI] leave_uid not enter! ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    std::set<unsigned int>::erase(&this->entered_uid_set_, (const std::set<unsigned int>::key_type *)(v3 + 48));
    SocialComp = Player::getSocialComp(player);
    PlayerSocialComp::unshieldChatChannel(SocialComp, 6u);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onPlayerLeaveWorld",
      376);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v15,
           (const char (*)[39])"[LAN_V3_MULTI] player leave play, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v3 + 64));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onPlayerLeaveWorld",
        381);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v15,
        (const char (*)[33])"[LAN_V3_MULTI] group_ptr nullptr");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->stage_type_ == MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE
        && std::set<unsigned int>::empty(&this->entered_uid_set_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        play_index = this->play_index_;
        v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        SceneMultistagePlayComp::endPlay(MultistagePlayComp, v13, play_index, 1);
      }
      else
      {
        if ( LanV3BoatMultistagePlay::checkPlayerCountCanContinue(this) )
          goto LABEL_27;
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->stage_type_ == MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY )
          v14 = 1;
        else
LABEL_27:
          v14 = 0;
        if ( v14 )
          LanV3BoatMultistagePlay::endLanV3BoatPlay(this, 0);
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  }
  if ( v16 == (char *)v3 )
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

// Line 404: range 00000000151431F4-0000000015143378
void __fastcall LanV3BoatMultistagePlay::onAvatarDie(LanV3BoatMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:403";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::onAvatarDie;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->entered_uid_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    LanV3BoatMultistagePlay::handleExceptionKickPlayer(this, *(_DWORD *)(v2 + 32), LAN_V3_KICK_REASON_AVATAR_DIE);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onAvatarDie",
      411);
    v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v6,
           (const char (*)[53])"[LAN_V3_MULTI] kickPlayer becaue of avatar die, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 416: range 000000001514337A-0000000015143632
bool __cdecl LanV3BoatMultistagePlay::checkPlayerCountCanContinue(const LanV3BoatMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_single_);
  if ( this->is_single_ )
  {
    if ( std::set<unsigned int>::size(&this->entered_uid_set_) != 1 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "checkPlayerCountCanContinue",
        422);
      v1 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             &v8,
             (const char (*)[73])"[LAN_V3_MULTI] entered_uid_set_ not equals to 1 in single mode, map_id: ");
      v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->map_id_);
      v3 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v2,
             (const char (*)[21])", entered_uid_set_: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v3, &this->entered_uid_set_);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return 0;
    }
  }
  else if ( std::set<unsigned int>::size(&this->entered_uid_set_) <= 1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "checkPlayerCountCanContinue",
      432);
    v5 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v8,
           (const char (*)[66])"[LAN_V3_MULTI] not enough player entered in single mode, map_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = Scene::getOwnerUid(this->scene_);
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(&this->entered_uid_set_, &value) )
    return 1;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
    "checkPlayerCountCanContinue",
    439);
  v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         &v8,
         (const char (*)[51])"[LAN_V3_MULTI] owner player didn't enter, map_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->map_id_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0;
};

// Line 446: range 0000000015143634-0000000015143AA0
void __cdecl LanV3BoatMultistagePlay::unregisterPlayGroup(LanV3BoatMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  SceneBlockGroupComp *BlockGroupComp; // r13
  unsigned __int64 v7; // rax
  bool v8; // r13
  common::milog::MiLogStream *v9; // rax
  unsigned int (__fastcall *v10)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+8h] [rbp-E8h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+24h] [rbp-CCh] BYREF
  std::vector<unsigned int> v13; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-90h] BYREF
  char v15[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 group_id:453";
  *(_QWORD *)(v1 + 16) = LanV3BoatMultistagePlay::unregisterPlayGroup;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
  p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                                         (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len
                                       + 4)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) = (std::initializer_list<unsigned int>::iterator)data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3BoatExcelConfig(p_activity_sea_lamp_v3_config_mgr, this->map_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
  if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 5) >> 3)
                  + 0x7FFF8000) != 0
      && (char)(((BYTE4(__l._M_array) + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                                                                      + 5) >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = (*(_DWORD **)((char *)&__l._M_array + 4))[5];
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BlockGroupComp = Scene::getBlockGroupComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v10 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v7;
    LODWORD(__l._M_array) = *(_DWORD *)(v1 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&v13, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l), &__a);
    v8 = v10(BlockGroupComp, &v13, 1LL) != 0;
    std::vector<unsigned int>::~vector(&v13);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "unregisterPlayGroup",
        456);
      v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v14,
             (const char (*)[50])"[LAN_V3_MULTI] unregisterGroups failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "unregisterPlayGroup",
      450);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v14,
           (const char (*)[57])"[LAN_V3_MULTI] findLanV3BoatExcelConfig failed, map_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 462: range 0000000015143AA2-0000000015143D35
void __cdecl LanV3BoatMultistagePlay::endLanV3BoatPlay(LanV3BoatMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t play_index; // r14d
  Group *v6; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  SceneMultistagePlayComp *MultistagePlayComp; // [rsp+8h] [rbp-A8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 group_ptr:465";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::endLanV3BoatPlay;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "endLanV3BoatPlay",
      468);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v9,
      (const char (*)[33])"[LAN_V3_MULTI] group_ptr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    play_index = this->play_index_;
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    SceneMultistagePlayComp::endPlay(MultistagePlayComp, v6, play_index, is_succ);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
    SceneTransferGuardComp::stopTransferGuard(TransferGuardComp, 1);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 478: range 00000000151449FE-0000000015144D55
void __cdecl LanV3BoatMultistagePlay::settleLanV3Boat(LanV3BoatMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-110h] BYREF
  char v6[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 104 10 notify:479";
  *(_QWORD *)(v1 + 16) = LanV3BoatMultistagePlay::settleLanV3Boat;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  proto::LanV3BoatSettleNotify::LanV3BoatSettleNotify((proto::LanV3BoatSettleNotify *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LanV3BoatSettleNotify::set_play_index((proto::LanV3BoatSettleNotify *const)(v1 + 48), this->play_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LanV3BoatSettleNotify::set_stage_type((proto::LanV3BoatSettleNotify *const)(v1 + 48), this->stage_type_);
  if ( *(char *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_single_);
  proto::LanV3BoatSettleNotify::set_is_single((proto::LanV3BoatSettleNotify *const)(v1 + 48), this->is_single_);
  v4 = proto::LanV3BoatSettleNotify::mutable_winner_uid_list((proto::LanV3BoatSettleNotify *const)(v1 + 48));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->winner_uid_set_, v4);
  if ( *(char *)(((unsigned __int64)&this->is_gallery_succ_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gallery_succ_);
  proto::LanV3BoatSettleNotify::set_is_gallery_succ(
    (proto::LanV3BoatSettleNotify *const)(v1 + 48),
    this->is_gallery_succ_);
  std::function<ForeachPolicy ()(Player &)>::function<LanV3BoatMultistagePlay::settleLanV3Boat(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (LanV3BoatMultistagePlay::settleLanV3Boat::<lambda(Player&)>)__PAIR128__(v1 + 48, (unsigned __int64)this));
  LanV3BoatMultistagePlay::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  proto::LanV3BoatSettleNotify::~LanV3BoatSettleNotify((proto::LanV3BoatSettleNotify *const)(v1 + 48));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 486: range 0000000015143D36-00000000151449FD
ForeachPolicy __cdecl LanV3BoatMultistagePlay::settleLanV3Boat(void)::{lambda(Player &)#1}::operator()(
        const LanV3BoatMultistagePlay::settleLanV3Boat::<lambda(Player&)> *const __closure,
        Player *player)
{
  ForeachPolicy v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  LanV3BoatMultistagePlay *this; // rax
  PlayerExhibitionComp *ExhibitionComp; // rsi
  __int64 v9; // rax
  char v10; // dl
  __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> >::reference v11; // rax
  _QWORD *v12; // rdx
  PlayerBasicComp *BasicComp; // r15
  proto::ProfilePicture *v14; // rax
  PlayerBasicComp *v15; // rax
  const std::string *v16; // rax
  PlayerExhibitionComp *v17; // rsi
  __int64 v18; // rax
  char v19; // dl
  unsigned __int64 n; // rax
  uint32_t ActivityComp; // esi
  char v22; // dl
  common::milog::MiLogStream *v23; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int v26; // r15d
  std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t v31; // eax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r15
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+20h] [rbp-210h] BYREF
  uint32_t old_score; // [rsp+24h] [rbp-20Ch]
  std::vector<ExhibitonCardParam>::iterator __for_begin; // [rsp+28h] [rbp-208h] BYREF
  std::vector<ExhibitionScoreParam>::iterator __for_begin_0; // [rsp+30h] [rbp-200h] BYREF
  proto::LanV3BoatSettleInfo *settle_info; // [rsp+38h] [rbp-1F8h]
  std::vector<ExhibitonCardParam> *__for_range; // [rsp+40h] [rbp-1F0h]
  std::vector<ExhibitionScoreParam> *__for_range_0; // [rsp+48h] [rbp-1E8h]
  proto::ExhibitionDisplayInfo *score_info; // [rsp+50h] [rbp-1E0h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+58h] [rbp-1D8h]
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-1D0h] BYREF
  char v49[432]; // [rsp+80h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 7 uid:488 64 4 13 add_score:514 80 4 16 actual_score:533 96 8 9 param:502 128 12 9 param:"
                        "516 160 16 16 activity_ptr:526 192 24 18 card_param_vec:501 256 24 19 score_param_vec:513 320 24"
                        " 19 score_entry_vec:515";
  *(_QWORD *)(v3 + 16) = LanV3BoatMultistagePlay::settleLanV3Boat(void)::{lambda(Player &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219020288;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &__closure->__this->entered_uid_set_,
          (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "operator()",
      492);
    v6 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
           &v48,
           (const char (*)[86])"[LAN_V3_MULTI] player in player_uid_set_ and scene but not in entered_uid_set_, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v2 = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    settle_info = proto::LanV3BoatSettleNotify::add_settle_info_list(__closure->__notify);
    proto::LanV3BoatSettleInfo::set_uid(settle_info, *(_DWORD *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    if ( *(char *)(((unsigned __int64)&__closure->__this->is_gallery_succ_ >> 3) + 0x7FFF8000) < 0 )
      this = (LanV3BoatMultistagePlay *)__asan_report_load1(&__closure->__this->is_gallery_succ_);
    if ( !this->is_gallery_succ_ )
      goto LABEL_58;
    ExhibitionComp = Player::getExhibitionComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (__int64)__closure->__this;
    v10 = *(_BYTE *)(((unsigned __int64)&__closure->__this->series_id_ >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
      v9 = __asan_report_load4();
    PlayerExhibitionComp::getSettleCardVec(
      (std::vector<ExhibitonCardParam> *)(v3 + 192),
      ExhibitionComp,
      *(_DWORD *)(v9 + 488));
    __for_range = (std::vector<ExhibitonCardParam> *)(v3 + 192);
    __for_begin._M_current = std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v3 + 192))._M_current;
    __for_begin_0._M_current = (ExhibitionScoreParam *)std::vector<ExhibitonCardParam>::end((std::vector<ExhibitonCardParam> *const)(v3 + 192))._M_current;
    while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> > *)&__for_begin_0) )
    {
      v11 = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*(&__for_begin);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->card_param + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->card_param + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      *(_QWORD *)(v3 + 96) = *v12;
      card_info = proto::LanV3BoatSettleInfo::add_card_list(settle_info);
      proto::ExhibitionDisplayInfo::set_id(card_info, *(_DWORD *)(v3 + 96));
      proto::ExhibitionDisplayInfo::set_param(card_info, *(_DWORD *)(v3 + 100));
      __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++(&__for_begin);
    }
    BasicComp = Player::getBasicComp(player);
    v14 = proto::LanV3BoatSettleInfo::mutable_profile_picture(settle_info);
    PlayerBasicComp::getProfilePictureToClient(BasicComp, v14);
    v15 = Player::getBasicComp(player);
    v16 = PlayerBasicComp::getNickName[abi:cxx11](v15);
    proto::LanV3BoatSettleInfo::set_nickname(settle_info, v16);
    Player::getOnlineId[abi:cxx11]((std::string *)&v48, player);
    proto::LanV3BoatSettleInfo::set_online_id(settle_info, (std::string *)&v48);
    std::string::~string(&v48);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    proto::LanV3BoatSettleNotify::clear_score_list(__closure->__notify);
    v17 = Player::getExhibitionComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = (__int64)__closure->__this;
    v19 = *(_BYTE *)(((unsigned __int64)&__closure->__this->series_id_ >> 3) + 0x7FFF8000);
    if ( v19 != 0 && v19 <= 3 )
      v18 = __asan_report_load4();
    PlayerExhibitionComp::getSettleScoreVec(
      (std::vector<ExhibitionScoreParam> *)(v3 + 256),
      v17,
      *(_DWORD *)(v18 + 488));
    *(_DWORD *)(v3 + 64) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 320));
    __for_range_0 = (std::vector<ExhibitionScoreParam> *)(v3 + 256);
    __for_begin_0._M_current = std::vector<ExhibitionScoreParam>::begin((std::vector<ExhibitionScoreParam> *const)(v3 + 256))._M_current;
    *(std::vector<ExhibitionScoreParam>::iterator *)(v3 + 96) = std::vector<ExhibitionScoreParam>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>(
              &__for_begin_0,
              (const __gnu_cxx::__normal_iterator<ExhibitionScoreParam*,std::vector<ExhibitionScoreParam> > *)(v3 + 96)) )
    {
      n = (unsigned __int64)__gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator*(&__for_begin_0);
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v3 + 128) = *(_QWORD *)n;
      *(_DWORD *)(v3 + 136) = *(_DWORD *)(n + 8);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      score_info = proto::LanV3BoatSettleNotify::add_score_list(__closure->__notify);
      proto::ExhibitionDisplayInfo::set_id(score_info, *(_DWORD *)(v3 + 128));
      proto::ExhibitionDisplayInfo::set_param(score_info, *(_DWORD *)(v3 + 132));
      proto::ExhibitionDisplayInfo::set_detail_param(score_info, *(_DWORD *)(v3 + 136));
      *(_DWORD *)(v3 + 64) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 132));
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v3 + 320),
        (const std::vector<unsigned int>::value_type *)(v3 + 128));
      __gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator++(&__for_begin_0);
    }
    ActivityComp = (unsigned int)Player::getActivityComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = *(_BYTE *)(((unsigned __int64)&__closure->__this->activity_id_ >> 3) + 0x7FFF8000);
    if ( v22 != 0 && v22 <= 3 )
      __asan_report_load4();
    PlayerActivityComp::findActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v3 + 160), ActivityComp);
    if ( std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "operator()",
        529);
      v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v48,
              (const char (*)[49])"[LAN_V3_MULTI] findActivity failed, activity_id:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v23,
              &__closure->__this->activity_id_);
      v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])", uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v2 = FOREACH_CONTINUE;
      v26 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 80) = 0;
      v27 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      old_score = BaseActivity::getCurScore(v27);
      v28 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      BaseActivity::addScoreWithLimit(v28, *(_DWORD *)(v3 + 64));
      v29 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( old_score >= BaseActivity::getCurScore(v29) )
      {
        v31 = 0;
      }
      else
      {
        v30 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v31 = BaseActivity::getCurScore(v30) - old_score;
      }
      *(_DWORD *)(v3 + 80) = v31;
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "operator()",
        537);
      v32 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v48,
              (const char (*)[27])"[LAN_V3_MULTI] add_score: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 64));
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v33, (const char (*)[16])" actual_score: ");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 80));
      v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])" uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v26 = 1;
    }
    std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v3 + 160));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 320));
    std::vector<ExhibitionScoreParam>::~vector((std::vector<ExhibitionScoreParam> *const)(v3 + 256));
    std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v3 + 192));
    if ( v26 == 1 )
    {
LABEL_58:
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(player, __closure->__notify);
      v2 = FOREACH_CONTINUE;
    }
  }
  result = v2;
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 545: range 0000000015144D56-0000000015145065
void __cdecl LanV3BoatMultistagePlay::endLanV3BoatGallery(LanV3BoatMultistagePlay *const this, bool is_interrupt)
{
  SceneGalleryComp *GalleryComp; // rcx
  bool v3; // bl
  common::milog::MiLogStream *v4; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::shared_ptr<BaseGallery> __a; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, (__int64)GalleryComp, this->gallery_id_);
  v3 = std::operator==<BaseGallery>(0LL, &__a);
  std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
  if ( v3 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "endLanV3BoatGallery",
      548);
    v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v12,
           (const char (*)[46])"[LAN_V3_MULTI] findGallery fail, gallery_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_gallery_id = Scene::getGalleryComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
    {
      p_gallery_id = (SceneGalleryComp *)&this->gallery_id_;
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::forceStopAndClearGallery(
                         p_gallery_id,
                         this->gallery_id_,
                         is_interrupt,
                         GALLERY_STOP_NONE) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "endLanV3BoatGallery",
        553);
      v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v12,
             (const char (*)[59])"[LAN_V3_MULTI] forceStopAndClearGallery fail, gallery_id_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "endLanV3BoatGallery",
        556);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v12,
             (const char (*)[41])"[LAN_V3_MULTI] forceStopAndClearGallery:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", is_interrupt: ");
      common::milog::MiLogStream::operator<<(v9, is_interrupt);
    }
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};

// Line 560: range 0000000015145066-0000000015145389
void __cdecl LanV3BoatMultistagePlay::startSubChatChannel(LanV3BoatMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
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
  *(_QWORD *)(v1 + 8) = "1 32 16 20 player_world_ptr:561";
  *(_QWORD *)(v1 + 16) = LanV3BoatMultistagePlay::startSubChatChannel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 32, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "startSubChatChannel",
      564);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v9,
      (const char (*)[41])"[LAN_V3_MULTI] getOwnPlayerWorld nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else if ( std::set<unsigned int>::size(&this->player_uid_set_) > 1 )
  {
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    World::addChatChannel(v8, 6u, &this->player_uid_set_);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "startSubChatChannel",
      570);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v9,
           (const char (*)[57])"[LAN_V3_MULTI] player_uid_set_ less than 2, is_single_: ");
    if ( *(char *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_single_);
    common::milog::MiLogStream::operator<<(v7, this->is_single_);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
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

// Line 578: range 000000001514538A-00000000151455AC
void __cdecl LanV3BoatMultistagePlay::endSubChatChannel(LanV3BoatMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 player_world_ptr:579";
  *(_QWORD *)(v1 + 16) = LanV3BoatMultistagePlay::endSubChatChannel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 32, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "endSubChatChannel",
      582);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v8,
      (const char (*)[41])"[LAN_V3_MULTI] getOwnPlayerWorld nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    World::delChatChannel(v7, 6u);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 589: range 00000000151455AE-00000000151459A7
int32_t __cdecl LanV3BoatMultistagePlay::foreachPlayer(
        LanV3BoatMultistagePlay *const this,
        std::function<ForeachPolicy(Player&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::set<unsigned int>::size_type v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  int v8; // r14d
  Player *v9; // rdx
  int32_t result; // eax
  int player_uid; // [rsp+24h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::vector<std::weak_ptr<Player>> *__for_range_0; // [rsp+40h] [rbp-C0h]
  std::weak_ptr<Player> *player_wtr; // [rsp+48h] [rbp-B8h]
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 player_ptr:604 64 24 14 player_vec:591";
  *(_QWORD *)(v3 + 16) = LanV3BoatMultistagePlay::foreachPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Player>>::vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  v6 = std::set<unsigned int>::size(&this->player_uid_set_);
  std::vector<std::weak_ptr<Player>>::reserve((std::vector<std::weak_ptr<Player>> *const)(v3 + 64), v6);
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    player_uid = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 32), (__int64)this->scene_, player_uid);
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      std::vector<std::weak_ptr<Player>>::emplace_back<std::shared_ptr<Player> &>(
        (std::vector<std::weak_ptr<Player>> *const)(v3 + 64),
        (std::shared_ptr<Player> *)(v3 + 32),
        (std::shared_ptr<Player> *)(v3 + 32));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Player>> *)(v3 + 64);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::weak_ptr<Player>>::begin((std::vector<std::weak_ptr<Player>> *const)(v3 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::weak_ptr<Player>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_end) )
  {
    player_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(Player &)>::operator()(p_func, v9) )
      {
        v2 = 1;
        v8 = 1;
      }
      else
      {
        v8 = 2;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    if ( v8 && v8 != 2 )
      goto LABEL_24;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_24:
  std::vector<std::weak_ptr<Player>>::~vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 618: range 00000000151459A8-0000000015145E18
void __fastcall LanV3BoatMultistagePlay::onExitVehicleEvent(LanV3BoatMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  char *val; // [rsp+18h] [rbp-A8h] BYREF
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:617";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::onExitVehicleEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->entered_uid_set_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onExitVehicleEvent",
      621);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v13,
           (const char (*)[54])"[LAN_V3_MULTI] player not in play exit vehicle, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->stage_type_ == MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)&__a, (__int64)this->scene_, *(_DWORD *)(v2 + 32));
      v9 = std::operator==<Player>(0LL, &__a);
      std::shared_ptr<Player>::~shared_ptr(&__a);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "onExitVehicleEvent",
          633);
        v10 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                &v13,
                (const char (*)[69])"[LAN_V3_MULTI] player exit vehicle because of logout/transfer, uid: ");
      }
      else
      {
        LanV3BoatMultistagePlay::handleExceptionKickPlayer(this, *(_DWORD *)(v2 + 32), LAN_V3_KICK_REASON_EXIT_VEHICLE);
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "onExitVehicleEvent",
          637);
        v10 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                &v13,
                (const char (*)[72])"[LAN_V3_MULTI] handleExceptionKickPlayer becasue of exit vehicle, uid: ");
      }
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onExitVehicleEvent",
        626);
      v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v13,
             (const char (*)[61])"[LAN_V3_MULTI] player not in play stage, exit vehicle, uid: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" stage:");
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      val = (char *)data::enumValToStr(this->stage_type_);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
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

// Line 641: range 0000000015145E1A-000000001514600F
int32_t __cdecl LanV3BoatMultistagePlay::interruptSettleStage(LanV3BoatMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rbx
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE )
  {
    if ( *(char *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_single_);
    if ( !this->is_single_ )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "interruptSettleStage",
        650);
      common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
        &v4,
        (const char (*)[69])"[LAN_V3_MULTI] only single mode is allowed to interrupt settle stage");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      SceneMultistagePlay::endStage(this, 1);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "interruptSettleStage",
      644);
    v1 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
           &v4,
           (const char (*)[83])"[LAN_V3_MULTI] cur_stage is not MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE, stage_type_: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = (char *)data::enumValToStr(this->stage_type_);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v1, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
};

// Line 659: range 0000000015146010-0000000015146575
void __fastcall LanV3BoatMultistagePlay::handleExceptionKickPlayer(
        LanV3BoatMultistagePlay *const this,
        uint32_t uid,
        proto::LanV3BoatKickReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:658 48 4 10 reason:658 64 16 13 world_ptr:668";
  *(_QWORD *)(v3 + 16) = LanV3BoatMultistagePlay::handleExceptionKickPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getOwnerUid(this->scene_) == *(_DWORD *)(v3 + 32) )
  {
    LanV3BoatMultistagePlay::endLanV3BoatPlay(this, 0);
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "handleExceptionKickPlayer",
      664);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v22,
           (const char (*)[34])"[LAN_V3_MULTI] owner kicked, uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])"reason: ");
    common::milog::MiLogStream::operator<<<proto::LanV3BoatKickReason,(proto::LanV3BoatKickReason*)0>(
      v8,
      (const proto::LanV3BoatKickReason *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v11 = *p_vptr_DescribalBase + 64LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Scene *))v11)(v3 + 64, scene);
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "handleExceptionKickPlayer",
        671);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v22,
              (const char (*)[39])"[LAN_V3_MULTI] world_ptr nulltpr, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v13 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      v14 = *(_QWORD *)v13 + 104LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))v14)(v13, *(unsigned int *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "handleExceptionKickPlayer",
          676);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v22,
                (const char (*)[44])"[LAN_V3_MULTI] checkKickPlayer failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v17 = *(_QWORD *)v16 + 112LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))v17)(v16, *(unsigned int *)(v3 + 32), 9LL);
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "handleExceptionKickPlayer",
          680);
        v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v22,
                (const char (*)[31])"[LAN_V3_MULTI] kickPlayer uid:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" reason: ");
        common::milog::MiLogStream::operator<<<proto::LanV3BoatKickReason,(proto::LanV3BoatKickReason*)0>(
          v20,
          (const proto::LanV3BoatKickReason *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
  }
  if ( v23 == (char *)v3 )
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

// Line 685: range 0000000015146576-0000000015146ED4
void __fastcall LanV3BoatMultistagePlay::onPlayerPostEnterScene(
        LanV3BoatMultistagePlay *const this,
        const std::set<unsigned int> *prepared_uid_set,
        uint32_t uid,
        bool is_first_enter)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::set<unsigned int>::size_type v13; // r14
  uint32_t SceneTimeSeconds; // ecx
  uint32_t v15; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // ecx
  char v20; // dl
  char *v21; // rsi
  bool v22; // dl
  Player *v23; // rax
  PlayerSocialComp *SocialComp; // rax
  Player *v25; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v28; // rax
  std::shared_ptr<Player> p_player_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 duration:720 48 4 7 uid:684 64 16 14 player_ptr:692 96 24 10 notify:748";
  *(_QWORD *)(v4 + 16) = LanV3BoatMultistagePlay::onPlayerPostEnterScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = uid;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->player_uid_set_,
          (const unsigned int *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "onPlayerPostEnterScene",
      689);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v32,
           (const char (*)[43])"[LAN_V3_MULTI] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    goto LABEL_46;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v4 + 64), (__int64)this->scene_, *(_DWORD *)(v4 + 48));
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
  {
    if ( !is_first_enter )
    {
      SceneMultistagePlay::notifyStage(this);
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "onPlayerPostEnterScene",
        703);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v32,
             (const char (*)[42])"[LAN_V3_MULTI] player reEnter play , uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", cur_stage:");
      common::milog::MiLogStream::operator<<<data::MultistageStageType,(data::MultistageStageType*)0>(
        v11,
        &this->stage_type_);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->stage_type_ != MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE )
      {
        LanV3BoatMultistagePlay::handleExceptionKickPlayer(this, *(_DWORD *)(v4 + 48), LAN_V3_KICK_REASON_SLOW_ENTER);
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "onPlayerPostEnterScene",
          711);
        v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v32,
                (const char (*)[42])"[LAN_V3_MULTI] kickPlayer slow enter uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        goto LABEL_45;
      }
      v13 = std::set<unsigned int>::size(prepared_uid_set);
      if ( v13 == std::set<unsigned int>::size(&this->player_uid_set_) )
      {
        *(_DWORD *)(v4 + 32) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( SceneTimeSeconds > this->stage_begin_scene_time_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = Scene::getSceneTimeSeconds(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v4 + 32) += v15 - this->stage_begin_scene_time_;
        }
        *(_DWORD *)(v4 + 32) += 5;
        if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->duration_seconds_ > *(_DWORD *)(v4 + 32) )
        {
          SceneMultistagePlay::rewriteStageTime(this, 5u);
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
            "onPlayerPostEnterScene",
            731);
          v16 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                  &v32,
                  (const char (*)[60])"[LAN_V3_MULTI] all players are ready, reduce duration from:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->duration_seconds_);
          v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])" to:");
          v21 = (char *)(v4 + 32);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v32);
          v19 = *(_DWORD *)(v4 + 32);
          v20 = *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000);
          LOBYTE(v21) = v20 != 0;
          v22 = v20 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v20;
          if ( v22 )
            __asan_report_store4(&this->duration_seconds_, v21, v22);
          this->duration_seconds_ = v19;
          SceneMultistagePlay::notifyStage(this);
        }
      }
      std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v4 + 64));
      LanV3BoatMultistagePlay::createAndEnterVehicle(this, &p_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
      std::set<unsigned int>::insert(&this->entered_uid_set_, (const std::set<unsigned int>::value_type *)(v4 + 48));
      v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      SocialComp = Player::getSocialComp(v23);
      PlayerSocialComp::unshieldChatChannel(SocialComp, 6u);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->stage_type_ == MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE )
    {
      proto::LanV3BoatGameTransferFinishNotify::LanV3BoatGameTransferFinishNotify((proto::LanV3BoatGameTransferFinishNotify *const)(v4 + 96));
      proto::LanV3BoatGameTransferFinishNotify::set_is_reenter(
        (proto::LanV3BoatGameTransferFinishNotify *const)(v4 + 96),
        !is_first_enter);
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Player::sendProto(v25, (const google::protobuf::Message *)(v4 + 96));
      proto::LanV3BoatGameTransferFinishNotify::~LanV3BoatGameTransferFinishNotify((proto::LanV3BoatGameTransferFinishNotify *const)(v4 + 96));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v28 = *p_vptr_DescribalBase + 488LL;
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8();
    (*(void (__fastcall **)(Scene *))v28)(scene);
    goto LABEL_45;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
    "onPlayerPostEnterScene",
    695);
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v32,
         (const char (*)[40])"[LAN_V3_MULTI] findPlayer failed, uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v32);
LABEL_45:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
LABEL_46:
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 757: range 0000000015146ED6-0000000015146F94
const data::LanV3BoatExcelConfig *__cdecl LanV3BoatMultistagePlay::findBoatConfig(LanV3BoatMultistagePlay *const this)
{
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  const data::LanV3BoatExcelConfig *LanV3BoatExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  LanV3BoatExcelConfig = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3BoatExcelConfig(
                           p_activity_sea_lamp_v3_config_mgr,
                           this->map_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return LanV3BoatExcelConfig;
};

// Line 762: range 0000000015146F96-000000001514717B
void __cdecl LanV3BoatMultistagePlay::initPlayerBornOrder(LanV3BoatMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  uint32_t v5; // r13d
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  char v9; // cl
  uint32_t index; // [rsp+14h] [rbp-8Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 uid:764";
  *(_QWORD *)(v1 + 16) = LanV3BoatMultistagePlay::initPlayerBornOrder;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  index = 0;
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    v5 = index++;
    v6 = (char *)(v1 + 32);
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->player_born_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v7, v6, (_BYTE)v7);
    }
    *v8 = v5;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 771: range 000000001514717C-0000000015147289
__int64 __fastcall LanV3BoatMultistagePlay::getPlayerBornConfigIndex(LanV3BoatMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rdx
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:770";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::getPlayerBornConfigIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  v5 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->player_born_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  result = *v5;
  if ( v7 == (char *)v2 )
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

// Line 776: range 000000001514728A-00000000151476C2
int32_t __fastcall LanV3BoatMultistagePlay::getPlayerBornPos(
        LanV3BoatMultistagePlay *const this,
        uint32_t uid,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t *v13; // rdx
  uint32_t group_id; // [rsp+20h] [rbp-B0h]
  const data::LanV3BoatExcelConfig *boat_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 born_index:782 64 4 7 uid:775";
  *(_QWORD *)(v4 + 16) = LanV3BoatMultistagePlay::getPlayerBornPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "getPlayerBornPos",
      779);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v18,
           (const char (*)[43])"[LAN_V3_MULTI] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = LanV3BoatMultistagePlay::getPlayerBornConfigIndex(this, *(_DWORD *)(v4 + 64));
    boat_config_ptr = LanV3BoatMultistagePlay::findBoatConfig(this);
    if ( boat_config_ptr )
    {
      if ( std::vector<unsigned int>::size(&boat_config_ptr->player_config_id_list) > *(unsigned int *)(v4 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)boat_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->control_group_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        group_id = boat_config_ptr->control_group_id;
        v13 = (uint32_t *)std::vector<unsigned int>::operator[](
                            &boat_config_ptr->player_config_id_list,
                            *(unsigned int *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        result = LanV3BoatMultistagePlay::getPosAndRotFromConfig(this, group_id, *v13, born_pos, born_rot);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "getPlayerBornPos",
          791);
        v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v18,
                (const char (*)[57])"[LAN_V3_MULTI] player point config index > size, index: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", map_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->map_id_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "getPlayerBornPos",
        786);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v18,
             (const char (*)[49])"[LAN_V3_MULTI] cannot find boat config, map_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->map_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
    }
  }
  if ( v19 == (char *)v4 )
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

// Line 801: range 00000000151476C4-0000000015147AFC
int32_t __fastcall LanV3BoatMultistagePlay::getPlayerVehicleBornPos(
        LanV3BoatMultistagePlay *const this,
        uint32_t uid,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t *v13; // rdx
  uint32_t group_id; // [rsp+20h] [rbp-B0h]
  const data::LanV3BoatExcelConfig *boat_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 born_index:807 64 4 7 uid:800";
  *(_QWORD *)(v4 + 16) = LanV3BoatMultistagePlay::getPlayerVehicleBornPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "getPlayerVehicleBornPos",
      804);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v18,
           (const char (*)[43])"[LAN_V3_MULTI] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = LanV3BoatMultistagePlay::getPlayerBornConfigIndex(this, *(_DWORD *)(v4 + 64));
    boat_config_ptr = LanV3BoatMultistagePlay::findBoatConfig(this);
    if ( boat_config_ptr )
    {
      if ( std::vector<unsigned int>::size(&boat_config_ptr->vehicle_config_id_list) > *(unsigned int *)(v4 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)boat_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->control_group_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        group_id = boat_config_ptr->control_group_id;
        v13 = (uint32_t *)std::vector<unsigned int>::operator[](
                            &boat_config_ptr->vehicle_config_id_list,
                            *(unsigned int *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        result = LanV3BoatMultistagePlay::getPosAndRotFromConfig(this, group_id, *v13, born_pos, born_rot);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "getPlayerVehicleBornPos",
          816);
        v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v18,
                (const char (*)[58])"[LAN_V3_MULTI] vehicle point config index > size, index: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", map_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->map_id_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "getPlayerVehicleBornPos",
        811);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v18,
             (const char (*)[49])"[LAN_V3_MULTI] cannot find boat config, map_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->map_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
    }
  }
  if ( v19 == (char *)v4 )
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

// Line 826: range 0000000015147AFE-0000000015147FEC
__int64 __fastcall LanV3BoatMultistagePlay::getPosAndRotFromConfig(
        LanV3BoatMultistagePlay *const this,
        uint32_t group_id,
        uint32_t config_id,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-C0h]
  const PointScriptConfig *point_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+60h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 group_id:825 64 4 13 config_id:825";
  *(_QWORD *)(v5 + 16) = LanV3BoatMultistagePlay::getPosAndRotFromConfig;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = group_id;
  *(_DWORD *)(v5 + 64) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v8->design_config.lua_config_mgr, *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( group_script_config_ptr )
  {
    point_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v5 + 64));
    if ( point_config_ptr )
    {
      if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(pos, 12LL);
      }
      if ( (((unsigned __int8)point_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3)
                                                                     + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load_n(&point_config_ptr->pos, 12LL);
      }
      *(_QWORD *)pos = *(_QWORD *)&point_config_ptr->pos.x;
      *(float *)(pos + 8) = point_config_ptr->pos.z;
      if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(rot, 12LL);
      }
      if ( *(char *)(((unsigned __int64)&point_config_ptr->rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load_n(&point_config_ptr->rot, 12LL);
      }
      *(_QWORD *)rot = *(_QWORD *)&point_config_ptr->rot.x;
      *(float *)(rot + 8) = point_config_ptr->rot.z;
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "getPosAndRotFromConfig",
        836);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v20,
              (const char (*)[32])"[LAN_V3_MULTI] point config id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v12,
              (const char (*)[22])" NOT found, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "getPosAndRotFromConfig",
      830);
    v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v20,
           (const char (*)[55])"[LAN_V3_MULTI] failed to find group config, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 845: range 0000000015147FEE-00000000151488D5
void __cdecl LanV3BoatMultistagePlay::createAndEnterVehicle(
        LanV3BoatMultistagePlay *const this,
        PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Scene *scene; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  GadgetVehicleComp *v18; // r14
  common::milog::MiLogStream *v19; // rax
  uint32_t vehicle_gadget_id; // [rsp+14h] [rbp-12Ch]
  const data::LanV3BoatBaseExcelConfig *base_config_ptr; // [rsp+18h] [rbp-128h]
  std::shared_ptr<Player> v22; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-110h] BYREF
  char v24[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 7 uid:859 64 12 15 vehicle_pos:858 96 12 15 vehicle_rot:858 128 16 19 boat_gadget_ptr:865"
                        " 160 16 20 vehicle_comp_ptr:871";
  *(_QWORD *)(v2 + 16) = LanV3BoatMultistagePlay::createAndEnterVehicle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
      "createAndEnterVehicle",
      848);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v23,
      (const char (*)[37])"[LAN_V3_MULTI] player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    base_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3BoatBaseExcelConfig(
                        p_activity_sea_lamp_v3_config_mgr,
                        this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
    if ( base_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)base_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->vehicle_gadget_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      vehicle_gadget_id = base_config_ptr->vehicle_gadget_id;
      Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      *(_DWORD *)(v2 + 48) = Player::getUid(v7);
      if ( LanV3BoatMultistagePlay::getPlayerVehicleBornPos(
             this,
             *(_DWORD *)(v2 + 48),
             (Vector3 *)(v2 + 64),
             (Vector3 *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
          "createAndEnterVehicle",
          862);
        v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v23,
               (const char (*)[52])"[LAN_V3_MULTI] getPlayerVehicleBornPos failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        std::shared_ptr<Player>::shared_ptr(&v22, p_player_ptr);
        Scene::createPlayerVehicle(
          (Scene *const)(v2 + 128),
          scene,
          (const Vector3 *)vehicle_gadget_id,
          v2 + 64,
          v2 + 96,
          &v22,
          CREATE_GADGET_NONE,
          0);
        std::shared_ptr<Player>::~shared_ptr(&v22);
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
            "createAndEnterVehicle",
            868);
          v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v23,
                  (const char (*)[42])"[LAN_V3_MULTI] create vehicle failed pos:");
          v11 = operator<<(v10, (const Vector3 *)(v2 + 64));
          v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", rot:");
          v13 = operator<<(v12, (const Vector3 *)(v2 + 96));
          v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])" in:");
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v14, this->scene_);
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        else
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 160));
          if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v2 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
              "createAndEnterVehicle",
              874);
            v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v23, (const char (*)[8])"gadget:");
            v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v17 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])off_2570E340);
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          else
          {
            v18 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            std::shared_ptr<Player>::shared_ptr(&v22, p_player_ptr);
            LOBYTE(v18) = GadgetVehicleComp::enterVehicle(v18, 0, &v22) != 0;
            std::shared_ptr<Player>::~shared_ptr(&v22);
            if ( (_BYTE)v18 )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
                "createAndEnterVehicle",
                879);
              v19 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      &v23,
                      (const char (*)[52])"[LAN_V3_MULTI] player failed to enterVehicle, uid: ");
            }
            else
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
                "createAndEnterVehicle",
                882);
              v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v23,
                      (const char (*)[48])"[LAN_V3_MULTI] player enter self vehicle, uid: ");
            }
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v2 + 160));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.cpp",
        "createAndEnterVehicle",
        854);
      v6 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v23,
             (const char (*)[66])"[LAN_V3_MULTI] findLanV3BoatBaseExcelConfig failed, schedule_id_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 883: range 000000001516C8F0-000000001516C904
void __cdecl GLOBAL__sub_I_merge_merge_expedition_activity_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 883: range 000000001516C2E4-000000001516C8EF
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category **v2; // rdi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  __int64 misc_category; // rax
  const std::_V2::error_category *v7; // rax
  const std::_V2::error_category *v8; // rax
  const std::_V2::error_category *v9; // rax
  const std::_V2::error_category *v10; // rax
  const std::_V2::error_category *v11; // rax
  __int64 v12; // rsi
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  char v15; // dl
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  char v19; // dl
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  char v23; // dl
  __int64 v24; // rdx
  const char *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  char v28; // dl
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  char v36; // dl
  __int64 v37; // rdx
  const char *v38; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_expedition_activity.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      v2 = (const boost::system::error_category **)&boost::optional_ns::in_place_init_if;
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::system_category;
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   &std::__ioinit);
      }
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::netdb_category;
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  &std::__ioinit);
      }
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::addrinfo_category;
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     &std::__ioinit);
      }
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = (__int64)boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
      {
        v2 = (const boost::system::error_category **)&boost::asio::error::misc_category;
        misc_category = __asan_report_store8(&boost::asio::error::misc_category, &std::__ioinit);
      }
      boost::asio::error::misc_category = misc_category;
      v7 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)v2);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v7);
      v8 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v8);
      v9 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v9);
      v10 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v10);
      v11 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v12 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v11);
      v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v15 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v12,
            v16);
        *v14 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v12 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v17 )
      {
        v18 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v12,
            v20);
        *v18 = 1;
        v12 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v21 )
      {
        v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v23 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v23 != 0;
        v24 = (v23 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v23);
        if ( (_BYTE)v24 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v12,
            v24);
        *v22 = 1;
        v25 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v12);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v25;
      }
      v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v26 )
      {
        v27 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v28 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v28 != 0;
        v29 = (v28 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v28);
        if ( (_BYTE)v29 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v12,
            v29);
        *v27 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v12 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v32);
        if ( (_BYTE)v33 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v12,
            v33);
        *v31 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v12 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v36 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v36 != 0;
        v37 = (v36 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v36);
        if ( (_BYTE)v37 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v12,
            v37);
        *v35 = 1;
        v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v12);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v38;
      }
    }
    __asan_after_dynamic_init();
  }
};
