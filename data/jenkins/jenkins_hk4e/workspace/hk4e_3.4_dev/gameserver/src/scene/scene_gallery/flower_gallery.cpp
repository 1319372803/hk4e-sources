// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/flower_gallery.cpp

// Line 25: range 00000000165FC784-00000000165FCF6F
__int64 __fastcall FlowerGallery::updatePlayerScore(
        FlowerGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  bool v13; // dl
  uint32_t cur_score; // ecx
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-D5h] BYREF
  uint32_t sub_score; // [rsp+2Ch] [rbp-D4h]
  char v19[208]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 14 delta_score:45 48 4 6 uid:24 64 16 13 player_ptr:32 96 32 9 notify:69";
  *(_QWORD *)(v4 + 16) = FlowerGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v4 + 64), (__int64)this->scene_, *(_DWORD *)(v4 + 48));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/flower_gallery.cpp",
        "updatePlayerScore",
        35);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             (common::milog::MiLogStream *const)(v4 + 96),
             (const char (*)[33])"[GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      v8 = -1;
    }
    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                 &this->player_info_map_,
                 (const unsigned int *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/flower_gallery.cpp",
        "updatePlayerScore",
        41);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v4 + 96),
              (const char (*)[31])"[GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      v8 = -1;
    }
    else
    {
      *(_DWORD *)(v4 + 32) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 96), "catch_flower_score", &__a);
      v11 = ScriptUtil::getTableValue<int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)(v4 + 96),
              (int *)(v4 + 32)) != 0;
      std::string::~string((void *)(v4 + 96));
      std::allocator<char>::~allocator(&__a);
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/flower_gallery.cpp",
          "updatePlayerScore",
          48);
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)(v4 + 96),
                (const char (*)[44])"[GALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
        v8 = -1;
      }
      else
      {
        if ( *(int *)(v4 + 32) < 0 )
        {
          sub_score = abs32(*(_DWORD *)(v4 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( sub_score > this->cur_score_ )
          {
            v13 = *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
               && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3)
                                                                   + 0x7FFF8000);
            if ( v13 )
              __asan_report_store4(&this->cur_score_, (((_BYTE)this + 44) & 7u) + 3, v13);
            this->cur_score_ = 0;
          }
          else
          {
            this->cur_score_ -= sub_score;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          this->cur_score_ += *(_DWORD *)(v4 + 32);
        }
        proto::GalleryFlowerCatchNotify::GalleryFlowerCatchNotify((proto::GalleryFlowerCatchNotify *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryFlowerCatchNotify::set_gallery_id(
          (proto::GalleryFlowerCatchNotify *const)(v4 + 96),
          this->gallery_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::GalleryFlowerCatchNotify::set_cur_score(
          (proto::GalleryFlowerCatchNotify *const)(v4 + 96),
          this->cur_score_);
        BaseGallery::notifyToGalleryPlayers<proto::GalleryFlowerCatchNotify>(
          (BaseGallery *const)this,
          (proto::GalleryFlowerCatchNotify *)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        cur_score = this->cur_score_;
        if ( *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( cur_score >= this->target_score_ )
          BaseGallery::stop((BaseGallery *const)this, 1, GALLERY_STOP_NONE);
        v8 = 0;
        proto::GalleryFlowerCatchNotify::~GalleryFlowerCatchNotify((proto::GalleryFlowerCatchNotify *const)(v4 + 96));
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/flower_gallery.cpp",
      "updatePlayerScore",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)(v4 + 96),
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    v8 = -1;
  }
  result = v8;
  if ( v19 == (char *)v4 )
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

// Line 83: range 00000000165FCF70-00000000165FD08F
void __cdecl FlowerGallery::toClient(FlowerGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryFlowerInfo *flower_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  flower_info = proto::SceneGalleryInfo::mutable_flower_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFlowerInfo::set_cur_score(flower_info, this->cur_score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFlowerInfo::set_target_score(flower_info, this->target_score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFlowerInfo::set_end_time(flower_info, this->end_time_);
};

// Line 92: range 00000000165FD090-00000000165FD500
void __cdecl FlowerGallery::onStart(FlowerGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v6; // rdx
  __int64 v7; // rsi
  float coef; // [rsp+14h] [rbp-12Ch]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self __y; // [rsp+18h] [rbp-128h] BYREF
  const GalleryFlowerParam *param; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-110h] BYREF
  char v13[240]; // [rsp+50h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 16 player_count:108 64 8 13 coef_iter:110 96 64 13 param_opt:100";
  *(_QWORD *)(v1 + 16) = FlowerGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862725] = -202116109;
  if ( BaseGallery::getGalleryExcelConfig((const BaseGallery *const)this) )
  {
    BaseGallery::getParam<GalleryFlowerParam>(
      (std::optional<GalleryFlowerParam> *)(v1 + 96),
      (const BaseGallery *const)this);
    if ( !std::optional<GalleryFlowerParam>::has_value((const std::optional<GalleryFlowerParam> *const)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/flower_gallery.cpp",
        "onStart",
        103);
      v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v12,
             (const char (*)[45])"[GALLERY] flower param not find, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      param = std::optional<GalleryFlowerParam>::value((std::optional<GalleryFlowerParam> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v1 + 48) = Scene::getPlayerCount(this->scene_);
      coef = 1.0;
      *(std::map<unsigned int,float>::const_iterator *)(v1 + 64) = std::map<unsigned int,float>::find(
                                                                     &param->score_coef_map,
                                                                     (const std::map<unsigned int,float>::key_type *)(v1 + 48));
      __y._M_node = std::map<unsigned int,float>::end(&param->score_coef_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v1 + 64),
             &__y) )
      {
        v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        coef = v6->second;
      }
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v7 = (unsigned int)(int)(float)((float)(int)param->target_score * coef);
      if ( *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->target_score_, v7, (_BYTE)this + 48);
      }
      this->target_score_ = v7;
    }
    std::optional<GalleryFlowerParam>::~optional((std::optional<GalleryFlowerParam> *const)(v1 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/flower_gallery.cpp",
      "onStart",
      96);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v12,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 119: range 00000000165FD502-00000000165FD571
void __cdecl FlowerGallery::fillGalleryStartNotify(FlowerGallery *const this, proto::GalleryStartNotify *notify)
{
  proto::GalleryFlowerStartParam *start_param; // [rsp+18h] [rbp-8h]

  start_param = proto::GalleryStartNotify::mutable_flower_start_param(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GalleryFlowerStartParam::set_target_score(start_param, this->target_score_);
};
