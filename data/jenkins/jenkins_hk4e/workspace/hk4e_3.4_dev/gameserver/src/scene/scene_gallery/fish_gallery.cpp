// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fish_gallery.cpp

// Line 29: range 00000000165FA3FC-00000000165FA4FE
void __cdecl FishGallery::onStart(FishGallery *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) > 1 )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fish_gallery.cpp",
      "onStart",
      33);
    v1 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v5,
           (const char (*)[49])"[GALLERY] gallery player count >1. player count:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, &val);
    v3 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v2, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  FishGallery::clearGalleryData(this);
  FishGallery::printGalleryStartLog(this);
};

// Line 41: range 00000000165FA500-00000000165FB360
__int64 __fastcall FishGallery::updatePlayerScore(
        FishGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
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
  common::milog::MiLogStream *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::size_type v18; // r14
  std::vector<unsigned int>::size_type v19; // r14
  std::vector<unsigned int>::size_type v20; // r14
  std::vector<unsigned int>::size_type v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t *v28; // rdx
  std::vector<unsigned int>::reference v29; // rdx
  uint32_t v30; // r14d
  std::vector<unsigned int>::size_type v31; // rsi
  std::vector<unsigned int>::reference v32; // rax
  uint32_t *v33; // rdx
  char v34; // cl
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-141h] BYREF
  uint32_t i; // [rsp+30h] [rbp-140h]
  uint32_t new_fishing_score; // [rsp+34h] [rbp-13Ch]
  unsigned __int64 val; // [rsp+38h] [rbp-138h] BYREF
  common::milog::MiLogStream v43; // [rsp+40h] [rbp-130h] BYREF
  char v44[272]; // [rsp+60h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 1 10 is_free:74 48 4 10 fish_id:73 64 4 5 i:105 80 4 6 uid:40 96 16 13 player_ptr:59 128 16"
                        " 20 fishing_score_obj:75 160 24 20 fishing_score_vec:72";
  *(_QWORD *)(v4 + 16) = FishGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( !*(_DWORD *)(v4 + 80) )
    {
      *(_DWORD *)(v4 + 64) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v43, off_25D306C0, &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v43,
        (unsigned int *)(v4 + 64));
      std::string::~string(&v43);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 64);
    }
    if ( *(_DWORD *)(v4 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 96), (__int64)this->scene_, *(_DWORD *)(v4 + 80));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/fish_gallery.cpp",
          "updatePlayerScore",
          62);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v43,
               (const char (*)[33])"[GALLERY] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v8 = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                   &this->player_info_map_,
                   (const unsigned int *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/fish_gallery.cpp",
          "updatePlayerScore",
          68);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v43,
                (const char (*)[31])"[GALLERY] unknown player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v8 = -1;
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 160));
        *(_DWORD *)(v4 + 48) = 0;
        *(_BYTE *)(v4 + 32) = 0;
        luabind::adl::object::object((luabind::adl::object *const)(v4 + 128));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "fishing_score", &__a);
        v11 = ScriptUtil::getTableValue(
                &ScriptUtil::no_exception_instance,
                param_table,
                (const std::string *)&v43,
                (luabind::adl::object *)(v4 + 128)) != 0;
        std::string::~string(&v43);
        std::allocator<char>::~allocator(&__a);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/fish_gallery.cpp",
            "updatePlayerScore",
            78);
          v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v43,
                  (const char (*)[58])"[GALLERY] getTableValue fishing_score failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v8 = -1;
        }
        else if ( ScriptUtil::getTableValueAsVector<unsigned int>(
                    &ScriptUtil::no_exception_instance,
                    (const luabind::adl::object *)(v4 + 128),
                    (std::vector<unsigned int> *)(v4 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/fish_gallery.cpp",
            "updatePlayerScore",
            83);
          v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v43,
                  (const char (*)[66])"[GALLERY] getTableValueAsVector fishing_score failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v8 = -1;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "fish_id", &__a);
          v14 = ScriptUtil::getTableValue<unsigned int>(
                  &ScriptUtil::no_exception_instance,
                  param_table,
                  (const std::string *)&v43,
                  (unsigned int *)(v4 + 48)) != 0;
          std::string::~string(&v43);
          std::allocator<char>::~allocator(&__a);
          if ( v14 )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/fish_gallery.cpp",
              "updatePlayerScore",
              88);
            v15 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v43,
                    (const char (*)[60])"[GALLERY] getTableValueAsVector fish_id failed, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream(&v43);
            v8 = -1;
          }
          else
          {
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v43, "is_free", &__a);
            v16 = ScriptUtil::getTableValue<bool>(
                    &ScriptUtil::no_exception_instance,
                    param_table,
                    (const std::string *)&v43,
                    (bool *)(v4 + 32)) != 0;
            std::string::~string(&v43);
            std::allocator<char>::~allocator(&__a);
            if ( v16 )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/fish_gallery.cpp",
                "updatePlayerScore",
                93);
              v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      &v43,
                      (const char (*)[60])"[GALLERY] getTableValueAsVector is_free failed, gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->gallery_id_);
              common::milog::MiLogStream::~MiLogStream(&v43);
              v8 = -1;
            }
            else
            {
              v18 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 160));
              if ( v18 > std::vector<unsigned int>::size(&this->fishing_score_vec_) )
              {
                for ( i = std::vector<unsigned int>::size(&this->fishing_score_vec_); ; ++i )
                {
                  v19 = i;
                  if ( v19 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 160)) )
                    break;
                  *(_DWORD *)(v4 + 64) = 0;
                  std::vector<unsigned int>::push_back(
                    &this->fishing_score_vec_,
                    (std::vector<unsigned int>::value_type *)(v4 + 64));
                }
              }
              for ( *(_DWORD *)(v4 + 64) = 0; ; ++*(_DWORD *)(v4 + 64) )
              {
                v20 = *(unsigned int *)(v4 + 64);
                if ( v20 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 160)) )
                  break;
                v21 = *(unsigned int *)(v4 + 64);
                if ( v21 < std::vector<unsigned int>::size(&this->fishing_score_vec_) )
                {
                  v28 = std::vector<unsigned int>::operator[](
                          (std::vector<unsigned int> *const)(v4 + 160),
                          *(unsigned int *)(v4 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  new_fishing_score = *v28;
                  v29 = std::vector<unsigned int>::operator[](&this->fishing_score_vec_, *(unsigned int *)(v4 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( new_fishing_score > *v29 )
                  {
                    v30 = new_fishing_score;
                    v31 = *(unsigned int *)(v4 + 64);
                    v32 = std::vector<unsigned int>::operator[](&this->fishing_score_vec_, v31);
                    v33 = v32;
                    v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
                    if ( v34 != 0 && (char)(((unsigned __int8)v32 & 7) + 3) >= v34 )
                    {
                      LOBYTE(v31) = v34 != 0;
                      __asan_report_store4(v32, v31, (_BYTE)v32);
                    }
                    *v33 = v30;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v43,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/scene/scene_gallery/fish_gallery.cpp",
                    "updatePlayerScore",
                    109);
                  v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          &v43,
                          (const char (*)[29])"[GALLERY] i > score vec size");
                  v23 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v22, (const char (*)[4])",i:");
                  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v23,
                          (const unsigned int *)(v4 + 64));
                  v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])",size:");
                  val = std::vector<unsigned int>::size(&this->fishing_score_vec_);
                  v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v25, &val);
                  v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v4 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v43);
                }
              }
              if ( *(_DWORD *)(v4 + 48) )
              {
                if ( *(_BYTE *)(v4 + 32) )
                {
                  v35 = (__int64)std::map<unsigned int,FishInfo>::operator[](
                                   &this->fish_map_,
                                   (const std::map<unsigned int,FishInfo>::key_type *)(v4 + 48));
                  if ( *(_BYTE *)(((unsigned __int64)(v35 + 4) >> 3) + 0x7FFF8000) != 0
                    && (char)(((v35 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v35 + 4) >> 3) + 0x7FFF8000) )
                  {
                    v35 = __asan_report_load4();
                  }
                  ++*(_DWORD *)(v35 + 4);
                }
                else
                {
                  v36 = (unsigned __int64)std::map<unsigned int,FishInfo>::operator[](
                                            &this->fish_map_,
                                            (const std::map<unsigned int,FishInfo>::key_type *)(v4 + 48));
                  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) != 0
                    && (char)((v36 & 7) + 3) >= *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                  {
                    v36 = __asan_report_load4();
                  }
                  ++*(_DWORD *)v36;
                }
              }
              v8 = 0;
            }
          }
        }
        luabind::adl::object::~object((luabind::adl::object *const)(v4 + 128));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fish_gallery.cpp",
        "updatePlayerScore",
        55);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v43, (const char (*)[19])"[GALLERY] uid is 0");
      common::milog::MiLogStream::~MiLogStream(&v43);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fish_gallery.cpp",
      "updatePlayerScore",
      44);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v43,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v43);
    v8 = -1;
  }
  result = v8;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 134: range 00000000165FB362-00000000165FB999
void __cdecl FishGallery::onStop(FishGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  FishGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rdx
  Player *v9; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t fishing_score; // [rsp+1Ch] [rbp-124h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  proto::FishingGallerySettleInfo *gallery_settle_info; // [rsp+38h] [rbp-108h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  google::protobuf::Map<unsigned int,proto::FishInfo> *proto_fish_map; // [rsp+48h] [rbp-F8h]
  std::map<unsigned int,FishInfo> *__for_range_0; // [rsp+50h] [rbp-F0h]
  const std::pair<unsigned int const,FishInfo> *v19; // [rsp+58h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,FishInfo> >::type *fish_id; // [rsp+60h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,FishInfo> >::type *fish_info; // [rsp+68h] [rbp-D8h]
  proto::FishInfo *proto_fish_info; // [rsp+70h] [rbp-D0h]
  proto::FishingScore *fishing_score_info; // [rsp+78h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 owner_player_ptr:136 64 16 13 event_ptr:150";
  *(_QWORD *)(v2 + 16) = FishGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, FishGallery *))v6)(v2 + 32, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fish_gallery.cpp",
      "onStop",
      139);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v25,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else if ( BaseGallery::getGalleryExcelConfig(this) )
  {
    common::tools::perf::make_shared<GalleryFishSettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 64),
      &this->gallery_id_);
    gallery_settle_info = &std::__shared_ptr_access<GalleryFishSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryFishSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->gallery_settle_info;
    __for_range = &this->fishing_score_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->fishing_score_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->fishing_score_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      fishing_score = *v8;
      fishing_score_info = proto::FishingGallerySettleInfo::add_fishing_score_list(gallery_settle_info);
      proto::FishingScore::set_fishing_score(fishing_score_info, fishing_score);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    proto_fish_map = proto::FishingGallerySettleInfo::mutable_fish_map(gallery_settle_info);
    __for_range_0 = &this->fish_map_;
    __for_begin._M_current = (unsigned int *)std::map<unsigned int,FishInfo>::begin(&this->fish_map_)._M_node;
    __for_end._M_current = (unsigned int *)std::map<unsigned int,FishInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> >::_Self *)&__for_end) )
    {
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> > *const)&__for_begin);
      fish_id = std::get<0ul,unsigned int const,FishInfo>(v19);
      fish_info = (std::tuple_element<1,const std::pair<unsigned int const,FishInfo> >::type *)std::get<1ul,unsigned int const,FishInfo>(v19);
      proto_fish_info = google::protobuf::Map<unsigned int,proto::FishInfo>::operator[](proto_fish_map, fish_id);
      if ( *(_BYTE *)(((unsigned __int64)fish_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FishInfo::set_into_bag_count(proto_fish_info, fish_info->into_bag_count);
      if ( *(_BYTE *)(((unsigned __int64)&fish_info->free_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_info->free_count >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FishInfo::set_free_count(proto_fish_info, fish_info->free_count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> > *const)&__for_begin);
    }
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EventComp = Player::getEventComp(v9);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryFishSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GalleryFishSettleEvent> *)(v2 + 64));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<GalleryFishSettleEvent>::~shared_ptr((std::shared_ptr<GalleryFishSettleEvent> *const)(v2 + 64));
    FishGallery::printGalleryStopLog(this);
    FishGallery::clearGalleryData(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fish_gallery.cpp",
      "onStop",
      145);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v25,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v26 == (char *)v2 )
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

// Line 172: range 00000000165FB99A-00000000165FB9CC
void __cdecl FishGallery::clearGalleryData(FishGallery *const this)
{
  std::vector<unsigned int>::clear(&this->fishing_score_vec_);
  std::map<unsigned int,FishInfo>::clear(&this->fish_map_);
};

// Line 178: range 00000000165FB9CE-00000000165FBF52
// local variable allocation has failed, the output may be wrong!
void __cdecl FishGallery::printGalleryStartLog(FishGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 v10; // rcx
  Player *v11; // r14
  std::string v12; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v14; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+80h] [rbp-D0h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:185 64 16 20 owner_player_ptr:179 96 16 11 log_ptr:186 128 16 14 player_ptr:191";
  *(_QWORD *)(v1 + 16) = FishGallery::printGalleryStartLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  M_string_length = v12._M_string_length;
  if ( *(_BYTE *)((v12._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)v12._M_string_length + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v5)(v1 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fish_gallery.cpp",
      "printGalleryStartLog",
      182);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v19,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDB8u, v12);
    std::string::~string(&v19);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryFishStart>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v12._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v12._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryFishStart::set_gallery_id(v8, *(_DWORD *)(v12._M_string_length + 32));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGalleryFishStart::set_transaction(v9, (const std::string *)(v12._M_string_length + 64));
    __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v12._M_string_length + 144);
    *(std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)v12._anon_0._M_local_buf = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v12._M_string_length + 144));
    *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v12._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v12._M_string_length + 144));
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v12._anon_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v12._anon_0._M_allocated_capacity
            + 1) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v12._anon_0);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v14);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v14);
      if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = *(_QWORD *)(v12._M_string_length + 24);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 128), v10, *uid);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
      {
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryFishStart,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGalleryFishStart> *)(v1 + 96));
        Player::printStatLog(v11, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v12._anon_0);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryFishStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryFishStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 200: range 00000000165FBF54-00000000165FC783
void __cdecl FishGallery::printGalleryStopLog(FishGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  FishGallery *v4; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t into_bag_count; // ecx
  __int64 scene; // rcx
  Player *v15; // r14
  std::string v16; // [rsp+0h] [rbp-190h]
  FishGallery *thisa; // [rsp+8h] [rbp-188h]
  uint32_t score; // [rsp+1Ch] [rbp-174h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-160h]
  std::map<unsigned int,FishInfo> *__for_range_0; // [rsp+38h] [rbp-158h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range_1; // [rsp+40h] [rbp-150h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v24; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+58h] [rbp-138h]
  const std::pair<unsigned int const,FishInfo> *v27; // [rsp+60h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int const,FishInfo> >::type *fish_id; // [rsp+68h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,FishInfo> >::type *fish_info; // [rsp+70h] [rbp-120h]
  proto_log::GalleryFishInfo *finish_info; // [rsp+78h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+90h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-F0h] BYREF
  char v34[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v16._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:207 64 16 20 owner_player_ptr:201 96 16 11 log_ptr:208 128 16 14 player_ptr:224";
  *(_QWORD *)(v1 + 16) = FishGallery::printGalleryStopLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, FishGallery *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fish_gallery.cpp",
      "printGalleryStopLog",
      204);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v33,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDB9u, v16);
    std::string::~string(&v33);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryFishStop>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryFishStop::set_gallery_id(v8, thisa->gallery_id_);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGalleryFishStop::set_transaction(v9, &thisa->transaction_);
    __for_range = &thisa->fishing_score_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&thisa->fishing_score_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&thisa->fishing_score_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      score = *v10;
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyGalleryFishStop::add_score_list(v11, score);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &thisa->fish_map_;
    __for_begin._M_current = (unsigned int *)std::map<unsigned int,FishInfo>::begin(&thisa->fish_map_)._M_node;
    __for_end._M_current = (unsigned int *)std::map<unsigned int,FishInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> >::_Self *)&__for_end) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> > *const)&__for_begin);
      fish_id = std::get<0ul,unsigned int const,FishInfo>(v27);
      fish_info = (std::tuple_element<1,const std::pair<unsigned int const,FishInfo> >::type *)std::get<1ul,unsigned int const,FishInfo>(v27);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFishStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      finish_info = proto_log::PlayerLogBodyGalleryFishStop::add_finish_info_list(v12);
      if ( *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::GalleryFishInfo::set_fish_id(finish_info, *fish_id);
      if ( *(_BYTE *)(((unsigned __int64)fish_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      into_bag_count = fish_info->into_bag_count;
      if ( *(_BYTE *)(((unsigned __int64)&fish_info->free_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_info->free_count >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::GalleryFishInfo::set_count(finish_info, into_bag_count + fish_info->free_count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FishInfo> > *const)&__for_begin);
    }
    __for_range_1 = &thisa->player_info_map_;
    __for_begin._M_current = (unsigned int *)std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&thisa->player_info_map_)._M_node;
    __for_end._M_current = (unsigned int *)std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_end) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v24);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v24);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = (__int64)thisa->scene_;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 128), scene, *uid);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryFishStop,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGalleryFishStop> *)(v1 + 96));
        Player::printStatLog(v15, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryFishStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryFishStop> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v34 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};
