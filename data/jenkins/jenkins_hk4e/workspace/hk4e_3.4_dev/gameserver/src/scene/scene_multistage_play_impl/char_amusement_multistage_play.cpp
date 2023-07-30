// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp

// Line 27: range 000000001805B6FA-000000001805B71C
int32_t __cdecl CharAmusementMultistagePlay::initByParamTable(
        CharAmusementMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  CharAmusementMultistagePlay::initByDungeonContext(this);
  return 0;
};

// Line 34: range 000000001805B71E-000000001805BAE5
int32_t __cdecl CharAmusementMultistagePlay::initStage(
        CharAmusementMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  unsigned int val; // [rsp+30h] [rbp-40h] BYREF
  int32_t ret; // [rsp+34h] [rbp-3Ch]
  char *v17; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  ret = 0;
  if ( stage_type == MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "initStage",
      40);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v18,
           (const char (*)[32])"preview stage init, owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return CharAmusementMultistagePlay::initPreviewStage(this, param_table);
  }
  else
  {
    if ( stage_type > MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
    {
LABEL_15:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initStage",
        58);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v18,
             (const char (*)[21])"invalid stage type: ");
      v17 = (char *)data::enumValToStr(stage_type);
      v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&v17);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return SceneMultistagePlay::initStage(this, stage_type, duration, stage_name, param_table);
    }
    if ( stage_type == MULTISTAGE_STAGE_IDLE )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initStage",
        52);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v18,
             (const char (*)[29])"idle stage init, owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return SceneMultistagePlay::initStage(this, stage_type, duration, stage_name, param_table);
    }
    else
    {
      if ( stage_type != MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY )
        goto LABEL_15;
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initStage",
        46);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v18,
             (const char (*)[32])"gallery stage init, owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return CharAmusementMultistagePlay::initGalleryStage(this, param_table);
    }
  }
};

// Line 67: range 000000001805BAE6-000000001805C0EA
int32_t __cdecl CharAmusementMultistagePlay::toClient(
        const CharAmusementMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  common::milog::MiLogStream *v2; // rbx
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v5; // rax
  google::protobuf::uint32 v6; // eax
  std::vector<unsigned int>::size_type v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int> *p_level_id_vec; // rcx
  google::protobuf::uint32 *v12; // rdx
  google::protobuf::uint32 v13; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-80h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-78h] BYREF
  proto::CharAmusementInfo *char_amusement_info; // [rsp+40h] [rbp-70h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+48h] [rbp-68h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v21; // [rsp+50h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *uid; // [rsp+58h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *avatar_id_vec; // [rsp+60h] [rbp-50h]
  proto::CharAmusementAvatarInfo *avatar_info; // [rsp+68h] [rbp-48h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-40h]
  const unsigned int *avatar_id; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "toClient",
      70);
    v2 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v27,
           (const char (*)[50])"SceneMultistagePlay::toClient failed, owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    return -1;
  }
  else
  {
    char_amusement_info = proto::MultistagePlayInfo::mutable_char_amusement_info(info);
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CharAmusementInfo::set_preview_stage_index(char_amusement_info, this->preview_stage_index_);
    M_current = std::vector<unsigned int>::end(&this->cost_time_vec_)._M_current;
    v5._M_current = std::vector<unsigned int>::begin(&this->cost_time_vec_)._M_current;
    v6 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
           v5,
           (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
           0);
    proto::CharAmusementInfo::set_total_cost_time(char_amusement_info, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v7 = this->preview_stage_index_ - 1;
    if ( v7 < std::vector<unsigned int>::size(&this->level_id_vec_) )
    {
      p_level_id_vec = &this->level_id_vec_;
      if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](
                                          p_level_id_vec,
                                          this->preview_stage_index_ - 1);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::CharAmusementInfo::set_level_id(char_amusement_info, *v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "toClient",
        80);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v27,
             (const char (*)[22])"preview_stage_index: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->preview_stage_index_);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])", level_id_vec: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v10, &this->level_id_vec_);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    __for_range = &this->uid_avatar_vec_map_;
    __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(&this->uid_avatar_vec_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(&this->uid_avatar_vec_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v21);
      avatar_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v21);
      avatar_info = proto::CharAmusementInfo::add_avatar_info_list(char_amusement_info);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::CharAmusementAvatarInfo::set_uid(avatar_info, *uid);
      __for_range_0 = avatar_id_vec;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::CharAmusementAvatarInfo::add_avatar_id_list(avatar_info, *avatar_id);
        if ( std::set<unsigned int>::size(&this->team_uid_set_) > 1 )
        {
          v13 = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                  &this->uid_punish_time_map_,
                  uid,
                  0);
          proto::CharAmusementAvatarInfo::set_punish_time(avatar_info, v13);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CharAmusementInfo::set_stage_id(char_amusement_info, this->stage_id_);
    return 0;
  }
};

// Line 105: range 000000001805C0EC-000000001805C4BC
void __cdecl CharAmusementMultistagePlay::onStageStart(CharAmusementMultistagePlay *const this)
{
  data::MultistageStageType stage_type; // eax
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  char *v9; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "onStageStart",
      110);
    v2 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v10,
           (const char (*)[33])"preview stage start, owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    CharAmusementMultistagePlay::onPreviewStageStart(this);
  }
  else
  {
    if ( stage_type > MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
    {
LABEL_17:
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "onStageStart",
        127);
      v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v10,
             (const char (*)[21])"invalid stage type: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v9 = (char *)data::enumValToStr(this->stage_type_);
      v6 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v5, (const char *const *)&v9);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return;
    }
    if ( stage_type == MULTISTAGE_STAGE_IDLE )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "onStageStart",
        122);
      v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v10,
             (const char (*)[30])"idle stage start, owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      if ( stage_type != MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY )
        goto LABEL_17;
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "onStageStart",
        116);
      v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v10,
             (const char (*)[33])"gallery stage start, owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      CharAmusementMultistagePlay::onGalleryStageStart(this);
    }
  }
};

// Line 134: range 000000001805C4BE-000000001805C899
void __cdecl CharAmusementMultistagePlay::onStageEnd(CharAmusementMultistagePlay *const this, bool is_succ)
{
  data::MultistageStageType stage_type; // eax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  char *v10; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "onStageEnd",
      139);
    v3 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v11,
           (const char (*)[31])"preview stage end, owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    CharAmusementMultistagePlay::onPreviewStageEnd(this);
  }
  else
  {
    if ( stage_type > MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
    {
LABEL_17:
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "onStageEnd",
        156);
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v11,
             (const char (*)[21])"invalid stage type: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v10 = (char *)data::enumValToStr(this->stage_type_);
      v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)&v10);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return;
    }
    if ( stage_type == MULTISTAGE_STAGE_IDLE )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "onStageEnd",
        151);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v11,
             (const char (*)[28])"idle stage end, owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    else
    {
      if ( stage_type != MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY )
        goto LABEL_17;
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "onStageEnd",
        145);
      v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v11,
             (const char (*)[31])"gallery stage end, owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      CharAmusementMultistagePlay::onGalleryStageEnd(this, is_succ);
    }
  }
};

// Line 163: range 000000001805CACA-000000001805CCE3
// local variable allocation has failed, the output may be wrong!
void __cdecl CharAmusementMultistagePlay::onEnd(CharAmusementMultistagePlay *const this, bool is_succ)
{
  unsigned int v2; // r13d
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v9; // rax
  uint32_t v10; // eax
  Scene *scene; // rbx
  unsigned __int64 v12; // rdx OVERLAPPED
  CharAmusementMultistagePlay::Result v14; // edx
  unsigned int val; // [rsp+18h] [rbp-48h] BYREF
  uint32_t sum_cost_time; // [rsp+1Ch] [rbp-44h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-40h] BYREF

  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
    "onEnd",
    164);
  v3 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v17,
         (const char (*)[24])"multistage end, owner: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getOwnerUid(this->scene_);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])", is_succ: ");
  v6 = common::milog::MiLogStream::operator<<(v5, is_succ);
  v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])", cost_time_vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v7, &this->cost_time_vec_);
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( is_succ )
  {
    M_current = std::vector<unsigned int>::end(&this->cost_time_vec_)._M_current;
    v9._M_current = std::vector<unsigned int>::begin(&this->cost_time_vec_)._M_current;
    v10 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
            v9,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            0);
  }
  else
  {
    v10 = 0;
  }
  sum_cost_time = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  LOBYTE(v2) = is_succ;
  v12 = v2 | ((unsigned __int64)sum_cost_time << 32);
  std::function<ForeachPolicy ()(Player &)>::function<CharAmusementMultistagePlay::onEnd(bool)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v17,
    *(CharAmusementMultistagePlay::onEnd::<lambda(Player&)> *)(&v12 - 1));
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v17);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v17);
  v14 = CharAmusementMultistagePlay::computeResult(this);
  CharAmusementMultistagePlay::logDungeonEnd(this, v14);
};

// Line 166: range 000000001805C89A-000000001805CAC8
ForeachPolicy __cdecl CharAmusementMultistagePlay::onEnd(bool)::{lambda(Player &)#1}::operator()(
        const CharAmusementMultistagePlay::onEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r8
  bool is_succ; // si
  CharAmusementMultistagePlay *this; // rdx
  char v8; // cl
  ForeachPolicy result; // eax
  const CharAmusementMultistagePlay::onEnd::<lambda(Player&)> *p_this; // [rsp+8h] [rbp-78h]
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  p_this = __closure;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:168";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::onEnd(bool)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CharAmusementActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator!=<CharAmusementActivity>((const std::shared_ptr<CharAmusementActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__sum_cost_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__sum_cost_time >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    LODWORD(__closure) = __closure->__sum_cost_time;
    if ( *(char *)(((unsigned __int64)&p_this->__is_succ >> 3) + 0x7FFF8000) < 0 )
    {
      LODWORD(__closure) = (_DWORD)p_this + 8;
      __asan_report_load1(&p_this->__is_succ);
    }
    is_succ = p_this->__is_succ;
    if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
    {
      LODWORD(__closure) = (_DWORD)p_this;
      __asan_report_load8();
    }
    this = p_this->__this;
    v8 = *(_BYTE *)(((unsigned __int64)&p_this->__this->stage_id_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((LOBYTE(p_this->__this) - 116) & 7) + 3) >= v8 )
    {
      __closure = (const CharAmusementMultistagePlay::onEnd::<lambda(Player&)> *const)&p_this->__this->stage_id_;
      __asan_report_load4();
    }
    CharAmusementActivity::onMultistagePlayEnd(v5, this->stage_id_, is_succ, (uint32_t)__closure);
  }
  std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v11 == (char *)v2 )
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

// Line 179: range 000000001805CCE4-000000001805CFE8
void __cdecl CharAmusementMultistagePlay::onPostEnterScene(CharAmusementMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int *v8; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v9; // rax
  unsigned int *v11; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v12; // rax
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->team_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "onPostEnterScene",
      183);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v15,
           (const char (*)[34])"player is not in player_uid_set: ");
    val = Player::getUid(player);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])", owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    value = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &value);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "onPostEnterScene",
      187);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v15,
           (const char (*)[29])"player PostEnterScene, uid: ");
    val = Player::getUid(player);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    value = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &value);
    common::milog::MiLogStream::~MiLogStream(&v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->stage_type_ == MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
    {
      value = Player::getUid(player);
      v9 = std::set<unsigned int>::emplace<unsigned int>(&this->preview_enter_uid_set_, &value, v8);
      if ( v9.second )
        CharAmusementMultistagePlay::tryTriggerAllPlayerEnterEvent(this);
    }
    value = Player::getUid(player);
    v12 = std::set<unsigned int>::emplace<unsigned int>(&this->entered_uid_set_, &value, v11);
    if ( v12.second )
    {
      CharAmusementMultistagePlay::logPlayerEnter(this, player);
      CharAmusementMultistagePlay::updatePlayerMatchPunishTime(this);
    }
    SceneMultistagePlay::notifyPlayerStage(this, player);
  }
};

// Line 208: range 000000001805CFEA-000000001805D2AA
void __cdecl CharAmusementMultistagePlay::onLeaveScene(CharAmusementMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+10h] [rbp-40h] BYREF
  std::set<unsigned int>::key_type __x; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 count; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
    "onLeaveScene",
    209);
  v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v10,
         (const char (*)[26])"player leave scene, uid: ");
  val = Player::getUid(player);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v3, (const char (*)[10])", owner: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &__x);
  common::milog::MiLogStream::~MiLogStream(&v10);
  CharAmusementMultistagePlay::logPlayerLeave(this, player);
  __x = Player::getUid(player);
  std::set<unsigned int>::erase(&this->team_uid_set_, &__x);
  __x = Player::getUid(player);
  std::map<unsigned int,std::vector<unsigned int>>::erase(&this->uid_avatar_vec_map_, &__x);
  __x = Player::getUid(player);
  std::map<unsigned int,unsigned int>::erase(&this->uid_punish_time_map_, &__x);
  __x = Player::getUid(player);
  count = std::set<unsigned int>::erase(&this->preview_enter_uid_set_, &__x);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->match_id_ && !std::set<unsigned int>::empty(&this->team_uid_set_) )
    CharAmusementMultistagePlay::doMatchPunish(this, player);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW
    && !std::set<unsigned int>::empty(&this->preview_enter_uid_set_)
    && !count )
  {
    CharAmusementMultistagePlay::tryTriggerAllPlayerEnterEvent(this);
  }
  SceneMultistagePlay::notifyStage(this);
};

// Line 231: range 000000001805D2AC-000000001805D3D1
void __fastcall CharAmusementMultistagePlay::onAvatarDie(CharAmusementMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:230";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::onAvatarDie;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( CharAmusementMultistagePlay::isInGalleryStage(this) )
  {
    v5 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                             &this->uid_death_times_map_,
                             (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load4();
    ++*(_DWORD *)v5;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 239: range 000000001805D3D2-000000001805D561
__int64 __fastcall CharAmusementMultistagePlay::checkJumpToSceneValid(
        CharAmusementMultistagePlay *const this,
        uint32_t uid,
        unsigned __int64 p_reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
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
  *(_QWORD *)(v3 + 16) = CharAmusementMultistagePlay::checkJumpToSceneValid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->team_uid_set_,
          (const unsigned int *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)((p_reason >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((p_reason >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    if ( *(_DWORD *)p_reason == 32
      || *(_DWORD *)p_reason == 52
      || *(_DWORD *)p_reason == 53
      || *(_DWORD *)p_reason == 51
      || *(_DWORD *)p_reason == 13
      || *(_DWORD *)p_reason == 14
      || *(_DWORD *)p_reason == 21
      || *(_DWORD *)p_reason == 83
      || *(_DWORD *)p_reason == 56
      || *(_DWORD *)p_reason == 61 )
    {
      result = 0LL;
    }
    else
    {
      result = 529LL;
    }
  }
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 264: range 000000001805D562-000000001805D643
__int64 __fastcall CharAmusementMultistagePlay::checkMpSceneEnterable(
        CharAmusementMultistagePlay *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:263";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::checkMpSceneEnterable;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->team_uid_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  if ( v6 == (char *)v2 )
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

// Line 274: range 000000001805D644-000000001805DD1F
void __cdecl CharAmusementMultistagePlay::initByDungeonContext(CharAmusementMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::set<unsigned int> *TeamUidSet; // rax
  __int64 v10; // rsi
  uint32_t match_id; // ecx
  char v12; // al
  uint32_t stage_id; // ecx
  char v14; // dl
  bool v15; // dl
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  const CharAmusementDungeonContext *context; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-130h] BYREF
  char v26[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 21 dungeon_scene_ptr:275 80 104 15 context_opt:281";
  *(_QWORD *)(v1 + 16) = CharAmusementMultistagePlay::initByDungeonContext;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v1 + 48));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "initByDungeonContext",
      278);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(&v25, (const char (*)[43])off_264A89A0);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    DungeonScene::getDungeonExtraData<CharAmusementDungeonContext>(
      (std::optional<CharAmusementDungeonContext> *)(v1 + 80),
      v5);
    if ( !std::optional<CharAmusementDungeonContext>::has_value((const std::optional<CharAmusementDungeonContext> *const)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initByDungeonContext",
        284);
      v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(&v25, (const char (*)[56])off_264A8A00);
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      val = DungeonScene::getDungeonId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      context = std::optional<CharAmusementDungeonContext>::value((std::optional<CharAmusementDungeonContext> *const)(v1 + 80));
      std::vector<unsigned int>::operator=(&this->level_id_vec_, &context->level_id_vec);
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      TeamUidSet = DungeonScene::getTeamUidSet(v8);
      std::set<unsigned int>::operator=(&this->team_uid_set_, TeamUidSet);
      std::set<unsigned int>::operator=(&this->all_player_uid_set_, &this->team_uid_set_);
      CharAmusementMultistagePlay::updatePlayerAvatarVecByDungeonContext(this, context);
      v10 = (((_BYTE)context + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&context->match_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->match_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      match_id = context->match_id;
      v12 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v10) = v12 != 0;
        __asan_report_store4(&this->match_id_, v10, (_BYTE)this - 120);
      }
      this->match_id_ = match_id;
      if ( *(_BYTE *)(((unsigned __int64)&context->stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&context->stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      stage_id = context->stage_id;
      v14 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v14 != 0;
      v15 = v14 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v14;
      if ( v15 )
        __asan_report_store4(&this->stage_id_, v10, v15);
      this->stage_id_ = stage_id;
      CharAmusementMultistagePlay::updatePlayerMatchPunishTime(this);
      CharAmusementMultistagePlay::updateGalleryIdVec(this);
      CharAmusementMultistagePlay::updateMpStatus(this);
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initByDungeonContext",
        303);
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"stage_id_: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->stage_id_);
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])", team_uid_set: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, &this->team_uid_set_);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])", level_id_vec: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int>(v20, &this->level_id_vec_);
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])", owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    std::optional<CharAmusementDungeonContext>::~optional((std::optional<CharAmusementDungeonContext> *const)(v1 + 80));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 48));
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 307: range 000000001805DD20-000000001805E1D7
int32_t __cdecl CharAmusementMultistagePlay::initPreviewStage(
        CharAmusementMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  bool v10; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-95h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 stage_index:310";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::initPreviewStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
    "initPreviewStage",
    308);
  v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         &v16,
         (const char (*)[22])"preview_stage_index: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->preview_stage_index_);
  v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v6, (const char (*)[5])off_264A3AE0);
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  val = this->preview_stage_index_ + 1;
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", owner_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++this->preview_stage_index_;
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v16, "preview_stage_index", &__a);
  v10 = ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v16,
          (unsigned int *)(v2 + 32)) != 0;
  std::string::~string(&v16);
  std::allocator<char>::~allocator(&__a);
  if ( v10 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "initPreviewStage",
      313);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v16,
      (const char (*)[30])"preview_stage_index not found");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->preview_stage_index_ != *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initPreviewStage",
        319);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v16, (const char (*)[26])off_264A8BC0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" not equal");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    result = 0;
  }
  if ( v17 == (char *)v2 )
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

// Line 325: range 000000001805E1D8-000000001805E677
int32_t __cdecl CharAmusementMultistagePlay::initGalleryStage(
        CharAmusementMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  bool v10; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-95h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 stage_index:328";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::initGalleryStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
    "initGalleryStage",
    326);
  v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         &v16,
         (const char (*)[22])"gallery_stage_index: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_stage_index_);
  v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v6, (const char (*)[5])off_264A3AE0);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  val = this->gallery_stage_index_ + 1;
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", owner_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->gallery_stage_index_;
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v16, "gallery_stage_index", &__a);
  v10 = ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v16,
          (unsigned int *)(v2 + 32)) != 0;
  std::string::~string(&v16);
  std::allocator<char>::~allocator(&__a);
  if ( v10 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "initGalleryStage",
      331);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v16,
      (const char (*)[30])"gallery_stage_index not found");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->gallery_stage_index_ != *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "initGalleryStage",
        337);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v16, (const char (*)[26])off_264A8D60);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" not equal");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    result = 0;
  }
  if ( v17 == (char *)v2 )
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

// Line 343: range 000000001805E678-000000001805EBA4
void __cdecl CharAmusementMultistagePlay::onPreviewStageStart(CharAmusementMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rax
  DungeonScene *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self __y; // [rsp+18h] [rbp-168h] BYREF
  CharAmusementDungeonContext *context; // [rsp+20h] [rbp-160h]
  std::map<unsigned int,CharAmusementTrialAvatarInfo> *uid_avatar_info_map; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-150h] BYREF
  char v11[304]; // [rsp+50h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 7 uid:358 48 8 8 iter:356 80 16 21 dungeon_scene_ptr:347 112 104 15 context_opt:349";
  *(_QWORD *)(v1 + 16) = CharAmusementMultistagePlay::onPreviewStageStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->preview_stage_index_ != 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v1 + 80));
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 80), 0LL) )
    {
      v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      DungeonScene::getDungeonExtraData<CharAmusementDungeonContext>(
        (std::optional<CharAmusementDungeonContext> *)(v1 + 112),
        v4);
      if ( std::optional<CharAmusementDungeonContext>::has_value((const std::optional<CharAmusementDungeonContext> *const)(v1 + 112)) )
      {
        context = std::optional<CharAmusementDungeonContext>::value((std::optional<CharAmusementDungeonContext> *const)(v1 + 112));
        uid_avatar_info_map = &context->uid_avatar_info_map;
        *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v1 + 48) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::begin(&context->uid_avatar_info_map);
        while ( 1 )
        {
          __y._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(uid_avatar_info_map)._M_node;
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)(v1 + 48),
                  &__y) )
            break;
          v5 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v1 + 48));
          if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) <= 3 )
            v5 = __asan_report_load4();
          *(_DWORD *)(v1 + 32) = *(_DWORD *)v5;
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                  &this->team_uid_set_,
                  (const unsigned int *)(v1 + 32)) )
            *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v1 + 48) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::erase[abi:cxx11](
                                                                                            uid_avatar_info_map,
                                                                                            *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v1 + 48));
          else
            std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator++(
              (std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v1 + 48),
              0);
        }
        if ( CharAmusementDungeonContext::checkAndSetNextLevel(context) )
        {
          common::milog::MiLogStream::create(
            &v10,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
            "onPreviewStageStart",
            371);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v10,
            (const char (*)[28])"checkAndSetNextLevel failed");
          common::milog::MiLogStream::~MiLogStream(&v10);
        }
        else if ( CharAmusementDungeonContext::randomAssignTrialAvatar(context) )
        {
          common::milog::MiLogStream::create(
            &v10,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
            "onPreviewStageStart",
            377);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v10,
            (const char (*)[31])"randomAssignTrialAvatar failed");
          common::milog::MiLogStream::~MiLogStream(&v10);
        }
        else
        {
          CharAmusementMultistagePlay::updatePlayerAvatarVecByDungeonContext(this, context);
          v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          DungeonScene::setDungeonExtraData<CharAmusementDungeonContext>(v6, context);
        }
      }
      std::optional<CharAmusementDungeonContext>::~optional((std::optional<CharAmusementDungeonContext> *const)(v1 + 112));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 80));
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000001805EBA6-000000001805EC58
void __cdecl CharAmusementMultistagePlay::onGalleryStageStart(CharAmusementMultistagePlay *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_, v1, (_BYTE)this - 32);
  }
  this->score_ = 0;
  std::map<unsigned int,unsigned int>::clear(&this->uid_death_times_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stop_reason_, v1, (_BYTE)this + 24);
  }
  this->stop_reason_ = GALLERY_STOP_NONE;
  CharAmusementMultistagePlay::logGalleryStart(this);
};

// Line 397: range 000000001805EF30-000000001805F252
void __cdecl CharAmusementMultistagePlay::onPreviewStageEnd(CharAmusementMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  Scene *scene; // [rsp+10h] [rbp-150h]
  CharAmusementDungeonContext *context; // [rsp+28h] [rbp-138h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-130h] BYREF
  char v8[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 21 dungeon_scene_ptr:399 80 104 15 context_opt:401";
  *(_QWORD *)(v1 + 16) = CharAmusementMultistagePlay::onPreviewStageEnd;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v1 + 48));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 48), 0LL) )
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    DungeonScene::getDungeonExtraData<CharAmusementDungeonContext>(
      (std::optional<CharAmusementDungeonContext> *)(v1 + 80),
      v4);
    if ( std::optional<CharAmusementDungeonContext>::has_value((const std::optional<CharAmusementDungeonContext> *const)(v1 + 80)) )
    {
      context = std::optional<CharAmusementDungeonContext>::value((std::optional<CharAmusementDungeonContext> *const)(v1 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      std::function<ForeachPolicy ()(Player &)>::function<CharAmusementMultistagePlay::onPreviewStageEnd(void)::{lambda(Player &)#1},void,void>(
        &p_func,
        (CharAmusementMultistagePlay::onPreviewStageEnd::<lambda(Player&)>)__PAIR128__(
                                                                             (unsigned __int64)this,
                                                                             (unsigned __int64)context));
      Scene::foreachPlayer(scene, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
      std::set<unsigned int>::clear(&this->preview_enter_uid_set_);
    }
    std::optional<CharAmusementDungeonContext>::~optional((std::optional<CharAmusementDungeonContext> *const)(v1 + 80));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 48));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 404: range 000000001805EC5A-000000001805EF2F
ForeachPolicy __cdecl CharAmusementMultistagePlay::onPreviewStageEnd(void)::{lambda(Player &)#1}::operator()(
        const CharAmusementMultistagePlay::onPreviewStageEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,CharAmusementTrialAvatarInfo> *p_uid_avatar_info_map; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::pointer v6; // rax
  char v7; // al
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  ForeachPolicy result; // eax
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::key_type __x; // [rsp+14h] [rbp-9Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:406";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::onPreviewStageEnd(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_uid_avatar_info_map = &__closure->__context->uid_avatar_info_map;
  __x = Player::getUid(player);
  *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v2 + 32) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::find(
                                                                                  p_uid_avatar_info_map,
                                                                                  &__x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __y._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(&__closure->__context->uid_avatar_info_map)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)(v2 + 32),
          &__y) )
    goto LABEL_13;
  v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&v6->second.is_created >> 3) + 0x7FFF8000) < 0 )
    v6 = (std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::pointer)__asan_report_load1(&v6->second.is_created);
  if ( !v6->second.is_created )
    v7 = 1;
  else
LABEL_13:
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "operator()",
      409);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v14, (const char (*)[23])off_264A8EE0);
    __x = Player::getUid(player);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
    v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            v9,
            (const char (*)[47])" when preview stage end! preview_stage_index: ");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v10,
      &__closure->__this->preview_stage_index_);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 418: range 000000001805F2FC-000000001805F787
void __cdecl CharAmusementMultistagePlay::onGalleryStageEnd(CharAmusementMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // [rsp+8h] [rbp-D8h]
  Scene *scene; // [rsp+8h] [rbp-D8h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF
  CharAmusementMultistagePlay::onGalleryStageEnd::<lambda(Player&)> v18; // 0:rsi.8,8:edx.4

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 stage_end_time:420 64 4 13 cost_time:426";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::onGalleryStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_begin_scene_time_ <= *(_DWORD *)(v2 + 48) )
  {
    v8 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = v8 - this->stage_begin_scene_time_;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "onGalleryStageEnd",
      427);
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v16,
           (const char (*)[22])"gallery_stage_index: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_stage_index_);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", cost_time: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])", owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      &this->cost_time_vec_,
      (unsigned int *)(v2 + 64),
      (unsigned int *)&this->cost_time_vec_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    v18.__cost_time = *(_DWORD *)(v2 + 64);
    v18.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<CharAmusementMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v16,
      v18);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v16);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v16);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "onGalleryStageEnd",
      423);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v16,
           (const char (*)[59])"stage end time is larger than stage begin time, end_time: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])", begin_time: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->stage_begin_scene_time_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  if ( v17 == (char *)v2 )
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

// Line 431: range 000000001805F254-000000001805F2FA
ForeachPolicy __cdecl CharAmusementMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::operator()(
        const CharAmusementMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  CharAmusementMultistagePlay *this; // rbx
  unsigned int cost_time; // r12d
  CharAmusementMultistagePlay::Result v4; // edx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cost_time = __closure->__cost_time;
  v4 = CharAmusementMultistagePlay::computeResult(__closure->__this);
  CharAmusementMultistagePlay::logGalleryEnd(this, player, v4, cost_time);
  return 0;
};

// Line 439: range 000000001805F788-000000001805F8DB
void __cdecl CharAmusementMultistagePlay::doMatchPunish(CharAmusementMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  PlayerMatchComp *MatchComp; // rcx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
    "doMatchPunish",
    440);
  v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v8,
         (const char (*)[26])"do match punish for uid: ");
  val = Player::getUid(player);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])", owner_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OwnerUid = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &OwnerUid);
  common::milog::MiLogStream::~MiLogStream(&v8);
  MatchComp = Player::getMatchComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  PlayerMatchComp::matchPunish(MatchComp, this->match_id_);
};

// Line 445: range 000000001805F966-0000000018060DEA
int32_t __cdecl CharAmusementMultistagePlay::createAvatarsAndSetToScene(
        CharAmusementMultistagePlay *const this,
        CharAmusementDungeonContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *scene; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  void *p_for_end_0; // rsi
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  uint32_t AvatarComp; // ecx
  Player *v16; // rax
  uint32_t v17; // esi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Player *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  void (__fastcall **v26)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  Player *v39; // rax
  unsigned __int64 v40; // rax
  Player *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int32_t v43; // eax
  TrialAvatarPtr *p_trial_avatar_ptrd; // [rsp+8h] [rbp-368h]
  int p_trial_avatar_ptr; // [rsp+8h] [rbp-368h]
  common::milog::MiLogStream *p_trial_avatar_ptra; // [rsp+8h] [rbp-368h]
  common::milog::MiLogStream *p_trial_avatar_ptre; // [rsp+8h] [rbp-368h]
  int p_trial_avatar_ptrb; // [rsp+8h] [rbp-368h]
  PlayerAvatarComp *p_trial_avatar_ptrc; // [rsp+8h] [rbp-368h]
  bool p_trial_avatar_ptrf; // [rsp+8h] [rbp-368h]
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_trial_avatar_ptrg; // [rsp+8h] [rbp-368h]
  int32_t result; // [rsp+24h] [rbp-34Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-348h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-340h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-338h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-330h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self __y; // [rsp+48h] [rbp-328h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-320h]
  const unsigned int *uid; // [rsp+58h] [rbp-318h]
  CharAmusementTrialAvatarInfo *info; // [rsp+60h] [rbp-310h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-308h]
  const unsigned int *trial_avatar_id; // [rsp+70h] [rbp-300h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+78h] [rbp-2F8h]
  std::shared_ptr<TrialAvatar> __r; // [rsp+80h] [rbp-2F0h] BYREF
  std::shared_ptr<TrialAvatar> __a; // [rsp+90h] [rbp-2E0h] BYREF
  std::vector<long unsigned int> p_guid_vec; // [rsp+A0h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v68; // [rsp+C0h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v69; // [rsp+E0h] [rbp-290h] BYREF
  char v70[624]; // [rsp+100h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 8 iter:457 64 16 14 player_ptr:451 96 16 20 trial_avatar_ptr:495 128 16 16 activity_ptr:"
                        "541 160 24 23 trial_avatar_id_vec:464 224 24 19 avatar_guid_vec:474 288 24 26 create_avatar_guid"
                        "_vec:476 352 32 16 grant_record:505 416 40 12 commiter:478 496 48 16 team_uid_set:446";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::createAvatarsAndSetToScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959360;
  v4[536862735] = 62194;
  v4[536862737] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 496), &this->team_uid_set_);
  __for_range = (std::set<unsigned int> *)(v2 + 496);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 496))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 496))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 64), (__int64)scene, *uid);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "createAvatarsAndSetToScene",
        454);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v69,
             (const char (*)[24])"player not found, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, uid);
      common::milog::MiLogStream::~MiLogStream(&v69);
      goto LABEL_60;
    }
    *(std::map<unsigned int,CharAmusementTrialAvatarInfo>::iterator *)(v2 + 32) = std::map<unsigned int,CharAmusementTrialAvatarInfo>::find(
                                                                                    &context->uid_avatar_info_map,
                                                                                    uid);
    __y._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(&context->uid_avatar_info_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Self *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "createAvatarsAndSetToScene",
        460);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v69, (const char (*)[52])off_264A9340);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, uid);
      common::milog::MiLogStream::~MiLogStream(&v69);
      goto LABEL_60;
    }
    info = &std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> > *const)(v2 + 32))->second;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160), &info->trial_avatar_id_vec);
    if ( *(char *)(((unsigned __int64)&info->is_created >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&info->is_created);
    if ( info->is_created )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "createAvatarsAndSetToScene",
        469);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v69,
             (const char (*)[32])"already create avatar for uid: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, uid);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v9,
              (const char (*)[21])", trial_avatar_vec: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v10, &info->trial_avatar_id_vec);
      common::milog::MiLogStream::~MiLogStream(&v69);
      goto LABEL_59;
    }
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v2 + 224));
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v2 + 288));
    std::function<void ()(void)>::function<CharAmusementMultistagePlay::createAvatarsAndSetToScene(CharAmusementDungeonContext &)::{lambda(void)#1},void,void>(
      (std::function<void()> *const)&v69,
      (CharAmusementMultistagePlay::createAvatarsAndSetToScene::<lambda()>)__PAIR128__(v2 + 64, v2 + 288));
    common::tools::ScopedCommitter::ScopedCommitter(
      (common::tools::ScopedCommitter *const)(v2 + 416),
      (std::function<void()> *)&v69);
    std::function<void ()(void)>::~function((std::function<void()> *const)&v69);
    result = 0;
    __for_range_0 = (std::vector<unsigned int> *)(v2 + 160);
    __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 160))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      p_for_end_0 = &__for_end_0;
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        break;
      trial_avatar_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 128));
      p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.trial_avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                  p_trial_avatar_config_mgr,
                                  *trial_avatar_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
      if ( !trial_avatar_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
          "createAvatarsAndSetToScene",
          490);
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v69,
                (const char (*)[49])"trial avatar config not found, trial_avatar_id: ");
        p_for_end_0 = (void *)trial_avatar_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream(&v69);
        result = -1;
        break;
      }
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AvatarComp = (unsigned int)Player::getAvatarComp(v14);
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerAvatarComp::findTrialAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 96), AvatarComp);
      if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v2 + 96), 0LL) )
      {
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v17 = (unsigned int)Player::getAvatarComp(v16);
        if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)&__r, v17, *trial_avatar_id);
        std::shared_ptr<TrialAvatar>::operator=((std::shared_ptr<TrialAvatar> *const)(v2 + 96), &__r);
        std::shared_ptr<TrialAvatar>::~shared_ptr(&__r);
        if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
            "createAvatarsAndSetToScene",
            501);
          v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v69,
                  (const char (*)[46])"create trial avatar failed, trial_avatar_id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, trial_avatar_id);
          v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", uid:");
          p_for_end_0 = (void *)uid;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, uid);
          common::milog::MiLogStream::~MiLogStream(&v69);
          result = -1;
LABEL_39:
          p_trial_avatar_ptrb = 0;
          goto LABEL_42;
        }
        proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v2 + 352));
        proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v2 + 352), 0xDu);
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_trial_avatar_ptrd = (TrialAvatarPtr *)Player::getAvatarComp(v21);
        std::shared_ptr<TrialAvatar>::shared_ptr(
          (std::shared_ptr<TrialAvatar> *const)(v2 + 128),
          (const std::shared_ptr<TrialAvatar> *)(v2 + 96));
        PlayerAvatarComp::addTrialAvatar(
          (PlayerAvatarComp *const)&__a,
          p_trial_avatar_ptrd,
          (const proto::TrialAvatarGrantRecord *)(v2 + 128));
        LOBYTE(p_trial_avatar_ptrd) = std::operator==<TrialAvatar>(0LL, &__a);
        std::shared_ptr<TrialAvatar>::~shared_ptr(&__a);
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v2 + 128));
        if ( (_BYTE)p_trial_avatar_ptrd )
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
            "createAvatarsAndSetToScene",
            509);
          v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(&v69, (const char (*)[43])off_264A94E0);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, trial_avatar_id);
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
          p_for_end_0 = (void *)uid;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, uid);
          common::milog::MiLogStream::~MiLogStream(&v69);
          result = -1;
          p_trial_avatar_ptr = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
            "createAvatarsAndSetToScene",
            513);
          p_trial_avatar_ptra = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                  &v68,
                                  (const char (*)[22])"create trial avatar: ");
          v25 = (unsigned __int64)std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8();
          v26 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v25;
          if ( *(_BYTE *)((*(_QWORD *)v25 >> 3) + 0x7FFF8000LL) )
            v25 = __asan_report_load8();
          (*v26)(&v69, v25);
          v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  p_trial_avatar_ptra,
                  (const std::string *)&v69);
          p_trial_avatar_ptre = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                  v27,
                                  (const char (*)[9])", guid: ");
          v28 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Base_ptr)Avatar::getGuid(v28);
          v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  p_trial_avatar_ptre,
                  (const unsigned __int64 *)&__y);
          v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, uid);
          std::string::~string(&v69);
          common::milog::MiLogStream::~MiLogStream(&v68);
          v31 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Base_ptr)Avatar::getGuid(v31);
          p_for_end_0 = &__y;
          std::vector<unsigned long>::emplace_back<unsigned long>(
            (std::vector<long unsigned int> *const)(v2 + 288),
            (unsigned __int64 *)&__y,
            (unsigned __int64 *)&__y);
          p_trial_avatar_ptr = 1;
        }
        proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v2 + 352));
        if ( p_trial_avatar_ptr != 1 )
          goto LABEL_39;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
          "createAvatarsAndSetToScene",
          518);
        v32 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v69,
                (const char (*)[47])"trial avatar already exists, trial_avatar_id: ");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, trial_avatar_id);
        v34 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, uid);
        common::milog::MiLogStream::~MiLogStream(&v69);
      }
      v35 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::_Base_ptr)Avatar::getGuid(v35);
      p_for_end_0 = &__y;
      std::vector<unsigned long>::emplace_back<unsigned long>(
        (std::vector<long unsigned int> *const)(v2 + 224),
        (unsigned __int64 *)&__y,
        (unsigned __int64 *)&__y);
      p_trial_avatar_ptrb = 1;
LABEL_42:
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v2 + 96));
      if ( p_trial_avatar_ptrb != 1 )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    if ( !result )
    {
      if ( *(char *)(((unsigned __int64)&info->is_created >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&info->is_created, p_for_end_0, &info->is_created);
      info->is_created = 1;
      if ( !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v2 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
          "createAvatarsAndSetToScene",
          533);
        v36 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v69,
                (const char (*)[23])"change trial avatars: ");
        v37 = common::milog::MiLogStream::operator<<<unsigned long>(
                v36,
                (const std::vector<long unsigned int> *)(v2 + 224));
        v38 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, uid);
        common::milog::MiLogStream::~MiLogStream(&v69);
        v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_trial_avatar_ptrc = Player::getAvatarComp(v39);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        std::enable_shared_from_this<Scene>::shared_from_this((std::enable_shared_from_this<Scene> *const)(v2 + 128));
        v40 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                  (std::vector<long unsigned int> *const)(v2 + 224),
                                  0LL);
        if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
          v40 = __asan_report_load8();
        p_trial_avatar_ptrf = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                p_trial_avatar_ptrc,
                                (const std::vector<long unsigned int> *)(v2 + 224),
                                *(_QWORD *)v40,
                                (ScenePtr *)(v2 + 128),
                                CHANGE_SCENE_TEAM_REASON_SUMO_ACTIVITY_SWITCH_TEAM) != 0;
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
        if ( p_trial_avatar_ptrf )
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
            "createAvatarsAndSetToScene",
            538);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v69,
            (const char (*)[28])"setTeamAndAddToScene failed");
          common::milog::MiLogStream::~MiLogStream(&v69);
        }
        else
        {
          v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Player::getActivityComp(v41);
          PlayerActivityComp::findOpenningActivity<CharAmusementActivity>((PlayerActivityComp *const)(v2 + 128));
          if ( std::operator==<CharAmusementActivity>((const std::shared_ptr<CharAmusementActivity> *)(v2 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v69,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
              "createAvatarsAndSetToScene",
              544);
            v42 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v69,
                    (const char (*)[29])"activity_ptr not found, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, uid);
            common::milog::MiLogStream::~MiLogStream(&v69);
          }
          else
          {
            p_trial_avatar_ptrg = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            std::vector<unsigned long>::vector(&p_guid_vec, (const std::vector<long unsigned int> *)(v2 + 224));
            CharAmusementActivity::setInDungeonAvatarsAndRecallOld(p_trial_avatar_ptrg, &p_guid_vec);
            std::vector<unsigned long>::~vector(&p_guid_vec);
            common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v2 + 416));
          }
          std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v2 + 128));
        }
      }
    }
    common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 416));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 288));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 224));
LABEL_59:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
LABEL_60:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 496));
  v43 = 0;
  if ( v70 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  return v43;
};

// Line 478: range 000000001805F8DC-000000001805F964
void __cdecl CharAmusementMultistagePlay::createAvatarsAndSetToScene(CharAmusementDungeonContext &)::{lambda(void)#1}::operator()(
        const CharAmusementMultistagePlay::createAvatarsAndSetToScene::<lambda()> *const __closure)
{
  Player *v1; // rax
  PlayerAvatarComp *AvatarComp; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__player_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__player_ptr);
  AvatarComp = Player::getAvatarComp(v1);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    AvatarComp = (PlayerAvatarComp *)__closure;
    __asan_report_load8();
  }
  PlayerAvatarComp::delInformalAvatarBatch(AvatarComp, __closure->__create_avatar_guid_vec, 0LL, 1);
};

// Line 555: range 0000000018060DEC-000000001806117A
void __cdecl CharAmusementMultistagePlay::tryTriggerAllPlayerEnterEvent(CharAmusementMultistagePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  __int64 v5; // rsi
  uint32_t play_index; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  char v8; // cl
  data::MultistageStageType stage_type; // r14d
  __int64 v10; // rax
  char v11; // dl
  bool v12; // dl
  Group *v13; // rax
  char v14[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 group_ptr:562 64 16 13 event_ptr:564";
  *(_QWORD *)(v1 + 16) = CharAmusementMultistagePlay::tryTriggerAllPlayerEnterEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW
    && std::operator==<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         &this->preview_enter_uid_set_,
         &this->team_uid_set_) )
  {
    SceneMultistagePlay::getGroupPtr((SceneMultistagePlay *const)(v1 + 32));
    if ( !std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
    {
      EventUtil::createEvent((data::EventType)(v1 + 64));
      if ( !std::operator==<Event>((const std::shared_ptr<Event> *)(v1 + 64), 0LL) )
      {
        v4 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        std::string::operator=(&v4->source_name, &this->current_stage_name_);
        v5 = (((_BYTE)this + 84) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        play_index = this->play_index_;
        v7 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v8 = *(_BYTE *)(((unsigned __int64)&v7->param1 >> 3) + 0x7FFF8000);
        if ( v8 != 0 && (char)((((_BYTE)v7 + 44) & 7) + 3) >= v8 )
        {
          LOBYTE(v5) = v8 != 0;
          __asan_report_store4(&v7->param1, v5, (_BYTE)v7);
        }
        v7->param1 = play_index;
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        stage_type = this->stage_type_;
        v10 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v11 = *(_BYTE *)(((unsigned __int64)(v10 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v5) = v11 != 0;
        v12 = v11 != 0 && v11 <= 3;
        if ( v12 )
          v10 = __asan_report_store4(v10 + 48, v5, v12);
        *(_DWORD *)(v10 + 48) = stage_type;
        v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Group::handleEvent(v13, (EventPtr *)(v1 + 64));
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 64));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  }
  if ( v14 == (char *)v1 )
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

// Line 575: range 000000001806117C-000000001806141A
void __cdecl CharAmusementMultistagePlay::updatePlayerAvatarVecByDungeonContext(
        CharAmusementMultistagePlay *const this,
        const CharAmusementDungeonContext *context)
{
  const TrialAvatarExcelConfigMgr *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-90h] BYREF
  const TrialAvatarExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-88h]
  const std::map<unsigned int,CharAmusementTrialAvatarInfo> *__for_range; // [rsp+40h] [rbp-80h]
  const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> *v10; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::type *uid; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::type *avatar_info; // [rsp+58h] [rbp-68h]
  std::vector<unsigned int> *avatar_id_vec; // [rsp+60h] [rbp-60h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-58h]
  const unsigned int *trial_avatar_id; // [rsp+70h] [rbp-50h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+78h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+80h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+90h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.trial_avatar_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  std::map<unsigned int,std::vector<unsigned int>>::clear(&this->uid_avatar_vec_map_);
  __for_range = &context->uid_avatar_info_map;
  __for_begin._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::begin(&context->uid_avatar_info_map)._M_node;
  __for_end._M_node = std::map<unsigned int,CharAmusementTrialAvatarInfo>::end(&context->uid_avatar_info_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,CharAmusementTrialAvatarInfo>(v10);
    avatar_info = (std::tuple_element<1,const std::pair<unsigned int const,CharAmusementTrialAvatarInfo> >::type *)std::get<1ul,unsigned int const,CharAmusementTrialAvatarInfo>(v10);
    avatar_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->uid_avatar_vec_map_, uid);
    __for_range_0 = &avatar_info->trial_avatar_id_vec;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&avatar_info->trial_avatar_id_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      trial_avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v2 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(v2, *trial_avatar_id);
      if ( trial_avatar_config_ptr )
      {
        std::vector<unsigned int>::emplace_back<unsigned int const&>(
          avatar_id_vec,
          &trial_avatar_config_ptr->avatar.avatar_id,
          &trial_avatar_config_ptr->avatar.avatar_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
          "updatePlayerAvatarVecByDungeonContext",
          586);
        v3 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v18,
               (const char (*)[49])"trial_avatar_config not found, trial_avatar_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CharAmusementTrialAvatarInfo>>::operator++(&__for_begin);
  }
};

// Line 595: range 000000001806141C-0000000018061605
void __cdecl CharAmusementMultistagePlay::updateGalleryIdVec(CharAmusementMultistagePlay *const this)
{
  std::vector<unsigned int>::size_type v1; // rax
  ActivityCharAmusementExcelConfigMgr *p_activity_char_amusement_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-58h]
  const unsigned int *level_id; // [rsp+30h] [rbp-50h]
  const data::ActivityCharAmusementLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  v1 = std::vector<unsigned int>::size(&this->level_id_vec_);
  std::vector<unsigned int>::reserve(&this->gallery_id_vec_, v1);
  __for_range = &this->level_id_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->level_id_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->level_id_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    level_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    p_activity_char_amusement_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.activity_char_amusement_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementLevelExcelConfig(
                         p_activity_char_amusement_config_mgr,
                         *level_id);
    std::shared_ptr<Config>::~shared_ptr(&v9);
    if ( level_config_ptr )
    {
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        &this->gallery_id_vec_,
        &level_config_ptr->gallery_id,
        &level_config_ptr->gallery_id);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
        "updateGalleryIdVec",
        602);
      v3 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v10,
             (const char (*)[35])"level config not found, level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, level_id);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
};

// Line 610: range 0000000018061606-0000000018061744
void __cdecl CharAmusementMultistagePlay::updateMpStatus(CharAmusementMultistagePlay *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->match_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->mp_status_, v1, (_BYTE)this - 88);
    }
    this->mp_status_ = MATCH;
  }
  else if ( std::set<unsigned int>::size(&this->team_uid_set_) <= 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->mp_status_, v1, (_BYTE)this - 88);
    }
    this->mp_status_ = SINGLE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->mp_status_, v1, (_BYTE)this - 88);
    }
    this->mp_status_ = DRAFT;
  }
};

// Line 626: range 0000000018061746-0000000018061DF3
__int64 __fastcall CharAmusementMultistagePlay::switchTeam(
        CharAmusementMultistagePlay *const this,
        uint32_t preview_stage_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  DungeonScene *v12; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+10h] [rbp-140h] BYREF
  CharAmusementDungeonContext *context; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-130h] BYREF
  char v17[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 23 preview_stage_index:625 48 16 21 dungeon_scene_ptr:646 80 104 15 context_opt:648";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::switchTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 32) = preview_stage_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->preview_stage_index_ != *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "switchTeam",
      630);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v16, (const char (*)[36])off_264A9920);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])", owner_uid");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_19:
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ != MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "switchTeam",
      636);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v16, (const char (*)[35])off_264A99C0);
    v9 = common::milog::MiLogStream::operator<<<data::MultistageStageType,(data::MultistageStageType*)0>(
           v8,
           &this->stage_type_);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v2 + 32) == 1 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
      "switchTeam",
      642);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v16,
           (const char (*)[62])"preview_stage_index is 1, should not switch team, owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 48));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 48), 0LL) )
  {
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    DungeonScene::getDungeonExtraData<CharAmusementDungeonContext>(
      (std::optional<CharAmusementDungeonContext> *)(v2 + 80),
      v11);
    if ( !std::optional<CharAmusementDungeonContext>::has_value((const std::optional<CharAmusementDungeonContext> *const)(v2 + 80)) )
    {
      v10 = -1;
    }
    else
    {
      context = std::optional<CharAmusementDungeonContext>::value((std::optional<CharAmusementDungeonContext> *const)(v2 + 80));
      if ( CharAmusementMultistagePlay::createAvatarsAndSetToScene(this, context) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/char_amusement_multistage_play.cpp",
          "switchTeam",
          656);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v16,
          (const char (*)[22])"create avatars failed");
        common::milog::MiLogStream::~MiLogStream(&v16);
        v10 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        DungeonScene::setDungeonExtraData<CharAmusementDungeonContext>(v12, context);
        v10 = 0;
      }
    }
    std::optional<CharAmusementDungeonContext>::~optional((std::optional<CharAmusementDungeonContext> *const)(v2 + 80));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
LABEL_31:
  result = v10;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 665: range 0000000018061DF4-0000000018062178
void __cdecl CharAmusementMultistagePlay::updatePlayerMatchPunishTime(CharAmusementMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GameserverService *v4; // rax
  uint32_t v5; // ecx
  Player *v6; // rax
  PlayerMatchComp *MatchComp; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t MatchPunishTime; // r14d
  const unsigned int *v10; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  char v13; // cl
  unsigned int cur_punish_times; // [rsp+1Ch] [rbp-A4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  const unsigned int *uid; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:674";
  *(_QWORD *)(v1 + 16) = CharAmusementMultistagePlay::updatePlayerMatchPunishTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->match_id_ )
  {
    __for_range = &this->team_uid_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->team_uid_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->team_uid_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v4 = ServiceBox::findService<GameserverService>();
      v5 = (unsigned int)GameserverService::getGameThreadLocal(v4) + 16;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v1 + 32), v5);
      if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
      {
        v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        MatchComp = Player::getMatchComp(v6);
        if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        cur_punish_times = PlayerMatchComp::getMatchPunishTimes(MatchComp, this->match_id_);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v19);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
        MatchPunishTime = MatchExcelConfigMgr::getMatchPunishTime(
                            &v8->design_config.txt_config_mgr.match_config_mgr,
                            cur_punish_times + 1);
        v10 = uid;
        v11 = std::map<unsigned int,unsigned int>::operator[](&this->uid_punish_time_map_, uid);
        v12 = v11;
        v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
        {
          LOBYTE(v10) = v13 != 0;
          __asan_report_store4(v11, v10, (_BYTE)v11);
        }
        *v12 = MatchPunishTime;
        std::shared_ptr<Config>::~shared_ptr(&v19);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 687: range 000000001807BDAD-000000001807BE2B
unsigned int __cdecl getVecElemOrZero<unsigned int,void>(const std::vector<unsigned int> *vec, size_t index)
{
  unsigned int *v3; // rdx

  if ( index >= std::vector<unsigned int>::size(vec) )
    return 0;
  v3 = (unsigned int *)std::vector<unsigned int>::operator[](vec, index);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return *v3;
};

// Line 697: range 000000001806217A-00000000180621F5
CharAmusementMultistagePlay::Result __cdecl CharAmusementMultistagePlay::computeResult(
        const CharAmusementMultistagePlay *const this)
{
  proto::GalleryStopReason stop_reason; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stop_reason = this->stop_reason_;
  if ( stop_reason == GALLERY_STOP_LUA_INTERRUPT_FAIL )
    return 1;
  if ( stop_reason > GALLERY_STOP_LUA_INTERRUPT_FAIL )
    return 0;
  if ( stop_reason == GALLERY_STOP_NONE )
    return 1;
  if ( stop_reason == GALLERY_STOP_TIMEUP )
    return 2;
  else
    return 0;
};

// Line 711: range 000000001806279A-00000000180629B7
void __cdecl CharAmusementMultistagePlay::logGalleryStart(CharAmusementMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *scene; // r14
  CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> p___f; // [rsp+10h] [rbp-B0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v7[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 dungeon_scene_ptr:712";
  *(_QWORD *)(v1 + 16) = CharAmusementMultistagePlay::logGalleryStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v1 + 32));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p___f.__this = this;
    std::shared_ptr<DungeonScene>::shared_ptr(
      &p___f.__dungeon_scene_ptr,
      (const std::shared_ptr<DungeonScene> *)(v1 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      &p___f);
    Scene::foreachPlayer(scene, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1}::~Player(&p___f);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 717: range 00000000180621F6-0000000018062779
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1}::operator()(
        const CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  DungeonScene *v6; // rax
  const std::string *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  __int64 v9; // rax
  char v10; // dl
  unsigned int VecElemOr; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t DungeonId; // eax
  proto_log::PlayerLogBodyCharAmusementGalleryStart *M_string_length; // rdi
  __int64 v16; // rax
  char v17; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  google::protobuf::uint32 v19; // eax
  std::map<unsigned int,std::vector<unsigned int>> *v20; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  google::protobuf::RepeatedField<unsigned int> *v23; // rax
  PlayerBasicComp *BasicComp; // rax
  ForeachPolicy result; // eax
  std::string playera; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const std::vector<unsigned int> *avatar_id_vec; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::string v31; // [rsp+50h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+70h] [rbp-B0h] BYREF

  playera._M_string_length = (std::string::size_type)__closure;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:737 64 8 8 iter:728 96 16 11 log_ptr:719";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyCharAmusementGalleryStart>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(playera._M_string_length + 8));
  v7 = DungeonScene::getTransaction[abi:cxx11](v6);
  proto_log::PlayerLogBodyCharAmusementGalleryStart::set_transaction(v5, v7);
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( CharAmusementMultistagePlay::isInGalleryStage(*(const CharAmusementMultistagePlay *const *)playera._M_string_length) )
  {
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = *(_QWORD *)playera._M_string_length;
    v10 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)playera._M_string_length + 640LL) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
      v9 = __asan_report_load4();
    VecElemOr = getVecElemOrZero<unsigned int,void>(
                  (const std::vector<unsigned int> *)(*(_QWORD *)playera._M_string_length + 656LL),
                  (unsigned int)(*(_DWORD *)(v9 + 640) - 1));
    proto_log::PlayerLogBodyCharAmusementGalleryStart::set_gallery_id(v8, VecElemOr);
  }
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(playera._M_string_length + 8));
  DungeonId = DungeonScene::getDungeonId(v13);
  proto_log::PlayerLogBodyCharAmusementGalleryStart::set_dungeon_id(v12, DungeonId);
  M_string_length = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
  {
    M_string_length = (proto_log::PlayerLogBodyCharAmusementGalleryStart *)playera._M_string_length;
    __asan_report_load8();
  }
  v16 = *(_QWORD *)playera._M_string_length;
  v17 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)playera._M_string_length + 680LL) >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    M_string_length = (proto_log::PlayerLogBodyCharAmusementGalleryStart *)(*(_QWORD *)playera._M_string_length + 680LL);
    v16 = __asan_report_load4();
  }
  proto_log::PlayerLogBodyCharAmusementGalleryStart::set_multiplayer_status(M_string_length, *(_DWORD *)(v16 + 680));
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v19 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(*(_QWORD *)playera._M_string_length + 352LL));
  proto_log::PlayerLogBodyCharAmusementGalleryStart::set_multiplayer_num(v18, v19);
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v20 = (std::map<unsigned int,std::vector<unsigned int>> *)(*(_QWORD *)playera._M_string_length + 448LL);
  *((_DWORD *)&playera._anon_0._M_allocated_capacity + 3) = Player::getUid((const Player *const)playera._M_dataplus._M_p);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                               v20,
                                                                               (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)&playera._anon_0._M_allocated_capacity
                                                                             + 3);
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __y._M_node = std::map<unsigned int,std::vector<unsigned int>>::end((std::map<unsigned int,std::vector<unsigned int>> *const)(*(_QWORD *)playera._M_string_length + 448LL))._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
          &__y) )
  {
    avatar_id_vec = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyCharAmusementGalleryStart::clear_avatar_id_list(v21);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v23 = proto_log::PlayerLogBodyCharAmusementGalleryStart::mutable_avatar_id_list(v22);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(avatar_id_vec, v23);
    BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v31, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE97u, playera);
    std::string::~string(&v31);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryStart> *)(v2 + 96));
    Player::printStatLog((Player *const)playera._M_dataplus._M_p, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryStart> *const)(v2 + 96));
  result = FOREACH_CONTINUE;
  if ( v32 == (char *)v2 )
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
  return result;
};

// Line 717: range 000000001808D828-000000001808D8A5
void __cdecl CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1}::Player(
        CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> *const this,
        CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> *a2)
{
  CharAmusementMultistagePlay *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &a2->__dungeon_scene_ptr);
};

// Line 717: range 000000001808D970-000000001808D9ED
void __cdecl CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1}::Player(
        CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> *const this,
        const CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> *a2)
{
  CharAmusementMultistagePlay *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &a2->__dungeon_scene_ptr);
};

// Line 717: range 000000001806277A-0000000018062798
void __cdecl CharAmusementMultistagePlay::logGalleryStart(void)::{lambda(Player &)#1}::~Player(
        CharAmusementMultistagePlay::logGalleryStart::<lambda(Player&)> *const this)
{
  std::shared_ptr<DungeonScene>::~shared_ptr(&this->__dungeon_scene_ptr);
};

// Line 744: range 00000000180629B8-0000000018062FC9
void __cdecl CharAmusementMultistagePlay::logGalleryEnd(
        CharAmusementMultistagePlay *const this,
        Player *player,
        CharAmusementMultistagePlay::Result result,
        uint32_t used_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  DungeonScene *v9; // rax
  const std::string *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned int VecElemOr; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  google::protobuf::uint32 v20; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  google::protobuf::uint32 v23; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryEnd> *v26; // rax
  std::string v27; // [rsp+0h] [rbp-150h]
  __int64 used_timea; // [rsp+8h] [rbp-148h]
  Player *playera; // [rsp+10h] [rbp-140h]
  CharAmusementMultistagePlay *thisa; // [rsp+18h] [rbp-138h]
  std::map<unsigned int,std::vector<unsigned int>>::key_type __x; // [rsp+2Ch] [rbp-124h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self __y; // [rsp+30h] [rbp-120h] BYREF
  const std::vector<unsigned int> *avatar_id_vec; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  std::string v36; // [rsp+60h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+80h] [rbp-D0h] BYREF

  *(&v27._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v27._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v27._M_string_length) = result;
  LODWORD(v27._M_string_length) = used_time;
  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 10 holder:750 64 8 8 iter:753 96 16 21 dungeon_scene_ptr:745 128 16 11 log_ptr:751";
  *(_QWORD *)(v4 + 16) = CharAmusementMultistagePlay::logGalleryEnd;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v4 + 96));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 96), 0LL) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v36, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xE98u, v27);
    std::string::~string(&v36);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCharAmusementGalleryEnd>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v10 = DungeonScene::getTransaction[abi:cxx11](v9);
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_transaction(v8, v10);
    __x = Player::getUid(playera);
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v4 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                 &thisa->uid_avatar_vec_map_,
                                                                                 &__x);
    __y._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(&thisa->uid_avatar_vec_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v4 + 64),
           &__y) )
    {
      avatar_id_vec = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v4 + 64))->second;
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      v12 = proto_log::PlayerLogBodyCharAmusementGalleryEnd::mutable_avatar_id_list(v11);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(avatar_id_vec, v12);
    }
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    VecElemOr = getVecElemOrZero<unsigned int,void>(&thisa->gallery_id_vec_, thisa->gallery_stage_index_ - 1);
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_gallery_id(v13, VecElemOr);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    DungeonId = DungeonScene::getDungeonId(v16);
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_dungeon_id(v15, DungeonId);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->mp_status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_multiplayer_status(v18, thisa->mp_status_);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    v20 = std::set<unsigned int>::size(&thisa->team_uid_set_);
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_multiplayer_num(v19, v20);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_is_success(v21, HIDWORD(used_timea));
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    __x = Player::getUid(playera);
    v23 = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
            &thisa->uid_death_times_map_,
            &__x,
            0);
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_death_times(v22, v23);
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_time_used(v24, used_timea);
    v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyCharAmusementGalleryEnd::set_score(v25, thisa->score_);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    v26 = std::move<std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryEnd> &>((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryEnd> *)(v4 + 128));
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryEnd,void>(
      &p_body_ptr,
      v26);
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementGalleryEnd> *const)(v4 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 96));
  if ( v37 == (char *)v4 )
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

// Line 771: range 0000000018062FCA-000000001806338C
// local variable allocation has failed, the output may be wrong!
void __cdecl CharAmusementMultistagePlay::logPlayerEnter(CharAmusementMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  DungeonScene *v7; // rax
  const std::string *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonStart> *v15; // rax
  std::string playera; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  std::string v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  playera._M_string_length = (std::string::size_type)this;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:777 64 16 21 dungeon_scene_ptr:772 96 16 11 log_ptr:778";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::logPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((playera._M_string_length + 72) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
  {
    BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE99u, playera);
    std::string::~string(&v18);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCharAmusementDungeonStart>();
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = DungeonScene::getTransaction[abi:cxx11](v7);
    proto_log::PlayerLogBodyCharAmusementDungeonStart::set_transaction(v6, v8);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    DungeonId = DungeonScene::getDungeonId(v10);
    proto_log::PlayerLogBodyCharAmusementDungeonStart::set_dungeon_id(v9, DungeonId);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((playera._M_string_length + 680) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((playera._M_string_length + 680) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyCharAmusementDungeonStart::set_multiplayer_status(
      v12,
      *(_DWORD *)(playera._M_string_length + 680));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v14 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(playera._M_string_length + 352));
    proto_log::PlayerLogBodyCharAmusementDungeonStart::set_multiplayer_num(v13, v14);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    v15 = std::move<std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonStart> &>((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonStart> *)(v2 + 96));
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonStart,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0,
      v15);
    Player::printStatLog((Player *const)playera._M_dataplus._M_p, (MessagePtr *)&playera._anon_0, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonStart> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  if ( v19 == (char *)v2 )
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

// Line 787: range 000000001806359A-0000000018063B16
void __cdecl CharAmusementMultistagePlay::logDungeonEnd(
        CharAmusementMultistagePlay *const this,
        CharAmusementMultistagePlay::Result result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  DungeonScene *v6; // rax
  const std::string *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  google::protobuf::uint32 *v16; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  google::protobuf::uint32 *v18; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  google::protobuf::uint32 *v20; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v23; // rax
  google::protobuf::uint32 v24; // eax
  Scene *scene; // r14
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd> v26; // [rsp+20h] [rbp-C0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 dungeon_scene_ptr:788 64 16 11 log_ptr:793";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::logDungeonEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCharAmusementDungeonEnd>();
    v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = DungeonScene::getTransaction[abi:cxx11](v6);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_transaction(v5, v7);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonId = DungeonScene::getDungeonId(v9);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_dungeon_id(v8, DungeonId);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_is_success(v11, result);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_multiplayer_status(v12, this->mp_status_);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = std::set<unsigned int>::size(&this->team_uid_set_);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_multiplayer_num(v13, v14);
    if ( std::vector<unsigned int>::size(&this->cost_time_vec_) )
    {
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v16 = std::vector<unsigned int>::operator[](&this->cost_time_vec_, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery1_time(v15, *v16);
    }
    if ( std::vector<unsigned int>::size(&this->cost_time_vec_) > 1 )
    {
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v18 = std::vector<unsigned int>::operator[](&this->cost_time_vec_, 1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery2_time(v17, *v18);
    }
    if ( std::vector<unsigned int>::size(&this->cost_time_vec_) > 2 )
    {
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v20 = std::vector<unsigned int>::operator[](&this->cost_time_vec_, 2uLL);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery3_time(v19, *v20);
    }
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    M_current = std::vector<unsigned int>::end(&this->cost_time_vec_)._M_current;
    v23._M_current = std::vector<unsigned int>::begin(&this->cost_time_vec_)._M_current;
    v24 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
            v23,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            0);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_total_time(v21, v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd>::shared_ptr(
      &v26,
      (const std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd> *)(v2 + 64));
    std::function<ForeachPolicy ()(Player &)>::function<CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1},void,void>(
      &p_func,
      (CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *)&v26);
    Scene::foreachPlayer(scene, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1}::~Player((CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *const)&v26);
    std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd> *const)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v28 == (char *)v2 )
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

// Line 812: range 000000001806338E-000000001806357D
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1}::operator()(
        const CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerBasicComp *BasicComp; // rax
  ForeachPolicy result; // eax
  std::string playera; // [rsp+0h] [rbp-C0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-A0h] BYREF
  std::string v9; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  playera._M_string_length = (std::string::size_type)__closure;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 holder:814";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v9, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xE9Au, playera);
  std::string::~string(&v9);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd> *)playera._M_string_length);
  Player::printStatLog((Player *const)playera._M_dataplus._M_p, (MessagePtr *)&playera._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
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

// Line 812: range 000000001808DAE0-000000001808DB05
void __cdecl CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1}::Player(
        CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *const this,
        CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 812: range 000000001808DBD0-000000001808DBF5
void __cdecl CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1}::Player(
        CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *const this,
        const CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 812: range 000000001806357E-0000000018063598
void __cdecl CharAmusementMultistagePlay::logDungeonEnd(CharAmusementMultistagePlay::Result)::{lambda(Player &)#1}::~Player(
        CharAmusementMultistagePlay::logDungeonEnd::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd>::~shared_ptr(&this->__log_ptr);
};

// Line 821: range 0000000018063B18-000000001806446D
void __cdecl CharAmusementMultistagePlay::logPlayerLeave(CharAmusementMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  DungeonScene *v7; // rax
  const std::string *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  google::protobuf::uint32 v15; // eax
  SceneGalleryComp *GalleryComp; // r14
  int VecElemOr; // eax
  uint32_t SceneTimeSeconds; // r14d
  std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  google::protobuf::uint32 *v22; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  google::protobuf::uint32 *v25; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  google::protobuf::uint32 *v27; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  google::protobuf::uint32 *v30; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  google::protobuf::uint32 *v32; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  google::protobuf::uint32 *v34; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v37; // rax
  google::protobuf::uint32 v38; // eax
  std::string v39; // [rsp+0h] [rbp-130h]
  uint32_t cur_gallery_time; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-100h] BYREF
  std::string v42; // [rsp+40h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+60h] [rbp-D0h] BYREF

  *(&v39._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v39._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v43;
  v39._M_string_length = (std::string::size_type)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:827 64 16 21 dungeon_scene_ptr:822 96 16 11 log_ptr:828 128 16 15 gallery_ptr:838";
  *(_QWORD *)(v2 + 16) = CharAmusementMultistagePlay::logPlayerLeave;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v42, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE9Au, v39);
    std::string::~string(&v42);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCharAmusementDungeonEnd>();
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = DungeonScene::getTransaction[abi:cxx11](v7);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_transaction(v6, v8);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    DungeonId = DungeonScene::getDungeonId(v10);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_dungeon_id(v9, DungeonId);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_is_success(v12, 1u);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 680) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 680) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_multiplayer_status(
      v13,
      *(_DWORD *)(*(&v39._anon_0._M_allocated_capacity + 1) + 680));
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v15 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1)
                                                                           + 352));
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_multiplayer_num(v14, v15);
    cur_gallery_time = 0;
    if ( CharAmusementMultistagePlay::isInGalleryStage(*((const CharAmusementMultistagePlay *const *)&v39._anon_0._M_allocated_capacity
                                                       + 1)) )
    {
      if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 72) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GalleryComp = Scene::getGalleryComp(*(Scene *const *)(*(&v39._anon_0._M_allocated_capacity + 1) + 72));
      if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 640) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 640) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      VecElemOr = getVecElemOrZero<unsigned int,void>(
                    (const std::vector<unsigned int> *)(*(&v39._anon_0._M_allocated_capacity + 1) + 656),
                    (unsigned int)(*(_DWORD *)(*(&v39._anon_0._M_allocated_capacity + 1) + 640) - 1));
      SceneGalleryComp::findGallery((SceneGalleryComp *const)(v2 + 128), (__int64)GalleryComp, VecElemOr);
      if ( std::operator!=<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 128), 0LL) )
      {
        if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 72) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneTimeSeconds = Scene::getSceneTimeSeconds(*(Scene *const *)(*(&v39._anon_0._M_allocated_capacity + 1) + 72));
        v19 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        cur_gallery_time = SceneTimeSeconds - BaseGallery::getGalleryStartTime(v19);
      }
      CharAmusementMultistagePlay::logGalleryEnd(
        *((CharAmusementMultistagePlay *const *)&v39._anon_0._M_allocated_capacity + 1),
        (Player *)v39._anon_0._M_allocated_capacity,
        QUIT,
        cur_gallery_time);
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 128));
    }
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                   + 1)
                                                                                 + 616)) )
    {
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery1_time(v20, cur_gallery_time);
    }
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 616)) == 1 )
    {
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v22 = std::vector<unsigned int>::operator[](
              (std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 616),
              0LL);
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery1_time(v21, *v22);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery2_time(v23, cur_gallery_time);
    }
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 616)) == 2 )
    {
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v25 = std::vector<unsigned int>::operator[](
              (std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 616),
              0LL);
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery1_time(v24, *v25);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v27 = std::vector<unsigned int>::operator[](
              (std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 616),
              1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery2_time(v26, *v27);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery3_time(v28, cur_gallery_time);
    }
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 616)) == 3 )
    {
      v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v30 = std::vector<unsigned int>::operator[](
              (std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 616),
              0LL);
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery1_time(v29, *v30);
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v32 = std::vector<unsigned int>::operator[](
              (std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 616),
              1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery2_time(v31, *v32);
      v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v34 = std::vector<unsigned int>::operator[](
              (std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 616),
              2uLL);
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_gallery3_time(v33, *v34);
    }
    v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCharAmusementDungeonEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 616))._M_current;
    v37._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                         + 1)
                                                                                       + 616))._M_current;
    v38 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
            v37,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            cur_gallery_time);
    proto_log::PlayerLogBodyCharAmusementDungeonEnd::set_total_time(v35, v38);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 128),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd> *)(v2 + 96));
    Player::printStatLog((Player *const)v39._anon_0._M_allocated_capacity, &p_body_ptr, (MessagePtr *)(v2 + 128), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 128));
    std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCharAmusementDungeonEnd> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  if ( v39._M_string_length == v2 )
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
