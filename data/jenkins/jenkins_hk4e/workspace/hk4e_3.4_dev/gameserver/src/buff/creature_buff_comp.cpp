// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/buff/creature_buff_comp.cpp

// Line 21: range 000000001555AEFA-000000001555B348
int32_t __cdecl CreatureBuffComp::onEnterScene(CreatureBuffComp *const this, ScenePtr *p_scene_ptr)
{
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  CreatureBuffComp **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  SceneUnixTimer *v10; // rax
  CreatureBuffComp *v11; // [rsp+18h] [rbp-88h] BYREF
  void (*__f[2])(CreatureBuffComp *, unsigned __int64); // [rsp+20h] [rbp-80h] BYREF
  std::shared_ptr<Scene> v13; // [rsp+30h] [rbp-70h] BYREF
  std::_Bind_helper<false,void (CreatureBuffComp::*)(long unsigned int),CreatureBuffComp*,const std::_Placeholder<1>&>::type v14; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-40h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->has_entered_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_entered_scene_);
  if ( this->has_entered_scene_ )
    return 0;
  if ( std::operator!=<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
  {
    v3 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v3) )
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
      common::tools::MiTimer::cancel(v5);
    }
  }
  if ( std::operator!=<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    std::__shared_ptr<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->update_timer_ptr_);
  v11 = this;
  __f[0] = (void (*)(CreatureBuffComp *, unsigned __int64))CreatureBuffComp::onMsTimer;
  __f[1] = 0LL;
  std::bind<void (CreatureBuffComp::*)(unsigned long),CreatureBuffComp*,std::_Placeholder<1> const&>(
    &v14,
    __f,
    &v11,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v6,
    v7);
  common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,std::_Bind<void (CreatureBuffComp::*)(unsigned long) ()(CreatureBuffComp*,std::_Placeholder<1>)>>(
    &v13,
    (std::_Bind<void (CreatureBuffComp::*(CreatureBuffComp*,std::_Placeholder<1>))(long unsigned int)> *)p_scene_ptr,
    (std::shared_ptr<Scene> *)&v14,
    (std::_Bind<void (CreatureBuffComp::*(CreatureBuffComp*,std::_Placeholder<1>))(long unsigned int)> *)p_scene_ptr);
  std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v13);
  std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v13);
  if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/creature_buff_comp.cpp",
      "onEnterScene",
      43);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v15,
           (const char (*)[37])"update_timer_ptr_ is null, creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
LABEL_20:
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v8, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  if ( std::multimap<unsigned int,std::shared_ptr<Buff>>::size(&this->buff_mmap_) )
  {
    v9 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
    if ( !common::tools::MiTimer::isActive(v9) )
    {
      v10 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
      if ( SceneUnixTimer::startMS(v10, 0xC8u, 1, "./src/buff/creature_buff_comp.cpp", "onEnterScene", 50) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/creature_buff_comp.cpp",
          "onEnterScene",
          52);
        v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v15,
               (const char (*)[42])"update_timer_ptr_ start failed, creature:");
        if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->creature_);
        goto LABEL_20;
      }
    }
  }
  if ( *(char *)(((unsigned __int64)&this->has_entered_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_entered_scene_);
  this->has_entered_scene_ = 1;
  return 0;
};

// Line 63: range 000000001555B34A-000000001555B443
int32_t __cdecl CreatureBuffComp::onLevelScene(CreatureBuffComp *const this)
{
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->has_entered_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_entered_scene_);
  this->has_entered_scene_ = 0;
  if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    return 0;
  v2 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
  if ( common::tools::MiTimer::isActive(v2) )
  {
    v3 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
    common::tools::MiTimer::cancel(v3);
  }
  CreatureBuffComp::delAllBuffs(this);
  return 0;
};

// Line 84: range 000000001555B444-000000001555B4C1
int32_t __cdecl CreatureBuffComp::toClient(const CreatureBuffComp *const this, proto::SceneEntityInfo *entity_info)
{
  google::protobuf::RepeatedPtrField<proto::ServerBuff> *v3; // rdx

  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
    return 0;
  v3 = proto::SceneEntityInfo::mutable_server_buff_list(entity_info);
  return CreatureBuffComp::toClient(this, v3);
};

// Line 95: range 000000001555B4C2-000000001555B6B8
int32_t __cdecl CreatureBuffComp::toClient(const CreatureBuffComp *const this, ProtoServerBuffList *server_buff_list)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rbx
  proto::ServerBuff *v7; // rax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v11; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
    return 0;
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v11);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v11);
    if ( std::operator==<Buff>(0LL, buff_ptr) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/creature_buff_comp.cpp",
        "toClient",
        104);
      v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"buff_ptr is null, buff_id:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, buff_id);
      v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v4, (const char (*)[11])" creature:");
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v5, this->creature_);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      v7 = google::protobuf::RepeatedPtrField<proto::ServerBuff>::Add(server_buff_list);
      Buff::toClient(v6, v7);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 114: range 000000001555B6BA-000000001555B789
bool __fastcall CreatureBuffComp::isHasBuff(const CreatureBuffComp *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 buff_id:113";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::isHasBuff;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = buff_id;
  result = common::tools::MiscUtils::isContains<std::multimap<unsigned int,std::shared_ptr<Buff>> const,unsigned int>(
             &this->buff_mmap_,
             (const unsigned int *)(v2 + 32));
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

// Line 120: range 000000001555B78A-000000001555B94F
__int64 __fastcall CreatureBuffComp::isHasBuff(const CreatureBuffComp *const this, uint32_t buff_id, uint32_t buff_uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v7; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __int64 result; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 buff_id:119 64 8 8 iter:122 96 16 13 iter_pair:121";
  *(_QWORD *)(v3 + 16) = CreatureBuffComp::isHasBuff;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = buff_id;
  *(std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >,std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > > *)(v3 + 96) = std::multimap<unsigned int,std::shared_ptr<Buff>>::equal_range(&this->buff_mmap_, (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v3 + 48));
  *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 96);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v3 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v3 + 104)) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
    if ( std::operator!=<Buff>(0LL, &v6->second) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
      v8 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7->second);
      if ( buff_uid == Buff::getBuffUid(v8) )
      {
        result = 1LL;
        goto LABEL_14;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
  }
  result = 0LL;
LABEL_14:
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 134: range 000000001555B950-000000001555C641
__int64 __fastcall CreatureBuffComp::addBuff(CreatureBuffComp *const this, uint32_t buff_id, uint32_t buff_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  data::BuffStackType stack_type; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v11; // rax
  Buff *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // edx
  Buff *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Buff *v19; // r14
  uint32_t NextServerBuffUid; // eax
  Buff *v21; // rcx
  Buff *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self __y; // [rsp+18h] [rbp-128h] BYREF
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+20h] [rbp-120h]
  uint64_t cur_time_ms; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-110h] BYREF
  char v33[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 buff_id:133 64 8 6 it:181 96 16 13 scene_ptr:139 128 16 12 buff_ptr:208 160 16 12 buff_ptr:184";
  *(_QWORD *)(v3 + 16) = CreatureBuffComp::addBuff;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = buff_id;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
  {
    v6 = 0;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  Entity::getScene((const Entity *const)(v3 + 96));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    if ( *(char *)(((unsigned __int64)&this->has_entered_scene_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->has_entered_scene_);
    if ( !this->has_entered_scene_ )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/buff/creature_buff_comp.cpp",
        "addBuff",
        148);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(&v32, (const char (*)[47])off_257F8B60);
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      goto LABEL_13;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 160));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(
                        &v8->design_config.txt_config_mgr.buff_config_mgr,
                        *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
    if ( !buff_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/creature_buff_comp.cpp",
        "addBuff",
        154);
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v32,
             (const char (*)[36])"findBuffExcelConfig fails, buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
      v6 = -1;
      goto LABEL_65;
    }
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)buff_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&buff_config_ptr->time);
    }
    if ( buff_config_ptr->time >= 0.0 )
    {
      if ( !buff_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)buff_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&buff_config_ptr->time);
        }
        buff_time = (int)(float)(1000.0 * buff_config_ptr->time);
      }
    }
    else
    {
      buff_time = -1;
    }
    cur_time_ms = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->stack_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->stack_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&buff_config_ptr->stack_type);
    }
    stack_type = buff_config_ptr->stack_type;
    if ( stack_type != BUFF_STACK )
    {
      if ( stack_type > BUFF_STACK )
      {
LABEL_46:
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/creature_buff_comp.cpp",
          "addBuff",
          201);
        v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v32,
                (const char (*)[24])"unsupported stack_type:");
        common::milog::MiLogStream::operator<<<data::BuffStackType,(data::BuffStackType*)0>(
          v15,
          &buff_config_ptr->stack_type);
        common::milog::MiLogStream::~MiLogStream(&v32);
        goto LABEL_47;
      }
      if ( stack_type )
      {
        if ( stack_type != BUFF_EXTEND )
          goto LABEL_46;
        *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v3 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::find(
                                                                                      &this->buff_mmap_,
                                                                                      (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v3 + 48));
        __y._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v3 + 64),
               &__y) )
        {
          v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
          std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)(v3 + 160), &v11->second);
          v12 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( Buff::extend(v12, buff_time) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/buff/creature_buff_comp.cpp",
              "addBuff",
              187);
            v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v32,
                    (const char (*)[27])"extendTime fails, buff_id:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v3 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->creature_);
            common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v14, this->creature_);
            common::milog::MiLogStream::~MiLogStream(&v32);
            v6 = -1;
          }
          else
          {
            v6 = 0;
          }
          std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v3 + 160));
          goto LABEL_65;
        }
      }
      else if ( CreatureBuffComp::isHasBuff(this, *(_DWORD *)(v3 + 48)) )
      {
        CreatureBuffComp::delBuff(this, *(_DWORD *)(v3 + 48));
      }
    }
LABEL_47:
    v16 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&buff_config_ptr->group_id);
    }
    CreatureBuffComp::delAllBuffByGroupId(this, buff_config_ptr->group_id, v16);
    common::tools::perf::make_shared<Buff,unsigned int &>((unsigned int *)(v3 + 128), (unsigned int *)(v3 + 48));
    if ( std::operator==<Buff>((const std::shared_ptr<Buff> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/creature_buff_comp.cpp",
        "addBuff",
        211);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v32, (const char (*)[17])"buff_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v6 = -1;
    }
    else
    {
      v17 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Buff::init(v17) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/creature_buff_comp.cpp",
          "addBuff",
          216);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v32,
                (const char (*)[25])"buff init fail, buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v6 = -1;
      }
      else
      {
        v19 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        NextServerBuffUid = CreatureBuffComp::getNextServerBuffUid(this);
        Buff::setBuffUid(v19, NextServerBuffUid);
        v21 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->server_buff_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->server_buff_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&buff_config_ptr->server_buff_type);
        }
        Buff::setBuffType(v21, buff_config_ptr->server_buff_type);
        v22 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( (unsigned int)Buff::start(v22, buff_time, cur_time_ms) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/creature_buff_comp.cpp",
            "addBuff",
            223);
          v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v32,
                  (const char (*)[22])"start fails, buff_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
        }
        else
        {
          std::shared_ptr<Buff>::shared_ptr(
            (std::shared_ptr<Buff> *const)(v3 + 160),
            (const std::shared_ptr<Buff> *)(v3 + 128));
          v25 = CreatureBuffComp::addBuff(this, (BuffPtr *)(v3 + 160)) != 0;
          std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v3 + 160));
          if ( !v25 )
          {
            CreatureBuffComp::onMsTimer(this, cur_time_ms);
            v6 = 0;
            goto LABEL_64;
          }
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/creature_buff_comp.cpp",
            "addBuff",
            228);
          v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v32, (const char (*)[25])off_257F7CC0);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
        }
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, this->creature_);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v6 = -1;
      }
    }
LABEL_64:
    std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v3 + 128));
    goto LABEL_65;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/buff/creature_buff_comp.cpp",
    "addBuff",
    143);
  v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v32, (const char (*)[26])off_257F8B20);
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
LABEL_13:
  common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v7, this->creature_);
  common::milog::MiLogStream::~MiLogStream(&v32);
  v6 = 0;
LABEL_65:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
LABEL_66:
  result = v6;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 237: range 000000001555C642-000000001555C933
int32_t __cdecl CreatureBuffComp::addBuff(CreatureBuffComp *const this, BuffPtr *p_buff_ptr)
{
  common::milog::MiLogStream *v3; // rcx
  bool v4; // bl
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Buff *v7; // rdx
  std::shared_ptr<Buff> v8; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
    return 0;
  if ( std::operator==<Buff>(p_buff_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/creature_buff_comp.cpp",
      "addBuff",
      244);
    v3 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"buff_ptr is nullptr, creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v3, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    std::shared_ptr<Buff>::shared_ptr(&v8, p_buff_ptr);
    v4 = CreatureBuffComp::internalAddBuff(this, &v8) != 0;
    std::shared_ptr<Buff>::~shared_ptr(&v8);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/creature_buff_comp.cpp",
        "addBuff",
        249);
      v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v9,
             (const char (*)[32])"internalAddBuff fail. creature:");
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v5, this->creature_);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/buff/creature_buff_comp.cpp",
        "addBuff",
        252);
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v9, (const char (*)[11])off_257F7D40);
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, this->creature_);
      common::milog::MiLogStream::~MiLogStream(&v9);
      v7 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
      return CreatureBuffComp::notifyBuffAdd(this, v7);
    }
  }
};

// Line 257: range 000000001555C934-000000001555D3F6
int32_t __cdecl CreatureBuffComp::internalAddBuff(CreatureBuffComp *const this, BuffPtr *p_buff_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::shared_ptr<Buff> *v9; // r8
  common::milog::MiLogStream *v10; // rax
  Buff *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 v18; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t BuffId; // eax
  __int64 v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  SceneUnixTimer *v32; // rax
  char v33; // al
  common::milog::MiLogStream *v34; // rcx
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-2D8h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-2D0h] BYREF
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+28h] [rbp-2C8h]
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-2C0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v39; // [rsp+38h] [rbp-2B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+40h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *map_item_buff_ptr; // [rsp+48h] [rbp-2A8h]
  std::shared_ptr<Config> v42; // [rsp+50h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-290h] BYREF
  common::milog::MiLogStream v44; // [rsp+80h] [rbp-270h] BYREF
  char v45[592]; // [rsp+A0h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 11 buff_id:263 48 4 25 instanced_modifier_id:271 64 4 14 buff_count:293 80 392 6 ss:283";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::internalAddBuff;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  if ( std::operator==<Buff>(p_buff_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/creature_buff_comp.cpp",
      "internalAddBuff",
      260);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v44,
           (const char (*)[31])"buff_ptr is nullptr, creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v5, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v44);
    result = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
    *(_DWORD *)(v2 + 32) = Buff::getBuffId(v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
    buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(
                        &v8->design_config.txt_config_mgr.buff_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v42);
    if ( buff_config_ptr )
    {
      std::multimap<unsigned int,std::shared_ptr<Buff>>::emplace<unsigned int &,std::shared_ptr<Buff>&>(
        &this->buff_mmap_,
        (unsigned int *)(v2 + 32),
        p_buff_ptr,
        (unsigned int *)&this->buff_mmap_,
        v9);
      *(_DWORD *)(v2 + 48) = CreatureBuffComp::getSmallestUnusedServerModifierId(this);
      if ( *(_DWORD *)(v2 + 48) )
      {
        v11 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
        Buff::setInstancedModifierId(v11, *(_DWORD *)(v2 + 48));
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/buff/creature_buff_comp.cpp",
          "internalAddBuff",
          279);
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v44,
                (const char (*)[20])"internal add buff, ");
        if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->creature_);
        v13 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v12, this->creature_);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", buff_id:");
        v15 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
        *(_DWORD *)(v2 + 64) = Buff::getBuffId(v15);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])"modifier_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v44);
        if ( std::multimap<unsigned int,std::shared_ptr<Buff>>::size(&this->buff_mmap_) > 0x14 )
        {
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 80);
          __for_range = &this->buff_mmap_;
          __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
          __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
            _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v39);
            map_item_buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v39);
            if ( std::operator!=<Buff>(map_item_buff_ptr, 0LL) )
            {
              v18 = std::operator<<<std::char_traits<char>>(v2 + 96, "buff_id:");
              v19 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)map_item_buff_ptr);
              BuffId = Buff::getBuffId(v19);
              v21 = std::ostream::operator<<(v18, BuffId);
              std::operator<<<std::char_traits<char>>(v21, "\n");
            }
            std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/creature_buff_comp.cpp",
            "internalAddBuff",
            291);
          v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v43, (const char (*)[22])off_257F8080);
          __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::multimap<unsigned int,std::shared_ptr<Buff>>::size(&this->buff_mmap_);
          v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v22,
                  (const unsigned __int64 *)&__for_end);
          v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])", creature:");
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          v25 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, this->creature_);
          v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])"\n buffs:");
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v44, v2 + 80);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)&v44);
          std::string::~string(&v44);
          common::milog::MiLogStream::~MiLogStream(&v43);
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 80);
        }
        *(_DWORD *)(v2 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::count(
                                 &this->buff_mmap_,
                                 (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v2 + 32));
        if ( *(_DWORD *)(v2 + 64) > 3u )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/creature_buff_comp.cpp",
            "internalAddBuff",
            297);
          v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v44, (const char (*)[24])off_257F8140);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 32));
          v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])", count:");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v2 + 64));
          v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])", creature:");
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v31, this->creature_);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        if ( std::multimap<unsigned int,std::shared_ptr<Buff>>::size(&this->buff_mmap_)
          && (!std::operator!=<SceneUnixTimer>(&this->update_timer_ptr_, 0LL)
           || (v32 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_),
               !SceneUnixTimer::startMS(v32, 0xC8u, 1, "./src/buff/creature_buff_comp.cpp", "internalAddBuff", 303))
            ? (v33 = 0)
            : (v33 = 1),
              v33) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/creature_buff_comp.cpp",
            "internalAddBuff",
            305);
          v34 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v44,
                  (const char (*)[42])"update_timer_ptr_ start failed, creature:");
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v34, this->creature_);
          common::milog::MiLogStream::~MiLogStream(&v44);
          result = -1;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/buff/creature_buff_comp.cpp",
          "internalAddBuff",
          274);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v44,
          (const char (*)[40])"getSmallestUnusedServerModifierId fails");
        common::milog::MiLogStream::~MiLogStream(&v44);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/creature_buff_comp.cpp",
        "internalAddBuff",
        267);
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v44,
              (const char (*)[36])"findBuffExcelConfig fails, buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v44);
      result = -1;
    }
  }
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 315: range 000000001555D3F8-000000001555D92D
__int64 __fastcall CreatureBuffComp::delBuff(CreatureBuffComp *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Buff *v18; // rax
  Buff *v19; // rax
  unsigned int val; // [rsp+18h] [rbp-F8h] BYREF
  unsigned int InstancedModifierId; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 buff_id:314 64 8 8 iter:327 96 16 13 iter_pair:320 128 16 12 buff_ptr:329";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::delBuff;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = buff_id;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( !this->is_enable_ )
  {
    result = 0LL;
  }
  else
  {
    *(std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >,std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > > *)(v2 + 96) = std::multimap<unsigned int,std::shared_ptr<Buff>>::equal_range(&this->buff_mmap_, (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v2 + 48));
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 96),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 104)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/buff/creature_buff_comp.cpp",
        "delBuff",
        323);
      v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v22, (const char (*)[20])off_257F8260);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 64) = *(_QWORD *)(v2 + 96);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 64),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 104)) )
      {
        v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v2 + 64));
        std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)(v2 + 128), &v7->second);
        *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::erase[abi:cxx11](
                                                                                      &this->buff_mmap_,
                                                                                      *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 64));
        if ( std::operator==<Buff>(0LL, (const std::shared_ptr<Buff> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/creature_buff_comp.cpp",
            "delBuff",
            333);
          v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v22,
                 (const char (*)[27])"buff_ptr is null, buff_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v2 + 48));
          v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" creature_:");
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v10, this->creature_);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/buff/creature_buff_comp.cpp",
            "delBuff",
            337);
          v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v22, (const char (*)[11])off_257F8D80);
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          v12 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v11, this->creature_);
          v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", buff_id:");
          v14 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = Buff::getBuffId(v14);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])"modifier_id:");
          v17 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          InstancedModifierId = Buff::getInstancedModifierId(v17);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &InstancedModifierId);
          common::milog::MiLogStream::~MiLogStream(&v22);
          v18 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          CreatureBuffComp::notifyBuffDel(this, v18);
          v19 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Buff::setInstancedModifierId(v19, 0);
        }
        std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 128));
      }
      result = 0LL;
    }
  }
  if ( v23 == (char *)v2 )
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
  return result;
};

// Line 347: range 000000001555D92E-000000001555DCC6
void __cdecl CreatureBuffComp::delAllBuffByGroupId(
        CreatureBuffComp *const this,
        uint32_t group_id,
        uint32_t except_buff_id)
{
  std::set<unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v14; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-A8h]
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (std::set<unsigned int> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::set<unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 22 to_del_buff_id_set:357";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)CreatureBuffComp::delAllBuffByGroupId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ && group_id )
  {
    std::set<unsigned int>::set(v3 + 1);
    __for_range = &this->buff_mmap_;
    __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
    __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
      buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v14);
      buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v14);
      if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(buff_id);
      }
      if ( except_buff_id != *buff_id )
      {
        v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
        if ( group_id == Buff::getGroupId(v6) )
          std::set<unsigned int>::insert(v3 + 1, buff_id);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
    }
    __for_range_0 = v3 + 1;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::begin(v3 + 1)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      CreatureBuffComp::delBuff(this, *v8);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    std::set<unsigned int>::~set(v3 + 1);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 377: range 000000001555DCC8-000000001555DF25
int32_t __cdecl CreatureBuffComp::notifyBuffAdd(CreatureBuffComp *const this, Buff *buff)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t EntityId; // eax
  proto::ServerBuff *v6; // rdx
  int32_t result; // eax
  char v8[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 notify:382";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::notifyBuffAdd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    proto::ServerBuffChangeNotify::ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
    proto::ServerBuffChangeNotify::set_server_buff_change_type(
      (proto::ServerBuffChangeNotify *const)(v2 + 32),
      ServerBuffChangeNotify_ServerBuffChangeType_ADD_SERVER_BUFF);
    proto::ServerBuffChangeNotify::set_is_creature_buff((proto::ServerBuffChangeNotify *const)(v2 + 32), 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    EntityId = Entity::getEntityId((const Entity *const)this->creature_);
    proto::ServerBuffChangeNotify::add_entity_id_list((proto::ServerBuffChangeNotify *const)(v2 + 32), EntityId);
    v6 = proto::ServerBuffChangeNotify::add_server_buff_list((proto::ServerBuffChangeNotify *const)(v2 + 32));
    Buff::toClient(buff, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    Entity::notifySelf<proto::ServerBuffChangeNotify>(
      (Entity *const)this->creature_,
      (proto::ServerBuffChangeNotify *)(v2 + 32));
    proto::ServerBuffChangeNotify::~ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
  }
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 393: range 000000001555DF26-000000001555E183
int32_t __cdecl CreatureBuffComp::notifyBuffDel(CreatureBuffComp *const this, Buff *buff)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t EntityId; // eax
  proto::ServerBuff *v6; // rdx
  int32_t result; // eax
  char v8[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 notify:398";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::notifyBuffDel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    proto::ServerBuffChangeNotify::ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
    proto::ServerBuffChangeNotify::set_server_buff_change_type(
      (proto::ServerBuffChangeNotify *const)(v2 + 32),
      ServerBuffChangeNotify_ServerBuffChangeType_DEL_SERVER_BUFF);
    proto::ServerBuffChangeNotify::set_is_creature_buff((proto::ServerBuffChangeNotify *const)(v2 + 32), 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    EntityId = Entity::getEntityId((const Entity *const)this->creature_);
    proto::ServerBuffChangeNotify::add_entity_id_list((proto::ServerBuffChangeNotify *const)(v2 + 32), EntityId);
    v6 = proto::ServerBuffChangeNotify::add_server_buff_list((proto::ServerBuffChangeNotify *const)(v2 + 32));
    Buff::toClient(buff, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    Entity::notifySelf<proto::ServerBuffChangeNotify>(
      (Entity *const)this->creature_,
      (proto::ServerBuffChangeNotify *)(v2 + 32));
    proto::ServerBuffChangeNotify::~ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
  }
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 409: range 000000001555E184-000000001555E40E
void __cdecl CreatureBuffComp::onMsTimer(CreatureBuffComp *const this, uint64_t player_time_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v5; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  Buff *v8; // rdx
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 it:410 64 16 12 buff_ptr:412";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::onMsTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 32) = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_);
  while ( 1 )
  {
    __y._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 32),
            &__y) )
      break;
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v2 + 32));
    std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)(v2 + 64), &v5->second);
    if ( std::operator==<Buff>((const std::shared_ptr<Buff> *)(v2 + 64), 0LL)
      || (v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          Buff::isExpired(v6, player_time_ms)) )
    {
      *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 32) = std::multimap<unsigned int,std::shared_ptr<Buff>>::erase[abi:cxx11](
                                                                                    &this->buff_mmap_,
                                                                                    *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 32));
      if ( std::operator!=<Buff>((const std::shared_ptr<Buff> *)(v2 + 64), 0LL) )
      {
        v8 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        CreatureBuffComp::notifyBuffDel(this, v8);
      }
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v2 + 32));
    }
    std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 64));
  }
  if ( std::multimap<unsigned int,std::shared_ptr<Buff>>::empty(&this->buff_mmap_)
    && std::operator!=<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
  {
    v10 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
    common::tools::MiTimer::cancel(v10);
  }
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
};

// Line 435: range 000000001555E410-000000001555E716
void __cdecl CreatureBuffComp::delAllBuffs(CreatureBuffComp *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v10; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+48h] [rbp-A8h]
  char v13[160]; // [rsp+50h] [rbp-A0h] BYREF

  v1 = (std::set<unsigned int> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 22 to_del_buff_id_set:440";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)CreatureBuffComp::delAllBuffs;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    std::set<unsigned int>::set(v1 + 1);
    __for_range = &this->buff_mmap_;
    __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
    __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
      buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v10);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v10);
      std::set<unsigned int>::insert(v1 + 1, buff_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
    }
    __for_range_0 = v1 + 1;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::begin(v1 + 1)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      CreatureBuffComp::delBuff(this, *v5);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    std::set<unsigned int>::~set(v1 + 1);
  }
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 453: range 000000001555E718-000000001555EA14
uint32_t __cdecl CreatureBuffComp::getSmallestUnusedServerModifierId(const CreatureBuffComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // r14d
  uint32_t result; // eax
  uint32_t used_server_modifier_id_count; // [rsp+1Ch] [rbp-124h]
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v11; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 5 i:463 64 56 31 used_server_modifier_id_set:454";
  *(_QWORD *)(v1 + 16) = CreatureBuffComp::getSmallestUnusedServerModifierId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v11);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v11);
    if ( std::operator!=<Buff>(0LL, buff_ptr) )
    {
      v4 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      *(_DWORD *)(v1 + 48) = Buff::getInstancedModifierId(v4);
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v1 + 64),
        (std::unordered_set<unsigned int>::value_type *)(v1 + 48));
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  used_server_modifier_id_count = std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v1 + 64));
  for ( *(_DWORD *)(v1 + 48) = 1; used_server_modifier_id_count + 1 >= *(_DWORD *)(v1 + 48); ++*(_DWORD *)(v1 + 48) )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            (std::unordered_set<unsigned int> *)(v1 + 64),
            (const unsigned int *)(v1 + 48)) )
    {
      v5 = *(_DWORD *)(v1 + 48);
      goto LABEL_15;
    }
  }
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/buff/creature_buff_comp.cpp",
    "getSmallestUnusedServerModifierId",
    470);
  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
    &v14,
    (const char (*)[40])"getSmallestUnusedServerModifierId fails");
  common::milog::MiLogStream::~MiLogStream(&v14);
  v5 = 0;
LABEL_15:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  result = v5;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 475: range 000000001555EA16-000000001555EB29
uint32_t __cdecl CreatureBuffComp::getInstancedModifierIdByBuffUid(
        const CreatureBuffComp *const this,
        uint32_t buff_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t InstancedModifierId; // r14d
  uint32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 buff_ptr:476";
  *(_QWORD *)(v2 + 16) = CreatureBuffComp::getInstancedModifierIdByBuffUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  CreatureBuffComp::findBuffByBuffUid((const CreatureBuffComp *const)(v2 + 32), (uint32_t)this);
  if ( std::operator!=<Buff>((const std::shared_ptr<Buff> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    InstancedModifierId = Buff::getInstancedModifierId(v5);
  }
  else
  {
    InstancedModifierId = 0;
  }
  std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 32));
  result = InstancedModifierId;
  if ( v8 == (char *)v2 )
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

// Line 485: range 000000001555EB2A-000000001555F6A3
void __fastcall CreatureBuffComp::debugCheckServerModifierConsistent(
        const CreatureBuffComp *const this,
        const std::vector<std::shared_ptr<ActorModifier>> *modifier_vec,
        uint32_t ability_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<std::shared_ptr<ActorModifier>>::size_type v6; // r14
  const std::shared_ptr<ActorModifier> *v7; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SbuffUid; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  Creature *creature; // rsi
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::vector<std::shared_ptr<ActorModifier>>::size_type v24; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  Creature *v35; // rsi
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // rax
  const std::shared_ptr<ActorModifier> *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  Creature *v48; // rsi
  unsigned __int64 *v49; // rax
  unsigned __int64 v50; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  uint32_t v52; // r14d
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  unsigned __int64 *v64; // rax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  unsigned int BuffUid; // [rsp+28h] [rbp-108h] BYREF
  uint32_t i; // [rsp+2Ch] [rbp-104h]
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v73; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v76; // [rsp+60h] [rbp-D0h] BYREF
  std::string v77; // [rsp+80h] [rbp-B0h] BYREF
  char v78[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 modifier_id:508 48 4 14 ability_id:484 64 16 16 modifier_ptr:516";
  *(_QWORD *)(v3 + 16) = CreatureBuffComp::debugCheckServerModifierConsistent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = ability_id;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    for ( i = 0; ; ++i )
    {
      v6 = i;
      if ( v6 >= std::vector<std::shared_ptr<ActorModifier>>::size(modifier_vec) )
        break;
      v7 = std::vector<std::shared_ptr<ActorModifier>>::operator[](modifier_vec, i);
      std::shared_ptr<ActorModifier>::shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64), v7);
      if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v3 + 64)) )
      {
        v8 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        SbuffUid = ActorModifier::getSbuffUid(v8);
        *(_DWORD *)(v3 + 32) = CreatureBuffComp::getInstancedModifierIdByBuffUid(this, SbuffUid);
        if ( *(_DWORD *)(v3 + 32) )
        {
          if ( i != *(_DWORD *)(v3 + 32) - 1 )
          {
            common::milog::MiLogStream::create(
              &v76,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/buff/creature_buff_comp.cpp",
              "debugCheckServerModifierConsistent",
              499);
            v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v76,
                    (const char (*)[52])"serverbuff modifier not consistent. serverbuff_uid:");
            v11 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            val = ActorModifier::getSbuffUid(v11);
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
            v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v12,
                    (const char (*)[15])" modifier_id: ");
            BuffUid = i + 1;
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &BuffUid);
            v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v14,
                    (const char (*)[24])"buff_comp modifier_id: ");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v3 + 32));
            v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v16,
                    (const char (*)[14])", ability_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])", entity:");
            if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->creature_);
            creature = this->creature_;
            v21 = (unsigned __int64 *)creature;
            if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
              v21 = (unsigned __int64 *)__asan_report_load8(this->creature_);
            v22 = *v21;
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v22 = __asan_report_load8(v22);
            (*(void (__fastcall **)(std::string *, Creature *))v22)(&v77, creature);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &v77);
            std::string::~string(&v77);
            common::milog::MiLogStream::~MiLogStream(&v76);
          }
        }
      }
      std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64));
    }
    __for_range = &this->buff_mmap_;
    __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
    __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v73 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v73);
      buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v73);
      if ( std::operator!=<Buff>(0LL, buff_ptr) )
      {
        v23 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
        *(_DWORD *)(v3 + 32) = Buff::getInstancedModifierId(v23);
        if ( *(_DWORD *)(v3 + 32) )
        {
          v24 = *(unsigned int *)(v3 + 32);
          if ( v24 <= std::vector<std::shared_ptr<ActorModifier>>::size(modifier_vec) )
          {
            v38 = std::vector<std::shared_ptr<ActorModifier>>::operator[](
                    modifier_vec,
                    (unsigned int)(*(_DWORD *)(v3 + 32) - 1));
            std::shared_ptr<ActorModifier>::shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64), v38);
            if ( std::operator==<ActorModifier>((const std::shared_ptr<ActorModifier> *)(v3 + 64), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v76,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/buff/creature_buff_comp.cpp",
                "debugCheckServerModifierConsistent",
                519);
              v39 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v76,
                      (const char (*)[49])"serverbuff modifier not consistent. modifier_id:");
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      (const unsigned int *)(v3 + 32));
              v41 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v40,
                      (const char (*)[33])" ability_comp modifier not exsit");
              v42 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v41,
                      (const char (*)[27])"buff_comp serverbuff_uid: ");
              v43 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
              BuffUid = Buff::getBuffUid(v43);
              v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &BuffUid);
              v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v44,
                      (const char (*)[14])", ability_id:");
              v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)(v3 + 48));
              v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v46,
                      (const char (*)[10])", entity:");
              if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->creature_);
              v48 = this->creature_;
              v49 = (unsigned __int64 *)v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                v49 = (unsigned __int64 *)__asan_report_load8(this->creature_);
              v50 = *v49;
              if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                v50 = __asan_report_load8(v50);
              goto LABEL_50;
            }
            v51 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v52 = ActorModifier::getSbuffUid(v51);
            v53 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
            if ( v52 != Buff::getBuffUid(v53) )
            {
              common::milog::MiLogStream::create(
                &v76,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/buff/creature_buff_comp.cpp",
                "debugCheckServerModifierConsistent",
                524);
              v54 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v76,
                      (const char (*)[49])"serverbuff modifier not consistent. modifier_id:");
              v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v54,
                      (const unsigned int *)(v3 + 32));
              v56 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v55,
                      (const char (*)[18])" serverbuff_uid: ");
              v57 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              val = ActorModifier::getSbuffUid(v57);
              v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &val);
              v59 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v58,
                      (const char (*)[27])"buff_comp serverbuff_uid: ");
              v60 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
              BuffUid = Buff::getBuffUid(v60);
              v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &BuffUid);
              v62 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v61,
                      (const char (*)[14])", ability_id:");
              v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v62,
                      (const unsigned int *)(v3 + 48));
              v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v63,
                      (const char (*)[10])", entity:");
              if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->creature_);
              v48 = this->creature_;
              v64 = (unsigned __int64 *)v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                v64 = (unsigned __int64 *)__asan_report_load8(this->creature_);
              v50 = *v64;
              if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                v50 = __asan_report_load8(v50);
LABEL_50:
              (*(void (__fastcall **)(std::string *, Creature *))v50)(&v77, v48);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, &v77);
              std::string::~string(&v77);
              common::milog::MiLogStream::~MiLogStream(&v76);
            }
            std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64));
            goto LABEL_52;
          }
        }
        common::milog::MiLogStream::create(
          &v76,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/creature_buff_comp.cpp",
          "debugCheckServerModifierConsistent",
          511);
        v26 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v76,
                (const char (*)[49])"serverbuff modifier not consistent. modifier_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 32));
        v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v27,
                (const char (*)[33])" ability_comp modifier not exsit");
        v29 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v28,
                (const char (*)[27])"buff_comp serverbuff_uid: ");
        v30 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
        BuffUid = Buff::getBuffUid(v30);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &BuffUid);
        v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v31, (const char (*)[14])", ability_id:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 48));
        v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])", entity:");
        if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->creature_);
        v35 = this->creature_;
        v36 = (unsigned __int64 *)v35;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          v36 = (unsigned __int64 *)__asan_report_load8(this->creature_);
        v37 = *v36;
        if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
          v37 = __asan_report_load8(v37);
        (*(void (__fastcall **)(std::string *, Creature *))v37)(&v77, v35);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, &v77);
        std::string::~string(&v77);
        common::milog::MiLogStream::~MiLogStream(&v76);
      }
LABEL_52:
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
    }
  }
  if ( v78 == (char *)v3 )
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

// Line 534: range 000000001555F6A4-000000001555F7A8
// local variable allocation has failed, the output may be wrong!
BuffPtr __cdecl CreatureBuffComp::findBuffByBuffUid(const CreatureBuffComp *const this, uint32_t server_buff_uid)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  BuffPtr result; // rax
  uint32_t server_buff_uida; // [rsp+Ch] [rbp-44h]
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v10; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-8h]

  server_buff_uida = v2;
  __for_range = (const std::multimap<unsigned int,std::shared_ptr<Buff>> *)(*(_QWORD *)&server_buff_uid + 24LL);
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin((const std::multimap<unsigned int,std::shared_ptr<Buff>> *const)(*(_QWORD *)&server_buff_uid + 24LL))._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end((const std::multimap<unsigned int,std::shared_ptr<Buff>> *const)(*(_QWORD *)&server_buff_uid + 24LL))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v10);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v10);
    if ( std::operator!=<Buff>(0LL, buff_ptr) )
    {
      v3 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      if ( server_buff_uida == Buff::getBuffUid(v3) )
      {
        std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)this, buff_ptr);
        goto LABEL_11;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)this, 0LL);
LABEL_11:
  result._M_ptr = (std::__shared_ptr<Buff,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
