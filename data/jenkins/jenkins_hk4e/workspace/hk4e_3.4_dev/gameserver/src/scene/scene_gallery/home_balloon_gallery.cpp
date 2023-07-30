// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/home_balloon_gallery.cpp

// Line 27: range 00000000145BD586-00000000145BD608
void __cdecl HomeBalloonGallery::toClient(HomeBalloonGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryHomeBalloonInfo *home_balloon_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient(this, client_info);
  home_balloon_info = proto::SceneGalleryInfo::mutable_home_balloon_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryHomeBalloonInfo::set_score(home_balloon_info, this->score_);
};

// Line 35: range 00000000145BD60A-00000000145BD67F
void __cdecl HomeBalloonGallery::onStart(HomeBalloonGallery *const this)
{
  HomeBalloonGallery *v1; // rdx
  unsigned __int64 v2; // rax

  HomeBalloonGallery::clearGalleryData(this);
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_BaseGallery + 18);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(HomeBalloonGallery *))v2)(v1);
};

// Line 41: range 00000000145BD680-00000000145BE0FA
void __cdecl HomeBalloonGallery::onStop(HomeBalloonGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  HomeBalloonGallery *v6; // rdx
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  proto::BalloonGallerySettleInfo *p_settle_info; // rcx
  proto::BalloonGallerySettleInfo *v11; // rcx
  std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  proto::BalloonGallerySettleInfo *v13; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Uid; // eax
  HomeBalloonGallery *v16; // rdx
  unsigned __int64 v17; // rax
  common::milog::MiLogStream *v18; // rax
  Home *v19; // rax
  HomeGroupRecordComp *GroupRecordComp; // r14
  Player *v21; // rax
  common::milog::MiLogStream *v22; // rax
  proto::BalloonGallerySettleInfo *v23; // rdx
  __int64 v24; // rax
  std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  bool *p_is_new_record; // rax
  HomeBalloonGallery *v27; // rdx
  unsigned __int64 v28; // rax
  uint32_t control_group_id; // [rsp+14h] [rbp-17Ch]
  proto::BalloonGallerySettleInfo *settle_info_proto; // [rsp+18h] [rbp-178h]
  std::shared_ptr<BaseHomePlaySettleInfo> p_settle_info_ptr; // [rsp+20h] [rbp-170h] BYREF
  std::shared_ptr<BaseHomePlayRankInfo> p_rank_info_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-150h] BYREF
  char v34[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 11 home_ptr:42 80 16 19 owner_player_ptr:49 112 16 26 balloon_settle_info_ptr:57 144 16 "
                        "24 balloon_rank_info_ptr:58 176 40 9 notify:84";
  *(_QWORD *)(v2 + 16) = HomeBalloonGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v2 + 48));
  if ( std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_balloon_gallery.cpp",
      "onStop",
      45);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v33,
           (const char (*)[40])"[GALLERY] home_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v33);
    goto LABEL_46;
  }
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, HomeBalloonGallery *))v7)(v2 + 80, v6);
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 80)) )
  {
    common::tools::perf::make_shared<BalloonHomePlaySettleInfo>();
    common::tools::perf::make_shared<BalloonHomePlayRankInfo>();
    if ( std::operator==<BalloonHomePlaySettleInfo>(0LL, (const std::shared_ptr<BalloonHomePlaySettleInfo> *)(v2 + 112))
      || std::operator==<BalloonHomePlayRankInfo>(0LL, (const std::shared_ptr<BalloonHomePlayRankInfo> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/home_balloon_gallery.cpp",
        "onStop",
        61);
      common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
        &v33,
        (const char (*)[60])"balloon_settle_info_ptr or balloon_rank_info_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_44:
      std::shared_ptr<BalloonHomePlayRankInfo>::~shared_ptr((std::shared_ptr<BalloonHomePlayRankInfo> *const)(v2 + 144));
      std::shared_ptr<BalloonHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<BalloonHomePlaySettleInfo> *const)(v2 + 112));
      goto LABEL_45;
    }
    p_settle_info = &std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->settle_info;
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BalloonGallerySettleInfo::set_score(p_settle_info, this->score_);
    v11 = &std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->settle_info;
    if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BalloonGallerySettleInfo::set_hit_count(v11, this->hit_count_);
    v12 = std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    proto::BalloonGallerySettleInfo::set_reason(&v12->settle_info, reason);
    v13 = &std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->settle_info;
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Uid = Player::getUid(v14);
    proto::BalloonGallerySettleInfo::set_owner_uid(v13, Uid);
    if ( reason == GALLERY_STOP_TIMEUP )
    {
      v16 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = (unsigned __int64)(this->_vptr_BaseGallery + 15);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      control_group_id = (*(__int64 (__fastcall **)(HomeBalloonGallery *))v17)(v16);
      if ( !control_group_id )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/home_balloon_gallery.cpp",
          "onStop",
          74);
        v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v33,
                (const char (*)[45])"[GALLERY] control_group_id is 0, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v33);
        goto LABEL_44;
      }
      v19 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      GroupRecordComp = Home::getGroupRecordComp(v19);
      std::shared_ptr<BaseHomePlayRankInfo>::shared_ptr<BalloonHomePlayRankInfo,void>(
        &p_rank_info_ptr,
        (const std::shared_ptr<BalloonHomePlayRankInfo> *)(v2 + 144));
      std::shared_ptr<BaseHomePlaySettleInfo>::shared_ptr<BalloonHomePlaySettleInfo,void>(
        &p_settle_info_ptr,
        (const std::shared_ptr<BalloonHomePlaySettleInfo> *)(v2 + 112));
      v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      LOBYTE(GroupRecordComp) = HomeGroupRecordComp::addRecord(
                                  GroupRecordComp,
                                  control_group_id,
                                  v21,
                                  &p_settle_info_ptr,
                                  &p_rank_info_ptr) != 0;
      std::shared_ptr<BaseHomePlaySettleInfo>::~shared_ptr(&p_settle_info_ptr);
      std::shared_ptr<BaseHomePlayRankInfo>::~shared_ptr(&p_rank_info_ptr);
      if ( (_BYTE)GroupRecordComp )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/home_balloon_gallery.cpp",
          "onStop",
          79);
        v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v33,
                (const char (*)[38])"[GALLERY] addRecord fail, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v33);
        goto LABEL_44;
      }
    }
    proto::HomeBalloonGallerySettleNotify::HomeBalloonGallerySettleNotify((proto::HomeBalloonGallerySettleNotify *const)(v2 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeBalloonGallerySettleNotify::set_gallery_id(
      (proto::HomeBalloonGallerySettleNotify *const)(v2 + 176),
      this->gallery_id_);
    settle_info_proto = proto::HomeBalloonGallerySettleNotify::mutable_settle_info((proto::HomeBalloonGallerySettleNotify *const)(v2 + 176));
    v23 = &std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->settle_info;
    proto::BalloonGallerySettleInfo::CopyFrom(settle_info_proto, v23);
    v24 = (__int64)std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    if ( *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      v24 = __asan_report_load4();
    }
    proto::HomeBalloonGallerySettleNotify::set_rank(
      (proto::HomeBalloonGallerySettleNotify *const)(v2 + 176),
      *(_DWORD *)(v24 + 8));
    v25 = std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    p_is_new_record = &v25->rank_info.is_new_record;
    if ( *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_new_record);
    }
    proto::HomeBalloonGallerySettleNotify::set_is_new_record(
      (proto::HomeBalloonGallerySettleNotify *const)(v2 + 176),
      v25->rank_info.is_new_record);
    BaseGallery::notifyToGalleryPlayers<proto::HomeBalloonGallerySettleNotify>(
      this,
      (proto::HomeBalloonGallerySettleNotify *)(v2 + 176));
    v27 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v28 = (unsigned __int64)(this->_vptr_BaseGallery + 19);
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8();
    (*(void (__fastcall **)(HomeBalloonGallery *, _QWORD))v28)(v27, (unsigned int)reason);
    HomeBalloonGallery::clearGalleryData(this);
    proto::HomeBalloonGallerySettleNotify::~HomeBalloonGallerySettleNotify((proto::HomeBalloonGallerySettleNotify *const)(v2 + 176));
    goto LABEL_44;
  }
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/home_balloon_gallery.cpp",
    "onStop",
    52);
  v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v33,
         (const char (*)[48])"[GALLERY] owner_player_ptr is null, gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_45:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
LABEL_46:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 48));
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 97: range 00000000145BE0FC-00000000145BE339
int32_t __cdecl HomeBalloonGallery::updatePlayerScore(
        HomeBalloonGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-91h] BYREF
  std::string name; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 8 score:98";
  *(_QWORD *)(v4 + 16) = HomeBalloonGallery::updatePlayerScore;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "score", &__a);
  v7 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v4 + 32)) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_balloon_gallery.cpp",
      "updatePlayerScore",
      101);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[44])"[GALLERY] getTableValue failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    result = -1;
  }
  else
  {
    result = HomeBalloonGallery::updatePlayerScore(this, uid, *(_DWORD *)(v4 + 32), context);
  }
  if ( v14 == (char *)v4 )
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

// Line 108: range 00000000145BE33A-00000000145BE884
__int64 __fastcall HomeBalloonGallery::updatePlayerScore(
        HomeBalloonGallery *const this,
        uint32_t uid,
        uint32_t score,
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
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 uid:107 64 4 9 score:107 80 40 10 notify:120";
  *(_QWORD *)(v4 + 16) = HomeBalloonGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = uid;
  *(_DWORD *)(v4 + 64) = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->score_ += *(_DWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->hit_count_;
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/home_balloon_gallery.cpp",
      "updatePlayerScore",
      118);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v18,
           (const char (*)[42])"[GALLERY] shoot balloon succ, add_score: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" score: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->score_);
    v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    proto::HomeBalloonGalleryScoreNotify::HomeBalloonGalleryScoreNotify((proto::HomeBalloonGalleryScoreNotify *const)(v4 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeBalloonGalleryScoreNotify::set_gallery_id(
      (proto::HomeBalloonGalleryScoreNotify *const)(v4 + 80),
      this->gallery_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeBalloonGalleryScoreNotify::set_cur_score(
      (proto::HomeBalloonGalleryScoreNotify *const)(v4 + 80),
      this->score_);
    proto::HomeBalloonGalleryScoreNotify::set_add_score(
      (proto::HomeBalloonGalleryScoreNotify *const)(v4 + 80),
      *(_DWORD *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&context->source_entity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&context->source_entity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeBalloonGalleryScoreNotify::set_trigger_entity_id(
      (proto::HomeBalloonGalleryScoreNotify *const)(v4 + 80),
      context->source_entity_id);
    BaseGallery::notifyToGalleryPlayers<proto::HomeBalloonGalleryScoreNotify>(
      this,
      (proto::HomeBalloonGalleryScoreNotify *)(v4 + 80));
    v8 = 0;
    proto::HomeBalloonGalleryScoreNotify::~HomeBalloonGalleryScoreNotify((proto::HomeBalloonGalleryScoreNotify *const)(v4 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_balloon_gallery.cpp",
      "updatePlayerScore",
      111);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v18,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v8 = -1;
  }
  result = v8;
  if ( v19 == (char *)v4 )
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

// Line 131: range 00000000145BE886-00000000145BE922
void __cdecl HomeBalloonGallery::clearGalleryData(HomeBalloonGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_, v1, (_BYTE)this + 64);
  }
  this->score_ = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->hit_count_, (((_BYTE)this + 68) & 7u) + 3, v2);
  this->hit_count_ = 0;
};

// Line 137: range 00000000145BE924-00000000145BE9DD
void __cdecl HomeBalloonGallery::fillGalleryStopLog(
        HomeBalloonGallery *const this,
        proto::GalleryStopReason reason,
        uint32_t owner_uid,
        proto_log::PlayerLogBodyGalleryHomeStop *gallery_stop_log)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryHomeStop::set_score(gallery_stop_log, this->score_);
  if ( reason == GALLERY_STOP_TIMEUP )
  {
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_reason(gallery_stop_log, 1u);
  }
  else if ( reason == GALLERY_STOP_CLIENT_INTERRUPT )
  {
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_uid(gallery_stop_log, owner_uid);
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_reason(gallery_stop_log, 2u);
  }
  else
  {
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_reason(gallery_stop_log, 3u);
  }
};
