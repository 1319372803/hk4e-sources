// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_encounter_comp.cpp

// Line 27: range 0000000015C68668-0000000015C68B02
void __cdecl SceneEncounterComp::SceneEncounterComp(SceneEncounterComp *const this, Scene *scene)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  bool v7; // dl
  bool v8; // dl
  PlayerWorldScene *v9; // rax
  std::unique_ptr<SceneEncounterBase> *v10; // rax
  PlayerWorldScene *v11; // rax
  std::unique_ptr<SceneEncounterBase> *v12; // rax
  __int64 Now; // rsi
  std::unique_ptr<SceneEncounterRandTask> __u; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 rand_task:33 48 4 13 rand_quest:36 64 16 18 world_scene_ptr:30";
  *(_QWORD *)(v2 + 16) = SceneEncounterComp::SceneEncounterComp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  SceneCompBase::SceneCompBase(this, scene);
  v5 = (int (**)(...))(&`vtable for'SceneEncounterComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneCompBase = v5;
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::map(&this->encounter_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_refresh_time_, scene, (_BYTE)this + 72);
  }
  this->next_refresh_time_ = 0;
  v6 = (((_BYTE)this + 76) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->last_check_timer_, v6, v7);
  this->last_check_timer_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_zone_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_zone_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_zone_level_, v6, (_BYTE)this + 80);
  }
  this->last_zone_level_ = 0;
  v8 = *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->zone_type_, (((_BYTE)this + 84) & 7u) + 3, v8);
  this->zone_type_ = 6;
  toPtr<PlayerWorldScene,Scene>((Scene *)(v2 + 64));
  if ( std::operator!=<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v2 + 64), 0LL) )
  {
    *(_DWORD *)(v2 + 32) = 2;
    v9 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::make_unique<SceneEncounterRandTask,PlayerWorldScene &>((PlayerWorldScene *)&__u, v9);
    v10 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
            &this->encounter_map_,
            (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v2 + 32));
    std::unique_ptr<SceneEncounterBase>::operator=<SceneEncounterRandTask,std::default_delete<SceneEncounterRandTask>>(
      v10,
      &__u);
    std::unique_ptr<SceneEncounterRandTask>::~unique_ptr(&__u);
    *(_DWORD *)(v2 + 48) = 4;
    v11 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::make_unique<SceneEncounterRandQuest,PlayerWorldScene &>((PlayerWorldScene *)&__u, v11);
    v12 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
            &this->encounter_map_,
            (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v2 + 48));
    std::unique_ptr<SceneEncounterBase>::operator=<SceneEncounterRandQuest,std::default_delete<SceneEncounterRandQuest>>(
      v12,
      (std::unique_ptr<SceneEncounterRandQuest> *)&__u);
    std::unique_ptr<SceneEncounterRandQuest>::~unique_ptr((std::unique_ptr<SceneEncounterRandQuest> *const)&__u);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_encounter_comp.cpp",
      "SceneEncounterComp",
      41);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v15,
      (const char (*)[37])"toPtr<PlayerWorldScene>(scene) fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_refresh_time_, Now, (_BYTE)this + 72);
  }
  this->next_refresh_time_ = Now;
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 64));
  if ( v16 == (char *)v2 )
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

// Line 47: range 0000000015C68B04-0000000015C68B4F
int32_t __cdecl SceneEncounterComp::fromBin(SceneEncounterComp *const this, const proto::SceneBin *scene_bin)
{
  const proto::SceneEncounterCompBin *v2; // rdx
  SceneEncounterRandQuest *rand_quest_ptr; // [rsp+18h] [rbp-8h]

  rand_quest_ptr = SceneEncounterComp::findSceneEncounterRandQuest(this);
  if ( rand_quest_ptr )
  {
    v2 = proto::SceneBin::encounter_comp_bin(scene_bin);
    SceneEncounterRandQuest::fromBin(rand_quest_ptr, v2);
  }
  return 0;
};

// Line 57: range 0000000015C68B50-0000000015C68D86
int32_t __cdecl SceneEncounterComp::toBin(const SceneEncounterComp *const this, proto::SceneBin *scene_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::pointer v6; // rax
  std::unique_ptr<SceneEncounterBase>::pointer v7; // rax
  const SceneEncounterRandQuest *v8; // rax
  proto::SceneEncounterCompBin *v9; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  const SceneEncounterRandQuest *rand_quest_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 rand_quest:58 64 8 7 iter:59";
  *(_QWORD *)(v2 + 16) = SceneEncounterComp::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = 4;
  *(std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::find(
                                                                                               &this->encounter_map_,
                                                                                               (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::end(&this->encounter_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_comp.cpp",
      "toBin",
      62);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v12,
      (const char (*)[37])"encounter_map_ find rand_quest fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > > *const)(v2 + 64));
    v7 = std::unique_ptr<SceneEncounterBase>::get(&v6->second);
    if ( v7 )
      v8 = (const SceneEncounterRandQuest *)__dynamic_cast(
                                              v7,
                                              (const struct __class_type_info *)&`typeinfo for'SceneEncounterBase,
                                              (const struct __class_type_info *)&`typeinfo for'SceneEncounterRandQuest,
                                              0LL);
    else
      v8 = 0LL;
    rand_quest_ptr = v8;
    if ( v8 )
    {
      v9 = proto::SceneBin::mutable_encounter_comp_bin(scene_bin);
      SceneEncounterRandQuest::toBin(rand_quest_ptr, v9);
    }
    result = 0;
  }
  if ( v13 == (char *)v2 )
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

// Line 74: range 0000000015C68D88-0000000015C69148
int32_t __cdecl SceneEncounterComp::start(SceneEncounterComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v5; // rax
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v6; // rax
  std::unique_ptr<SceneEncounterBase>::pointer v7; // rax
  SceneEncounterRandQuest *v8; // rax
  uint32_t Now; // eax
  uint32_t v10; // edi
  bool v11; // dl
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 rand_task:81 48 4 13 rand_quest:88 64 16 19 owner_player_ptr:75";
  *(_QWORD *)(v1 + 16) = SceneEncounterComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v1 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_comp.cpp",
      "start",
      78);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = -1;
  }
  else
  {
    *(_DWORD *)(v1 + 32) = 2;
    v5 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
           &this->encounter_map_,
           (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v1 + 32));
    if ( std::operator==<SceneEncounterBase,std::default_delete<SceneEncounterBase>>(0LL, v5) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_encounter_comp.cpp",
        "start",
        84);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v14,
        (const char (*)[37])"make_unique<EncounterRandTask> fails");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v4 = -1;
    }
    else
    {
      *(_DWORD *)(v1 + 48) = 4;
      v6 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
             &this->encounter_map_,
             (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v1 + 48));
      v7 = std::unique_ptr<SceneEncounterBase>::get(v6);
      if ( v7 )
        v8 = (SceneEncounterRandQuest *)__dynamic_cast(
                                          v7,
                                          (const struct __class_type_info *)&`typeinfo for'SceneEncounterBase,
                                          (const struct __class_type_info *)&`typeinfo for'SceneEncounterRandQuest,
                                          0LL);
      else
        v8 = 0LL;
      if ( v8 )
      {
        SceneEncounterRandQuest::clearSavedParentQuestId(v8);
        Now = common::tools::TimeUtils::getNow();
        v10 = Now;
        v11 = *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3)
                                                               + 0x7FFF8000);
        if ( v11 )
        {
          v10 = (_DWORD)this + 76;
          __asan_report_store4(&this->last_check_timer_, (((_BYTE)this + 76) & 7u) + 3, v11);
        }
        this->last_check_timer_ = v10;
        v4 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_encounter_comp.cpp",
          "start",
          96);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v14,
          (const char (*)[38])"make_unique<EncounterRandQuest> fails");
        common::milog::MiLogStream::~MiLogStream(&v14);
        v4 = -1;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  result = v4;
  if ( v15 == (char *)v1 )
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

// Line 105: range 0000000015C694FA-0000000015C6A0F5
void __cdecl SceneEncounterComp::onTimer(SceneEncounterComp *const this, uint32_t now)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // dl
  Player *v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v15; // rax
  std::unique_ptr<SceneEncounterBase>::pointer v16; // rax
  SceneEncounterRandTask *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char v22; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  bool v24; // r15
  Scene *scene; // r14
  std::function<ForeachPolicy(Player&)> *p_p_func; // rsi
  __int64 v27; // rdx
  uint32_t v28; // ecx
  char v29; // al
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  SceneEncounterComp::onTimer::<lambda(Player&)> v39; // [rsp-20h] [rbp-1D0h]
  uint32_t remain_slot; // [rsp+2Ch] [rbp-184h]
  uint32_t slot; // [rsp+30h] [rbp-180h]
  uint32_t open_level; // [rsp+34h] [rbp-17Ch]
  common::milog::MiLog *scene_id; // [rsp+38h] [rbp-178h]
  std::unique_ptr<SceneEncounterBase> *encounter_ptr; // [rsp+50h] [rbp-160h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::reference v45; // [rsp+58h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::type *encounter_utr; // [rsp+68h] [rbp-148h]
  std::shared_ptr<Config> v47; // [rsp+70h] [rbp-140h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v49; // [rsp+A0h] [rbp-110h] BYREF
  char v50[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 13 rand_task:138 48 4 15 select_type:197 64 8 19 result_zone_ptr:167 96 8 14 player_ptr:1"
                        "68 128 16 20 owner_player_ptr:113 160 16 13 world_ptr:119";
  *(_QWORD *)(v2 + 16) = SceneEncounterComp::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( now < this->last_check_timer_ + 5 )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getPlayerCount(this->scene_) )
    v5 = 0;
  else
LABEL_10:
    v5 = 1;
  if ( !v5 )
  {
    v6 = *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3)
                                                          + 0x7FFF8000);
    if ( v6 )
      __asan_report_store4(&this->last_check_timer_, (((_BYTE)this + 76) & 7u) + 3, v6);
    this->last_check_timer_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnPlayer((const Scene *const)(v2 + 128));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_comp.cpp",
        "onTimer",
        116);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v49, (const char (*)[19])"getOwnPlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      Player::getSceneComp(v7);
      PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 160));
      if ( !std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 160), 0LL) )
      {
        v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Uid = Player::getUid(v9);
        if ( World::isPlayerIn(v8, Uid) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v47);
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
          open_level = ConstValueExcelConfigMgr::getRandTaskCompOpenPlayerLevel(&v12->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v47);
          v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          BasicComp = Player::getBasicComp(v13);
          if ( open_level <= PlayerBasicComp::getLevel(BasicComp) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( this->zone_type_ )
            {
              *(_DWORD *)(v2 + 32) = 2;
              v15 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
                      &this->encounter_map_,
                      (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v2 + 32));
              v16 = std::unique_ptr<SceneEncounterBase>::get(v15);
              if ( v16 )
                v17 = (SceneEncounterRandTask *)__dynamic_cast(
                                                  v16,
                                                  (const struct __class_type_info *)&`typeinfo for'SceneEncounterBase,
                                                  (const struct __class_type_info *)&`typeinfo for'SceneEncounterRandTask,
                                                  0LL);
              else
                v17 = 0LL;
              if ( v17 )
                SceneEncounterRandTask::destroyRemoteRandTask(v17);
              remain_slot = 0;
              slot = 0;
              *(std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::iterator *)(v2 + 64) = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::begin(&this->encounter_map_);
              *(std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::iterator *)(v2 + 96) = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::end(&this->encounter_map_);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::_Self *)(v2 + 64),
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::_Self *)(v2 + 96)) )
              {
                v45 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > > *const)(v2 + 64));
                std::get<0ul,unsigned int const,std::unique_ptr<SceneEncounterBase>>(v45);
                encounter_utr = (std::tuple_element<1,const std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::type *)std::get<1ul,unsigned int const,std::unique_ptr<SceneEncounterBase>>(v45);
                v18 = (unsigned __int64)std::unique_ptr<SceneEncounterBase>::operator->(encounter_utr);
                if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                  v18 = __asan_report_load8();
                v19 = *(_QWORD *)v18 + 24LL;
                if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
                  v18 = __asan_report_load8();
                remain_slot += (*(__int64 (__fastcall **)(unsigned __int64))v19)(v18);
                v20 = (unsigned __int64)std::unique_ptr<SceneEncounterBase>::operator->(encounter_utr);
                if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                  v20 = __asan_report_load8();
                v21 = *(_QWORD *)v20 + 16LL;
                if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                  v20 = __asan_report_load8();
                slot += (*(__int64 (__fastcall **)(unsigned __int64))v21)(v20);
                std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > > *const)(v2 + 64));
              }
              v22 = 0;
              v24 = 1;
              if ( remain_slot )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v47);
                v22 = 1;
                v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
                if ( slot < ConstValueExcelConfigMgr::getRandTaskCompMaxNum(&v23->design_config.txt_config_mgr.const_value_config_mgr) )
                  v24 = 0;
              }
              if ( v22 )
                std::shared_ptr<Config>::~shared_ptr(&v47);
              if ( !v24 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( this->next_refresh_time_ && now >= this->next_refresh_time_ )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  LODWORD(scene_id) = Scene::getSceneId(this->scene_);
                  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  HIDWORD(scene_id) = this->zone_type_;
                  *(_QWORD *)(v2 + 64) = 0LL;
                  *(_QWORD *)(v2 + 96) = 0LL;
                  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  scene = this->scene_;
                  v49.log_ = scene_id;
                  LODWORD(v49.ostr_ptr_._M_ptr) = open_level;
                  v49.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 96);
                  v49.ostr_ = (common::milog::MilogStringStream *)(v2 + 64);
                  v39.__result_zone_ptr = (const data::ConfigEnvironmentZone **)(v2 + 64);
                  v39.__player_ptr = (Player **)(v2 + 96);
                  *(_OWORD *)&v39.__scene_id = __PAIR128__(
                                                 (unsigned __int64)v49.ostr_ptr_._M_ptr,
                                                 (unsigned __int64)scene_id);
                  std::function<ForeachPolicy ()(Player &)>::function<SceneEncounterComp::onTimer(unsigned int)::{lambda(Player &)#1},void,void>(
                    &p_func,
                    v39);
                  p_p_func = &p_func;
                  Scene::foreachPlayer(scene, &p_func);
                  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
                  if ( *(_QWORD *)(v2 + 64) && *(_QWORD *)(v2 + 96) )
                  {
                    v27 = *(_QWORD *)(v2 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v27 + 124) >> 3) + 0x7FFF8000) != 0
                      && (char)(((v27 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v27 + 124) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    v28 = *(_DWORD *)(v27 + 124);
                    v29 = *(_BYTE *)(((unsigned __int64)&this->last_zone_level_ >> 3) + 0x7FFF8000);
                    if ( v29 != 0 && v29 <= 3 )
                    {
                      LOBYTE(p_p_func) = v29 != 0;
                      __asan_report_store4(&this->last_zone_level_, p_p_func, (_BYTE)this + 80);
                    }
                    this->last_zone_level_ = v28;
                    *(_DWORD *)(v2 + 48) = SceneEncounterComp::selectEncounterType(
                                             this,
                                             *(const data::ConfigEnvironmentZone **)(v2 + 64));
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&p_func,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/scene/scene_encounter_comp.cpp",
                      "onTimer",
                      198);
                    v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            (common::milog::MiLogStream *const)&p_func,
                            (const char (*)[13])"zone_type_: ");
                    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->zone_type_);
                    v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v31,
                            (const char (*)[17])" zone_bit_type: ");
                    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v32,
                            (const unsigned int *)(*(_QWORD *)(v2 + 64) + 128LL));
                    v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v33,
                            (const char (*)[15])" select_type: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
                    encounter_ptr = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
                                      &this->encounter_map_,
                                      (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v2 + 48));
                    if ( std::operator==<SceneEncounterBase,std::default_delete<SceneEncounterBase>>(0LL, encounter_ptr) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&p_func,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/scene/scene_encounter_comp.cpp",
                        "onTimer",
                        204);
                      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)&p_func,
                              (const char (*)[16])"encounter_ptr: ");
                      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v35,
                              (const unsigned int *)(v2 + 48));
                      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v36,
                        (const char (*)[12])off_259BBAA0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
                    }
                    else
                    {
                      v37 = (unsigned __int64)std::unique_ptr<SceneEncounterBase>::operator->(encounter_ptr);
                      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                        v37 = __asan_report_load8();
                      v38 = *(_QWORD *)v37 + 32LL;
                      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                        v37 = __asan_report_load8();
                      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))v38)(
                        v37,
                        *(_QWORD *)(v2 + 96),
                        *(_QWORD *)(v2 + 64));
                    }
                  }
                }
              }
            }
          }
        }
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 160));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
  }
  if ( v50 == (char *)v2 )
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
};

// Line 169: range 0000000015C6914A-0000000015C694F9
ForeachPolicy __cdecl SceneEncounterComp::onTimer(unsigned int)::{lambda(Player &)#1}::operator()(
        const SceneEncounterComp::onTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerAvatarComp *AvatarComp; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  char v8; // al
  ForeachPolicy v9; // r14d
  PlayerSceneComp *SceneComp; // rax
  JsonConfigMgr *p_json_config_mgr; // r14
  uint32_t zone_type; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *Position; // rcx
  __int64 scene_id; // rsi
  unsigned __int64 result_zone_ptr; // rax
  unsigned __int64 player_ptr; // rax
  ForeachPolicy result; // eax
  uint32_t area_id; // [rsp+24h] [rbp-8Ch]
  const data::ConfigEnvironmentZone *zone_config_ptr; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-80h] BYREF
  char v23[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:175";
  *(_QWORD *)(v2 + 16) = SceneEncounterComp::onTimer(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  AvatarComp = Player::getAvatarComp(player);
  if ( PlayerAvatarComp::getMonsterAlertCount(AvatarComp) )
    goto LABEL_8;
  BasicComp = Player::getBasicComp(player);
  Level = PlayerBasicComp::getLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Level < __closure->__open_level )
LABEL_8:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = FOREACH_CONTINUE;
  }
  else
  {
    Player::getCurAvatar((Player *const)(v2 + 32));
    SceneComp = Player::getSceneComp(player);
    area_id = PlayerSceneComp::getLevel1AreaId(SceneComp);
    if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
      goto LABEL_27;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__zone_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__zone_type >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    zone_type = __closure->__zone_type;
    v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition((const Entity *const)v13);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    scene_id = __closure->__scene_id;
    zone_config_ptr = JsonConfigMgr::findConfigEnvironmentZone(
                        p_json_config_mgr,
                        scene_id,
                        area_id,
                        Position,
                        zone_type);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( zone_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__result_zone_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result_zone_ptr = (unsigned __int64)__closure->__result_zone_ptr;
      if ( *(_BYTE *)((result_zone_ptr >> 3) + 0x7FFF8000) )
        result_zone_ptr = __asan_report_store8(__closure->__result_zone_ptr, scene_id);
      *(_QWORD *)result_zone_ptr = zone_config_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__player_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player_ptr = (unsigned __int64)__closure->__player_ptr;
      if ( *(_BYTE *)((player_ptr >> 3) + 0x7FFF8000) )
        player_ptr = __asan_report_store8(__closure->__player_ptr, scene_id);
      *(_QWORD *)player_ptr = player;
      v9 = FOREACH_BREAK;
    }
    else
    {
LABEL_27:
      v9 = FOREACH_CONTINUE;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  }
  result = v9;
  if ( v23 == (char *)v2 )
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

// Line 211: range 0000000015C6A0F6-0000000015C6A230
uint32_t __cdecl SceneEncounterComp::selectEncounterType(
        const SceneEncounterComp *const this,
        const data::ConfigEnvironmentZone *zone_config)
{
  uint32_t v2; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t v4; // ebx
  uint32_t zone_bit_type; // [rsp+18h] [rbp-28h]
  unsigned int rand; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v8[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&zone_config->zone_bit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&zone_config->zone_bit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v2 = zone_config->zone_bit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  zone_bit_type = v2 & this->zone_type_;
  switch ( zone_bit_type )
  {
    case 6u:
      rand = common::tools::RandomUtils::rand<int>(0, 100);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v8);
      v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
      if ( rand >= ConstValueExcelConfigMgr::getRandTaskWeight(&v3->design_config.txt_config_mgr.const_value_config_mgr) )
        v4 = 4;
      else
        v4 = 2;
      std::shared_ptr<Config>::~shared_ptr(v8);
      break;
    case 2u:
      return 2;
    case 4u:
      return 4;
    default:
      return 0;
  }
  return v4;
};

// Line 232: range 0000000015C6A232-0000000015C6A8CE
void __fastcall SceneEncounterComp::onWorldPlayerChange(
        SceneEncounterComp *const this,
        uint32_t last_num,
        uint32_t cur_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Player *v6; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Uid; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 v17; // rax
  bool v18; // dl
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool v21; // dl
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  SceneEncounterRandQuest *rand_quest_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 last_num:231 48 4 11 cur_num:231 64 16 14 player_ptr:234 96 16 13 world_ptr:240";
  *(_QWORD *)(v3 + 16) = SceneEncounterComp::onWorldPlayerChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = last_num;
  *(_DWORD *)(v3 + 48) = cur_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v3 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_comp.cpp",
      "onWorldPlayerChange",
      237);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getSceneComp(v6);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 96));
    if ( !std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
    {
      v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Uid = Player::getUid(v8);
      if ( World::isPlayerIn(v7, Uid) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_encounter_comp.cpp",
          "onWorldPlayerChange",
          246);
        v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v27,
                (const char (*)[27])"onWorldPlayerChange last: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" cur: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" owner uid: ");
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Player::getUid(v16);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        if ( *(_DWORD *)(v3 + 32) == 1 && *(_DWORD *)(v3 + 48) > 1u )
        {
          rand_quest_ptr = SceneEncounterComp::findSceneEncounterRandQuest(this);
          if ( rand_quest_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)rand_quest_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v17 = (unsigned __int64)(rand_quest_ptr->_vptr_SceneEncounterBase + 5);
            if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8();
            (*(void (__fastcall **)(SceneEncounterRandQuest *))v17)(rand_quest_ptr);
          }
          v18 = *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3)
                                                                 + 0x7FFF8000);
          if ( v18 )
            __asan_report_store4(&this->zone_type_, (((_BYTE)this + 84) & 7u) + 3, v18);
          this->zone_type_ = 2;
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/scene/scene_encounter_comp.cpp",
            "onWorldPlayerChange",
            257);
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v27, (const char (*)[12])"owner_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Scene::getOwnerUid(this->scene_);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v20,
            (const char (*)[21])" enter mp encounter!");
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        else if ( *(_DWORD *)(v3 + 48) <= 1u )
        {
          v21 = *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3)
                                                                 + 0x7FFF8000);
          if ( v21 )
            __asan_report_store4(&this->zone_type_, (((_BYTE)this + 84) & 7u) + 3, v21);
          this->zone_type_ = 6;
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/scene/scene_encounter_comp.cpp",
            "onWorldPlayerChange",
            266);
          v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v27, (const char (*)[12])"owner_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Scene::getOwnerUid(this->scene_);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v23,
            (const char (*)[20])" exit mp encounter!");
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v28 == (char *)v3 )
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
};

// Line 270: range 0000000015C6A8D0-0000000015C6AA89
void __cdecl SceneEncounterComp::clear(SceneEncounterComp *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>> *__for_range; // [rsp+30h] [rbp-50h]
  std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > *__in; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::type *type; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase> > >::type *encounter_ptr; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->encounter_map_;
  __for_begin._M_node = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::begin(&this->encounter_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::end(&this->encounter_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase>>>::operator*(&__for_begin);
    type = std::get<0ul,unsigned int const,std::unique_ptr<SceneEncounterBase>>(__in);
    encounter_ptr = std::get<1ul,unsigned int const,std::unique_ptr<SceneEncounterBase>>(__in);
    v1 = (unsigned __int64)std::unique_ptr<SceneEncounterBase>::operator->(encounter_ptr);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    v2 = *(_QWORD *)v1 + 40LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v2)(v1);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::unique_ptr<SceneEncounterBase>>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_encounter_comp.cpp",
    "clear",
    275);
  v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v12, (const char (*)[12])"owner_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getOwnerUid(this->scene_);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v4, (const char (*)[23])" clear encounter comp!");
  common::milog::MiLogStream::~MiLogStream(&v12);
};

// Line 280: range 0000000015C6AA8A-0000000015C6AB2A
void __cdecl SceneEncounterComp::clearRandQuestByGm(SceneEncounterComp *const this)
{
  SceneEncounterRandQuest *rand_quest_comp_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v2; // [rsp+20h] [rbp-30h] BYREF

  rand_quest_comp_ptr = SceneEncounterComp::findSceneEncounterRandQuest(this);
  if ( rand_quest_comp_ptr )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_encounter_comp.cpp",
      "clearRandQuestByGm",
      284);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v2,
      (const char (*)[43])"SceneEncounterComp exec clearRandQuestByGm");
    common::milog::MiLogStream::~MiLogStream(&v2);
    SceneEncounterRandQuest::forceCleanByGM(rand_quest_comp_ptr);
  }
};

// Line 292: range 0000000015C6AB2C-0000000015C6AC7F
void __cdecl SceneEncounterComp::clearRandTaskByGm(SceneEncounterComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v4; // rax
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 rand_task:293";
  *(_QWORD *)(v1 + 16) = SceneEncounterComp::clearRandTaskByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 2;
  v4 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
         &this->encounter_map_,
         (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v1 + 32));
  if ( std::operator!=<SceneEncounterBase,std::default_delete<SceneEncounterBase>>(0LL, v4) )
  {
    v5 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
           &this->encounter_map_,
           (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v1 + 32));
    v6 = (unsigned __int64)std::unique_ptr<SceneEncounterBase>::operator->(v5);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(_QWORD *)v6 + 40LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v7)(v6);
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 301: range 0000000015C6AC80-0000000015C6AD3A
int32_t __cdecl SceneEncounterComp::refreshRandTaskByGm(
        SceneEncounterComp *const this,
        uint32_t rand_task_id,
        Player *player,
        uint32_t revise_level)
{
  SceneEncounterRandTask *rand_task_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  rand_task_ptr = SceneEncounterComp::findSceneEncounterRandTask(this);
  if ( rand_task_ptr )
    return SceneEncounterRandTask::refreshByGm(rand_task_ptr, rand_task_id, player, revise_level);
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_encounter_comp.cpp",
    "refreshRandTaskByGm",
    305);
  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
    &v8,
    (const char (*)[39])"dynamic_cast<EncounterRandTask*> fails");
  common::milog::MiLogStream::~MiLogStream(&v8);
  return -1;
};

// Line 312: range 0000000015C6AD3C-0000000015C6ADF2
int32_t __cdecl SceneEncounterComp::tryCreateRandTaskByGm(
        SceneEncounterComp *const this,
        uint32_t rand_task_id,
        Player *player)
{
  SceneEncounterRandTask *rand_task_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  rand_task_ptr = SceneEncounterComp::findSceneEncounterRandTask(this);
  if ( rand_task_ptr )
    return SceneEncounterRandTask::tryCreateRandTaskByGm(rand_task_ptr, rand_task_id, player);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_encounter_comp.cpp",
    "tryCreateRandTaskByGm",
    316);
  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
    &v6,
    (const char (*)[39])"dynamic_cast<EncounterRandTask*> fails");
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 323: range 0000000015C6ADF4-0000000015C6AEAB
int32_t __cdecl SceneEncounterComp::finishRandTask(SceneEncounterComp *const this, uint32_t rand_task_id, bool is_succ)
{
  SceneEncounterRandTask *rand_task_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  rand_task_ptr = SceneEncounterComp::findSceneEncounterRandTask(this);
  if ( rand_task_ptr )
    return SceneEncounterRandTask::finishRandTask(rand_task_ptr, rand_task_id, is_succ);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_encounter_comp.cpp",
    "finishRandTask",
    327);
  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
    &v6,
    (const char (*)[39])"dynamic_cast<EncounterRandTask*> fails");
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 334: range 0000000015C6AEAC-0000000015C6AF58
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneEncounterComp::updateNextRefreshTime(SceneEncounterComp *const this, uint32_t cd)
{
  uint32_t now; // [rsp+18h] [rbp-8h]
  uint32_t next_time; // [rsp+1Ch] [rbp-4h]

  now = common::tools::TimeUtils::getNow();
  next_time = now + cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now > this->next_refresh_time_ || next_time < this->next_refresh_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->next_refresh_time_, *(_QWORD *)&cd, (_BYTE)this + 72);
    }
    this->next_refresh_time_ = next_time;
  }
};

// Line 344: range 0000000015C6AF5A-0000000015C6B00E
bool __cdecl SceneEncounterComp::isCreatedByRandTask(
        SceneEncounterComp *const this,
        uint32_t group_id,
        uint32_t rand_task_id)
{
  SceneEncounterRandTask *rand_task_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  rand_task_ptr = SceneEncounterComp::findSceneEncounterRandTask(this);
  if ( rand_task_ptr )
    return SceneEncounterRandTask::isCreatedByRandTask(rand_task_ptr, group_id, rand_task_id);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_encounter_comp.cpp",
    "isCreatedByRandTask",
    348);
  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
    &v6,
    (const char (*)[39])"dynamic_cast<EncounterRandTask*> fails");
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0;
};

// Line 355: range 0000000015C6B010-0000000015C6B10C
SceneEncounterRandTask *__cdecl SceneEncounterComp::findSceneEncounterRandTask(SceneEncounterComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v4; // rax
  std::unique_ptr<SceneEncounterBase>::pointer v5; // rax
  SceneEncounterRandTask *result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 rand_task:356";
  *(_QWORD *)(v1 + 16) = SceneEncounterComp::findSceneEncounterRandTask;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 2;
  v4 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
         &this->encounter_map_,
         (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v1 + 32));
  v5 = std::unique_ptr<SceneEncounterBase>::get(v4);
  if ( v5 )
    result = (SceneEncounterRandTask *)__dynamic_cast(
                                         v5,
                                         (const struct __class_type_info *)&`typeinfo for'SceneEncounterBase,
                                         (const struct __class_type_info *)&`typeinfo for'SceneEncounterRandTask,
                                         0LL);
  else
    result = 0LL;
  if ( v7 == (char *)v1 )
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

// Line 361: range 0000000015C6B10E-0000000015C6B20A
SceneEncounterRandQuest *__cdecl SceneEncounterComp::findSceneEncounterRandQuest(SceneEncounterComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::mapped_type *v4; // rax
  std::unique_ptr<SceneEncounterBase>::pointer v5; // rax
  SceneEncounterRandQuest *result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 rand_quest:362";
  *(_QWORD *)(v1 + 16) = SceneEncounterComp::findSceneEncounterRandQuest;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 4;
  v4 = std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::operator[](
         &this->encounter_map_,
         (const std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::key_type *)(v1 + 32));
  v5 = std::unique_ptr<SceneEncounterBase>::get(v4);
  if ( v5 )
    result = (SceneEncounterRandQuest *)__dynamic_cast(
                                          v5,
                                          (const struct __class_type_info *)&`typeinfo for'SceneEncounterBase,
                                          (const struct __class_type_info *)&`typeinfo for'SceneEncounterRandQuest,
                                          0LL);
  else
    result = 0LL;
  if ( v7 == (char *)v1 )
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

// Line 367: range 0000000015C6B20C-0000000015C6B2CE
int32_t __cdecl SceneEncounterComp::clearNextRefreshTimeByGm(SceneEncounterComp *const this)
{
  __int64 Now; // rsi
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/scene/scene_encounter_comp.cpp",
    "clearNextRefreshTimeByGm",
    369);
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
    &v3,
    (const char (*)[32])"GM clear rand task refresh time");
  common::milog::MiLogStream::~MiLogStream(&v3);
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_refresh_time_, Now, (_BYTE)this + 72);
  }
  this->next_refresh_time_ = Now;
  return 0;
};
