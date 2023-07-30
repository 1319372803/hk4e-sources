// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/hide_and_seek_gallery.cpp

// Line 24: range 0000000016603E2E-0000000016603F39
void __cdecl HideAndSeekGallery::toClient(HideAndSeekGallery *const this, proto::SceneGalleryInfo *client_info)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::SceneGalleryHideAndSeekInfo *hide_and_seek_info; // [rsp+30h] [rbp-10h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  BaseGallery::toClient(this, client_info);
  hide_and_seek_info = proto::SceneGalleryInfo::mutable_hide_and_seek_info(client_info);
  v2 = proto::SceneGalleryHideAndSeekInfo::mutable_visible_uid_list(hide_and_seek_info);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->hunter_visible_uid_vec_, v2);
  __for_range = &this->caught_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->caught_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->caught_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneGalleryHideAndSeekInfo::add_caught_uid_list(hide_and_seek_info, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
};

// Line 37: range 0000000016603F3A-000000001660558A
int32_t __cdecl HideAndSeekGallery::updatePlayerScore(
        HideAndSeekGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rcx
  bool v9; // r15
  common::milog::MiLogStream *v10; // rax
  bool v11; // r15
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rdx
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int> *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t MultistagePlayComp; // esi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  HideAndSeekMultistagePlay *v33; // rax
  common::milog::MiLogStream *v34; // rax
  bool v35; // r15
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  uint32_t v38; // esi
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int v45; // r15d
  HideAndSeekMultistagePlay *v46; // r15
  uint32_t Now; // eax
  std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  bool v49; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+35h] [rbp-14Bh] BYREF
  std::optional<bool> v64; // [rsp+36h] [rbp-14Ah] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-148h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-140h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v68; // [rsp+50h] [rbp-130h] BYREF
  char v69[272]; // [rsp+70h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 1 17 is_hunter_win:103 48 4 13 ghost_uid:124 64 16 12 play_ptr:112 96 24 18 visible_uid_vec"
                        ":53 160 32 14 update_type:44";
  *(_QWORD *)(v5 + 16) = HideAndSeekGallery::updatePlayerScore;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -219021312;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    std::string::basic_string(v5 + 160);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v68, "update_type", &__a);
    v9 = ScriptUtil::getTableValue<std::string>(
           &ScriptUtil::no_exception_instance,
           param_table,
           (const std::string *)&v68,
           (std::string *)(v5 + 160)) != 0;
    std::string::~string(&v68);
    std::allocator<char>::~allocator(&__a);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
        "updatePlayerScore",
        47);
      v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v68,
              (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v4 = -1;
LABEL_69:
      std::string::~string((void *)(v5 + 160));
      goto LABEL_70;
    }
    if ( std::operator==<char>((const std::string *)(v5 + 160), "updateVisibleUidList") )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v68, "uid_list", &__a);
      v11 = ScriptUtil::getTableValue<std::vector<unsigned int>>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v68,
              (std::vector<unsigned int> *)(v5 + 96)) != 0;
      std::string::~string(&v68);
      std::allocator<char>::~allocator(&__a);
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          56);
        v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v68,
                (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        v13 = 0;
      }
      else
      {
        __for_range = (std::vector<unsigned int> *)(v5 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v5 + 48) = *v14;
          if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                  &this->player_info_map_,
                  (const unsigned int *)(v5 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
              "updatePlayerScore",
              63);
            v15 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v68,
                    (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream(&v68);
            v4 = -1;
            v13 = 0;
            goto LABEL_23;
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v16 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v5 + 96));
        std::vector<unsigned int>::operator=(&this->hunter_visible_uid_vec_, v16);
        BaseGallery::notifyGalleryInfo(this);
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          70);
        v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v68,
                (const char (*)[43])"[HIDEANDSEEKGALLERY] updateVisibleUidList:");
        common::milog::MiLogStream::operator<<<unsigned int>(v17, &this->hunter_visible_uid_vec_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v13 = 1;
      }
LABEL_23:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 96));
      if ( v13 != 1 )
        goto LABEL_69;
    }
    else if ( std::operator==<char>((const std::string *)(v5 + 160), "updateCaughtUid") )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v68, "caught_uid", &__a);
      v18 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v68,
              (unsigned int *)(v5 + 48)) != 0;
      std::string::~string(&v68);
      std::allocator<char>::~allocator(&__a);
      if ( v18 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          77);
        v19 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v68,
                (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
              &this->player_info_map_,
              (const unsigned int *)(v5 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          82);
        v20 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v68,
                (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      v21 = std::set<unsigned int>::insert(
              &this->caught_uid_set_,
              (const std::set<unsigned int>::value_type *)(v5 + 48));
      if ( !v21.second )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          87);
        v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v68,
                (const char (*)[43])"[HIDEANDSEEKGALLERY] duplicate caught_uid:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v5 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      BaseGallery::notifyGalleryInfo(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MultistagePlayComp = (unsigned int)Scene::getMultistagePlayComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneMultistagePlayComp::findPlay<HideAndSeekMultistagePlay>(
        (const SceneMultistagePlayComp *const)(v5 + 64),
        MultistagePlayComp,
        this->multistage_group_id_);
      if ( std::operator==<HideAndSeekMultistagePlay>(
             (const std::shared_ptr<HideAndSeekMultistagePlay> *)(v5 + 64),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          94);
        v26 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                &v68,
                (const char (*)[89])"[HideAndSeekMultistagePlay] find HideAndSeekMultistagePlay play_ptr is null, play_index:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->multistage_play_index_);
        v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])", group_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->multistage_group_id_);
        v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])"[uid: ");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &context->uid);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        v32 = 0;
      }
      else
      {
        v33 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        HideAndSeekMultistagePlay::recordCaughtUid(v33, *(_DWORD *)(v5 + 48));
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          99);
        v34 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v68,
                (const char (*)[38])"[HIDEANDSEEKGALLERY] updateCaughtUid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v68);
        v32 = 1;
      }
      std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v5 + 64));
      if ( v32 != 1 )
        goto LABEL_69;
    }
    else if ( std::operator==<char>((const std::string *)(v5 + 160), "updateGalleryResult") )
    {
      *(_BYTE *)(v5 + 32) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v68, "is_hunter_win", &__a);
      v35 = ScriptUtil::getTableValue<bool>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v68,
              (bool *)(v5 + 32)) != 0;
      std::string::~string(&v68);
      std::allocator<char>::~allocator(&__a);
      if ( v35 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          106);
        v36 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v68,
                (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
        "updatePlayerScore",
        109);
      v37 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v68,
              (const char (*)[36])"[HIDEANDSEEKGALLERY] is_hunter_win:");
      common::milog::MiLogStream::operator<<(v37, *(_BYTE *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v68);
      std::optional<bool>::optional<bool &,true>(&v64, (bool *)(v5 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->result_opt_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->result_opt_ >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_store2(&this->result_opt_);
      }
      this->result_opt_ = v64;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v38 = (unsigned int)Scene::getMultistagePlayComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->multistage_play_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->multistage_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneMultistagePlayComp::findPlay<HideAndSeekMultistagePlay>(
        (const SceneMultistagePlayComp *const)(v5 + 64),
        v38,
        this->multistage_group_id_);
      if ( std::operator==<HideAndSeekMultistagePlay>(
             (const std::shared_ptr<HideAndSeekMultistagePlay> *)(v5 + 64),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          115);
        v39 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                &v68,
                (const char (*)[89])"[HideAndSeekMultistagePlay] find HideAndSeekMultistagePlay play_ptr is null, play_index:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &this->multistage_play_index_);
        v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v40, (const char (*)[12])", group_id:");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &this->multistage_group_id_);
        v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])"[uid: ");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &context->uid);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v44, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        v45 = 0;
      }
      else
      {
        v46 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        Now = common::tools::TimeUtils::getNow();
        HideAndSeekMultistagePlay::recordSettleTime(v46, Now);
        v48 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        SceneMultistagePlay::endStage(v48, 1);
        v45 = 1;
      }
      std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v5 + 64));
      if ( v45 != 1 )
        goto LABEL_69;
    }
    else
    {
      if ( !std::operator==<char>((const std::string *)(v5 + 160), "updateGhostUid") )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          146);
        v57 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v68,
                (const char (*)[42])"[HIDEANDSEEKGALLERY] unknown update_type:");
        v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, (const std::string *)(v5 + 160));
        v59 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v58, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v68, "ghost_uid", &__a);
      v49 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v68,
              (unsigned int *)(v5 + 48)) != 0;
      std::string::~string(&v68);
      std::allocator<char>::~allocator(&__a);
      if ( v49 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          127);
        v50 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v68,
                (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
              &this->player_info_map_,
              (const unsigned int *)(v5 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          132);
        v51 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v68,
                (const char (*)[55])"[HIDEANDSEEKGALLERY] getTableValue failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      v52 = std::set<unsigned int>::insert(&this->ghost_uid_set_, (const std::set<unsigned int>::value_type *)(v5 + 48));
      if ( !v52.second )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
          "updatePlayerScore",
          137);
        v53 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v68,
                (const char (*)[42])"[HIDEANDSEEKGALLERY] duplicate ghost_uid:");
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v53,
                (const unsigned int *)(v5 + 48));
        v55 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v54, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = -1;
        goto LABEL_69;
      }
      HideAndSeekGallery::notifyPlayerCaptured(this, *(_DWORD *)(v5 + 48));
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
        "updatePlayerScore",
        142);
      v56 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v68,
              (const char (*)[37])"[HIDEANDSEEKGALLERY] updateGhostUid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v68);
    }
    v4 = 0;
    goto LABEL_69;
  }
  common::milog::MiLogStream::create(
    &v68,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
    "updatePlayerScore",
    40);
  v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
         &v68,
         (const char (*)[53])"[HIDEANDSEEKGALLERY] gallery stage incorrect, stage:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = this->stage_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
  common::milog::MiLogStream::~MiLogStream(&v68);
  v4 = -1;
LABEL_70:
  result = v4;
  if ( v69 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 154: range 000000001660558C-000000001660561E
void __cdecl HideAndSeekGallery::onPlayerEnter(HideAndSeekGallery *const this, Player *player)
{
  PlayerMpComp *MpComp; // rax
  unsigned int value; // [rsp+14h] [rbp-1Ch] BYREF
  proto::OnlinePlayerInfo *online_player_info; // [rsp+18h] [rbp-18h]

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value) )
  {
    value = Player::getUid(player);
    online_player_info = std::map<unsigned int,proto::OnlinePlayerInfo>::operator[](&this->player_info_map_, &value);
    MpComp = Player::getMpComp(player);
    PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
  }
};

// Line 164: range 0000000016605620-000000001660591C
void __fastcall HideAndSeekGallery::notifyPlayerCaptured(const HideAndSeekGallery *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  uint32_t GhostSkillId; // eax
  Player *v7; // rax
  ActivityHideAndSeekExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:163 64 16 14 player_ptr:165 96 24 10 notify:172";
  *(_QWORD *)(v2 + 16) = HideAndSeekGallery::notifyPlayerCaptured;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v2 + 64), (__int64)this->scene_, *(_DWORD *)(v2 + 48));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/hide_and_seek_gallery.cpp",
      "notifyPlayerCaptured",
      168);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v10,
           (const char (*)[44])"[HIDEANDSEEKGALLERY] player not found, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v9);
    proto::HideAndSeekPlayerCapturedNotify::HideAndSeekPlayerCapturedNotify((proto::HideAndSeekPlayerCapturedNotify *const)(v2 + 96));
    GhostSkillId = ActivityHideAndSeekExcelConfigMgr::getGhostSkillId(config_mgr);
    proto::HideAndSeekPlayerCapturedNotify::set_ghost_skill_id(
      (proto::HideAndSeekPlayerCapturedNotify *const)(v2 + 96),
      GhostSkillId);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::sendProto(v7, (const google::protobuf::Message *)(v2 + 96));
    proto::HideAndSeekPlayerCapturedNotify::~HideAndSeekPlayerCapturedNotify((proto::HideAndSeekPlayerCapturedNotify *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v11 == (char *)v2 )
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
};
