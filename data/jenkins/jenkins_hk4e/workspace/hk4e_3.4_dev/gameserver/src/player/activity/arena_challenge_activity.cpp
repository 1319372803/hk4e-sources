// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/arena_challenge_activity.cpp

// Line 32: range 000000001791A47C-000000001791A4F5
int32_t __cdecl ArenaChallengeActivity::fromScheduleBin(
        ArenaChallengeActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  bool is_finish_any_level; // cl
  const proto::ArenaChallengeSchduleBin *schedule_bin; // [rsp+18h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::arena_challenge_bin(bin);
  is_finish_any_level = proto::ArenaChallengeSchduleBin::is_finish_any_level(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish_any_level_);
  }
  this->is_finish_any_level_ = is_finish_any_level;
  return 0;
};

// Line 39: range 000000001791A4F6-000000001791A572
int32_t __cdecl ArenaChallengeActivity::toScheduleBin(
        const ArenaChallengeActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::ArenaChallengeSchduleBin *schedule_bin; // [rsp+18h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_arena_challenge_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish_any_level_);
  }
  proto::ArenaChallengeSchduleBin::set_is_finish_any_level(schedule_bin, this->is_finish_any_level_);
  return 0;
};

// Line 47: range 000000001791A574-000000001791AC4A
int32_t __cdecl ArenaChallengeActivity::toClient(
        ArenaChallengeActivity *const this,
        proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t result; // eax
  uint32_t StartWorldLevelLimit; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  uint32_t LevelOpenTime; // r13d
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  proto::ArenaChallengeActivityDetailInfo *info; // [rsp+40h] [rbp-F0h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>> *arena_challenge_config_map; // [rsp+48h] [rbp-E8h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_level_open_time_map; // [rsp+50h] [rbp-E0h]
  const std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> *__for_range; // [rsp+58h] [rbp-D8h]
  const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > *v23; // [rsp+60h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *arena_challenge_id; // [rsp+68h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *arena_challenge_level_config_map; // [rsp+70h] [rbp-C0h]
  const std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> *__for_range_0; // [rsp+78h] [rbp-B8h]
  const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> *v27; // [rsp+80h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::type *_; // [rsp+88h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::type *config; // [rsp+90h] [rbp-A0h]
  proto::ArenaChallengeMonsterLevel *proto_level; // [rsp+98h] [rbp-98h]
  std::shared_ptr<Config> v31; // [rsp+A0h] [rbp-90h] BYREF
  common::milog::MiLogStream v32; // [rsp+B0h] [rbp-80h] BYREF
  char v33[96]; // [rsp+D0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:56";
  *(_QWORD *)(v2 + 16) = ArenaChallengeActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/arena_challenge_activity.cpp",
      "toClient",
      50);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v32,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_arena_challenge_info(activity_info);
    StartWorldLevelLimit = BaseActivity::getStartWorldLevelLimit((const BaseActivity *const)this);
    proto::ArenaChallengeActivityDetailInfo::set_world_level(info, StartWorldLevelLimit);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    arena_challenge_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.activity_arena_challenge_config_mgr.arena_challenge_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v31);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::find(arena_challenge_config_map, &this->schedule_id_);
    __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Base_ptr)std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::end(arena_challenge_config_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v2 + 32),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/arena_challenge_activity.cpp",
        "toClient",
        59);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v32, (const char (*)[13])"schedule_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->schedule_id_);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v9,
              (const char (*)[46])" not in arena_challenge_config_map, activity:");
      common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = -1;
    }
    else
    {
      proto_level_open_time_map = proto::ArenaChallengeActivityDetailInfo::mutable_level_open_time_map(info);
      __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false,false> *const)(v2 + 32))->second;
      __for_begin._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false>(
                &__for_begin,
                &__for_end) )
      {
        v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator*(&__for_begin);
        arena_challenge_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>(v23);
        arena_challenge_level_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>(v23);
        __for_range_0 = arena_challenge_level_config_map;
        __for_begin_0._M_node = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::begin(arena_challenge_level_config_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig>>::operator*(&__for_begin_0);
          _ = std::get<0ul,unsigned int const,data::ActivityArenaChallengeExcelConfig>(v27);
          config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityArenaChallengeExcelConfig>(v27);
          if ( *(char *)(((unsigned __int64)&config->is_extra_level >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&config->is_extra_level);
          if ( !config->is_extra_level )
          {
            proto_level = proto::ArenaChallengeActivityDetailInfo::add_level_list(info);
            if ( *(_BYTE *)(((unsigned __int64)&config->arena_challenge_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->arena_challenge_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto::ArenaChallengeMonsterLevel::set_arena_challenge_id(proto_level, config->arena_challenge_id);
            if ( *(_BYTE *)(((unsigned __int64)&config->arena_challenge_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->arena_challenge_level >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::ArenaChallengeMonsterLevel::set_arena_challenge_level(proto_level, config->arena_challenge_level);
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig>>::operator++(&__for_begin_0);
        }
        if ( *(_BYTE *)(((unsigned __int64)arena_challenge_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)arena_challenge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)arena_challenge_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        LevelOpenTime = ArenaChallengeActivity::getLevelOpenTime(this, *arena_challenge_id);
        v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                proto_level_open_time_map,
                arena_challenge_id);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v12);
        }
        *v13 = LevelOpenTime;
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_finish_any_level_);
      }
      proto::ArenaChallengeActivityDetailInfo::set_is_finish_any_level(info, this->is_finish_any_level_);
      result = 0;
    }
  }
  if ( v33 == (char *)v2 )
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

// Line 82: range 000000001791AC4C-000000001791AC87
void __cdecl ArenaChallengeActivity::onLogin(ArenaChallengeActivity *const this)
{
  BaseActivity::onLogin((BaseActivity *const)this);
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    ArenaChallengeActivity::tryDestroyGalleryOnChallengeFinishOrLogin(this);
};

// Line 92: range 000000001791AC88-000000001791ACBC
void __cdecl ArenaChallengeActivity::onDailyRefresh(ArenaChallengeActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    BaseActivity::notifyClientData((BaseActivity *const)this, 1);
};

// Line 100: range 000000001791ACBE-000000001791AD6D
void __cdecl ArenaChallengeActivity::onPreStart(ArenaChallengeActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/arena_challenge_activity.cpp",
    "onPreStart",
    101);
  v1 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v4,
         (const char (*)[25])"start world level limit:");
  val = BaseActivity::getStartWorldLevelLimit((const BaseActivity *const)this);
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v2, this);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 105: range 000000001791AD6E-000000001791AD88
void __cdecl ArenaChallengeActivity::onSettle(ArenaChallengeActivity *const this)
{
  ArenaChallengeActivity::tryDestroyGalleryOnChallengeFinishOrLogin(this);
};

// Line 111: range 000000001791AD8A-000000001791BEF7
__int64 __fastcall ArenaChallengeActivity::startArenaChallengeLevel(
        ArenaChallengeActivity *const this,
        uint32_t gadget_entity_id,
        uint32_t arena_challenge_id,
        uint32_t arena_challenge_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerSceneComp *SceneComp; // rax
  unsigned int v8; // r14d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v10; // rbx
  const ActivityArenaChallengeExcelConfigMgr *p_activity_arena_challenge_config_mgr; // rdi
  uint32_t v12; // ecx
  uint32_t v13; // esi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  time_t Now; // r14
  const ActivityArenaChallengeExcelConfigMgr *p_schedule_id; // rdi
  uint32_t v24; // ecx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  uint32_t *v30; // rdx
  common::milog::MiLogStream *v31; // r14
  bool v32; // r14
  uint32_t v33; // eax
  common::milog::MiLogStream *v34; // rax
  Scene *v35; // rax
  Scene *v36; // rax
  SceneGalleryComp *GalleryComp; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  Scene *v41; // rax
  SceneGalleryComp *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  Scene *v49; // rax
  uint32_t v50; // eax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  ArenaChallengeGallery *v54; // r15
  uint32_t v55; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  uint32_t ConfigId; // eax
  common::milog::MiLogStream *v58; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  __int64 result; // rax
  uint32_t arena_challenge_ida; // [rsp+14h] [rbp-1CCh]
  uint32_t uid; // [rsp+18h] [rbp-1C8h]
  unsigned int val; // [rsp+38h] [rbp-1A8h] BYREF
  uint32_t normal_challenge_watcher_id; // [rsp+3Ch] [rbp-1A4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-198h] BYREF
  const data::ActivityArenaChallengeExcelConfig *config_ptr; // [rsp+50h] [rbp-190h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+58h] [rbp-188h]
  const std::vector<unsigned int> *normal_challenge_watcher_list_ptr; // [rsp+60h] [rbp-180h]
  const std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-178h]
  common::milog::MiLogStream v78; // [rsp+70h] [rbp-170h] BYREF
  char v79[336]; // [rsp+90h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 14 gallery_id:129 64 4 20 gadget_entity_id:110 80 4 22 arena_challenge_id:110 96 4 25 are"
                        "na_challenge_level:110 112 16 13 scene_ptr:162 144 16 14 gadget_ptr:174 176 16 15 gallery_ptr:19"
                        "6 208 48 11 uid_set:181";
  *(_QWORD *)(v4 + 16) = ArenaChallengeActivity::startArenaChallengeLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 64) = gadget_entity_id;
  *(_DWORD *)(v4 + 80) = arena_challenge_id;
  *(_DWORD *)(v4 + 96) = arena_challenge_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/arena_challenge_activity.cpp",
      "startArenaChallengeLevel",
      114);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v78,
      (const char (*)[36])"[ARENA_CHALLENGE] not in self world");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v8 = 512;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/arena_challenge_activity.cpp",
      "startArenaChallengeLevel",
      120);
    v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            &v78,
            (const char (*)[53])"[ARENA_CHALLENGE] should not start in mp mode, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v78);
    v8 = 1202;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 176));
    p_activity_arena_challenge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176))->design_config.txt_config_mgr.activity_arena_challenge_config_mgr;
    v12 = *(_DWORD *)(v4 + 96);
    v13 = *(_DWORD *)(v4 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      p_activity_arena_challenge_config_mgr = (const ActivityArenaChallengeExcelConfigMgr *)&this->schedule_id_;
      __asan_report_load4();
    }
    config_ptr = ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByIdAndLevel(
                   p_activity_arena_challenge_config_mgr,
                   this->schedule_id_,
                   v13,
                   v12);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 176));
    if ( !config_ptr )
    {
      v8 = 5;
      goto LABEL_61;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->gallery_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 48) = config_ptr->gallery_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 176));
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           &v14->design_config.txt_config_mgr.gallery_config_mgr,
                           *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 176));
    if ( !gallery_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/arena_challenge_activity.cpp",
        "startArenaChallengeLevel",
        133);
      v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v78,
              (const char (*)[41])"findGalleryExcelConfig fail, gallery_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v16,
              (const char (*)[21])" arena_challenge_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 80));
      v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v18,
              (const char (*)[24])" arena_challenge_level:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 96));
      v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v21, this);
      common::milog::MiLogStream::~MiLogStream(&v78);
      v8 = 5;
      goto LABEL_61;
    }
    Now = common::tools::TimeUtils::getNow();
    if ( Now < ArenaChallengeActivity::getLevelOpenTime(this, *(_DWORD *)(v4 + 80)) )
    {
      v8 = -1;
      goto LABEL_61;
    }
    if ( *(char *)(((unsigned __int64)&config_ptr->is_extra_level >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config_ptr->is_extra_level);
    if ( config_ptr->is_extra_level )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 176));
      p_schedule_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176))->design_config.txt_config_mgr.activity_arena_challenge_config_mgr;
      v24 = *(_DWORD *)(v4 + 80);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        p_schedule_id = (const ActivityArenaChallengeExcelConfigMgr *)&this->schedule_id_;
        __asan_report_load4();
      }
      normal_challenge_watcher_list_ptr = ActivityArenaChallengeExcelConfigMgr::findNormalChallengeWatcherList(
                                            p_schedule_id,
                                            this->schedule_id_,
                                            v24);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 176));
      if ( !normal_challenge_watcher_list_ptr )
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/arena_challenge_activity.cpp",
          "startArenaChallengeLevel",
          149);
        v25 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v78,
                (const char (*)[50])"findNormalChallengeWatcherList fail, schedule_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->schedule_id_);
        v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v26,
                (const char (*)[21])" arena_challenge_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v4 + 80));
        v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" activity:");
        common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v29, this);
        common::milog::MiLogStream::~MiLogStream(&v78);
        v8 = 5;
        goto LABEL_61;
      }
      __for_range = normal_challenge_watcher_list_ptr;
      __for_begin._M_current = std::vector<unsigned int>::begin(normal_challenge_watcher_list_ptr)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(normal_challenge_watcher_list_ptr)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v30 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        normal_challenge_watcher_id = *v30;
        if ( !BaseActivity::isWatcherFinished((const BaseActivity *const)this, normal_challenge_watcher_id) )
        {
          v8 = -1;
          goto LABEL_61;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v4 + 176));
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
      (std::shared_ptr<Scene> *const)(v4 + 112),
      (std::shared_ptr<PlayerWorldScene> *)(v4 + 176));
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v4 + 176));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/arena_challenge_activity.cpp",
        "startArenaChallengeLevel",
        165);
      v31 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v78,
              (const char (*)[62])"[ARENA_CHALLENGE] getCurScene<PlayerWorldScene> failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
      common::milog::MiLogStream::~MiLogStream(&v78);
      v8 = -1;
    }
    else
    {
      std::weak_ptr<ArenaChallengeGallery>::lock((const std::weak_ptr<ArenaChallengeGallery> *const)(v4 + 176));
      v32 = std::operator!=<ArenaChallengeGallery>(0LL, (const std::shared_ptr<ArenaChallengeGallery> *)(v4 + 176));
      std::shared_ptr<ArenaChallengeGallery>::~shared_ptr((std::shared_ptr<ArenaChallengeGallery> *const)(v4 + 176));
      if ( v32 )
      {
        v8 = 900;
      }
      else
      {
        v33 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        Scene::findEntity<Gadget>((const Scene *const)(v4 + 144), v33);
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/arena_challenge_activity.cpp",
            "startArenaChallengeLevel",
            177);
          v34 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v78,
                  (const char (*)[48])"[ARENA_CHALLENGE] findEntity failed, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v78);
          v8 = 504;
        }
        else
        {
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 208));
          v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          Scene::getPlayerUidSet(v35, (std::set<unsigned int> *)(v4 + 208));
          v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          GalleryComp = Scene::getGalleryComp(v36);
          if ( SceneGalleryComp::initGallery(
                 GalleryComp,
                 *(_DWORD *)(v4 + 48),
                 (const std::set<unsigned int> *)(v4 + 208)) )
          {
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/arena_challenge_activity.cpp",
              "startArenaChallengeLevel",
              186);
            v38 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v78,
                    (const char (*)[30])"initGallery fail, gallery_id:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v4 + 48));
            v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])" activity:");
            common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v40, this);
            common::milog::MiLogStream::~MiLogStream(&v78);
            v8 = -1;
          }
          else
          {
            v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
            v42 = Scene::getGalleryComp(v41);
            if ( SceneGalleryComp::startGallery(v42, *(_DWORD *)(v4 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/arena_challenge_activity.cpp",
                "startArenaChallengeLevel",
                191);
              v43 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v78,
                      (const char (*)[31])"startGallery fail, gallery_id:");
              v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v43,
                      (const unsigned int *)(v4 + 48));
              v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v44,
                      (const char (*)[11])" activity:");
              common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v45, this);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v8 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/arena_challenge_activity.cpp",
                "startArenaChallengeLevel",
                194);
              v46 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      &v78,
                      (const char (*)[13])"initGallery:");
              v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v46,
                      (const unsigned int *)(v4 + 48));
              v48 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v47,
                      (const char (*)[11])" activity:");
              common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v48, this);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v49 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              v50 = (unsigned int)Scene::getGalleryComp(v49);
              SceneGalleryComp::findGallery<ArenaChallengeGallery>((SceneGalleryComp *const)(v4 + 176), v50);
              if ( std::operator==<ArenaChallengeGallery>(
                     0LL,
                     (const std::shared_ptr<ArenaChallengeGallery> *)(v4 + 176)) )
              {
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/arena_challenge_activity.cpp",
                  "startArenaChallengeLevel",
                  199);
                v51 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        &v78,
                        (const char (*)[30])"findGallery fail, gallery_id:");
                v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v51,
                        (const unsigned int *)(v4 + 48));
                v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v52,
                        (const char (*)[11])" activity:");
                common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v53, this);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v8 = -1;
              }
              else
              {
                std::weak_ptr<ArenaChallengeGallery>::operator=<ArenaChallengeGallery>(
                  &this->current_gallery_wtr_,
                  (const std::shared_ptr<ArenaChallengeGallery> *)(v4 + 176));
                v54 = std::__shared_ptr_access<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                uid = Player::getUid(this->player_);
                arena_challenge_ida = *(_DWORD *)(v4 + 80);
                v55 = *(_DWORD *)(v4 + 96);
                v56 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                ConfigId = Entity::getConfigId((const Entity *const)v56);
                ArenaChallengeGallery::notifySelectDifficultyEvent(
                  v54,
                  *(_DWORD *)(v4 + 64),
                  ConfigId,
                  v55,
                  arena_challenge_ida,
                  uid);
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/arena_challenge_activity.cpp",
                  "startArenaChallengeLevel",
                  206);
                v58 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        &v78,
                        (const char (*)[33])"EVENT_SELECT_DIFFICULTY, gadget:");
                v59 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                v60 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v58, v59);
                v61 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v60, (const char (*)[8])" level:");
                v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v61,
                        (const unsigned int *)(v4 + 96));
                v63 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v62,
                        (const char (*)[11])" activity:");
                common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v63, this);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v8 = 0;
              }
              std::shared_ptr<ArenaChallengeGallery>::~shared_ptr((std::shared_ptr<ArenaChallengeGallery> *const)(v4 + 176));
            }
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 208));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 144));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 112));
  }
LABEL_61:
  result = v8;
  if ( v79 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 213: range 000000001791BEF8-000000001791C63D
void __fastcall ArenaChallengeActivity::onWatcherFinish(ArenaChallengeActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  const ActivityArenaChallengeExcelConfigMgr *p_activity_arena_challenge_config_mgr; // rdi
  uint32_t v13; // ecx
  uint32_t v14; // esi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  PlayerWatcherComp *WatcherComp; // rax
  const data::ActivityArenaChallengeExcelConfig *config_ptr; // [rsp+10h] [rbp-110h]
  const data::ActivityArenaChallengeExcelConfig *prev_level_config_ptr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v26; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 22 arena_challenge_id:229 64 4 9 level:230 80 4 19 prev_watcher_id:238 96 4 14 watcher_id:212";
  *(_QWORD *)(v2 + 16) = ArenaChallengeActivity::onWatcherFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  *(_DWORD *)(v2 + 96) = watcher_id;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->finished_watcher_id_set_,
          (const unsigned int *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/arena_challenge_activity.cpp",
      "onWatcherFinish",
      216);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v27, (const char (*)[12])"watcher_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 96));
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v6,
           (const char (*)[25])" not finished! activity:");
    BaseActivity::toString[abi:cxx11](&val, (const BaseActivity *const)this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    config_ptr = ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByWatcherId(
                   &v8->design_config.txt_config_mgr.activity_arena_challenge_config_mgr,
                   *(_DWORD *)(v2 + 96));
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&config_ptr->is_extra_level >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config_ptr->is_extra_level);
      if ( !config_ptr->is_extra_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->arena_challenge_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->arena_challenge_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = config_ptr->arena_challenge_id;
        for ( *(_DWORD *)(v2 + 64) = 1; ; ++*(_DWORD *)(v2 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->arena_challenge_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->arena_challenge_level >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( config_ptr->arena_challenge_level <= *(_DWORD *)(v2 + 64) )
            break;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          p_activity_arena_challenge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_arena_challenge_config_mgr;
          v13 = *(_DWORD *)(v2 + 64);
          v14 = *(_DWORD *)(v2 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            p_activity_arena_challenge_config_mgr = (const ActivityArenaChallengeExcelConfigMgr *)&this->schedule_id_;
            __asan_report_load4();
          }
          prev_level_config_ptr = ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByIdAndLevel(
                                    p_activity_arena_challenge_config_mgr,
                                    this->schedule_id_,
                                    v14,
                                    v13);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          if ( prev_level_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&prev_level_config_ptr->watcher_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)prev_level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prev_level_config_ptr->watcher_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 80) = prev_level_config_ptr->watcher_id;
            if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                    &this->finished_watcher_id_set_,
                    (const unsigned int *)(v2 + 80)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              WatcherComp = Player::getWatcherComp(this->player_);
              PlayerWatcherComp::tryAddWatcherProgress(WatcherComp, *(_DWORD *)(v2 + 80), 1u);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/arena_challenge_activity.cpp",
              "onWatcherFinish",
              235);
            v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v27,
                    (const char (*)[56])"findArenaChallengeConfigByIdAndLevel fail, schedule_id:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->schedule_id_);
            v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v16,
                    (const char (*)[21])" arena_challenge_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" level:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 64));
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" activity:");
            BaseActivity::toString[abi:cxx11](&val, (const BaseActivity *const)this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/arena_challenge_activity.cpp",
        "onWatcherFinish",
        222);
      v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v27,
             (const char (*)[54])"findArenaChallengeConfigByWatcherId fail, watcher_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 96));
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" activity:");
      BaseActivity::toString[abi:cxx11](&val, (const BaseActivity *const)this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  if ( v29 == (char *)v2 )
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

// Line 248: range 000000001791C63E-000000001791CB06
void __cdecl ArenaChallengeActivity::onChallengeFinishEvent(
        ArenaChallengeActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const ActivityArenaChallengeExcelConfigMgr *p_activity_arena_challenge_config_mgr; // rdi
  uint32_t challenge_index; // ecx
  uint32_t group_id; // edx
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::shared_ptr<Config> v19; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 schedule_id:249 48 4 22 arena_challenge_id:250 64 4 25 arena_challenge_level:251";
  *(_QWORD *)(v2 + 16) = ArenaChallengeActivity::onChallengeFinishEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_activity_arena_challenge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_arena_challenge_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_arena_challenge_config_mgr = (const ActivityArenaChallengeExcelConfigMgr *)&event->challenge_index;
    __asan_report_load4();
  }
  challenge_index = event->challenge_index;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_arena_challenge_config_mgr = (const ActivityArenaChallengeExcelConfigMgr *)&event->group_id;
    __asan_report_load4();
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_arena_challenge_config_mgr = (const ActivityArenaChallengeExcelConfigMgr *)&event->scene_id;
    __asan_report_load4();
  }
  v8 = ActivityArenaChallengeExcelConfigMgr::findLevelByChallengeIndex(
         p_activity_arena_challenge_config_mgr,
         event->scene_id,
         group_id,
         challenge_index,
         (uint32_t *)(v2 + 32),
         (uint32_t *)(v2 + 48),
         (uint32_t *)(v2 + 64)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( !v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->schedule_id_ == *(_DWORD *)(v2 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&event->is_success);
      }
      if ( event->is_success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_finish_any_level_);
        }
        if ( !this->is_finish_any_level_ )
        {
          this->is_finish_any_level_ = 1;
          BaseActivity::updateAllConds((BaseActivity *const)this);
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        }
      }
      ArenaChallengeActivity::notifyArenaChallengeFinish(this, event, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64));
      ArenaChallengeActivity::tryDestroyGalleryOnChallengeFinishOrLogin(this);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/arena_challenge_activity.cpp",
        "onChallengeFinishEvent",
        258);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v20,
             (const char (*)[33])"schedule_id not match! scene_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->scene_id);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" group_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->group_id);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v12,
              (const char (*)[18])" challenge_index:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->challenge_index);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" schedule_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v17, this);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
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

// Line 273: range 000000001791CB08-000000001791CF56
void __cdecl ArenaChallengeActivity::notifyArenaChallengeFinish(
        const ArenaChallengeActivity *const this,
        const ChallengeFinishEvent *event,
        uint32_t arena_challenge_id,
        uint32_t arena_challenge_level)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<ChallengeFinishEvent::ChildChallengeInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<ChallengeFinishEvent::ChildChallengeInfo>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::vector<ChallengeFinishEvent::ChildChallengeInfo> *__for_range; // [rsp+38h] [rbp-B8h]
  const ChallengeFinishEvent::ChildChallengeInfo *child_info; // [rsp+40h] [rbp-B0h]
  proto::ArenaChallengeChildChallengeInfo *proto_child_info; // [rsp+48h] [rbp-A8h]
  char v14[160]; // [rsp+50h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 56 10 notify:274";
  *(_QWORD *)(v4 + 16) = ArenaChallengeActivity::notifyArenaChallengeFinish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  proto::ArenaChallengeFinishNotify::ArenaChallengeFinishNotify((proto::ArenaChallengeFinishNotify *const)(v4 + 32));
  proto::ArenaChallengeFinishNotify::set_arena_challenge_id(
    (proto::ArenaChallengeFinishNotify *const)(v4 + 32),
    arena_challenge_id);
  proto::ArenaChallengeFinishNotify::set_arena_challenge_level(
    (proto::ArenaChallengeFinishNotify *const)(v4 + 32),
    arena_challenge_level);
  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  proto::ArenaChallengeFinishNotify::set_is_success(
    (proto::ArenaChallengeFinishNotify *const)(v4 + 32),
    event->is_success);
  __for_range = &event->child_challenge_vec;
  __for_begin._M_current = std::vector<ChallengeFinishEvent::ChildChallengeInfo>::begin(&event->child_challenge_vec)._M_current;
  __for_end._M_current = std::vector<ChallengeFinishEvent::ChildChallengeInfo>::end(&event->child_challenge_vec)._M_current;
  while ( __gnu_cxx::operator!=<ChallengeFinishEvent::ChildChallengeInfo const*,std::vector<ChallengeFinishEvent::ChildChallengeInfo>>(
            &__for_begin,
            &__for_end) )
  {
    child_info = __gnu_cxx::__normal_iterator<ChallengeFinishEvent::ChildChallengeInfo const*,std::vector<ChallengeFinishEvent::ChildChallengeInfo>>::operator*(&__for_begin);
    proto_child_info = proto::ArenaChallengeFinishNotify::add_child_challenge_list((proto::ArenaChallengeFinishNotify *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)child_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)child_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ArenaChallengeChildChallengeInfo::set_challenge_index(proto_child_info, child_info->challenge_index);
    if ( *(_BYTE *)(((unsigned __int64)&child_info->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)child_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_info->challenge_id >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ArenaChallengeChildChallengeInfo::set_challenge_id(proto_child_info, child_info->challenge_id);
    if ( *(_BYTE *)(((unsigned __int64)&child_info->challenge_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)child_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_info->challenge_type >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ArenaChallengeChildChallengeInfo::set_challenge_type(proto_child_info, child_info->challenge_type);
    if ( *(_BYTE *)(((unsigned __int64)&child_info->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)child_info + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&child_info->is_success >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&child_info->is_success);
    }
    proto::ArenaChallengeChildChallengeInfo::set_is_success(proto_child_info, child_info->is_success);
    if ( *(_BYTE *)(((unsigned __int64)&child_info->is_settled >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)child_info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&child_info->is_settled >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&child_info->is_settled);
    }
    proto::ArenaChallengeChildChallengeInfo::set_is_settled(proto_child_info, child_info->is_settled);
    __gnu_cxx::__normal_iterator<ChallengeFinishEvent::ChildChallengeInfo const*,std::vector<ChallengeFinishEvent::ChildChallengeInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 32));
  proto::ArenaChallengeFinishNotify::~ArenaChallengeFinishNotify((proto::ArenaChallengeFinishNotify *const)(v4 + 32));
  if ( v14 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 291: range 000000001791CF58-000000001791D4BB
void __cdecl ArenaChallengeActivity::tryDestroyGalleryOnChallengeFinishOrLogin(ArenaChallengeActivity *const this)
{
  unsigned __int64 p_M_left; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Scene *v6; // rax
  uint32_t GalleryComp; // eax
  bool v8; // r14
  Scene *v9; // rax
  SceneGalleryComp *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  SceneGalleryComp __r; // [rsp+10h] [rbp-E0h] BYREF

  p_M_left = (unsigned __int64)&__r.scene_gallery_map_._M_t._M_impl._M_header._M_left;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      p_M_left = v2;
  }
  *(_QWORD *)p_M_left = 1102416563LL;
  *(_QWORD *)(p_M_left + 8) = "3 48 4 30 arena_challenge_gallery_id:298 64 16 13 scene_ptr:292 96 16 15 gallery_ptr:299";
  *(_QWORD *)(p_M_left + 16) = ArenaChallengeActivity::tryDestroyGalleryOnChallengeFinishOrLogin;
  v3 = (_DWORD *)(p_M_left >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
    (std::shared_ptr<Scene> *const)(p_M_left + 64),
    (std::shared_ptr<PlayerWorldScene> *)&__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)&__r);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(p_M_left + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__r.is_enable_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/arena_challenge_activity.cpp",
      "tryDestroyGalleryOnChallengeFinishOrLogin",
      295);
    v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&__r.is_enable_,
           (const char (*)[32])"getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(p_M_left + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(p_M_left + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r.is_enable_);
  }
  else
  {
    *(_DWORD *)(p_M_left + 48) = 0;
    std::weak_ptr<ArenaChallengeGallery>::lock((const std::weak_ptr<ArenaChallengeGallery> *const)(p_M_left + 96));
    if ( !std::operator==<ArenaChallengeGallery>(0LL, (const std::shared_ptr<ArenaChallengeGallery> *)(p_M_left + 96)) )
    {
      v5 = std::__shared_ptr_access<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_left + 96));
      *(_DWORD *)(p_M_left + 48) = BaseGallery::getGalleryId(v5);
      std::__weak_ptr<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2>::reset(&this->current_gallery_wtr_);
      std::__shared_ptr<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2> *const)(p_M_left + 96));
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_left + 64));
      GalleryComp = (unsigned int)Scene::getGalleryComp(v6);
      SceneGalleryComp::findGallery(&__r, GalleryComp);
      v8 = std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)&__r);
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)&__r);
      if ( !v8 )
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_left + 64));
        v10 = Scene::getGalleryComp(v9);
        if ( SceneGalleryComp::forceStopAndClearGallery(v10, *(_DWORD *)(p_M_left + 48), 0, GALLERY_STOP_NONE) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__r.is_enable_,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/arena_challenge_activity.cpp",
            "tryDestroyGalleryOnChallengeFinishOrLogin",
            313);
          v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  (common::milog::MiLogStream *const)&__r.is_enable_,
                  (const char (*)[59])"forceStopAndClearGallery fail, arena_challenge_gallery_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(p_M_left + 48));
          v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14 = operator<<(v13, this->player_);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" activity:");
          common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v15, this);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r.is_enable_);
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__r.is_enable_,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/arena_challenge_activity.cpp",
            "tryDestroyGalleryOnChallengeFinishOrLogin",
            316);
          v16 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)&__r.is_enable_,
                  (const char (*)[26])"forceStopAndClearGallery:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(p_M_left + 48));
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" activity:");
          common::milog::MiLogStream::operator<<<ArenaChallengeActivity,(ArenaChallengeActivity*)0>(v18, this);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r.is_enable_);
        }
      }
    }
    std::shared_ptr<ArenaChallengeGallery>::~shared_ptr((std::shared_ptr<ArenaChallengeGallery> *const)(p_M_left + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(p_M_left + 64));
  if ( &__r.scene_gallery_map_._M_t._M_impl._M_header._M_left == (std::_Rb_tree_node_base::_Base_ptr *)p_M_left )
  {
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_left = 1172321806LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 321: range 000000001791D4BC-000000001791D51A
uint32_t __cdecl ArenaChallengeActivity::getLevelOpenTime(
        const ArenaChallengeActivity *const this,
        uint32_t arena_challenge_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, arena_challenge_id);
};

// Line 326: range 000000001791D51C-000000001791D5C6
bool __cdecl ArenaChallengeActivity::checkCondIsMeet(
        ArenaChallengeActivity *const this,
        const data::NewActivityCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_FINISH_ANY_ARENA_CHALLENGE_LEVEL )
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish_any_level_);
  }
  return this->is_finish_any_level_;
};

// Line 340: range 000000001791D5C8-000000001791D61B
void __cdecl ArenaChallengeActivity::onClear(ArenaChallengeActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish_any_level_);
  }
  this->is_finish_any_level_ = 0;
};
