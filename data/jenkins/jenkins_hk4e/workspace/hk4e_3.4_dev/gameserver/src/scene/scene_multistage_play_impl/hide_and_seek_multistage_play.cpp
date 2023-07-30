// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp

// Line 40: range 000000001512C238-000000001512C520
int32_t __cdecl HideAndSeekMultistagePlay::toClient(
        const HideAndSeekMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::HideAndSeekStageInfo *hide_and_seek_info; // [rsp+28h] [rbp-58h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v7; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *born_order; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "toClient",
      43);
    common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
      &v10,
      (const char (*)[65])"[HideAndSeekMultistagePlay] SceneMultistagePlay::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    hide_and_seek_info = proto::MultistagePlayInfo::mutable_hide_and_seek_info(info);
    if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HideAndSeekStageInfo::set_stage_type(hide_and_seek_info, this->own_stage_type_);
    if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HideAndSeekStageInfo::set_hunter_uid(hide_and_seek_info, this->hunter_born_pair_.first);
    __for_range = &this->hider_born_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hider_born_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->hider_born_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,unsigned int>(v7);
      born_order = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v7);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HideAndSeekStageInfo::add_hider_uid_list(hide_and_seek_info, *uid);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HideAndSeekStageInfo::set_map_id(hide_and_seek_info, this->map_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_record_score_);
    }
    proto::HideAndSeekStageInfo::set_is_record_score(hide_and_seek_info, this->is_record_score_);
    HideAndSeekMultistagePlay::fillInBattleInfo(this, hide_and_seek_info);
    return 0;
  }
};

// Line 61: range 000000001512C522-000000001512C65E
void __cdecl HideAndSeekMultistagePlay::fillInBattleInfo(
        const HideAndSeekMultistagePlay *const this,
        proto::HideAndSeekStageInfo *stage_info)
{
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v5; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *born_order; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  HideAndSeekMultistagePlay::fillHunterBattleInfo(this, this->hunter_born_pair_.first, stage_info);
  __for_range = &this->hider_born_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hider_born_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->hider_born_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,unsigned int>(v5);
    born_order = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v5);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    HideAndSeekMultistagePlay::fillHiderBattleInfo(this, *uid, stage_info);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 70: range 000000001512C660-000000001512DC7A
int32_t __cdecl HideAndSeekMultistagePlay::initByParamMap(
        HideAndSeekMultistagePlay *const this,
        const std::unordered_map<std::string,unsigned int> *param_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rsi
  uint32_t *v8; // rdx
  uint32_t v9; // ecx
  char v10; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rsi
  const std::unordered_map<std::string,unsigned int>::mapped_type *v15; // rdx
  bool v16; // cl
  char v17; // dl
  __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rsi
  uint32_t *v20; // rdx
  uint32_t v21; // ecx
  char v22; // dl
  bool v23; // dl
  MatchExcelConfigMgr *p_match_config_mgr; // rcx
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rsi
  uint32_t *v28; // rdx
  uint32_t v29; // ecx
  char v30; // al
  common::milog::MiLogStream *v31; // rsi
  uint32_t *v32; // rdx
  uint32_t v33; // ecx
  char v34; // al
  HideAndSeekMultistagePlay *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rbx
  std::vector<unsigned int>::const_reference v39; // rdx
  int v40; // r14d
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v42; // rax
  _DWORD *v43; // rdx
  char v44; // cl
  std::vector<unsigned int>::const_reference v45; // rdx
  int v46; // r14d
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::key_type *v47; // rsi
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v48; // rax
  _DWORD *v49; // rdx
  char v50; // cl
  std::vector<unsigned int>::const_reference v51; // rdx
  int v52; // r14d
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::key_type *v53; // rsi
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v54; // rax
  _DWORD *v55; // rdx
  char v56; // cl
  std::vector<unsigned int>::const_reference v57; // rdx
  int v58; // r14d
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::key_type *v59; // rsi
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v60; // rax
  _DWORD *v61; // rdx
  char v62; // cl
  std::vector<unsigned int>::const_reference v63; // rdx
  int v64; // r14d
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::key_type *v65; // rsi
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v66; // rax
  _DWORD *v67; // rdx
  char v68; // cl
  uint32_t gallery_id; // ecx
  char v70; // al
  Player *v71; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  uint32_t SeriesIdByActivityId; // ecx
  char v74; // dl
  __int64 activity_id; // rsi
  bool v76; // dl
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-A5h] BYREF
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-A4h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-A0h] BYREF
  const HideAndSeekMapConfig *map_config; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v83; // [rsp+30h] [rbp-90h] BYREF
  char v84[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v84;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:155";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::initByParamMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::set<unsigned int>::empty(&this->player_uid_set_) )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "initByParamMap",
      73);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v83,
      (const char (*)[49])"[HideAndSeekMultistagePlay] player set is empty ");
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    goto LABEL_87;
  }
  common::milog::MiLogStream::create(
    &v83,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
    "initByParamMap",
    76);
  v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v83,
         (const char (*)[37])"[HideAndSeekMultistagePlay] uid set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->player_uid_set_);
  common::milog::MiLogStream::~MiLogStream(&v83);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [7]>(
          param_map,
          (const char (*)[7])"map_id") )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "initByParamMap",
      80);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      &v83,
      (const char (*)[62])"[HideAndSeekMultistagePlay] hideAndSeek param have no map_id ");
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    goto LABEL_87;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v83, "map_id", &__a);
  v7 = &v83;
  v8 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                     param_map,
                     (const std::unordered_map<std::string,unsigned int>::key_type *)&v83);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v9 = *v8;
  v10 = *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v7) = v10 != 0;
    __asan_report_store4(&this->map_id_, v7, (_BYTE)this - 96);
  }
  this->map_id_ = v9;
  std::string::~string(&v83);
  std::allocator<char>::~allocator(&__a);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v12 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HideAndSeekMapConfig> const,unsigned int>(
           &v11->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map,
           &this->map_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( v12 )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "initByParamMap",
      87);
    v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v83, (const char (*)[33])off_25721620);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    goto LABEL_87;
  }
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [16]>(
          param_map,
          (const char (*)[16])"is_record_score") )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "initByParamMap",
      93);
    common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
      &v83,
      (const char (*)[71])"[HideAndSeekMultistagePlay] hideAndSeek param have no is_record_score ");
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    goto LABEL_87;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v83, "is_record_score", &__a);
  v14 = &v83;
  v15 = std::unordered_map<std::string,unsigned int>::at(
          param_map,
          (const std::unordered_map<std::string,unsigned int>::key_type *)&v83);
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v16 = *v15 != 0;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 28) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_record_score_, v14, v18);
  this->is_record_score_ = v16;
  std::string::~string(&v83);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_record_score_);
  }
  if ( !this->is_record_score_ )
    goto LABEL_92;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [9]>(
          param_map,
          (const char (*)[9])"match_id") )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "initByParamMap",
      102);
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      &v83,
      (const char (*)[64])"[HideAndSeekMultistagePlay] hideAndSeek param have no match_id ");
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    goto LABEL_87;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v83, "match_id", &__a);
  v19 = &v83;
  v20 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                      param_map,
                      (const std::unordered_map<std::string,unsigned int>::key_type *)&v83);
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v21 = *v20;
  v22 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = v22 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v22;
  if ( v23 )
    __asan_report_store4(&this->match_id_, v19, v23);
  this->match_id_ = v21;
  std::string::~string(&v83);
  std::allocator<char>::~allocator(&__a);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  p_match_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.txt_config_mgr.match_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v25 = data::MatchExcelConfigMgrBase::findMatchExcelConfig(p_match_config_mgr, this->match_id_) == 0LL;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( v25 )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "initByParamMap",
      108);
    v26 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
            &v83,
            (const char (*)[67])"[HideAndSeekMultistagePlay] findMatchExcelConfig failed, match_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->match_id_);
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
  }
  else
  {
LABEL_92:
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [12]>(
            param_map,
            "activity_id") )
    {
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "initByParamMap",
        114);
      common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
        &v83,
        (const char (*)[67])"[HideAndSeekMultistagePlay] hideAndSeek param have no activity_id ");
      common::milog::MiLogStream::~MiLogStream(&v83);
      v5 = -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v83, aActivityId_9[0], &__a);
      v27 = &v83;
      v28 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                          param_map,
                          (const std::unordered_map<std::string,unsigned int>::key_type *)&v83);
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v29 = *v28;
      v30 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
      if ( v30 != 0 && v30 <= 3 )
      {
        LOBYTE(v27) = v30 != 0;
        __asan_report_store4(&this->activity_id_, v27, (_BYTE)this - 24);
      }
      this->activity_id_ = v29;
      std::string::~string(&v83);
      std::allocator<char>::~allocator(&__a);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [11]>(
              param_map,
              "hunter_uid") )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "initByParamMap",
          121);
        common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
          &v83,
          (const char (*)[66])"[HideAndSeekMultistagePlay] hideAndSeek param have no hunter_uid ");
        common::milog::MiLogStream::~MiLogStream(&v83);
        v5 = -1;
      }
      else
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v83, aHunterUid_2[0], &__a);
        v31 = &v83;
        v32 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                            param_map,
                            (const std::unordered_map<std::string,unsigned int>::key_type *)&v83);
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v33 = *v32;
        v34 = *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000);
        if ( v34 != 0 && v34 <= 3 )
        {
          LOBYTE(v31) = v34 != 0;
          __asan_report_store4(&this->chosen_hunter_uid_, v31, (_BYTE)this - 16);
        }
        this->chosen_hunter_uid_ = v33;
        std::string::~string(&v83);
        std::allocator<char>::~allocator(&__a);
        v35 = this;
        if ( *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( !SceneMultistagePlay::isPlayerInPlay(v35, this->chosen_hunter_uid_) )
        {
          common::milog::MiLogStream::create(
            &v83,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "initByParamMap",
            127);
          v36 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                  &v83,
                  (const char (*)[75])"[HideAndSeekMultistagePlay] chosen_hunter_uid_ is not in play, hunter_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->chosen_hunter_uid_);
          common::milog::MiLogStream::~MiLogStream(&v83);
          v5 = -1;
        }
        else if ( HideAndSeekMultistagePlay::setSceneTeamSingeAvatar(this, 1) )
        {
          common::milog::MiLogStream::create(
            &v83,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "initByParamMap",
            134);
          common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v83,
            (const char (*)[59])"[HideAndSeekMultistagePlay] setSceneTeamSingeAvatar failed");
          common::milog::MiLogStream::~MiLogStream(&v83);
          v5 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 32));
          v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          map_config = std::unordered_map<unsigned int,HideAndSeekMapConfig>::at(
                         &v37->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map,
                         &this->map_id_);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
          if ( std::vector<unsigned int>::size(&map_config->stage_duration_vec) > 4 )
          {
            v39 = std::vector<unsigned int>::operator[](&map_config->stage_duration_vec, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v40 = *v39;
            __k = HIDE_AND_SEEK_STAGE_PREPARE;
            p_k = &__k;
            v42 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
                    &this->stage_duration_map_,
                    &__k);
            v43 = v42;
            v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
            if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
            {
              LOBYTE(p_k) = v44 != 0;
              __asan_report_store4(v42, p_k, (_BYTE)v42);
            }
            *v43 = v40;
            v45 = std::vector<unsigned int>::operator[](&map_config->stage_duration_vec, 1uLL);
            if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v46 = *v45;
            __k = HIDE_AND_SEEK_STAGE_PICK;
            v47 = &__k;
            v48 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
                    &this->stage_duration_map_,
                    &__k);
            v49 = v48;
            v50 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
            if ( v50 != 0 && (char)(((unsigned __int8)v48 & 7) + 3) >= v50 )
            {
              LOBYTE(v47) = v50 != 0;
              __asan_report_store4(v48, v47, (_BYTE)v48);
            }
            *v49 = v46;
            v51 = std::vector<unsigned int>::operator[](&map_config->stage_duration_vec, 2uLL);
            if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v52 = *v51;
            __k = HIDE_AND_SEEK_STAGE_HIDE;
            v53 = &__k;
            v54 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
                    &this->stage_duration_map_,
                    &__k);
            v55 = v54;
            v56 = *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000);
            if ( v56 != 0 && (char)(((unsigned __int8)v54 & 7) + 3) >= v56 )
            {
              LOBYTE(v53) = v56 != 0;
              __asan_report_store4(v54, v53, (_BYTE)v54);
            }
            *v55 = v52;
            v57 = std::vector<unsigned int>::operator[](&map_config->stage_duration_vec, 3uLL);
            if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v58 = *v57;
            __k = HIDE_AND_SEEK_STAGE_SEEK;
            v59 = &__k;
            v60 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
                    &this->stage_duration_map_,
                    &__k);
            v61 = v60;
            v62 = *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000);
            if ( v62 != 0 && (char)(((unsigned __int8)v60 & 7) + 3) >= v62 )
            {
              LOBYTE(v59) = v62 != 0;
              __asan_report_store4(v60, v59, (_BYTE)v60);
            }
            *v61 = v58;
            v63 = std::vector<unsigned int>::operator[](&map_config->stage_duration_vec, 4uLL);
            if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v64 = *v63;
            __k = HIDE_AND_SEEK_STAGE_SETTLE;
            v65 = &__k;
            v66 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
                    &this->stage_duration_map_,
                    &__k);
            v67 = v66;
            v68 = *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000);
            if ( v68 != 0 && (char)(((unsigned __int8)v66 & 7) + 3) >= v68 )
            {
              LOBYTE(v65) = v68 != 0;
              __asan_report_store4(v66, v65, (_BYTE)v66);
            }
            *v67 = v64;
            if ( *(_BYTE *)(((unsigned __int64)&map_config->gallery_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&map_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            gallery_id = map_config->gallery_id;
            v70 = *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000);
            if ( v70 != 0 && v70 <= 3 )
            {
              LOBYTE(v65) = v70 != 0;
              __asan_report_store4(&this->gallery_id_, v65, (_BYTE)this - 32);
            }
            this->gallery_id_ = gallery_id;
            HideAndSeekMultistagePlay::initPlayerIdentityAndBornOrder(this);
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Scene::getOwnPlayer((const Scene *const)(v2 + 32));
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v83,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "initByParamMap",
                158);
              common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v83,
                (const char (*)[46])"[HideAndSeekMultistagePlay] owner player null");
              common::milog::MiLogStream::~MiLogStream(&v83);
              v5 = 0;
            }
            else
            {
              v71 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              ExhibitionComp = Player::getExhibitionComp(v71);
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              activity_id = this->activity_id_;
              SeriesIdByActivityId = PlayerExhibitionComp::getSeriesIdByActivityId(ExhibitionComp, activity_id);
              v74 = *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000);
              LOBYTE(activity_id) = v74 != 0;
              v76 = v74 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v74;
              if ( v76 )
                __asan_report_store4(&this->series_id_, activity_id, v76);
              this->series_id_ = SeriesIdByActivityId;
              v5 = 0;
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v83,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
              "initByParamMap",
              141);
            v38 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    &v83,
                    (const char (*)[69])"[HideAndSeekMultistagePlay] stage_duration_vec size too small, size:");
            val = std::vector<unsigned int>::size(&map_config->stage_duration_vec);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v38, &val);
            common::milog::MiLogStream::~MiLogStream(&v83);
            v5 = -1;
          }
        }
      }
    }
  }
LABEL_87:
  result = v5;
  if ( v84 == (char *)v2 )
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

// Line 166: range 000000001512DC7C-000000001512DFB2
int32_t __cdecl HideAndSeekMultistagePlay::initStage(
        HideAndSeekMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  bool v5; // dl
  bool v6; // dl
  bool v7; // dl
  bool v8; // dl
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  proto::HideAndSeekStageType *p_own_stage_type; // rsi
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v12; // rdx
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  switch ( this->own_stage_type_ )
  {
    case HIDE_AND_SEEK_STAGE_PREPARE:
      v5 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                            + 0x7FFF8000);
      if ( v5 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 92) & 7u) + 3, v5);
      this->own_stage_type_ = HIDE_AND_SEEK_STAGE_PICK;
      goto LABEL_18;
    case HIDE_AND_SEEK_STAGE_PICK:
      v6 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                            + 0x7FFF8000);
      if ( v6 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 92) & 7u) + 3, v6);
      this->own_stage_type_ = HIDE_AND_SEEK_STAGE_HIDE;
      goto LABEL_18;
    case HIDE_AND_SEEK_STAGE_GAME:
      this->own_stage_type_ = HIDE_AND_SEEK_STAGE_PREPARE;
      goto LABEL_18;
    case HIDE_AND_SEEK_STAGE_HIDE:
      v7 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                            + 0x7FFF8000);
      if ( v7 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 92) & 7u) + 3, v7);
      this->own_stage_type_ = HIDE_AND_SEEK_STAGE_SEEK;
      goto LABEL_18;
    case HIDE_AND_SEEK_STAGE_SEEK:
      v8 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                            + 0x7FFF8000);
      if ( v8 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 92) & 7u) + 3, v8);
      this->own_stage_type_ = HIDE_AND_SEEK_STAGE_SETTLE;
LABEL_18:
      if ( common::tools::MiscUtils::isContains<std::unordered_map<proto::HideAndSeekStageType,unsigned int>,proto::HideAndSeekStageType>(
             &this->stage_duration_map_,
             &this->own_stage_type_) )
      {
        p_own_stage_type = &this->own_stage_type_;
        v12 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
                &this->stage_duration_map_,
                &this->own_stage_type_);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000);
        LOBYTE(p_own_stage_type) = v14 != 0;
        v15 = v14 != 0 && (char)(((unsigned __int8)duration & 7) + 3) >= v14;
        if ( v15 )
          __asan_report_store4(duration, p_own_stage_type, v15);
        *duration = v13;
      }
      result = 0;
      break;
    default:
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "initStage",
        196);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v17,
             (const char (*)[47])"cannot initStage in cur_stage, cur stage_type:");
      common::milog::MiLogStream::operator<<<proto::HideAndSeekStageType,(proto::HideAndSeekStageType*)0>(
        v9,
        &this->own_stage_type_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
      break;
  }
  return result;
};

// Line 208: range 000000001512DFB4-000000001512E6DC
void __cdecl HideAndSeekMultistagePlay::onStageStart(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Player *v4; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t *v13; // rdx
  __int64 Now; // rsi
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-E0h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 uid:226 64 16 14 player_ptr:213 96 16 16 activity_ptr:219";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::onStageStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  switch ( this->own_stage_type_ )
  {
    case HIDE_AND_SEEK_STAGE_PREPARE:
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getOwnPlayer((const Scene *const)(v1 + 64));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "onStageStart",
          216);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          &v19,
          (const char (*)[46])"[HideAndSeekMultistagePlay] owner player null");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        ActivityComp = (unsigned int)Player::getActivityComp(v4);
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v1 + 96), ActivityComp);
        if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v1 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onStageStart",
            222);
          v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                 &v19,
                 (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
          v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])", uid: ");
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          *(_DWORD *)(v1 + 48) = Player::getUid(v9);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        else
        {
          __for_range = &this->player_uid_set_;
          __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 48) = *v10;
            v11 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( HideAndSeekActivity::isGmDelayUid(v11, *(_DWORD *)(v1 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v19,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "onStageStart",
                230);
              v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v19,
                      (const char (*)[48])"[HideAndSeekMultistagePlay] delay transfer uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v19);
            }
            else if ( HideAndSeekMultistagePlay::transferPlayer(this, *(_DWORD *)(v1 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v19,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "onStageStart",
                235);
              common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v19,
                (const char (*)[50])"[HideAndSeekMultistagePlay] transferPlayer failed");
              common::milog::MiLogStream::~MiLogStream(&v19);
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          HideAndSeekMultistagePlay::startHiderChatChannel(this);
        }
        std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v1 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
      break;
    case HIDE_AND_SEEK_STAGE_HIDE:
      __for_range_0 = &this->enter_uid_set_;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->enter_uid_set_)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(&this->enter_uid_set_)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v13 = (uint32_t *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        HideAndSeekMultistagePlay::logPlayerChosenSkill(this, *v13);
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      HideAndSeekMultistagePlay::tryStartHideAndSeekGallery(this);
      HideAndSeekMultistagePlay::printPlayerInfo(this);
      break;
    case HIDE_AND_SEEK_STAGE_SEEK:
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->seek_start_time_, Now, (_BYTE)this - 96);
      }
      this->seek_start_time_ = Now;
      HideAndSeekMultistagePlay::printPlayerInfo(this);
      break;
    case HIDE_AND_SEEK_STAGE_SETTLE:
      HideAndSeekMultistagePlay::printPlayerInfo(this);
      break;
    default:
      break;
  }
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 276: range 000000001512E6DE-000000001512ED2F
void __cdecl HideAndSeekMultistagePlay::onStageEnd(HideAndSeekMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v7; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::string stage_name; // [rsp+30h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 duration:283 64 16 15 param_table:282 96 16 13 group_ptr:325";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::onStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( is_succ )
  {
    luabind::adl::object::object((luabind::adl::object *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    switch ( this->own_stage_type_ )
    {
      case HIDE_AND_SEEK_STAGE_PREPARE:
      case HIDE_AND_SEEK_STAGE_PICK:
        goto LABEL_8;
      case HIDE_AND_SEEK_STAGE_HIDE:
        if ( !HideAndSeekMultistagePlay::checkPlayCanContinue(this) )
        {
          HideAndSeekMultistagePlay::handleExceptionQuitSettle(this);
        }
        else
        {
LABEL_8:
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&stage_name, byte_25685560, &__a);
          SceneMultistagePlay::startStage(
            this,
            MULTISTAGE_STAGE_IDLE,
            (uint32_t *)(v2 + 48),
            &stage_name,
            (const luabind::adl::object *)(v2 + 64));
          std::string::~string(&stage_name);
          std::allocator<char>::~allocator(&__a);
        }
        break;
      case HIDE_AND_SEEK_STAGE_SEEK:
        HideAndSeekMultistagePlay::settleHideAndSeek(this, HideAndSeekSettleNotify_SettleReason_SETTLE_PLAY_END, 1);
        HideAndSeekMultistagePlay::tryEndHideAndSeekGallery(this);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&stage_name, byte_25685560, &__a);
        SceneMultistagePlay::startStage(
          this,
          MULTISTAGE_STAGE_IDLE,
          (uint32_t *)(v2 + 48),
          &stage_name,
          (const luabind::adl::object *)(v2 + 64));
        std::string::~string(&stage_name);
        std::allocator<char>::~allocator(&__a);
        break;
      case HIDE_AND_SEEK_STAGE_SETTLE:
        std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 96));
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&stage_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onStageEnd",
            328);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            (common::milog::MiLogStream *const)&stage_name,
            (const char (*)[46])"[HideAndSeekMultistagePlay] group_ptr nullptr");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&stage_name);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          play_index = this->play_index_;
          v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          SceneMultistagePlayComp::endPlay(MultistagePlayComp, v7, play_index, 1);
          HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(this);
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
        break;
      default:
        break;
    }
    luabind::adl::object::~object((luabind::adl::object *const)(v2 + 64));
  }
  if ( v10 == (char *)v2 )
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

// Line 342: range 000000001512ED30-000000001512F24A
void __cdecl HideAndSeekMultistagePlay::unregisterPlayGroup(HideAndSeekMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  SceneBlockGroupComp *BlockGroupComp; // rbx
  unsigned __int64 v7; // rax
  unsigned int (__fastcall *v8)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // r14
  bool v9; // bl
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-85h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  const ActivityHideAndSeekExcelConfigMgr *activity_hide_and_seek_config_mgr; // [rsp+20h] [rbp-80h]
  const HideAndSeekMapConfig *map_config_ptr; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-70h] BYREF
  std::vector<unsigned int> v18; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-40h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  map_config_ptr = ActivityHideAndSeekExcelConfigMgr::getMapConfig(activity_hide_and_seek_config_mgr, this->map_id_);
  if ( map_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneId = Scene::getSceneId(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)map_config_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)map_config_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( SceneId == map_config_ptr->scene_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BlockGroupComp = Scene::getBlockGroupComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v7;
      if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)map_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config_ptr->group_id >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = map_config_ptr->group_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&v18, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
      v9 = v8(BlockGroupComp, &v18, 1LL) != 0;
      std::vector<unsigned int>::~vector(&v18);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "unregisterPlayGroup",
          358);
        v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v19,
                (const char (*)[63])"[HideAndSeekMultistagePlay] unregisterGroups failed, group_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &map_config_ptr->group_id);
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", scene_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getSceneId(this->scene_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "unregisterPlayGroup",
        352);
      v3 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
             &v19,
             (const char (*)[76])"[HideAndSeekMultistagePlay] map_id does not match current scene_id, map_id:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->map_id_);
      v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])", scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "unregisterPlayGroup",
      347);
    v1 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v19,
           (const char (*)[57])"[HideAndSeekMultistagePlay] getMapConfig failed, map_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
};

// Line 363: range 000000001512F24C-000000001512F67A
void __cdecl HideAndSeekMultistagePlay::onEnd(HideAndSeekMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  HideAndSeekActivity *v11; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:373 64 16 16 activity_ptr:380";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::onEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  HideAndSeekMultistagePlay::tryEndHideAndSeekGallery(this);
  HideAndSeekMultistagePlay::endHiderChatChannel(this);
  HideAndSeekMultistagePlay::setSceneTeamSingeAvatar(this, 0);
  HideAndSeekMultistagePlay::unregisterPlayGroup(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onEnd",
      376);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v13,
      (const char (*)[46])"[HideAndSeekMultistagePlay] owner player null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ActivityComp = (unsigned int)Player::getActivityComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v2 + 64), ActivityComp);
    if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "onEnd",
        383);
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v13,
             (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", uid: ");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v11 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      HideAndSeekActivity::onHideAndSeekEnd(v11);
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "onEnd",
        389);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v13,
        (const char (*)[34])"[HideAndSeekMultistagePlay] onEnd");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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

// Line 393: range 000000001512F67C-000000001513007A
void __cdecl HideAndSeekMultistagePlay::onPostEnterScene(HideAndSeekMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // r12
  uint32_t Uid; // edx
  common::milog::MiLogStream *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  unsigned int (__fastcall *v17)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64); // r15
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // r14
  PlayerExhibitionComp *ExhibitionComp; // rcx
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v27; // r12
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned int value; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-90h] BYREF
  char v32[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 world_ptr:424";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::onPostEnterScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onPostEnterScene",
      397);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v31,
           (const char (*)[56])"[HideAndSeekMultistagePlay] player is not in play ,uid:");
    value = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &value);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->leave_uid_set_,
           &value) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "onPostEnterScene",
        403);
      v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v31,
             (const char (*)[53])"[HideAndSeekMultistagePlay] leave_uid reEnter! ,uid:");
      value = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &value);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      Uid = Player::getUid(player);
      HideAndSeekMultistagePlay::updatePlayerDisappear(this, Uid);
      value = Player::getUid(player);
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->enter_uid_set_,
             &value) )
      {
        SceneMultistagePlay::notifyStage(this);
        HideAndSeekMultistagePlay::notifyNpcTalkStateChange(this, player, 1);
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "onPostEnterScene",
          416);
        v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v31,
               (const char (*)[55])"[HideAndSeekMultistagePlay] player reEnter play , uid:");
        value = Player::getUid(player);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &value);
        v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])", cur_stage:");
        common::milog::MiLogStream::operator<<<proto::HideAndSeekStageType,(proto::HideAndSeekStageType*)0>(
          v10,
          &this->own_stage_type_);
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->own_stage_type_ == HIDE_AND_SEEK_STAGE_HIDE || this->own_stage_type_ == HIDE_AND_SEEK_STAGE_SEEK )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          scene = this->scene_;
          p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
          if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
            p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
          v13 = *p_vptr_DescribalBase + 64LL;
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, Scene *))v13)(v2 + 32, scene);
          if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
              "onPostEnterScene",
              427);
            v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v31,
                    (const char (*)[52])"[HideAndSeekMultistagePlay] world_ptr nulltpr, uid:");
            value = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &value);
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
          else
          {
            v15 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v16 = (unsigned __int64)(v15->_vptr_World + 13);
            if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
              v16 = __asan_report_load8();
            v17 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v16;
            v18 = Player::getUid(player);
            if ( v17(v15, v18) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "onPostEnterScene",
                432);
              v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      &v31,
                      (const char (*)[57])"[HideAndSeekMultistagePlay] checkKickPlayer failed, uid:");
              value = Player::getUid(player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &value);
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v20 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v21 = (unsigned __int64)(v20->_vptr_World + 14);
              if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                v21 = __asan_report_load8();
              v22 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64))v21;
              v23 = Player::getUid(player);
              v22(v20, v23, 9LL);
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "onPostEnterScene",
                436);
              v24 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v31,
                      (const char (*)[55])"[HideAndSeekMultistagePlay] kickPlayer slow enter uid:");
              value = Player::getUid(player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &value);
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
          }
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
        }
        else
        {
          value = Player::getUid(player);
          std::unordered_set<unsigned int>::insert(&this->enter_uid_set_, &value);
          ExhibitionComp = Player::getExhibitionComp(player);
          if ( *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(ExhibitionComp, this->series_id_);
          if ( (unsigned __int8)std::string::empty(&this->trans_no_) )
          {
            BasicComp = Player::getBasicComp(player);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31, BasicComp);
            std::string::operator=(&this->trans_no_, &v31);
            std::string::~string(&v31);
          }
          HideAndSeekMultistagePlay::addAndLogPlayerIndentity(this, player);
          SceneMultistagePlay::notifyStage(this);
          HideAndSeekMultistagePlay::notifyNpcTalkStateChange(this, player, 1);
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onPostEnterScene",
            455);
          v27 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v31,
                  (const char (*)[52])"[HideAndSeekMultistagePlay] player enter play, uid:");
          value = Player::getUid(player);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &value);
          v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])", cur_stage:");
          common::milog::MiLogStream::operator<<<proto::HideAndSeekStageType,(proto::HideAndSeekStageType*)0>(
            v29,
            &this->own_stage_type_);
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
      }
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 459: range 000000001513007C-00000000151304FF
void __fastcall HideAndSeekMultistagePlay::updatePlayerDisappear(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // rdx
  uint32_t v6; // eax
  unsigned int v7; // r14d
  unsigned int *v8; // rdx
  SelectType v9; // r14d
  char *v10; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  SelectType *v12; // rdx
  char v13; // cl
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // dl
  uint32_t now; // [rsp+10h] [rbp-C0h]
  unsigned int *player_disconnect_time; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 disappear_time:465 64 4 7 uid:458";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::updatePlayerDisappear;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = uid;
  player_disconnect_time = std::unordered_map<unsigned int,unsigned int>::operator[](
                             &this->player_disconnect_map_,
                             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->seek_start_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)player_disconnect_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_disconnect_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_disconnect_time >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *player_disconnect_time )
    {
      now = common::tools::TimeUtils::getNow();
      v5 = std::max<unsigned int>(&this->seek_start_time_, player_disconnect_time);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( now <= *v5 )
        v6 = 0;
      else
        v6 = now - *v5;
      *(_DWORD *)(v2 + 48) = v6;
      v7 = *(_DWORD *)(v2 + 48);
      v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->player_disappear_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v9 = SAFE_ADD<unsigned int,unsigned int>(*v8, v7);
      v10 = (char *)(v2 + 64);
      v11 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->player_disappear_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10, (_BYTE)v11);
      }
      *v12 = v9;
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "updatePlayerDisappear",
        467);
      v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v27,
              (const char (*)[46])"[HideAndSeekMultistagePlay] seek_start_time_:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->seek_start_time_);
      v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v15,
              (const char (*)[25])" player_disconnect_time:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, player_disconnect_time);
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])" disappear_time:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v19,
              (const char (*)[23])" total_disappear_time:");
      v21 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->player_disappear_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  v24 = *(_BYTE *)(((unsigned __int64)player_disconnect_time >> 3) + 0x7FFF8000) != 0
     && (char)(((unsigned __int8)player_disconnect_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_disconnect_time >> 3)
                                                                              + 0x7FFF8000);
  if ( v24 )
    __asan_report_store4(player_disconnect_time, ((unsigned __int8)player_disconnect_time & 7u) + 3, v24);
  *player_disconnect_time = 0;
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

// Line 474: range 0000000015130500-0000000015130E72
void __cdecl HideAndSeekMultistagePlay::onPlayerLeaveWorld(
        HideAndSeekMultistagePlay *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rbx
  uint32_t Uid; // ecx
  common::milog::MiLogStream *v10; // r14
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v14; // rax
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t v20; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  char v22; // cl
  Group *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int value; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 group_ptr:503 64 16 13 event_ptr:526";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::onPlayerLeaveWorld;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onPlayerLeaveWorld",
      478);
    v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v30,
           (const char (*)[56])"[HideAndSeekMultistagePlay] player is not in play ,uid:");
    value = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &value);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->leave_uid_set_,
           &value) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "onPlayerLeaveWorld",
        483);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v30,
             (const char (*)[53])"[HideAndSeekMultistagePlay] leave_uid reEnter! ,uid:");
      value = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &value);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      value = Player::getUid(player);
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->enter_uid_set_,
              &value) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "onPlayerLeaveWorld",
          489);
        v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v30,
               (const char (*)[55])"[HideAndSeekMultistagePlay] leave_uid not enter! ,uid:");
        value = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &value);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        value = Player::getUid(player);
        std::unordered_set<unsigned int>::insert(&this->leave_uid_set_, &value);
        value = Player::getUid(player);
        std::unordered_set<unsigned int>::erase(&this->enter_uid_set_, &value);
        if ( *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_record_score_);
        }
        if ( this->is_record_score_ )
        {
          Uid = Player::getUid(player);
          HideAndSeekMultistagePlay::tryPunishQuitPlayer(this, Uid, leave_world_reason);
        }
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "onPlayerLeaveWorld",
          501);
        v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v30,
                (const char (*)[52])"[HideAndSeekMultistagePlay] player leave play, uid:");
        value = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &value);
        common::milog::MiLogStream::~MiLogStream(&v30);
        std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v3 + 32));
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 32), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onPlayerLeaveWorld",
            506);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v30,
            (const char (*)[46])"[HideAndSeekMultistagePlay] group_ptr nullptr");
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( this->own_stage_type_ == HIDE_AND_SEEK_STAGE_SETTLE
            && !std::unordered_set<unsigned int>::size(&this->enter_uid_set_) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
            if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            play_index = this->play_index_;
            v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            SceneMultistagePlayComp::endPlay(MultistagePlayComp, v14, play_index, 1);
          }
          else if ( !HideAndSeekMultistagePlay::checkPlayCanContinue(this) )
          {
            HideAndSeekMultistagePlay::handleExceptionQuitSettle(this);
          }
          else
          {
            EventUtil::createEvent((data::EventType)(v3 + 64));
            v15 = 0LL;
            if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v3 + 64), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "onPlayerLeaveWorld",
                529);
              v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v30,
                      (const char (*)[35])"[HideAndSeekMultistagePlay] play: ");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->play_index_);
              v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" group: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->group_id_);
              common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v19,
                (const char (*)[25])" stage end event nullptr");
              common::milog::MiLogStream::~MiLogStream(&v30);
            }
            else
            {
              v20 = Player::getUid(player);
              v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v22 = *(_BYTE *)(((unsigned __int64)&v21->uid >> 3) + 0x7FFF8000);
              if ( v22 != 0 && (char)((((_BYTE)v21 + 60) & 7) + 3) >= v22 )
              {
                LOBYTE(v15) = v22 != 0;
                __asan_report_store4(&v21->uid, v15, (_BYTE)v21);
              }
              v21->uid = v20;
              v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              if ( Group::handleEvent(v23, (EventPtr *)(v3 + 64)) )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                  "onPlayerLeaveWorld",
                  536);
                v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v30,
                        (const char (*)[38])"[HideAndSeekMultistagePlay] group_id:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->group_id_);
                v26 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        v25,
                        (const char (*)[66])" handleEvent EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END fails. @play: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->play_index_);
                common::milog::MiLogStream::~MiLogStream(&v30);
              }
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
      }
    }
  }
  if ( v31 == (char *)v3 )
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

// Line 542: range 0000000015130E74-0000000015131044
void __cdecl HideAndSeekMultistagePlay::onPlayerDisconnect(HideAndSeekMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  int Now; // r12d
  unsigned int *p_value; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  char v7; // cl
  common::milog::MiLogStream *v8; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onPlayerDisconnect",
      545);
    v2 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v11,
           (const char (*)[56])"[HideAndSeekMultistagePlay] player is not in play ,uid:");
    value = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &value);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    value = Player::getUid(player);
    p_value = &value;
    v5 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->player_disconnect_map_, &value);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(p_value) = v7 != 0;
      __asan_report_store4(v5, p_value, (_BYTE)v5);
    }
    *v6 = Now;
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onPlayerDisconnect",
      549);
    v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v11,
           (const char (*)[53])"[HideAndSeekMultistagePlay] onPlayerDisconnect ,uid:");
    value = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &value);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 553: range 0000000015131046-0000000015131176
__int64 __fastcall HideAndSeekMultistagePlay::getPlayerCamp(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:552";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::getPlayerCamp;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = __asan_report_load4();
  }
  if ( this->hunter_born_pair_.first == *(_DWORD *)(v4 - 32) )
  {
    result = 1LL;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
              &this->hider_born_map_,
              (const unsigned int *)(v4 - 32)) )
  {
    result = 2LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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

// Line 566: range 0000000015131178-0000000015131B7F
__int64 __fastcall HideAndSeekMultistagePlay::onSelectHideAndSeekAvatar(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        uint32_t avatar_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // rax
  PlayerAvatarComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Player *v21; // rax
  PlayerAvatarComp *v22; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v25; // rax
  Player *v26; // rax
  PlayerAvatarComp *v27; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint64_t v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t CostumeId; // eax
  __int64 result; // rax
  std::allocator<long unsigned int> __a; // [rsp+27h] [rbp-189h] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+28h] [rbp-188h] BYREF
  char v37[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 7 ret:592 64 4 7 uid:565 80 4 13 avatar_id:565 96 16 13 world_ptr:572 128 16 14 player_pt"
                        "r:578 160 16 21 formal_avatar_ptr:585 192 24 12 guid_vec:591 256 32 10 notify:611";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::onSelectHideAndSeekAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 80) = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->own_stage_type_ == HIDE_AND_SEEK_STAGE_PICK )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v10 = *p_vptr_DescribalBase + 64LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Scene *))v10)(v3 + 96, scene);
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "onSelectHideAndSeekAvatar",
        575);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v3 + 256),
        (const char (*)[46])"[HideAndSeekMultistagePlay] world_ptr nulltpr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v3 + 128), (__int64)this->scene_, *(_DWORD *)(v3 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "onSelectHideAndSeekAvatar",
          581);
        v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[53])"[HideAndSeekMultistagePlay] player_ptr nullptr, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        v7 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        AvatarComp = (unsigned int)Player::getAvatarComp(v12);
        PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 160), AvatarComp);
        if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onSelectHideAndSeekAvatar",
            588);
          v14 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[60])"[HideAndSeekMultistagePlay] formal_avatar_ptr nullptr, uid:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v3 + 64));
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          v7 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          __l._M_array = (std::initializer_list<long unsigned int>::iterator)Avatar::getGuid(v17);
          std::allocator<unsigned long>::allocator(&__a);
          std::vector<unsigned long>::vector(
            (std::vector<long unsigned int> *const)(v3 + 192),
            (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
            &__a);
          std::allocator<unsigned long>::~allocator(&__a);
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v19 = Player::getAvatarComp(v18);
          *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkAvatarTeamCanJoinSceneTeam(
                                   v19,
                                   (const std::vector<long unsigned int> *)(v3 + 192));
          if ( *(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 256),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
              "onSelectHideAndSeekAvatar",
              595);
            v20 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                    (common::milog::MiLogStream *const)(v3 + 256),
                    (const char (*)[76])"[HideAndSeekMultistagePlay] checkAvatarTeamCanJoinSceneTeam fails. retcode:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
            v7 = *(_DWORD *)(v3 + 48);
          }
          else
          {
            v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v22 = Player::getAvatarComp(v21);
            v23 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            Guid = Avatar::getGuid(v23);
            *(_DWORD *)(v3 + 48) = PlayerAvatarComp::checkChangeCurAvatar(v22, Guid);
            if ( *(_DWORD *)(v3 + 48) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 256),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "onSelectHideAndSeekAvatar",
                601);
              v25 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      (common::milog::MiLogStream *const)(v3 + 256),
                      (const char (*)[55])"[HideAndSeekMultistagePlay] checkChangeCurAvatar fails");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
              v7 = *(_DWORD *)(v3 + 48);
            }
            else
            {
              v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v27 = Player::getAvatarComp(v26);
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toThisPtr<Scene>((Scene *)&__l._M_len);
              v28 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              v29 = Avatar::getGuid(v28);
              *(_DWORD *)(v3 + 48) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                       v27,
                                       (const std::vector<long unsigned int> *)(v3 + 192),
                                       v29,
                                       (ScenePtr *)&__l._M_len,
                                       CHANGE_SCENE_TEAM_REASON_MP_CHANGE);
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__l._M_len);
              if ( *(_DWORD *)(v3 + 48) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 256),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                  "onSelectHideAndSeekAvatar",
                  607);
                v30 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        (common::milog::MiLogStream *const)(v3 + 256),
                        (const char (*)[66])"[HideAndSeekMultistagePlay] setSceneTeamAndAddToScene fails, ret:");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
                v7 = *(_DWORD *)(v3 + 48);
              }
              else
              {
                proto::HideAndSeekPlayerSetAvatarNotify::HideAndSeekPlayerSetAvatarNotify((proto::HideAndSeekPlayerSetAvatarNotify *const)(v3 + 256));
                proto::HideAndSeekPlayerSetAvatarNotify::set_uid(
                  (proto::HideAndSeekPlayerSetAvatarNotify *const)(v3 + 256),
                  *(_DWORD *)(v3 + 64));
                proto::HideAndSeekPlayerSetAvatarNotify::set_avatar_id(
                  (proto::HideAndSeekPlayerSetAvatarNotify *const)(v3 + 256),
                  *(_DWORD *)(v3 + 80));
                v31 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                CostumeId = Avatar::getCostumeId(v31);
                proto::HideAndSeekPlayerSetAvatarNotify::set_costume_id(
                  (proto::HideAndSeekPlayerSetAvatarNotify *const)(v3 + 256),
                  CostumeId);
                SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 256), 0);
                v7 = 0;
                proto::HideAndSeekPlayerSetAvatarNotify::~HideAndSeekPlayerSetAvatarNotify((proto::HideAndSeekPlayerSetAvatarNotify *const)(v3 + 256));
              }
            }
          }
          std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 192));
        }
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onSelectHideAndSeekAvatar",
      569);
    v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           (common::milog::MiLogStream *const)(v3 + 256),
           (const char (*)[61])"[HideAndSeekMultistagePlay] cur stage cannot select avatar, ");
    common::milog::MiLogStream::operator<<<proto::HideAndSeekStageType,(proto::HideAndSeekStageType*)0>(
      v6,
      &this->own_stage_type_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v7 = -1;
  }
  result = v7;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 620: range 0000000015131B80-00000000151320D2
void __fastcall HideAndSeekMultistagePlay::onSetHideAndSeekReady(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  std::unordered_set<unsigned int>::size_type v8; // r14
  uint32_t SceneTimeSeconds; // ecx
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  char v15; // dl
  char *v16; // rsi
  bool v17; // dl
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 duration:636 64 4 7 uid:619 80 40 10 notify:629";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::onSetHideAndSeekReady;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onSetHideAndSeekReady",
      623);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v18,
           (const char (*)[54])"[HIDEANDSEEK] player in not in hideandseek play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v6 = std::unordered_set<unsigned int>::insert(
           &this->ready_uid_set_,
           (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
    if ( v6.second )
    {
      proto::HideAndSeekPlayerReadyNotify::HideAndSeekPlayerReadyNotify((proto::HideAndSeekPlayerReadyNotify *const)(v2 + 80));
      v7 = proto::HideAndSeekPlayerReadyNotify::mutable_uid_list((proto::HideAndSeekPlayerReadyNotify *const)(v2 + 80));
      common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->ready_uid_set_, v7);
      SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v2 + 80), 0);
      v8 = std::unordered_set<unsigned int>::size(&this->ready_uid_set_);
      if ( v8 == std::set<unsigned int>::size(&this->player_uid_set_) )
      {
        *(_DWORD *)(v2 + 48) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( SceneTimeSeconds > this->stage_begin_scene_time_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v10 = Scene::getSceneTimeSeconds(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) += v10 - this->stage_begin_scene_time_;
        }
        *(_DWORD *)(v2 + 48) += 5;
        if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->duration_seconds_ > *(_DWORD *)(v2 + 48) )
        {
          SceneMultistagePlay::rewriteStageTime(this, 5u);
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onSetHideAndSeekReady",
            647);
          v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v18,
                  (const char (*)[59])"[HIDEANDSEEK] all players are ready, reduce duration from:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->duration_seconds_);
          v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])" to:");
          v16 = (char *)(v2 + 48);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v18);
          v14 = *(_DWORD *)(v2 + 48);
          v15 = *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000);
          LOBYTE(v16) = v15 != 0;
          v17 = v15 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v15;
          if ( v17 )
            __asan_report_store4(&this->duration_seconds_, v16, v17);
          this->duration_seconds_ = v14;
          SceneMultistagePlay::notifyStage(this);
        }
      }
      proto::HideAndSeekPlayerReadyNotify::~HideAndSeekPlayerReadyNotify((proto::HideAndSeekPlayerReadyNotify *const)(v2 + 80));
    }
  }
  if ( v19 == (char *)v2 )
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

// Line 657: range 00000000151320D4-00000000151327B1
void __cdecl HideAndSeekMultistagePlay::tryStartHideAndSeekGallery(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  SceneGalleryComp *GalleryComp; // rdi
  std::set<unsigned int> *p_player_uid_set; // rcx
  common::milog::MiLogStream *v6; // rax
  SceneGalleryComp *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  SceneGalleryComp *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  HideAndSeekGallery *v12; // rcx
  HideAndSeekGallery *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 20 base_gallery_ptr:668 64 16 29 hide_and_seek_gallery_ptr:674";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::tryStartHideAndSeekGallery;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  p_player_uid_set = &this->player_uid_set_;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
    __asan_report_load4();
  }
  if ( (unsigned int)SceneGalleryComp::initGallery(GalleryComp, this->gallery_id_, p_player_uid_set) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "tryStartHideAndSeekGallery",
      660);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v16,
           (const char (*)[47])"[HIDEANDSEEK] gallery init failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Scene::getGalleryComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::startGallery(v7, this->gallery_id_) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "tryStartHideAndSeekGallery",
        665);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v16,
             (const char (*)[48])"[HIDEANDSEEK] gallery start failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)(v1 + 32), (__int64)v9, this->gallery_id_);
      if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "tryStartHideAndSeekGallery",
          671);
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v16,
                (const char (*)[46])"[HIDEANDSEEK] findGallery failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        std::dynamic_pointer_cast<HideAndSeekGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 64));
        if ( std::operator==<HideAndSeekGallery>((const std::shared_ptr<HideAndSeekGallery> *)(v1 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "tryStartHideAndSeekGallery",
            677);
          v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v16,
                  (const char (*)[55])"[HIDEANDSEEK] dynamic_pointer_cast failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        else
        {
          v12 = std::__shared_ptr_access<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          HideAndSeekGallery::setMultistageGroupId(v12, this->group_id_);
          v13 = std::__shared_ptr_access<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          HideAndSeekGallery::setMultistagePlayIndex(v13, this->play_index_);
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "tryStartHideAndSeekGallery",
            683);
          v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v16,
                  (const char (*)[28])"[HIDEANDSEEK] startGallery:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        std::shared_ptr<HideAndSeekGallery>::~shared_ptr((std::shared_ptr<HideAndSeekGallery> *const)(v1 + 64));
      }
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 32));
    }
  }
  if ( v17 == (char *)v1 )
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

// Line 687: range 00000000151327B2-0000000015132A89
void __cdecl HideAndSeekMultistagePlay::tryEndHideAndSeekGallery(HideAndSeekMultistagePlay *const this)
{
  SceneGalleryComp *GalleryComp; // rcx
  bool v2; // bl
  common::milog::MiLogStream *v3; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v5; // rax
  std::shared_ptr<BaseGallery> __a; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, (__int64)GalleryComp, this->gallery_id_);
  v2 = std::operator==<BaseGallery>(0LL, &__a);
  std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "tryEndHideAndSeekGallery",
      690);
    v3 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v8,
           (const char (*)[45])"[HIDEANDSEEK] findGallery fail, gallery_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_gallery_id = Scene::getGalleryComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_gallery_id = (SceneGalleryComp *)&this->gallery_id_;
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, this->gallery_id_, 0, GALLERY_STOP_NONE) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "tryEndHideAndSeekGallery",
        695);
      v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v8,
             (const char (*)[58])"[HIDEANDSEEK] forceStopAndClearGallery fail, gallery_id_:");
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "tryEndHideAndSeekGallery",
        698);
      v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v8,
             (const char (*)[40])"[HIDEANDSEEK] forceStopAndClearGallery:");
    }
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 702: range 0000000015132A8A-0000000015132DAF
int32_t __cdecl HideAndSeekMultistagePlay::setSceneTeamSingeAvatar(
        HideAndSeekMultistagePlay *const this,
        bool is_single_avatar)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v7; // rax
  int32_t v8; // r14d
  SceneTeam *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 world_ptr:703 64 16 18 scene_team_ptr:709";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::setSceneTeamSingeAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v7 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v7)(v2 + 32, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "setSceneTeamSingeAvatar",
      706);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v11,
      (const char (*)[47])"[HideAndSeekMultistagePlay] world_ptr nulltpr ");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    World::getSceneTeam((World *const)(v2 + 64));
    if ( std::operator==<SceneTeam>((const std::shared_ptr<SceneTeam> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "setSceneTeamSingeAvatar",
        712);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        &v11,
        (const char (*)[52])"[HideAndSeekMultistagePlay] scene_team_ptr nullptr ");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      SceneTeam::setInSingeAvatarMode(v9, is_single_avatar);
      v8 = 0;
    }
    std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v2 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  result = v8;
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
  return result;
};

// Line 720: range 0000000015132DB0-00000000151343D4
void __cdecl HideAndSeekMultistagePlay::settleHideAndSeek(
        HideAndSeekMultistagePlay *const this,
        proto::HideAndSeekSettleNotify::SettleReason settle_reason,
        bool is_succ)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  uint32_t Now; // eax
  uint32_t play_index; // r14d
  Group *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  Player *v13; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> >::reference v15; // rax
  _QWORD *v16; // rdx
  Player *v17; // rax
  PlayerBasicComp *BasicComp; // r14
  proto::ProfilePicture *v19; // rax
  Player *v20; // rax
  PlayerBasicComp *v21; // rax
  const std::string *v22; // rax
  Player *v23; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v24; // rdx
  Player *v26; // rax
  PlayerExhibitionComp *v27; // rcx
  unsigned __int64 n; // rax
  Player *v29; // rax
  Player *v30; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  uint32_t v40; // eax
  SceneMultistagePlayComp *MultistagePlayComp; // [rsp+8h] [rbp-2E8h]
  bool is_hunter_win; // [rsp+2Bh] [rbp-2C5h]
  unsigned int add_score; // [rsp+2Ch] [rbp-2C4h]
  uint32_t actual_score; // [rsp+30h] [rbp-2C0h]
  data::HIDE_AND_SEEK_SKILL_CATEGORY winner_camp; // [rsp+34h] [rbp-2BCh]
  uint32_t old_score; // [rsp+38h] [rbp-2B8h]
  uint32_t uid; // [rsp+3Ch] [rbp-2B4h]
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+40h] [rbp-2B0h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-2A8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-2A0h] BYREF
  std::vector<ExhibitionScoreParam>::iterator __for_begin_1; // [rsp+58h] [rbp-298h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-290h]
  const std::pair<unsigned int const,unsigned int> *v54; // [rsp+68h] [rbp-288h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid_0; // [rsp+70h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *index; // [rsp+78h] [rbp-278h]
  std::set<unsigned int> *__for_range_1; // [rsp+80h] [rbp-270h]
  std::set<unsigned int> *__for_range_3; // [rsp+88h] [rbp-268h]
  std::vector<ExhibitionScoreParam> *__for_range_4; // [rsp+90h] [rbp-260h]
  proto::ExhibitionDisplayInfo *score_info; // [rsp+98h] [rbp-258h]
  proto::HideAndSeekSettleInfo *settle_info; // [rsp+A0h] [rbp-250h]
  std::vector<ExhibitonCardParam> *__for_range_2; // [rsp+A8h] [rbp-248h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+B0h] [rbp-240h]
  std::set<unsigned int> *__for_range; // [rsp+B8h] [rbp-238h]
  common::milog::MiLogStream v65; // [rsp+C0h] [rbp-230h] BYREF
  char v66[528]; // [rsp+E0h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 7 uid:802 64 4 7 uid:779 80 8 9 param:791 112 12 9 param:814 144 16 14 player_ptr:804 176"
                        " 16 16 activity_ptr:825 208 24 19 score_param_vec:811 272 24 19 score_entry_vec:813 336 112 10 notify:721";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::settleHideAndSeek;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = 0x4000000;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862734] = -202116109;
  proto::HideAndSeekSettleNotify::HideAndSeekSettleNotify((proto::HideAndSeekSettleNotify *const)(v3 + 336));
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HideAndSeekSettleNotify::set_play_index((proto::HideAndSeekSettleNotify *const)(v3 + 336), this->play_index_);
  proto::HideAndSeekSettleNotify::set_reason((proto::HideAndSeekSettleNotify *const)(v3 + 336), settle_reason);
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HideAndSeekSettleNotify::set_stage_type(
    (proto::HideAndSeekSettleNotify *const)(v3 + 336),
    this->own_stage_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->seek_start_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !this->seek_settle_time_ )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "settleHideAndSeek",
        728);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v65,
             (const char (*)[41])"[HIDEANDSEEK] settle by server, is_succ:");
      common::milog::MiLogStream::operator<<(v6, is_succ);
      common::milog::MiLogStream::~MiLogStream(&v65);
      Now = common::tools::TimeUtils::getNow();
      HideAndSeekMultistagePlay::recordSettleTime(this, Now);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HideAndSeekSettleNotify::set_cost_time((proto::HideAndSeekSettleNotify *const)(v3 + 336), this->cost_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_record_score_);
  }
  proto::HideAndSeekSettleNotify::set_is_record_score(
    (proto::HideAndSeekSettleNotify *const)(v3 + 336),
    this->is_record_score_);
  if ( !is_succ )
  {
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 336), 0);
    std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v3 + 176));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 176), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "settleHideAndSeek",
        741);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v65, (const char (*)[18])"group_ptr nullptr");
      common::milog::MiLogStream::~MiLogStream(&v65);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      play_index = this->play_index_;
      v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
      SceneMultistagePlayComp::endPlay(MultistagePlayComp, v9, play_index, is_succ);
      __for_range = &this->player_uid_set_;
      __for_begin_1._M_current = (ExhibitionScoreParam *)std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
      *(std::set<unsigned int>::iterator *)(v3 + 80) = std::set<unsigned int>::end(&this->player_uid_set_);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_1,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 80)) )
      {
        v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_1);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        uid = *v10;
        *(_QWORD *)(v3 + 272) = 0LL;
        *(_QWORD *)(v3 + 280) = 0LL;
        *(_QWORD *)(v3 + 288) = 0LL;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 272));
        HideAndSeekMultistagePlay::logPlayerHideAndSeekSettle(
          this,
          uid,
          is_succ,
          0,
          0,
          0,
          (const std::vector<unsigned int> *)(v3 + 272));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 272));
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_1);
      }
      HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(this);
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 176));
  }
  else
  {
    winner_camp = HideAndSeekMultistagePlay::getWinnerCamp(this);
    if ( winner_camp )
    {
      is_hunter_win = winner_camp == HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER;
      if ( winner_camp == HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::HideAndSeekSettleNotify::add_winner_list(
          (proto::HideAndSeekSettleNotify *const)(v3 + 336),
          this->hunter_born_pair_.first);
      }
      else
      {
        __for_range_0 = &this->hider_born_map_;
        __for_begin_1._M_current = (ExhibitionScoreParam *)std::unordered_map<unsigned int,unsigned int>::begin(&this->hider_born_map_)._M_cur;
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,unsigned int>::end(&this->hider_born_map_);
        while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_1,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 80)) )
        {
          v54 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_1);
          uid_0 = std::get<0ul,unsigned int const,unsigned int>(v54);
          index = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v54);
          if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::HideAndSeekSettleNotify::add_winner_list((proto::HideAndSeekSettleNotify *const)(v3 + 336), *uid_0);
          std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_1);
        }
      }
      HideAndSeekMultistagePlay::writeHunterWinExhibition(this, is_hunter_win);
      HideAndSeekMultistagePlay::writeHiderWinExhibition(this, is_hunter_win);
      __for_range_1 = &this->player_uid_set_;
      __for_begin_0._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
      __for_begin._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_begin) )
      {
        v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 64) = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Scene::findPlayer((const Scene *const)(v3 + 176), (__int64)this->scene_, *(_DWORD *)(v3 + 64));
        if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 176), 0LL)
          && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->leave_uid_set_,
                (const unsigned int *)(v3 + 64)) )
        {
          settle_info = proto::HideAndSeekSettleNotify::add_settle_info_list((proto::HideAndSeekSettleNotify *const)(v3 + 336));
          proto::HideAndSeekSettleInfo::set_uid(settle_info, *(_DWORD *)(v3 + 64));
          v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          ExhibitionComp = Player::getExhibitionComp(v13);
          if ( *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::getSettleCardVec(
            (std::vector<ExhibitonCardParam> *)(v3 + 272),
            ExhibitionComp,
            this->series_id_);
          __for_range_2 = (std::vector<ExhibitonCardParam> *)(v3 + 272);
          __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v3 + 272))._M_current;
          __for_begin_1._M_current = (ExhibitionScoreParam *)std::vector<ExhibitonCardParam>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(
                    (const __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> > *)&__for_end,
                    (const __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> > *)&__for_begin_1) )
          {
            v15 = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*((const __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> > *const)&__for_end);
            v16 = v15;
            if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v15->card_param + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->card_param + 3) >> 3)
                                                              + 0x7FFF8000) )
            {
              __asan_report_load_n(v15, 8LL);
            }
            *(_QWORD *)(v3 + 80) = *v16;
            card_info = proto::HideAndSeekSettleInfo::add_card_list(settle_info);
            proto::ExhibitionDisplayInfo::set_id(card_info, *(_DWORD *)(v3 + 80));
            proto::ExhibitionDisplayInfo::set_param(card_info, *(_DWORD *)(v3 + 84));
            __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++((__gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> > *const)&__for_end);
          }
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          BasicComp = Player::getBasicComp(v17);
          v19 = proto::HideAndSeekSettleInfo::mutable_profile_picture(settle_info);
          PlayerBasicComp::getProfilePictureToClient(BasicComp, v19);
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          v21 = Player::getBasicComp(v20);
          v22 = PlayerBasicComp::getNickName[abi:cxx11](v21);
          proto::HideAndSeekSettleInfo::set_nickname(settle_info, v22);
          v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          Player::getOnlineId[abi:cxx11]((std::string *)&v65, v23);
          proto::HideAndSeekSettleInfo::set_online_id(settle_info, (std::string *)&v65);
          std::string::~string(&v65);
          std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v3 + 272));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 176));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
      }
      __for_range_3 = &this->player_uid_set_;
      __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range_3)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v24 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v24;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Scene::findPlayer((const Scene *const)(v3 + 144), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
        if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 144), 0LL)
          && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->leave_uid_set_,
                (const unsigned int *)(v3 + 48)) )
        {
          proto::HideAndSeekSettleNotify::clear_score_list((proto::HideAndSeekSettleNotify *const)(v3 + 336));
          v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          v27 = Player::getExhibitionComp(v26);
          if ( *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::getSettleScoreVec(
            (std::vector<ExhibitionScoreParam> *)(v3 + 208),
            v27,
            this->series_id_);
          add_score = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 272));
          __for_range_4 = (std::vector<ExhibitionScoreParam> *)(v3 + 208);
          __for_begin_1._M_current = std::vector<ExhibitionScoreParam>::begin((std::vector<ExhibitionScoreParam> *const)(v3 + 208))._M_current;
          *(std::vector<ExhibitionScoreParam>::iterator *)(v3 + 80) = std::vector<ExhibitionScoreParam>::end(__for_range_4);
          while ( __gnu_cxx::operator!=<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>(
                    &__for_begin_1,
                    (const __gnu_cxx::__normal_iterator<ExhibitionScoreParam*,std::vector<ExhibitionScoreParam> > *)(v3 + 80)) )
          {
            n = (unsigned __int64)__gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator*(&__for_begin_1);
            if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_load_n(n, 12LL);
            }
            *(_QWORD *)(v3 + 112) = *(_QWORD *)n;
            *(_DWORD *)(v3 + 120) = *(_DWORD *)(n + 8);
            score_info = proto::HideAndSeekSettleNotify::add_score_list((proto::HideAndSeekSettleNotify *const)(v3 + 336));
            proto::ExhibitionDisplayInfo::set_id(score_info, *(_DWORD *)(v3 + 112));
            proto::ExhibitionDisplayInfo::set_param(score_info, *(_DWORD *)(v3 + 116));
            proto::ExhibitionDisplayInfo::set_detail_param(score_info, *(_DWORD *)(v3 + 120));
            add_score = SAFE_ADD<unsigned int,unsigned int>(add_score, *(_DWORD *)(v3 + 116));
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v3 + 272),
              (const std::vector<unsigned int>::value_type *)(v3 + 112));
            __gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator++(&__for_begin_1);
          }
          v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          Player::sendProto(v29, (const google::protobuf::Message *)(v3 + 336));
          v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          ActivityComp = (unsigned int)Player::getActivityComp(v30);
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v3 + 176), ActivityComp);
          if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v3 + 176)) )
          {
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
              "settleHideAndSeek",
              828);
            v32 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    &v65,
                    (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &this->activity_id_);
            v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])", uid: ");
            v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            *(_DWORD *)(v3 + 64) = Player::getUid(v35);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v65);
          }
          else
          {
            actual_score = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load1(&this->is_record_score_);
            }
            if ( this->is_record_score_ )
            {
              v36 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              old_score = BaseActivity::getCurScore(v36);
              v37 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              BaseActivity::addScoreWithLimit(v37, add_score);
              v38 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              if ( old_score >= BaseActivity::getCurScore(v38) )
              {
                v40 = 0;
              }
              else
              {
                v39 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                v40 = BaseActivity::getCurScore(v39) - old_score;
              }
              actual_score = v40;
            }
            HideAndSeekMultistagePlay::logPlayerHideAndSeekSettle(
              this,
              *(_DWORD *)(v3 + 48),
              is_succ,
              is_hunter_win,
              add_score,
              actual_score,
              (const std::vector<unsigned int> *)(v3 + 272));
          }
          std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v3 + 176));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 272));
          std::vector<ExhibitionScoreParam>::~vector((std::vector<ExhibitionScoreParam> *const)(v3 + 208));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 144));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      HideAndSeekMultistagePlay::doPlayerDisappearPunish(this);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "settleHideAndSeek",
        757);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v65, (const char (*)[20])"getWinnerCamp none!");
      common::milog::MiLogStream::~MiLogStream(&v65);
      SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 336), 0);
    }
  }
  proto::HideAndSeekSettleNotify::~HideAndSeekSettleNotify((proto::HideAndSeekSettleNotify *const)(v3 + 336));
  if ( v66 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 847: range 00000000151343D6-0000000015134FEF
void __cdecl HideAndSeekMultistagePlay::doPlayerDisappearPunish(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rdx
  Player *v8; // rax
  PlayerMatchComp *MatchComp; // rcx
  Player *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rdx
  Player *v13; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *v19; // rax
  PlayerMatchComp *v20; // rcx
  uint32_t v21; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  HideAndSeekActivity *v33; // rax
  Player *v34; // rdx
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  const ActivityHideAndSeekExcelConfigMgr *activity_hide_and_seek_config_mgr; // [rsp+28h] [rbp-108h]
  const HideAndSeekDetailConfig *config_ptr; // [rsp+30h] [rbp-100h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 7 uid:866 48 4 18 disappear_time:886 64 4 24 total_disappear_time:898 80 4 16 punish_time"
                        "s:899 96 16 14 player_ptr:868 128 16 16 activity_ptr:892";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::doPlayerDisappearPunish;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -234556924;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_record_score_);
  }
  if ( this->is_record_score_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 128));
    activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128))->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    config_ptr = ActivityHideAndSeekExcelConfigMgr::getActivityDetailConfig(
                   activity_hide_and_seek_config_mgr,
                   this->activity_id_);
    if ( config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&config_ptr->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config_ptr->is_punish_disappear);
      if ( !config_ptr->is_punish_disappear )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "doPlayerDisappearPunish",
          862);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          &v41,
          (const char (*)[54])"[HideAndSeekMultistagePlay] punish disappear not open");
        common::milog::MiLogStream::~MiLogStream(&v41);
      }
      else
      {
        __for_range = &this->player_uid_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 32) = *v5;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::findPlayer((const Scene *const)(v1 + 96), (__int64)this->scene_, *(_DWORD *)(v1 + 32));
          if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96)) )
          {
            if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                   &this->punish_uid_set_,
                   (const unsigned int *)(v1 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                "doPlayerDisappearPunish",
                875);
              v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                     &v41,
                     (const char (*)[59])"[HideAndSeekMultistagePlay] player has been punished, uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v6,
                (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::~MiLogStream(&v41);
            }
            else
            {
              v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
                     &this->player_disconnect_map_,
                     (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
              if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *v7 )
              {
                v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                MatchComp = Player::getMatchComp(v8);
                if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                PlayerMatchComp::matchPunish(MatchComp, this->match_id_);
                v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                HideAndSeekMultistagePlay::logPlayerPunish(this, v10);
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                  "doPlayerDisappearPunish",
                  883);
                v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                        &v41,
                        (const char (*)[63])"[HideAndSeekMultistagePlay] player disappear when settle, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v1 + 32));
                common::milog::MiLogStream::~MiLogStream(&v41);
              }
              else
              {
                v12 = std::unordered_map<unsigned int,unsigned int>::operator[](
                        &this->player_disappear_map_,
                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
                if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v1 + 48) = *v12;
                if ( *(_DWORD *)(v1 + 48) )
                {
                  v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                  ActivityComp = (unsigned int)Player::getActivityComp(v13);
                  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  PlayerActivityComp::findActivity<HideAndSeekActivity>(
                    (PlayerActivityComp *const)(v1 + 128),
                    ActivityComp);
                  if ( std::operator==<HideAndSeekActivity>(
                         0LL,
                         (const std::shared_ptr<HideAndSeekActivity> *)(v1 + 128)) )
                  {
                    common::milog::MiLogStream::create(
                      &v41,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                      "doPlayerDisappearPunish",
                      895);
                    v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                            &v41,
                            (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
                    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v15,
                            &this->activity_id_);
                    v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v16,
                            (const char (*)[7])", uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v1 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v41);
                  }
                  else
                  {
                    v18 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                    *(_DWORD *)(v1 + 64) = *(_DWORD *)(v1 + 48) + HideAndSeekActivity::getDisappearTime(v18);
                    *(_DWORD *)(v1 + 80) = 0;
                    while ( 1 )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)config_ptr - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->first_punish_disappear_time >> 3)
                                                                                  + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      if ( config_ptr->first_punish_disappear_time >= *(_DWORD *)(v1 + 64) )
                        break;
                      ++*(_DWORD *)(v1 + 80);
                      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                      v20 = Player::getMatchComp(v19);
                      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3)
                                                                            + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      PlayerMatchComp::matchPunish(v20, this->match_id_);
                      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&config_ptr->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      if ( config_ptr->repeat_punish_disappear_time >= *(_DWORD *)(v1 + 64) )
                        v21 = 0;
                      else
                        v21 = *(_DWORD *)(v1 + 64) - config_ptr->repeat_punish_disappear_time;
                      *(_DWORD *)(v1 + 64) = v21;
                      if ( *(_DWORD *)(v1 + 80) > 3u )
                      {
                        common::milog::MiLogStream::create(
                          &v41,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                          "doPlayerDisappearPunish",
                          908);
                        v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                &v41,
                                (const char (*)[51])"[HideAndSeekMultistagePlay] punish too times, uid:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          (const unsigned int *)(v1 + 32));
                        common::milog::MiLogStream::~MiLogStream(&v41);
                        *(_DWORD *)(v1 + 64) = 0;
                        break;
                      }
                    }
                    common::milog::MiLogStream::create(
                      &v41,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
                      "doPlayerDisappearPunish",
                      913);
                    v23 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                            &v41,
                            (const char (*)[44])"[HideAndSeekMultistagePlay] disappear_time:");
                    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v23,
                            (const unsigned int *)(v1 + 48));
                    v25 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v24,
                            (const char (*)[21])" old_disappear_time:");
                    v26 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                    val = HideAndSeekActivity::getDisappearTime(v26);
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
                    v28 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v27,
                            (const char (*)[21])" cur_disappear_time:");
                    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v28,
                            (const unsigned int *)(v1 + 64));
                    v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v29,
                            (const char (*)[15])" punish_times:");
                    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v30,
                            (const unsigned int *)(v1 + 80));
                    v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v1 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v41);
                    v33 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                    HideAndSeekActivity::setDisappearTime(v33, *(_DWORD *)(v1 + 64));
                    if ( *(_DWORD *)(v1 + 80) )
                    {
                      v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                      HideAndSeekMultistagePlay::logPlayerPunish(this, v34);
                    }
                  }
                  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v1 + 128));
                }
              }
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "doPlayerDisappearPunish",
        857);
      v4 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             &v41,
             (const char (*)[73])"[HideAndSeekMultistagePlay] getActivityDetailConfig failed, activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v41);
    }
  }
  if ( v42 == (char *)v1 )
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

// Line 924: range 0000000015134FF0-0000000015135686
void __fastcall HideAndSeekMultistagePlay::fillHunterBattleInfo(
        const HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        proto::HideAndSeekStageInfo *stage_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool v7; // al
  Player *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t CostumeId; // eax
  Player *v13; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  HideAndSeekActivity *v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // rax
  std::remove_reference<proto::HideAndSeekPlayerBattleInfo&>::type *v21; // r14
  google::protobuf::Map<unsigned int,proto::HideAndSeekPlayerBattleInfo> *v22; // rax
  proto::HideAndSeekPlayerBattleInfo *v23; // rax
  unsigned int val; // [rsp+2Ch] [rbp-194h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-190h] BYREF
  char v27[368]; // [rsp+50h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 uid:923 64 16 14 player_ptr:928 96 16 14 avatar_ptr:935 128 16 16 activity_ptr:943 160 "
                        "24 13 skill_vec:950 224 56 15 battle_info:925";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::fillHunterBattleInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  proto::HideAndSeekPlayerBattleInfo::HideAndSeekPlayerBattleInfo((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "fillHunterBattleInfo",
      931);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v26,
           (const char (*)[47])"[HIDEANDSEEK] player is not on the scene, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v7 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &this->ready_uid_set_,
           (const unsigned int *)(v3 + 48));
    proto::HideAndSeekPlayerBattleInfo::set_is_ready((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224), v7);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getAvatarComp(v8);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "fillHunterBattleInfo",
        938);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v26, (const char (*)[21])"getCurAvatar nullptr");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      AvatarId = Avatar::getAvatarId(v9);
      proto::HideAndSeekPlayerBattleInfo::set_avatar_id((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224), AvatarId);
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      CostumeId = Avatar::getCostumeId(v11);
      proto::HideAndSeekPlayerBattleInfo::set_costume_id(
        (proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224),
        CostumeId);
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      ActivityComp = (unsigned int)Player::getActivityComp(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v3 + 128), ActivityComp);
      if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "fillHunterBattleInfo",
          946);
        v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v26,
                (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->activity_id_);
        v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])", uid: ");
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Player::getUid(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v19 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        HideAndSeekActivity::getPersonalHunterSkillVec((std::vector<unsigned int> *)(v3 + 160), v19);
        v20 = proto::HideAndSeekPlayerBattleInfo::mutable_skill_list((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
          (const std::vector<unsigned int> *)(v3 + 160),
          v20);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
      }
      std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v3 + 128));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  v21 = std::move<proto::HideAndSeekPlayerBattleInfo &>((proto::HideAndSeekPlayerBattleInfo *)(v3 + 224));
  v22 = proto::HideAndSeekStageInfo::mutable_battle_info_map(stage_info);
  v23 = google::protobuf::Map<unsigned int,proto::HideAndSeekPlayerBattleInfo>::operator[](
          v22,
          (const google::protobuf::Map<unsigned int,proto::HideAndSeekPlayerBattleInfo>::key_type *)(v3 + 48));
  proto::HideAndSeekPlayerBattleInfo::operator=(v23, v21);
  proto::HideAndSeekPlayerBattleInfo::~HideAndSeekPlayerBattleInfo((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224));
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 959: range 0000000015135688-0000000015135D1E
void __fastcall HideAndSeekMultistagePlay::fillHiderBattleInfo(
        const HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        proto::HideAndSeekStageInfo *stage_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool v7; // al
  Player *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t CostumeId; // eax
  Player *v13; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  HideAndSeekActivity *v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // rax
  std::remove_reference<proto::HideAndSeekPlayerBattleInfo&>::type *v21; // r14
  google::protobuf::Map<unsigned int,proto::HideAndSeekPlayerBattleInfo> *v22; // rax
  proto::HideAndSeekPlayerBattleInfo *v23; // rax
  unsigned int val; // [rsp+2Ch] [rbp-194h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-190h] BYREF
  char v27[368]; // [rsp+50h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 uid:958 64 16 14 player_ptr:963 96 16 14 avatar_ptr:970 128 16 16 activity_ptr:978 160 "
                        "24 13 skill_vec:986 224 56 15 battle_info:960";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::fillHiderBattleInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  proto::HideAndSeekPlayerBattleInfo::HideAndSeekPlayerBattleInfo((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "fillHiderBattleInfo",
      966);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v26,
           (const char (*)[47])"[HIDEANDSEEK] player is not on the scene, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v7 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &this->ready_uid_set_,
           (const unsigned int *)(v3 + 48));
    proto::HideAndSeekPlayerBattleInfo::set_is_ready((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224), v7);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getAvatarComp(v8);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "fillHiderBattleInfo",
        973);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v26,
        (const char (*)[35])"[HIDEANDSEEK] getCurAvatar nullptr");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      AvatarId = Avatar::getAvatarId(v9);
      proto::HideAndSeekPlayerBattleInfo::set_avatar_id((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224), AvatarId);
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      CostumeId = Avatar::getCostumeId(v11);
      proto::HideAndSeekPlayerBattleInfo::set_costume_id(
        (proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224),
        CostumeId);
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      ActivityComp = (unsigned int)Player::getActivityComp(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v3 + 128), ActivityComp);
      if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "fillHiderBattleInfo",
          981);
        v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v26,
                (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->activity_id_);
        v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])", uid: ");
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Player::getUid(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v19 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        HideAndSeekActivity::getPersonalHiderSkillVec((std::vector<unsigned int> *)(v3 + 160), v19);
        v20 = proto::HideAndSeekPlayerBattleInfo::mutable_skill_list((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
          (const std::vector<unsigned int> *)(v3 + 160),
          v20);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
      }
      std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v3 + 128));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  v21 = std::move<proto::HideAndSeekPlayerBattleInfo &>((proto::HideAndSeekPlayerBattleInfo *)(v3 + 224));
  v22 = proto::HideAndSeekStageInfo::mutable_battle_info_map(stage_info);
  v23 = google::protobuf::Map<unsigned int,proto::HideAndSeekPlayerBattleInfo>::operator[](
          v22,
          (const google::protobuf::Map<unsigned int,proto::HideAndSeekPlayerBattleInfo>::key_type *)(v3 + 48));
  proto::HideAndSeekPlayerBattleInfo::operator=(v23, v21);
  proto::HideAndSeekPlayerBattleInfo::~HideAndSeekPlayerBattleInfo((proto::HideAndSeekPlayerBattleInfo *const)(v3 + 224));
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 995: range 0000000015135D20-0000000015136160
void __cdecl HideAndSeekMultistagePlay::startHiderChatChannel(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-110h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *born_order; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 20 player_world_ptr:996 80 48 12 uid_set:1007";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::startHiderChatChannel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 48, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "startHiderChatChannel",
      999);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v15,
      (const char (*)[40])"[HIDEANDSEEK] getOwnPlayerWorld nullptr");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else if ( std::unordered_map<unsigned int,unsigned int>::size(&this->hider_born_map_) > 1 )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 80));
    __for_range = &this->hider_born_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hider_born_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->hider_born_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,unsigned int>(v12);
      born_order = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 80), uid);
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    World::addChatChannel(v7, 3u, (const std::set<unsigned int> *)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->match_id_ )
    {
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v1 + 80),
        (const std::set<unsigned int>::value_type *)&this->hunter_born_pair_);
      v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      World::addChatChannel(v8, 5u, (const std::set<unsigned int> *)(v1 + 80));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 48));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 1022: range 0000000015136162-000000001513639F
void __cdecl HideAndSeekMultistagePlay::endHiderChatChannel(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 player_world_ptr:1023";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::endHiderChatChannel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 32, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "endHiderChatChannel",
      1026);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v9,
      (const char (*)[40])"[HIDEANDSEEK] getOwnPlayerWorld nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    World::delChatChannel(v7, 3u);
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    World::delChatChannel(v8, 5u);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1035: range 00000000151363A0-000000001513661C
void __cdecl HideAndSeekMultistagePlay::initPlayerIdentityAndBornOrder(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  uint32_t v5; // r14d
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  char v9; // cl
  uint32_t index; // [rsp+14h] [rbp-8Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 uid:1038";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::initPlayerIdentityAndBornOrder;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  index = 1;
  *(_DWORD *)(v1 + 32) = 0;
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::make_pair<unsigned int &,int>(
                                                                               &this->chosen_hunter_uid_,
                                                                               (int *)(v1 + 32));
  std::pair<unsigned int,unsigned int>::operator=<unsigned int,int>(
    &this->hunter_born_pair_,
    (std::pair<unsigned int,int> *)&__for_end);
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->chosen_hunter_uid_ != *(_DWORD *)(v1 + 32) )
    {
      v5 = index++;
      v6 = (char *)(v1 + 32);
      v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->hider_born_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
      v8 = v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
      {
        LOBYTE(v6) = v9 != 0;
        __asan_report_store4(v7, v6, (_BYTE)v7);
      }
      *v8 = v5;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1049: range 000000001513661E-0000000015136CC0
__int64 __fastcall HideAndSeekMultistagePlay::transferPlayer(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  Player *v16; // rax
  PlayerSceneComp *SceneComp; // r14
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  __int64 result; // rax
  common::milog::MiLogStream v21; // [rsp+10h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+30h] [rbp-130h] BYREF
  char v23[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 15 born_index:1068 48 4 8 uid:1048 64 12 13 born_pos:1069 96 12 13 born_rot:1070 128 16 2"
                        "1 player_world_ptr:1050 160 16 15 player_ptr:1056";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::transferPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v7 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v7)(v2 + 128, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "transferPlayer",
      1053);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v21,
      (const char (*)[54])"[HideAndSeekMultistagePlay] getOwnPlayerWorld nullptr");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = -1;
  }
  else
  {
    v9 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    World::findPlayerPtr((World *const)(v2 + 160), v9);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "transferPlayer",
        1059);
      v10 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v21,
              (const char (*)[61])"[HideAndSeekMultistagePlay] player is not in cur scene, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 0;
    }
    else if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "transferPlayer",
        1065);
      v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              &v21,
              (const char (*)[60])"[HideAndSeekMultistagePlay] player is not in cur play, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 32) = HideAndSeekMultistagePlay::getPlayerBornConfigIndex(this, *(_DWORD *)(v2 + 48));
      Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
      if ( HideAndSeekMultistagePlay::findBornPosRot(
             this,
             *(_DWORD *)(v2 + 32),
             (Vector3 *)(v2 + 64),
             (Vector3 *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "transferPlayer",
          1073);
        v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v21,
                (const char (*)[56])"[HideAndSeekMultistagePlay] findBornPosRot failed, uid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])", born_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        HideAndSeekMultistagePlay::notifyNpcTalkStateChange(this, v15, 1);
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        SceneComp = Player::getSceneComp(v16);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_HIDE_AND_SEEK);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = PlayerSceneComp::jumpToScene(
                SceneComp,
                this->scene_,
                (const Vector3 *)(v2 + 64),
                (const Vector3 *)(v2 + 96),
                0,
                &p_reason) != 0;
        TransferReason::~TransferReason(&p_reason);
        if ( v18 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "transferPlayer",
            1080);
          v19 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v21,
                  (const char (*)[53])"[HideAndSeekMultistagePlay] jumpToScene failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v21);
          v8 = -1;
        }
        else
        {
          v8 = 0;
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 128));
  result = v8;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1087: range 0000000015136CC2-0000000015136F22
__int64 __fastcall HideAndSeekMultistagePlay::getPlayerBornConfigIndex(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1086";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::getPlayerBornConfigIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->hunter_born_pair_.first == *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_.second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_.second >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = this->hunter_born_pair_.second;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
              &this->hider_born_map_,
              (const unsigned int *)(v2 + 32)) )
  {
    v6 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->hider_born_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = *v6;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "getPlayerBornConfigIndex",
      1096);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v8,
           (const char (*)[58])"[HideAndSeekMultistagePlay] cannot find uid in play, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 1101: range 0000000015136F24-00000000151376D4
int32_t __cdecl HideAndSeekMultistagePlay::findBornPosRot(
        HideAndSeekMultistagePlay *const this,
        uint32_t order,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  std::vector<unsigned int>::const_reference v15; // rdx
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 val; // [rsp+20h] [rbp-C0h] BYREF
  const HideAndSeekMapConfig *map_config; // [rsp+28h] [rbp-B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-B0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-90h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 19 born_config_id:1120";
  *(_QWORD *)(v4 + 16) = HideAndSeekMultistagePlay::findBornPosRot;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  v8 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HideAndSeekMapConfig> const,unsigned int>(
          &v7->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map,
          &this->map_id_);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "findBornPosRot",
      1104);
    v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v24,
           (const char (*)[61])"[HideAndSeekMultistagePlay] can not find map config, map_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->map_id_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    map_config = std::unordered_map<unsigned int,HideAndSeekMapConfig>::at(
                   &v11->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map,
                   &this->map_id_);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)map_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, map_config->group_id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( group_script_config_ptr )
    {
      if ( order < std::vector<unsigned int>::size(&map_config->transport_point_vec) )
      {
        v15 = std::vector<unsigned int>::operator[](&map_config->transport_point_vec, order);
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 32) = *v15;
        point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v4 + 32));
        if ( point_script_config_ptr )
        {
          if ( ((unsigned __int8)born_pos & 7) >= *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)born_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store_n(born_pos, 12LL);
          }
          if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
          }
          *born_pos = point_script_config_ptr->pos;
          if ( ((unsigned __int8)born_rot & 7) >= *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)born_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store_n(born_rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
          }
          *born_rot = point_script_config_ptr->rot;
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "findBornPosRot",
            1124);
          v16 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                  &v24,
                  (const char (*)[69])"[HideAndSeekMultistagePlay] findPointConfig failed, born_config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v24);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "findBornPosRot",
          1117);
        v14 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                &v24,
                (const char (*)[71])"[HideAndSeekMultistagePlay] transport_point_vec size too small,  size:");
        val = std::vector<unsigned int>::size(&map_config->transport_point_vec);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "findBornPosRot",
        1111);
      v13 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
              &v24,
              (const char (*)[74])"[HideAndSeekMultistagePlay] findGroupScriptConfig failed, born_group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &map_config->group_id);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1135: range 00000000151376D6-000000001513797A
__int64 __fastcall HideAndSeekMultistagePlay::findPlayerBornPos(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 15 born_index:1141 64 4 8 uid:1134";
  *(_QWORD *)(v4 + 16) = HideAndSeekMultistagePlay::findPlayerBornPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "findPlayerBornPos",
      1138);
    v7 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v14,
           (const char (*)[68])"[HideAndSeekMultistagePlay] player in not in hideandseek play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = HideAndSeekMultistagePlay::getPlayerBornConfigIndex(this, *(_DWORD *)(v4 + 64));
    if ( HideAndSeekMultistagePlay::findBornPosRot(this, *(_DWORD *)(v4 + 48), born_pos, born_rot) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "findPlayerBornPos",
        1144);
      v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v14,
             (const char (*)[56])"[HideAndSeekMultistagePlay] findBornPosRot failed, uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", born_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v15 == (char *)v4 )
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

// Line 1151: range 000000001513797C-0000000015137AD1
bool __cdecl HideAndSeekMultistagePlay::checkPlayCanContinue(HideAndSeekMultistagePlay *const this)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::unordered_set<unsigned int>::size(&this->enter_uid_set_) > 1 )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->enter_uid_set_,
            (const unsigned int *)&this->hunter_born_pair_) )
    {
      common::milog::MiLogStream::create(
        &v3,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "checkPlayCanContinue",
        1159);
      v2 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v3,
             (const char (*)[67])"[HideAndSeekMultistagePlay] hunter player leave world, hunter_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v2,
        (const unsigned int *)&this->hunter_born_pair_);
      common::milog::MiLogStream::~MiLogStream(&v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "checkPlayCanContinue",
      1154);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      &v3,
      (const char (*)[53])"[HideAndSeekMultistagePlay] player number not enough");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0;
  }
};

// Line 1167: range 0000000015137AD2-0000000015137B77
void __cdecl HideAndSeekMultistagePlay::handleExceptionQuitSettle(HideAndSeekMultistagePlay *const this)
{
  proto::HideAndSeekStageType own_stage_type; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  own_stage_type = this->own_stage_type_;
  if ( own_stage_type <= HIDE_AND_SEEK_STAGE_SEEK )
  {
    if ( own_stage_type > HIDE_AND_SEEK_STAGE_HIDE )
    {
      HideAndSeekMultistagePlay::settleHideAndSeek(this, HideAndSeekSettleNotify_SettleReason_SETTLE_PLAY_END, 0);
    }
    else if ( own_stage_type >= HIDE_AND_SEEK_STAGE_PREPARE )
    {
      HideAndSeekMultistagePlay::settleHideAndSeek(this, HideAndSeekSettleNotify_SettleReason_SETTLE_PLAYER_QUIT, 0);
    }
  }
};

// Line 1200: range 0000000015137B78-0000000015137BA9
int32_t __cdecl HideAndSeekMultistagePlay::checkMpSceneEnterable(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  if ( SceneMultistagePlay::isPlayerInPlay(this, uid) )
    return 0;
  else
    return -1;
};

// Line 1210: range 0000000015137BAA-0000000015137DAA
__int64 __fastcall HideAndSeekMultistagePlay::checkJumpToSceneValid(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        unsigned __int64 p_reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 uid:1209";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::checkJumpToSceneValid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "checkJumpToSceneValid",
      1214);
    v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v9,
           (const char (*)[56])"[HideAndSeekMultistagePlay] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)((p_reason >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((p_reason >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    if ( *(_DWORD *)p_reason == 69
      || *(_DWORD *)p_reason == 52
      || *(_DWORD *)p_reason == 32
      || *(_DWORD *)p_reason == 53
      || *(_DWORD *)p_reason == 51
      || *(_DWORD *)p_reason == 21 )
    {
      result = 0LL;
    }
    else
    {
      result = 529LL;
    }
  }
  if ( v10 == (char *)v3 )
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

// Line 1230: range 0000000015137DAC-000000001513824D
void __fastcall HideAndSeekMultistagePlay::onAvatarDie(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  Group *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1229 64 16 14 group_ptr:1236 96 16 14 event_ptr:1243";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::onAvatarDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "onAvatarDie",
      1233);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v18,
           (const char (*)[56])"[HideAndSeekMultistagePlay] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 64));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "onAvatarDie",
        1239);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v18,
        (const char (*)[46])"[HideAndSeekMultistagePlay] group_ptr nullptr");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      EventUtil::createEvent((data::EventType)(v2 + 96));
      v6 = 0LL;
      if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "onAvatarDie",
          1246);
        v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v18,
               (const char (*)[35])"[HideAndSeekMultistagePlay] play: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
        v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" group: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->group_id_);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v10,
          (const char (*)[25])" stage end event nullptr");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v11 = *(_DWORD *)(v2 + 48);
        v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v13 = *(_BYTE *)(((unsigned __int64)&v12->uid >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)((((_BYTE)v12 + 60) & 7) + 3) >= v13 )
        {
          LOBYTE(v6) = v13 != 0;
          __asan_report_store4(&v12->uid, v6, (_BYTE)v12);
        }
        v12->uid = v11;
        v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( Group::handleEvent(v14, (EventPtr *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
            "onAvatarDie",
            1253);
          v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v18,
                  (const char (*)[38])"[HideAndSeekMultistagePlay] group_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->group_id_);
          v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v16,
                  (const char (*)[45])" handleEvent EVENT_AVATAR_DIE fails. @play: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->play_index_);
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
  }
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

// Line 1259: range 000000001513824E-0000000015138830
void __fastcall HideAndSeekMultistagePlay::tryPunishQuitPlayer(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  const std::string *v9; // rax
  GameserverService *v10; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  PlayerMatchComp *MatchComp; // rcx
  Player *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int value; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 punish_uid:1260 48 4 8 uid:1258 64 16 15 player_ptr:1284";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::tryPunishQuitPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 32) = 0;
  if ( leave_world_reason > LEAVE_WORLD_REASON_BACK_MY_WORLD )
  {
    if ( leave_world_reason != LEAVE_WORLD_REASON_KICK_BY_OWNER )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 32) = Scene::getOwnerUid(this->scene_);
  }
  else
  {
    if ( leave_world_reason <= LEAVE_WORLD_REASON_NONE )
    {
LABEL_13:
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "tryPunishQuitPlayer",
        1279);
      v6 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
             &v24,
             (const char (*)[83])"[HideAndSeekMultistagePlay] tryPunishQuitPlayer leaveReason not catch, BUG!!! uid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v7,
             (const char (*)[21])", leave_world_reason");
      v9 = proto::LeaveWorldReason_Name[abi:cxx11](leave_world_reason);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
      common::milog::MiLogStream::~MiLogStream(&v24);
      goto LABEL_26;
    }
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 48);
  }
  v10 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v10);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "tryPunishQuitPlayer",
      1287);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v24,
            (const char (*)[58])"[HideAndSeekMultistagePlay] player is not in thread ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    value = Scene::getOwnerUid(this->scene_);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->punish_uid_set_,
           &value) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "tryPunishQuitPlayer",
        1295);
      v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v24,
              (const char (*)[51])"scene owner has been punished, play will end, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v14 = std::unordered_set<unsigned int>::insert(
              &this->punish_uid_set_,
              (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
      if ( !v14.second )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "tryPunishQuitPlayer",
          1301);
        v15 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v24,
                (const char (*)[59])"[HideAndSeekMultistagePlay] player has been punished, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        MatchComp = Player::getMatchComp(v16);
        if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerMatchComp::matchPunish(MatchComp, this->match_id_);
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        HideAndSeekMultistagePlay::logPlayerPunish(this, v18);
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "tryPunishQuitPlayer",
          1307);
        v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v24,
                (const char (*)[58])"[HideAndSeekMultistagePlay] exec matchPunish, punish_uid:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 32));
        v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])", match_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->match_id_);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
LABEL_26:
  if ( v25 == (char *)v3 )
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

// Line 1311: range 0000000015138832-0000000015138BAA
void __cdecl HideAndSeekMultistagePlay::addAndLogPlayerIndentity(HideAndSeekMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t chosen_hunter_uid; // r14d
  HideAndSeekActivity *v10; // rax
  HideAndSeekActivity *v11; // rax
  common::milog::MiLogStream *v12; // r14
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1313";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::addAndLogPlayerIndentity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ActivityComp = (unsigned int)Player::getActivityComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v2 + 32), ActivityComp);
  if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "addAndLogPlayerIndentity",
      1316);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v14,
           (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])", uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    chosen_hunter_uid = this->chosen_hunter_uid_;
    if ( chosen_hunter_uid == Player::getUid(player) )
    {
      v11 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      HideAndSeekActivity::clearHiderCount(v11);
    }
    else
    {
      v10 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      HideAndSeekActivity::addHiderCount(v10);
    }
    HideAndSeekMultistagePlay::logPlayerIndentity(this, player);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "addAndLogPlayerIndentity",
      1329);
    v12 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
            &v14,
            (const char (*)[60])"[HideAndSeekMultistagePlay] addAndLogPlayerIndentity, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1333: range 0000000015138BAC-0000000015139012
void __cdecl HideAndSeekMultistagePlay::logPlayerIndentity(HideAndSeekMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned int first; // r15d
  google::protobuf::uint32 v10; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  google::protobuf::uint32 v12; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  google::protobuf::RepeatedField<unsigned int> *v14; // r15
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *v15; // rax
  std::string v16; // [rsp+0h] [rbp-100h]
  char *v17; // [rsp+8h] [rbp-F8h]
  Player *playera; // [rsp+10h] [rbp-F0h]
  HideAndSeekMultistagePlay *thisa; // [rsp+18h] [rbp-E8h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type __k; // [rsp+2Ch] [rbp-D4h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v16._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v24;
  v16._M_string_length = (std::string::size_type)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1334 64 16 12 log_ptr:1335";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::logPlayerIndentity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xD84u, v16);
  std::string::~string(&v23);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyHideAndSeekInitIdentity>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyHideAndSeekInitIdentity::set_transaction(v6, &thisa->trans_no_);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyHideAndSeekInitIdentity::set_map_id(v7, thisa->map_id_);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  first = thisa->hunter_born_pair_.first;
  if ( first == Player::getUid(playera) )
    v10 = 1;
  else
    v10 = 2;
  proto_log::PlayerLogBodyHideAndSeekInitIdentity::set_identity(v8, v10);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_record_score_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_record_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_record_score_);
  }
  if ( thisa->is_record_score_ )
    v12 = 2;
  else
    v12 = 1;
  proto_log::PlayerLogBodyHideAndSeekInitIdentity::set_play_source(v11, v12);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_record_score_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_record_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_record_score_);
  }
  if ( thisa->is_record_score_ )
  {
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekInitIdentity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = proto_log::PlayerLogBodyHideAndSeekInitIdentity::mutable_selected_map_list(v13);
    __k = Player::getUid(playera);
    v15 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](&thisa->player_chosen_map_, &__k);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(v15, v14);
  }
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHideAndSeekInitIdentity,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekInitIdentity> *)(v2 + 64));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekInitIdentity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekInitIdentity> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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

// Line 1349: range 0000000015139014-0000000015139641
// local variable allocation has failed, the output may be wrong!
void __fastcall HideAndSeekMultistagePlay::logPlayerChosenSkill(HideAndSeekMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverService *v5; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekChooseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  HideAndSeekActivity *v16; // rax
  HideAndSeekActivity *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekChooseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::RepeatedField<unsigned int> *v19; // rax
  Player *v20; // r14
  std::string v21; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-130h] BYREF
  char v24[272]; // [rsp+50h] [rbp-110h] BYREF

  v21._M_string_length = (std::string::size_type)this;
  HIDWORD(v21._M_dataplus._M_p) = uid;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 11 holder:1363 48 4 8 uid:1348 64 16 15 player_ptr:1350 96 16 17 activity_ptr:1356 128 16"
                        " 12 log_ptr:1364 160 24 21 choose_skill_vec:1367";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::logPlayerChosenSkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = HIDWORD(v21._M_dataplus._M_p);
  v5 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v5);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "logPlayerChosenSkill",
      1353);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v23,
           (const char (*)[58])"[HideAndSeekMultistagePlay] player is not in thread ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ActivityComp = (unsigned int)Player::getActivityComp(v8);
    if ( *(_BYTE *)(((v21._M_string_length + 488) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v21._M_string_length + 488) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::findActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v2 + 96), ActivityComp);
    if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "logPlayerChosenSkill",
        1359);
      v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v23,
              (const char (*)[62])"[HideAndSeekMultistagePlay] findActivity failed, activity_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              (const unsigned int *)(v21._M_string_length + 488));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])", uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BasicComp = Player::getBasicComp(v13);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xD85u, v21);
      std::string::~string(&v23);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHideAndSeekChooseSkill>();
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekChooseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekChooseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      proto_log::PlayerLogBodyHideAndSeekChooseSkill::set_transaction(
        v15,
        (const std::string *)(v21._M_string_length + 800));
      if ( *(_BYTE *)(((v21._M_string_length + 352) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v21._M_string_length + 352) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_DWORD *)(v21._M_string_length + 352) == *(_DWORD *)(v2 + 48) )
      {
        v16 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        HideAndSeekActivity::getPersonalHunterSkillVec((std::vector<unsigned int> *)(v2 + 160), v16);
      }
      else
      {
        v17 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        HideAndSeekActivity::getPersonalHiderSkillVec((std::vector<unsigned int> *)(v2 + 160), v17);
      }
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekChooseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekChooseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v19 = proto_log::PlayerLogBodyHideAndSeekChooseSkill::mutable_skill_list(v18);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v2 + 160),
        v19);
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHideAndSeekChooseSkill,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v21._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekChooseSkill> *)(v2 + 128));
      Player::printStatLog(v20, (MessagePtr *)&v21._anon_0, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v21._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
      std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekChooseSkill>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekChooseSkill> *const)(v2 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    }
    std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1373: range 0000000015139642-0000000015139C49
void __fastcall HideAndSeekMultistagePlay::logPlayerHideAndSeekSettle(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        bool is_play_succ_end,
        __int8 is_hunter_win,
        __int32 score,
        __int32 actual_score,
        const std::vector<unsigned int> *score_entry_vec)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  GameserverService *v10; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned int first; // r15d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::uint32 v19; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned int v22; // r15d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  unsigned int v26; // r15d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  google::protobuf::RepeatedField<unsigned int> *v30; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  Player *v34; // r14
  std::string v35; // [rsp+0h] [rbp-120h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+70h] [rbp-B0h] BYREF

  *((_DWORD *)&v35._anon_0._M_allocated_capacity + 2) = score;
  HIDWORD(v35._anon_0._M_allocated_capacity) = actual_score;
  v35._anon_0._M_local_buf[12] = is_hunter_win;
  v7 = (unsigned __int64)v40;
  v35._M_string_length = (std::string::size_type)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 32 1 11 holder:1380 48 4 8 uid:1372 64 16 15 player_ptr:1374 96 16 12 log_ptr:1381";
  *(_QWORD *)(v7 + 16) = HideAndSeekMultistagePlay::logPlayerHideAndSeekSettle;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556927;
  v9[536862722] = -219021312;
  v9[536862723] = -202178560;
  *(_DWORD *)(v7 + 48) = uid;
  v10 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v10);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v7 + 64), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "logPlayerHideAndSeekSettle",
      1377);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v39,
            (const char (*)[58])"[HideAndSeekMultistagePlay] player is not in thread ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v7 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  else
  {
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    BasicComp = Player::getBasicComp(v13);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v7 + 32), 0xD86u, v35);
    std::string::~string(&v39);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHideAndSeekSettle>();
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    proto_log::PlayerLogBodyHideAndSeekSettle::set_transaction(v15, &this->trans_no_);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    first = this->hunter_born_pair_.first;
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( first == Player::getUid(v18) )
      v19 = 1;
    else
      v19 = 2;
    proto_log::PlayerLogBodyHideAndSeekSettle::set_identity(v16, v19);
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    proto_log::PlayerLogBodyHideAndSeekSettle::set_is_interrupt(v20, !is_play_succ_end);
    if ( is_play_succ_end )
    {
      if ( v35._anon_0._M_local_buf[12] )
      {
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v22 = this->hunter_born_pair_.first;
        v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        v24 = Player::getUid(v23);
        proto_log::PlayerLogBodyHideAndSeekSettle::set_is_win(v21, v22 == v24);
      }
      else
      {
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v26 = this->hunter_born_pair_.first;
        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        v28 = Player::getUid(v27);
        proto_log::PlayerLogBodyHideAndSeekSettle::set_is_win(v25, v26 != v28);
      }
    }
    v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    v30 = proto_log::PlayerLogBodyHideAndSeekSettle::mutable_score_entry_list(v29);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(score_entry_vec, v30);
    v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyHideAndSeekSettle::set_cost_time(v31, this->cost_time_);
    v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    proto_log::PlayerLogBodyHideAndSeekSettle::set_score(
      v32,
      *((google::protobuf::uint32 *)&v35._anon_0._M_allocated_capacity + 2));
    v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
    proto_log::PlayerLogBodyHideAndSeekSettle::set_actual_score(v33, HIDWORD(v35._anon_0._M_allocated_capacity));
    v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHideAndSeekSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekSettle> *)(v7 + 96));
    Player::printStatLog(v34, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekSettle> *const)(v7 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v7 + 32));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 64));
  if ( v35._M_string_length == v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1407: range 0000000015139C4A-000000001513A048
void __cdecl HideAndSeekMultistagePlay::logPlayerPunish(HideAndSeekMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  PlayerMatchComp *MatchComp; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::string playera; // [rsp+0h] [rbp-F0h]
  Player *playerb; // [rsp+0h] [rbp-F0h]
  HideAndSeekMultistagePlay *thisa; // [rsp+8h] [rbp-E8h]
  uint32_t punish_times; // [rsp+18h] [rbp-D8h]
  uint32_t punish_time; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v19; // [rsp+30h] [rbp-C0h] BYREF
  std::string v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  playera._M_string_length = (std::string::size_type)this;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1408 64 16 12 log_ptr:1409";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::logPlayerPunish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v20, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xD88u, playera);
  std::string::~string(&v20);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyHideAndSeekPunish>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyHideAndSeekPunish::set_transaction(v6, &thisa->trans_no_);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  Uid = Player::getUid(playerb);
  proto_log::PlayerLogBodyHideAndSeekPunish::set_punish_uid(v7, Uid);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyHideAndSeekPunish::set_is_play_start(v9, thisa->own_stage_type_ > HIDE_AND_SEEK_STAGE_GAME);
  MatchComp = Player::getMatchComp(playerb);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->match_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  punish_times = PlayerMatchComp::getMatchPunishTimes(MatchComp, thisa->match_id_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  punish_time = MatchExcelConfigMgr::getMatchPunishTime(
                  &v11->design_config.txt_config_mgr.match_config_mgr,
                  punish_times);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v19);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekPunish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyHideAndSeekPunish::set_punish_time(v12, punish_time);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v19, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHideAndSeekPunish,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekPunish> *)(v2 + 64));
  Player::printStatLog(playerb, &p_body_ptr, &v19, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v19);
  std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekPunish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekPunish> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v21 == (char *)v2 )
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

// Line 1422: range 000000001513A04A-000000001513A5DF
void __fastcall HideAndSeekMultistagePlay::logPlayerCaught(
        HideAndSeekMultistagePlay *const this,
        uint32_t uid,
        uint32_t caught_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rdx
  uint32_t v15; // ecx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rdx
  int v17; // ecx
  uint32_t v18; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // r14
  std::string v21; // [rsp+0h] [rbp-130h]
  HideAndSeekMultistagePlay *thisa; // [rsp+8h] [rbp-128h]
  uint32_t survival_time; // [rsp+1Ch] [rbp-114h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+60h] [rbp-D0h] BYREF

  v21._M_string_length = (std::string::size_type)this;
  v21._M_dataplus._M_p = (std::string::pointer)__PAIR64__(uid, caught_uid);
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 11 holder:1429 64 4 8 uid:1421 80 4 15 caught_uid:1421 96 16 15 player_ptr:1423 128 16 12 log_ptr:1430";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::logPlayerCaught;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 80) = v21._M_dataplus._M_p;
  v6 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 96), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "logPlayerCaught",
      1426);
    v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v26,
           (const char (*)[58])"[HideAndSeekMultistagePlay] player is not in thread ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    BasicComp = Player::getBasicComp(v9);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v26, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xD87u, v21);
    std::string::~string(&v26);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHideAndSeekUpdateProgress>();
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    proto_log::PlayerLogBodyHideAndSeekUpdateProgress::set_transaction(v11, &thisa->trans_no_);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyHideAndSeekUpdateProgress::set_hunter_uid(v12, thisa->hunter_born_pair_.first);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    proto_log::PlayerLogBodyHideAndSeekUpdateProgress::set_hider_uid(v13, *(_DWORD *)(v3 + 80));
    v14 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &thisa->caught_uid_timestamp_map_,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 80));
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v15 = *v14;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->seek_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v15 <= thisa->seek_start_time_ )
    {
      v18 = 0;
    }
    else
    {
      v16 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &thisa->caught_uid_timestamp_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v17 = *v16;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->seek_start_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v18 = v17 - thisa->seek_start_time_;
    }
    survival_time = v18;
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    proto_log::PlayerLogBodyHideAndSeekUpdateProgress::set_time(v19, survival_time);
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHideAndSeekUpdateProgress,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekUpdateProgress> *)(v3 + 128));
    Player::printStatLog(v20, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekUpdateProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHideAndSeekUpdateProgress> *const)(v3 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1441: range 000000001513A5E0-000000001513A833
void __fastcall HideAndSeekMultistagePlay::recordCaughtUid(HideAndSeekMultistagePlay *const this, uint32_t caught_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int Now; // r14d
  char *v7; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  uint32_t v11; // edx
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 caught_uid:1440";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::recordCaughtUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = caught_uid;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
          &this->hider_born_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "recordCaughtUid",
      1444);
    v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v12,
           (const char (*)[60])"[HideAndSeekMultistagePlay] caught_uid is not a hider, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    v7 = (char *)(v2 + 32);
    v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->caught_uid_timestamp_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, (_BYTE)v8);
    }
    *v9 = Now;
    HideAndSeekMultistagePlay::logPlayerCaught(this, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 32));
    v11 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HideAndSeekMultistagePlay::logPlayerCaught(this, this->hunter_born_pair_.first, v11);
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

// Line 1454: range 000000001513A834-000000001513AA87
data::HIDE_AND_SEEK_SKILL_CATEGORY __cdecl HideAndSeekMultistagePlay::getWinnerCamp(
        HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t GalleryComp; // ecx
  HideAndSeekGallery *v5; // rax
  bool *v6; // rax
  _BYTE *v7; // rdx
  char v8; // al
  data::HIDE_AND_SEEK_SKILL_CATEGORY v9; // r14d
  data::HIDE_AND_SEEK_SKILL_CATEGORY result; // eax
  char v11[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 2 23 gallery_result_opt:1458 64 16 16 gallery_ptr:1455";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::getWinnerCamp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234688015;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = (unsigned int)Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneGalleryComp::findGallery<HideAndSeekGallery>((SceneGalleryComp *const)(v1 + 64), GalleryComp);
  if ( std::operator!=<HideAndSeekGallery>((const std::shared_ptr<HideAndSeekGallery> *)(v1 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    *(std::optional<bool> *)(v1 + 48) = HideAndSeekGallery::getGalleryResult(v5);
    if ( !std::optional<bool>::operator bool((const std::optional<bool> *const)(v1 + 48)) )
      goto LABEL_14;
    v6 = std::optional<bool>::value((std::optional<bool> *const)(v1 + 48));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v6);
    }
    if ( *v7 )
      v8 = 1;
    else
LABEL_14:
      v8 = 0;
    if ( v8 )
      v9 = HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER;
    else
      v9 = HIDE_AND_SEEK_SKILL_CATEGORY_PREY;
  }
  else
  {
    v9 = HIDE_AND_SEEK_SKILL_CATEGORY_NONE;
  }
  std::shared_ptr<HideAndSeekGallery>::~shared_ptr((std::shared_ptr<HideAndSeekGallery> *const)(v1 + 64));
  result = v9;
  if ( v11 == (char *)v1 )
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
  return result;
};

// Line 1474: range 000000001513AA88-000000001513AFD5
void __cdecl HideAndSeekMultistagePlay::writeHunterWinExhibition(
        HideAndSeekMultistagePlay *const this,
        bool is_hunter_win)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Scene *scene; // rcx
  bool v6; // al
  Player *v7; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  Player *v9; // rax
  PlayerExhibitionComp *v10; // rax
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v11; // rdx
  uint32_t v12; // ecx
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v13; // rdx
  int v14; // ecx
  common::milog::MiLogStream *v15; // r14
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::mapped_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  Player *v25; // rax
  PlayerExhibitionComp *v26; // rax
  Player *v27; // rax
  PlayerExhibitionComp *v28; // rax
  uint32_t left_time; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v30; // [rsp+20h] [rbp-90h] BYREF
  char v31[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1475";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::writeHunterWinExhibition;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Scene::findPlayer((const Scene *const)(v2 + 32), (__int64)scene, this->hunter_born_pair_.first);
  v6 = std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL)
    || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->leave_uid_set_,
         (const unsigned int *)&this->hunter_born_pair_);
  if ( !v6 && is_hunter_win )
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ExhibitionComp = Player::getExhibitionComp(v7);
    PlayerExhibitionComp::addAccumulableDataByServer(ExhibitionComp, EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_WIN, 1u);
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v10 = Player::getExhibitionComp(v9);
    PlayerExhibitionComp::addReplaceableDataByServer(v10, EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_WIN, 1u);
    left_time = 0;
    v11 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
            &this->stage_duration_map_,
            &this->own_stage_type_);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v12 = *v11;
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v12 < this->cost_time_ )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "writeHunterWinExhibition",
        1493);
      v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v30,
              (const char (*)[34])"unexpected settle time, duration:");
      v16 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
              &this->stage_duration_map_,
              &this->own_stage_type_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, v16);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", state_type:");
      v19 = common::milog::MiLogStream::operator<<<proto::HideAndSeekStageType,(proto::HideAndSeekStageType*)0>(
              v18,
              &this->own_stage_type_);
      v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v19,
              (const char (*)[19])", seek_start_time:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->seek_start_time_);
      v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v21,
              (const char (*)[20])", seek_settle_time:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->seek_settle_time_);
      v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])", cost_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->cost_time_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v13 = std::unordered_map<proto::HideAndSeekStageType,unsigned int>::operator[](
              &this->stage_duration_map_,
              &this->own_stage_type_);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v14 = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      left_time = v14 - this->cost_time_;
    }
    v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v26 = Player::getExhibitionComp(v25);
    PlayerExhibitionComp::addAccumulableDataByServer(
      v26,
      EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_HUNTER_WIN_LAST_TIME,
      left_time);
    v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v28 = Player::getExhibitionComp(v27);
    PlayerExhibitionComp::addReplaceableDataByServer(
      v28,
      EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_HUNTER_WIN_LAST_TIME,
      left_time);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1506: range 000000001513AFD6-000000001513B4E4
void __cdecl HideAndSeekMultistagePlay::writeHiderWinExhibition(
        HideAndSeekMultistagePlay *const this,
        bool is_hunter_win)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Scene *scene; // rcx
  Player *v7; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  Player *v9; // rax
  PlayerExhibitionComp *v10; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rdx
  uint32_t v12; // ecx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rdx
  int v14; // ecx
  uint32_t v15; // eax
  Player *v16; // rax
  PlayerExhibitionComp *v17; // rax
  Player *v18; // rax
  PlayerExhibitionComp *v19; // rax
  uint32_t survival_time; // [rsp+1Ch] [rbp-A4h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v24; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *born_order; // [rsp+48h] [rbp-78h]
  char v27[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1509";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::writeHiderWinExhibition;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->hider_born_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hider_born_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->hider_born_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,unsigned int>(v24);
    born_order = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 32), (__int64)scene, *uid);
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL)
      && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->leave_uid_set_,
            uid) )
    {
      if ( !is_hunter_win )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        ExhibitionComp = Player::getExhibitionComp(v7);
        PlayerExhibitionComp::addAccumulableDataByServer(
          ExhibitionComp,
          EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_WIN,
          1u);
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v10 = Player::getExhibitionComp(v9);
        PlayerExhibitionComp::addReplaceableDataByServer(v10, EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_WIN, 1u);
      }
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->caught_uid_timestamp_map_,
             uid) )
      {
        v11 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->caught_uid_timestamp_map_, uid);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v12 <= this->seek_start_time_ )
        {
          v15 = 0;
        }
        else
        {
          v13 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->caught_uid_timestamp_map_, uid);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v14 = *v13;
          if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v15 = v14 - this->seek_start_time_;
        }
        survival_time = v15;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        survival_time = this->cost_time_;
      }
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v17 = Player::getExhibitionComp(v16);
      PlayerExhibitionComp::addAccumulableDataByServer(
        v17,
        EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_HIDER_SURVIVAL_TIME,
        survival_time);
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v19 = Player::getExhibitionComp(v18);
      PlayerExhibitionComp::addReplaceableDataByServer(
        v19,
        EXHIBITION_SERVER_TRIGGER_HIDE_AND_SEEK_HIDER_SURVIVAL_TIME,
        survival_time);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1538: range 000000001513C11A-000000001513C659
void __cdecl HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::pointer v11; // rax
  Scene *v12; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> __y; // [rsp+10h] [rbp-160h] BYREF
  const HideAndSeekDetailConfig *detail_confg; // [rsp+18h] [rbp-158h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-150h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-140h] BYREF
  HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> p___f; // [rsp+50h] [rbp-120h] BYREF
  char v18[240]; // [rsp+80h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 10 index:1553 64 8 9 iter:1545 96 16 14 world_ptr:1539 128 24 12 pos_vec:1552";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 96, scene);
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "kickOrTransferPlayerOnEnd",
      1542);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v16,
      (const char (*)[47])"[HideAndSeekMultistagePlay] world_ptr nulltpr ");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::find(
                                                                                               &v7->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.activity_detail_config_map,
                                                                                               &this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    __y._M_cur = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::end(&v8->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.activity_detail_config_map)._M_cur;
    v9 = std::__detail::operator==<std::pair<unsigned int const,HideAndSeekDetailConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v1 + 64),
           &__y);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "kickOrTransferPlayerOnEnd",
        1548);
      v10 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
              &v16,
              (const char (*)[78])"[HideAndSeekMultistagePlay] findHideAndSeekDetailConfig failed, activity_id_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v1 + 64));
      detail_confg = &v11->second;
      std::vector<Vector3>::vector((std::vector<Vector3> *const)(v1 + 128), &v11->second.transfer_pos_vec);
      *(_DWORD *)(v1 + 48) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = this->scene_;
      p___f.__this = this;
      p___f.__index = (uint32_t *)(v1 + 48);
      p___f.__pos_vec = (std::vector<Vector3> *)(v1 + 128);
      std::shared_ptr<PlayerWorld>::shared_ptr(&p___f.__world_ptr, (const std::shared_ptr<PlayerWorld> *)(v1 + 96));
      std::function<ForeachPolicy ()(Player &)>::function<HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v16,
        &p___f);
      Scene::foreachPlayer(v12, (std::function<ForeachPolicy(Player&)> *)&v16);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v16);
      HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1}::~Player(&p___f);
      std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v1 + 128));
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 96));
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1554: range 000000001513B4E6-000000001513C0F9
ForeachPolicy __cdecl HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1}::operator()(
        const HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  ForeachPolicy v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t *index; // rdx
  std::vector<Vector3>::size_type v7; // r15
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  uint32_t Uid; // r15d
  __int64 this; // rax
  common::milog::MiLogStream *v13; // r14
  int v14; // r15d
  PlayerSceneComp *SceneComp; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::vector<Vector3> *pos_vec; // rdi
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  const Vector3 *v20; // rsi
  __int64 v21; // rax
  bool v22; // r15
  common::milog::MiLogStream *v23; // r14
  HideAndSeekMultistagePlay *v24; // rdx
  char v25; // cl
  common::milog::MiLogStream *v26; // r14
  int v27; // r15d
  PlayerSceneComp *v28; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::vector<Vector3> *p_index; // rdi
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  const Vector3 *v33; // rsi
  __int64 v34; // rax
  bool v35; // r15
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r12
  unsigned __int64 v38; // rax
  unsigned int (__fastcall *v39)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r14
  uint32_t v40; // eax
  common::milog::MiLogStream *v41; // r12
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r12
  unsigned __int64 v43; // rax
  void (__fastcall *v44)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64); // r14
  uint32_t v45; // eax
  ForeachPolicy result; // eax
  Vector3 *rot; // [rsp+8h] [rbp-F8h]
  Vector3 *rota; // [rsp+8h] [rbp-F8h]
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v52; // [rsp+30h] [rbp-D0h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-B0h] BYREF
  char v54[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 avatar_ptr:1580";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index = __closure->__index;
  if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v7 = *index;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__pos_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v7 >= std::vector<Vector3>::size(__closure->__pos_vec) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
      "operator()",
      1558);
    v8 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v52,
           (const char (*)[77])"[HideAndSeekMultistagePlay] scene player num exceed transfer pos num ,index:");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, __closure->__index);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v2 = FOREACH_BREAK;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HideAndSeekMultistagePlay::notifyNpcTalkStateChange(__closure->__this, player, 0);
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->scene_ >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  if ( Uid == Scene::getOwnerUid(*(const Scene *const *)(this + 72)) )
  {
    Player::getCurAvatar((Player *const)(v3 + 32));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "operator()",
        1568);
      v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v52,
              (const char (*)[55])"[HideAndSeekMultistagePlay] getCurAvatar nullptr, uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v2 = FOREACH_CONTINUE;
      v14 = 0;
    }
    else
    {
      SceneComp = Player::getSceneComp(player);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_HIDE_AND_SEEK);
      v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      rot = (Vector3 *)Entity::getRotation((const Entity *const)v16);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__pos_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      pos_vec = __closure->__pos_vec;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
      {
        pos_vec = (std::vector<Vector3> *)&__closure->__index;
        __asan_report_load8();
      }
      v18 = (unsigned __int64)__closure->__index;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      {
        pos_vec = (std::vector<Vector3> *)__closure->__index;
        v18 = __asan_report_load4();
      }
      v19 = (*(_DWORD *)v18)++;
      v20 = std::vector<Vector3>::operator[](pos_vec, v19);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = (__int64)__closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->scene_ >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8();
      v22 = PlayerSceneComp::jumpToScene(SceneComp, *(Scene **)(v21 + 72), v20, rot, 0, &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( v22 )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "operator()",
          1573);
        v23 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v52,
                (const char (*)[53])"[HideAndSeekMultistagePlay] jumpToScene failed, uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v2 = FOREACH_CONTINUE;
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    if ( v14 == 1 )
      goto LABEL_71;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = __closure->__this;
    v25 = *(_BYTE *)(((unsigned __int64)&__closure->__this->is_record_score_ >> 3) + 0x7FFF8000);
    if ( v25 != 0 && ((LOBYTE(__closure->__this) - 28) & 7) >= v25 )
      __asan_report_load1(&__closure->__this->is_record_score_);
    if ( v24->is_record_score_ )
    {
      v37 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__world_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v38 = (unsigned __int64)(v37->_vptr_World + 13);
      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
        v38 = __asan_report_load8();
      v39 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v38;
      v40 = Player::getUid(player);
      if ( v39(v37, v40) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "operator()",
          1597);
        v41 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v52,
                (const char (*)[57])"[HideAndSeekMultistagePlay] checkKickPlayer failed, uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v2 = FOREACH_CONTINUE;
        goto LABEL_72;
      }
      v42 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__world_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v43 = (unsigned __int64)(v42->_vptr_World + 14);
      if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
        v43 = __asan_report_load8();
      v44 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64))v43;
      v45 = Player::getUid(player);
      v44(v42, v45, 9LL);
      goto LABEL_71;
    }
    Player::getCurAvatar((Player *const)(v3 + 32));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "operator()",
        1583);
      v26 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v52,
              (const char (*)[55])"[HideAndSeekMultistagePlay] getCurAvatar nullptr, uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v2 = FOREACH_CONTINUE;
      v27 = 0;
    }
    else
    {
      v28 = Player::getSceneComp(player);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_HIDE_AND_SEEK);
      v29 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      rota = (Vector3 *)Entity::getRotation((const Entity *const)v29);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__pos_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_index = __closure->__pos_vec;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__index >> 3) + 0x7FFF8000) )
      {
        p_index = (std::vector<Vector3> *)&__closure->__index;
        __asan_report_load8();
      }
      v31 = (unsigned __int64)__closure->__index;
      if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) != 0 && (char)((v31 & 7) + 3) >= *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        p_index = (std::vector<Vector3> *)__closure->__index;
        v31 = __asan_report_load4();
      }
      v32 = (*(_DWORD *)v31)++;
      v33 = std::vector<Vector3>::operator[](p_index, v32);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v34 = (__int64)__closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->scene_ >> 3) + 0x7FFF8000) )
        v34 = __asan_report_load8();
      v35 = PlayerSceneComp::jumpToScene(v28, *(Scene **)(v34 + 72), v33, rota, 0, &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( v35 )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
          "operator()",
          1588);
        v36 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v52,
                (const char (*)[53])"[HideAndSeekMultistagePlay] jumpToScene failed, uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v2 = FOREACH_CONTINUE;
        v27 = 0;
      }
      else
      {
        v27 = 1;
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    if ( v27 == 1 )
LABEL_71:
      v2 = FOREACH_CONTINUE;
  }
LABEL_72:
  result = v2;
  if ( v54 == (char *)v3 )
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

// Line 1554: range 0000000015161088-00000000151611B9
void __cdecl HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1}::Player(
        HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> *const this,
        HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> *a2)
{
  HideAndSeekMultistagePlay *v2; // rdx
  uint32_t *index; // rdx
  std::vector<Vector3> *pos_vec; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__index >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index = a2->__index;
  if ( *(_BYTE *)(((unsigned __int64)&this->__index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__index, a2);
  this->__index = index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__pos_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pos_vec = a2->__pos_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__pos_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__pos_vec, a2);
  this->__pos_vec = pos_vec;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
};

// Line 1554: range 0000000015161284-00000000151613B5
void __cdecl HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1}::Player(
        HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> *const this,
        const HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> *a2)
{
  HideAndSeekMultistagePlay *v2; // rdx
  uint32_t *index; // rdx
  std::vector<Vector3> *pos_vec; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__index >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index = a2->__index;
  if ( *(_BYTE *)(((unsigned __int64)&this->__index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__index, a2);
  this->__index = index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__pos_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pos_vec = a2->__pos_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__pos_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__pos_vec, a2);
  this->__pos_vec = pos_vec;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
};

// Line 1554: range 000000001513C0FA-000000001513C118
void __cdecl HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd(void)::{lambda(Player &)#1}::~Player(
        HideAndSeekMultistagePlay::kickOrTransferPlayerOnEnd::<lambda(Player&)> *const this)
{
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->__world_ptr);
};

// Line 1607: range 000000001513C65A-000000001513C892
void __cdecl HideAndSeekMultistagePlay::recordSettleTime(HideAndSeekMultistagePlay *const this, uint32_t now)
{
  bool v2; // dl
  __int64 v3; // rsi
  uint32_t seek_settle_time; // ecx
  uint32_t v5; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  v2 = *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->seek_settle_time_, (((_BYTE)this - 92) & 7u) + 3, v2);
  this->seek_settle_time_ = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->seek_start_time_ )
  {
    v3 = (((_BYTE)this - 92) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    seek_settle_time = this->seek_settle_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( seek_settle_time < this->seek_start_time_ )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
        "recordSettleTime",
        1621);
      v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v10,
             (const char (*)[64])"[HideAndSeekMultistagePlay] settle time error, seek_start_time:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->seek_start_time_);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v8,
             (const char (*)[20])", seek_settle_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->seek_settle_time_);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v5 = this->seek_settle_time_ - this->seek_start_time_;
      v6 = *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000);
      if ( v6 != 0 && v6 <= 3 )
      {
        LOBYTE(v3) = v6 != 0;
        __asan_report_store4(&this->cost_time_, v3, (_BYTE)this - 88);
      }
      this->cost_time_ = v5;
    }
  }
};

// Line 1626: range 000000001513C894-000000001513C9DF
void __cdecl HideAndSeekMultistagePlay::notifyNpcTalkStateChange(
        HideAndSeekMultistagePlay *const this,
        Player *player,
        bool is_ban)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 11 notify:1627";
  *(_QWORD *)(v3 + 16) = HideAndSeekMultistagePlay::notifyNpcTalkStateChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  proto::NpcTalkStateNotify::NpcTalkStateNotify((proto::NpcTalkStateNotify *const)(v3 + 32));
  proto::NpcTalkStateNotify::set_is_ban((proto::NpcTalkStateNotify *const)(v3 + 32), is_ban);
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 32));
  proto::NpcTalkStateNotify::~NpcTalkStateNotify((proto::NpcTalkStateNotify *const)(v3 + 32));
  if ( v7 == (char *)v3 )
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

// Line 1633: range 000000001513C9E0-000000001513CBDF
std::vector<unsigned int> *__cdecl HideAndSeekMultistagePlay::getPreyUidvec(
        std::vector<unsigned int> *retstr,
        const HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1635";
  *(_QWORD *)(v2 + 16) = HideAndSeekMultistagePlay::getPreyUidvec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->enter_uid_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->enter_uid_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->enter_uid_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->hunter_born_pair_.first != *(_DWORD *)(v2 + 32) )
      std::vector<unsigned int>::push_back(retstr, (const std::vector<unsigned int>::value_type *)(v2 + 32));
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1646: range 000000001513CBE0-000000001513D141
void __cdecl HideAndSeekMultistagePlay::printPlayerInfo(const HideAndSeekMultistagePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v4; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  Player *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rcx
  uint32_t uid; // [rsp+10h] [rbp-F0h]
  unsigned int avatar_id; // [rsp+14h] [rbp-ECh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 7 os:1647 64 16 15 player_ptr:1652";
  *(_QWORD *)(v1 + 16) = HideAndSeekMultistagePlay::printPlayerInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
         "[HIDEANDSEEK] stage_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, this->own_stage_type_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
    " player_info:[");
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    uid = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v1 + 64), (__int64)this->scene_, uid);
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      AvatarComp = Player::getAvatarComp(v6);
      avatar_id = PlayerAvatarComp::getCurAvatarId(AvatarComp);
      v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
             "(uid:");
      v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, uid);
      v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ",avatar_id:");
      v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, avatar_id);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, ")");
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
          "] leave_uid_set:");
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(
          v12,
          &this->leave_uid_set_);
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, " enter_uid_set:");
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(
          v14,
          &this->enter_uid_set_);
  v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, " player_uid_set:");
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(
          v16,
          &this->player_uid_set_);
  v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, " hunter_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, this->hunter_born_pair_.first);
  v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, " map_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, this->map_id_);
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.cpp",
    "printPlayerInfo",
    1662);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &val,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v26, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v26);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  if ( v28 == (char *)v1 )
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
