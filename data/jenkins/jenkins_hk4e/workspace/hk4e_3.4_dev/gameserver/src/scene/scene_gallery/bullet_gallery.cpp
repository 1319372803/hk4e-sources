// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/bullet_gallery.cpp

// Line 25: range 00000000179D0278-00000000179D0421
void __cdecl BulletGallery::toClient(BulletGallery *const this, proto::SceneGalleryInfo *client_info)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v3; // rsi
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  char v6; // cl
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  proto::SceneGalleryBulletInfo *bullet_info; // [rsp+20h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_hit_count_map; // [rsp+28h] [rbp-38h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *hit_count; // [rsp+48h] [rbp-18h]

  BaseGallery::toClient(this, client_info);
  bullet_info = proto::SceneGalleryInfo::mutable_bullet_info(client_info);
  proto_hit_count_map = proto::SceneGalleryBulletInfo::mutable_hit_count_map(bullet_info);
  __for_range = &this->hit_count_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hit_count_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->hit_count_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,unsigned int>(v12);
    hit_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    if ( *(_BYTE *)(((unsigned __int64)hit_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)hit_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)hit_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *hit_count;
    v3 = uid;
    v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_hit_count_map, uid);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(v3) = v6 != 0;
      __asan_report_store4(v4, v3, (_BYTE)v4);
    }
    *v5 = v2;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBulletInfo::set_end_time(bullet_info, this->end_time_);
};

// Line 37: range 00000000179D0422-00000000179D0A8B
__int64 __fastcall BulletGallery::updatePlayerScore(
        BulletGallery *const this,
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
  unsigned __int64 v13; // rax
  google::protobuf::uint32 *v14; // rdx
  Player *v15; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  char v19[208]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 16 add_hit_count:57 48 4 6 uid:36 64 16 13 player_ptr:44 96 32 9 notify:65";
  *(_QWORD *)(v4 + 16) = BulletGallery::updatePlayerScore;
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
        "./src/scene/scene_gallery/bullet_gallery.cpp",
        "updatePlayerScore",
        47);
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
        "./src/scene/scene_gallery/bullet_gallery.cpp",
        "updatePlayerScore",
        53);
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
      std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 96), "add_hit_count", &__a);
      v11 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)(v4 + 96),
              (unsigned int *)(v4 + 32)) != 0;
      std::string::~string((void *)(v4 + 96));
      std::allocator<char>::~allocator(&__a);
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/bullet_gallery.cpp",
          "updatePlayerScore",
          60);
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)(v4 + 96),
                (const char (*)[44])"[GALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
        v8 = -1;
      }
      else
      {
        v13 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                  &this->hit_count_map_,
                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load4();
        *(_DWORD *)v13 += *(_DWORD *)(v4 + 32);
        proto::GalleryBulletHitNotify::GalleryBulletHitNotify((proto::GalleryBulletHitNotify *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBulletHitNotify::set_gallery_id(
          (proto::GalleryBulletHitNotify *const)(v4 + 96),
          this->gallery_id_);
        v14 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->hit_count_map_,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::GalleryBulletHitNotify::set_hit_count((proto::GalleryBulletHitNotify *const)(v4 + 96), *v14);
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Player::sendProto(v15, (const google::protobuf::Message *)(v4 + 96));
        v8 = 0;
        proto::GalleryBulletHitNotify::~GalleryBulletHitNotify((proto::GalleryBulletHitNotify *const)(v4 + 96));
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
      "./src/scene/scene_gallery/bullet_gallery.cpp",
      "updatePlayerScore",
      40);
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
