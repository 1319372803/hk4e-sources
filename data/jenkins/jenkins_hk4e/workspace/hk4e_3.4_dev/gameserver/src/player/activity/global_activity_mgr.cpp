// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/global_activity_mgr.cpp

// Line 24: range 000000001508AF96-000000001508B053
void __cdecl GlobalActivityMgr::GlobalActivityMgr(GlobalActivityMgr *const this, GlobalActivityMgr *a2)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  std::unordered_set<unsigned int>::unordered_set(&this->annoucne_config_id_set_);
  std::unordered_map<unsigned int,data::RedPointConfig>::unordered_map(&this->red_point_config_map_);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/activity/global_activity_mgr.cpp",
    "GlobalActivityMgr",
    26);
  common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(&v2, (const char (*)[56])off_256F13A0);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 30: range 000000001508B054-000000001508B429
int32_t __cdecl GlobalActivityMgr::onStart(GlobalActivityMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  const data::AnnounceConfig *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::unordered_map<unsigned int,data::RedPointConfig> *RedPointConfigMap; // rax
  int32_t result; // eax
  uint32_t now; // [rsp+14h] [rbp-23Ch]
  std::vector<data::AnnounceConfig>::iterator __for_begin; // [rsp+18h] [rbp-238h] BYREF
  std::vector<data::AnnounceConfig>::iterator __for_end; // [rsp+20h] [rbp-230h] BYREF
  std::vector<data::AnnounceConfig> *__for_range; // [rsp+28h] [rbp-228h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-220h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-210h] BYREF
  char v16[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 22 announce_config_vec:33 112 272 9 config:34";
  *(_QWORD *)(v1 + 16) = GlobalActivityMgr::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862732] = -202116109;
  v3[536862733] = -202116109;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  DbLocalConfigMgr::findActiveAnnounceConfig(
    (std::vector<data::AnnounceConfig> *)(v1 + 48),
    &v4->design_config.db_config_mgr.db_local_config_mgr,
    now);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  __for_range = (std::vector<data::AnnounceConfig> *)(v1 + 48);
  __for_begin._M_current = std::vector<data::AnnounceConfig>::begin((std::vector<data::AnnounceConfig> *const)(v1 + 48))._M_current;
  __for_end._M_current = std::vector<data::AnnounceConfig>::end((std::vector<data::AnnounceConfig> *const)(v1 + 48))._M_current;
  while ( __gnu_cxx::operator!=<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>::operator*(&__for_begin);
    data::AnnounceConfig::AnnounceConfig((data::AnnounceConfig *const)(v1 + 112), v5);
    std::unordered_set<unsigned int>::insert(
      &this->annoucne_config_id_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v1 + 112));
    data::AnnounceConfig::~AnnounceConfig((data::AnnounceConfig *const)(v1 + 112));
    __gnu_cxx::__normal_iterator<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/global_activity_mgr.cpp",
    "onStart",
    39);
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"[ANNOUNCE] onStart ");
  __for_end._M_current = (data::AnnounceConfig *)std::unordered_set<unsigned int>::size(&this->annoucne_config_id_set_);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)&__for_end);
  common::milog::MiLogStream::~MiLogStream(&v15);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  RedPointConfigMap = data::DbRedPointConfigMgr::getRedPointConfigMap(&v7->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr);
  std::unordered_map<unsigned int,data::RedPointConfig>::operator=(&this->red_point_config_map_, RedPointConfigMap);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  std::vector<data::AnnounceConfig>::~vector((std::vector<data::AnnounceConfig> *const)(v1 + 48));
  result = 0;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 48: range 000000001508B42A-000000001508B458
int32_t __cdecl GlobalActivityMgr::onStop(GlobalActivityMgr *const this)
{
  std::unordered_set<unsigned int>::clear(&this->annoucne_config_id_set_);
  std::unordered_map<unsigned int,data::RedPointConfig>::clear(&this->red_point_config_map_);
  return 0;
};

// Line 55: range 000000001508B45A-000000001508BBA5
int32_t __cdecl GlobalActivityMgr::onReloadConfig(GlobalActivityMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // r14
  const data::AnnounceConfig *v6; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v7; // rdx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::unordered_set<unsigned int> *v11; // rdx
  int32_t result; // eax
  uint32_t now; // [rsp+1Ch] [rbp-334h]
  std::vector<data::AnnounceConfig>::iterator __for_begin; // [rsp+20h] [rbp-330h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-328h] BYREF
  std::vector<data::AnnounceConfig>::iterator __for_end; // [rsp+30h] [rbp-320h] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-318h] BYREF
  std::vector<data::AnnounceConfig> *__for_range; // [rsp+40h] [rbp-310h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-308h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-300h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-2F0h] BYREF
  char v22[720]; // [rsp+80h] [rbp-2D0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(672LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 5 id:74 48 24 22 announce_config_vec:57 112 24 19 new_announce_vec:61 176 24 26 revoked_a"
                        "nnounce_id_vec:73 240 56 20 new_config_id_set:62 336 272 9 config:63";
  *(_QWORD *)(v1 + 16) = GlobalActivityMgr::onReloadConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862729] = -218959360;
  v3[536862730] = 62194;
  v3[536862739] = -202116109;
  v3[536862740] = -202116109;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  DbLocalConfigMgr::findActiveAnnounceConfig(
    (std::vector<data::AnnounceConfig> *)(v1 + 48),
    &v4->design_config.db_config_mgr.db_local_config_mgr,
    now);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/global_activity_mgr.cpp",
    "onReloadConfig",
    59);
  v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v21,
         (const char (*)[27])"[ANNOUNCE] onReloadConfig ");
  val = std::vector<data::AnnounceConfig>::size((const std::vector<data::AnnounceConfig> *const)(v1 + 48));
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v21);
  std::vector<data::AnnounceConfig>::vector((std::vector<data::AnnounceConfig> *const)(v1 + 112));
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 240));
  __for_range = (std::vector<data::AnnounceConfig> *)(v1 + 48);
  __for_begin._M_current = std::vector<data::AnnounceConfig>::begin((std::vector<data::AnnounceConfig> *const)(v1 + 48))._M_current;
  __for_end._M_current = std::vector<data::AnnounceConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>::operator*(&__for_begin);
    data::AnnounceConfig::AnnounceConfig((data::AnnounceConfig *const)(v1 + 336), v6);
    val = (unsigned __int64)std::unordered_set<unsigned int>::end(&this->annoucne_config_id_set_)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::find(
                           &this->annoucne_config_id_set_,
                           (const std::unordered_set<unsigned int>::key_type *)(v1 + 336))._M_cur;
    if ( std::__detail::operator==<unsigned int,false>(
           &__for_end_0,
           (const std::__detail::_Node_iterator_base<unsigned int,false> *)&val) )
    {
      std::vector<data::AnnounceConfig>::push_back(
        (std::vector<data::AnnounceConfig> *const)(v1 + 112),
        (const std::vector<data::AnnounceConfig>::value_type *)(v1 + 336));
    }
    std::unordered_set<unsigned int>::insert(
      (std::unordered_set<unsigned int> *const)(v1 + 240),
      (const std::unordered_set<unsigned int>::value_type *)(v1 + 336));
    data::AnnounceConfig::~AnnounceConfig((data::AnnounceConfig *const)(v1 + 336));
    __gnu_cxx::__normal_iterator<data::AnnounceConfig *,std::vector<data::AnnounceConfig>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 176));
  __for_range_0 = &this->annoucne_config_id_set_;
  __for_begin._M_current = (data::AnnounceConfig *)std::unordered_set<unsigned int>::begin(&this->annoucne_config_id_set_)._M_cur;
  __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            &__for_end_0) )
  {
    v7 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v7;
    val = (unsigned __int64)std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v1 + 240))._M_cur;
    __for_end._M_current = (data::AnnounceConfig *)std::unordered_set<unsigned int>::find(
                                                     (std::unordered_set<unsigned int> *const)(v1 + 240),
                                                     (const std::unordered_set<unsigned int>::key_type *)(v1 + 32))._M_cur;
    if ( std::__detail::operator==<unsigned int,false>(
           (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end,
           (const std::__detail::_Node_iterator_base<unsigned int,false> *)&val) )
    {
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v1 + 176),
        (const std::vector<unsigned int>::value_type *)(v1 + 32));
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/global_activity_mgr.cpp",
    "onReloadConfig",
    81);
  v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v21,
         (const char (*)[38])"Announce onReloadConfig new_annoucne ");
  __for_end._M_current = (data::AnnounceConfig *)std::vector<data::AnnounceConfig>::size((const std::vector<data::AnnounceConfig> *const)(v1 + 112));
  v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
         v8,
         (const unsigned __int64 *)&__for_end);
  v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" revoked announce ");
  val = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 176));
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
  common::milog::MiLogStream::~MiLogStream(&v21);
  v11 = std::move<std::unordered_set<unsigned int> &>((std::unordered_set<unsigned int> *)(v1 + 240));
  std::unordered_set<unsigned int>::operator=(&this->annoucne_config_id_set_, v11);
  GlobalActivityMgr::notifyAnnounceAfterReload(
    this,
    (const std::vector<data::AnnounceConfig> *)(v1 + 112),
    (const std::vector<unsigned int> *)(v1 + 176));
  GlobalActivityMgr::checkUpdateRedPointOnReloadConfig(this);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 176));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 240));
  std::vector<data::AnnounceConfig>::~vector((std::vector<data::AnnounceConfig> *const)(v1 + 112));
  std::vector<data::AnnounceConfig>::~vector((std::vector<data::AnnounceConfig> *const)(v1 + 48));
  result = 0;
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 91: range 000000001508C724-000000001508C94B
void __cdecl GlobalActivityMgr::notifyAnnounceAfterReload(
        GlobalActivityMgr *const this,
        const std::vector<data::AnnounceConfig> *new_announce_vec,
        const std::vector<unsigned int> *revoked_announce_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::ServerAnnounceRevokeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  GameserverService *v9; // rax
  PlayerMgr *p_player_mgr; // r14
  GlobalActivityMgr::notifyAnnounceAfterReload::<lambda(Player&)> v11; // [rsp-20h] [rbp-F0h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 29 revoke_announce_notify_ptr:97";
  *(_QWORD *)(v3 + 16) = GlobalActivityMgr::notifyAnnounceAfterReload;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::vector<data::AnnounceConfig>::empty(new_announce_vec)
    || !std::vector<unsigned int>::empty(revoked_announce_id_vec) )
  {
    common::tools::perf::make_shared<proto::ServerAnnounceRevokeNotify>();
    if ( !std::operator==<proto::ServerAnnounceRevokeNotify>(
            0LL,
            (const std::shared_ptr<proto::ServerAnnounceRevokeNotify> *)(v3 + 32)) )
    {
      v7 = std::__shared_ptr_access<proto::ServerAnnounceRevokeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerAnnounceRevokeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v8 = proto::ServerAnnounceRevokeNotify::mutable_config_id_list(v7);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(revoked_announce_id_vec, v8);
      v9 = ServiceBox::findService<GameserverService>();
      p_player_mgr = &GameserverService::getGameThreadLocal(v9)->player_mgr;
      v11.__revoked_announce_id_vec = revoked_announce_id_vec;
      v11.__new_announce_vec = new_announce_vec;
      v11.__revoke_announce_notify_ptr = (std::shared_ptr<proto::ServerAnnounceRevokeNotify> *)(v3 + 32);
      std::function<ForeachPolicy ()(Player &)>::function<GlobalActivityMgr::notifyAnnounceAfterReload(std::vector<data::AnnounceConfig> const&,std::vector const&<unsigned int,std::allocator<unsigned int>>)::{lambda(Player &)#1},void,void>(
        &p_func,
        v11);
      PlayerMgr::foreachPlayer(p_player_mgr, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    }
    std::shared_ptr<proto::ServerAnnounceRevokeNotify>::~shared_ptr((std::shared_ptr<proto::ServerAnnounceRevokeNotify> *const)(v3 + 32));
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 000000001508BBA6-000000001508C722
ForeachPolicy __cdecl GlobalActivityMgr::notifyAnnounceAfterReload(std::vector<data::AnnounceConfig> const&,std::vector const&<unsigned int,std::allocator<unsigned int>>)::{lambda(Player &)#1}::operator()(
        const GlobalActivityMgr::notifyAnnounceAfterReload::<lambda(Player&)> *const __closure,
        Player *player)
{
  ForeachPolicy v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::AnnounceConfig *v6; // rax
  _BOOL4 v8; // r15d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v10; // rax
  std::__shared_ptr_access<proto::ServerAnnounceNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool v21; // r15
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  ForeachPolicy result; // eax
  proto::LanguageType player_language_type; // [rsp+24h] [rbp-2ACh]
  std::vector<data::AnnounceConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-2A8h] BYREF
  std::vector<data::AnnounceConfig>::const_iterator __for_end; // [rsp+30h] [rbp-2A0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self __y; // [rsp+38h] [rbp-298h] BYREF
  const std::vector<data::AnnounceConfig> *__for_range; // [rsp+40h] [rbp-290h]
  proto::AnnounceData *announce_data; // [rsp+48h] [rbp-288h]
  std::shared_ptr<const google::protobuf::Message> v39; // [rsp+50h] [rbp-280h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-270h] BYREF
  char v41[592]; // [rsp+80h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 channel_id:125 64 4 18 sub_channel_id:126 80 8 16 channel_iter:129 112 16 23 announce_"
                        "notify_ptr:111 144 32 11 textmap:151 208 272 10 config:116";
  *(_QWORD *)(v3 + 16) = GlobalActivityMgr::notifyAnnounceAfterReload(std::vector<data::AnnounceConfig> const&,std::vector const&<unsigned int,std::allocator<unsigned int>>)::{lambda(Player &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  if ( !Player::isConnected(player) )
  {
    v2 = FOREACH_CONTINUE;
    goto LABEL_47;
  }
  common::tools::perf::make_shared<proto::ServerAnnounceNotify>();
  if ( std::operator==<proto::ServerAnnounceNotify>(
         0LL,
         (const std::shared_ptr<proto::ServerAnnounceNotify> *)(v3 + 112)) )
  {
    v2 = FOREACH_BREAK;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__new_announce_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __for_range = __closure->__new_announce_vec;
  __for_begin._M_current = std::vector<data::AnnounceConfig>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<data::AnnounceConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::AnnounceConfig const*,std::vector<data::AnnounceConfig>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<data::AnnounceConfig const*,std::vector<data::AnnounceConfig>>::operator*(&__for_begin);
    data::AnnounceConfig::AnnounceConfig((data::AnnounceConfig *const)(v3 + 208), v6);
    if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 424)) )
    {
      *(_DWORD *)(v3 + 64) = Player::getPlatformType(player);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v3 + 424),
              (const unsigned int *)(v3 + 64)) )
      {
        v2 = FOREACH_CONTINUE;
        v8 = 0;
        goto LABEL_33;
      }
    }
    *(_DWORD *)(v3 + 48) = Player::getChannelId(player);
    *(_DWORD *)(v3 + 64) = Player::getSubChannelId(player);
    if ( !std::map<unsigned int,std::set<unsigned int>>::empty((const std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 376)) )
    {
      *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 80) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                (std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 376),
                                                                                (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,std::set<unsigned int>>::end((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 376))._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 80),
             &__y) )
      {
        v2 = FOREACH_CONTINUE;
LABEL_24:
        v8 = 0;
        goto LABEL_33;
      }
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 80));
      if ( !std::set<unsigned int>::empty(&v9->second) )
      {
        v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 80));
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                &v10->second,
                (const unsigned int *)(v3 + 64)) )
        {
          v2 = FOREACH_CONTINUE;
          goto LABEL_24;
        }
      }
    }
    v11 = std::__shared_ptr_access<proto::ServerAnnounceNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerAnnounceNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    announce_data = proto::ServerAnnounceNotify::add_announce_data_list(v11);
    proto::AnnounceData::set_config_id(announce_data, *(_DWORD *)(v3 + 208));
    proto::AnnounceData::set_begin_time(announce_data, *(_DWORD *)(v3 + 212));
    proto::AnnounceData::set_end_time(announce_data, *(_DWORD *)(v3 + 216));
    proto::AnnounceData::set_count_down_frequency(announce_data, *(_DWORD *)(v3 + 372));
    proto::AnnounceData::set_center_system_frequency(announce_data, *(_DWORD *)(v3 + 368));
    proto::AnnounceData::set_is_center_system_last_5_every_minutes(announce_data, *(_BYTE *)(v3 + 472));
    BasicComp = Player::getBasicComp(player);
    player_language_type = PlayerBasicComp::getLanguageType(BasicComp);
    std::string::basic_string(v3 + 144);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
    v14 = DbLocalConfigMgr::replaceTextWithLanguageType(
            &v13->design_config.db_config_mgr.db_local_config_mgr,
            *(_DWORD *)(v3 + 320),
            player_language_type,
            (const std::string *)(v3 + 224),
            (std::string *)(v3 + 144)) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/global_activity_mgr.cpp",
        "operator()",
        154);
      v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v40,
              (const char (*)[29])"replaceTextWithLanguageType ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              (const unsigned int *)(v3 + 320));
      v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])":");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 224));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v2 = FOREACH_BREAK;
      v19 = 0;
    }
    else
    {
      proto::AnnounceData::set_center_system_text(announce_data, (const std::string *)(v3 + 144));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      v21 = DbLocalConfigMgr::replaceTextWithLanguageType(
              &v20->design_config.db_config_mgr.db_local_config_mgr,
              *(_DWORD *)(v3 + 324),
              player_language_type,
              (const std::string *)(v3 + 256),
              (std::string *)(v3 + 144)) != 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
      if ( v21 )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/global_activity_mgr.cpp",
          "operator()",
          160);
        v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v40,
                (const char (*)[29])"replaceTextWithLanguageType ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 324));
        v24 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])":");
        v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v3 + 256));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v2 = FOREACH_BREAK;
        v19 = 0;
      }
      else
      {
        proto::AnnounceData::set_count_down_text(announce_data, (const std::string *)(v3 + 144));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v27 = DbLocalConfigMgr::replaceTextWithLanguageType(
                &v26->design_config.db_config_mgr.db_local_config_mgr,
                *(_DWORD *)(v3 + 328),
                player_language_type,
                (const std::string *)(v3 + 288),
                (std::string *)(v3 + 144)) != 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
        if ( v27 )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/global_activity_mgr.cpp",
            "operator()",
            166);
          v28 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v40,
                  (const char (*)[29])"replaceTextWithLanguageType ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v3 + 328));
          v30 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v29, (const char (*)[2])":");
          v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v30,
                  (const std::string *)(v3 + 288));
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          v2 = FOREACH_BREAK;
          v19 = 0;
        }
        else
        {
          proto::AnnounceData::set_dungeon_confirm_text(announce_data, (const std::string *)(v3 + 144));
          v19 = 1;
        }
      }
    }
    std::string::~string((void *)(v3 + 144));
    v8 = v19 == 1;
LABEL_33:
    data::AnnounceConfig::~AnnounceConfig((data::AnnounceConfig *const)(v3 + 208));
    if ( !v8 )
      goto LABEL_46;
    __gnu_cxx::__normal_iterator<data::AnnounceConfig const*,std::vector<data::AnnounceConfig>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__new_announce_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !std::vector<data::AnnounceConfig>::empty(__closure->__new_announce_vec) )
  {
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerAnnounceNotify>((const std::shared_ptr<proto::ServerAnnounceNotify> *)&v39);
    Player::sendMessage(player, &v39, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v39);
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__revoked_announce_id_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !std::vector<unsigned int>::empty(__closure->__revoked_announce_id_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerAnnounceRevokeNotify>((const std::shared_ptr<proto::ServerAnnounceRevokeNotify> *)&v39);
    Player::sendMessage(player, &v39, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v39);
  }
  v2 = FOREACH_CONTINUE;
LABEL_46:
  std::shared_ptr<proto::ServerAnnounceNotify>::~shared_ptr((std::shared_ptr<proto::ServerAnnounceNotify> *const)(v3 + 112));
LABEL_47:
  result = v2;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 184: range 000000001508C9BA-000000001508CB15
void __cdecl GlobalActivityMgr::checkUpdateRedPointOnReloadConfig(GlobalActivityMgr *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  GameserverService *v2; // rax
  PlayerMgr *p_player_mgr; // rbx
  uint32_t now; // [rsp+14h] [rbp-4Ch]
  const std::unordered_map<unsigned int,data::RedPointConfig> *cur_red_point_config_map; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  cur_red_point_config_map = data::DbRedPointConfigMgr::getRedPointConfigMap(&v1->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( !std::operator==<unsigned int,data::RedPointConfig,std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,data::RedPointConfig>>>(
          &this->red_point_config_map_,
          cur_red_point_config_map) )
  {
    std::unordered_map<unsigned int,data::RedPointConfig>::operator=(
      &this->red_point_config_map_,
      cur_red_point_config_map);
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/global_activity_mgr.cpp",
      "checkUpdateRedPointOnReloadConfig",
      191);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v7,
      (const char (*)[28])"db_red_point_config changed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    now = common::tools::TimeUtils::getNow();
    v2 = ServiceBox::findService<GameserverService>();
    p_player_mgr = &GameserverService::getGameThreadLocal(v2)->player_mgr;
    std::function<ForeachPolicy ()(Player &)>::function<GlobalActivityMgr::checkUpdateRedPointOnReloadConfig(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v7,
      (GlobalActivityMgr::checkUpdateRedPointOnReloadConfig::<lambda(Player&)>)now);
    PlayerMgr::foreachPlayer(p_player_mgr, (std::function<ForeachPolicy(Player&)> *)&v7);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v7);
  }
};

// Line 193: range 000000001508C94C-000000001508C9B9
ForeachPolicy __cdecl GlobalActivityMgr::checkUpdateRedPointOnReloadConfig(void)::{lambda(Player &)#1}::operator()(
        const GlobalActivityMgr::checkUpdateRedPointOnReloadConfig::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerH5ActivityComp *H5ActivityComp; // rcx

  H5ActivityComp = Player::getH5ActivityComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  PlayerH5ActivityComp::onRedPointConfigChange(H5ActivityComp, __closure->__now);
  return 0;
};
