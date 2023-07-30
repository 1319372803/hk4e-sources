// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/crucible_activity.cpp

// Line 29: range 00000000165A4550-00000000165A46D5
int32_t __cdecl CrucibleActivity::fromScheduleBin(CrucibleActivity *const this, const proto::ActivityScheduleBin *bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  int v4; // eax
  google::protobuf::RepeatedPtrField<proto::CrucibleBattleUidBin>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrucibleBattleUidBin>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const proto::CrucibleScheduleBin *crucible_bin; // [rsp+28h] [rbp-28h]
  const google::protobuf::RepeatedPtrField<proto::CrucibleBattleUidBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::CrucibleBattleUidBin *uid_data; // [rsp+38h] [rbp-18h]

  crucible_bin = proto::ActivityScheduleBin::crucible_bin(bin);
  v2 = proto::CrucibleScheduleBin::cost_time(crucible_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time_);
  }
  this->cost_time_ = v2;
  v3 = proto::CrucibleScheduleBin::battle_world_level(crucible_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battle_world_level_);
  }
  this->battle_world_level_ = v3;
  std::vector<proto::CrucibleBattleUidBin>::clear(&this->battle_uid_data_vec_);
  v4 = proto::CrucibleScheduleBin::battle_uid_data_list_size(crucible_bin);
  std::vector<proto::CrucibleBattleUidBin>::reserve(&this->battle_uid_data_vec_, v4);
  __for_range = proto::CrucibleScheduleBin::battle_uid_data_list(crucible_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CrucibleBattleUidBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CrucibleBattleUidBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CrucibleBattleUidBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    uid_data = google::protobuf::internal::RepeatedPtrIterator<proto::CrucibleBattleUidBin const>::operator*(&__for_begin);
    std::vector<proto::CrucibleBattleUidBin>::push_back(&this->battle_uid_data_vec_, uid_data);
    google::protobuf::internal::RepeatedPtrIterator<proto::CrucibleBattleUidBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 44: range 00000000165A46D6-00000000165A481F
int32_t __cdecl CrucibleActivity::toScheduleBin(const CrucibleActivity *const this, proto::ActivityScheduleBin *bin)
{
  proto::CrucibleBattleUidBin *v2; // rax
  std::vector<proto::CrucibleBattleUidBin>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<proto::CrucibleBattleUidBin>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  proto::CrucibleScheduleBin *crucible_bin; // [rsp+28h] [rbp-18h]
  const std::vector<proto::CrucibleBattleUidBin> *__for_range; // [rsp+30h] [rbp-10h]
  const proto::CrucibleBattleUidBin *uid_data; // [rsp+38h] [rbp-8h]

  crucible_bin = proto::ActivityScheduleBin::mutable_crucible_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CrucibleScheduleBin::set_cost_time(crucible_bin, this->cost_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CrucibleScheduleBin::set_battle_world_level(crucible_bin, this->battle_world_level_);
  __for_range = &this->battle_uid_data_vec_;
  __for_begin._M_current = std::vector<proto::CrucibleBattleUidBin>::begin(&this->battle_uid_data_vec_)._M_current;
  __for_end._M_current = std::vector<proto::CrucibleBattleUidBin>::end(&this->battle_uid_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<proto::CrucibleBattleUidBin const*,std::vector<proto::CrucibleBattleUidBin>>(
            &__for_begin,
            &__for_end) )
  {
    uid_data = __gnu_cxx::__normal_iterator<proto::CrucibleBattleUidBin const*,std::vector<proto::CrucibleBattleUidBin>>::operator*(&__for_begin);
    v2 = proto::CrucibleScheduleBin::add_battle_uid_data_list(crucible_bin);
    proto::CrucibleBattleUidBin::operator=(v2, uid_data);
    __gnu_cxx::__normal_iterator<proto::CrucibleBattleUidBin const*,std::vector<proto::CrucibleBattleUidBin>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 56: range 00000000165A4820-00000000165A4D74
int32_t __cdecl CrucibleActivity::toClient(CrucibleActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t v6; // r14d
  google::protobuf::uint32 v7; // eax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const proto::ProfilePictureBin *v10; // rax
  google::protobuf::uint32 v11; // eax
  const proto::ProfilePictureBin *v12; // rax
  google::protobuf::uint32 v13; // eax
  uint32_t MpPlayComp; // eax
  BaseMpPlay *v15; // rax
  proto::Vector *v16; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<proto::CrucibleBattleUidBin>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<proto::CrucibleBattleUidBin>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  proto::CrucibleActivityDetailInfo *crucible_info; // [rsp+28h] [rbp-D8h]
  std::vector<proto::CrucibleBattleUidBin> *__for_range; // [rsp+30h] [rbp-D0h]
  const proto::CrucibleBattleUidBin *uid_data; // [rsp+38h] [rbp-C8h]
  proto::CrucibleBattleUidInfo *uid_info; // [rsp+40h] [rbp-C0h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 13 target_pos:82 64 16 14 mp_play_ptr:79";
  *(_QWORD *)(v2 + 16) = CrucibleActivity::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202178560;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crucible_activity.cpp",
      "toClient",
      59);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v26,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
  }
  else
  {
    crucible_info = proto::ActivityInfo::mutable_crucible_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::CrucibleActivityDetailInfo::set_cost_time(crucible_info, this->cost_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CrucibleActivityDetailInfo::set_battle_world_level(crucible_info, this->battle_world_level_);
    __for_range = &this->battle_uid_data_vec_;
    __for_begin._M_current = std::vector<proto::CrucibleBattleUidBin>::begin(&this->battle_uid_data_vec_)._M_current;
    __for_end._M_current = std::vector<proto::CrucibleBattleUidBin>::end(&this->battle_uid_data_vec_)._M_current;
    while ( __gnu_cxx::operator!=<proto::CrucibleBattleUidBin *,std::vector<proto::CrucibleBattleUidBin>>(
              &__for_begin,
              &__for_end) )
    {
      uid_data = __gnu_cxx::__normal_iterator<proto::CrucibleBattleUidBin *,std::vector<proto::CrucibleBattleUidBin>>::operator*(&__for_begin);
      uid_info = proto::CrucibleActivityDetailInfo::add_uid_info_list(crucible_info);
      v7 = proto::CrucibleBattleUidBin::uid(uid_data);
      proto::CrucibleBattleUidInfo::set_uid(uid_info, v7);
      v8 = proto::CrucibleBattleUidBin::nickname[abi:cxx11](uid_data);
      proto::CrucibleBattleUidInfo::set_nickname(uid_info, v8);
      v9 = proto::CrucibleBattleUidBin::online_id[abi:cxx11](uid_data);
      proto::CrucibleBattleUidInfo::set_online_id(uid_info, v9);
      profile_picture_proto = proto::CrucibleBattleUidInfo::mutable_profile_picture(uid_info);
      v10 = proto::CrucibleBattleUidBin::profile_picture_bin(uid_data);
      v11 = proto::ProfilePictureBin::avatar_id(v10);
      proto::ProfilePicture::set_avatar_id(profile_picture_proto, v11);
      v12 = proto::CrucibleBattleUidBin::profile_picture_bin(uid_data);
      v13 = proto::ProfilePictureBin::costume_id(v12);
      proto::ProfilePicture::set_costume_id(profile_picture_proto, v13);
      __gnu_cxx::__normal_iterator<proto::CrucibleBattleUidBin *,std::vector<proto::CrucibleBattleUidBin>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpPlayComp = (unsigned int)Player::getMpPlayComp(this->player_);
    PlayerMpPlayComp::findMpPlayPtrByType((PlayerMpPlayComp *const)(v2 + 64), MpPlayComp);
    if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v2 + 64), 0LL) )
    {
      Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
      v15 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BaseMpPlay::findTargetPos(v15, (Vector3 *)(v2 + 32));
      Vector3::operator proto::Vector((proto::Vector *)&v26, (const Vector3 *const)(v2 + 32));
      v16 = proto::CrucibleActivityDetailInfo::mutable_pos(crucible_info);
      proto::Vector::operator=(v16, (proto::Vector *)&v26);
      proto::Vector::~Vector((proto::Vector *const)&v26);
    }
    v6 = 0;
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 64));
  }
  result = v6;
  if ( v27 == (char *)v2 )
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

// Line 91: range 00000000165A4D76-00000000165A4DAB
int32_t __cdecl CrucibleActivity::init(CrucibleActivity *const this)
{
  if ( !BaseActivity::isSettled((const BaseActivity *const)this) )
    CrucibleActivity::initObserver(this);
  return 0;
};

// Line 101: range 00000000165A4DAC-00000000165A4DC6
void __cdecl CrucibleActivity::onStart(CrucibleActivity *const this)
{
  CrucibleActivity::initObserver(this);
};

// Line 106: range 00000000165A4DC8-00000000165A513A
void __cdecl CrucibleActivity::initObserver(CrucibleActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<CrucibleActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<CrucibleActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:107 64 16 12 this_wtr:108";
  *(_QWORD *)(v1 + 16) = CrucibleActivity::initObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<CrucibleActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<CrucibleActivity>::weak_ptr<CrucibleActivity,void>(
    (std::weak_ptr<CrucibleActivity> *const)(v1 + 64),
    (const std::shared_ptr<CrucibleActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<CrucibleActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<CrucibleActivity>::weak_ptr(
    (std::weak_ptr<CrucibleActivity> *const)&v7,
    (const std::weak_ptr<CrucibleActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<CrucibleActivity,MpPlayBattleSettleEvent>(
    (PlayerEventComp *const)&__r,
    p_this_wtr,
    (void (*)(CrucibleActivity *, const MpPlayBattleSettleEvent *))&v7);
  std::weak_ptr<Observer>::operator=(&this->settle_obs_wtr_, &__r);
  std::weak_ptr<Observer>::~weak_ptr(&__r);
  std::weak_ptr<CrucibleActivity>::~weak_ptr((std::weak_ptr<CrucibleActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<CrucibleActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<CrucibleActivity>::weak_ptr(
    (std::weak_ptr<CrucibleActivity> *const)&__r,
    (const std::weak_ptr<CrucibleActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<CrucibleActivity,SocialDetialEvent>(
    (PlayerEventComp *const)&v7,
    EventComp,
    (void (*)(CrucibleActivity *, const SocialDetialEvent *))&__r);
  std::weak_ptr<Observer>::operator=(&this->social_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
  std::weak_ptr<CrucibleActivity>::~weak_ptr((std::weak_ptr<CrucibleActivity> *const)&__r);
  std::weak_ptr<CrucibleActivity>::~weak_ptr((std::weak_ptr<CrucibleActivity> *const)(v1 + 64));
  std::shared_ptr<CrucibleActivity>::~shared_ptr((std::shared_ptr<CrucibleActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 115: range 00000000165A513C-00000000165A543B
void __cdecl CrucibleActivity::onSettle(CrucibleActivity *const this)
{
  std::shared_ptr<Scene> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *v4; // rax
  SceneBlockGroupComp *BlockGroupComp; // rcx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<Scene> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<Scene> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 scene_ptr:120";
  v1[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)CrucibleActivity::onSettle;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->settle_obs_wtr_);
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->social_obs_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( !std::operator!=<Scene>(v1 + 2, 0LL) )
    goto LABEL_11;
  v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
  BlockGroupComp = Scene::getBlockGroupComp(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( SceneBlockGroupComp::unloadActivitGroups(BlockGroupComp, this->activity_id_) )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crucible_activity.cpp",
      "onSettle",
      123);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v12,
           (const char (*)[40])"unloadActivitGroups fails, activity_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  std::shared_ptr<Scene>::~shared_ptr(v1 + 2);
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 128: range 00000000165A543C-00000000165A54EA
void __cdecl CrucibleActivity::onClear(CrucibleActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battle_world_level_);
  }
  this->battle_world_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time_);
  }
  this->cost_time_ = 0;
  std::vector<proto::CrucibleBattleUidBin>::clear(&this->battle_uid_data_vec_);
};

// Line 135: range 00000000165A54EC-00000000165A60A3
void __cdecl CrucibleActivity::onMpPlayBattleSettleEvent(
        CrucibleActivity *const this,
        const MpPlayBattleSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  uint32_t battle_world_level; // ecx
  uint32_t cost_time; // ecx
  char v10; // al
  uint32_t v11; // ecx
  uint32_t v12; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  const ProfilePicture *ProfilePicture; // rax
  _QWORD *v19; // rdx
  proto::ProfilePictureBin *v20; // rax
  Player *v21; // rax
  PlayerBasicComp *v22; // rax
  const std::string *v23; // rax
  Player *v24; // rax
  std::remove_reference<proto::CrucibleBattleUidBin&>::type *v25; // rax
  proto::CrucibleBattleUidBin *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-150h] BYREF
  char v36[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 7 uid:167 64 8 19 profile_picture:177 96 16 13 world_ptr:151 128 16 14 player_ptr:169 160"
                        " 56 11 uid_bin:175";
  *(_QWORD *)(v2 + 16) = CrucibleActivity::onMpPlayBattleSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&event->mp_play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->mp_play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( event->mp_play_type == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_win);
    }
    if ( event->is_win )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( event->cost_time )
      {
        if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crucible_activity.cpp",
            "onMpPlayBattleSettleEvent",
            148);
          v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v35, (const char (*)[13])"activity_id:");
          v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" not open");
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 96));
          if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/crucible_activity.cpp",
              "onMpPlayBattleSettleEvent",
              154);
            v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                   &v35,
                   (const char (*)[24])"getCurWorld fails, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
          else
          {
            if ( std::vector<proto::CrucibleBattleUidBin>::empty(&this->battle_uid_data_vec_) )
              goto LABEL_34;
            if ( *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            battle_world_level = event->battle_world_level;
            if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( battle_world_level > this->battle_world_level_ )
              goto LABEL_34;
            if ( event->battle_world_level != this->battle_world_level_ )
              goto LABEL_35;
            if ( *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            cost_time = event->cost_time;
            if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( cost_time < this->cost_time_ )
LABEL_34:
              v10 = 1;
            else
LABEL_35:
              v10 = 0;
            if ( v10 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v11 = event->battle_world_level;
              if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(&this->battle_world_level_);
              }
              this->battle_world_level_ = v11;
              if ( *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&event->cost_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v12 = event->cost_time;
              if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&this->cost_time_);
              }
              this->cost_time_ = v12;
              std::vector<proto::CrucibleBattleUidBin>::clear(&this->battle_uid_data_vec_);
              __for_range = &event->uid_vec;
              __for_begin._M_current = std::vector<unsigned int>::begin(&event->uid_vec)._M_current;
              __for_end._M_current = std::vector<unsigned int>::end(&event->uid_vec)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
              {
                v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 48) = *v13;
                v14 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                World::findPlayerPtr((World *const)(v2 + 128), v14);
                if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
                {
                  common::milog::MiLogStream::create(
                    &v35,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/crucible_activity.cpp",
                    "onMpPlayBattleSettleEvent",
                    172);
                  v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          &v35,
                          (const char (*)[26])"findPlayerPtr fails, uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v35);
                }
                else
                {
                  proto::CrucibleBattleUidBin::CrucibleBattleUidBin((proto::CrucibleBattleUidBin *const)(v2 + 160));
                  proto::CrucibleBattleUidBin::set_uid(
                    (proto::CrucibleBattleUidBin *const)(v2 + 160),
                    *(_DWORD *)(v2 + 48));
                  v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  BasicComp = Player::getBasicComp(v16);
                  ProfilePicture = PlayerBasicComp::getProfilePicture(BasicComp);
                  v19 = ProfilePicture;
                  if ( ((unsigned __int8)ProfilePicture & 7) >= *(_BYTE *)(((unsigned __int64)ProfilePicture >> 3)
                                                                         + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)ProfilePicture >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&ProfilePicture->costume_id + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)ProfilePicture + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&ProfilePicture->costume_id
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_load_n(ProfilePicture, 8LL);
                  }
                  *(_QWORD *)(v2 + 64) = *v19;
                  v20 = proto::CrucibleBattleUidBin::mutable_profile_picture_bin((proto::CrucibleBattleUidBin *const)(v2 + 160));
                  ProfilePicture::toBin((const ProfilePicture *const)(v2 + 64), v20);
                  v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  v22 = Player::getBasicComp(v21);
                  v23 = PlayerBasicComp::getNickName[abi:cxx11](v22);
                  proto::CrucibleBattleUidBin::set_nickname((proto::CrucibleBattleUidBin *const)(v2 + 160), v23);
                  v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  Player::getOnlineId[abi:cxx11]((std::string *)&v35, v24);
                  proto::CrucibleBattleUidBin::set_online_id(
                    (proto::CrucibleBattleUidBin *const)(v2 + 160),
                    (std::string *)&v35);
                  std::string::~string(&v35);
                  v25 = std::move<proto::CrucibleBattleUidBin &>((proto::CrucibleBattleUidBin *)(v2 + 160));
                  std::vector<proto::CrucibleBattleUidBin>::emplace_back<proto::CrucibleBattleUidBin>(
                    &this->battle_uid_data_vec_,
                    v25,
                    v26);
                  proto::CrucibleBattleUidBin::~CrucibleBattleUidBin((proto::CrucibleBattleUidBin *const)(v2 + 160));
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
              }
            }
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/crucible_activity.cpp",
              "onMpPlayBattleSettleEvent",
              184);
            v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v35,
                    (const char (*)[11])"cost_time:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &event->cost_time);
            v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v28,
                    (const char (*)[14])" world_level:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    &event->battle_world_level);
            v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int>(v31, &event->uid_vec);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crucible_activity.cpp",
          "onMpPlayBattleSettleEvent",
          143);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v35, (const char (*)[18])"cost_time is 0!!!");
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
    }
  }
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 188: range 00000000165A60A4-00000000165A61ED
void __cdecl CrucibleActivity::onSocialDetailEvent(CrucibleActivity *const this, const SocialDetialEvent *event)
{
  google::protobuf::uint32 v2; // ebx
  const std::string *v3; // rax
  const std::string *v4; // rax
  const proto::ProfilePicture *v5; // rax
  google::protobuf::uint32 v6; // eax
  const proto::ProfilePicture *v7; // rax
  google::protobuf::uint32 v8; // eax
  std::vector<proto::CrucibleBattleUidBin>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<proto::CrucibleBattleUidBin>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const proto::SocialDetail *detail_data; // [rsp+20h] [rbp-30h]
  std::vector<proto::CrucibleBattleUidBin> *__for_range; // [rsp+28h] [rbp-28h]
  proto::CrucibleBattleUidBin *uid_data_bin; // [rsp+30h] [rbp-20h]
  proto::ProfilePictureBin *profile_picture_bin; // [rsp+38h] [rbp-18h]

  detail_data = &event->detail_data;
  __for_range = &this->battle_uid_data_vec_;
  __for_begin._M_current = std::vector<proto::CrucibleBattleUidBin>::begin(&this->battle_uid_data_vec_)._M_current;
  __for_end._M_current = std::vector<proto::CrucibleBattleUidBin>::end(&this->battle_uid_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<proto::CrucibleBattleUidBin *,std::vector<proto::CrucibleBattleUidBin>>(
            &__for_begin,
            &__for_end) )
  {
    uid_data_bin = __gnu_cxx::__normal_iterator<proto::CrucibleBattleUidBin *,std::vector<proto::CrucibleBattleUidBin>>::operator*(&__for_begin);
    v2 = proto::CrucibleBattleUidBin::uid(uid_data_bin);
    if ( v2 == proto::SocialDetail::uid(detail_data) )
    {
      v3 = proto::SocialDetail::nickname[abi:cxx11](detail_data);
      proto::CrucibleBattleUidBin::set_nickname(uid_data_bin, v3);
      v4 = proto::SocialDetail::online_id[abi:cxx11](detail_data);
      proto::CrucibleBattleUidBin::set_online_id(uid_data_bin, v4);
      profile_picture_bin = proto::CrucibleBattleUidBin::mutable_profile_picture_bin(uid_data_bin);
      v5 = proto::SocialDetail::profile_picture(detail_data);
      v6 = proto::ProfilePicture::avatar_id(v5);
      proto::ProfilePictureBin::set_avatar_id(profile_picture_bin, v6);
      v7 = proto::SocialDetail::profile_picture(detail_data);
      v8 = proto::ProfilePicture::costume_id(v7);
      proto::ProfilePictureBin::set_costume_id(profile_picture_bin, v8);
    }
    __gnu_cxx::__normal_iterator<proto::CrucibleBattleUidBin *,std::vector<proto::CrucibleBattleUidBin>>::operator++(&__for_begin);
  }
};
