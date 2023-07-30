// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/wind_seed_spawner.cpp

// Line 19: range 0000000017FA311A-0000000017FA328A
float __cdecl WindSeedSpawnSignal::getNowSignalStrength(
        WindSeedSpawnSignal *const this,
        const data::WindSeedSpawnerMixin *mixin_config,
        uint64_t now_scene_time_ms)
{
  uint64_t v3; // rax
  float v4; // xmm0_4
  float decay_speed; // [rsp+20h] [rbp-10h]

  if ( *(_BYTE *)(((unsigned __int64)&mixin_config->signal_decay_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mixin_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mixin_config->signal_decay_speed >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  decay_speed = mixin_config->signal_decay_speed;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( now_scene_time_ms <= this->start_scene_time_ms )
  {
    v4 = 0.0;
  }
  else
  {
    v3 = now_scene_time_ms - this->start_scene_time_ms;
    if ( (v3 & 0x8000000000000000LL) != 0LL )
      v4 = (float)(int)(v3 & 1 | (v3 >> 1)) + (float)(int)(v3 & 1 | (v3 >> 1));
    else
      v4 = (float)(int)v3;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->signal_strength >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->signal_strength >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (float)((float)((float)(this->signal_strength
                             + (float)(this->signal_strength - (float)((float)(v4 * decay_speed) / 1000.0)))
                     * v4)
             / 2.0) <= 0.0 )
    return 0.0;
  else
    return (float)((float)(this->signal_strength
                         + (float)(this->signal_strength - (float)((float)(v4 * decay_speed) / 1000.0)))
                 * v4)
         / 2.0;
};

// Line 30: range 0000000017FA328C-0000000017FA3494
int32_t __cdecl WindSeedSpawner::addPlayer(WindSeedSpawner *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<Player> *v5; // r8
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 player_uid:32 64 16 13 player_ptr:31";
  *(_QWORD *)(v2 + 16) = WindSeedSpawner::addPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  toThisPtr<Player>((Player *)(v2 + 64));
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::weak_ptr<Player>>,unsigned int>(
         &this->player_map_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/wind_seed_spawner.cpp",
      "addPlayer",
      35);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v9,
           (const char (*)[27])"player is in spawner, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    v7 = -1;
  }
  else
  {
    std::unordered_map<unsigned int,std::weak_ptr<Player>>::emplace<unsigned int &,std::shared_ptr<Player> &>(
      &this->player_map_,
      (unsigned int *)(v2 + 48),
      (std::shared_ptr<Player> *)(v2 + 64),
      (unsigned int *)&this->player_map_,
      v5);
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v7;
  if ( v10 == (char *)v2 )
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

// Line 43: range 0000000017FA3496-0000000017FA37A4
__int64 __fastcall WindSeedSpawner::delPlayer(WindSeedSpawner *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  __int64 result; // rax
  std::unordered_map<unsigned int,WindSeedRecord>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,WindSeedRecord>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,WindSeedRecord> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<unsigned int const,WindSeedRecord> *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,WindSeedRecord> >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,WindSeedRecord> >::type *record; // [rsp+48h] [rbp-A8h]
  VisionContext v16; // [rsp+54h] [rbp-9Ch] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 player_uid:42 64 16 13 gadget_ptr:51";
  *(_QWORD *)(v2 + 16) = WindSeedSpawner::delPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = player_uid;
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::erase(
    &this->player_map_,
    (const std::unordered_map<unsigned int,std::weak_ptr<Player>>::key_type *)(v2 + 48));
  if ( std::unordered_map<unsigned int,std::weak_ptr<Player>>::empty(&this->player_map_) )
  {
    std::vector<WindSeedSpawnSignal>::clear(&this->signal_vec_);
    __for_range = &this->wind_seed_record_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::begin(&this->wind_seed_record_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::end(&this->wind_seed_record_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,WindSeedRecord>,false>(&__for_begin, &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,WindSeedRecord>(__in);
      record = std::get<1ul,unsigned int const,WindSeedRecord>(__in);
      WindSeedRecord::getGadget((WindSeedRecord *const)(v2 + 64));
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
      {
        v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Creature::changeLifeState(v5, LIFE_DEAD, 0LL, 1);
        v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v7 = *(_QWORD *)v6->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v7;
        VisionContext::VisionContext(&v16, VISION_DIE);
        v8(v6, &v16);
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
      std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,WindSeedRecord>::clear(&this->wind_seed_record_map_);
  }
  result = 0LL;
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
  return result;
};

// Line 64: range 0000000017FA37A6-0000000017FA3953
WindSeedSpawner *__fastcall WindSeedSpawner::findPlayer(WindSeedSpawner *const this, __int64 player_uid, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 player_uid:63 64 8 7 iter:65";
  *(_QWORD *)(v3 + 16) = WindSeedSpawner::findPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Player>>::find(
                                                                                     (std::unordered_map<unsigned int,std::weak_ptr<Player>> *const)(player_uid + 32),
                                                                                     (const std::unordered_map<unsigned int,std::weak_ptr<Player>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::end((std::unordered_map<unsigned int,std::weak_ptr<Player>> *const)(player_uid + 32))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::weak_ptr<Player>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player> >,false,false> *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  }
  if ( v9 == (char *)v3 )
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
  return this;
};

// Line 74: range 0000000017FA3954-0000000017FA3A54
int32_t __cdecl WindSeedSpawner::merge(WindSeedSpawner *const this, WindSeedSpawner *other_wind_seed_spawner)
{
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false>::__node_type *M_cur; // r12
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator v3; // rax
  WindSeedSpawnSignal *M_current; // r13
  WindSeedSpawnSignal *v5; // r12
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WindSeedRecord>,false>::__node_type *v6; // r12
  std::unordered_map<unsigned int,WindSeedRecord>::iterator v7; // rax
  __gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > __i; // [rsp+10h] [rbp-30h] BYREF
  __gnu_cxx::__normal_iterator<const WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > __position; // [rsp+18h] [rbp-28h] BYREF

  M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::end(&other_wind_seed_spawner->player_map_)._M_cur;
  v3._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::begin(&other_wind_seed_spawner->player_map_)._M_cur;
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::insert<std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>>(
    &this->player_map_,
    v3,
    (std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player> >,false,false>)M_cur);
  M_current = std::vector<WindSeedSpawnSignal>::end(&other_wind_seed_spawner->signal_vec_)._M_current;
  v5 = std::vector<WindSeedSpawnSignal>::begin(&other_wind_seed_spawner->signal_vec_)._M_current;
  __i._M_current = std::vector<WindSeedSpawnSignal>::end(&this->signal_vec_)._M_current;
  __gnu_cxx::__normal_iterator<WindSeedSpawnSignal const*,std::vector<WindSeedSpawnSignal>>::__normal_iterator<WindSeedSpawnSignal*>(
    &__position,
    &__i);
  std::vector<WindSeedSpawnSignal>::insert<__gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal>>,void>(
    &this->signal_vec_,
    __position,
    (__gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> >)v5,
    (__gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> >)M_current);
  v6 = std::unordered_map<unsigned int,WindSeedRecord>::end(&other_wind_seed_spawner->wind_seed_record_map_)._M_cur;
  v7._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::begin(&other_wind_seed_spawner->wind_seed_record_map_)._M_cur;
  std::unordered_map<unsigned int,WindSeedRecord>::insert<std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>>(
    &this->wind_seed_record_map_,
    v7,
    (std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>)v6);
  return 0;
};

// Line 87: range 0000000017FA3A56-0000000017FA3EAC
int32_t __cdecl WindSeedSpawner::addSignal(WindSeedSpawner *const this, const data::WindSeedSpawnerMixin *mixin_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WindSeedSpawnSignal *M_current; // r14
  std::vector<WindSeedSpawnSignal>::iterator v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  float *v10; // r8
  int32_t result; // eax
  WindSeedSpawner::addSignal::<lambda(auto:23&)> v12; // [rsp-20h] [rbp-160h]
  __gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > __i; // [rsp+18h] [rbp-128h] BYREF
  __gnu_cxx::__normal_iterator<const WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > __first; // [rsp+20h] [rbp-120h] BYREF
  __gnu_cxx::__normal_iterator<const WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > __last; // [rsp+28h] [rbp-118h] BYREF
  WindSeedSpawner::addSignal::<lambda(auto:23&)> __pred; // [rsp+30h] [rbp-110h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 23 init_signal_strength:89 64 4 26 trigger_signal_strength:90 80 4 13 signal_sum:92 96 8 "
                        "16 scene_time_ms:88 128 8 7 iter:93";
  *(_QWORD *)(v2 + 16) = WindSeedSpawner::addSignal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_QWORD *)(v2 + 96) = Scene::getSceneTimeMs(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&mixin_config->init_signal_strength >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mixin_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mixin_config->init_signal_strength >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(float *)(v2 + 48) = mixin_config->init_signal_strength;
  if ( *(_BYTE *)(((unsigned __int64)&mixin_config->trigger_signal_strength >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&mixin_config->trigger_signal_strength >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(float *)(v2 + 64) = mixin_config->trigger_signal_strength;
  *(_DWORD *)(v2 + 80) = 0;
  __pred.__mixin_config = mixin_config;
  __pred.__signal_sum = (float *)(v2 + 80);
  __pred.__scene_time_ms = *(_QWORD *)(v2 + 96);
  M_current = std::vector<WindSeedSpawnSignal>::end(&this->signal_vec_)._M_current;
  v6._M_current = std::vector<WindSeedSpawnSignal>::begin(&this->signal_vec_)._M_current;
  v12.__scene_time_ms = __pred.__scene_time_ms;
  v12.__signal_sum = (float *)(v2 + 80);
  v12.__mixin_config = mixin_config;
  *(__gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > *)(v2 + 128) = std::remove_if<__gnu_cxx::__normal_iterator<WindSeedSpawnSignal *,std::vector<WindSeedSpawnSignal>>,WindSeedSpawner::addSignal(data::WindSeedSpawnerMixin const&)::{lambda(__gnu_cxx::__normal_iterator<WindSeedSpawnSignal *,std::vector<WindSeedSpawnSignal>> &)#1}>(v6, (__gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> >)M_current, v12);
  __i._M_current = std::vector<WindSeedSpawnSignal>::end(&this->signal_vec_)._M_current;
  __gnu_cxx::__normal_iterator<WindSeedSpawnSignal const*,std::vector<WindSeedSpawnSignal>>::__normal_iterator<WindSeedSpawnSignal*>(
    &__last,
    &__i);
  __gnu_cxx::__normal_iterator<WindSeedSpawnSignal const*,std::vector<WindSeedSpawnSignal>>::__normal_iterator<WindSeedSpawnSignal*>(
    &__first,
    (const __gnu_cxx::__normal_iterator<WindSeedSpawnSignal*,std::vector<WindSeedSpawnSignal> > *)(v2 + 128));
  std::vector<WindSeedSpawnSignal>::erase(&this->signal_vec_, __first, __last);
  if ( std::unordered_map<unsigned int,std::weak_ptr<Player>>::size(&this->player_map_) == 1 )
    *(float *)(v2 + 80) = *(float *)(v2 + 80) + (float)(*(float *)(v2 + 64) + 0.1);
  *(float *)(v2 + 80) = WindSeedSpawner::getSignalRate(this, mixin_config) * *(float *)(v2 + 80);
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/wind_seed_spawner.cpp",
    "addSignal",
    108);
  v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v17,
         (const char (*)[24])"[WIND_SEED] signal sum:");
  v8 = common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v2 + 80));
  v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])"mixin:");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v9, (const float *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v17);
  std::vector<WindSeedSpawnSignal>::emplace_back<unsigned long &,float &>(
    &this->signal_vec_,
    (unsigned __int64 *)(v2 + 96),
    (float *)(v2 + 48),
    (unsigned __int64 *)&this->signal_vec_,
    v10);
  if ( *(float *)(v2 + 80) >= *(float *)(v2 + 64) )
  {
    std::vector<WindSeedSpawnSignal>::clear(&this->signal_vec_);
    WindSeedSpawner::notifyWindSeedRefresh(this, mixin_config);
  }
  result = 0;
  if ( v18 == (char *)v2 )
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

// Line 94: range 0000000018085702-000000001808583D
bool __cdecl WindSeedSpawner::addSignal::_lambda_auto_23___::operator()_WindSeedSpawnSignal_(
        const WindSeedSpawner::addSignal::<lambda(auto:23&)> *const __closure,
        WindSeedSpawnSignal *signal)
{
  __m128i v2; // xmm0
  uint64_t scene_time_ms; // rdx
  const data::WindSeedSpawnerMixin *mixin_config; // rsi
  float *signal_sum; // rdx
  float v6; // xmm0_4
  float *v7; // rdx
  float v8; // xmm0_4
  char v9; // cl
  float signal_strength; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__scene_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_time_ms = __closure->__scene_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  mixin_config = __closure->__mixin_config;
  *(float *)v2.m128i_i32 = WindSeedSpawnSignal::getNowSignalStrength(signal, __closure->__mixin_config, scene_time_ms);
  signal_strength = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__signal_sum >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  signal_sum = __closure->__signal_sum;
  if ( *(_BYTE *)(((unsigned __int64)signal_sum >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)signal_sum & 7) + 3) >= *(_BYTE *)(((unsigned __int64)signal_sum >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v6 = *signal_sum;
  v7 = __closure->__signal_sum;
  v8 = v6 + signal_strength;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(mixin_config) = v9 != 0;
    __asan_report_store4(__closure->__signal_sum, mixin_config, (_BYTE)v7);
  }
  *v7 = v8;
  return signal_strength < 0.0099999998;
};

// Line 121: range 0000000017FA3EAE-0000000017FA4A6F
// local variable allocation has failed, the output may be wrong!
float __cdecl WindSeedSpawner::getSignalRate(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 Speed; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 Position; // rax
  int v10; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 n; // rax
  __int64 v13; // xmm0_8
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const float *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  float v29; // xmm0_4
  const float *v30; // rdx
  float move_refresh_angle_slow; // xmm0_4
  const float *v32; // rdx
  const float *v33; // rdx
  float result; // xmm0_4
  float __val; // [rsp+14h] [rbp-1FCh] BYREF
  float __lo; // [rsp+18h] [rbp-1F8h] BYREF
  float __a; // [rsp+1Ch] [rbp-1F4h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-1E8h] BYREF
  std::unordered_map<unsigned int,WindSeedRecord>::iterator __for_begin_0; // [rsp+30h] [rbp-1E0h] BYREF
  std::unordered_map<unsigned int,WindSeedRecord>::iterator __for_end_0; // [rsp+38h] [rbp-1D8h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-1D0h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *__in; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Player> > >::type *uid; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<Player> > >::type *player_wtr; // [rsp+58h] [rbp-1B8h]
  std::unordered_map<unsigned int,WindSeedRecord> *__for_range_0; // [rsp+60h] [rbp-1B0h]
  std::pair<unsigned int const,WindSeedRecord> *v47; // [rsp+68h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,WindSeedRecord> >::type *entity_id; // [rsp+70h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,WindSeedRecord> >::type *record; // [rsp+78h] [rbp-198h]
  common::milog::MiLogStream v50; // [rsp+80h] [rbp-190h] BYREF
  char v51[368]; // [rsp+A0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 8 rate:122 48 4 9 angle:146 64 4 19 angle_up_freeze:160 80 4 9 range:162 96 12 9 speed:1"
                        "35 128 12 14 avatar_pos:136 160 12 14 gadget_pos:144 192 12 7 dis:145 224 16 14 player_ptr:125 2"
                        "56 16 14 avatar_ptr:130 288 16 14 gadget_ptr:139";
  *(_QWORD *)(v3 + 16) = WindSeedSpawner::getSignalRate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862725] = -219020288;
  v5[536862726] = -219020288;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -202178560;
  *(_DWORD *)(v3 + 32) = 1065353216;
  __for_range = &this->player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Player>>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::weak_ptr<Player>>(__in);
    player_wtr = std::get<1ul,unsigned int const,std::weak_ptr<Player>>(__in);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 224));
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 224), 0LL) )
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
      Player::getCurAvatar((Player *const)(v3 + 256));
      if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 256)) )
      {
        v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        Speed = (unsigned __int64)Entity::getSpeed((const Entity *const)v6);
        if ( (char)(Speed & 7) >= *(_BYTE *)((Speed >> 3) + 0x7FFF8000) && *(_BYTE *)((Speed >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Speed + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Speed + 11) & 7) >= *(_BYTE *)(((Speed + 11) >> 3) + 0x7FFF8000) )
        {
          Speed = __asan_report_load_n(Speed, 12LL);
        }
        *(_QWORD *)(v3 + 96) = *(_QWORD *)Speed;
        *(_DWORD *)(v3 + 104) = *(_DWORD *)(Speed + 8);
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v8);
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        *(_QWORD *)(v3 + 128) = *(_QWORD *)Position;
        *(_DWORD *)(v3 + 136) = *(_DWORD *)(Position + 8);
        __for_range_0 = &this->wind_seed_record_map_;
        __for_begin_0._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::begin(&this->wind_seed_record_map_)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,WindSeedRecord>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v47 = std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator*(&__for_begin_0);
          entity_id = std::get<0ul,unsigned int const,WindSeedRecord>(v47);
          record = std::get<1ul,unsigned int const,WindSeedRecord>(v47);
          WindSeedRecord::getGadget((WindSeedRecord *const)(v3 + 288));
          if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 288), 0LL) )
          {
            v10 = 0;
          }
          else
          {
            v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
            n = (unsigned __int64)Entity::getPosition((const Entity *const)v11);
            if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_load_n(n, 12LL);
            }
            *(_QWORD *)(v3 + 160) = *(_QWORD *)n;
            *(_DWORD *)(v3 + 168) = *(_DWORD *)(n + 8);
            *(Vector3 *)((char *)&v2 - 8) = operator-((const Vector3 *)(v3 + 160), (const Vector3 *)(v3 + 128));
            *(_QWORD *)(v3 + 192) = v13;
            *(_DWORD *)(v3 + 200) = v2.m128i_i32[0];
            calcTwoDirAngle((const Vector3 *)(v3 + 192), (const Vector3 *)(v3 + 96));
            *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
            if ( *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_freeze >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)mixin_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_freeze >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v2 = (__m128i)*(unsigned int *)(v3 + 48);
            if ( mixin_config->move_refresh_angle_freeze < *(float *)v2.m128i_i32 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_slow >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_slow >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v2 = (__m128i)*(unsigned int *)(v3 + 48);
              if ( mixin_config->move_refresh_angle_slow >= *(float *)v2.m128i_i32 )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/wind_seed_spawner.cpp",
                  "getSignalRate",
                  158);
                v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v50,
                        (const char (*)[36])"[WIND_SEED] slow signal avatar_pos:");
                v23 = operator<<(v22, (const Vector3 *)(v3 + 128));
                v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v23,
                        (const char (*)[13])" gadget_pos:");
                v25 = operator<<(v24, (const Vector3 *)(v3 + 160));
                v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" speed:");
                v27 = operator<<(v26, (const Vector3 *)(v3 + 96));
                v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" angle: ");
                common::milog::MiLogStream::operator<<<float,(float *)0>(v28, (const float *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v50);
                v29 = *(float *)(v3 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_freeze >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)mixin_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_freeze >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(float *)(v3 + 64) = v29 - mixin_config->move_refresh_angle_freeze;
                __a = 0.0;
                v30 = std::max<float>(&__a, (const float *)(v3 + 64));
                if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(float *)(v3 + 64) = *v30;
                if ( *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_slow >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_slow >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                move_refresh_angle_slow = mixin_config->move_refresh_angle_slow;
                if ( *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_freeze >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)mixin_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mixin_config->move_refresh_angle_freeze >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(float *)(v3 + 80) = move_refresh_angle_slow - mixin_config->move_refresh_angle_freeze;
                __a = 1.0;
                v32 = std::max<float>(&__a, (const float *)(v3 + 80));
                if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(float *)(v3 + 80) = *v32;
                __a = 1.0;
                __lo = 0.0;
                v2 = (__m128i)*(unsigned int *)(v3 + 64);
                __val = *(float *)(v3 + 80) / *(float *)v2.m128i_i32;
                v33 = std::clamp<float>(&__val, &__lo, &__a);
                if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(float *)(v3 + 32) = *v33;
              }
              v10 = 2;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/wind_seed_spawner.cpp",
                "getSignalRate",
                150);
              v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v50,
                      (const char (*)[36])"[WIND_SEED] mute signal avatar_pos:");
              v15 = operator<<(v14, (const Vector3 *)(v3 + 128));
              v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v15,
                      (const char (*)[13])" gadget_pos:");
              v17 = operator<<(v16, (const Vector3 *)(v3 + 160));
              v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" speed:");
              v19 = operator<<(v18, (const Vector3 *)(v3 + 96));
              v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" angle: ");
              common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v50);
              __a = 0.0;
              v21 = std::min<float>(&__a, (const float *)(v3 + 32));
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(float *)(v3 + 32) = *v21;
              v10 = 1;
            }
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 288));
          if ( v10 )
          {
            if ( v10 != 2 )
              break;
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator++(&__for_begin_0);
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 256));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 224));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  result = *(float *)(v3 + 32);
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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
  return result;
};

// Line 176: range 0000000017FA4A70-0000000017FA4D90
int32_t __cdecl WindSeedSpawner::notifyWindSeedRefresh(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  unsigned __int64 v6; // rax
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator v7; // rax
  uint32_t RefreshNeedSeedNum; // eax
  Player *v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false> __y; // [rsp+18h] [rbp-E8h] BYREF
  size_t rand_idx; // [rsp+20h] [rbp-E0h]
  proto::WindSeedClientNotify_RefreshNotify *refresh_ptr; // [rsp+28h] [rbp-D8h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 13 rand_iter:183 64 16 14 player_ptr:186 96 32 10 notify:189";
  *(_QWORD *)(v2 + 16) = WindSeedSpawner::notifyWindSeedRefresh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( std::unordered_map<unsigned int,std::weak_ptr<Player>>::empty(&this->player_map_) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/wind_seed_spawner.cpp",
      "notifyWindSeedRefresh",
      179);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[21])"player_map_ is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    v6 = std::unordered_map<unsigned int,std::weak_ptr<Player>>::size(&this->player_map_);
    rand_idx = common::tools::RandomUtils::rand<unsigned long>(0LL, v6);
    v7._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_cur;
    *(std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player> >,false,false> *)(v2 + 32) = std::next<std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>>(v7, rand_idx);
    __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Player>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false> *)(v2 + 32),
           &__y) )
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player> >,false,false> *const)(v2 + 32));
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 64));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
      {
        proto::WindSeedClientNotify::WindSeedClientNotify((proto::WindSeedClientNotify *const)(v2 + 96));
        refresh_ptr = proto::WindSeedClientNotify::mutable_refresh_notify((proto::WindSeedClientNotify *const)(v2 + 96));
        RefreshNeedSeedNum = WindSeedSpawner::getRefreshNeedSeedNum(this, mixin_config);
        proto::WindSeedClientNotify_RefreshNotify::set_refresh_num(refresh_ptr, RefreshNeedSeedNum);
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Player::sendProto(v9, (const google::protobuf::Message *)(v2 + 96));
        proto::WindSeedClientNotify::~WindSeedClientNotify((proto::WindSeedClientNotify *const)(v2 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
    result = 0;
  }
  if ( v13 == (char *)v2 )
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
  return result;
};

// Line 199: range 0000000017FA4D92-0000000017FA50B1
uint32_t __cdecl WindSeedSpawner::getRefreshNeedSeedNum(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const unsigned int *v5; // rdx
  unsigned __int64 v6; // rax
  uint32_t *v7; // rdx
  uint32_t result; // eax
  unsigned int __b; // [rsp+10h] [rbp-A0h] BYREF
  uint32_t refresh_num; // [rsp+14h] [rbp-9Ch]
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+28h] [rbp-88h]
  size_t idx; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *__in; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Player> > >::type *uid; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<Player> > >::type *_; // [rsp+48h] [rbp-68h]
  char v18[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 max_num:200";
  *(_QWORD *)(v2 + 16) = WindSeedSpawner::getRefreshNeedSeedNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  __for_range = &this->player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Player>>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::weak_ptr<Player>>(__in);
    _ = std::get<1ul,unsigned int const,std::weak_ptr<Player>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    __b = WindSeedSpawner::getPlayerWindBulletNum(this, mixin_config, *uid);
    v5 = std::max<unsigned int>((const unsigned int *)(v2 + 32), &__b);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  refresh_num = 1;
  if ( !std::vector<unsigned int>::empty(&mixin_config->spawn_num_array) )
  {
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false>::__node_type *)(std::vector<unsigned int>::size(&mixin_config->spawn_num_array) - 1);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false>::__node_type *)*(unsigned int *)(v2 + 32);
    v6 = (unsigned __int64)std::min<unsigned long>(
                             (const unsigned __int64 *)&__for_begin,
                             (const unsigned __int64 *)&__for_end);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    idx = *(_QWORD *)v6;
    v7 = (uint32_t *)std::vector<unsigned int>::operator[](&mixin_config->spawn_num_array, idx);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    refresh_num = *v7;
  }
  result = refresh_num;
  if ( v18 == (char *)v2 )
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

// Line 215: range 0000000017FA50B2-0000000017FA5390
__int64 __fastcall WindSeedSpawner::getPlayerWindBulletNum(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config,
        uint32_t uid,
        __m128i a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  Player *v8; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  AbilityComp *AbilityComp; // rax
  int v11; // xmm0_4
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 7 num:226 48 4 7 uid:214 64 16 14 player_ptr:216 96 16 19 team_entity_ptr:221";
  *(_QWORD *)(v4 + 16) = WindSeedSpawner::getPlayerWindBulletNum;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  WindSeedSpawner::findPlayer((WindSeedSpawner *const)(v4 + 64), (__int64)this, *(_DWORD *)(v4 + 48));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
  {
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    Player::getAvatarComp(v8);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v4 + 96));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v4 + 96)) )
    {
      v7 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      AbilityComp = Creature::getAbilityComp(v9);
      *(float *)a4.m128i_i32 = AbilityComp::getDynamicValue<float>(AbilityComp, &mixin_config->global_value_key);
      *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(a4);
      if ( *(float *)(v4 + 32) <= 0.0 )
        v11 = 0;
      else
        v11 = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v4 + 32) = v11;
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/wind_seed_spawner.cpp",
        "getPlayerWindBulletNum",
        229);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v17,
              (const char (*)[29])"[WIND_SEED] wind_bullet_num:");
      v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)(v4 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = (int)std::ceil(*(float *)(v4 + 32));
    }
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v4 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  result = v7;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 235: range 0000000017FA5392-0000000017FA5704
int32_t __cdecl WindSeedSpawner::refreshWindSeed(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config,
        const std::vector<Vector3> *pos_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  int32_t result; // eax
  std::unordered_map<unsigned int,WindSeedRecord>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,WindSeedRecord>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  uint64_t scene_time_ms; // [rsp+38h] [rbp-C8h]
  std::unordered_map<unsigned int,WindSeedRecord> *__for_range; // [rsp+40h] [rbp-C0h]
  std::pair<unsigned int const,WindSeedRecord> *__in; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,WindSeedRecord> >::type *_; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,WindSeedRecord> >::type *record; // [rsp+58h] [rbp-A8h]
  VisionContext v19; // [rsp+64h] [rbp-9Ch] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-90h] BYREF
  char v21[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 gadget_ptr:239";
  *(_QWORD *)(v3 + 16) = WindSeedSpawner::refreshWindSeed;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_time_ms = Scene::getSceneTimeMs(this->scene_);
  __for_range = &this->wind_seed_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::begin(&this->wind_seed_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WindSeedRecord>::end(&this->wind_seed_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WindSeedRecord>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,WindSeedRecord>(__in);
    record = std::get<1ul,unsigned int const,WindSeedRecord>(__in);
    WindSeedRecord::getGadget((WindSeedRecord *const)(v3 + 32));
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
    {
      v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Creature::changeLifeState(v6, LIFE_DEAD, 0LL, 1);
      v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = *(_QWORD *)v7->baseclass_0 + 128LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v8;
      VisionContext::VisionContext(&v19, VISION_DIE);
      v9(v7, &v19);
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,WindSeedRecord>::clear(&this->wind_seed_record_map_);
  WindSeedSpawner::createWindSeed(this, mixin_config, pos_vec, scene_time_ms);
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/wind_seed_spawner.cpp",
    "refreshWindSeed",
    249);
  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
    &v20,
    (const char (*)[30])"[WIND_SEED] refresh wind seed");
  common::milog::MiLogStream::~MiLogStream(&v20);
  result = 0;
  if ( v21 == (char *)v3 )
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

// Line 255: range 0000000017FA5706-0000000017FA5D8C
int32_t __cdecl WindSeedSpawner::createWindSeed(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config,
        const std::vector<Vector3> *pos_vec,
        uint64_t scene_time_ms)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void (__fastcall *v11)(unsigned __int64, Scene *, VisionContext *); // r8
  uint64_t SceneTimeMs; // r15
  Gadget *v13; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned int *v15; // rcx
  WindSeedRecord *v16; // r8
  common::milog::MiLogStream *v17; // rax
  int32_t v19; // [rsp+Ch] [rbp-4C4h]
  unsigned int EntityId; // [rsp+38h] [rbp-498h] BYREF
  uint32_t refresh_num; // [rsp+3Ch] [rbp-494h]
  std::vector<Vector3>::const_iterator __for_begin; // [rsp+40h] [rbp-490h] BYREF
  std::vector<Vector3>::const_iterator __for_end; // [rsp+48h] [rbp-488h] BYREF
  const std::vector<Vector3> *__for_range; // [rsp+50h] [rbp-480h]
  const Vector3 *pos; // [rsp+58h] [rbp-478h]
  char v27[1136]; // [rsp+60h] [rbp-470h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1088LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 9 count:261 48 16 14 gadget_ptr:270 80 32 10 record:277 144 816 16 gadget_param:256";
  *(_QWORD *)(v4 + 16) = WindSeedSpawner::createWindSeed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862750] = -202116109;
  v6[536862751] = -202116109;
  v6[536862752] = -202116109;
  v6[536862753] = -202116109;
  GadgetParam::GadgetParam((GadgetParam *const)(v4 + 144));
  *(_DWORD *)(v4 + 180) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&mixin_config->seed_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&mixin_config->seed_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 144) = mixin_config->seed_gadget_id;
  *(_DWORD *)(v4 + 236) = 1;
  refresh_num = WindSeedSpawner::getRefreshNeedSeedNum(this, mixin_config);
  *(_DWORD *)(v4 + 32) = 0;
  __for_range = pos_vec;
  __for_begin._M_current = std::vector<Vector3>::begin(pos_vec)._M_current;
  __for_end._M_current = std::vector<Vector3>::end(pos_vec)._M_current;
  while ( __gnu_cxx::operator!=<Vector3 const*,std::vector<Vector3>>(&__for_begin, &__for_end) )
  {
    pos = __gnu_cxx::__normal_iterator<Vector3 const*,std::vector<Vector3>>::operator*(&__for_begin);
    if ( refresh_num <= *(_DWORD *)(v4 + 32) )
      break;
    if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(pos, 12LL);
    }
    *(Vector3 *)(v4 + 156) = *pos;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 152) = Scene::genNewEntityId(this->scene_, PROT_ENTITY_GADGET);
    EntityMgr::createGadget((const GadgetParam *)(v4 + 48));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 80),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/wind_seed_spawner.cpp",
        "createWindSeed",
        273);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             (common::milog::MiLogStream *const)(v4 + 80),
             (const char (*)[31])"createGadget fails, gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 80));
      v19 = -1;
      v8 = 0;
    }
    else
    {
      v9 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(_QWORD *)v9 + 56LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v11 = *(void (__fastcall **)(unsigned __int64, Scene *, VisionContext *))v10;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v11(v9, this->scene_, &VisionContext::meet_context);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
      v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      WindSeedRecord::WindSeedRecord((WindSeedRecord *const)(v4 + 80), v13, SceneTimeMs);
      v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      EntityId = Entity::getEntityId((const Entity *const)v14);
      std::unordered_map<unsigned int,WindSeedRecord>::emplace<unsigned int,WindSeedRecord&>(
        &this->wind_seed_record_map_,
        &EntityId,
        (WindSeedRecord *)(v4 + 80),
        v15,
        v16);
      ++*(_DWORD *)(v4 + 32);
      WindSeedRecord::~WindSeedRecord((WindSeedRecord *const)(v4 + 80));
      v8 = 1;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 48));
    if ( v8 != 1 )
      goto LABEL_27;
    __gnu_cxx::__normal_iterator<Vector3 const*,std::vector<Vector3>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 80),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/wind_seed_spawner.cpp",
    "createWindSeed",
    282);
  v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v4 + 80),
          (const char (*)[34])"[WIND_SEED] create wind seed num:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 32));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 80));
  v19 = 0;
LABEL_27:
  GadgetParam::~GadgetParam((GadgetParam *const)(v4 + 144));
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1088LL, v27);
  }
  return v19;
};

// Line 288: range 0000000017FA5D8E-0000000017FA66C7
__int64 __fastcall WindSeedSpawner::catchWindSeed(
        WindSeedSpawner *const this,
        const data::WindSeedSpawnerMixin *mixin_config,
        uint32_t entity_id,
        Player *from_player)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const Vector3 *Position; // rax
  proto::Vector *v17; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 n; // rax
  Scene *scene; // rcx
  Player *v22; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  unsigned __int64 v25; // rax
  void (__fastcall *v26)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  WindSeedRecord *record; // [rsp+40h] [rbp-1B0h]
  proto::WindSeedClientNotify_AddWindBulletNotify *add_ptr; // [rsp+48h] [rbp-1A8h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+50h] [rbp-1A0h]
  std::shared_ptr<Player> *player_ptr; // [rsp+58h] [rbp-198h]
  VisionContext v39; // [rsp+64h] [rbp-18Ch] BYREF
  std::shared_ptr<Gadget> __r; // [rsp+70h] [rbp-180h] BYREF
  common::milog::MiLogStream v41; // [rsp+80h] [rbp-170h] BYREF
  char v42[336]; // [rsp+A0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 13 entity_id:287 64 8 8 iter:290 96 12 12 seed_pos:316 128 16 14 gadget_ptr:289 160 24 23"
                        " surround_player_vec:317 224 32 10 notify:311";
  *(_QWORD *)(v4 + 16) = WindSeedSpawner::catchWindSeed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219020288;
  v6[536862724] = -219021312;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 48) = entity_id;
  std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 128), 0LL);
  *(std::unordered_map<unsigned int,WindSeedRecord>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,WindSeedRecord>::find(
                                                                              &this->wind_seed_record_map_,
                                                                              (const std::unordered_map<unsigned int,WindSeedRecord>::key_type *)(v4 + 48));
  __for_end._M_current = (std::shared_ptr<Player> *)std::unordered_map<unsigned int,WindSeedRecord>::end(&this->wind_seed_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,WindSeedRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WindSeedRecord>,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WindSeedRecord>,false> *)&__for_end) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findEntity<Gadget>((const Scene *const)&__r, (unsigned __int64)this->scene_, *(_DWORD *)(v4 + 48));
    std::shared_ptr<Gadget>::operator=((std::shared_ptr<Gadget> *const)(v4 + 128), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    if ( !std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 128)) )
      goto LABEL_14;
    v7 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 32LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7) == 43 )
LABEL_14:
      v9 = 0;
    else
      v9 = 1;
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/wind_seed_spawner.cpp",
        "catchWindSeed",
        297);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v41,
              (const char (*)[42])"catch entity is not wind seed, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v11 = -1;
      goto LABEL_36;
    }
  }
  else
  {
    record = &std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WindSeedRecord>,false,false> *const)(v4 + 64))->second;
    WindSeedRecord::getGadget((WindSeedRecord *const)&__r);
    std::shared_ptr<Gadget>::operator=((std::shared_ptr<Gadget> *const)(v4 + 128), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
  }
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/wind_seed_spawner.cpp",
      "catchWindSeed",
      308);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v41,
            (const char (*)[39])"wind seed gadget not exist. entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v11 = -1;
  }
  else
  {
    proto::WindSeedClientNotify::WindSeedClientNotify((proto::WindSeedClientNotify *const)(v4 + 224));
    add_ptr = proto::WindSeedClientNotify::mutable_add_wind_bullet_notify((proto::WindSeedClientNotify *const)(v4 + 224));
    v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    EntityId = Entity::getEntityId((const Entity *const)v13);
    proto::WindSeedClientNotify_AddWindBulletNotify::set_seed_entity_id(add_ptr, EntityId);
    v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    Position = Entity::getPosition((const Entity *const)v15);
    Vector3::operator proto::Vector((proto::Vector *)&v41, Position);
    v17 = proto::WindSeedClientNotify_AddWindBulletNotify::mutable_seed_pos(add_ptr);
    proto::Vector::operator=(v17, (proto::Vector *)&v41);
    proto::Vector::~Vector((proto::Vector *const)&v41);
    Uid = Player::getUid(from_player);
    proto::WindSeedClientNotify_AddWindBulletNotify::set_catch_player_uid(add_ptr, Uid);
    v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    n = (unsigned __int64)Entity::getPosition((const Entity *const)v19);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)(v4 + 96) = *(_QWORD *)n;
    *(_DWORD *)(v4 + 104) = *(_DWORD *)(n + 8);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)&mixin_config->catch_seed_range >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mixin_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mixin_config->catch_seed_range >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::getSurroundPlayersInRange(
      (std::vector<std::shared_ptr<Player>> *)(v4 + 160),
      scene,
      *(Vector3 *)(v4 + 96),
      mixin_config->catch_seed_range);
    __for_range = (std::vector<std::shared_ptr<Player>> *)(v4 + 160);
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v4 + 160))._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      if ( std::operator!=<Player>(player_ptr, 0LL) )
      {
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        Player::sendProto(v22, (const google::protobuf::Message *)(v4 + 224));
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    v23 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    Creature::changeLifeState(v23, LIFE_DEAD, 0LL, 1);
    v24 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = *(_QWORD *)v24->baseclass_0 + 128LL;
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8();
    v26 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v25;
    VisionContext::VisionContext(&v39, VISION_DIE);
    v26(v24, &v39);
    std::unordered_map<unsigned int,WindSeedRecord>::erase(
      &this->wind_seed_record_map_,
      (const std::unordered_map<unsigned int,WindSeedRecord>::key_type *)(v4 + 48));
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/wind_seed_spawner.cpp",
      "catchWindSeed",
      329);
    v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v41,
            (const char (*)[34])"[WIND_SEED] catch seed entity_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 48));
    v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" player:");
    operator<<(v29, from_player);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v11 = 0;
    std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 160));
    proto::WindSeedClientNotify::~WindSeedClientNotify((proto::WindSeedClientNotify *const)(v4 + 224));
  }
LABEL_36:
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 128));
  result = v11;
  if ( v42 == (char *)v4 )
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
