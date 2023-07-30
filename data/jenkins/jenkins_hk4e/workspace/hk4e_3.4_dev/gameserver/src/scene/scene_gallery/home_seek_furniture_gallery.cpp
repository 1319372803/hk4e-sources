// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/home_seek_furniture_gallery.cpp

// Line 24: range 00000000145C0AD0-00000000145C0D20
void __cdecl HomeSeekFurnitureGallery::toClient(
        HomeSeekFurnitureGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v3; // rsi
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  char v6; // cl
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  proto::SceneGalleryHomeSeekFurnitureInfo *home_seek_furniture_info; // [rsp+20h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *tmp_player_score_map; // [rsp+28h] [rbp-38h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *score; // [rsp+48h] [rbp-18h]

  BaseGallery::toClient(this, client_info);
  home_seek_furniture_info = proto::SceneGalleryInfo::mutable_home_seek_furniture_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryHomeSeekFurnitureInfo::set_cur_tide_total_num(home_seek_furniture_info, this->cur_tide_total_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryHomeSeekFurnitureInfo::set_cur_tide_left_num(home_seek_furniture_info, this->cur_tide_left_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryHomeSeekFurnitureInfo::set_cur_tide_duration_time(
    home_seek_furniture_info,
    this->cur_tide_duration_time_);
  tmp_player_score_map = proto::SceneGalleryHomeSeekFurnitureInfo::mutable_player_score_map(home_seek_furniture_info);
  __for_range = &this->player_score_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->player_score_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->player_score_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,unsigned int>(v12);
    score = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    if ( *(_BYTE *)(((unsigned __int64)score >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *score;
    v3 = uid;
    v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](tmp_player_score_map, uid);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(v3) = v6 != 0;
      __asan_report_store4(v4, v3, (_BYTE)v4);
    }
    *v5 = v2;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 39: range 00000000145C0D22-00000000145C10FD
void __cdecl HomeSeekFurnitureGallery::onStart(HomeSeekFurnitureGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  HomeGroupPlayerInfo *v7; // rax
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *v8; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  HomeSeekFurnitureGallery *v12; // rdx
  unsigned __int64 v13; // rax
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+28h] [rbp-108h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v17; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+38h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *player_info; // [rsp+40h] [rbp-F0h]
  const proto::ProfilePicture *online_player_info_profile_picture; // [rsp+48h] [rbp-E8h]
  char v21[224]; // [rsp+50h] [rbp-E0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 120 25 home_group_player_info:43";
  *(_QWORD *)(v1 + 16) = HomeSeekFurnitureGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  HomeSeekFurnitureGallery::clearGalleryData(this);
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v17);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v17);
    HomeGroupPlayerInfo::HomeGroupPlayerInfo((HomeGroupPlayerInfo *const)(v1 + 32));
    *(_DWORD *)(v1 + 32) = proto::OnlinePlayerInfo::uid(player_info);
    v4 = proto::OnlinePlayerInfo::nickname[abi:cxx11](player_info);
    std::string::operator=(v1 + 40, v4);
    *(_DWORD *)(v1 + 72) = proto::OnlinePlayerInfo::player_level(player_info);
    v5 = proto::OnlinePlayerInfo::online_id[abi:cxx11](player_info);
    std::string::operator=(v1 + 88, v5);
    v6 = proto::OnlinePlayerInfo::psn_id[abi:cxx11](player_info);
    std::string::operator=(v1 + 120, v6);
    online_player_info_profile_picture = proto::OnlinePlayerInfo::profile_picture(player_info);
    *(_DWORD *)(v1 + 76) = proto::ProfilePicture::avatar_id(online_player_info_profile_picture);
    *(_DWORD *)(v1 + 80) = proto::ProfilePicture::costume_id(online_player_info_profile_picture);
    v7 = std::map<unsigned int,HomeGroupPlayerInfo>::operator[](&this->home_group_player_info_map_, uid);
    HomeGroupPlayerInfo::operator=(v7, (const HomeGroupPlayerInfo *)(v1 + 32));
    v8 = uid;
    v9 = std::map<unsigned int,unsigned int>::operator[](&this->player_score_map_, uid);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v9, v8, (_BYTE)v9);
    }
    *v10 = 0;
    HomeGroupPlayerInfo::~HomeGroupPlayerInfo((HomeGroupPlayerInfo *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  v12 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = (unsigned __int64)(this->_vptr_BaseGallery + 18);
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v13 = __asan_report_load8();
  (*(void (__fastcall **)(HomeSeekFurnitureGallery *))v13)(v12);
  if ( v21 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 60: range 00000000145C118E-00000000145C1DEB
void __cdecl HomeSeekFurnitureGallery::onStop(HomeSeekFurnitureGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  HomeSeekFurnitureGallery *v6; // rdx
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  int Now; // r14d
  __int64 v11; // rax
  char v12; // dl
  bool v13; // dl
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeGroupPlayerInfo> >::pointer v15; // rax
  std::vector<SeekFurniturePlayerScore> *p_engaged_player_score_info_vec; // r14
  std::vector<SeekFurniturePlayerScore>::value_type *v17; // rax
  std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  SeekFurniturePlayerScore *M_current; // r14
  std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::vector<SeekFurniturePlayerScore>::iterator v21; // rax
  HomeSeekFurnitureGallery::onStop::<lambda(const SeekFurniturePlayerScore&, const SeekFurniturePlayerScore&)> v22; // dl
  HomeSeekFurnitureGallery *v23; // rdx
  unsigned __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  Home *v26; // rax
  HomeGroupRecordComp *GroupRecordComp; // r14
  Player *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::vector<SeekFurniturePlayerScore> *v30; // r14
  __int64 v31; // rax
  HomeSeekFurnitureGallery *v32; // rdx
  unsigned __int64 v33; // rax
  uint32_t control_group_id; // [rsp+1Ch] [rbp-274h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-270h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-268h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeGroupPlayerInfo> >::_Self __y; // [rsp+30h] [rbp-260h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-258h]
  proto::HomeSeekFurnitureOneRecord *record; // [rsp+40h] [rbp-250h]
  const std::pair<unsigned int const,unsigned int> *v41; // [rsp+48h] [rbp-248h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+50h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *score; // [rsp+58h] [rbp-238h]
  std::shared_ptr<BaseHomePlaySettleInfo> p_settle_info_ptr; // [rsp+60h] [rbp-230h] BYREF
  std::shared_ptr<BaseHomePlayRankInfo> p_rank_info_ptr; // [rsp+70h] [rbp-220h] BYREF
  char v46[528]; // [rsp+80h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 8 7 iter:85 80 16 11 home_ptr:61 112 16 19 owner_player_ptr:68 144 16 33 seek_furniture_set"
                        "tle_info_ptr:76 176 32 14 one_record:128 240 40 10 notify:124 320 128 20 player_score_info:92";
  *(_QWORD *)(v2 + 16) = HomeSeekFurnitureGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v2 + 80));
  if ( std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
      "onStop",
      64);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           (common::milog::MiLogStream *const)(v2 + 176),
           (const char (*)[50])"[HOME_SEEK_GALLERY] home_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    goto LABEL_46;
  }
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, HomeSeekFurnitureGallery *))v7)(v2 + 112, v6);
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 112)) )
  {
    common::tools::perf::make_shared<SeekFurnitureHomePlaySettleInfo>();
    v9 = (char *)(v2 + 144);
    if ( std::operator==<SeekFurnitureHomePlaySettleInfo>(
           0LL,
           (const std::shared_ptr<SeekFurnitureHomePlaySettleInfo> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
        "onStop",
        79);
      common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
        (common::milog::MiLogStream *const)(v2 + 176),
        (const char (*)[63])"[HOME_SEEK_GALLERY] make seek_furniture_settle_info_ptr fails.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
LABEL_44:
      std::shared_ptr<SeekFurnitureHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<SeekFurnitureHomePlaySettleInfo> *const)(v2 + 144));
      goto LABEL_45;
    }
    Now = common::tools::TimeUtils::getNow();
    v11 = (__int64)std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    v12 = *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v12 != 0;
    v13 = v12 != 0 && v12 <= 3;
    if ( v13 )
      v11 = __asan_report_store4(v11 + 8, v9, v13);
    *(_DWORD *)(v11 + 8) = Now;
    __for_range = &this->player_score_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->player_score_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->player_score_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,unsigned int>(v41);
      score = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v41);
      *(std::map<unsigned int,HomeGroupPlayerInfo>::iterator *)(v2 + 48) = std::map<unsigned int,HomeGroupPlayerInfo>::find(
                                                                             &this->home_group_player_info_map_,
                                                                             uid);
      __y._M_node = std::map<unsigned int,HomeGroupPlayerInfo>::end(&this->home_group_player_info_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeGroupPlayerInfo> >::_Self *)(v2 + 48),
             &__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
          "onStop",
          88);
        v14 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                (common::milog::MiLogStream *const)(v2 + 176),
                (const char (*)[65])"[HOME_SEEK_GALLERY] find home_group_player_info_map_ fails. uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      }
      else
      {
        SeekFurniturePlayerScore::SeekFurniturePlayerScore((SeekFurniturePlayerScore *const)(v2 + 320));
        v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeGroupPlayerInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeGroupPlayerInfo> > *const)(v2 + 48));
        HomeGroupPlayerInfo::operator=((HomeGroupPlayerInfo *const)(v2 + 320), &v15->second);
        if ( *(_BYTE *)(((unsigned __int64)score >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)score >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 440) = *score;
        p_engaged_player_score_info_vec = &std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144))->engaged_player_score_info_vec;
        v17 = std::move<SeekFurniturePlayerScore &>((SeekFurniturePlayerScore *)(v2 + 320));
        std::vector<SeekFurniturePlayerScore>::push_back(p_engaged_player_score_info_vec, v17);
        SeekFurniturePlayerScore::~SeekFurniturePlayerScore((SeekFurniturePlayerScore *const)(v2 + 320));
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v18 = std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    M_current = std::vector<SeekFurniturePlayerScore>::end(&v18->engaged_player_score_info_vec)._M_current;
    v20 = std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    v21._M_current = std::vector<SeekFurniturePlayerScore>::begin(&v20->engaged_player_score_info_vec)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<SeekFurniturePlayerScore *,std::vector<SeekFurniturePlayerScore>>,HomeSeekFurnitureGallery::onStop(proto::GalleryStopReason)::{lambda(SeekFurniturePlayerScore const&,SeekFurniturePlayerScore const&)#1}>(
      v21,
      (__gnu_cxx::__normal_iterator<SeekFurniturePlayerScore*,std::vector<SeekFurniturePlayerScore> >)M_current,
      v22);
    if ( reason == GALLERY_STOP_TIMEUP )
    {
      v23 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = (unsigned __int64)(this->_vptr_BaseGallery + 15);
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8();
      control_group_id = (*(__int64 (__fastcall **)(HomeSeekFurnitureGallery *))v24)(v23);
      if ( !control_group_id )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
          "onStop",
          114);
        v25 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                (common::milog::MiLogStream *const)(v2 + 176),
                (const char (*)[55])"[HOME_SEEK_GALLERY] control_group_id is 0, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
        goto LABEL_44;
      }
      v26 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      GroupRecordComp = Home::getGroupRecordComp(v26);
      std::shared_ptr<BaseHomePlayRankInfo>::shared_ptr(&p_rank_info_ptr, 0LL);
      std::shared_ptr<BaseHomePlaySettleInfo>::shared_ptr<SeekFurnitureHomePlaySettleInfo,void>(
        &p_settle_info_ptr,
        (const std::shared_ptr<SeekFurnitureHomePlaySettleInfo> *)(v2 + 144));
      v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      LOBYTE(GroupRecordComp) = HomeGroupRecordComp::addRecord(
                                  GroupRecordComp,
                                  control_group_id,
                                  v28,
                                  &p_settle_info_ptr,
                                  &p_rank_info_ptr) != 0;
      std::shared_ptr<BaseHomePlaySettleInfo>::~shared_ptr(&p_settle_info_ptr);
      std::shared_ptr<BaseHomePlayRankInfo>::~shared_ptr(&p_rank_info_ptr);
      if ( (_BYTE)GroupRecordComp )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
          "onStop",
          119);
        v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                (common::milog::MiLogStream *const)(v2 + 176),
                (const char (*)[48])"[HOME_SEEK_GALLERY] addRecord fail, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
        goto LABEL_44;
      }
    }
    proto::HomeSeekFurnitureGalleryScoreNotify::HomeSeekFurnitureGalleryScoreNotify((proto::HomeSeekFurnitureGalleryScoreNotify *const)(v2 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeSeekFurnitureGalleryScoreNotify::set_gallery_id(
      (proto::HomeSeekFurnitureGalleryScoreNotify *const)(v2 + 240),
      this->gallery_id_);
    proto::HomeSeekFurnitureGalleryScoreNotify::set_reason(
      (proto::HomeSeekFurnitureGalleryScoreNotify *const)(v2 + 240),
      reason);
    record = proto::HomeSeekFurnitureGalleryScoreNotify::mutable_record((proto::HomeSeekFurnitureGalleryScoreNotify *const)(v2 + 240));
    v30 = &std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144))->engaged_player_score_info_vec;
    v31 = (__int64)std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    if ( *(_BYTE *)(((unsigned __int64)(v31 + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v31 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      v31 = __asan_report_load4();
    }
    SeekFurnitureOneRecord::SeekFurnitureOneRecord((SeekFurnitureOneRecord *const)(v2 + 176), *(_DWORD *)(v31 + 8), v30);
    SeekFurnitureOneRecord::toClient((const SeekFurnitureOneRecord *const)(v2 + 176), record);
    BaseGallery::notifyToGalleryPlayers<proto::HomeSeekFurnitureGalleryScoreNotify>(
      this,
      (proto::HomeSeekFurnitureGalleryScoreNotify *)(v2 + 240));
    v32 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v33 = (unsigned __int64)(this->_vptr_BaseGallery + 19);
    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      v33 = __asan_report_load8();
    (*(void (__fastcall **)(HomeSeekFurnitureGallery *, _QWORD))v33)(v32, (unsigned int)reason);
    SeekFurnitureOneRecord::~SeekFurnitureOneRecord((SeekFurnitureOneRecord *const)(v2 + 176));
    proto::HomeSeekFurnitureGalleryScoreNotify::~HomeSeekFurnitureGalleryScoreNotify((proto::HomeSeekFurnitureGalleryScoreNotify *const)(v2 + 240));
    goto LABEL_44;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 176),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
    "onStop",
    71);
  v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
         (common::milog::MiLogStream *const)(v2 + 176),
         (const char (*)[58])"[HOME_SEEK_GALLERY] owner_player_ptr is null, gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
LABEL_45:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 112));
LABEL_46:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 80));
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 103: range 00000000145C10FE-00000000145C118D
bool __cdecl HomeSeekFurnitureGallery::onStop(proto::GalleryStopReason)::{lambda(SeekFurniturePlayerScore const&,SeekFurniturePlayerScore const&)#1}::operator()(
        const HomeSeekFurnitureGallery::onStop::<lambda(const SeekFurniturePlayerScore&, const SeekFurniturePlayerScore&)> *const __closure,
        const SeekFurniturePlayerScore *lh,
        const SeekFurniturePlayerScore *rh)
{
  uint32_t score; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lh->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lh->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = lh->score;
  if ( *(_BYTE *)(((unsigned __int64)&rh->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rh->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return score > rh->score;
};

// Line 137: range 00000000145C1DEC-00000000145C254B
__int64 __fastcall HomeSeekFurnitureGallery::updatePlayerScore(
        HomeSeekFurnitureGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  const luabind::adl::object *v11; // rsi
  bool v12; // r14
  uint32_t v13; // ecx
  char v14; // al
  const luabind::adl::object *v15; // rsi
  bool v16; // r14
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  const luabind::adl::object *v20; // rsi
  uint32_t v21; // ecx
  char v22; // al
  std::allocator<char> __a; // [rsp+27h] [rbp-F9h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 9 score:144 64 4 22 cur_tide_total_num:158 80 4 21 cur_tide_left_num:164 96 4 26 cur_tide"
                        "_duration_time:171 112 4 7 uid:136 128 8 8 iter:148";
  *(_QWORD *)(v4 + 16) = HomeSeekFurnitureGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -202116352;
  *(_DWORD *)(v4 + 112) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v26, "score", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v26,
      (unsigned int *)(v4 + 48));
    std::string::~string(&v26);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v4 + 48) )
    {
      *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                       &this->player_score_map_,
                                                                       (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 112));
      __y._M_node = std::map<unsigned int,unsigned int>::end(&this->player_score_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 128),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
          "updatePlayerScore",
          151);
        v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v26,
               (const char (*)[56])"[HOME_SEEK_GALLERY] gallery don't have the player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = 0xFFFFFFFFLL;
        goto LABEL_27;
      }
      v10 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                &this->player_score_map_,
                                (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 112));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load4();
      *(_DWORD *)v10 += *(_DWORD *)(v4 + 48);
    }
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v26, "cur_tide_total_num", &__a);
    v11 = param_table;
    v12 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v26,
            (unsigned int *)(v4 + 64)) == 0;
    std::string::~string(&v26);
    std::allocator<char>::~allocator(&__a);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v4 + 64);
      v14 = *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(&this->cur_tide_total_num_, v11, (_BYTE)this - 96);
      }
      this->cur_tide_total_num_ = v13;
    }
    *(_DWORD *)(v4 + 80) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v26, "cur_tide_left_num", &__a);
    v15 = param_table;
    v16 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v26,
            (unsigned int *)(v4 + 80)) == 0;
    std::string::~string(&v26);
    std::allocator<char>::~allocator(&__a);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v4 + 80);
      v18 = *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000);
      LOBYTE(v15) = v18 != 0;
      v19 = v18 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v18;
      if ( v19 )
        __asan_report_store4(&this->cur_tide_left_num_, v15, v19);
      this->cur_tide_left_num_ = v17;
    }
    *(_DWORD *)(v4 + 96) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v26, "stage_time", &__a);
    v20 = param_table;
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v26,
      (unsigned int *)(v4 + 96));
    std::string::~string(&v26);
    std::allocator<char>::~allocator(&__a);
    v21 = *(_DWORD *)(v4 + 96);
    v22 = *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000);
    if ( v22 != 0 && v22 <= 3 )
    {
      LOBYTE(v20) = v22 != 0;
      __asan_report_store4(&this->cur_tide_duration_time_, v20, (_BYTE)this - 88);
    }
    this->cur_tide_duration_time_ = v21;
    BaseGallery::notifyGalleryInfo(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_seek_furniture_gallery.cpp",
      "updatePlayerScore",
      140);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v26,
           (const char (*)[52])"[HOME_SEEK_GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 96) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
LABEL_27:
  if ( v27 == (char *)v4 )
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
  return result;
};

// Line 181: range 00000000145C254C-00000000145C264F
void __cdecl HomeSeekFurnitureGallery::clearGalleryData(HomeSeekFurnitureGallery *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  std::map<unsigned int,unsigned int>::clear(&this->player_score_map_);
  std::map<unsigned int,HomeGroupPlayerInfo>::clear(&this->home_group_player_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tide_total_num_, v1, (_BYTE)this - 96);
  }
  this->cur_tide_total_num_ = 0;
  v2 = (((_BYTE)this - 92) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->cur_tide_left_num_, v2, v3);
  this->cur_tide_left_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tide_duration_time_, v2, (_BYTE)this - 88);
  }
  this->cur_tide_duration_time_ = 0;
};
