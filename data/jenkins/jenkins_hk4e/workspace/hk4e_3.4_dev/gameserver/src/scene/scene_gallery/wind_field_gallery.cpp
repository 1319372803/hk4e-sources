// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/wind_field_gallery.cpp

// Line 29: range 00000000180511C4-0000000018051481
void __cdecl WindFieldGallery::toClient(WindFieldGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryWindFieldInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_wind_field_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_element_ball_num(detail_info, this->element_ball_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_coin_num(detail_info, this->coin_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_killed_monster_num(detail_info, this->killed_monster_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_challenge_total_time(detail_info, this->challenge_total_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_challenge_timestamp(detail_info, this->challenge_timestamp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_show_id(detail_info, this->show_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_challenge_ball_max_count(detail_info, this->challenge_ball_max_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryWindFieldInfo::set_challenge_ball_cur_count(detail_info, this->challenge_ball_cur_count_);
};

// Line 43: range 0000000018051482-00000000180517E6
void __cdecl WindFieldGallery::onStart(WindFieldGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Scene *scene; // rcx
  Player *v8; // rdx
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-B0h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v12; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 player_ptr:52";
  *(_QWORD *)(v1 + 16) = WindFieldGallery::onStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) > 2 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/wind_field_gallery.cpp",
      "onStart",
      47);
    v4 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v15,
           (const char (*)[53])"[WIND_FIELD] gallery player count > 2. player count:");
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Base_ptr)std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v4,
           (const unsigned __int64 *)&__for_end);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  WindFieldGallery::clearGalleryData(this);
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v12);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, *uid);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      WindFieldGallery::printGalleryStartLog(this, v8);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 61: range 00000000180517E8-0000000018051CF0
// local variable allocation has failed, the output may be wrong!
void __cdecl WindFieldGallery::onStop(WindFieldGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // dl
  uint32_t v6; // ecx
  char v7; // dl
  bool v8; // dl
  Scene *scene; // rcx
  Player *v10; // rax
  WindFieldActivity *v11; // rax
  Player *v12; // rcx
  proto::GalleryStopReason reasona; // [rsp+4h] [rbp-ECh]
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v18; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+70h] [rbp-80h] BYREF

  reasona = reason;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 player_ptr:75 64 16 15 activity_ptr:78";
  *(_QWORD *)(v2 + 16) = WindFieldGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now >= this->start_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v6 = now - this->start_time_;
    v7 = *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000);
    LOBYTE(reason) = v7 != 0;
    v8 = v7 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v7;
    if ( v8 )
      __asan_report_store4(&this->used_time_, *(_QWORD *)&reason, v8);
    this->used_time_ = v6;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/wind_field_gallery.cpp",
      "onStop",
      65);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v21,
      (const char (*)[31])"[WIND_FIELD] now < start_time_");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000);
    if ( v5 )
      __asan_report_store4(&this->used_time_, (((_BYTE)this + 68) & 7u) + 3, v5);
    this->used_time_ = 0;
  }
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v18);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 32), (__int64)scene, *uid);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Player::getActivityComp(v10);
      PlayerActivityComp::findOpenningActivity<WindFieldActivity>((PlayerActivityComp *const)(v2 + 64));
      if ( std::operator!=<WindFieldActivity>((const std::shared_ptr<WindFieldActivity> *)(v2 + 64), 0LL) )
      {
        v11 = std::__shared_ptr_access<WindFieldActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WindFieldActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        WindFieldActivity::setGalleryStopReason(v11, reasona);
      }
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      WindFieldGallery::printGalleryStopLog(this, v12, reasona);
      std::shared_ptr<WindFieldActivity>::~shared_ptr((std::shared_ptr<WindFieldActivity> *const)(v2 + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  WindFieldGallery::clearGalleryData(this);
  if ( v22 == (char *)v2 )
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

// Line 90: range 0000000018051CF2-0000000018052A9D
int32_t __cdecl WindFieldGallery::updatePlayerScore(
        WindFieldGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  bool v9; // r14
  const luabind::adl::object *v10; // rsi
  bool v11; // r14
  __int64 v12; // rsi
  bool v13; // dl
  bool v14; // dl
  uint32_t SceneTimeSeconds; // ecx
  char v16; // dl
  bool v17; // dl
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  bool v20; // dl
  const char (*v21)[15]; // [rsp+0h] [rbp-130h]
  unsigned int *v22; // [rsp+8h] [rbp-128h]
  const luabind::adl::object *param_tableb; // [rsp+18h] [rbp-118h]
  std::allocator<char> __a; // [rsp+3Bh] [rbp-F5h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-F0h] BYREF
  unsigned int v29[52]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v29;
  v22 = v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 12 is_start:103 64 1 14 is_success:107 80 48 10 notify:144";
  *(_QWORD *)(v4 + 16) = WindFieldGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61953;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "element_ball", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v28,
      &this->element_ball_num_);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "coin", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v28,
      &this->coin_num_);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "killed_monster", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v28,
      &this->killed_monster_num_);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "ball_current_count", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v28,
      &this->challenge_ball_cur_count_);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    *(_BYTE *)(v4 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "is_start", &__a);
    v9 = ScriptUtil::getTableValue<bool>(
           &ScriptUtil::no_exception_instance,
           param_table,
           (const std::string *)&v28,
           (bool *)(v4 + 48)) == 0;
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    if ( v9 )
    {
      *(_BYTE *)(v4 + 64) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "is_success", &__a);
      v10 = param_table;
      v11 = ScriptUtil::getTableValue<bool,char const(&)[15],unsigned int &,char const(&)[8],unsigned int &>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v28,
              (bool *)(v4 + 64),
              (const char (*)[15])"challenge_time",
              &this->challenge_total_time_,
              (const char (*)[8])"show_id",
              &this->show_id_,
              v21,
              v29,
              (const char (*)[8])contex,
              (unsigned int *)param_table) != 0;
      std::string::~string(&v28);
      std::allocator<char>::~allocator(&__a);
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/wind_field_gallery.cpp",
          "updatePlayerScore",
          110);
        common::milog::MiLogStream::operator<<<char [113],(char *[113])0>(
          &v28,
          (const char (*)[113])"[WIND_FIELD] getTableValue failed, should contains {is_start, is_success, challenge_time,"
                               " show_id} in one call!!");
        common::milog::MiLogStream::~MiLogStream(&v28);
        result = -1;
        goto LABEL_50;
      }
      if ( *(_BYTE *)(v4 + 48) == 1 )
        goto LABEL_55;
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->challenge_total_time_ )
      {
LABEL_55:
        if ( !*(_BYTE *)(v4 + 48) )
          goto LABEL_37;
        if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( !this->challenge_total_time_ )
        {
LABEL_37:
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/wind_field_gallery.cpp",
            "updatePlayerScore",
            139);
          common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
            &v28,
            (const char (*)[77])"[WIND_FIELD] is_start value should be consistent with challenge_time value!!");
          common::milog::MiLogStream::~MiLogStream(&v28);
          result = -1;
          goto LABEL_50;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
        v16 = *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v16 != 0;
        v17 = v16 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v16;
        if ( v17 )
          __asan_report_store4(&this->challenge_timestamp_, v10, v17);
        this->challenge_timestamp_ = SceneTimeSeconds;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "ball_max_count", &__a);
        v18 = ScriptUtil::getTableValue<unsigned int>(
                &ScriptUtil::no_exception_instance,
                param_tableb,
                (const std::string *)&v28,
                &this->challenge_ball_max_count_) != 0;
        std::string::~string(&v28);
        std::allocator<char>::~allocator(&__a);
        if ( v18 )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/wind_field_gallery.cpp",
            "updatePlayerScore",
            129);
          v19 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                  &v28,
                  (const char (*)[70])"[WIND_FIELD] challenge start not provide ball_max_count, gallery_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        else
        {
          v20 = *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                                 + 0x7FFF8000);
          if ( v20 )
            __asan_report_store4(&this->challenge_ball_cur_count_, (((_BYTE)this + 76) & 7u) + 3, v20);
          this->challenge_ball_cur_count_ = 0;
        }
      }
      else
      {
        v12 = (((_BYTE)this + 60) & 7u) + 3;
        v13 = *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3)
                                                               + 0x7FFF8000);
        if ( v13 )
          __asan_report_store4(&this->challenge_timestamp_, v12, v13);
        this->challenge_timestamp_ = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->challenge_ball_max_count_, v12, (_BYTE)this + 72);
        }
        this->challenge_ball_max_count_ = 0;
        v14 = *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                               + 0x7FFF8000);
        if ( v14 )
          __asan_report_store4(&this->challenge_ball_cur_count_, (((_BYTE)this + 76) & 7u) + 3, v14);
        this->challenge_ball_cur_count_ = 0;
      }
      proto::WindFieldGalleryChallengeInfoNotify::WindFieldGalleryChallengeInfoNotify((proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80));
      proto::WindFieldGalleryChallengeInfoNotify::set_is_start(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        *(_BYTE *)(v4 + 48));
      proto::WindFieldGalleryChallengeInfoNotify::set_is_success(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        *(_BYTE *)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::WindFieldGalleryChallengeInfoNotify::set_challenge_total_time(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        this->challenge_total_time_);
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::WindFieldGalleryChallengeInfoNotify::set_challenge_timestamp(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        this->challenge_timestamp_);
      if ( *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::WindFieldGalleryChallengeInfoNotify::set_show_id(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        this->show_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::WindFieldGalleryChallengeInfoNotify::set_challenge_ball_max_count(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        this->challenge_ball_max_count_);
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::WindFieldGalleryChallengeInfoNotify::set_challenge_ball_cur_count(
        (proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80),
        this->challenge_ball_cur_count_);
      BaseGallery::notifyToGalleryPlayers<proto::WindFieldGalleryChallengeInfoNotify>(
        (BaseGallery *const)this,
        (proto::WindFieldGalleryChallengeInfoNotify *)(v4 + 80));
      proto::WindFieldGalleryChallengeInfoNotify::~WindFieldGalleryChallengeInfoNotify((proto::WindFieldGalleryChallengeInfoNotify *const)(v4 + 80));
    }
    WindFieldGallery::notifyAllPlayerFullStatus(this);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/wind_field_gallery.cpp",
      "updatePlayerScore",
      93);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v28,
           (const char (*)[45])"[WIND_FIELD] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
  }
LABEL_50:
  if ( v22 == (unsigned int *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 162: range 0000000018052A9E-0000000018052D2F
void __cdecl WindFieldGallery::clearGalleryData(WindFieldGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl
  bool v9; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->element_ball_num_, v1, v2);
  this->element_ball_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_num_, v1, (_BYTE)this + 48);
  }
  this->coin_num_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3)
                                                        + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->killed_monster_num_, v3, v4);
  this->killed_monster_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_total_time_, v3, (_BYTE)this + 56);
  }
  this->challenge_total_time_ = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3)
                                                        + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->challenge_timestamp_, v5, v6);
  this->challenge_timestamp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_id_, v5, (_BYTE)this + 64);
  }
  this->show_id_ = 0;
  v7 = (((_BYTE)this + 68) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->used_time_, v7, v8);
  this->used_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_ball_max_count_, v7, (_BYTE)this + 72);
  }
  this->challenge_ball_max_count_ = 0;
  v9 = *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->challenge_ball_cur_count_, (((_BYTE)this + 76) & 7u) + 3, v9);
  this->challenge_ball_cur_count_ = 0;
};

// Line 175: range 0000000018052D8E-00000000180530E7
// local variable allocation has failed, the output may be wrong!
void __cdecl WindFieldGallery::printGalleryStartLog(WindFieldGallery *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::string playera; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart> v10; // [rsp+20h] [rbp-C0h] BYREF
  std::string v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  playera._M_string_length = (std::string::size_type)this;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:176 64 16 11 log_ptr:177";
  *(_QWORD *)(v2 + 16) = WindFieldGallery::printGalleryStartLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v11, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE75u, playera);
  std::string::~string(&v11);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyWindFieldGalleryStart>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((playera._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((playera._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyWindFieldGalleryStart::set_gallery_id(v6, *(_DWORD *)(playera._M_string_length + 32));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyWindFieldGalleryStart::set_transaction(
    v7,
    (const std::string *)(playera._M_string_length + 64));
  AvatarComp = Player::getAvatarComp((Player *const)playera._M_dataplus._M_p);
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart>::shared_ptr(
    &v10,
    (const std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart> *)(v2 + 64));
  std::function<ForeachPolicy ()(Avatar &)>::function<WindFieldGallery::printGalleryStartLog(Player &)::{lambda(Avatar &)#1},void,void>(
    (std::function<ForeachPolicy(Avatar&)> *const)&v11,
    (WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *)&v10);
  PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v11);
  std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v11);
  WindFieldGallery::printGalleryStartLog(Player &)::{lambda(Avatar &)#1}::~Avatar((WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *const)&v10);
  std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v10, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart> *)(v2 + 64));
  Player::printStatLog(
    (Player *const)playera._M_dataplus._M_p,
    (MessagePtr *)&playera._anon_0,
    (MessagePtr *)&v10,
    0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v10);
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v12 == (char *)v2 )
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

// Line 181: range 0000000018052D30-0000000018052D71
ForeachPolicy __cdecl WindFieldGallery::printGalleryStartLog(Player &)::{lambda(Avatar &)#1}::operator()(
        const WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  v3 = proto_log::PlayerLogBodyWindFieldGalleryStart::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 181: range 000000001808C9B6-000000001808C9DB
void __cdecl WindFieldGallery::printGalleryStartLog(Player &)::{lambda(Avatar &)#1}::Avatar(
        WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *const this,
        WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 181: range 000000001808CAA6-000000001808CACB
void __cdecl WindFieldGallery::printGalleryStartLog(Player &)::{lambda(Avatar &)#1}::Avatar(
        WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *const this,
        const WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 181: range 0000000018052D72-0000000018052D8C
void __cdecl WindFieldGallery::printGalleryStartLog(Player &)::{lambda(Avatar &)#1}::~Avatar(
        WindFieldGallery::printGalleryStartLog::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStart>::~shared_ptr(&this->__log_ptr);
};

// Line 191: range 00000000180530E8-0000000018053557
void __cdecl WindFieldGallery::printGalleryStopLog(
        WindFieldGallery *const this,
        Player *player,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::string v14; // [rsp+0h] [rbp-E0h]
  google::protobuf::uint32 reasona; // [rsp+Ch] [rbp-D4h]
  Player *playera; // [rsp+10h] [rbp-D0h]
  WindFieldGallery *thisa; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-B0h] BYREF
  std::string v20; // [rsp+40h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+60h] [rbp-80h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v14._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v14._M_string_length) = reason;
  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:192 64 16 11 log_ptr:193";
  *(_QWORD *)(v3 + 16) = WindFieldGallery::printGalleryStopLog;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v20, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE76u, v14);
  std::string::~string(&v20);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyWindFieldGalleryStop>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_gallery_id(v7, thisa->gallery_id_);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_transaction(v8, &thisa->transaction_);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->used_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->used_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_used_time(v9, thisa->used_time_);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_reason(v10, reasona);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->element_ball_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->element_ball_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_windball_num(v11, thisa->element_ball_num_);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->coin_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_coin_num(v12, thisa->coin_num_);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWindFieldGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->killed_monster_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->killed_monster_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyWindFieldGalleryStop::set_kill_monster_count(v13, thisa->killed_monster_num_);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStop,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStop> *)(v3 + 64));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWindFieldGalleryStop> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v21 == (char *)v3 )
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

// Line 206: range 0000000018053558-000000001805394A
void __cdecl WindFieldGallery::notifyAllPlayerFullStatus(WindFieldGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 10 notify:207";
  *(_QWORD *)(v1 + 16) = WindFieldGallery::notifyAllPlayerFullStatus;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::WindFieldGalleryInfoNotify::WindFieldGalleryInfoNotify((proto::WindFieldGalleryInfoNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_ball_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_element_ball_num(
    (proto::WindFieldGalleryInfoNotify *const)(v1 + 32),
    this->element_ball_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_coin_num((proto::WindFieldGalleryInfoNotify *const)(v1 + 32), this->coin_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_killed_monster_num(
    (proto::WindFieldGalleryInfoNotify *const)(v1 + 32),
    this->killed_monster_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_total_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_challenge_total_time(
    (proto::WindFieldGalleryInfoNotify *const)(v1 + 32),
    this->challenge_total_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_timestamp_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_challenge_timestamp(
    (proto::WindFieldGalleryInfoNotify *const)(v1 + 32),
    this->challenge_timestamp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_show_id((proto::WindFieldGalleryInfoNotify *const)(v1 + 32), this->show_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_ball_max_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_challenge_ball_max_count(
    (proto::WindFieldGalleryInfoNotify *const)(v1 + 32),
    this->challenge_ball_max_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_ball_cur_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::WindFieldGalleryInfoNotify::set_challenge_ball_cur_count(
    (proto::WindFieldGalleryInfoNotify *const)(v1 + 32),
    this->challenge_ball_cur_count_);
  BaseGallery::notifyToGalleryPlayers<proto::WindFieldGalleryInfoNotify>(
    (BaseGallery *const)this,
    (proto::WindFieldGalleryInfoNotify *)(v1 + 32));
  proto::WindFieldGalleryInfoNotify::~WindFieldGalleryInfoNotify((proto::WindFieldGalleryInfoNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 225: range 000000001805394C-0000000018053C7E
void __cdecl WindFieldGallery::onPlayerEnter(WindFieldGallery *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 val; // [rsp+10h] [rbp-A0h] BYREF
  proto::OnlinePlayerInfo *online_player_info; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:230";
  *(_QWORD *)(v2 + 16) = WindFieldGallery::onPlayerEnter;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    *(_DWORD *)(v2 + 32) = Player::getUid(player);
    online_player_info = std::map<unsigned int,proto::OnlinePlayerInfo>::operator[](
                           &this->player_info_map_,
                           (const std::map<unsigned int,proto::OnlinePlayerInfo>::key_type *)(v2 + 32));
    MpComp = Player::getMpComp(player);
    PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
    std::set<unsigned int>::insert(&this->player_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) > 2 )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/wind_field_gallery.cpp",
        "onPlayerEnter",
        238);
      v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v12,
             (const char (*)[53])"[WIND_FIELD] gallery player count > 2. player count:");
      val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    WindFieldGallery::printGalleryStartLog(this, player);
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    WindFieldGallery::addAbilityGroupToSinglePlayer(this, player);
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/wind_field_gallery.cpp",
      "onPlayerEnter",
      247);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v12,
           (const char (*)[33])"[WIND_FIELD] player enter, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 251: range 0000000018053C80-0000000018053E32
void __cdecl WindFieldGallery::addAbilityGroupToSinglePlayer(WindFieldGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  PlayerAbilityGroupComp *v5; // rax
  PlayerAbilityGroupComp *v6; // rax
  PlayerAbilityGroupComp *v7; // rax
  const data::GalleryExcelConfig *config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)this);
  if ( config_ptr )
  {
    if ( !std::vector<std::string>::empty(&config_ptr->ability_group_list)
      || !std::vector<std::string>::empty(&config_ptr->team_ability_group_list) )
    {
      AbilityGroupComp = Player::getAbilityGroupComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_GALLERY, this->gallery_id_);
      v5 = Player::getAbilityGroupComp(player);
      PlayerAbilityGroupComp::addTeamAbilityGroup(v5, &config_ptr->team_ability_group_list, 0);
      v6 = Player::getAbilityGroupComp(player);
      PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v6, &config_ptr->ability_group_list, 0);
      v7 = Player::getAbilityGroupComp(player);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v7);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/wind_field_gallery.cpp",
      "addAbilityGroupToSinglePlayer",
      255);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v9,
           (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
};
