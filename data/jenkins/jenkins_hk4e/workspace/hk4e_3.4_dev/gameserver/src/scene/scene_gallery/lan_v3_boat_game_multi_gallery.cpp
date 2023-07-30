// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp

// Line 25: range 00000000145D0318-00000000145D033D
void __cdecl LanV3BoatGameMultiGallery::toClient(
        LanV3BoatGameMultiGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  BaseGallery::toClient(this, client_info);
};

// Line 30: range 00000000145D033E-00000000145D0440
void __cdecl LanV3BoatGameMultiGallery::onStart(LanV3BoatGameMultiGallery *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) <= 1 )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp",
      "onStart",
      34);
    v1 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v5,
           (const char (*)[65])"[LAN_V3_BOAT] multi boat gallery player count < 2. player count:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, &val);
    v3 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v2, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  LanV3BoatGameMultiGallery::clearGalleryData(this);
  LanV3BoatGameMultiGallery::printGalleryStartLog(this);
};

// Line 41: range 00000000145D0442-00000000145D0470
void __cdecl LanV3BoatGameMultiGallery::onStop(LanV3BoatGameMultiGallery *const this, proto::GalleryStopReason reason)
{
  LanV3BoatGameMultiGallery::printGalleryStopLog(this, reason);
  LanV3BoatGameMultiGallery::clearGalleryData(this);
};

// Line 47: range 00000000145D0472-00000000145D0C59
int32_t __cdecl LanV3BoatGameMultiGallery::updatePlayerScore(
        LanV3BoatGameMultiGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  LanV3BoatMultistagePlay *v24; // rax
  LanV3BoatMultistagePlay *v25; // rax
  std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-115h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-110h] BYREF
  char v33[240]; // [rsp+50h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 16 11 play_ptr:53 80 16 18 winner_list_obj:65 112 48 17 winner_uid_set:71";
  *(_QWORD *)(v4 + 16) = LanV3BoatGameMultiGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getMultistagePlayComp(this->scene_);
    SceneMultistagePlayComp::findPlay<LanV3BoatMultistagePlay>((const SceneMultistagePlayComp *const)(v4 + 48));
    if ( std::operator==<LanV3BoatMultistagePlay>(0LL, (const std::shared_ptr<LanV3BoatMultistagePlay> *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp",
        "updatePlayerScore",
        56);
      v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v32,
             (const char (*)[68])"[LAN_V3_BOAT] find LanV3BoatMultistagePlay play_ptr is null, [uid: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &contex->uid);
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])"]");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v8 = -1;
    }
    else
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(_QWORD *)v11 + 120LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v12)(v11) == 17 )
      {
        luabind::adl::object::object((luabind::adl::object *const)(v4 + 80));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v32, "winner_uid_list", &__a);
        v19 = ScriptUtil::getTableValue(
                &ScriptUtil::no_exception_instance,
                param_table,
                (const std::string *)&v32,
                (luabind::adl::object *)(v4 + 80)) != 0;
        std::string::~string(&v32);
        std::allocator<char>::~allocator(&__a);
        if ( v19 )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp",
            "updatePlayerScore",
            68);
          v20 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v32,
                  (const char (*)[51])"[LAN_V3_BOAT] winner_uid_list didnt update! [uid: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &contex->uid);
          common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])"]");
          common::milog::MiLogStream::~MiLogStream(&v32);
          v8 = -1;
        }
        else
        {
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 112));
          if ( ScriptUtil::getTableValueAsSet<unsigned int>(
                 &ScriptUtil::no_exception_instance,
                 (const luabind::adl::object *)(v4 + 80),
                 (std::set<unsigned int> *)(v4 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp",
              "updatePlayerScore",
              74);
            v22 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v32,
                    (const char (*)[48])"[LAN_V3_BOAT] getTableValueAsSet failed! [uid: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &contex->uid);
            common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])"]");
            common::milog::MiLogStream::~MiLogStream(&v32);
            v8 = -1;
          }
          else
          {
            v24 = std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
            LanV3BoatMultistagePlay::setWinnerUidSet(v24, (const std::set<unsigned int> *)(v4 + 112));
            v25 = std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
            LanV3BoatMultistagePlay::setIsGallerySucc(v25, 1);
            v26 = std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
            SceneMultistagePlay::endStage(v26, 1);
            v8 = 0;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
        }
        luabind::adl::object::~object((luabind::adl::object *const)(v4 + 80));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp",
          "updatePlayerScore",
          61);
        v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v32,
                (const char (*)[64])"[LAN_V3_BOAT] LanV3BoatMultistagePlay stage is play, cur stage:");
        v14 = (unsigned __int64)std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        v15 = *(_QWORD *)v14 + 120LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        val = (*(__int64 (__fastcall **)(unsigned __int64))v15)(v14);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])"[uid: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &contex->uid);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = -1;
      }
    }
    std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)(v4 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/lan_v3_boat_game_multi_gallery.cpp",
      "updatePlayerScore",
      50);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v32,
           (const char (*)[46])"[LAN_V3_BOAT] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v8 = -1;
  }
  result = v8;
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 86: range 00000000145D0C5A-00000000145D0C64
void __cdecl LanV3BoatGameMultiGallery::clearGalleryData(LanV3BoatGameMultiGallery *const this)
{
  ;
};

// Line 91: range 00000000145D0C66-00000000145D0C70
void __cdecl LanV3BoatGameMultiGallery::printGalleryStartLog(LanV3BoatGameMultiGallery *const this)
{
  ;
};

// Line 96: range 00000000145D0C72-00000000145D0C7F
void __cdecl LanV3BoatGameMultiGallery::printGalleryStopLog(
        LanV3BoatGameMultiGallery *const this,
        proto::GalleryStopReason reason)
{
  ;
};
