// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity.hpp

// Line 22: range 0000000014A04B40-0000000014A04D1B
int32_t __cdecl Entity::notifyViewingPlayers<proto::AvatarFollowRouteNotify>(
        Entity *const this,
        proto::AvatarFollowRouteNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::AvatarFollowRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::AvatarFollowRouteNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000017A494BA-0000000017A49695
int32_t __cdecl Entity::notifyViewingPlayers<proto::EntityFightPropChangeReasonNotify>(
        Entity *const this,
        proto::EntityFightPropChangeReasonNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::EntityFightPropChangeReasonNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::EntityFightPropChangeReasonNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000017A195DC-0000000017A197B7
int32_t __cdecl Entity::notifyViewingPlayers<proto::EntityFightPropNotify>(
        Entity *const this,
        proto::EntityFightPropNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::EntityFightPropNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::EntityFightPropNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000017A19278-0000000017A19453
int32_t __cdecl Entity::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>(
        Entity *const this,
        proto::EntityFightPropUpdateNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t updated; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    updated = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    updated = Scene::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = updated;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000014F8CE6E-0000000014F8D049
int32_t __cdecl Entity::notifyViewingPlayers<proto::EntityPropNotify>(
        Entity *const this,
        proto::EntityPropNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::EntityPropNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::EntityPropNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176BA8BC-00000000176BAA97
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetPlayDataNotify>(
        Entity *const this,
        proto::GadgetPlayDataNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetPlayDataNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::GadgetPlayDataNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176BA12C-00000000176BA307
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetPlayStartNotify>(
        Entity *const this,
        proto::GadgetPlayStartNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t started; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetPlayStartNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    started = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    started = Scene::notifyViewingPlayers<proto::GadgetPlayStartNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = started;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176BA308-00000000176BA4E3
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetPlayStopNotify>(
        Entity *const this,
        proto::GadgetPlayStopNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetPlayStopNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::GadgetPlayStopNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176B9E88-00000000176BA063
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetPlayUidOpNotify>(
        Entity *const this,
        proto::GadgetPlayUidOpNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetPlayUidOpNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::GadgetPlayUidOpNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176B7CCC-00000000176B7EA7
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetStateNotify>(
        Entity *const this,
        proto::GadgetStateNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetStateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::GadgetStateNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176EDAA2-00000000176EDC7D
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetTalkChangeNotify>(
        Entity *const this,
        proto::GadgetTalkChangeNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetTalkChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::GadgetTalkChangeNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000014F8B14E-0000000014F8B329
int32_t __cdecl Entity::notifyViewingPlayers<proto::LifeStateChangeNotify>(
        Entity *const this,
        proto::LifeStateChangeNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::LifeStateChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::LifeStateChangeNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 000000001721F4E6-000000001721F6C1
int32_t __cdecl Entity::notifyViewingPlayers<proto::MonsterPointArrayRouteUpdateNotify>(
        Entity *const this,
        proto::MonsterPointArrayRouteUpdateNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t updated; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::MonsterPointArrayRouteUpdateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    updated = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    updated = Scene::notifyViewingPlayers<proto::MonsterPointArrayRouteUpdateNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = updated;
  if ( v13 == (char *)v3 )
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

// Line 22: range 000000001721E6FE-000000001721E8D9
int32_t __cdecl Entity::notifyViewingPlayers<proto::MonsterSummonTagNotify>(
        Entity *const this,
        proto::MonsterSummonTagNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::MonsterSummonTagNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::MonsterSummonTagNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 000000001462CA24-000000001462CBFF
int32_t __cdecl Entity::notifyViewingPlayers<proto::PlatformChangeRouteNotify>(
        Entity *const this,
        proto::PlatformChangeRouteNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::PlatformChangeRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::PlatformChangeRouteNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000015A57448-0000000015A57623
int32_t __cdecl Entity::notifyViewingPlayers<proto::SceneAudioNotify const>(
        Entity *const this,
        const proto::SceneAudioNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::SceneAudioNotify const>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::SceneAudioNotify const>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 000000001721DC2E-000000001721DE09
int32_t __cdecl Entity::notifyViewingPlayers<proto::SceneEntityAppearNotify>(
        Entity *const this,
        proto::SceneEntityAppearNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::SceneEntityAppearNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::SceneEntityAppearNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 000000001721DA52-000000001721DC2D
int32_t __cdecl Entity::notifyViewingPlayers<proto::SceneEntityDisappearNotify>(
        Entity *const this,
        proto::SceneEntityDisappearNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::SceneEntityDisappearNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::SceneEntityDisappearNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000014F7E222-0000000014F7E3FD
int32_t __cdecl Entity::notifyViewingPlayers<proto::ScenePlayBattleUidOpNotify>(
        Entity *const this,
        proto::ScenePlayBattleUidOpNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::ScenePlayBattleUidOpNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::ScenePlayBattleUidOpNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176BB67C-00000000176BB857
int32_t __cdecl Entity::notifyViewingPlayers<proto::SealBattleBeginNotify>(
        Entity *const this,
        proto::SealBattleBeginNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::SealBattleBeginNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::SealBattleBeginNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176BB892-00000000176BBA6D
int32_t __cdecl Entity::notifyViewingPlayers<proto::SealBattleEndNotify>(
        Entity *const this,
        proto::SealBattleEndNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::SealBattleEndNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::SealBattleEndNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 00000000176BD0D4-00000000176BD2AF
int32_t __cdecl Entity::notifyViewingPlayers<proto::SealBattleProgressNotify>(
        Entity *const this,
        proto::SealBattleProgressNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::SealBattleProgressNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::SealBattleProgressNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 22: range 0000000013863A58-0000000013863C33
int32_t __cdecl Entity::notifyViewingPlayers<proto::TriggerCreateGadgetToEquipPartNotify>(
        Entity *const this,
        proto::TriggerCreateGadgetToEquipPartNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t GadgetToEquipPart; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::TriggerCreateGadgetToEquipPartNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    GadgetToEquipPart = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    GadgetToEquipPart = Scene::notifyViewingPlayers<proto::TriggerCreateGadgetToEquipPartNotify>(
                          v8,
                          this,
                          proto,
                          include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = GadgetToEquipPart;
  if ( v13 == (char *)v3 )
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

// Line 47: range 0000000017A19454-0000000017A195DB
int32_t __cdecl Entity::notifySelf<proto::AvatarFightPropNotify>(
        Entity *const this,
        proto::AvatarFightPropNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::AvatarFightPropNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 0000000017A190F0-0000000017A19277
int32_t __cdecl Entity::notifySelf<proto::AvatarFightPropUpdateNotify>(
        Entity *const this,
        proto::AvatarFightPropUpdateNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::AvatarFightPropUpdateNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 0000000014F8B53C-0000000014F8B6C3
int32_t __cdecl Entity::notifySelf<proto::AvatarLifeStateChangeNotify>(
        Entity *const this,
        proto::AvatarLifeStateChangeNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::AvatarLifeStateChangeNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 00000000138D9C36-00000000138D9DBD
int32_t __cdecl Entity::notifySelf<proto::AvatarSkillDepotChangeNotify>(
        Entity *const this,
        proto::AvatarSkillDepotChangeNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::AvatarSkillDepotChangeNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 0000000017A49696-0000000017A4981D
int32_t __cdecl Entity::notifySelf<proto::EntityFightPropChangeReasonNotify>(
        Entity *const this,
        proto::EntityFightPropChangeReasonNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::EntityFightPropChangeReasonNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 0000000017A1A1B0-0000000017A1A337
int32_t __cdecl Entity::notifySelf<proto::EntityFightPropUpdateNotify>(
        Entity *const this,
        proto::EntityFightPropUpdateNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::EntityFightPropUpdateNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 0000000014F8D04A-0000000014F8D1D1
int32_t __cdecl Entity::notifySelf<proto::EntityPropNotify>(Entity *const this, proto::EntityPropNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::EntityPropNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 000000001329A3CC-000000001329A553
int32_t __cdecl Entity::notifySelf<proto::GadgetCustomTreeInfoNotify>(
        Entity *const this,
        proto::GadgetCustomTreeInfoNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::GadgetCustomTreeInfoNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 00000000176EDC7E-00000000176EDE05
int32_t __cdecl Entity::notifySelf<proto::GadgetTalkChangeNotify>(
        Entity *const this,
        proto::GadgetTalkChangeNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::GadgetTalkChangeNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 0000000014F8B6C4-0000000014F8B84B
int32_t __cdecl Entity::notifySelf<proto::LifeStateChangeNotify>(
        Entity *const this,
        proto::LifeStateChangeNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::LifeStateChangeNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 47: range 00000000155E82A2-00000000155E8429
int32_t __cdecl Entity::notifySelf<proto::ServerBuffChangeNotify>(
        Entity *const this,
        proto::ServerBuffChangeNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v2 + 16) = Entity::notifySelf<proto::ServerBuffChangeNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 19);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *const))v5)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v6, proto);
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
  if ( v9 == (char *)v2 )
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

// Line 59: range 000000001721F07C-000000001721F0CA
int32_t __cdecl Entity::notifyViewingPlayersAndSelf<proto::EntityPropNotify>(
        Entity *const this,
        proto::EntityPropNotify *proto)
{
  if ( Entity::isOnScene(this) )
    return Entity::notifyViewingPlayers<proto::EntityPropNotify>(this, proto, 1);
  else
    return Entity::notifySelf<proto::EntityPropNotify>(this, proto);
};

// Line 59: range 000000001323C2C0-000000001323C30E
int32_t __cdecl Entity::notifyViewingPlayersAndSelf<proto::GadgetCustomTreeInfoNotify>(
        Entity *const this,
        proto::GadgetCustomTreeInfoNotify *proto)
{
  if ( Entity::isOnScene(this) )
    return Entity::notifyViewingPlayers<proto::GadgetCustomTreeInfoNotify>(this, proto, 1);
  else
    return Entity::notifySelf<proto::GadgetCustomTreeInfoNotify>(this, proto);
};

// Line 59: range 00000000176B9334-00000000176B9382
int32_t __cdecl Entity::notifyViewingPlayersAndSelf<proto::GadgetTalkChangeNotify>(
        Entity *const this,
        proto::GadgetTalkChangeNotify *proto)
{
  if ( Entity::isOnScene(this) )
    return Entity::notifyViewingPlayers<proto::GadgetTalkChangeNotify>(this, proto, 1);
  else
    return Entity::notifySelf<proto::GadgetTalkChangeNotify>(this, proto);
};

// Line 389: range 000000001462C436-000000001462C611
int32_t __cdecl Entity::notifyViewingPlayers<proto::PlatformStartRouteNotify>(
        Entity *const this,
        proto::PlatformStartRouteNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t started; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::PlatformStartRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    started = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    started = Scene::notifyViewingPlayers<proto::PlatformStartRouteNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = started;
  if ( v13 == (char *)v3 )
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

// Line 783: range 000000001329A1F0-000000001329A3CB
int32_t __cdecl Entity::notifyViewingPlayers<proto::GadgetCustomTreeInfoNotify>(
        Entity *const this,
        proto::GadgetCustomTreeInfoNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::GadgetCustomTreeInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::GadgetCustomTreeInfoNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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

// Line 820: range 0000000017A1A430-0000000017A1A47E
int32_t __cdecl Entity::notifyViewingPlayersAndSelf<proto::EntityFightPropChangeReasonNotify>(
        Entity *const this,
        proto::EntityFightPropChangeReasonNotify *proto)
{
  if ( Entity::isOnScene(this) )
    return Entity::notifyViewingPlayers<proto::EntityFightPropChangeReasonNotify>(this, proto, 1);
  else
    return Entity::notifySelf<proto::EntityFightPropChangeReasonNotify>(this, proto);
};

// Line 1016: range 000000001462C744-000000001462C91F
int32_t __cdecl Entity::notifyViewingPlayers<proto::PlatformStopRouteNotify>(
        Entity *const this,
        proto::PlatformStopRouteNotify *proto,
        bool include_me)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Scene *v8; // rdi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:24";
  *(_QWORD *)(v3 + 16) = Entity::notifyViewingPlayers<proto::PlatformStopRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/entity/entity.hpp",
      "notifyViewingPlayers",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"creature is not on scene");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = Scene::notifyViewingPlayers<proto::PlatformStopRouteNotify>(v8, this, proto, include_me);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v13 == (char *)v3 )
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
