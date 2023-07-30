// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fall_gallery.cpp

// Line 28: range 00000000165F69C2-00000000165F6BE1
void __cdecl FallPlayerInfo::toSettleInfo(const FallPlayerInfo *const this, proto::FallSettleInfo *settle_info)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v3; // rsi
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  char v6; // cl
  uint32_t count; // [rsp+14h] [rbp-4Ch]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gadget_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *c; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FallSettleInfo::set_final_score(settle_info, this->score);
  proto_map = proto::FallSettleInfo::mutable_flower_ring_catch_count_map(settle_info);
  count = 0;
  __for_range = &this->ball_gadget_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->ball_gadget_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->ball_gadget_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,unsigned int>(v13);
    c = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
    if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *c;
    v3 = gadget_id;
    v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, gadget_id);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(v3) = v6 != 0;
      __asan_report_store4(v4, v3, (_BYTE)v4);
    }
    *v5 = v2;
    if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    count += *c;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  proto::FallSettleInfo::set_catch_count(settle_info, count);
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FallSettleInfo::set_remain_time(settle_info, this->remain_time);
};

// Line 42: range 00000000165F6BE2-00000000165F6DFD
void __cdecl FallPlayerInfo::toClient(const FallPlayerInfo *const this, proto::FallPlayerInfo *player_info)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v3; // rsi
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  char v6; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gadget_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *c; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FallPlayerInfo::set_cur_score(player_info, this->score);
  proto_map = proto::FallPlayerInfo::mutable_ball_catch_count_map(player_info);
  __for_range = &this->ball_gadget_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->ball_gadget_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->ball_gadget_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,unsigned int>(v12);
    c = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *c;
    v3 = gadget_id;
    v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, gadget_id);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(v3) = v6 != 0;
      __asan_report_store4(v4, v3, (_BYTE)v4);
    }
    *v5 = v2;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_ground);
  proto::FallPlayerInfo::set_is_ground(player_info, this->is_ground);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FallPlayerInfo::set_time_cost(player_info, this->time_cost);
};

// Line 54: range 00000000165F6DFE-00000000165F6E9F
void __cdecl FallPlayerInfo::toBrief(const FallPlayerInfo *const this, proto::FallPlayerBrief *brief_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FallPlayerBrief::set_score(brief_info, this->score);
  if ( *(char *)(((unsigned __int64)&this->is_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_ground);
  proto::FallPlayerBrief::set_is_ground(brief_info, this->is_ground);
};

// Line 60: range 00000000165F6EA0-00000000165F75AE
// local variable allocation has failed, the output may be wrong!
void __cdecl FallGallery::onStart(FallGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 v10; // rcx
  Player *v11; // r14
  std::string v12; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v16; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+90h] [rbp-D0h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 holder:76 64 16 19 owner_player_ptr:68 96 16 10 log_ptr:77 128 16 13 player_ptr:84";
  *(_QWORD *)(v1 + 16) = FallGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( BaseGallery::getGalleryExcelConfig((const BaseGallery *const)v12._M_string_length) )
  {
    if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HIDWORD(v12._anon_0._M_allocated_capacity) = Scene::getSceneTimeSeconds(*(Scene *const *)(v12._M_string_length + 24));
    if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnPlayer((const Scene *const)(v1 + 64));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "onStart",
        71);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v21,
        (const char (*)[35])"[GALLERY] owner_player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      if ( *(_BYTE *)(((v12._M_string_length + 352) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v12._M_string_length + 352) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(v12._M_string_length + 352, 0LL, LOBYTE(v12._M_string_length) + 96);
      }
      *(_DWORD *)(v12._M_string_length + 352) = HIDWORD(v12._anon_0._M_allocated_capacity);
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BasicComp = Player::getBasicComp(v5);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xC50u, v12);
      std::string::~string(&v21);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryFallStart>();
      v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v12._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v12._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGalleryFallStart::set_gallery_id(v7, *(_DWORD *)(v12._M_string_length + 32));
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v12._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
        && ((LOBYTE(v12._M_string_length) + 36) & 7) >= *(_BYTE *)(((v12._M_string_length + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v12._M_string_length + 36);
      }
      proto_log::PlayerLogBodyGalleryFallStart::set_is_single(v8, *(_BYTE *)(v12._M_string_length + 36));
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyGalleryFallStart::set_transaction(v9, (const std::string *)(v12._M_string_length + 64));
      std::map<unsigned int,FallPlayerInfo>::clear((std::map<unsigned int,FallPlayerInfo> *const)(v12._M_string_length
                                                                                                + 304));
      __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v12._M_string_length + 144);
      *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v12._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v12._M_string_length + 144));
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v12._M_string_length + 144))._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v12._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v12._anon_0._M_allocated_capacity
              + 1);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v16);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v16);
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
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryFallStart,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGalleryFallStart> *)(v1 + 96));
          Player::printStatLog(v11, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v12._anon_0._M_allocated_capacity
        + 1);
      }
      std::shared_ptr<proto_log::PlayerLogBodyGalleryFallStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryFallStart> *const)(v1 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fall_gallery.cpp",
      "onStart",
      64);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v21,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v4,
      (const unsigned int *)(v12._M_string_length + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v1 )
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

// Line 93: range 00000000165F75B0-00000000165F8995
__int64 __fastcall FallGallery::updatePlayerScore(
        FallGallery *const this,
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
  common::milog::MiLogStream *v11; // rax
  unsigned int *p_val; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // rsi
  uint32_t v20; // edx
  char v21; // al
  unsigned __int64 v22; // rax
  char v23; // cl
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // ecx
  char v26; // dl
  bool v27; // dl
  unsigned int v28; // edx
  __int64 v29; // rsi
  uint32_t v30; // edx
  char v31; // al
  uint32_t v32; // ecx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rcx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v44; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v45; // rsi
  unsigned int *v46; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v47; // rdx
  char v48; // cl
  Player *v49; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-239h] BYREF
  unsigned int val; // [rsp+28h] [rbp-238h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-234h]
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-230h] BYREF
  const GalleryFallParam *param; // [rsp+38h] [rbp-228h]
  FallPlayerInfo *player_info; // [rsp+40h] [rbp-220h]
  google::protobuf::Map<unsigned int,unsigned int> *catch_map; // [rsp+48h] [rbp-218h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-210h]
  const std::pair<unsigned int const,unsigned int> *v60; // [rsp+58h] [rbp-208h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gadget_id; // [rsp+60h] [rbp-200h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *c; // [rsp+68h] [rbp-1F8h]
  common::milog::MiLogStream v63; // [rsp+70h] [rbp-1F0h] BYREF
  char v64[464]; // [rsp+90h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 1 16 has_end_game:115 48 4 13 gadget_id:114 64 4 13 add_score:126 80 4 15 remain_time:156 9"
                        "6 4 6 uid:92 112 8 14 score_iter:135 144 16 14 player_ptr:100 176 64 13 param_opt:119 272 112 10 notify:165";
  *(_QWORD *)(v4 + 16) = FallGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 96) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v4 + 144), (__int64)this->scene_, *(_DWORD *)(v4 + 96));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "updatePlayerScore",
        103);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v63,
             (const char (*)[33])"[GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v8 = -1;
LABEL_86:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 144));
      goto LABEL_87;
    }
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
            &this->player_info_map_,
            (const unsigned int *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "updatePlayerScore",
        109);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v63,
              (const char (*)[31])"[GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v8 = -1;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    now = Scene::getSceneTimeSeconds(this->scene_);
    *(_DWORD *)(v4 + 48) = 0;
    *(_BYTE *)(v4 + 32) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v63, "trigger_gadget_id", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v63,
      (unsigned int *)(v4 + 48));
    std::string::~string(&v63);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v63, "has_end_game", &__a);
    ScriptUtil::getTableValue<bool>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v63,
      (bool *)(v4 + 32));
    std::string::~string(&v63);
    std::allocator<char>::~allocator(&__a);
    BaseGallery::getParam<GalleryFallParam>((std::optional<GalleryFallParam> *)(v4 + 176), this);
    if ( !std::optional<GalleryFallParam>::has_value((const std::optional<GalleryFallParam> *const)(v4 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "updatePlayerScore",
        122);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v63,
              (const char (*)[43])"[GALLERY] fall param not find, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v63);
      v8 = -1;
LABEL_85:
      std::optional<GalleryFallParam>::~optional((std::optional<GalleryFallParam> *const)(v4 + 176));
      goto LABEL_86;
    }
    param = std::optional<GalleryFallParam>::value((std::optional<GalleryFallParam> *const)(v4 + 176));
    *(_DWORD *)(v4 + 64) = 0;
    p_val = (unsigned int *)(v4 + 96);
    player_info = std::map<unsigned int,FallPlayerInfo>::operator[](
                    &this->uid_fall_info_map_,
                    (const std::map<unsigned int,FallPlayerInfo>::key_type *)(v4 + 96));
    if ( *(_DWORD *)(v4 + 48) )
    {
      if ( *(char *)(((unsigned __int64)&player_info->is_ground >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&player_info->is_ground);
      if ( player_info->is_ground )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/fall_gallery.cpp",
          "updatePlayerScore",
          132);
        v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v63,
                (const char (*)[38])"[GALLERY] player has ended game, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v63);
        v8 = -1;
        goto LABEL_85;
      }
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 112) = std::map<unsigned int,unsigned int>::find(
                                                                             &param->ball_gadget_score_map,
                                                                             (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::map<unsigned int,unsigned int>::end(&param->ball_gadget_score_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 112),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/fall_gallery.cpp",
          "updatePlayerScore",
          138);
        v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v63,
                (const char (*)[51])"[GALLERY] fall gadget_id not in config, gadget_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v8 = -1;
        goto LABEL_85;
      }
      v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = v17->second;
      v18 = *(_DWORD *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v19 = v18;
      v20 = SAFE_ADD<unsigned int,unsigned int>(player_info->score, v18);
      v21 = *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v19) = v21 != 0;
        __asan_report_store4(player_info, v19, v20);
      }
      player_info->score = v20;
      p_val = (unsigned int *)(v4 + 48);
      v22 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                &player_info->ball_gadget_count_map,
                                (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
      LOBYTE(p_val) = v23 != 0;
      if ( v23 != 0 && (char)((v22 & 7) + 3) >= v23 )
        v22 = __asan_report_load4();
      ++*(_DWORD *)v22;
    }
    if ( *(_BYTE *)(v4 + 32) )
    {
      if ( *(char *)(((unsigned __int64)&player_info->is_ground >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&player_info->is_ground);
      if ( !player_info->is_ground )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( now <= this->start_time_ )
          goto LABEL_46;
        if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( now > this->end_time_ )
        {
LABEL_46:
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/fall_gallery.cpp",
            "updatePlayerScore",
            152);
          v24 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v63,
                  (const char (*)[55])"[GALLERY] now is earlier than start_time_  gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v8 = -1;
          goto LABEL_85;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v25 = now - this->start_time_;
        v26 = *(_BYTE *)(((unsigned __int64)&player_info->time_cost >> 3) + 0x7FFF8000);
        LOBYTE(p_val) = v26 != 0;
        v27 = v26 != 0 && (char)((((_BYTE)player_info + 60) & 7) + 3) >= v26;
        if ( v27 )
          __asan_report_store4(&player_info->time_cost, p_val, v27);
        player_info->time_cost = v25;
        if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 80) = this->end_time_ - now;
        if ( *(_BYTE *)(((unsigned __int64)&param->remain_time_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->remain_time_score >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v28 = *(_DWORD *)(v4 + 80) * param->remain_time_score;
        if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v29 = v28;
        v30 = SAFE_ADD<unsigned int,unsigned int>(player_info->score, v28);
        v31 = *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000);
        if ( v31 != 0 && v31 <= 3 )
        {
          LOBYTE(v29) = v31 != 0;
          __asan_report_store4(player_info, v29, v30);
        }
        player_info->score = v30;
        v32 = *(_DWORD *)(v4 + 80);
        v33 = *(_BYTE *)(((unsigned __int64)&player_info->remain_time >> 3) + 0x7FFF8000);
        if ( v33 != 0 && v33 <= 3 )
        {
          LOBYTE(v29) = v33 != 0;
          __asan_report_store4(&player_info->remain_time, v29, (_BYTE)player_info + 64);
        }
        player_info->remain_time = v32;
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/fall_gallery.cpp",
          "updatePlayerScore",
          159);
        v34 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v63,
                (const char (*)[40])"[GALLERY] player end game, remain secs:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v4 + 80));
        v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v35,
                (const char (*)[20])" remain_time_score:");
        if ( *(_BYTE *)(((unsigned __int64)&param->remain_time_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->remain_time_score >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        val = param->remain_time_score * *(_DWORD *)(v4 + 80);
        p_val = &val;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
        common::milog::MiLogStream::~MiLogStream(&v63);
      }
      if ( *(char *)(((unsigned __int64)&player_info->is_ground >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&player_info->is_ground, p_val, &player_info->is_ground);
      player_info->is_ground = 1;
    }
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/fall_gallery.cpp",
      "updatePlayerScore",
      164);
    v37 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v63,
            (const char (*)[38])"[GALLERY] catch ball succ, gagdet_id:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 48));
    v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])"add_score:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 64));
    v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v40, (const char (*)[12])" cur_score:");
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &player_info->score);
    v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v63);
    proto::GalleryFallCatchNotify::GalleryFallCatchNotify((proto::GalleryFallCatchNotify *const)(v4 + 272));
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GalleryFallCatchNotify::set_gallery_id((proto::GalleryFallCatchNotify *const)(v4 + 272), this->gallery_id_);
    proto::GalleryFallCatchNotify::set_add_score((proto::GalleryFallCatchNotify *const)(v4 + 272), *(_DWORD *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GalleryFallCatchNotify::set_cur_score((proto::GalleryFallCatchNotify *const)(v4 + 272), player_info->score);
    if ( *(_BYTE *)(((unsigned __int64)&player_info->time_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_info + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->time_cost >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GalleryFallCatchNotify::set_time_cost(
      (proto::GalleryFallCatchNotify *const)(v4 + 272),
      player_info->time_cost);
    if ( *(char *)(((unsigned __int64)&player_info->is_ground >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&player_info->is_ground);
    proto::GalleryFallCatchNotify::set_is_ground(
      (proto::GalleryFallCatchNotify *const)(v4 + 272),
      player_info->is_ground);
    catch_map = proto::GalleryFallCatchNotify::mutable_ball_catch_count_map((proto::GalleryFallCatchNotify *const)(v4 + 272));
    __for_range = &player_info->ball_gadget_count_map;
    *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 112) = std::map<unsigned int,unsigned int>::begin(&player_info->ball_gadget_count_map);
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 112),
              &__for_end) )
    {
      v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 112));
      gadget_id = std::get<0ul,unsigned int const,unsigned int>(v60);
      c = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v60);
      if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v44 = *c;
      v45 = gadget_id;
      v46 = google::protobuf::Map<unsigned int,unsigned int>::operator[](catch_map, gadget_id);
      v47 = v46;
      v48 = *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000);
      if ( v48 != 0 && (char)(((unsigned __int8)v46 & 7) + 3) >= v48 )
      {
        LOBYTE(v45) = v48 != 0;
        __asan_report_store4(v46, v45, (_BYTE)v46);
      }
      *v47 = v44;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 112));
    }
    v49 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    Player::sendProto(v49, (const google::protobuf::Message *)(v4 + 272));
    FallGallery::notifyAllPlayerScore(this);
    if ( FallGallery::isAllPlayerGround(this) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "updatePlayerScore",
        181);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v63,
        (const char (*)[46])"[GALLERY] all players are grounded, then stop");
      common::milog::MiLogStream::~MiLogStream(&v63);
      BaseGallery::stop(this, 0, GALLERY_STOP_NONE);
    }
    v8 = 0;
    proto::GalleryFallCatchNotify::~GalleryFallCatchNotify((proto::GalleryFallCatchNotify *const)(v4 + 272));
    goto LABEL_85;
  }
  common::milog::MiLogStream::create(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/fall_gallery.cpp",
    "updatePlayerScore",
    96);
  v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v63,
         (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  val = this->stage_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v63);
  v8 = -1;
LABEL_87:
  result = v8;
  if ( v64 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 188: range 00000000165F8996-00000000165F9403
void __cdecl FallGallery::onStop(FallGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FallGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  void *p_for_end; // rsi
  __int64 scene; // rcx
  std::__shared_ptr_access<GalleryFallSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // r14
  Player *v19; // rax
  PlayerEventComp *EventComp; // r14
  std::string v21; // [rsp+0h] [rbp-1D0h]
  FallGallery *thisa; // [rsp+8h] [rbp-1C8h]
  bool is_interrupt; // [rsp+1Fh] [rbp-1B1h]
  uint32_t duration; // [rsp+20h] [rbp-1B0h]
  uint32_t now; // [rsp+24h] [rbp-1ACh]
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> >::_Self __y; // [rsp+38h] [rbp-198h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+48h] [rbp-188h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v31; // [rsp+50h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+58h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *online_player_info; // [rsp+60h] [rbp-170h]
  proto::FallSettleInfo *proto_info; // [rsp+68h] [rbp-168h]
  proto::OnlinePlayerInfo *proto_online_player_info; // [rsp+70h] [rbp-160h]
  FallPlayerInfo *fall_player_info; // [rsp+78h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+90h] [rbp-140h] BYREF
  common::milog::MiLogStream v39; // [rsp+A0h] [rbp-130h] BYREF
  char v40[272]; // [rsp+C0h] [rbp-110h] BYREF

  v21._M_string_length = (std::string::size_type)this;
  HIDWORD(v21._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:208 64 8 18 fall_info_iter:217 96 16 20 owner_player_ptr:190 128 16 13 event_pt"
                        "r:209 160 16 14 player_ptr:212 192 16 11 log_ptr:224";
  *(_QWORD *)(v2 + 16) = FallGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  v21._anon_0._M_local_buf[15] = 0;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, FallGallery *))v6)(v2 + 96, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fall_gallery.cpp",
      "onStop",
      193);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v39,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  else if ( BaseGallery::getGalleryExcelConfig(this) )
  {
    duration = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    now = Scene::getSceneTimeSeconds(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now > this->start_time_ )
      duration = now - this->start_time_;
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC51u, v21);
    std::string::~string(&v39);
    common::tools::perf::make_shared<GalleryFallSettleEvent,unsigned int &,bool &>(
      (unsigned int *)(v2 + 128),
      (bool *)&thisa->gallery_id_,
      (unsigned int *)&thisa->is_single_,
      (bool *)&thisa->gallery_id_);
    __for_range = &thisa->player_info_map_;
    __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&thisa->player_info_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&thisa->player_info_map_)._M_node;
    while ( 1 )
    {
      p_for_end = &__for_end;
      if ( !std::operator!=(&__for_begin, &__for_end) )
        break;
      v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v31);
      online_player_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v31);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = (__int64)thisa->scene_;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v2 + 160), scene, *uid);
      v12 = std::__shared_ptr_access<GalleryFallSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryFallSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      proto_info = std::map<unsigned int,proto::FallSettleInfo>::operator[](&v12->player_settle_info_map, uid);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FallSettleInfo::set_uid(proto_info, *uid);
      proto_online_player_info = proto::FallSettleInfo::mutable_player_info(proto_info);
      proto::OnlinePlayerInfo::CopyFrom(proto_online_player_info, online_player_info);
      *(std::map<unsigned int,FallPlayerInfo>::iterator *)(v2 + 64) = std::map<unsigned int,FallPlayerInfo>::find(
                                                                        &thisa->uid_fall_info_map_,
                                                                        uid);
      __y._M_node = std::map<unsigned int,FallPlayerInfo>::end(&thisa->uid_fall_info_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> >::_Self *)(v2 + 64),
             &__y) )
      {
        fall_player_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> > *const)(v2 + 64))->second;
        FallPlayerInfo::toSettleInfo(fall_player_info, proto_info);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 160), 0LL) )
        {
          common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryFallStop>();
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyGalleryFallStop::set_gallery_id(v13, thisa->gallery_id_);
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          proto_log::PlayerLogBodyGalleryFallStop::set_duration(v14, duration);
          v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->is_single_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)thisa + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_single_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&thisa->is_single_);
          }
          proto_log::PlayerLogBodyGalleryFallStop::set_is_single(v15, thisa->is_single_);
          v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          if ( *(_BYTE *)(((unsigned __int64)fall_player_info >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)fall_player_info >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyGalleryFallStop::set_score(v16, fall_player_info->score);
          v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryFallStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          proto_log::PlayerLogBodyGalleryFallStop::set_transaction(v17, &thisa->transaction_);
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryFallStop,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGalleryFallStop> *)(v2 + 192));
          Player::printStatLog(v18, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          std::shared_ptr<proto_log::PlayerLogBodyGalleryFallStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryFallStop> *const)(v2 + 192));
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
    }
    if ( !is_interrupt )
    {
      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      EventComp = Player::getEventComp(v19);
      std::shared_ptr<BaseEvent>::shared_ptr<GalleryFallSettleEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
        (const std::shared_ptr<GalleryFallSettleEvent> *)(v2 + 128));
      p_for_end = &p_body_ext_ptr;
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
    }
    std::map<unsigned int,FallPlayerInfo>::clear(&thisa->uid_fall_info_map_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->start_time_, p_for_end, (_BYTE)thisa + 96);
    }
    thisa->start_time_ = 0;
    std::shared_ptr<GalleryFallSettleEvent>::~shared_ptr((std::shared_ptr<GalleryFallSettleEvent> *const)(v2 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fall_gallery.cpp",
      "onStop",
      199);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v39,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v40 == (char *)v2 )
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

// Line 244: range 00000000165F9404-00000000165F9590
void __cdecl FallGallery::toClient(FallGallery *const this, proto::SceneGalleryInfo *client_info)
{
  std::map<unsigned int,FallPlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,FallPlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::SceneGalleryFallInfo *fall_info; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::FallPlayerInfo> *player_map; // [rsp+30h] [rbp-30h]
  std::map<unsigned int,FallPlayerInfo> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,FallPlayerInfo> *v7; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,FallPlayerInfo> >::type *uid; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,FallPlayerInfo> >::type *info; // [rsp+50h] [rbp-10h]
  proto::FallPlayerInfo *proto_info; // [rsp+58h] [rbp-8h]

  BaseGallery::toClient(this, client_info);
  fall_info = proto::SceneGalleryInfo::mutable_fall_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFallInfo::set_end_time(fall_info, this->end_time_);
  player_map = proto::SceneGalleryFallInfo::mutable_scene_player_fall_info_map(fall_info);
  __for_range = &this->uid_fall_info_map_;
  __for_begin._M_node = std::map<unsigned int,FallPlayerInfo>::begin(&this->uid_fall_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FallPlayerInfo>::end(&this->uid_fall_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,FallPlayerInfo>(v7);
    info = (std::tuple_element<1,const std::pair<unsigned int const,FallPlayerInfo> >::type *)std::get<1ul,unsigned int const,FallPlayerInfo>(v7);
    proto_info = google::protobuf::Map<unsigned int,proto::FallPlayerInfo>::operator[](player_map, uid);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FallPlayerInfo::set_uid(proto_info, *uid);
    FallPlayerInfo::toClient(info, proto_info);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo>>::operator++(&__for_begin);
  }
};

// Line 258: range 00000000165F9592-00000000165F9870
void __cdecl FallGallery::notifyAllPlayerScore(FallGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<unsigned int,FallPlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,FallPlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::Map<unsigned int,proto::FallPlayerBrief> *proto_map; // [rsp+20h] [rbp-F0h]
  std::map<unsigned int,FallPlayerInfo> *__for_range; // [rsp+28h] [rbp-E8h]
  const std::pair<unsigned int const,FallPlayerInfo> *v8; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,FallPlayerInfo> >::type *uid; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,FallPlayerInfo> >::type *player_info; // [rsp+40h] [rbp-D0h]
  proto::FallPlayerBrief *proto_brief; // [rsp+48h] [rbp-C8h]
  char v12[192]; // [rsp+50h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 10 notify:259";
  *(_QWORD *)(v1 + 16) = FallGallery::notifyAllPlayerScore;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::GalleryFallScoreNotify::GalleryFallScoreNotify((proto::GalleryFallScoreNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GalleryFallScoreNotify::set_gallery_id((proto::GalleryFallScoreNotify *const)(v1 + 32), this->gallery_id_);
  proto_map = proto::GalleryFallScoreNotify::mutable_uid_brief_map((proto::GalleryFallScoreNotify *const)(v1 + 32));
  __for_range = &this->uid_fall_info_map_;
  __for_begin._M_node = std::map<unsigned int,FallPlayerInfo>::begin(&this->uid_fall_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FallPlayerInfo>::end(&this->uid_fall_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,FallPlayerInfo>(v8);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,FallPlayerInfo> >::type *)std::get<1ul,unsigned int const,FallPlayerInfo>(v8);
    proto_brief = google::protobuf::Map<unsigned int,proto::FallPlayerBrief>::operator[](proto_map, uid);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FallPlayerBrief::set_uid(proto_brief, *uid);
    FallPlayerInfo::toBrief(player_info, proto_brief);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo>>::operator++(&__for_begin);
  }
  BaseGallery::notifyToGalleryPlayers<proto::GalleryFallScoreNotify>(this, (proto::GalleryFallScoreNotify *)(v1 + 32));
  proto::GalleryFallScoreNotify::~GalleryFallScoreNotify((proto::GalleryFallScoreNotify *const)(v1 + 32));
  if ( v12 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 272: range 00000000165F9872-00000000165F9B4D
bool __cdecl FallGallery::isAllPlayerGround(FallGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *scene; // rcx
  bool v5; // r14
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> >::pointer v7; // rax
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v12; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-88h]
  std::shared_ptr<Player> __a; // [rsp+50h] [rbp-80h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 20 player_info_iter:277";
  *(_QWORD *)(v1 + 16) = FallGallery::isAllPlayerGround;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v12);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)&__a, (__int64)scene, *uid);
    v5 = std::operator!=<Player>(&__a, 0LL);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( v5 )
    {
      *(std::map<unsigned int,FallPlayerInfo>::iterator *)(v1 + 32) = std::map<unsigned int,FallPlayerInfo>::find(
                                                                        &this->uid_fall_info_map_,
                                                                        uid);
      __y._M_node = std::map<unsigned int,FallPlayerInfo>::end(&this->uid_fall_info_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> >::_Self *)(v1 + 32),
             &__y) )
      {
        result = 0;
        goto LABEL_19;
      }
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> > *const)(v1 + 32));
      if ( *(char *)(((unsigned __int64)&v7->second.is_ground >> 3) + 0x7FFF8000) < 0 )
        v7 = (std::_Rb_tree_iterator<std::pair<unsigned int const,FallPlayerInfo> >::pointer)__asan_report_load1(&v7->second.is_ground);
      if ( !v7->second.is_ground )
      {
        result = 0;
        goto LABEL_19;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  result = 1;
LABEL_19:
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 292: range 00000000165F9B4E-00000000165FA3FA
__int64 __fastcall FallGallery::addScoreByGm(FallGallery *const this, uint32_t uid, uint32_t score)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v11; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v12; // rsi
  unsigned int *v13; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v14; // rdx
  char v15; // cl
  Player *v16; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-174h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  FallPlayerInfo *player_info; // [rsp+30h] [rbp-160h]
  google::protobuf::Map<unsigned int,unsigned int> *catch_map; // [rsp+38h] [rbp-158h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  const std::pair<unsigned int const,unsigned int> *v25; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gadget_id; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *c; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-130h] BYREF
  char v29[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:291 48 16 14 player_ptr:299 80 112 10 notify:320";
  *(_QWORD *)(v3 + 16) = FallGallery::addScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 48), (__int64)this->scene_, *(_DWORD *)(v3 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "addScoreByGm",
        302);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v28,
             (const char (*)[33])"[GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v7 = -1;
    }
    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                 &this->player_info_map_,
                 (const unsigned int *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fall_gallery.cpp",
        "addScoreByGm",
        308);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v28,
             (const char (*)[31])"[GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v7 = -1;
    }
    else
    {
      player_info = std::map<unsigned int,FallPlayerInfo>::operator[](
                      &this->uid_fall_info_map_,
                      (const std::map<unsigned int,FallPlayerInfo>::key_type *)(v3 + 32));
      if ( *(char *)(((unsigned __int64)&player_info->is_ground >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&player_info->is_ground);
      if ( player_info->is_ground )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/fall_gallery.cpp",
          "addScoreByGm",
          314);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v28,
                (const char (*)[38])"[GALLERY] player has ended game, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v28);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        player_info->score += score;
        proto::GalleryFallCatchNotify::GalleryFallCatchNotify((proto::GalleryFallCatchNotify *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryFallCatchNotify::set_gallery_id(
          (proto::GalleryFallCatchNotify *const)(v3 + 80),
          this->gallery_id_);
        proto::GalleryFallCatchNotify::set_add_score((proto::GalleryFallCatchNotify *const)(v3 + 80), score);
        if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryFallCatchNotify::set_cur_score(
          (proto::GalleryFallCatchNotify *const)(v3 + 80),
          player_info->score);
        if ( *(_BYTE *)(((unsigned __int64)&player_info->time_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_info + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->time_cost >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::GalleryFallCatchNotify::set_time_cost(
          (proto::GalleryFallCatchNotify *const)(v3 + 80),
          player_info->time_cost);
        if ( *(char *)(((unsigned __int64)&player_info->is_ground >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&player_info->is_ground);
        proto::GalleryFallCatchNotify::set_is_ground(
          (proto::GalleryFallCatchNotify *const)(v3 + 80),
          player_info->is_ground);
        catch_map = proto::GalleryFallCatchNotify::mutable_ball_catch_count_map((proto::GalleryFallCatchNotify *const)(v3 + 80));
        __for_range = &player_info->ball_gadget_count_map;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&player_info->ball_gadget_count_map)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(&player_info->ball_gadget_count_map)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          gadget_id = std::get<0ul,unsigned int const,unsigned int>(v25);
          c = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v25);
          if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v11 = *c;
          v12 = gadget_id;
          v13 = google::protobuf::Map<unsigned int,unsigned int>::operator[](catch_map, gadget_id);
          v14 = v13;
          v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
          if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
          {
            LOBYTE(v12) = v15 != 0;
            __asan_report_store4(v13, v12, (_BYTE)v13);
          }
          *v14 = v11;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        Player::sendProto(v16, (const google::protobuf::Message *)(v3 + 80));
        FallGallery::notifyAllPlayerScore(this);
        v7 = 0;
        proto::GalleryFallCatchNotify::~GalleryFallCatchNotify((proto::GalleryFallCatchNotify *const)(v3 + 80));
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fall_gallery.cpp",
      "addScoreByGm",
      295);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v28,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v7 = -1;
  }
  result = v7;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
