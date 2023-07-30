// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_encounter_rand_task.cpp

// Line 30: range 0000000015C6E5F8-0000000015C6E673
uint32_t __cdecl SceneEncounterRandTask::getRemainSlotNum(const SceneEncounterRandTask *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t max_num; // [rsp+18h] [rbp-18h]
  uint32_t cur_num; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  max_num = ConstValueExcelConfigMgr::getRandTaskNum(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  cur_num = std::vector<SceneEncounterRandTask::RandTaskInfo>::size(&this->rand_task_vec_);
  if ( cur_num < max_num )
    return max_num - cur_num;
  else
    return 0;
};

// Line 41: range 0000000015C6EA7E-0000000015C6F3C4
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneEncounterRandTask::destroyRemoteRandTask(SceneEncounterRandTask *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  Scene *v5; // r14
  SceneEncounterRandTask::RandTaskInfo *M_current; // r14
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator v7; // rax
  __int64 v8; // rcx OVERLAPPED
  __int64 v9; // rdx
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >::pointer v10; // rdx
  const SceneEncounterRandTask::RandTaskInfo *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >::pointer v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned int RandTaskMaxCD; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int RandTaskMinCD; // eax
  SceneEncounterComp *EncounterComp; // rax
  unsigned int *v19; // r14
  std::vector<unsigned int>::iterator v20; // rax
  uint32_t *v21; // rdx
  common::milog::MiLogStream *v22; // r14
  const unsigned int *v23; // rax
  std::string v24; // [rsp+0h] [rbp-1E0h] OVERLAPPED BYREF
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > __rhs; // [rsp+20h] [rbp-1C0h] BYREF
  SceneBlockGroupComp *block_group_comp; // [rsp+28h] [rbp-1B8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-1B0h] BYREF
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-1A0h] BYREF
  std::string v29; // [rsp+50h] [rbp-190h] BYREF
  char v30[368]; // [rsp+70h] [rbp-170h] BYREF

  v24._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 1 9 holder:42 64 8 9 del_it:67 96 8 16 del_group_it:100 128 8 7 iter:70 160 16 11 del_cond:"
                        "58 192 24 10 pos_vec:46 256 24 17 del_group_cond:85";
  *(_QWORD *)(v1 + 16) = SceneEncounterRandTask::destroyRemoteRandTask;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((v24._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v29, *(PlayerWorldScene *const *)(v24._M_string_length + 8));
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x838u, v24);
  std::string::~string(&v29);
  if ( *(_BYTE *)(((v24._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  block_group_comp = Scene::getBlockGroupComp(*(Scene *const *)(v24._M_string_length + 8));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  *(_DWORD *)v24._anon_0._M_local_buf = ConstValueExcelConfigMgr::getRandTaskDestroyDist(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  std::vector<Vector3>::vector((std::vector<Vector3> *const)(v1 + 192));
  if ( *(_BYTE *)(((v24._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(Scene **)(v24._M_string_length + 8);
  std::function<ForeachPolicy ()(Player &)>::function<SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v29,
    (SceneEncounterRandTask::destroyRemoteRandTask::<lambda(Player&)>)(v1 + 192));
  Scene::foreachPlayer(v5, (std::function<ForeachPolicy(Player&)> *)&v29);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v29);
  *(_QWORD *)(v1 + 160) = v1 + 192;
  *(_DWORD *)(v1 + 168) = *(_DWORD *)v24._anon_0._M_local_buf;
  M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v24._M_string_length + 16))._M_current;
  v7._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::begin((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v24._M_string_length + 16))._M_current;
  v8 = *(_QWORD *)(v1 + 168);
  v9 = *(_QWORD *)(v1 + 160);
  *(__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v1 + 64) = std::remove_if<__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>,SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>> const&)#2}>(v7, (__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >)M_current, *(SceneEncounterRandTask::destroyRemoteRandTask::<lambda(const auto:25&)> *)(&v8 - 1));
  __rhs._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v24._M_string_length + 16))._M_current;
  if ( __gnu_cxx::operator!=<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
         (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v1 + 64),
         &__rhs) )
  {
    *(_QWORD *)(v1 + 128) = *(_QWORD *)(v1 + 64);
    while ( 1 )
    {
      __rhs._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v24._M_string_length + 16))._M_current;
      if ( !__gnu_cxx::operator!=<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
              (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v1 + 128),
              &__rhs) )
        break;
      v10 = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      SceneBlockGroupComp::removePatternGroup(block_group_comp, v10->group_id);
      v11 = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator*((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v1 + 128));
      SceneEncounterRandTask::onRemoveRandTask(
        (SceneEncounterRandTask *const)v24._M_string_length,
        v11,
        0,
        RemoveRandTaskInfoNotify_FinishReason_DISTANCE);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "destroyRemoteRandTask",
        75);
      v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)&v29,
              (const char (*)[28])"DISTANCE remove rand_task: ");
      v13 = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v1 + 128));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->rand_task_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
      __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator++((__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v1 + 128));
    }
    *((std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator *)&v24._anon_0._M_allocated_capacity + 1) = std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v24._M_string_length + 16));
    __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo const*,std::vector<SceneEncounterRandTask::RandTaskInfo>>::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*>(
      (__gnu_cxx::__normal_iterator<const SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)&v24._anon_0._M_allocated_capacity
    + 1);
    __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo const*,std::vector<SceneEncounterRandTask::RandTaskInfo>>::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*>(
      (__gnu_cxx::__normal_iterator<const SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v1 + 128),
      (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v1 + 64));
    std::vector<SceneEncounterRandTask::RandTaskInfo>::erase(
      (std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v24._M_string_length + 16),
      *(std::vector<SceneEncounterRandTask::RandTaskInfo>::const_iterator *)(v1 + 128),
      (std::vector<SceneEncounterRandTask::RandTaskInfo>::const_iterator)__rhs._M_current);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    RandTaskMaxCD = ConstValueExcelConfigMgr::getRandTaskMaxCD(&v14->design_config.txt_config_mgr.const_value_config_mgr);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    RandTaskMinCD = ConstValueExcelConfigMgr::getRandTaskMinCD(&v16->design_config.txt_config_mgr.const_value_config_mgr);
    HIDWORD(v24._anon_0._M_allocated_capacity) = common::tools::RandomUtils::rand<unsigned int>(
                                                   RandTaskMinCD,
                                                   RandTaskMaxCD);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( *(_BYTE *)(((v24._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EncounterComp = PlayerWorldScene::getEncounterComp(*(PlayerWorldScene *const *)(v24._M_string_length + 8));
    SceneEncounterComp::updateNextRefreshTime(EncounterComp, HIDWORD(v24._anon_0._M_allocated_capacity));
  }
  *(_QWORD *)(v1 + 256) = block_group_comp;
  *(_QWORD *)(v1 + 264) = v1 + 192;
  *(_DWORD *)(v1 + 272) = *(_DWORD *)v24._anon_0._M_local_buf;
  v19 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v24._M_string_length + 56))._M_current;
  v20._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v24._M_string_length + 56))._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(unsigned int)#3}>(
                                                                                           v20,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v19,
                                                                                           *(SceneEncounterRandTask::destroyRemoteRandTask::<lambda(uint32_t)> *)(v1 + 256));
  *(_QWORD *)(v1 + 128) = *(_QWORD *)(v1 + 96);
  while ( 1 )
  {
    __rhs._M_current = (SceneEncounterRandTask::RandTaskInfo *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v24._M_string_length + 56))._M_current;
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 128),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__rhs) )
      break;
    v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 128));
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SceneBlockGroupComp::removePatternGroup(block_group_comp, *v21);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "destroyRemoteRandTask",
      104);
    v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&v29,
            (const char (*)[27])"remove leftover group_id: ");
    v23 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 128));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 128));
  }
  *((std::vector<unsigned int>::iterator *)&v24._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v24._M_string_length + 56));
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__rhs,
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&v24._anon_0._M_allocated_capacity
  + 1);
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 128),
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96));
  std::vector<unsigned int>::erase(
    (std::vector<unsigned int> *const)(v24._M_string_length + 56),
    *(std::vector<unsigned int>::const_iterator *)(v1 + 128),
    (std::vector<unsigned int>::const_iterator)__rhs._M_current);
  std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v1 + 192));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 0000000015C6E674-0000000015C6E7D1
ForeachPolicy __cdecl SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(Player &)#1}::operator()(
        const SceneEncounterRandTask::destroyRemoteRandTask::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<Vector3> *pos_vec; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rax
  const Vector3 *v8; // rdx
  ForeachPolicy result; // eax
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 avatar_ptr:49";
  *(_QWORD *)(v2 + 16) = SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    pos_vec = __closure->__pos_vec;
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition((const Entity *const)v6);
    std::vector<Vector3>::emplace_back<Vector3 const&>(pos_vec, Position, v8);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
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

// Line 58: range 0000000015D1030C-0000000015D10432
bool __cdecl SceneEncounterRandTask::destroyRemoteRandTask::_lambda_const_auto_25___::operator()_SceneEncounterRandTask::RandTaskInfo_(
        const SceneEncounterRandTask::destroyRemoteRandTask::<lambda(const auto:25&)> *const __closure,
        const SceneEncounterRandTask::RandTaskInfo *info)
{
  float Distance; // xmm1_4
  std::vector<Vector3>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<Vector3>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<Vector3> *__for_range; // [rsp+20h] [rbp-10h]
  const Vector3 *pos; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __for_range = __closure->__pos_vec;
  __for_begin._M_current = std::vector<Vector3>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<Vector3>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(&__for_begin, &__for_end) )
  {
    pos = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*(&__for_begin);
    Distance = getDistance(pos, &info->position);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__dist >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__dist >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( (float)(int)__closure->__dist > Distance )
      return 0;
    __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 85: range 0000000015C6E7D2-0000000015C6EA7C
bool __cdecl SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(unsigned int)#3}::operator()(
        const SceneEncounterRandTask::destroyRemoteRandTask::<lambda(uint32_t)> *const __closure,
        uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float Distance; // xmm1_4
  bool result; // al
  std::vector<Vector3>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<Vector3>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const Vector3 *group_pos; // [rsp+28h] [rbp-88h]
  std::vector<Vector3> *__for_range; // [rsp+30h] [rbp-80h]
  const Vector3 *pos; // [rsp+38h] [rbp-78h]
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 group_ptr:87";
  *(_QWORD *)(v2 + 16) = SceneEncounterRandTask::destroyRemoteRandTask(void)::{lambda(unsigned int)#3}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneBlockGroupComp::findPatternGroup(
    (SceneBlockGroupComp *const)(v2 + 32),
    (__int64)__closure->__block_group_comp,
    group_id);
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 32)) )
  {
    v5 = 1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    group_pos = Group::getPosition(v6);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__pos_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __for_range = __closure->__pos_vec;
    __for_begin._M_current = std::vector<Vector3>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<Vector3>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(&__for_begin, &__for_end) )
    {
      pos = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*(&__for_begin);
      Distance = getDistance(pos, group_pos);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__dist >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__dist >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( (float)(int)__closure->__dist > Distance )
      {
        v5 = 0;
        goto LABEL_18;
      }
      __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++(&__for_begin);
    }
    v5 = 1;
  }
LABEL_18:
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  result = v5;
  if ( v14 == (char *)v2 )
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

// Line 110: range 0000000015C6F3C6-0000000015C70629
void __cdecl SceneEncounterRandTask::onEnterEnvZone(
        SceneEncounterRandTask *const this,
        Player *player,
        const data::ConfigEnvironmentZone *zone_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::vector<unsigned int>::const_reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool isRandTaskIdClosed; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const Vector3 *Position; // rdi
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  SceneEncounterComp *EncounterComp; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v25; // rax
  SceneEncounterComp *v26; // rax
  RandTaskExcelConfigMgr *p_rand_task_config_mgr; // rcx
  SceneBlockGroupComp *BlockGroupComp; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  unsigned int RandTaskMaxCD; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned int RandTaskMinCD; // eax
  SceneEncounterComp *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  std::string v51; // [rsp+0h] [rbp-1B0h]
  const data::ConfigEnvironmentZone *zone_configa; // [rsp+8h] [rbp-1A8h]
  Player *playera; // [rsp+10h] [rbp-1A0h]
  SceneEncounterRandTask *thisa; // [rsp+18h] [rbp-198h]
  uint32_t max_num; // [rsp+20h] [rbp-190h]
  uint32_t size; // [rsp+24h] [rbp-18Ch]
  uint32_t select; // [rsp+28h] [rbp-188h]
  uint32_t content_type; // [rsp+2Ch] [rbp-184h]
  int min_dist; // [rsp+30h] [rbp-180h]
  unsigned int cd; // [rsp+34h] [rbp-17Ch]
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator __for_begin; // [rsp+38h] [rbp-178h] BYREF
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator __for_end; // [rsp+40h] [rbp-170h] BYREF
  const data::RandTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-168h]
  std::vector<SceneEncounterRandTask::RandTaskInfo> *__for_range; // [rsp+50h] [rbp-160h]
  const SceneEncounterRandTask::RandTaskInfo *info; // [rsp+58h] [rbp-158h]
  std::shared_ptr<Config> v66; // [rsp+60h] [rbp-150h] BYREF
  std::shared_ptr<Config> v67; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v68; // [rsp+80h] [rbp-130h] BYREF
  char v69[272]; // [rsp+A0h] [rbp-110h] BYREF

  *(&v51._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v51._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v51._M_string_length = (std::string::size_type)zone_config;
  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:124 64 4 13 owner_uid:116 80 4 16 rand_task_id:125 96 12 12 task_pos:160 128 16"
                        " 14 avatar_ptr:111 160 32 8 info:186";
  *(_QWORD *)(v3 + 16) = SceneEncounterRandTask::onEnterEnvZone;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  Player::getAvatarComp(player);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 128));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 128)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 64) = Scene::getOwnerUid((const Scene *const)this->world_scene_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v66);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66);
    max_num = ConstValueExcelConfigMgr::getRandTaskNum(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v66);
    if ( std::vector<SceneEncounterRandTask::RandTaskInfo>::size(&this->rand_task_vec_) < max_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerWorldScene::getOwnerNextTransNo[abi:cxx11]((std::string *)&v68, this->world_scene_);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x837u, v51);
      std::string::~string(&v68);
      *(_DWORD *)(v3 + 80) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&zone_configa->task_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)zone_configa + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_configa->task_type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( zone_configa->task_type )
      {
        content_type = zone_configa->task_type;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v67);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
        *(_DWORD *)(v3 + 80) = RandTaskExcelConfigMgr::genRandTaskIdByContentType(
                                 &v7->design_config.txt_config_mgr.rand_task_config_mgr,
                                 content_type);
        std::shared_ptr<Config>::~shared_ptr(&v67);
      }
      else if ( !std::vector<unsigned int>::empty(&zone_configa->task_id_list) )
      {
        size = std::vector<unsigned int>::size(&zone_configa->task_id_list);
        select = common::tools::RandomUtils::rand<int>(0, size - 1);
        if ( select < size )
        {
          v8 = std::vector<unsigned int>::operator[](&zone_configa->task_id_list, select);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 80) = *v8;
        }
      }
      if ( *(_DWORD *)(v3 + 80) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v67);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
        task_config_ptr = data::RandTaskExcelConfigMgrBase::findRandTaskExcelConfig(
                            &v9->design_config.txt_config_mgr.rand_task_config_mgr,
                            *(_DWORD *)(v3 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v67);
        if ( task_config_ptr )
        {
          if ( SceneEncounterRandTask::isRandTaskIdGranted(thisa, *(_DWORD *)(v3 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/scene/scene_encounter_rand_task.cpp",
              "onEnterEnvZone",
              152);
            v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v68,
                    (const char (*)[12])"owner_uid: ");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v3 + 64));
            v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v12,
                    (const char (*)[30])" already grant rand_task_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v68);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v67);
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
            isRandTaskIdClosed = FeatureSwitchMgr::isRandTaskIdClosed(&v14->feature_switch_mgr, *(_DWORD *)(v3 + 80));
            std::shared_ptr<Config>::~shared_ptr(&v67);
            if ( isRandTaskIdClosed )
            {
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_encounter_rand_task.cpp",
                "onEnterEnvZone",
                157);
              v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      &v68,
                      (const char (*)[15])"rand_taskd_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v3 + 80));
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" closed");
              common::milog::MiLogStream::~MiLogStream(&v68);
            }
            else
            {
              Vector3::Vector3((Vector3 *const)(v3 + 96), 0.0, 0.0, 0.0);
              v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Position = Entity::getPosition((const Entity *const)v18);
              if ( SceneEncounterRandTask::calcRandTaskPos(thisa, zone_configa, Position, (Vector3 *)(v3 + 96)) )
              {
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_encounter_rand_task.cpp",
                  "onEnterEnvZone",
                  163);
                v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v68,
                        (const char (*)[28])"calcRandTaskPos fails, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v68);
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v67);
                v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
                min_dist = ConstValueExcelConfigMgr::getRandTaskMinDist(&v21->design_config.txt_config_mgr.const_value_config_mgr);
                std::shared_ptr<Config>::~shared_ptr(&v67);
                __for_range = &thisa->rand_task_vec_;
                __for_begin._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::begin(&thisa->rand_task_vec_)._M_current;
                __for_end._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end(&thisa->rand_task_vec_)._M_current;
                while ( __gnu_cxx::operator!=<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
                          &__for_begin,
                          &__for_end) )
                {
                  info = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator*(&__for_begin);
                  if ( (float)min_dist > getDistance((const Vector3 *)(v3 + 96), &info->position) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    EncounterComp = PlayerWorldScene::getEncounterComp(thisa->world_scene_);
                    SceneEncounterComp::updateNextRefreshTime(EncounterComp, 0x1Eu);
                    common::milog::MiLogStream::create(
                      &v68,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/scene/scene_encounter_rand_task.cpp",
                      "onEnterEnvZone",
                      175);
                    v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                            &v68,
                            (const char (*)[29])"take pos nearby, owner_uid: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v68);
                    goto LABEL_63;
                  }
                  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator++(&__for_begin);
                }
                if ( *(_BYTE *)(((unsigned __int64)&thisa->is_last_pos_valid_ >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)thisa + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_last_pos_valid_ >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&thisa->is_last_pos_valid_);
                }
                if ( thisa->is_last_pos_valid_
                  && (float)min_dist > getDistance((const Vector3 *)(v3 + 96), &thisa->last_pos_) )
                {
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_encounter_rand_task.cpp",
                    "onEnterEnvZone",
                    181);
                  v25 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          &v68,
                          (const char (*)[44])"task_pos, last_pos_ < min_dist, owner_uid: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v68);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v26 = PlayerWorldScene::getEncounterComp(thisa->world_scene_);
                  SceneEncounterComp::updateNextRefreshTime(v26, 0x1Eu);
                }
                else
                {
                  SceneEncounterRandTask::RandTaskInfo::RandTaskInfo((SceneEncounterRandTask::RandTaskInfo *const)(v3 + 160));
                  *(_DWORD *)(v3 + 160) = *(_DWORD *)(v3 + 80);
                  if ( *(_BYTE *)(((unsigned __int64)&zone_configa->level >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)zone_configa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_configa->level >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v3 + 164) = zone_configa->level;
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v67);
                  p_rand_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67)->design_config.txt_config_mgr.rand_task_config_mgr;
                  if ( *(_BYTE *)(((unsigned __int64)&zone_configa->level >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)zone_configa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_configa->level >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v3 + 168) = RandTaskExcelConfigMgr::findGroupReviseLevel(
                                            p_rand_task_config_mgr,
                                            zone_configa->level);
                  std::shared_ptr<Config>::~shared_ptr(&v67);
                  *(_QWORD *)(v3 + 180) = *(_QWORD *)(v3 + 96);
                  *(_DWORD *)(v3 + 188) = *(_DWORD *)(v3 + 104);
                  *(_DWORD *)(v3 + 176) = Player::getUid(playera);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BlockGroupComp = Scene::getBlockGroupComp((Scene *const)thisa->world_scene_);
                  *(_DWORD *)(v3 + 172) = SceneBlockGroupComp::createPatternGroup(
                                            BlockGroupComp,
                                            *(_DWORD *)(v3 + 160),
                                            (const Vector3 *)(v3 + 180),
                                            *(_DWORD *)(v3 + 168),
                                            0);
                  if ( !*(_DWORD *)(v3 + 172) )
                  {
                    common::milog::MiLogStream::create(
                      &v68,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_encounter_rand_task.cpp",
                      "onEnterEnvZone",
                      195);
                    v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            &v68,
                            (const char (*)[12])"owner_uid: ");
                    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v29,
                            (const unsigned int *)(v3 + 64));
                    v31 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            v30,
                            (const char (*)[22])" createPatternGroup: ");
                    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v31,
                            (const unsigned int *)(v3 + 160));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" fails");
                    common::milog::MiLogStream::~MiLogStream(&v68);
                  }
                  std::vector<SceneEncounterRandTask::RandTaskInfo>::push_back(
                    &thisa->rand_task_vec_,
                    (const std::vector<SceneEncounterRandTask::RandTaskInfo>::value_type *)(v3 + 160));
                  v33 = ((_BYTE)thisa + 52) & 7;
                  v34 = (*(_BYTE *)(((unsigned __int64)&thisa->is_last_pos_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&thisa->is_last_pos_valid_ >> 3) + 0x7FFF8000));
                  if ( (_BYTE)v34 )
                    __asan_report_store1(&thisa->is_last_pos_valid_, v33, v34);
                  thisa->is_last_pos_valid_ = 1;
                  if ( *(char *)(((unsigned __int64)&thisa->last_pos_ >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)((((unsigned __int64)&thisa->last_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)thisa + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->last_pos_.z + 3) >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_store_n(&thisa->last_pos_, 12LL);
                  }
                  *(_QWORD *)&thisa->last_pos_.x = *(_QWORD *)(v3 + 96);
                  thisa->last_pos_.z = *(float *)(v3 + 104);
                  SceneEncounterRandTask::onAddRandTask(thisa, (const SceneEncounterRandTask::RandTaskInfo *)(v3 + 160));
                  if ( std::vector<SceneEncounterRandTask::RandTaskInfo>::size(&thisa->rand_task_vec_) < max_num )
                  {
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&v67);
                    v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
                    RandTaskMaxCD = ConstValueExcelConfigMgr::getRandTaskMaxCD(&v35->design_config.txt_config_mgr.const_value_config_mgr);
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&v66);
                    v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66);
                    RandTaskMinCD = ConstValueExcelConfigMgr::getRandTaskMinCD(&v37->design_config.txt_config_mgr.const_value_config_mgr);
                    cd = common::tools::RandomUtils::rand<unsigned int>(RandTaskMinCD, RandTaskMaxCD);
                    std::shared_ptr<Config>::~shared_ptr(&v66);
                    std::shared_ptr<Config>::~shared_ptr(&v67);
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v39 = PlayerWorldScene::getEncounterComp(thisa->world_scene_);
                    SceneEncounterComp::updateNextRefreshTime(v39, cd);
                  }
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_encounter_rand_task.cpp",
                    "onEnterEnvZone",
                    213);
                  v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          &v68,
                          (const char (*)[12])"owner_uid: ");
                  v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v40,
                          (const unsigned int *)(v3 + 64));
                  v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v41,
                          (const char (*)[16])" rand_task_id: ");
                  v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v42,
                          (const unsigned int *)(v3 + 160));
                  v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v43,
                          (const char (*)[14])" zone_level: ");
                  v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v44,
                          (const unsigned int *)(v3 + 164));
                  v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v45,
                          (const char (*)[16])" revise_level: ");
                  v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v46,
                          (const unsigned int *)(v3 + 168));
                  v48 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v47,
                          (const char (*)[12])" group_id: ");
                  v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v48,
                          (const unsigned int *)(v3 + 172));
                  v50 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v49, (const char (*)[7])" pos: ");
                  operator<<(v50, (const Vector3 *)(v3 + 180));
                  common::milog::MiLogStream::~MiLogStream(&v68);
                }
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_encounter_rand_task.cpp",
            "onEnterEnvZone",
            147);
          v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v68,
                  (const char (*)[46])"findRandTaskExcelConfig fails, rand_task_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v68);
        }
      }
LABEL_63:
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "onEnterEnvZone",
        120);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v68, (const char (*)[20])"rand_task slot full");
      common::milog::MiLogStream::~MiLogStream(&v68);
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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
};

// Line 219: range 0000000015C7062A-0000000015C70BDF
int32_t __cdecl SceneEncounterRandTask::calcRandTaskPos(
        SceneEncounterRandTask *const this,
        const data::ConfigEnvironmentZone *zone_config,
        const Vector3 *avatar_pos,
        Vector3 *task_pos)
{
  float z; // xmm1_4
  float y; // xmm0_4
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v9; // rbx
  SceneEncounterComp *EncounterComp; // rax
  unsigned int val; // [rsp+28h] [rbp-88h] BYREF
  uint32_t min_dist; // [rsp+2Ch] [rbp-84h]
  uint32_t max_dist; // [rsp+30h] [rbp-80h]
  uint32_t dist; // [rsp+34h] [rbp-7Ch]
  std::vector<data::Vector>::const_iterator __for_begin; // [rsp+38h] [rbp-78h] BYREF
  std::vector<data::Vector>::const_iterator __for_end; // [rsp+40h] [rbp-70h] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+48h] [rbp-68h]
  const std::vector<data::Vector> *__for_range; // [rsp+50h] [rbp-60h]
  const data::Vector *point; // [rsp+58h] [rbp-58h]
  Vector3 pos2; // [rsp+64h] [rbp-4Ch] BYREF
  std::shared_ptr<Config> v23; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-30h] BYREF

  if ( ((unsigned __int8)task_pos & 7) >= *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)task_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(task_pos, 12LL);
  }
  if ( ((unsigned __int8)avatar_pos & 7) >= *(_BYTE *)(((unsigned __int64)avatar_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)avatar_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&avatar_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)avatar_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&avatar_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(avatar_pos, 12LL);
  }
  *(_QWORD *)&task_pos->x = *(_QWORD *)&avatar_pos->x;
  task_pos->z = avatar_pos->z;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( *(_BYTE *)(((unsigned __int64)&zone_config->choose_possible_point >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)zone_config - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&zone_config->choose_possible_point >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(&zone_config->choose_possible_point);
  }
  if ( !zone_config->choose_possible_point || std::vector<data::Vector>::empty(&zone_config->possible_point_vec) )
    return 0;
  min_dist = ConstValueExcelConfigMgr::getRandTaskPointMinDist(const_value_config_mgr);
  max_dist = ConstValueExcelConfigMgr::getRandTaskPointMaxDist(const_value_config_mgr);
  __for_range = &zone_config->possible_point_vec;
  __for_begin._M_current = std::vector<data::Vector>::begin(&zone_config->possible_point_vec)._M_current;
  __for_end._M_current = std::vector<data::Vector>::end(&zone_config->possible_point_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::Vector const*,std::vector<data::Vector>>(&__for_begin, &__for_end) )
  {
    point = __gnu_cxx::__normal_iterator<data::Vector const*,std::vector<data::Vector>>::operator*(&__for_begin);
    Vector3::Vector3(&pos2, point);
    dist = (int)getDistance(avatar_pos, &pos2);
    if ( min_dist < dist && dist < max_dist )
    {
      if ( *(_BYTE *)(((unsigned __int64)&point->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      z = point->z;
      if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      y = point->y;
      if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Vector3::Vector3(&pos2, point->x, y, z);
      if ( ((unsigned __int8)task_pos & 7) >= *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)task_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(task_pos, 12LL);
      }
      *task_pos = pos2;
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "calcRandTaskPos",
        232);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v24,
             (const char (*)[21])"find possible_point ");
      operator<<(v7, task_pos);
      common::milog::MiLogStream::~MiLogStream(&v24);
      return 0;
    }
    __gnu_cxx::__normal_iterator<data::Vector const*,std::vector<data::Vector>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_encounter_rand_task.cpp",
    "calcRandTaskPos",
    238);
  v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v24, (const char (*)[23])off_259BD080);
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getOwnerUid((const Scene *const)this->world_scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v24);
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EncounterComp = PlayerWorldScene::getEncounterComp(this->world_scene_);
  SceneEncounterComp::updateNextRefreshTime(EncounterComp, 0x1Eu);
  return -1;
};

// Line 247: range 0000000015C70BE0-0000000015C70F6D
int32_t __cdecl SceneEncounterRandTask::getNearestRandTaskPos(
        const SceneEncounterRandTask *const this,
        const data::ConfigEnvironmentZone *zone_config,
        const Vector3 *avatar_pos,
        Vector3 *task_pos)
{
  float z; // xmm1_4
  float y; // xmm0_4
  uint32_t min_distance; // [rsp+28h] [rbp-38h]
  uint32_t dist; // [rsp+2Ch] [rbp-34h]
  std::vector<data::Vector>::const_iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::vector<data::Vector>::const_iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  const std::vector<data::Vector> *__for_range; // [rsp+40h] [rbp-20h]
  const data::Vector *point; // [rsp+48h] [rbp-18h]
  Vector3 pos2; // [rsp+54h] [rbp-Ch] BYREF

  if ( ((unsigned __int8)task_pos & 7) >= *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)task_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(task_pos, 12LL);
  }
  if ( ((unsigned __int8)avatar_pos & 7) >= *(_BYTE *)(((unsigned __int64)avatar_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)avatar_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&avatar_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)avatar_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&avatar_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(avatar_pos, 12LL);
  }
  *(_QWORD *)&task_pos->x = *(_QWORD *)&avatar_pos->x;
  task_pos->z = avatar_pos->z;
  min_distance = -1;
  if ( *(_BYTE *)(((unsigned __int64)&zone_config->choose_possible_point >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)zone_config - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&zone_config->choose_possible_point >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(&zone_config->choose_possible_point);
  }
  if ( !zone_config->choose_possible_point || std::vector<data::Vector>::empty(&zone_config->possible_point_vec) )
    return -1;
  __for_range = &zone_config->possible_point_vec;
  __for_begin._M_current = std::vector<data::Vector>::begin(&zone_config->possible_point_vec)._M_current;
  __for_end._M_current = std::vector<data::Vector>::end(&zone_config->possible_point_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::Vector const*,std::vector<data::Vector>>(&__for_begin, &__for_end) )
  {
    point = __gnu_cxx::__normal_iterator<data::Vector const*,std::vector<data::Vector>>::operator*(&__for_begin);
    Vector3::Vector3(&pos2, point);
    dist = (int)getDistance(avatar_pos, &pos2);
    if ( dist < min_distance )
    {
      if ( *(_BYTE *)(((unsigned __int64)&point->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      z = point->z;
      if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      y = point->y;
      if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Vector3::Vector3(&pos2, point->x, y, z);
      if ( ((unsigned __int8)task_pos & 7) >= *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)task_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)task_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&task_pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(task_pos, 12LL);
      }
      *task_pos = pos2;
      min_distance = dist;
    }
    __gnu_cxx::__normal_iterator<data::Vector const*,std::vector<data::Vector>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 268: range 0000000015C70F6E-0000000015C7102D
bool __cdecl SceneEncounterRandTask::isRandTaskIdGranted(
        const SceneEncounterRandTask *const this,
        uint32_t rand_task_id)
{
  std::vector<SceneEncounterRandTask::RandTaskInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<SceneEncounterRandTask::RandTaskInfo>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<SceneEncounterRandTask::RandTaskInfo> *__for_range; // [rsp+20h] [rbp-10h]
  const SceneEncounterRandTask::RandTaskInfo *info; // [rsp+28h] [rbp-8h]

  __for_range = &this->rand_task_vec_;
  __for_begin._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::begin(&this->rand_task_vec_)._M_current;
  __for_end._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end(&this->rand_task_vec_)._M_current;
  while ( __gnu_cxx::operator!=<SceneEncounterRandTask::RandTaskInfo const*,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
            &__for_begin,
            &__for_end) )
  {
    info = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo const*,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( rand_task_id == info->rand_task_id )
      return 1;
    __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo const*,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 280: range 0000000015C7102E-0000000015C71499
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SceneEncounterRandTask::clear(SceneEncounterRandTask *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned int RandTaskMaxCD; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int RandTaskMinCD; // eax
  SceneEncounterComp *EncounterComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-F0h] OVERLAPPED BYREF
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<SceneEncounterRandTask::RandTaskInfo> *__for_range; // [rsp+30h] [rbp-C0h]
  const SceneEncounterRandTask::RandTaskInfo *info; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-A0h] BYREF
  std::string v19; // [rsp+60h] [rbp-90h] BYREF
  char v20[112]; // [rsp+80h] [rbp-70h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 10 holder:281";
  *(_QWORD *)(v1 + 16) = SceneEncounterRandTask::clear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((v12._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v19, *(PlayerWorldScene *const *)(v12._M_string_length + 8));
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0x838u, v12);
  std::string::~string(&v19);
  if ( !std::vector<SceneEncounterRandTask::RandTaskInfo>::empty((const std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v12._M_string_length + 16)) )
  {
    __for_range = (std::vector<SceneEncounterRandTask::RandTaskInfo> *)(v12._M_string_length + 16);
    __for_begin._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::begin((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v12._M_string_length + 16))._M_current;
    __for_end._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v12._M_string_length + 16))._M_current;
    while ( __gnu_cxx::operator!=<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
              &__for_begin,
              &__for_end) )
    {
      info = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator*(&__for_begin);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v12._M_string_length + 56),
        &info->group_id);
      SceneEncounterRandTask::onRemoveRandTask(
        (SceneEncounterRandTask *const)v12._M_string_length,
        info,
        0,
        RemoveRandTaskInfoNotify_FinishReason_CLEAR);
      __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator++(&__for_begin);
    }
    std::vector<SceneEncounterRandTask::RandTaskInfo>::clear((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(v12._M_string_length + 16));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    RandTaskMaxCD = ConstValueExcelConfigMgr::getRandTaskMaxCD(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    RandTaskMinCD = ConstValueExcelConfigMgr::getRandTaskMinCD(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    *((_DWORD *)&v12._anon_0._M_allocated_capacity + 3) = common::tools::RandomUtils::rand<unsigned int>(
                                                            RandTaskMinCD,
                                                            RandTaskMaxCD);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( *(_BYTE *)(((v12._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EncounterComp = PlayerWorldScene::getEncounterComp(*(PlayerWorldScene *const *)(v12._M_string_length + 8));
    SceneEncounterComp::updateNextRefreshTime(EncounterComp, *((uint32_t *)&v12._anon_0._M_allocated_capacity + 3));
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v19,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "clear",
      299);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
           (common::milog::MiLogStream *const)&v19,
           (const char (*)[12])"owner_uid: ");
    if ( *(_BYTE *)(((v12._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v12._anon_0._M_allocated_capacity + 2) = Scene::getOwnerUid(*(const Scene *const *)(v12._M_string_length + 8));
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v9,
            (const unsigned int *)&v12._anon_0._M_allocated_capacity + 2);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])" clear all rand_task_id");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v19);
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
  result = 0;
  if ( v20 == (char *)v1 )
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

// Line 304: range 0000000015C7149A-0000000015C71EAF
__int64 __fastcall SceneEncounterRandTask::refreshByGm(
        SceneEncounterRandTask *const this,
        __int32 rand_task_id,
        Player *player,
        __int32 revise_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool isRandTaskIdClosed; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const Vector3 *Position; // rax
  JsonConfigMgr *p_json_config_mgr; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t Level1AreaId; // eax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned __int64 n; // rax
  unsigned __int64 v23; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  __int64 result; // rax
  std::string v30; // [rsp+0h] [rbp-160h]
  Player *playera; // [rsp+8h] [rbp-158h]
  uint32_t revise_levela; // [rsp+10h] [rbp-150h]
  SceneEncounterRandTask *thisa; // [rsp+18h] [rbp-148h]
  unsigned int val; // [rsp+20h] [rbp-140h] BYREF
  uint32_t scene_id; // [rsp+24h] [rbp-13Ch]
  const data::RandTaskExcelConfig *task_config_ptr; // [rsp+28h] [rbp-138h]
  const Vector3 *avatar_pos; // [rsp+30h] [rbp-130h]
  const data::ConfigEnvironmentZone *zone_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-120h] BYREF
  std::string v40; // [rsp+50h] [rbp-110h] BYREF
  char v41[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v30._anon_0._M_allocated_capacity) = rand_task_id;
  v30._M_string_length = (std::string::size_type)player;
  *(_DWORD *)v30._anon_0._M_local_buf = revise_level;
  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 10 holder:305 48 4 16 rand_task_id:303 64 12 12 task_pos:327 96 16 14 avatar_ptr:313 128 32 8 info:341";
  *(_QWORD *)(v4 + 16) = SceneEncounterRandTask::refreshByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -219020288;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = rand_task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v40, this->world_scene_);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x837u, v30);
  std::string::~string(&v40);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
  task_config_ptr = data::RandTaskExcelConfigMgrBase::findRandTaskExcelConfig(
                      &v7->design_config.txt_config_mgr.rand_task_config_mgr,
                      *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v39);
  if ( task_config_ptr )
  {
    Player::getCurAvatar((Player *const)(v4 + 96));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "refreshByGm",
        316);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
        (common::milog::MiLogStream *const)&v40,
        (const char (*)[19])"getCurAvatar fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
      v9 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      isRandTaskIdClosed = FeatureSwitchMgr::isRandTaskIdClosed(&v10->feature_switch_mgr, *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( isRandTaskIdClosed )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_encounter_rand_task.cpp",
          "refreshByGm",
          321);
        v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&v40,
                (const char (*)[15])"rand_taskd_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene_id = Scene::getSceneId((const Scene *const)thisa->world_scene_);
        v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        Position = Entity::getPosition((const Entity *const)v14);
        avatar_pos = Position;
        if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(Position, 12LL);
        }
        *(Vector3 *)(v4 + 64) = *avatar_pos;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.json_config_mgr;
        SceneComp = Player::getSceneComp(playera);
        Level1AreaId = PlayerSceneComp::getLevel1AreaId(SceneComp);
        zone_config_ptr = JsonConfigMgr::findConfigEnvironmentZone(
                            p_json_config_mgr,
                            scene_id,
                            Level1AreaId,
                            avatar_pos,
                            2u);
        std::shared_ptr<Config>::~shared_ptr(&v39);
        if ( zone_config_ptr
          && SceneEncounterRandTask::calcRandTaskPos(thisa, zone_config_ptr, avatar_pos, (Vector3 *)(v4 + 64)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_encounter_rand_task.cpp",
            "refreshByGm",
            335);
          v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  (common::milog::MiLogStream *const)&v40,
                  (const char (*)[27])off_259BD260);
          val = Player::getUid(playera);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
          v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          n = (unsigned __int64)Entity::getPosition((const Entity *const)v21);
          if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
          {
            n = __asan_report_load_n(n, 12LL);
          }
          *(_QWORD *)(v4 + 64) = *(_QWORD *)n;
          *(_DWORD *)(v4 + 72) = *(_DWORD *)(n + 8);
        }
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = (unsigned __int64)(thisa->_vptr_SceneEncounterBase + 5);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8();
        (*(void (__fastcall **)(SceneEncounterRandTask *))v23)(thisa);
        SceneEncounterRandTask::RandTaskInfo::RandTaskInfo((SceneEncounterRandTask::RandTaskInfo *const)(v4 + 128));
        *(_DWORD *)(v4 + 128) = *(_DWORD *)(v4 + 48);
        *(_QWORD *)(v4 + 148) = *(_QWORD *)(v4 + 64);
        *(_DWORD *)(v4 + 156) = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v4 + 136) = revise_levela;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v4 + 144) = Scene::getOwnerUid((const Scene *const)thisa->world_scene_);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BlockGroupComp = Scene::getBlockGroupComp((Scene *const)thisa->world_scene_);
        *(_DWORD *)(v4 + 140) = SceneBlockGroupComp::createPatternGroup(
                                  BlockGroupComp,
                                  *(_DWORD *)(v4 + 128),
                                  (const Vector3 *)(v4 + 148),
                                  *(_DWORD *)(v4 + 136),
                                  0);
        if ( *(_DWORD *)(v4 + 140) )
        {
          std::vector<SceneEncounterRandTask::RandTaskInfo>::push_back(
            &thisa->rand_task_vec_,
            (const std::vector<SceneEncounterRandTask::RandTaskInfo>::value_type *)(v4 + 128));
          SceneEncounterRandTask::onAddRandTask(thisa, (const SceneEncounterRandTask::RandTaskInfo *)(v4 + 128));
          v9 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_encounter_rand_task.cpp",
            "refreshByGm",
            349);
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                  (common::milog::MiLogStream *const)&v40,
                  (const char (*)[12])"owner_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Scene::getOwnerUid((const Scene *const)thisa->world_scene_);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          v27 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v26,
                  (const char (*)[22])" createPatternGroup: ");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v4 + 128));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
          v9 = -1;
        }
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "refreshByGm",
      310);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&v40,
           (const char (*)[32])"findRandTaskExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v9 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = v9;
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 361: range 0000000015C71EB0-0000000015C72A2B
__int64 __fastcall SceneEncounterRandTask::tryCreateRandTaskByGm(
        SceneEncounterRandTask *const this,
        __int32 rand_task_id,
        Player *player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isRandTaskIdClosed; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *Position; // rax
  JsonConfigMgr *p_json_config_mgr; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t Level1AreaId; // eax
  common::milog::MiLogStream *v18; // r14
  SceneEncounterComp *EncounterComp; // rax
  unsigned __int64 v20; // rax
  RandTaskExcelConfigMgr *p_rand_task_config_mgr; // rcx
  SceneBlockGroupComp *BlockGroupComp; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  std::string v28; // [rsp+0h] [rbp-160h]
  Player *playera; // [rsp+8h] [rbp-158h]
  SceneEncounterRandTask *thisa; // [rsp+18h] [rbp-148h]
  unsigned int val; // [rsp+20h] [rbp-140h] BYREF
  uint32_t scene_id; // [rsp+24h] [rbp-13Ch]
  const data::RandTaskExcelConfig *task_config_ptr; // [rsp+28h] [rbp-138h]
  const Vector3 *avatar_pos; // [rsp+30h] [rbp-130h]
  const data::ConfigEnvironmentZone *zone_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v36; // [rsp+40h] [rbp-120h] BYREF
  std::string v37; // [rsp+50h] [rbp-110h] BYREF
  char v38[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v28._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v28._anon_0._M_allocated_capacity) = rand_task_id;
  v28._M_string_length = (std::string::size_type)player;
  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 10 holder:362 48 4 16 rand_task_id:360 64 12 12 task_pos:384 96 16 14 avatar_ptr:370 128 32 8 info:406";
  *(_QWORD *)(v3 + 16) = SceneEncounterRandTask::tryCreateRandTaskByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219020288;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = rand_task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v37, this->world_scene_);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x837u, v28);
  std::string::~string(&v37);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
  task_config_ptr = data::RandTaskExcelConfigMgrBase::findRandTaskExcelConfig(
                      &v6->design_config.txt_config_mgr.rand_task_config_mgr,
                      *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v36);
  if ( task_config_ptr )
  {
    Player::getCurAvatar((Player *const)(v3 + 96));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "tryCreateRandTaskByGm",
        373);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
        (common::milog::MiLogStream *const)&v37,
        (const char (*)[19])"getCurAvatar fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
      v8 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
      isRandTaskIdClosed = FeatureSwitchMgr::isRandTaskIdClosed(&v9->feature_switch_mgr, *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v36);
      if ( isRandTaskIdClosed )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_encounter_rand_task.cpp",
          "tryCreateRandTaskByGm",
          378);
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&v37,
                (const char (*)[15])"rand_taskd_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene_id = Scene::getSceneId((const Scene *const)thisa->world_scene_);
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Position = Entity::getPosition((const Entity *const)v13);
        avatar_pos = Position;
        if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(Position, 12LL);
        }
        *(Vector3 *)(v3 + 64) = *avatar_pos;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v36);
        p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.json_config_mgr;
        SceneComp = Player::getSceneComp(playera);
        Level1AreaId = PlayerSceneComp::getLevel1AreaId(SceneComp);
        zone_config_ptr = JsonConfigMgr::findConfigEnvironmentZone(
                            p_json_config_mgr,
                            scene_id,
                            Level1AreaId,
                            avatar_pos,
                            2u);
        std::shared_ptr<Config>::~shared_ptr(&v36);
        if ( zone_config_ptr )
        {
          if ( SceneEncounterRandTask::getNearestRandTaskPos(thisa, zone_config_ptr, avatar_pos, (Vector3 *)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_encounter_rand_task.cpp",
              "tryCreateRandTaskByGm",
              398);
            v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    (common::milog::MiLogStream *const)&v37,
                    (const char (*)[23])off_259BD080);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Scene::getOwnerUid((const Scene *const)thisa->world_scene_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EncounterComp = PlayerWorldScene::getEncounterComp(thisa->world_scene_);
            SceneEncounterComp::updateNextRefreshTime(EncounterComp, 0x1Eu);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_encounter_rand_task.cpp",
              "tryCreateRandTaskByGm",
              400);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&v37,
              (const char (*)[35])"current zone has no possible point");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
            v8 = -2;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v20 = (unsigned __int64)(thisa->_vptr_SceneEncounterBase + 5);
            if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
              v20 = __asan_report_load8();
            (*(void (__fastcall **)(SceneEncounterRandTask *))v20)(thisa);
            SceneEncounterRandTask::RandTaskInfo::RandTaskInfo((SceneEncounterRandTask::RandTaskInfo *const)(v3 + 128));
            *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 48);
            *(_QWORD *)(v3 + 148) = *(_QWORD *)(v3 + 64);
            *(_DWORD *)(v3 + 156) = *(_DWORD *)(v3 + 72);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v36);
            p_rand_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.rand_task_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&zone_config_ptr->level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)zone_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_config_ptr->level >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 136) = RandTaskExcelConfigMgr::findGroupReviseLevel(
                                      p_rand_task_config_mgr,
                                      zone_config_ptr->level);
            std::shared_ptr<Config>::~shared_ptr(&v36);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 144) = Scene::getOwnerUid((const Scene *const)thisa->world_scene_);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            BlockGroupComp = Scene::getBlockGroupComp((Scene *const)thisa->world_scene_);
            *(_DWORD *)(v3 + 140) = SceneBlockGroupComp::createPatternGroup(
                                      BlockGroupComp,
                                      *(_DWORD *)(v3 + 128),
                                      (const Vector3 *)(v3 + 148),
                                      *(_DWORD *)(v3 + 136),
                                      0);
            if ( *(_DWORD *)(v3 + 140) )
            {
              std::vector<SceneEncounterRandTask::RandTaskInfo>::push_back(
                &thisa->rand_task_vec_,
                (const std::vector<SceneEncounterRandTask::RandTaskInfo>::value_type *)(v3 + 128));
              SceneEncounterRandTask::onAddRandTask(thisa, (const SceneEncounterRandTask::RandTaskInfo *)(v3 + 128));
              v8 = 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_encounter_rand_task.cpp",
                "tryCreateRandTaskByGm",
                414);
              v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      (common::milog::MiLogStream *const)&v37,
                      (const char (*)[12])"owner_uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Scene::getOwnerUid((const Scene *const)thisa->world_scene_);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v24,
                      (const char (*)[22])" createPatternGroup: ");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v3 + 128));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
              v8 = -1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_encounter_rand_task.cpp",
            "tryCreateRandTaskByGm",
            392);
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            (common::milog::MiLogStream *const)&v37,
            (const char (*)[54])"zone config nullptr, should be wrong EnvZoneEventType");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
          v8 = -2;
        }
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "tryCreateRandTaskByGm",
      367);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&v37,
           (const char (*)[32])"findRandTaskExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    v8 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v8;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 426: range 0000000015C72A2C-0000000015C73941
__int64 __fastcall SceneEncounterRandTask::finishRandTask(
        SceneEncounterRandTask *const this,
        __int32 rand_task_id,
        __int8 is_succ)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneEncounterRandTask::finishRandTask::<lambda(const auto:26&)> v6; // r15d
  SceneEncounterRandTask::RandTaskInfo *M_current; // r14
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >::pointer v18; // rax
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >::pointer n; // rax
  const SceneEncounterRandTask::RandTaskInfo *v20; // rax
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >::pointer v21; // rdx
  RandTaskExcelConfigMgr *p_rand_task_config_mgr; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  Player *v28; // rax
  PlayerRandTaskComp *RandTaskComp; // rax
  uint32_t RewardNum; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  proto::ActionReasonType v33; // eax
  Player *v34; // rax
  PlayerItemComp *ItemComp; // r14
  Player *v36; // rax
  PlayerRandTaskComp *v37; // rax
  Player *v38; // r14
  Player *v39; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned int RandTaskMaxCD; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  unsigned int RandTaskMinCD; // eax
  SceneEncounterComp *EncounterComp; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  __int64 result; // rax
  std::string v60; // [rsp+0h] [rbp-210h]
  std::string v61; // [rsp+0h] [rbp-210h]
  unsigned int val; // [rsp+24h] [rbp-1ECh] BYREF
  uint32_t zone_level; // [rsp+28h] [rbp-1E8h]
  uint32_t reward_num_max; // [rsp+2Ch] [rbp-1E4h]
  proto::ActionReasonType type; // [rsp+30h] [rbp-1E0h]
  uint32_t cd; // [rsp+34h] [rbp-1DCh]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+38h] [rbp-1D8h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+40h] [rbp-1D0h] BYREF
  const data::RandTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-1C8h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+50h] [rbp-1C0h]
  std::shared_ptr<Player> *player_ptr; // [rsp+58h] [rbp-1B8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-1B0h] BYREF
  std::shared_ptr<google::protobuf::Message> v73; // [rsp+70h] [rbp-1A0h] BYREF
  ActionReason reason; // [rsp+80h] [rbp-190h] BYREF
  std::string v75; // [rsp+A0h] [rbp-170h] BYREF
  char v76[336]; // [rsp+C0h] [rbp-150h] BYREF

  *(&v60._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v60._anon_0._M_allocated_capacity) = rand_task_id;
  v60._anon_0._M_local_buf[0] = is_succ;
  v3 = (unsigned __int64)v76;
  v60._M_string_length = (std::string::size_type)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 1 10 holder:427 64 1 10 holder:459 80 4 13 owner_uid:429 96 4 11 drop_id:452 112 4 16 rand_"
                        "task_id:425 128 8 8 iter:430 160 12 12 position:445 192 16 11 log_ptr:460 224 24 14 player_vec:456";
  *(_QWORD *)(v3 + 16) = SceneEncounterRandTask::finishRandTask;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219020288;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 112) = rand_task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v75, this->world_scene_);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x838u, v60);
  std::string::~string(&v75);
  if ( *(_BYTE *)(((*(&v61._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 80) = Scene::getOwnerUid(*(const Scene *const *)(*(&v61._anon_0._M_allocated_capacity + 1) + 8));
  v6.__rand_task_id = *(_DWORD *)(v3 + 112);
  M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(*(&v61._anon_0._M_allocated_capacity + 1) + 16))._M_current;
  v8._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::begin((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(*(&v61._anon_0._M_allocated_capacity + 1) + 16))._M_current;
  *(__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v3 + 128) = std::find_if<__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>,SceneEncounterRandTask::finishRandTask(unsigned int,bool)::{lambda(__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>> const&)#1}>(v8, (__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >)M_current, v6);
  __for_end._M_current = (std::shared_ptr<Player> *)std::vector<SceneEncounterRandTask::RandTaskInfo>::end((std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(*(&v61._anon_0._M_allocated_capacity + 1) + 16))._M_current;
  if ( __gnu_cxx::operator==<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
         (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v3 + 128),
         (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "finishRandTask",
      433);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
           (common::milog::MiLogStream *const)&v75,
           (const char (*)[12])"owner_uid: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" rand_task_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 112));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" not in vector!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v75);
    v13 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v73);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
    task_config_ptr = data::RandTaskExcelConfigMgrBase::findRandTaskExcelConfig(
                        &v14->design_config.txt_config_mgr.rand_task_config_mgr,
                        *(_DWORD *)(v3 + 112));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
    if ( task_config_ptr )
    {
      v18 = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v3 + 128));
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(*(&v61._anon_0._M_allocated_capacity + 1) + 56),
        &v18->group_id);
      n = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v3 + 128));
      if ( (((unsigned __int8)n + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&n->position >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&n->position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&n->position.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)n + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&n->position.z + 3) >> 3) + 0x7FFF8000) )
      {
        n = (__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >::pointer)__asan_report_load_n(&n->position, 12LL);
      }
      *(_QWORD *)(v3 + 160) = *(_QWORD *)&n->position.x;
      *(float *)(v3 + 168) = n->position.z;
      v20 = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator*((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v3 + 128));
      SceneEncounterRandTask::onRemoveRandTask(
        *((SceneEncounterRandTask *const *)&v61._anon_0._M_allocated_capacity + 1),
        v20,
        v61._anon_0._M_local_buf[0],
        RemoveRandTaskInfoNotify_FinishReason_FINISH);
      v21 = __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v21->zone_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v21 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->zone_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      zone_level = v21->zone_level;
      __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo const*,std::vector<SceneEncounterRandTask::RandTaskInfo>>::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*>(
        (__gnu_cxx::__normal_iterator<const SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v3 + 128));
      std::vector<SceneEncounterRandTask::RandTaskInfo>::erase(
        (std::vector<SceneEncounterRandTask::RandTaskInfo> *const)(*(&v61._anon_0._M_allocated_capacity + 1) + 16),
        (std::vector<SceneEncounterRandTask::RandTaskInfo>::const_iterator)__for_end._M_current);
      *(_DWORD *)(v3 + 96) = 0;
      if ( v61._anon_0._M_local_buf[0] )
      {
        if ( *(_BYTE *)(((*(&v61._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Scene::getDropSurroundPlayers(
          (std::vector<std::shared_ptr<Player>> *)(v3 + 224),
          *(Scene *const *)(*(&v61._anon_0._M_allocated_capacity + 1) + 8),
          *(Vector3 *)(v3 + 160));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v73);
        p_rand_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->design_config.txt_config_mgr.rand_task_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->reward >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&task_config_ptr->reward >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 96) = RandTaskExcelConfigMgr::findDropId(
                                 p_rand_task_config_mgr,
                                 task_config_ptr->reward,
                                 zone_level);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
        if ( *(_BYTE *)(((*(&v61._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](
          &v75,
          *(PlayerWorldScene *const *)(*(&v61._anon_0._M_allocated_capacity + 1) + 8));
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 64), 0x83Cu, v61);
        std::string::~string(&v75);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyRandTaskReward>();
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        proto_log::PlayerLogBodyRandTaskReward::set_owner_uid(v23, *(_DWORD *)(v3 + 80));
        v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        proto_log::PlayerLogBodyRandTaskReward::set_rand_task_id(v24, *(_DWORD *)(v3 + 112));
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        proto_log::PlayerLogBodyRandTaskReward::set_drop_id(v25, *(_DWORD *)(v3 + 96));
        v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        proto_log::PlayerLogBodyRandTaskReward::set_zone_level(v26, zone_level);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v73);
        v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
        reward_num_max = ConstValueExcelConfigMgr::getRandTaskRewardMaxNum(&v27->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
        __for_range = (std::vector<std::shared_ptr<Player>> *)(v3 + 224);
        __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 224))._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin,
                  &__for_end) )
        {
          player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
          if ( std::operator!=<Player>(player_ptr, 0LL) )
          {
            v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
            RandTaskComp = Player::getRandTaskComp(v28);
            RewardNum = PlayerRandTaskComp::getRewardNum(RandTaskComp);
            if ( reward_num_max > RewardNum )
            {
              v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              if ( Player::getUid(v32) == *(_DWORD *)(v3 + 80) )
                v33 = ACTION_REASON_RAND_TASK_HOST;
              else
                v33 = ACTION_REASON_RAND_TASK_GUEST;
              type = v33;
              v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              ItemComp = Player::getItemComp(v34);
              ActionReason::ActionReason(&reason, type, ITEM_LIMIT_RAND_TASK_DROP);
              PlayerItemComp::grantDropItems(ItemComp, *(_DWORD *)(v3 + 96), 1u, &reason, 0LL);
              v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              v37 = Player::getRandTaskComp(v36);
              PlayerRandTaskComp::updateRewardNum(v37);
              v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v73, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRandTaskReward,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyRandTaskReward> *)(v3 + 192));
              Player::printStatLog(v38, &p_body_ptr, &v73, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v73);
              v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              EventComp = Player::getEventComp(v39);
              common::tools::perf::make_shared<RandTaskFinishEvent,unsigned int &,unsigned int &>(
                (unsigned int *)&p_body_ptr,
                (unsigned int *)(v3 + 80),
                (unsigned int *)(v3 + 112),
                (unsigned int *)(v3 + 80));
              std::shared_ptr<BaseEvent>::shared_ptr<RandTaskFinishEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v73,
                (std::shared_ptr<RandTaskFinishEvent> *)&p_body_ptr);
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v73);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v73);
              std::shared_ptr<RandTaskFinishEvent>::~shared_ptr((std::shared_ptr<RandTaskFinishEvent> *const)&p_body_ptr);
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v75,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_encounter_rand_task.cpp",
                "finishRandTask",
                477);
              v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      (common::milog::MiLogStream *const)&v75,
                      (const char (*)[12])"owner_uid: ");
              v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v41,
                      (const unsigned int *)(v3 + 80));
              v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])" uid: ");
              v44 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              val = Player::getUid(v44);
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
              v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v45,
                      (const char (*)[14])" grant drop: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                (const unsigned int *)(v3 + 96));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v75);
            }
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
        }
        std::shared_ptr<proto_log::PlayerLogBodyRandTaskReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRandTaskReward> *const)(v3 + 192));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 64));
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 224));
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v73);
      v47 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
      RandTaskMaxCD = ConstValueExcelConfigMgr::getRandTaskMaxCD(&v47->design_config.txt_config_mgr.const_value_config_mgr);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_body_ptr);
      v49 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_body_ptr);
      RandTaskMinCD = ConstValueExcelConfigMgr::getRandTaskMinCD(&v49->design_config.txt_config_mgr.const_value_config_mgr);
      cd = common::tools::RandomUtils::rand<unsigned int>(RandTaskMinCD, RandTaskMaxCD);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_body_ptr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
      if ( *(_BYTE *)(((*(&v61._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EncounterComp = PlayerWorldScene::getEncounterComp(*(PlayerWorldScene *const *)(*(&v61._anon_0._M_allocated_capacity
                                                                                      + 1)
                                                                                    + 8));
      SceneEncounterComp::updateNextRefreshTime(EncounterComp, cd);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v75,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "finishRandTask",
        486);
      v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)&v75,
              (const char (*)[12])"owner_uid: ");
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v3 + 80));
      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v53, (const char (*)[16])" rand_task_id: ");
      v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v54,
              (const unsigned int *)(v3 + 112));
      v56 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v55, (const char (*)[11])" is_succ: ");
      v57 = common::milog::MiLogStream::operator<<(v56, v61._anon_0._M_local_buf[0]);
      v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v57, (const char (*)[11])" drop_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v75);
      v13 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_rand_task.cpp",
        "finishRandTask",
        439);
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)&v75,
              (const char (*)[12])"owner_uid: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
      v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v16,
              (const char (*)[41])"findRandTaskExcelConfig fails, task_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v75);
      v13 = -1;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v13;
  if ( v61._M_string_length == v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 430: range 0000000015D1ACD0-0000000015D1AD61
bool __cdecl SceneEncounterRandTask::finishRandTask::_lambda_const_auto_26___::operator()_SceneEncounterRandTask::RandTaskInfo_(
        const SceneEncounterRandTask::finishRandTask::<lambda(const auto:26&)> *const __closure,
        const SceneEncounterRandTask::RandTaskInfo *info)
{
  uint32_t rand_task_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rand_task_id = info->rand_task_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return rand_task_id == __closure->__rand_task_id;
};

// Line 491: range 0000000015C73942-0000000015C73AA1
bool __cdecl SceneEncounterRandTask::isCreatedByRandTask(
        SceneEncounterRandTask *const this,
        uint32_t group_id,
        uint32_t rand_task_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  SceneEncounterRandTask::RandTaskInfo *M_current; // r15
  std::vector<SceneEncounterRandTask::RandTaskInfo>::iterator v7; // rax
  bool result; // al
  __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF
  SceneEncounterRandTask::isCreatedByRandTask::<lambda(const auto:27&)> v12; // 0:rdx.8

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:492";
  *(_QWORD *)(v3 + 16) = SceneEncounterRandTask::isCreatedByRandTask;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end(&this->rand_task_vec_)._M_current;
  v7._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::begin(&this->rand_task_vec_)._M_current;
  v12.__group_id = group_id;
  v12.__rand_task_id = rand_task_id;
  *(__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v3 + 32) = std::find_if<__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>,SceneEncounterRandTask::isCreatedByRandTask(unsigned int,unsigned int)::{lambda(__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>> const&)#1}>(v7, (__gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> >)M_current, v12);
  __rhs._M_current = std::vector<SceneEncounterRandTask::RandTaskInfo>::end(&this->rand_task_vec_)._M_current;
  result = __gnu_cxx::operator!=<SceneEncounterRandTask::RandTaskInfo *,std::vector<SceneEncounterRandTask::RandTaskInfo>>(
             (const __gnu_cxx::__normal_iterator<SceneEncounterRandTask::RandTaskInfo*,std::vector<SceneEncounterRandTask::RandTaskInfo> > *)(v3 + 32),
             &__rhs);
  if ( v11 == (char *)v3 )
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

// Line 492: range 0000000015D1AE3A-0000000015D1AF63
bool __cdecl SceneEncounterRandTask::isCreatedByRandTask::_lambda_const_auto_27___::operator()_SceneEncounterRandTask::RandTaskInfo_(
        const SceneEncounterRandTask::isCreatedByRandTask::<lambda(const auto:27&)> *const __closure,
        const SceneEncounterRandTask::RandTaskInfo *info)
{
  uint32_t rand_task_id; // ecx
  uint32_t group_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rand_task_id = info->rand_task_id;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__rand_task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__rand_task_id >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( rand_task_id != __closure->__rand_task_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&info->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  group_id = info->group_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return group_id == __closure->__group_id;
};

// Line 500: range 0000000015C73AA2-0000000015C74089
void __cdecl SceneEncounterRandTask::onAddRandTask(
        SceneEncounterRandTask *const this,
        const SceneEncounterRandTask::RandTaskInfo *info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::Vector *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  RandTaskExcelConfigMgr *p_rand_task_config_mgr; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Player *v10; // r14
  const data::RandTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v13; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 20 owner_player_ptr:501 64 16 11 log_ptr:515 96 32 10 notify:509";
  *(_QWORD *)(v2 + 16) = SceneEncounterRandTask::onAddRandTask;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "onAddRandTask",
      504);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    proto::AddRandTaskInfoNotify::AddRandTaskInfoNotify((proto::AddRandTaskInfoNotify *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AddRandTaskInfoNotify::set_rand_task_id((proto::AddRandTaskInfoNotify *const)(v2 + 96), info->rand_task_id);
    Vector3::operator proto::Vector((proto::Vector *)&v14, &info->position);
    v5 = proto::AddRandTaskInfoNotify::mutable_pos((proto::AddRandTaskInfoNotify *const)(v2 + 96));
    proto::Vector::operator=(v5, (proto::Vector *)&v14);
    proto::Vector::~Vector((proto::Vector *const)&v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyAllPlayer<proto::AddRandTaskInfoNotify>(
      (Scene *const)this->world_scene_,
      (proto::AddRandTaskInfoNotify *)(v2 + 96),
      0);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyRandTaskGen>();
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyRandTaskGen::set_rand_task_id(v6, info->rand_task_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_rand_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.rand_task_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    task_config_ptr = data::RandTaskExcelConfigMgrBase::findRandTaskExcelConfig(
                        p_rand_task_config_mgr,
                        info->rand_task_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v13);
    if ( task_config_ptr )
    {
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->content_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->content_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyRandTaskGen::set_task_content_type(v8, task_config_ptr->content_type);
    }
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&info->uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyRandTaskGen::set_enter_uid(v9, info->uid);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v13, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRandTaskGen,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyRandTaskGen> *)(v2 + 64));
    Player::printStatLog(v10, &p_body_ptr, &v13, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v13);
    std::shared_ptr<proto_log::PlayerLogBodyRandTaskGen>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRandTaskGen> *const)(v2 + 64));
    proto::AddRandTaskInfoNotify::~AddRandTaskInfoNotify((proto::AddRandTaskInfoNotify *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 527: range 0000000015C7408A-0000000015C74689
void __fastcall SceneEncounterRandTask::onRemoveRandTask(
        SceneEncounterRandTask *const this,
        unsigned __int64 info,
        bool is_succ,
        proto::RemoveRandTaskInfoNotify::FinishReason reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned int val; // [rsp+2Ch] [rbp-134h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-110h] BYREF
  char v26[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 10 reason:526 64 16 20 owner_player_ptr:528 96 16 11 log_ptr:543 128 32 10 notify:536";
  *(_QWORD *)(v4 + 16) = SceneEncounterRandTask::onRemoveRandTask;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v4 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "onRemoveRandTask",
      531);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v25, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    proto::RemoveRandTaskInfoNotify::RemoveRandTaskInfoNotify((proto::RemoveRandTaskInfoNotify *const)(v4 + 128));
    if ( *(_BYTE *)((info >> 3) + 0x7FFF8000) != 0 && (char)((info & 7) + 3) >= *(_BYTE *)((info >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    proto::RemoveRandTaskInfoNotify::set_rand_task_id(
      (proto::RemoveRandTaskInfoNotify *const)(v4 + 128),
      *(_DWORD *)info);
    proto::RemoveRandTaskInfoNotify::set_is_succ((proto::RemoveRandTaskInfoNotify *const)(v4 + 128), is_succ);
    proto::RemoveRandTaskInfoNotify::set_reason(
      (proto::RemoveRandTaskInfoNotify *const)(v4 + 128),
      *(proto::RemoveRandTaskInfoNotify_FinishReason *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyAllPlayer<proto::RemoveRandTaskInfoNotify>(
      (Scene *const)this->world_scene_,
      (proto::RemoveRandTaskInfoNotify *)(v4 + 128),
      0);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyRandTaskFinish>();
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)((info >> 3) + 0x7FFF8000) != 0 && (char)((info & 7) + 3) >= *(_BYTE *)((info >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    proto_log::PlayerLogBodyRandTaskFinish::set_rand_task_id(v7, *(_DWORD *)info);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    proto_log::PlayerLogBodyRandTaskFinish::set_is_succ(v8, is_succ);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    proto_log::PlayerLogBodyRandTaskFinish::set_reason(v9, *(_DWORD *)(v4 + 48));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) != 0
      && (char)(((info + 16) & 7) + 3) >= *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyRandTaskFinish::set_enter_uid(v10, *(_DWORD *)(info + 16));
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish> *)(v4 + 96));
    Player::printStatLog(v11, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_encounter_rand_task.cpp",
      "onRemoveRandTask",
      550);
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"owner_uid: ");
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    val = Player::getUid(v13);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" removeRandTask: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)info);
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" is_succ: ");
    v18 = common::milog::MiLogStream::operator<<(v17, is_succ);
    v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" reason: ");
    common::milog::MiLogStream::operator<<<proto::RemoveRandTaskInfoNotify_FinishReason,(proto::RemoveRandTaskInfoNotify_FinishReason*)0>(
      v19,
      (const proto::RemoveRandTaskInfoNotify_FinishReason *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish> *const)(v4 + 96));
    proto::RemoveRandTaskInfoNotify::~RemoveRandTaskInfoNotify((proto::RemoveRandTaskInfoNotify *const)(v4 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
