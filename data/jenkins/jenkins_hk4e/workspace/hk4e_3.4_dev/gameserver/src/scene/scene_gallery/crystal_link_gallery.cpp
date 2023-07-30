// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/crystal_link_gallery.cpp

// Line 27: range 00000000179D86DA-00000000179D8AC5
void __cdecl CrystalLinkGallery::toClient(CrystalLinkGallery *const this, proto::SceneGalleryInfo *client_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  google::protobuf::uint32 v8; // edx
  CrystalLinkDungeonContext *dungeon_context; // [rsp+20h] [rbp-1B0h]
  proto::SceneGalleryCrystalLinkInfo *detail_info; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<Scene> v11; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-190h] BYREF
  char v13[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 dungeon_scene_ptr:29 64 184 22 dungeon_context_opt:35";
  *(_QWORD *)(v2 + 16) = CrystalLinkGallery::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  BaseGallery::toClient(this, client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)&v11);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 32));
  std::shared_ptr<Scene>::~shared_ptr(&v11);
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/crystal_link_gallery.cpp",
      "toClient",
      32);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v12,
      (const char (*)[47])"[CRYSTAL_LINK] cur scene is not dungeon scene!");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
      (std::optional<CrystalLinkDungeonContext> *)(v2 + 64),
      v5);
    if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/crystal_link_gallery.cpp",
        "toClient",
        38);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v12,
        (const char (*)[51])"[CRYSTAL_LINK] dungeon has no crystal link context");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      dungeon_context = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v2 + 64));
      detail_info = proto::SceneGalleryInfo::mutable_crystal_link_info(client_info);
      M_current = std::vector<unsigned int>::end(&dungeon_context->score_vec)._M_current;
      v7._M_current = std::vector<unsigned int>::begin(&dungeon_context->score_vec)._M_current;
      v8 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
             v7,
             (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
             0);
      proto::SceneGalleryCrystalLinkInfo::set_score(detail_info, v8);
    }
    std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 48: range 00000000179D8AC6-00000000179D95B9
__int64 __fastcall CrystalLinkGallery::updatePlayerScore(
        CrystalLinkGallery *const this,
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
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-130h] BYREF
  char v33[272]; // [rsp+50h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 16 is_buff_valid:93 64 4 13 monster_id:69 80 4 10 buff_id:71 96 4 12 new_score:76 112 4 6"
                        " uid:47 128 16 13 player_ptr:62 160 32 10 notify:100";
  *(_QWORD *)(v4 + 16) = CrystalLinkGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -219021312;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 112) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( !*(_DWORD *)(v4 + 112) )
    {
      *(_DWORD *)(v4 + 96) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v32, off_26271F80, &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v32,
        (unsigned int *)(v4 + 96));
      std::string::~string(&v32);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 96);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v4 + 128), (__int64)this->scene_, *(_DWORD *)(v4 + 112));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/crystal_link_gallery.cpp",
        "updatePlayerScore",
        65);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v32,
             (const char (*)[38])"[CRYSTAL_LINK] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v32);
      v8 = -1;
LABEL_30:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
      goto LABEL_31;
    }
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v32, "monster_id", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v32,
      (unsigned int *)(v4 + 64));
    std::string::~string(&v32);
    std::allocator<char>::~allocator(&__a);
    *(_DWORD *)(v4 + 80) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v32, "buff_id", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v32,
      (unsigned int *)(v4 + 80));
    std::string::~string(&v32);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v4 + 64) )
    {
      *(_DWORD *)(v4 + 96) = 0;
      if ( CrystalLinkGallery::onMonsterKilled(this, *(_DWORD *)(v4 + 64), (uint32_t *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/crystal_link_gallery.cpp",
          "updatePlayerScore",
          79);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v32,
                (const char (*)[51])"[CRYSTAL_LINK] onMonsterKilled failed, monster_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = -1;
        goto LABEL_30;
      }
      if ( *(_DWORD *)(v4 + 96) )
      {
        proto::GalleryCrystalLinkKillMonsterNotify::GalleryCrystalLinkKillMonsterNotify((proto::GalleryCrystalLinkKillMonsterNotify *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryCrystalLinkKillMonsterNotify::set_gallery_id(
          (proto::GalleryCrystalLinkKillMonsterNotify *const)(v4 + 160),
          this->gallery_id_);
        proto::GalleryCrystalLinkKillMonsterNotify::set_score(
          (proto::GalleryCrystalLinkKillMonsterNotify *const)(v4 + 160),
          *(_DWORD *)(v4 + 96));
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Player::sendProto(v13, (const google::protobuf::Message *)(v4 + 160));
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/crystal_link_gallery.cpp",
          "updatePlayerScore",
          88);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v32,
                (const char (*)[44])"[CRYSTAL_LINK] updatePlayerScore new_score:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 96));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" ,monster_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v32);
        proto::GalleryCrystalLinkKillMonsterNotify::~GalleryCrystalLinkKillMonsterNotify((proto::GalleryCrystalLinkKillMonsterNotify *const)(v4 + 160));
      }
    }
    else if ( *(_DWORD *)(v4 + 80) )
    {
      *(_BYTE *)(v4 + 48) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v32, "is_buff_valid", &__a);
      v19 = ScriptUtil::getTableValue<bool>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v32,
              (bool *)(v4 + 48)) != 0;
      std::string::~string(&v32);
      std::allocator<char>::~allocator(&__a);
      if ( v19 )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/crystal_link_gallery.cpp",
          "updatePlayerScore",
          96);
        v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v32,
                (const char (*)[49])"[CRYSTAL_LINK] getTableValue failed, gallery_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->gallery_id_);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = -1;
        goto LABEL_30;
      }
      proto::GalleryCrystalLinkBuffInfoNotify::GalleryCrystalLinkBuffInfoNotify((proto::GalleryCrystalLinkBuffInfoNotify *const)(v4 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GalleryCrystalLinkBuffInfoNotify::set_gallery_id(
        (proto::GalleryCrystalLinkBuffInfoNotify *const)(v4 + 160),
        this->gallery_id_);
      proto::GalleryCrystalLinkBuffInfoNotify::set_buff_id(
        (proto::GalleryCrystalLinkBuffInfoNotify *const)(v4 + 160),
        *(_DWORD *)(v4 + 80));
      proto::GalleryCrystalLinkBuffInfoNotify::set_is_buff_valid(
        (proto::GalleryCrystalLinkBuffInfoNotify *const)(v4 + 160),
        *(_BYTE *)(v4 + 48));
      v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      Player::sendProto(v23, (const google::protobuf::Message *)(v4 + 160));
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/crystal_link_gallery.cpp",
        "updatePlayerScore",
        105);
      v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v32,
              (const char (*)[24])"[CRYSTAL_LINK] buff_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 80));
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v25, (const char (*)[16])" is_buff_valid:");
      v27 = common::milog::MiLogStream::operator<<(v26, *(_BYTE *)(v4 + 48));
      v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v32);
      proto::GalleryCrystalLinkBuffInfoNotify::~GalleryCrystalLinkBuffInfoNotify((proto::GalleryCrystalLinkBuffInfoNotify *const)(v4 + 160));
    }
    v8 = 0;
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/crystal_link_gallery.cpp",
    "updatePlayerScore",
    51);
  v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v32,
         (const char (*)[47])"[CRYSTAL_LINK] gallery stage incorrect, stage:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 96) = this->stage_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
  common::milog::MiLogStream::~MiLogStream(&v32);
  v8 = -1;
LABEL_31:
  result = v8;
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 111: range 00000000179D95BA-00000000179DA58A
__int64 __fastcall CrystalLinkGallery::onMonsterKilled(
        CrystalLinkGallery *const this,
        uint32_t monster_id,
        uint32_t *new_score)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  CrystalLinkDungeonContext *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // r14
  std::vector<unsigned int>::size_type v13; // r14
  std::vector<unsigned int>::size_type v14; // r14
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v17; // rdx
  float second; // xmm0_4
  unsigned int v19; // r14d
  unsigned int *v20; // rdx
  SelectType v21; // r14d
  std::vector<unsigned int>::size_type v22; // rsi
  std::vector<unsigned int>::reference v23; // rax
  SelectType *v24; // rdx
  char v25; // cl
  unsigned __int64 v26; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v28; // rax
  uint32_t v29; // edi
  bool v30; // dl
  DungeonScene *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v39; // rdx
  float v40; // xmm0_4
  unsigned int v41; // r14d
  unsigned int *v42; // rdx
  SelectType v43; // r14d
  std::vector<unsigned int>::size_type v44; // rsi
  std::vector<unsigned int>::reference v45; // rax
  SelectType *v46; // rdx
  char v47; // cl
  unsigned __int64 v48; // rax
  unsigned int *v49; // r14
  std::vector<unsigned int>::iterator v50; // rax
  uint32_t v51; // edi
  bool v52; // dl
  DungeonScene *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-3B8h] BYREF
  const GalleryCrystalLinkParam *param; // [rsp+30h] [rbp-3B0h]
  const data::ActivityCrystalLinkDifficultyExcelConfig *difficulty_config_ptr; // [rsp+38h] [rbp-3A8h]
  std::shared_ptr<Scene> v67; // [rsp+40h] [rbp-3A0h] BYREF
  common::milog::MiLogStream v68; // [rsp+50h] [rbp-390h] BYREF
  char v69[880]; // [rsp+70h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 18 cur_team_index:140 64 4 13 add_score:149 80 4 14 monster_id:110 96 8 23 normal_monster"
                        "_iter:150 128 8 24 special_monster_iter:162 160 16 21 dungeon_scene_ptr:120 192 104 13 param_opt"
                        ":112 336 176 19 dungeon_context:132 576 184 23 dungeon_context_opt:126";
  *(_QWORD *)(v3 + 16) = CrystalLinkGallery::onMonsterKilled;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862736] = -218959118;
  v5[536862737] = -218959118;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  v5[536862745] = -202116109;
  *(_DWORD *)(v3 + 80) = monster_id;
  BaseGallery::getParam<GalleryCrystalLinkParam>((std::optional<GalleryCrystalLinkParam> *)(v3 + 192), this);
  if ( !std::optional<GalleryCrystalLinkParam>::has_value((const std::optional<GalleryCrystalLinkParam> *const)(v3 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/crystal_link_gallery.cpp",
      "onMonsterKilled",
      115);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v68,
           (const char (*)[43])"[CRYSTAL_LINK] param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = -1;
  }
  else
  {
    param = std::optional<GalleryCrystalLinkParam>::value((std::optional<GalleryCrystalLinkParam> *const)(v3 + 192));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<Scene,Scene>((Scene *)&v67);
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 160));
    std::shared_ptr<Scene>::~shared_ptr(&v67);
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/crystal_link_gallery.cpp",
        "onMonsterKilled",
        123);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v68,
        (const char (*)[47])"[CRYSTAL_LINK] cur scene is not dungeon scene!");
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
        (std::optional<CrystalLinkDungeonContext> *)(v3 + 576),
        v8);
      if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v3 + 576)) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/crystal_link_gallery.cpp",
          "onMonsterKilled",
          129);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          &v68,
          (const char (*)[51])"[CRYSTAL_LINK] dungeon has no crystal link context");
        common::milog::MiLogStream::~MiLogStream(&v68);
        v7 = -1;
      }
      else
      {
        v9 = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v3 + 576));
        CrystalLinkDungeonContext::CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v3 + 336), v9);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v67);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
        difficulty_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkDifficultyExcelConfig(
                                  &v10->design_config.txt_config_mgr.activity_crystal_link_config_mgr,
                                  *(_DWORD *)(v3 + 340));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v67);
        if ( difficulty_config_ptr )
        {
          *(_DWORD *)(v3 + 48) = *(_BYTE *)(v3 + 344) == 0;
          v12 = *(unsigned int *)(v3 + 48);
          if ( v12 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 392))
            || (v13 = *(unsigned int *)(v3 + 48),
                v13 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416)))
            || (v14 = *(unsigned int *)(v3 + 48),
                v14 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 440))) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/crystal_link_gallery.cpp",
              "onMonsterKilled",
              145);
            v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v68,
                    (const char (*)[39])"[CRYSTAL_LINK] invalid cur_team_index:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v68);
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(v3 + 64) = 0;
            *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                                  &param->normal_monster_score_map,
                                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
            __y._M_node = std::map<unsigned int,unsigned int>::end(&param->normal_monster_score_map)._M_node;
            if ( std::operator!=(
                   (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
                   &__y) )
            {
              v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              second = (float)(int)v17->second;
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)difficulty_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v3 + 64) = (int)(float)(second * difficulty_config_ptr->score_ratio);
              v19 = *(_DWORD *)(v3 + 64);
              v20 = std::vector<unsigned int>::operator[](
                      (std::vector<unsigned int> *const)(v3 + 392),
                      *(unsigned int *)(v3 + 48));
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v21 = SAFE_ADD<unsigned int,unsigned int>(*v20, v19);
              v22 = *(unsigned int *)(v3 + 48);
              v23 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 392), v22);
              v24 = v23;
              v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
              if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
              {
                LOBYTE(v22) = v25 != 0;
                __asan_report_store4(v23, v22, (_BYTE)v23);
              }
              *v24 = v21;
              v26 = (unsigned __int64)std::vector<unsigned int>::operator[](
                                        (std::vector<unsigned int> *const)(v3 + 416),
                                        *(unsigned int *)(v3 + 48));
              if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
                && (char)((v26 & 7) + 3) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
              {
                v26 = __asan_report_load4();
              }
              ++*(_DWORD *)v26;
              M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 392))._M_current;
              v28._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 392))._M_current;
              v29 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                      v28,
                      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                      0);
              v30 = *(_BYTE *)(((unsigned __int64)new_score >> 3) + 0x7FFF8000) != 0
                 && (char)(((unsigned __int8)new_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_score >> 3)
                                                                             + 0x7FFF8000);
              if ( v30 )
              {
                v29 = (unsigned int)new_score;
                __asan_report_store4(new_score, ((unsigned __int8)new_score & 7u) + 3, v30);
              }
              *new_score = v29;
              v31 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
                v31,
                (const CrystalLinkDungeonContext *)(v3 + 336));
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_gallery/crystal_link_gallery.cpp",
                "onMonsterKilled",
                158);
              v32 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v68,
                      (const char (*)[48])"[CRYSTAL_LINK] kill normal monster, monster_id:");
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v3 + 80));
              v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v33,
                      (const char (*)[12])" add_score:");
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v3 + 64));
              v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v35,
                      (const char (*)[12])" new_score:");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, new_score);
              v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v37,
                      (const char (*)[17])" cur_team_index:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v68);
              v7 = 0;
            }
            else
            {
              *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                                     &param->special_monster_score_map,
                                                                                     (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
              __y._M_node = std::map<unsigned int,unsigned int>::end(&param->special_monster_score_map)._M_node;
              if ( std::operator!=(
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
                     &__y) )
              {
                v39 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v39->second >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)v39 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->second >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v40 = (float)(int)v39->second;
                if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)difficulty_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 64) = (int)(float)(v40 * difficulty_config_ptr->score_ratio);
                v41 = *(_DWORD *)(v3 + 64);
                v42 = std::vector<unsigned int>::operator[](
                        (std::vector<unsigned int> *const)(v3 + 392),
                        *(unsigned int *)(v3 + 48));
                if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v43 = SAFE_ADD<unsigned int,unsigned int>(*v42, v41);
                v44 = *(unsigned int *)(v3 + 48);
                v45 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 392), v44);
                v46 = v45;
                v47 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
                if ( v47 != 0 && (char)(((unsigned __int8)v45 & 7) + 3) >= v47 )
                {
                  LOBYTE(v44) = v47 != 0;
                  __asan_report_store4(v45, v44, (_BYTE)v45);
                }
                *v46 = v43;
                v48 = (unsigned __int64)std::vector<unsigned int>::operator[](
                                          (std::vector<unsigned int> *const)(v3 + 440),
                                          *(unsigned int *)(v3 + 48));
                if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0
                  && (char)((v48 & 7) + 3) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
                {
                  v48 = __asan_report_load4();
                }
                ++*(_DWORD *)v48;
                v49 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 392))._M_current;
                v50._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 392))._M_current;
                v51 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                        v50,
                        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v49,
                        0);
                v52 = *(_BYTE *)(((unsigned __int64)new_score >> 3) + 0x7FFF8000) != 0
                   && (char)(((unsigned __int8)new_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_score >> 3)
                                                                               + 0x7FFF8000);
                if ( v52 )
                {
                  v51 = (unsigned int)new_score;
                  __asan_report_store4(new_score, ((unsigned __int8)new_score & 7u) + 3, v52);
                }
                *new_score = v51;
                v53 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
                  v53,
                  (const CrystalLinkDungeonContext *)(v3 + 336));
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_gallery/crystal_link_gallery.cpp",
                  "onMonsterKilled",
                  170);
                v54 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v68,
                        (const char (*)[49])"[CRYSTAL_LINK] kill special monster, monster_id:");
                v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v54,
                        (const unsigned int *)(v3 + 80));
                v56 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v55,
                        (const char (*)[12])" add_score:");
                v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v56,
                        (const unsigned int *)(v3 + 64));
                v58 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v57,
                        (const char (*)[12])" new_score:");
                v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, new_score);
                v60 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v59,
                        (const char (*)[17])" cur_team_index:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v60,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v68);
                v7 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_gallery/crystal_link_gallery.cpp",
                  "onMonsterKilled",
                  174);
                v61 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                        &v68,
                        (const char (*)[51])"[CRYSTAL_LINK] kill monster not found, monster_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  (const unsigned int *)(v3 + 80));
                common::milog::MiLogStream::~MiLogStream(&v68);
                v7 = 0;
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/crystal_link_gallery.cpp",
            "onMonsterKilled",
            136);
          v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v68,
                  (const char (*)[59])"[CRYSTAL_LINK] difficulty config not found, difficulty_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 340));
          common::milog::MiLogStream::~MiLogStream(&v68);
          v7 = -1;
        }
        CrystalLinkDungeonContext::~CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v3 + 336));
      }
      std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v3 + 576));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 160));
  }
  std::optional<GalleryCrystalLinkParam>::~optional((std::optional<GalleryCrystalLinkParam> *const)(v3 + 192));
  result = v7;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8064) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 179: range 00000000179DA58C-00000000179DAC86
void __cdecl CrystalLinkGallery::onStop(CrystalLinkGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  CrystalLinkDungeonContext *v6; // rax
  GalleryProgress *v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  DungeonScene *v15; // rax
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_begin; // [rsp+18h] [rbp-308h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_end; // [rsp+20h] [rbp-300h] BYREF
  std::map<unsigned int,long unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-2F8h] BYREF
  std::map<unsigned int,long unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-2F0h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>> *__for_range; // [rsp+38h] [rbp-2E8h]
  const std::pair<const std::string,std::shared_ptr<GalleryProgress> > *v21; // [rsp+40h] [rbp-2E0h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *key; // [rsp+48h] [rbp-2D8h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *gallery_progress_ptr; // [rsp+50h] [rbp-2D0h]
  std::map<unsigned int,long unsigned int> *progress_stage_time_map; // [rsp+58h] [rbp-2C8h]
  std::map<unsigned int,long unsigned int> *__for_range_0; // [rsp+60h] [rbp-2C0h]
  const std::pair<unsigned int const,long unsigned int> *v26; // [rsp+68h] [rbp-2B8h]
  std::tuple_element<0,const std::pair<unsigned int const,long unsigned int> >::type *stage_id; // [rsp+70h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *time_ms; // [rsp+78h] [rbp-2A8h]
  std::shared_ptr<Scene> v29; // [rsp+80h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-290h] BYREF
  char v31[624]; // [rsp+B0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 21 dungeon_scene_ptr:180 80 176 19 dungeon_context:192 320 184 23 dungeon_context_opt:186";
  *(_QWORD *)(v2 + 16) = CrystalLinkGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862728] = -218959118;
  v4[536862729] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)&v29);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 48));
  std::shared_ptr<Scene>::~shared_ptr(&v29);
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/crystal_link_gallery.cpp",
      "onStop",
      183);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v30,
      (const char (*)[47])"[CRYSTAL_LINK] cur scene is not dungeon scene!");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
      (std::optional<CrystalLinkDungeonContext> *)(v2 + 320),
      v5);
    if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v2 + 320)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/crystal_link_gallery.cpp",
        "onStop",
        189);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v30,
        (const char (*)[51])"[CRYSTAL_LINK] dungeon has no crystal link context");
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v6 = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v2 + 320));
      CrystalLinkDungeonContext::CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v2 + 80), v6);
      __for_range = &this->gallery_progress_map_;
      __for_begin._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::begin(&this->gallery_progress_map_)._M_node;
      __for_end._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v21 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator*(&__for_begin);
        key = std::get<0ul,std::string const,std::shared_ptr<GalleryProgress>>(v21);
        gallery_progress_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *)std::get<1ul,std::string const,std::shared_ptr<GalleryProgress>>(v21);
        if ( !std::operator==<GalleryProgress>(gallery_progress_ptr, 0LL) )
        {
          v7 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_progress_ptr);
          progress_stage_time_map = GalleryProgress::getStageLastTimeMap(v7);
          __for_range_0 = progress_stage_time_map;
          __for_begin_0._M_node = std::map<unsigned int,unsigned long>::begin(progress_stage_time_map)._M_node;
          __for_end_0._M_node = std::map<unsigned int,unsigned long>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator*(&__for_begin_0);
            stage_id = std::get<0ul,unsigned int const,unsigned long>(v26);
            time_ms = (std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned long>(v26);
            v8 = (unsigned __int64)std::map<unsigned int,unsigned long>::operator[](
                                     (std::map<unsigned int,long unsigned int> *const)(v2 + 208),
                                     stage_id);
            if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
              v8 = __asan_report_load8();
            v9 = *(_QWORD *)v8;
            if ( *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) )
              v8 = __asan_report_load8();
            *(_QWORD *)v8 = v9 + *time_ms;
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_gallery/crystal_link_gallery.cpp",
              "onStop",
              203);
            v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v30,
                    (const char (*)[32])"[CRYSTAL_LINK] onStop stage_id:");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, stage_id);
            v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" time_ms:");
            v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, time_ms);
            v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v13,
                    (const char (*)[13])" gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream(&v30);
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator++(&__for_begin_0);
          }
        }
        std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator++(&__for_begin);
      }
      v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(v15, (const CrystalLinkDungeonContext *)(v2 + 80));
      CrystalLinkDungeonContext::~CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v2 + 80));
    }
    std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v2 + 320));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
