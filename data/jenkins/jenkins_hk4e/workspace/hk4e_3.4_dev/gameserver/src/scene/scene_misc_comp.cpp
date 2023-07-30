// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_misc_comp.cpp

// Line 22: range 0000000015CE1118-0000000015CE1BC6
__int64 __fastcall SceneMiscComp::playCutScene(
        SceneMiscComp *const this,
        uint32_t group_id,
        uint32_t cutscene_id,
        uint32_t wait_time,
        const std::vector<std::vector<double>> *extra_param_vec)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Scene *Scene; // rax
  google::protobuf::RepeatedField<double> *v19; // rax
  Scene *v20; // rax
  Scene *v21; // r15
  common::milog::MiLogStream *v22; // rsi
  uint32_t v23; // ecx
  char v24; // al
  uint32_t v25; // ecx
  char v26; // dl
  bool v27; // dl
  uint32_t v28; // ecx
  char v29; // al
  int v30; // r15d
  SceneTimer *v31; // rax
  common::milog::MiLogStream *v32; // r14
  Scene *v33; // rax
  __int64 result; // rax
  bool is_wait_others; // [rsp+37h] [rbp-1A9h]
  std::vector<std::vector<double>>::const_iterator __for_begin; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<std::vector<double>>::const_iterator __for_end; // [rsp+40h] [rbp-1A0h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+48h] [rbp-198h]
  const std::vector<std::vector<double>> *__for_range; // [rsp+58h] [rbp-188h]
  const std::vector<double> *detail_param_vec; // [rsp+60h] [rbp-180h]
  proto::CutSceneExtraParam *cutscene_extra_param; // [rsp+68h] [rbp-178h]
  std::weak_ptr<Scene> v46; // [rsp+70h] [rbp-170h] BYREF
  std::shared_ptr<Scene> v47; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v48; // [rsp+90h] [rbp-150h] BYREF
  char v49[304]; // [rsp+B0h] [rbp-130h] BYREF

  v6 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 4 11 group_id:21 64 4 14 cutscene_id:21 80 4 12 wait_time:21 96 16 12 scene_ptr:81 128 16 1"
                        "2 scene_wtr:87 160 56 9 notify:51";
  *(_QWORD *)(v6 + 16) = SceneMiscComp::playCutScene;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  *(_DWORD *)(v6 + 48) = group_id;
  *(_DWORD *)(v6 + 64) = cutscene_id;
  *(_DWORD *)(v6 + 80) = wait_time;
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_misc_comp.cpp",
    "playCutScene",
    23);
  v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v48,
         (const char (*)[24])"playCutScene group_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
  v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" cutscene_id: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" wait_time: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 80));
  common::milog::MiLogStream::~MiLogStream(&v48);
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wait_cutscene_id_ )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_misc_comp.cpp",
      "playCutScene",
      26);
    v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v48, (const char (*)[18])"wait_cutscene_id ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->wait_cutscene_id_);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" Not Finished");
    common::milog::MiLogStream::~MiLogStream(&v48);
    v5 = -1;
  }
  else if ( std::operator!=<SceneTimer>(&this->wait_cutscene_timer_ptr_, 0LL)
         && (v16 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->wait_cutscene_timer_ptr_),
             common::tools::MiTimer::isActive(v16)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_misc_comp.cpp",
      "playCutScene",
      31);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v48,
      (const char (*)[36])"wait_cutscene_timer_ptr_ is active!");
    common::milog::MiLogStream::~MiLogStream(&v48);
    v5 = -1;
  }
  else
  {
    Scene = SceneCompBase::getScene(this);
    scene_script_config_ptr = Scene::getScriptConfig(Scene);
    if ( scene_script_config_ptr )
    {
      if ( SceneScriptConfig::findGroupInfoConfig(scene_script_config_ptr, *(_DWORD *)(v6 + 48)) )
      {
        is_wait_others = *(_DWORD *)(v6 + 80) != 0;
        proto::CutSceneBeginNotify::CutSceneBeginNotify((proto::CutSceneBeginNotify *const)(v6 + 160));
        proto::CutSceneBeginNotify::set_cutscene_id((proto::CutSceneBeginNotify *const)(v6 + 160), *(_DWORD *)(v6 + 64));
        proto::CutSceneBeginNotify::set_is_wait_others((proto::CutSceneBeginNotify *const)(v6 + 160), is_wait_others);
        __for_range = extra_param_vec;
        __for_begin._M_current = std::vector<std::vector<double>>::begin(extra_param_vec)._M_current;
        __for_end._M_current = std::vector<std::vector<double>>::end(extra_param_vec)._M_current;
        while ( __gnu_cxx::operator!=<std::vector<double> const*,std::vector<std::vector<double>>>(
                  &__for_begin,
                  &__for_end) )
        {
          detail_param_vec = __gnu_cxx::__normal_iterator<std::vector<double> const*,std::vector<std::vector<double>>>::operator*(&__for_begin);
          cutscene_extra_param = proto::CutSceneBeginNotify::add_extra_param_list((proto::CutSceneBeginNotify *const)(v6 + 160));
          v19 = proto::CutSceneExtraParam::mutable_detail_param_list(cutscene_extra_param);
          common::tools::MiscUtils::vectorToRepeated<double,double>(detail_param_vec, v19);
          __gnu_cxx::__normal_iterator<std::vector<double> const*,std::vector<std::vector<double>>>::operator++(&__for_begin);
        }
        v20 = SceneCompBase::getScene(this);
        Scene::notifyAllPlayer<proto::CutSceneBeginNotify>(v20, (proto::CutSceneBeginNotify *)(v6 + 160), 0);
        if ( !is_wait_others )
        {
          v5 = 0;
        }
        else
        {
          std::set<unsigned int>::clear(&this->wait_cutscene_over_uid_set_);
          v21 = SceneCompBase::getScene(this);
          std::function<ForeachPolicy ()(Player &)>::function<SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(Player &)#1},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v48,
            (SceneMiscComp::playCutScene::<lambda(Player&)>)this);
          v22 = &v48;
          Scene::foreachPlayer(v21, (std::function<ForeachPolicy(Player&)> *)&v48);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v48);
          v23 = *(_DWORD *)(v6 + 64);
          v24 = *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000);
          if ( v24 != 0 && v24 <= 3 )
          {
            LOBYTE(v22) = v24 != 0;
            __asan_report_store4(&this->wait_cutscene_id_, v22, (_BYTE)this + 40);
          }
          this->wait_cutscene_id_ = v23;
          v25 = *(_DWORD *)(v6 + 48);
          v26 = *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000);
          LOBYTE(v22) = v26 != 0;
          v27 = v26 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v26;
          if ( v27 )
            __asan_report_store4(&this->wait_group_id_, v22, v27);
          this->wait_group_id_ = v25;
          v28 = *(_DWORD *)(v6 + 80);
          v29 = *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000);
          if ( v29 != 0 && v29 <= 3 )
          {
            LOBYTE(v22) = v29 != 0;
            __asan_report_store4(&this->wait_time_, v22, (_BYTE)this + 48);
          }
          this->wait_time_ = v28;
          if ( !std::operator==<SceneTimer>(0LL, &this->wait_cutscene_timer_ptr_) )
            goto LABEL_34;
          SceneCompBase::getScene(this);
          toPtr<Scene,Scene>((Scene *)(v6 + 96));
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v6 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_misc_comp.cpp",
              "playCutScene",
              84);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v48,
              (const char (*)[19])"toPtr Scene failed");
            common::milog::MiLogStream::~MiLogStream(&v48);
            v5 = -1;
            v30 = 0;
          }
          else
          {
            std::weak_ptr<Scene>::weak_ptr<Scene,void>(
              (std::weak_ptr<Scene> *const)(v6 + 128),
              (const std::shared_ptr<Scene> *)(v6 + 96));
            std::weak_ptr<Scene>::weak_ptr(&v46, (const std::weak_ptr<Scene> *)(v6 + 128));
            common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene> &,SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}>(
              &v47,
              (SceneMiscComp::playCutScene::<lambda(uint64_t)> *)(v6 + 96),
              (std::shared_ptr<Scene> *)&v46,
              (SceneMiscComp::playCutScene::<lambda(uint64_t)> *)(v6 + 96));
            std::shared_ptr<SceneTimer>::operator=(&this->wait_cutscene_timer_ptr_, (std::shared_ptr<SceneTimer> *)&v47);
            std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&v47);
            SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}::~vector((SceneMiscComp::playCutScene::<lambda(uint64_t)> *const)&v46);
            std::weak_ptr<Scene>::~weak_ptr((std::weak_ptr<Scene> *const)(v6 + 128));
            v30 = 1;
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 96));
          if ( v30 == 1 )
          {
LABEL_34:
            v31 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->wait_cutscene_timer_ptr_);
            if ( SceneTimer::startS(
                   v31,
                   *(_DWORD *)(v6 + 80),
                   0,
                   "./src/scene/scene_misc_comp.cpp",
                   "playCutScene",
                   102) )
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_misc_comp.cpp",
                "playCutScene",
                104);
              v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v48,
                      (const char (*)[21])" start timer failed.");
              v33 = SceneCompBase::getScene(this);
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v32, v33);
              common::milog::MiLogStream::~MiLogStream(&v48);
            }
            v5 = 0;
          }
        }
        proto::CutSceneBeginNotify::~CutSceneBeginNotify((proto::CutSceneBeginNotify *const)(v6 + 160));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_misc_comp.cpp",
          "playCutScene",
          45);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v48,
          (const char (*)[26])"findGroupInfoConfig fails");
        common::milog::MiLogStream::~MiLogStream(&v48);
        v5 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_misc_comp.cpp",
        "playCutScene",
        38);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v48, (const char (*)[22])"getScriptConfig fails");
      common::milog::MiLogStream::~MiLogStream(&v48);
      v5 = -1;
    }
  }
  result = v5;
  if ( v49 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 69: range 0000000015CE0F00-0000000015CE0F66
ForeachPolicy __cdecl SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(Player &)#1}::operator()(
        const SceneMiscComp::playCutScene::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::set<unsigned int> *p_wait_cutscene_over_uid_set; // rbx
  std::set<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_wait_cutscene_over_uid_set = &__closure->__this->wait_cutscene_over_uid_set_;
  __x[0] = Player::getUid(player);
  std::set<unsigned int>::insert(p_wait_cutscene_over_uid_set, __x);
  return 0;
};

// Line 88: range 0000000015CE0F68-0000000015CE10FA
void __cdecl SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}::operator()(
        const SceneMiscComp::playCutScene::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Scene *v5; // rax
  SceneMiscComp *MiscComp; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 scene_ptr:90";
  *(_QWORD *)(v2 + 16) = SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v2 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MiscComp = Scene::getMiscComp(v5);
    SceneMiscComp::playCutSceneEnd(MiscComp, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_misc_comp.cpp",
      "operator()",
      97);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v7,
      (const char (*)[32])"scene_wtr.lock() return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 88: range 0000000015D254B2-0000000015D254D7
void __cdecl SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}::vector(
        SceneMiscComp::playCutScene::<lambda(uint64_t)> *const this,
        SceneMiscComp::playCutScene::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 88: range 0000000015D26F66-0000000015D26F8B
void __cdecl SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}::vector(
        SceneMiscComp::playCutScene::<lambda(uint64_t)> *const this,
        const SceneMiscComp::playCutScene::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 88: range 0000000015CE10FC-0000000015CE1116
void __cdecl SceneMiscComp::playCutScene(unsigned int,unsigned int,unsigned int,std::vector<std::vector<double>> const&)::{lambda(unsigned long)#2}::~vector(
        SceneMiscComp::playCutScene::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Scene>::~weak_ptr(&this->__scene_wtr);
};

// Line 112: range 0000000015CE1BC8-0000000015CE1F9A
__int64 __fastcall SceneMiscComp::onCutSceneFinishNotify(SceneMiscComp *const this, uint32_t uid, uint32_t cutscene_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:111 48 4 15 cutscene_id:111 64 8 8 iter:120";
  *(_QWORD *)(v3 + 16) = SceneMiscComp::onCutSceneFinishNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = cutscene_id;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_misc_comp.cpp",
    "onCutSceneFinishNotify",
    113);
  v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v16,
         (const char (*)[29])"onCutSceneFinishNotify uid: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" cutscene: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wait_cutscene_id_ == *(_DWORD *)(v3 + 48) )
  {
    *(std::set<unsigned int>::iterator *)(v3 + 64) = std::set<unsigned int>::find(
                                                       &this->wait_cutscene_over_uid_set_,
                                                       (const std::set<unsigned int>::key_type *)(v3 + 32));
    __y._M_node = std::set<unsigned int>::end(&this->wait_cutscene_over_uid_set_)._M_node;
    if ( std::operator==((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 64), &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_misc_comp.cpp",
        "onCutSceneFinishNotify",
        123);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v16, (const char (*)[33])off_259DD7E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      std::set<unsigned int>::erase(
        &this->wait_cutscene_over_uid_set_,
        (const std::set<unsigned int>::key_type *)(v3 + 32));
      if ( std::set<unsigned int>::empty(&this->wait_cutscene_over_uid_set_) )
        SceneMiscComp::playCutSceneEnd(this, 1);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_misc_comp.cpp",
      "onCutSceneFinishNotify",
      117);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v16, (const char (*)[14])"cutscene_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v10,
            (const char (*)[25])" but wait_cutscene_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->wait_cutscene_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  if ( v17 == (char *)v3 )
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
  return result;
};

// Line 137: range 0000000015CE1F9C-0000000015CE2563
void __cdecl SceneMiscComp::playCutSceneEnd(SceneMiscComp *const this, bool is_succ)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  Scene *Scene; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rsi
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  __int64 v11; // rax
  char v12; // dl
  bool v13; // dl
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  Group *v16; // rax
  google::protobuf::uint32 cutscene_id; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-110h] BYREF
  char v20[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 group_id:141 64 16 13 event_ptr:158 96 16 13 group_ptr:167 128 32 10 notify:145";
  *(_QWORD *)(v2 + 16) = SceneMiscComp::playCutSceneEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_misc_comp.cpp",
    "playCutSceneEnd",
    138);
  v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v19,
         (const char (*)[26])"playCutSceneEnd is_succ: ");
  common::milog::MiLogStream::operator<<(v5, is_succ);
  common::milog::MiLogStream::~MiLogStream(&v19);
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cutscene_id = this->wait_cutscene_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = this->wait_group_id_;
  SceneMiscComp::clearCutSceneInfo(this);
  proto::CutSceneEndNotify::CutSceneEndNotify((proto::CutSceneEndNotify *const)(v2 + 128));
  proto::CutSceneEndNotify::set_cutscene_id((proto::CutSceneEndNotify *const)(v2 + 128), cutscene_id);
  if ( is_succ )
    proto::CutSceneEndNotify::set_retcode((proto::CutSceneEndNotify *const)(v2 + 128), 0);
  else
    proto::CutSceneEndNotify::set_retcode((proto::CutSceneEndNotify *const)(v2 + 128), -1);
  Scene = SceneCompBase::getScene(this);
  Scene::notifyAllPlayer<proto::CutSceneEndNotify>(Scene, (proto::CutSceneEndNotify *)(v2 + 128), 0);
  EventUtil::createEvent((data::EventType)(v2 + 64));
  if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_misc_comp.cpp",
      "playCutSceneEnd",
      161);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v19,
      (const char (*)[45])"createEvent(data::EVENT_CUTSCENE_END) failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    std::to_string((std::string *)&v19, cutscene_id);
    v7 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = &v19;
    std::string::operator=(&v7->source_name, &v19);
    std::string::~string(&v19);
    v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v10 = *(_BYTE *)(((unsigned __int64)&v9->param1 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)((((_BYTE)v9 + 44) & 7) + 3) >= v10 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(&v9->param1, v8, (_BYTE)v9);
    }
    v9->param1 = cutscene_id;
    v11 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v12 = *(_BYTE *)(((unsigned __int64)(v11 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v12 != 0;
    v13 = v12 != 0 && v12 <= 3;
    if ( v13 )
      v11 = __asan_report_store4(v11 + 48, v8, v13);
    *(_DWORD *)(v11 + 48) = is_succ;
    v14 = (unsigned int)SceneCompBase::getScene(this);
    Scene::findGroup((Scene *const)(v2 + 96), v14);
    if ( !std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_misc_comp.cpp",
        "playCutSceneEnd",
        170);
      v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v19,
              (const char (*)[29])"findGroup failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v16 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Group::handleEvent(v16, (EventPtr *)(v2 + 64));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
  proto::CutSceneEndNotify::~CutSceneEndNotify((proto::CutSceneEndNotify *const)(v2 + 128));
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 177: range 0000000015CE2564-0000000015CE2675
void __cdecl SceneMiscComp::clearCutSceneInfo(SceneMiscComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax

  std::set<unsigned int>::clear(&this->wait_cutscene_over_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_cutscene_id_, v1, (_BYTE)this + 40);
  }
  this->wait_cutscene_id_ = 0;
  v2 = (((_BYTE)this + 44) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->wait_group_id_, v2, v3);
  this->wait_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_time_, v2, (_BYTE)this + 48);
  }
  this->wait_time_ = 0;
  if ( std::operator!=<SceneTimer>(&this->wait_cutscene_timer_ptr_, 0LL) )
  {
    v4 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->wait_cutscene_timer_ptr_);
    common::tools::MiTimer::cancel(v4);
  }
};

// Line 189: range 0000000015CE2676-0000000015CE2A88
void __fastcall SceneMiscComp::onPlayerEnter(SceneMiscComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t group_id; // [rsp+18h] [rbp-D8h]
  uint32_t wait_time; // [rsp+1Ch] [rbp-D4h]
  std::vector<std::vector<double>> extra_param_vec; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 cutscene_id:199 64 4 7 uid:188";
  *(_QWORD *)(v2 + 16) = SceneMiscComp::onPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wait_cutscene_id_
    && common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->wait_cutscene_over_uid_set_,
         (const unsigned int *)(v2 + 64)) )
  {
    if ( std::set<unsigned int>::size(&this->wait_cutscene_over_uid_set_) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      group_id = this->wait_group_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = this->wait_cutscene_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      wait_time = this->wait_time_;
      SceneMiscComp::clearCutSceneInfo(this);
      memset(&extra_param_vec, 0, sizeof(extra_param_vec));
      std::vector<std::vector<double>>::vector(&extra_param_vec);
      v6 = (unsigned int)SceneMiscComp::playCutScene(this, group_id, *(_DWORD *)(v2 + 48), wait_time, &extra_param_vec) != 0;
      std::vector<std::vector<double>>::~vector(&extra_param_vec);
      if ( v6 )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_misc_comp.cpp",
          "onPlayerEnter",
          205);
        v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v13,
               (const char (*)[34])"playCutScene fails, cutscene_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneMiscComp::onCutSceneFinishNotify(this, *(_DWORD *)(v2 + 64), this->wait_cutscene_id_);
    }
  }
  if ( v14 == (char *)v2 )
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

// Line 216: range 0000000015CE2A8A-0000000015CE2C02
void __fastcall SceneMiscComp::onPlayerLeave(SceneMiscComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:215";
  *(_QWORD *)(v2 + 16) = SceneMiscComp::onPlayerLeave;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wait_cutscene_id_
    && common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->wait_cutscene_over_uid_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    SceneMiscComp::onCutSceneFinishNotify(this, *(_DWORD *)(v2 + 32), this->wait_cutscene_id_);
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
