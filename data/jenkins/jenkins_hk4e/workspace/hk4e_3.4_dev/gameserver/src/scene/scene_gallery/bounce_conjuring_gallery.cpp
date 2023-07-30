// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/bounce_conjuring_gallery.cpp

// Line 25: range 0000000017FC00F2-0000000017FC03F3
void __cdecl BounceConjuringPlayerInfo::toSettleInfo(
        const BounceConjuringPlayerInfo *const this,
        proto::BounceConjuringGallerySettleInfo *proto_settle_info)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v3; // rsi
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  char v6; // cl
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_gadget_count_map; // [rsp+28h] [rbp-38h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v11; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gadget_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringGallerySettleInfo::set_score(proto_settle_info, this->score);
  if ( *(_BYTE *)(((unsigned __int64)&this->destroyed_machine_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->destroyed_machine_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringGallerySettleInfo::set_destroyed_machine_count(proto_settle_info, this->destroyed_machine_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringGallerySettleInfo::set_damage(proto_settle_info, this->damage);
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringGallerySettleInfo::set_normal_hit_count(proto_settle_info, this->normal_hit_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->perfect_hit_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->perfect_hit_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringGallerySettleInfo::set_perfect_hit_count(proto_settle_info, this->perfect_hit_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->fever_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fever_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringGallerySettleInfo::set_fever_count(proto_settle_info, this->fever_count);
  proto_gadget_count_map = proto::BounceConjuringGallerySettleInfo::mutable_gadget_count_map(proto_settle_info);
  __for_range = &this->gadget_count_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->gadget_count_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->gadget_count_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,unsigned int>(v11);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v11);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *count;
    v3 = gadget_id;
    v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_gadget_count_map, gadget_id);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(v3) = v6 != 0;
      __asan_report_store4(v4, v3, (_BYTE)v4);
    }
    *v5 = v2;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 40: range 0000000017FC03F4-0000000017FC0461
void __cdecl BounceConjuringGallery::toClient(BounceConjuringGallery *const this, proto::SceneGalleryInfo *client_info)
{
  uint32_t TotalScore; // edx
  uint32_t TotalDestroyedMachingCount; // edx
  proto::SceneGalleryBounceConjuringInfo *info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient(this, client_info);
  info = proto::SceneGalleryInfo::mutable_bounce_conjuring_info(client_info);
  TotalScore = BounceConjuringGallery::getTotalScore(this);
  proto::SceneGalleryBounceConjuringInfo::set_total_score(info, TotalScore);
  TotalDestroyedMachingCount = BounceConjuringGallery::getTotalDestroyedMachingCount(this);
  proto::SceneGalleryBounceConjuringInfo::set_total_destroyed_machine_count(info, TotalDestroyedMachingCount);
};

// Line 48: range 0000000017FC0462-0000000017FC0C63
__int64 __fastcall BounceConjuringGallery::updatePlayerScore(
        BounceConjuringGallery *const this,
        uint32_t uid,
        luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  __int64 result; // rax
  const char (*v15)[11]; // [rsp+10h] [rbp-150h]
  BounceConjuringGallery *thisa; // [rsp+18h] [rbp-148h]
  const char (*v17)[21]; // [rsp+20h] [rbp-140h]
  unsigned int *v18; // [rsp+28h] [rbp-138h] BYREF
  const char (*v19[38])[22]; // [rsp+30h] [rbp-130h] BYREF

  HIDWORD(v15) = uid;
  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 12 add_score:75 48 4 30 add_destroyed_machine_count:76 64 4 13 add_damage:77 80 4 23 add"
                        "_normal_hit_count:78 96 4 24 add_perfect_hit_count:79 112 4 18 add_fever_count:80 128 4 18 catch"
                        "_gadget_id:81 144 4 6 uid:47 160 16 13 player_ptr:62 192 32 10 notify:131";
  *(_QWORD *)(v4 + 16) = BounceConjuringGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -219021312;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 144) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( !*(_DWORD *)(v4 + 144) )
    {
      *(_DWORD *)(v4 + 128) = 0;
      std::allocator<char>::allocator((char *)&v18 + 7);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 192),
        off_264866C0,
        (const std::allocator<char> *)&v18 + 7);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)(v4 + 192),
        (unsigned int *)(v4 + 128));
      std::string::~string((void *)(v4 + 192));
      std::allocator<char>::~allocator((char *)&v18 + 7);
      *(_DWORD *)(v4 + 144) = *(_DWORD *)(v4 + 128);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v4 + 160), (__int64)this->scene_, *(_DWORD *)(v4 + 144));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 160)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
        "updatePlayerScore",
        65);
      v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             (common::milog::MiLogStream *const)(v4 + 192),
             (const char (*)[50])"[BOUNCE_CONJURING_GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      v8 = -1;
    }
    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                 &this->player_info_map_,
                 (const unsigned int *)(v4 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
        "updatePlayerScore",
        71);
      v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[48])"[BOUNCE_CONJURING_GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      v8 = -1;
    }
    else
    {
      *(_DWORD *)(v4 + 32) = 0;
      *(_DWORD *)(v4 + 48) = 0;
      *(_DWORD *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 80) = 0;
      *(_DWORD *)(v4 + 96) = 0;
      *(_DWORD *)(v4 + 112) = 0;
      *(_DWORD *)(v4 + 128) = 0;
      std::allocator<char>::allocator((char *)&v18 + 7);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 192),
        "add_score",
        (const std::allocator<char> *)&v18 + 7);
      ScriptUtil::getTableValue<unsigned int,char const(&)[28],int &,char const(&)[11],float &,char const(&)[21],unsigned int &,char const(&)[22],unsigned int &,char const(&)[16],unsigned int &,char const(&)[16],unsigned int &>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)(v4 + 192),
        (unsigned int *)(v4 + 32),
        (const char (*)[28])"add_destroyed_machine_count",
        (int *)(v4 + 48),
        (const char (*)[11])"add_damage",
        (float *)(v4 + 64),
        (const char (*)[21])"add_normal_hit_count",
        (unsigned int *)(v4 + 80),
        (const char (*)[22])"add_perfect_hit_count",
        (unsigned int *)(v4 + 96),
        (const char (*)[16])"add_fever_count",
        (unsigned int *)(v4 + 112),
        (const char (*)[16])"catch_gadget_id",
        (unsigned int *)(v4 + 128),
        (const char (*)[28])contex,
        (int *)param_table,
        v15,
        (float *)this,
        v17,
        v18,
        v19[0],
        (unsigned int *)v19[1],
        (const char (*)[16])v19[2],
        (unsigned int *)v19[3],
        (const char (*)[16])v19[4],
        (unsigned int *)v19[5]);
      std::string::~string((void *)(v4 + 192));
      std::allocator<char>::~allocator((char *)&v18 + 7);
      if ( *(_DWORD *)(v4 + 32) )
        BounceConjuringGallery::addScore(thisa, *(_DWORD *)(v4 + 144), *(_DWORD *)(v4 + 32));
      if ( *(int *)(v4 + 48) > 0 )
        BounceConjuringGallery::addDestroyedMachingCount(thisa, *(_DWORD *)(v4 + 144), *(_DWORD *)(v4 + 48));
      if ( *(float *)(v4 + 64) > 0.0 )
        BounceConjuringGallery::addDamage(thisa, *(_DWORD *)(v4 + 144), *(float *)(v4 + 64));
      if ( *(_DWORD *)(v4 + 80) )
        BounceConjuringGallery::addNormalHitCount(thisa, *(_DWORD *)(v4 + 144), *(_DWORD *)(v4 + 80));
      if ( *(_DWORD *)(v4 + 96) )
        BounceConjuringGallery::addPerfectHitCount(thisa, *(_DWORD *)(v4 + 144), *(_DWORD *)(v4 + 96));
      if ( *(_DWORD *)(v4 + 112) )
        BounceConjuringGallery::addFeverCount(thisa, *(_DWORD *)(v4 + 144), *(_DWORD *)(v4 + 112));
      if ( *(_DWORD *)(v4 + 128) )
        BounceConjuringGallery::addGadgetCount(thisa, *(_DWORD *)(v4 + 144), *(_DWORD *)(v4 + 128), 1u);
      BaseGallery::notifyGalleryInfo(thisa);
      if ( *(_DWORD *)(v4 + 32) || *(_DWORD *)(v4 + 80) || *(_DWORD *)(v4 + 96) )
      {
        proto::GalleryBounceConjuringHitNotify::GalleryBounceConjuringHitNotify((proto::GalleryBounceConjuringHitNotify *const)(v4 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBounceConjuringHitNotify::set_gallery_id(
          (proto::GalleryBounceConjuringHitNotify *const)(v4 + 192),
          thisa->gallery_id_);
        proto::GalleryBounceConjuringHitNotify::set_add_score(
          (proto::GalleryBounceConjuringHitNotify *const)(v4 + 192),
          *(_DWORD *)(v4 + 32));
        proto::GalleryBounceConjuringHitNotify::set_is_perfect(
          (proto::GalleryBounceConjuringHitNotify *const)(v4 + 192),
          *(_DWORD *)(v4 + 96) != 0);
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        Player::sendProto(v11, (const google::protobuf::Message *)(v4 + 192));
        proto::GalleryBounceConjuringHitNotify::~GalleryBounceConjuringHitNotify((proto::GalleryBounceConjuringHitNotify *const)(v4 + 192));
      }
      v8 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
      "updatePlayerScore",
      51);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[59])"[BOUNCE_CONJURING_GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 128) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 128));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v8 = -1;
  }
  result = v8;
  if ( v19 == (const char (**)[22])v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000017FC0D4E-0000000017FC131A
void __cdecl BounceConjuringGallery::onStart(BounceConjuringGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  BounceConjuringGallery *v4; // rdx
  unsigned __int64 v5; // rax
  Scene *scene; // r14
  __int64 v7; // rsi
  uint32_t id; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  std::unordered_map<unsigned int,data::MatchExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,data::MatchExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const std::unordered_map<unsigned int,data::MatchExcelConfig> *__for_range; // [rsp+30h] [rbp-100h]
  const std::pair<unsigned int const,data::MatchExcelConfig> *v20; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::MatchExcelConfig> >::type *_; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MatchExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-E0h] BYREF
  BounceConjuringGallery::onStart::<lambda(Player&)> v24; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 20 owner_player_ptr:143 64 16 13 event_ptr:150";
  *(_QWORD *)(v1 + 16) = BounceConjuringGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BounceConjuringGallery *))v5)(v1 + 32, v4);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
      "onStart",
      146);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v25,
      (const char (*)[55])"[BOUNCE_CONJURING_GALLERY] owner_player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    common::tools::perf::make_shared<GalleryBounceConjuringStartEvent,unsigned int &,std::string &>(
      (unsigned int *)(v1 + 64),
      (std::string *)&this->gallery_id_,
      (unsigned int *)&this->transaction_,
      (std::string *)&this->gallery_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    std::shared_ptr<GalleryBounceConjuringStartEvent>::shared_ptr(
      &v24.__event_ptr,
      (const std::shared_ptr<GalleryBounceConjuringStartEvent> *)(v1 + 64));
    v24.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<BounceConjuringGallery::onStart(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v25,
      &v24);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v25);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v25);
    BounceConjuringGallery::onStart(void)::{lambda(Player &)#1}::~Player(&v24);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.match_config_mgr.match_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    __for_begin._M_cur = std::unordered_map<unsigned int,data::MatchExcelConfig>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::MatchExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::MatchExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchExcelConfig>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,data::MatchExcelConfig>(v20);
      excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MatchExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MatchExcelConfig>(v20);
      v7 = (((_BYTE)excel_config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->match_sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->match_sub_type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( excel_config->match_sub_type == MATCH_SUB_TYPE_BOUNCE_CONJURING )
      {
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&excel_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        id = excel_config->id;
        v9 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
        if ( v9 != 0 && v9 <= 3 )
        {
          LOBYTE(v7) = v9 != 0;
          __asan_report_store4(&this->match_id_, v7, (_BYTE)this + 104);
        }
        this->match_id_ = id;
        break;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchExcelConfig>,false,false>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
      "onStart",
      169);
    v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v25,
            (const char (*)[49])"[BOUNCE_CONJURING_GALLERY] onStart, gallery_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" ,owner_uid: ");
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    val = Player::getUid(v13);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" ,match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->match_id_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<GalleryBounceConjuringStartEvent>::~shared_ptr((std::shared_ptr<GalleryBounceConjuringStartEvent> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 151: range 0000000017FC0C64-0000000017FC0D31
ForeachPolicy __cdecl BounceConjuringGallery::onStart(void)::{lambda(Player &)#1}::operator()(
        const BounceConjuringGallery::onStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> v5; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryBounceConjuringStartEvent,void>(&v5, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &v5);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v5);
  }
  return 0;
};

// Line 151: range 0000000018086BB2-0000000018086C31
void __cdecl BounceConjuringGallery::onStart(void)::{lambda(Player &)#1}::Player(
        BounceConjuringGallery::onStart::<lambda(Player&)> *const this,
        BounceConjuringGallery::onStart::<lambda(Player&)> *a2)
{
  BounceConjuringGallery *v2; // rdx

  std::shared_ptr<GalleryBounceConjuringStartEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 151: range 0000000018086CFC-0000000018086D7B
void __cdecl BounceConjuringGallery::onStart(void)::{lambda(Player &)#1}::Player(
        BounceConjuringGallery::onStart::<lambda(Player&)> *const this,
        const BounceConjuringGallery::onStart::<lambda(Player&)> *a2)
{
  BounceConjuringGallery *v2; // rdx

  std::shared_ptr<GalleryBounceConjuringStartEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 151: range 0000000017FC0D32-0000000017FC0D4C
void __cdecl BounceConjuringGallery::onStart(void)::{lambda(Player &)#1}::~Player(
        BounceConjuringGallery::onStart::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryBounceConjuringStartEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 174: range 0000000017FC1406-0000000017FC19D5
void __cdecl BounceConjuringGallery::onStop(BounceConjuringGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  BounceConjuringGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::string *v11; // r9
  std::__shared_ptr_access<GalleryBounceConjuringSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  proto::OnlinePlayerInfo *v13; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false>::pointer v14; // rax
  Scene *scene; // r14
  unsigned int *v16; // [rsp+0h] [rbp-150h]
  BounceConjuringGallery *thisa; // [rsp+8h] [rbp-148h]
  unsigned int TotalScore; // [rsp+18h] [rbp-138h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false> __y; // [rsp+30h] [rbp-120h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+38h] [rbp-118h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v24; // [rsp+40h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+48h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *online_player_info; // [rsp+50h] [rbp-100h]
  proto::BounceConjuringGallerySettleInfo *proto_settle_info; // [rsp+58h] [rbp-F8h]
  BounceConjuringGallery::onStop::<lambda(Player&)> v28; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+A0h] [rbp-B0h] BYREF

  HIDWORD(v16) = reason;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:188 64 16 20 owner_player_ptr:175 96 16 13 event_ptr:183";
  *(_QWORD *)(v2 + 16) = BounceConjuringGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BounceConjuringGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
      "onStop",
      178);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v29,
      (const char (*)[55])"[BOUNCE_CONJURING_GALLERY] owner_player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
      "onStop",
      182);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v29,
           (const char (*)[48])"[BOUNCE_CONJURING_GALLERY] onStop, gallery_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" ,owner_uid: ");
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    val = Player::getUid(v10);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    val = BounceConjuringGallery::getTotalDestroyedMachingCount(this);
    TotalScore = BounceConjuringGallery::getTotalScore(this);
    common::tools::perf::make_shared<GalleryBounceConjuringSettleEvent,unsigned int &,std::string &,unsigned int,unsigned int>(
      (unsigned int *)(v2 + 96),
      (std::string *)&this->gallery_id_,
      (unsigned int *)&this->transaction_,
      &TotalScore,
      &val,
      v11,
      v16,
      (unsigned int *)this);
    __for_range = &thisa->player_info_map_;
    __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&thisa->player_info_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v24);
      online_player_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v24);
      v12 = std::__shared_ptr_access<GalleryBounceConjuringSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBounceConjuringSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_settle_info = std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::operator[](
                            &v12->player_settle_info_map,
                            uid);
      v13 = proto::BounceConjuringGallerySettleInfo::mutable_player_info(proto_settle_info);
      proto::OnlinePlayerInfo::operator=(v13, online_player_info);
      *(std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::find(
                                                                                             &thisa->uid_info_map_,
                                                                                             uid);
      __y._M_cur = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::end(&thisa->uid_info_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false> *)(v2 + 32),
             &__y) )
      {
        v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false> *const)(v2 + 32));
        BounceConjuringPlayerInfo::toSettleInfo(&v14->second, proto_settle_info);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = thisa->scene_;
    std::shared_ptr<GalleryBounceConjuringSettleEvent>::shared_ptr(
      &v28.__event_ptr,
      (const std::shared_ptr<GalleryBounceConjuringSettleEvent> *)(v2 + 96));
    v28.__this = thisa;
    std::function<ForeachPolicy ()(Player &)>::function<BounceConjuringGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v29,
      &v28);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v29);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v29);
    BounceConjuringGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(&v28);
    std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::clear(&thisa->uid_info_map_);
    std::shared_ptr<GalleryBounceConjuringSettleEvent>::~shared_ptr((std::shared_ptr<GalleryBounceConjuringSettleEvent> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v30 == (char *)v2 )
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

// Line 195: range 0000000017FC131C-0000000017FC13E9
ForeachPolicy __cdecl BounceConjuringGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::operator()(
        const BounceConjuringGallery::onStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> v5; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryBounceConjuringSettleEvent,void>(&v5, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &v5);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v5);
  }
  return 0;
};

// Line 195: range 0000000018086E6E-0000000018086EED
void __cdecl BounceConjuringGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        BounceConjuringGallery::onStop::<lambda(Player&)> *const this,
        BounceConjuringGallery::onStop::<lambda(Player&)> *a2)
{
  BounceConjuringGallery *v2; // rdx

  std::shared_ptr<GalleryBounceConjuringSettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 195: range 0000000018086FB8-0000000018087037
void __cdecl BounceConjuringGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        BounceConjuringGallery::onStop::<lambda(Player&)> *const this,
        const BounceConjuringGallery::onStop::<lambda(Player&)> *a2)
{
  BounceConjuringGallery *v2; // rdx

  std::shared_ptr<GalleryBounceConjuringSettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 195: range 0000000017FC13EA-0000000017FC1404
void __cdecl BounceConjuringGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(
        BounceConjuringGallery::onStop::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryBounceConjuringSettleEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 208: range 0000000017FC19D6-0000000017FC1AB5
void __cdecl BounceConjuringGallery::onPlayerLeaveScene(BounceConjuringGallery *const this, Player *player)
{
  char v2; // al
  PlayerMatchComp *MatchComp; // rcx

  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) <= 1 )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getPlayerCount(this->scene_) )
    v2 = 1;
  else
LABEL_6:
    v2 = 0;
  if ( v2 )
  {
    MatchComp = Player::getMatchComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerMatchComp::matchPunish(MatchComp, this->match_id_);
  }
  BaseGallery::onPlayerLeaveScene(this, player);
};

// Line 221: range 0000000017FC1AB6-0000000017FC1BCF
void __fastcall BounceConjuringGallery::addScore(BounceConjuringGallery *const this, uint32_t uid, uint32_t add_score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BounceConjuringPlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:220";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::addScore;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  player_info->score += add_score;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 227: range 0000000017FC1BD0-0000000017FC1CF7
void __fastcall BounceConjuringGallery::addDestroyedMachingCount(
        BounceConjuringGallery *const this,
        uint32_t uid,
        uint32_t add_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BounceConjuringPlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:226";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::addDestroyedMachingCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&player_info->destroyed_machine_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->destroyed_machine_count >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_info->destroyed_machine_count += add_count;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 233: range 0000000017FC1CF8-0000000017FC1E1D
void __fastcall BounceConjuringGallery::addDamage(BounceConjuringGallery *const this, uint32_t uid, float add_damage)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BounceConjuringPlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:232";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::addDamage;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&player_info->damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player_info->damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  player_info->damage = player_info->damage + add_damage;
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 239: range 0000000017FC1E1E-0000000017FC1F45
void __fastcall BounceConjuringGallery::addNormalHitCount(
        BounceConjuringGallery *const this,
        uint32_t uid,
        uint32_t add_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BounceConjuringPlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:238";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::addNormalHitCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&player_info->normal_hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->normal_hit_count >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_info->normal_hit_count += add_count;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 245: range 0000000017FC1F46-0000000017FC2065
void __fastcall BounceConjuringGallery::addPerfectHitCount(
        BounceConjuringGallery *const this,
        uint32_t uid,
        uint32_t add_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BounceConjuringPlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:244";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::addPerfectHitCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&player_info->perfect_hit_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player_info->perfect_hit_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  player_info->perfect_hit_count += add_count;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 251: range 0000000017FC2066-0000000017FC218D
void __fastcall BounceConjuringGallery::addFeverCount(
        BounceConjuringGallery *const this,
        uint32_t uid,
        uint32_t add_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BounceConjuringPlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:250";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::addFeverCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&player_info->fever_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)player_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->fever_count >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_info->fever_count += add_count;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 257: range 0000000017FC218E-0000000017FC2316
void __fastcall BounceConjuringGallery::addGadgetCount(
        BounceConjuringGallery *const this,
        uint32_t uid,
        uint32_t gadget_id,
        uint32_t add_count)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  BounceConjuringPlayerInfo *player_info; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 uid:256 64 4 13 gadget_id:256";
  *(_QWORD *)(v4 + 16) = BounceConjuringGallery::addGadgetCount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = uid;
  *(_DWORD *)(v4 + 64) = gadget_id;
  player_info = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::operator[](
                  &this->uid_info_map_,
                  (const std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::key_type *)(v4 + 48));
  v7 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                           &player_info->gadget_count_map,
                           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 64));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load4();
  *(_DWORD *)v7 += add_count;
  if ( v11 == (char *)v4 )
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
};

// Line 263: range 0000000017FC2318-0000000017FC23ED
uint32_t __cdecl BounceConjuringGallery::getTotalScore(const BounceConjuringGallery *const this)
{
  uint32_t total_score; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,BounceConjuringPlayerInfo> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,BounceConjuringPlayerInfo> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,BounceConjuringPlayerInfo> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringPlayerInfo> >::type *player_info; // [rsp+48h] [rbp-8h]

  total_score = 0;
  __for_range = &this->uid_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::begin(&this->uid_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::end(&this->uid_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BounceConjuringPlayerInfo>(v6);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringPlayerInfo> >::type *)std::get<1ul,unsigned int const,BounceConjuringPlayerInfo>(v6);
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    total_score += player_info->score;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  return total_score;
};

// Line 273: range 0000000017FC23EE-0000000017FC24D4
uint32_t __cdecl BounceConjuringGallery::getTotalDestroyedMachingCount(const BounceConjuringGallery *const this)
{
  uint32_t total_count; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,BounceConjuringPlayerInfo> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,BounceConjuringPlayerInfo> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,BounceConjuringPlayerInfo> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringPlayerInfo> >::type *player_info; // [rsp+48h] [rbp-8h]

  total_count = 0;
  __for_range = &this->uid_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::begin(&this->uid_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BounceConjuringPlayerInfo>::end(&this->uid_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BounceConjuringPlayerInfo>(v6);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringPlayerInfo> >::type *)std::get<1ul,unsigned int const,BounceConjuringPlayerInfo>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&player_info->destroyed_machine_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->destroyed_machine_count >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_count += player_info->destroyed_machine_count;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,BounceConjuringPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  return total_count;
};

// Line 283: range 0000000017FC24D6-0000000017FC303D
__int64 __fastcall BounceConjuringGallery::updatePlayerScoreByGm(
        BounceConjuringGallery *const this,
        uint32_t uid,
        std::unordered_map<std::string,unsigned int> *param_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t *v10; // rdx
  int32_t *v11; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v12; // rdx
  uint32_t *v13; // rdx
  uint32_t *v14; // rdx
  uint32_t *v15; // rdx
  uint32_t *v16; // rdx
  Player *v17; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  unsigned int val; // [rsp+30h] [rbp-F0h] BYREF
  uint32_t add_score; // [rsp+34h] [rbp-ECh]
  int32_t add_destroyed_machine_count; // [rsp+38h] [rbp-E8h]
  float add_damage; // [rsp+3Ch] [rbp-E4h]
  uint32_t add_normal_hit_count; // [rsp+40h] [rbp-E0h]
  uint32_t add_perfect_hit_count; // [rsp+44h] [rbp-DCh]
  uint32_t add_fever_count; // [rsp+48h] [rbp-D8h]
  uint32_t catch_gadget_id; // [rsp+4Ch] [rbp-D4h]
  char v29[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:282 64 16 14 player_ptr:290 96 32 10 notify:350";
  *(_QWORD *)(v3 + 16) = BounceConjuringGallery::updatePlayerScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
        "updatePlayerScoreByGm",
        293);
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[50])"[BOUNCE_CONJURING_GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v7 = -1;
    }
    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                 &this->player_info_map_,
                 (const unsigned int *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
        "updatePlayerScoreByGm",
        299);
      v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[48])"[BOUNCE_CONJURING_GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v7 = -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), "ADD_SCORE", &__a);
      v10 = std::unordered_map<std::string,unsigned int>::operator[](
              param_map,
              (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      add_score = *v10;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 96),
        "ADD_DESTROYED_MACHINE_COUNT",
        &__a);
      v11 = (int32_t *)std::unordered_map<std::string,unsigned int>::operator[](
                         param_map,
                         (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      add_destroyed_machine_count = *v11;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), "ADD_DAMAGE", &__a);
      v12 = std::unordered_map<std::string,unsigned int>::operator[](
              param_map,
              (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      add_damage = (float)(int)*v12;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), "ADD_NORMAL_HIT_COUNT", &__a);
      v13 = std::unordered_map<std::string,unsigned int>::operator[](
              param_map,
              (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      add_normal_hit_count = *v13;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), "ADD_PERFECT_HIT_COUNT", &__a);
      v14 = std::unordered_map<std::string,unsigned int>::operator[](
              param_map,
              (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      add_perfect_hit_count = *v14;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), "ADD_FEVER_COUNT", &__a);
      v15 = std::unordered_map<std::string,unsigned int>::operator[](
              param_map,
              (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      add_fever_count = *v15;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), "CATCH_GADGET_ID", &__a);
      v16 = std::unordered_map<std::string,unsigned int>::operator[](
              param_map,
              (std::unordered_map<std::string,unsigned int>::key_type *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      catch_gadget_id = *v16;
      std::string::~string((void *)(v3 + 96));
      std::allocator<char>::~allocator(&__a);
      if ( add_score )
        BounceConjuringGallery::addScore(this, *(_DWORD *)(v3 + 48), add_score);
      if ( add_destroyed_machine_count > 0 )
        BounceConjuringGallery::addDestroyedMachingCount(this, *(_DWORD *)(v3 + 48), add_destroyed_machine_count);
      if ( add_damage > 0.0 )
        BounceConjuringGallery::addDamage(this, *(_DWORD *)(v3 + 48), add_damage);
      if ( add_normal_hit_count )
        BounceConjuringGallery::addNormalHitCount(this, *(_DWORD *)(v3 + 48), add_normal_hit_count);
      if ( add_perfect_hit_count )
        BounceConjuringGallery::addPerfectHitCount(this, *(_DWORD *)(v3 + 48), add_perfect_hit_count);
      if ( add_fever_count )
        BounceConjuringGallery::addFeverCount(this, *(_DWORD *)(v3 + 48), add_fever_count);
      if ( catch_gadget_id )
        BounceConjuringGallery::addGadgetCount(this, *(_DWORD *)(v3 + 48), catch_gadget_id, 1u);
      BaseGallery::notifyGalleryInfo(this);
      if ( add_score || add_normal_hit_count || add_perfect_hit_count )
      {
        proto::GalleryBounceConjuringHitNotify::GalleryBounceConjuringHitNotify((proto::GalleryBounceConjuringHitNotify *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBounceConjuringHitNotify::set_gallery_id(
          (proto::GalleryBounceConjuringHitNotify *const)(v3 + 96),
          this->gallery_id_);
        proto::GalleryBounceConjuringHitNotify::set_add_score(
          (proto::GalleryBounceConjuringHitNotify *const)(v3 + 96),
          add_score);
        proto::GalleryBounceConjuringHitNotify::set_is_perfect(
          (proto::GalleryBounceConjuringHitNotify *const)(v3 + 96),
          add_perfect_hit_count != 0);
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::sendProto(v17, (const google::protobuf::Message *)(v3 + 96));
        proto::GalleryBounceConjuringHitNotify::~GalleryBounceConjuringHitNotify((proto::GalleryBounceConjuringHitNotify *const)(v3 + 96));
      }
      v7 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/bounce_conjuring_gallery.cpp",
      "updatePlayerScoreByGm",
      286);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[59])"[BOUNCE_CONJURING_GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v7 = -1;
  }
  result = v7;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
