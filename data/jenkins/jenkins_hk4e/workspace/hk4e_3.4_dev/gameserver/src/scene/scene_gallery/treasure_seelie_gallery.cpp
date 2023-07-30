// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/treasure_seelie_gallery.cpp

// Line 21: range 000000001804724C-0000000018047323
void __cdecl TreasureSeelieGallery::toClient(TreasureSeelieGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryTreasureSeelieInfo *info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  info = proto::SceneGalleryInfo::mutable_treasure_seelie_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTreasureSeelieInfo::set_progress(info, this->progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTreasureSeelieInfo::set_goal(info, this->goal_);
};

// Line 29: range 0000000018047324-000000001804733E
void __cdecl TreasureSeelieGallery::onStart(TreasureSeelieGallery *const this)
{
  TreasureSeelieGallery::clearGalleryData(this);
};

// Line 34: range 0000000018047340-00000000180478AB
int32_t __cdecl TreasureSeelieGallery::updatePlayerScore(
        TreasureSeelieGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t v21; // ecx
  char v22; // dl
  std::set<unsigned int> *p_player_uid_set; // rsi
  bool v24; // dl
  uint32_t v25; // ecx
  char v26; // al
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 11 progress:40 64 4 7 goal:41";
  *(_QWORD *)(v4 + 16) = TreasureSeelieGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v30, "progress", &__a);
    v10 = ScriptUtil::getTableValue<unsigned int,char const(&)[5],unsigned int &>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v30,
            (unsigned int *)(v4 + 48),
            (const char (*)[5])"goal",
            (unsigned int *)(v4 + 64),
            (const char (*)[5])contex,
            (unsigned int *)param_table) != 0;
    std::string::~string(&v30);
    std::allocator<char>::~allocator(&__a);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/treasure_seelie_gallery.cpp",
        "updatePlayerScore",
        44);
      v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v30,
              (const char (*)[53])"[TREASURE SEELIE] parse progress/goal param failed! ");
      common::milog::MiLogStream::operator<<<unsigned int>(v11, &this->player_uid_set_);
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/treasure_seelie_gallery.cpp",
        "updatePlayerScore",
        47);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v30,
              (const char (*)[25])"[TREASURE SEELIE] goal: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->goal_);
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])off_264A3AE0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", progress: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->progress_);
      v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])off_264A3AE0);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])" ");
      p_player_uid_set = &this->player_uid_set_;
      common::milog::MiLogStream::operator<<<unsigned int>(v20, &this->player_uid_set_);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v21 = *(_DWORD *)(v4 + 48);
      v22 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
      LOBYTE(p_player_uid_set) = v22 != 0;
      v24 = v22 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v22;
      if ( v24 )
        __asan_report_store4(&this->progress_, p_player_uid_set, v24);
      this->progress_ = v21;
      v25 = *(_DWORD *)(v4 + 64);
      v26 = *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(p_player_uid_set) = v26 != 0;
        __asan_report_store4(&this->goal_, p_player_uid_set, (_BYTE)this + 48);
      }
      this->goal_ = v25;
      BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/treasure_seelie_gallery.cpp",
      "updatePlayerScore",
      37);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v30,
           (const char (*)[50])"[TREASURE SEELIE] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::operator<<<unsigned int>(v8, &this->player_uid_set_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  if ( v31 == (char *)v4 )
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

// Line 55: range 00000000180478AC-0000000018047948
void __cdecl TreasureSeelieGallery::clearGalleryData(TreasureSeelieGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->progress_, v1, v2);
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goal_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->goal_, v1, (_BYTE)this + 48);
  }
  this->goal_ = 0;
};
