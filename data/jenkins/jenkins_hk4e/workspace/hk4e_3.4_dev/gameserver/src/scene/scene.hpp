// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene.hpp

// Line 19: range 0000000017D8B04C-0000000017D8B0E1
void __cdecl Scene::getSurroundEntities<std::shared_ptr<Avatar>>(
        Scene *const this,
        Visitor *visitor,
        Entity *entity,
        std::vector<std::shared_ptr<Avatar>> *entity_vec)
{
  unsigned __int64 SightComp; // rax
  unsigned __int64 v5; // rdx

  SightComp = (unsigned __int64)Scene::getSightComp(this);
  if ( *(_BYTE *)((SightComp >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  v5 = *(_QWORD *)SightComp + 80LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *, Visitor *))v5)(SightComp, entity, visitor);
  Visitor::getEntityVec<std::shared_ptr<Avatar>>(visitor, entity_vec);
};

// Line 19: range 0000000017D8AE6E-0000000017D8AF03
void __cdecl Scene::getSurroundEntities<std::shared_ptr<Creature>>(
        Scene *const this,
        Visitor *visitor,
        Entity *entity,
        std::vector<std::shared_ptr<Creature>> *entity_vec)
{
  unsigned __int64 SightComp; // rax
  unsigned __int64 v5; // rdx

  SightComp = (unsigned __int64)Scene::getSightComp(this);
  if ( *(_BYTE *)((SightComp >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  v5 = *(_QWORD *)SightComp + 80LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *, Visitor *))v5)(SightComp, entity, visitor);
  Visitor::getEntityVec<std::shared_ptr<Creature>>(visitor, entity_vec);
};

// Line 19: range 0000000015A3C41A-0000000015A3C4AF
void __cdecl Scene::getSurroundEntities<std::shared_ptr<Gadget>>(
        Scene *const this,
        Visitor *visitor,
        Entity *entity,
        std::vector<std::shared_ptr<Gadget>> *entity_vec)
{
  unsigned __int64 SightComp; // rax
  unsigned __int64 v5; // rdx

  SightComp = (unsigned __int64)Scene::getSightComp(this);
  if ( *(_BYTE *)((SightComp >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  v5 = *(_QWORD *)SightComp + 80LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *, Visitor *))v5)(SightComp, entity, visitor);
  Visitor::getEntityVec<std::shared_ptr<Gadget>>(visitor, entity_vec);
};

// Line 19: range 0000000017D88A74-0000000017D88B09
void __cdecl Scene::getSurroundEntities<std::shared_ptr<Monster>>(
        Scene *const this,
        Visitor *visitor,
        Entity *entity,
        std::vector<std::shared_ptr<Monster>> *entity_vec)
{
  unsigned __int64 SightComp; // rax
  unsigned __int64 v5; // rdx

  SightComp = (unsigned __int64)Scene::getSightComp(this);
  if ( *(_BYTE *)((SightComp >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  v5 = *(_QWORD *)SightComp + 80LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SightComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Entity *, Visitor *))v5)(SightComp, entity, visitor);
  Visitor::getEntityVec<std::shared_ptr<Monster>>(visitor, entity_vec);
};

// Line 27: range 000000001322F6AC-000000001322F921
const Scene *__fastcall Scene::findEntity<Avatar>(const Scene *const this, unsigned __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 entity_id:27 64 16 13 entity_ptr:29";
  *(_QWORD *)(v3 + 16) = Scene::findEntity<Avatar>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)((entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(
    v3 + 64,
    entity_id,
    *(unsigned int *)(v3 + 48));
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.hpp",
      "findEntity",
      32);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    std::dynamic_pointer_cast<Avatar,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 27: range 0000000013205A7A-0000000013205CEF
const Scene *__fastcall Scene::findEntity<Creature>(const Scene *const this, unsigned __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 entity_id:27 64 16 13 entity_ptr:29";
  *(_QWORD *)(v3 + 16) = Scene::findEntity<Creature>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)((entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(
    v3 + 64,
    entity_id,
    *(unsigned int *)(v3 + 48));
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.hpp",
      "findEntity",
      32);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    std::dynamic_pointer_cast<Creature,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 27: range 0000000013240B16-0000000013240D8B
const Scene *__fastcall Scene::findEntity<Gadget>(const Scene *const this, unsigned __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 entity_id:27 64 16 13 entity_ptr:29";
  *(_QWORD *)(v3 + 16) = Scene::findEntity<Gadget>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)((entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(
    v3 + 64,
    entity_id,
    *(unsigned int *)(v3 + 48));
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.hpp",
      "findEntity",
      32);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 27: range 0000000013231CFC-0000000013231F71
const Scene *__fastcall Scene::findEntity<Monster>(const Scene *const this, unsigned __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 entity_id:27 64 16 13 entity_ptr:29";
  *(_QWORD *)(v3 + 16) = Scene::findEntity<Monster>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)((entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(
    v3 + 64,
    entity_id,
    *(unsigned int *)(v3 + 48));
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.hpp",
      "findEntity",
      32);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 27: range 0000000015A3B4C4-0000000015A3B739
const Scene *__fastcall Scene::findEntity<PlayTeamEntity>(const Scene *const this, unsigned __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 entity_id:27 64 16 13 entity_ptr:29";
  *(_QWORD *)(v3 + 16) = Scene::findEntity<PlayTeamEntity>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)((entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(
    v3 + 64,
    entity_id,
    *(unsigned int *)(v3 + 48));
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.hpp",
      "findEntity",
      32);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<PlayTeamEntity>::shared_ptr((std::shared_ptr<PlayTeamEntity> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    std::dynamic_pointer_cast<PlayTeamEntity,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 53: range 0000000014A3E4C4-0000000014A3E4FE
int32_t __cdecl Scene::notifyViewingPlayers<proto::AvatarFollowRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::AvatarFollowRouteNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::AvatarFollowRouteNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 0000000017A7887C-0000000017A788B6
int32_t __cdecl Scene::notifyViewingPlayers<proto::EntityFightPropChangeReasonNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityFightPropChangeReasonNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::EntityFightPropChangeReasonNotify>(
           this,
           entity,
           proto,
           0,
           include_me);
};

// Line 53: range 0000000017A48922-0000000017A4895C
int32_t __cdecl Scene::notifyViewingPlayers<proto::EntityFightPropNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityFightPropNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::EntityFightPropNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 0000000017A488E6-0000000017A48920
int32_t __cdecl Scene::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityFightPropUpdateNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::EntityFightPropUpdateNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176B7A94-00000000176B7ACE
int32_t __cdecl Scene::notifyViewingPlayers<proto::FoundationNotify>(
        Scene *const this,
        Entity *entity,
        proto::FoundationNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::FoundationNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000132FB740-00000000132FB77A
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetCustomTreeInfoNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetCustomTreeInfoNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetCustomTreeInfoNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176EF43E-00000000176EF478
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetPlayDataNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayDataNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetPlayDataNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176EE7C4-00000000176EE7FE
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetPlayStartNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayStartNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetPlayStartNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176EE800-00000000176EE83A
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetPlayStopNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayStopNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetPlayStopNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176EE720-00000000176EE75A
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetPlayUidOpNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayUidOpNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetPlayUidOpNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176EBBE2-00000000176EBC1C
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetStateNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetStateNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetStateNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 0000000017724D78-0000000017724DB2
int32_t __cdecl Scene::notifyViewingPlayers<proto::GadgetTalkChangeNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetTalkChangeNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::GadgetTalkChangeNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 0000000014FA6A02-0000000014FA6A3C
int32_t __cdecl Scene::notifyViewingPlayers<proto::LifeStateChangeNotify>(
        Scene *const this,
        Entity *entity,
        proto::LifeStateChangeNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::LifeStateChangeNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000172609E0-0000000017260A1A
int32_t __cdecl Scene::notifyViewingPlayers<proto::MonsterPointArrayRouteUpdateNotify>(
        Scene *const this,
        Entity *entity,
        proto::MonsterPointArrayRouteUpdateNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::MonsterPointArrayRouteUpdateNotify>(
           this,
           entity,
           proto,
           0,
           include_me);
};

// Line 53: range 000000001725FB60-000000001725FB9A
int32_t __cdecl Scene::notifyViewingPlayers<proto::MonsterSummonTagNotify>(
        Scene *const this,
        Entity *entity,
        proto::MonsterSummonTagNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::MonsterSummonTagNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 0000000015A8E61A-0000000015A8E654
int32_t __cdecl Scene::notifyViewingPlayers<proto::SceneAudioNotify const>(
        Scene *const this,
        Entity *entity,
        const proto::SceneAudioNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::SceneAudioNotify const>(this, entity, proto, 0, include_me);
};

// Line 53: range 000000001725E972-000000001725E9AC
int32_t __cdecl Scene::notifyViewingPlayers<proto::SceneEntityAppearNotify>(
        Scene *const this,
        Entity *entity,
        proto::SceneEntityAppearNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::SceneEntityAppearNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 000000001725E936-000000001725E970
int32_t __cdecl Scene::notifyViewingPlayers<proto::SceneEntityDisappearNotify>(
        Scene *const this,
        Entity *entity,
        proto::SceneEntityDisappearNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::SceneEntityDisappearNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 0000000014F96C68-0000000014F96CA2
int32_t __cdecl Scene::notifyViewingPlayers<proto::ScenePlayBattleUidOpNotify>(
        Scene *const this,
        Entity *entity,
        proto::ScenePlayBattleUidOpNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::ScenePlayBattleUidOpNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176F0A72-00000000176F0AAC
int32_t __cdecl Scene::notifyViewingPlayers<proto::SealBattleBeginNotify>(
        Scene *const this,
        Entity *entity,
        proto::SealBattleBeginNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::SealBattleBeginNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176F0AF0-00000000176F0B2A
int32_t __cdecl Scene::notifyViewingPlayers<proto::SealBattleEndNotify>(
        Scene *const this,
        Entity *entity,
        proto::SealBattleEndNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::SealBattleEndNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000176F2270-00000000176F22AA
int32_t __cdecl Scene::notifyViewingPlayers<proto::SealBattleProgressNotify>(
        Scene *const this,
        Entity *entity,
        proto::SealBattleProgressNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::SealBattleProgressNotify>(this, entity, proto, 0, include_me);
};

// Line 53: range 00000000138F04EE-00000000138F0528
int32_t __cdecl Scene::notifyViewingPlayers<proto::TriggerCreateGadgetToEquipPartNotify>(
        Scene *const this,
        Entity *entity,
        proto::TriggerCreateGadgetToEquipPartNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::TriggerCreateGadgetToEquipPartNotify>(
           this,
           entity,
           proto,
           0,
           include_me);
};

// Line 53: range 0000000015D707B8-0000000015D707F2
int32_t __cdecl Scene::notifyViewingPlayers<proto::WorktopOptionNotify>(
        Scene *const this,
        Entity *entity,
        proto::WorktopOptionNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::WorktopOptionNotify>(this, entity, proto, 0, include_me);
};

// Line 59: range 0000000014A8D846-0000000014A8D9CB
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::AvatarFollowRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::AvatarFollowRouteNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::AvatarFollowRouteNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::AvatarFollowRouteNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000017AAD0C8-0000000017AAD24D
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::EntityFightPropChangeReasonNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityFightPropChangeReasonNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::EntityFightPropChangeReasonNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::EntityFightPropChangeReasonNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000017A77BE8-0000000017A77D6D
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::EntityFightPropNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityFightPropNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::EntityFightPropNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::EntityFightPropNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000014FC1BB4-0000000014FC1D39
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::EntityPropNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityPropNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::EntityPropNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::EntityPropNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 00000000176EB918-00000000176EBA9D
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::FoundationNotify>(
        Scene *const this,
        Entity *entity,
        proto::FoundationNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::FoundationNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::FoundationNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000013366E2A-0000000013366FAF
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetCustomTreeInfoNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetCustomTreeInfoNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetCustomTreeInfoNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::GadgetCustomTreeInfoNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000017726A6C-0000000017726BF1
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetPlayDataNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayDataNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetPlayDataNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::GadgetPlayDataNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001772571C-00000000177258A1
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetPlayStartNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayStartNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t started; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetPlayStartNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  started = PlayerMgr::sendToPlayerList<proto::GadgetPlayStartNotify>(
              &GameThreadLocal->player_mgr,
              (const std::vector<unsigned int> *)(v5 + 32),
              proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = started;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 00000000177258A2-0000000017725A27
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetPlayStopNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayStopNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetPlayStopNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::GadgetPlayStopNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001772558A-000000001772570F
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetPlayUidOpNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetPlayUidOpNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetPlayUidOpNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::GadgetPlayUidOpNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000017722DA2-0000000017722F27
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetStateNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetStateNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetStateNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::GadgetStateNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001775D85A-000000001775D9DF
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::GadgetTalkChangeNotify>(
        Scene *const this,
        Entity *entity,
        proto::GadgetTalkChangeNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::GadgetTalkChangeNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::GadgetTalkChangeNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000017293D3A-0000000017293EBF
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::MonsterPointArrayRouteUpdateNotify>(
        Scene *const this,
        Entity *entity,
        proto::MonsterPointArrayRouteUpdateNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t updated; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::MonsterPointArrayRouteUpdateNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  updated = PlayerMgr::sendToPlayerList<proto::MonsterPointArrayRouteUpdateNotify>(
              &GameThreadLocal->player_mgr,
              (const std::vector<unsigned int> *)(v5 + 32),
              proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = updated;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001729318E-0000000017293313
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::MonsterSummonTagNotify>(
        Scene *const this,
        Entity *entity,
        proto::MonsterSummonTagNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::MonsterSummonTagNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::MonsterSummonTagNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 00000000146C6F06-00000000146C708B
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::PlatformChangeRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::PlatformChangeRouteNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::PlatformChangeRouteNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::PlatformChangeRouteNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000015AC8C48-0000000015AC8DCD
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::SceneAudioNotify const>(
        Scene *const this,
        Entity *entity,
        const proto::SceneAudioNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::SceneAudioNotify const>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::SceneAudioNotify const>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000017291910-0000000017291A95
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::SceneEntityAppearNotify>(
        Scene *const this,
        Entity *entity,
        proto::SceneEntityAppearNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::SceneEntityAppearNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::SceneEntityAppearNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001729178A-000000001729190F
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::SceneEntityDisappearNotify>(
        Scene *const this,
        Entity *entity,
        proto::SceneEntityDisappearNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::SceneEntityDisappearNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::SceneEntityDisappearNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000014FADD42-0000000014FADEC7
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::ScenePlayBattleUidOpNotify>(
        Scene *const this,
        Entity *entity,
        proto::ScenePlayBattleUidOpNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::ScenePlayBattleUidOpNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::ScenePlayBattleUidOpNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001772841E-00000000177285A3
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::SealBattleBeginNotify>(
        Scene *const this,
        Entity *entity,
        proto::SealBattleBeginNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::SealBattleBeginNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::SealBattleBeginNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001772874C-00000000177288D1
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::SealBattleEndNotify>(
        Scene *const this,
        Entity *entity,
        proto::SealBattleEndNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::SealBattleEndNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::SealBattleEndNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 000000001772A242-000000001772A3C7
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::SealBattleProgressNotify>(
        Scene *const this,
        Entity *entity,
        proto::SealBattleProgressNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::SealBattleProgressNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::SealBattleProgressNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000013943CEC-0000000013943E71
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::TriggerCreateGadgetToEquipPartNotify>(
        Scene *const this,
        Entity *entity,
        proto::TriggerCreateGadgetToEquipPartNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t GadgetToEquipPart; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::TriggerCreateGadgetToEquipPartNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  GadgetToEquipPart = PlayerMgr::sendToPlayerList<proto::TriggerCreateGadgetToEquipPartNotify>(
                        &GameThreadLocal->player_mgr,
                        (const std::vector<unsigned int> *)(v5 + 32),
                        proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = GadgetToEquipPart;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 59: range 0000000015DA1CF2-0000000015DA1E77
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::WorktopOptionNotify>(
        Scene *const this,
        Entity *entity,
        proto::WorktopOptionNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::WorktopOptionNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::WorktopOptionNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 67: range 0000000015D4DF5A-0000000015D4E16B
int32_t __cdecl Scene::notifyAllPlayer<proto::AddRandTaskInfoNotify>(
        Scene *const this,
        proto::AddRandTaskInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::AddRandTaskInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014F8B32A-0000000014F8B53B
int32_t __cdecl Scene::notifyAllPlayer<proto::AvatarLifeStateChangeNotify>(
        Scene *const this,
        proto::AvatarLifeStateChangeNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::AvatarLifeStateChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A03042-0000000014A03253
int32_t __cdecl Scene::notifyAllPlayer<proto::BeginCameraSceneLookNotify>(
        Scene *const this,
        proto::BeginCameraSceneLookNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::BeginCameraSceneLookNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A03472-0000000014A03683
int32_t __cdecl Scene::notifyAllPlayer<proto::BeginCameraSceneLookWithTemplateNotify>(
        Scene *const this,
        proto::BeginCameraSceneLookWithTemplateNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::BeginCameraSceneLookWithTemplateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001519EA28-000000001519EC39
int32_t __cdecl Scene::notifyAllPlayer<proto::CommonPlayerTipsNotify>(
        Scene *const this,
        proto::CommonPlayerTipsNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::CommonPlayerTipsNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015D72750-0000000015D72961
int32_t __cdecl Scene::notifyAllPlayer<proto::CutSceneBeginNotify>(
        Scene *const this,
        proto::CutSceneBeginNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::CutSceneBeginNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015D72962-0000000015D72B73
int32_t __cdecl Scene::notifyAllPlayer<proto::CutSceneEndNotify>(
        Scene *const this,
        proto::CutSceneEndNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::CutSceneEndNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A3B73A-0000000015A3B94B
int32_t __cdecl Scene::notifyAllPlayer<proto::DelScenePlayTeamEntityNotify>(
        Scene *const this,
        proto::DelScenePlayTeamEntityNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DelScenePlayTeamEntityNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A37F96-0000000015A381A7
int32_t __cdecl Scene::notifyAllPlayer<proto::DelTeamEntityNotify>(
        Scene *const this,
        proto::DelTeamEntityNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DelTeamEntityNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000013236E5C-000000001323706D
int32_t __cdecl Scene::notifyAllPlayer<proto::DestroyMassiveEntityNotify>(
        Scene *const this,
        proto::DestroyMassiveEntityNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DestroyMassiveEntityNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000176E4994-00000000176E4BA5
int32_t __cdecl Scene::notifyAllPlayer<proto::DraftInviteResultNotify>(
        Scene *const this,
        proto::DraftInviteResultNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DraftInviteResultNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000176E4E1E-00000000176E502F
int32_t __cdecl Scene::notifyAllPlayer<proto::DraftTwiceConfirmResultNotify>(
        Scene *const this,
        proto::DraftTwiceConfirmResultNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DraftTwiceConfirmResultNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001605ACEC-000000001605AEFD
int32_t __cdecl Scene::notifyAllPlayer<proto::DungeonDataNotify>(
        Scene *const this,
        proto::DungeonDataNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DungeonDataNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001420E7BA-000000001420E9CB
int32_t __cdecl Scene::notifyAllPlayer<proto::DungeonRestartInviteReplyNotify>(
        Scene *const this,
        proto::DungeonRestartInviteReplyNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DungeonRestartInviteReplyNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001420EA18-000000001420EC29
int32_t __cdecl Scene::notifyAllPlayer<proto::DungeonRestartResultNotify>(
        Scene *const this,
        proto::DungeonRestartResultNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DungeonRestartResultNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A0005A-0000000014A0026B
int32_t __cdecl Scene::notifyAllPlayer<proto::DungeonShowReminderNotify>(
        Scene *const this,
        proto::DungeonShowReminderNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::DungeonShowReminderNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014F8E60E-0000000014F8E81F
int32_t __cdecl Scene::notifyAllPlayer<proto::EntityTagChangeNotify>(
        Scene *const this,
        proto::EntityTagChangeNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::EntityTagChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000013235B2E-0000000013235D3F
int32_t __cdecl Scene::notifyAllPlayer<proto::EvtAvatarSitDownNotify const>(
        Scene *const this,
        const proto::EvtAvatarSitDownNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::EvtAvatarSitDownNotify const>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000132360D6-00000000132362E7
int32_t __cdecl Scene::notifyAllPlayer<proto::EvtAvatarStandUpNotify const>(
        Scene *const this,
        const proto::EvtAvatarStandUpNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::EvtAvatarStandUpNotify const>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001322FFD8-00000000132301E9
int32_t __cdecl Scene::notifyAllPlayer<proto::EvtLocalGadgetOwnerLeaveSceneNotify>(
        Scene *const this,
        proto::EvtLocalGadgetOwnerLeaveSceneNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::EvtLocalGadgetOwnerLeaveSceneNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001324122A-000000001324143B
int32_t __cdecl Scene::notifyAllPlayer<proto::FishAttractNotify>(
        Scene *const this,
        proto::FishAttractNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::FishAttractNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000013241766-0000000013241977
int32_t __cdecl Scene::notifyAllPlayer<proto::FishBaitGoneNotify>(
        Scene *const this,
        proto::FishBaitGoneNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::FishBaitGoneNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001324143C-000000001324164D
int32_t __cdecl Scene::notifyAllPlayer<proto::FishEscapeNotify>(
        Scene *const this,
        proto::FishEscapeNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::FishEscapeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000176DA460-00000000176DA671
int32_t __cdecl Scene::notifyAllPlayer<proto::GCGTCTavernInfoNotify>(
        Scene *const this,
        proto::GCGTCTavernInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::GCGTCTavernInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000176DAE2C-00000000176DB03D
int32_t __cdecl Scene::notifyAllPlayer<proto::GCGTavernNpcInfoNotify>(
        Scene *const this,
        proto::GCGTavernNpcInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::GCGTavernNpcInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000016247EAE-00000000162480BF
int32_t __cdecl Scene::notifyAllPlayer<proto::GlobalBuildingInfoNotify>(
        Scene *const this,
        proto::GlobalBuildingInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::GlobalBuildingInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000017DA93B0-0000000017DA95C1
int32_t __cdecl Scene::notifyAllPlayer<proto::HomeChangeBgmNotify>(
        Scene *const this,
        proto::HomeChangeBgmNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::HomeChangeBgmNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A36D9C-0000000015A36FAD
int32_t __cdecl Scene::notifyAllPlayer<proto::HostPlayerNotify>(
        Scene *const this,
        proto::HostPlayerNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::HostPlayerNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001323848C-000000001323869D
int32_t __cdecl Scene::notifyAllPlayer<proto::MassiveEntityElementOpBatchNotify>(
        Scene *const this,
        proto::MassiveEntityElementOpBatchNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::MassiveEntityElementOpBatchNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 000000001605AF96-000000001605B1A7
int32_t __cdecl Scene::notifyAllPlayer<proto::PlayerChatNotify>(
        Scene *const this,
        proto::PlayerChatNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::PlayerChatNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A0FCA0-0000000014A0FEB1
int32_t __cdecl Scene::notifyAllPlayer<proto::PlayerGameTimeByLuaNotify>(
        Scene *const this,
        proto::PlayerGameTimeByLuaNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::PlayerGameTimeByLuaNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000017252562-0000000017252773
int32_t __cdecl Scene::notifyAllPlayer<proto::PlayerGameTimeNotify>(
        Scene *const this,
        proto::PlayerGameTimeNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::PlayerGameTimeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015D4E16C-0000000015D4E37D
int32_t __cdecl Scene::notifyAllPlayer<proto::RemoveRandTaskInfoNotify>(
        Scene *const this,
        proto::RemoveRandTaskInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::RemoveRandTaskInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A382A0-0000000015A384B1
int32_t __cdecl Scene::notifyAllPlayer<proto::SceneDataNotify>(
        Scene *const this,
        proto::SceneDataNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::SceneDataNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A33E5A-0000000015A3406B
int32_t __cdecl Scene::notifyAllPlayer<proto::SceneForceLockNotify>(
        Scene *const this,
        proto::SceneForceLockNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::SceneForceLockNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A3406C-0000000015A3427D
int32_t __cdecl Scene::notifyAllPlayer<proto::SceneForceUnlockNotify>(
        Scene *const this,
        proto::SceneForceUnlockNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::SceneForceUnlockNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A38A20-0000000015A38C31
int32_t __cdecl Scene::notifyAllPlayer<proto::SceneKickPlayerNotify>(
        Scene *const this,
        proto::SceneKickPlayerNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::SceneKickPlayerNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014F7E3FE-0000000014F7E60F
int32_t __cdecl Scene::notifyAllPlayer<proto::ScenePlayBattleInfoNotify>(
        Scene *const this,
        proto::ScenePlayBattleInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ScenePlayBattleInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014F7E610-0000000014F7E821
int32_t __cdecl Scene::notifyAllPlayer<proto::ScenePlayBattleInterruptNotify>(
        Scene *const this,
        proto::ScenePlayBattleInterruptNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ScenePlayBattleInterruptNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A37B44-0000000015A37D55
int32_t __cdecl Scene::notifyAllPlayer<proto::ScenePlayerInfoNotify>(
        Scene *const this,
        proto::ScenePlayerInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ScenePlayerInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015A3766A-0000000015A3787B
int32_t __cdecl Scene::notifyAllPlayer<proto::ScenePlayerLocationNotify>(
        Scene *const this,
        proto::ScenePlayerLocationNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ScenePlayerLocationNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A03DFE-0000000014A0400F
int32_t __cdecl Scene::notifyAllPlayer<proto::ScenePlayerSoundNotify>(
        Scene *const this,
        proto::ScenePlayerSoundNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ScenePlayerSoundNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000138CC310-00000000138CC521
int32_t __cdecl Scene::notifyAllPlayer<proto::SeaLampFlyLampNotify>(
        Scene *const this,
        proto::SeaLampFlyLampNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::SeaLampFlyLampNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 00000000149FE6D2-00000000149FE8E3
int32_t __cdecl Scene::notifyAllPlayer<proto::ServerLogNotify>(
        Scene *const this,
        proto::ServerLogNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ServerLogNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A00C9A-0000000014A00EAB
int32_t __cdecl Scene::notifyAllPlayer<proto::ShowClientGuideNotify>(
        Scene *const this,
        proto::ShowClientGuideNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ShowClientGuideNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A00A88-0000000014A00C99
int32_t __cdecl Scene::notifyAllPlayer<proto::ShowTemplateReminderNotify>(
        Scene *const this,
        proto::ShowTemplateReminderNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ShowTemplateReminderNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014A0026C-0000000014A0047D
int32_t __cdecl Scene::notifyAllPlayer<proto::StopReminderNotify>(
        Scene *const this,
        proto::StopReminderNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::StopReminderNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000015D6F410-0000000015D6F621
int32_t __cdecl Scene::notifyAllPlayer<proto::VehicleInteractRsp>(
        Scene *const this,
        proto::VehicleInteractRsp *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::VehicleInteractRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 74: range 00000000132368B4-0000000013236AC5
int32_t __cdecl Scene::notifyAllPlayer<proto::CreateMassiveEntityNotify>(
        Scene *const this,
        proto::CreateMassiveEntityNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::CreateMassiveEntityNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 74: range 0000000013238A98-0000000013238CA9
int32_t __cdecl Scene::notifyAllPlayer<proto::EntityAiSyncNotify>(
        Scene *const this,
        proto::EntityAiSyncNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::EntityAiSyncNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000166BFE86-00000000166C0072
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::FungusCaptureSettleNotify>(
        Scene *const this,
        proto::FungusCaptureSettleNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::FungusCaptureSettleNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000166C02E6-00000000166C04D2
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::FungusFighterTrainingInfoNotify>(
        Scene *const this,
        proto::FungusFighterTrainingInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::FungusFighterTrainingInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 000000001810100E-00000000181011FA
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryBalloonScoreNotify>(
        Scene *const this,
        proto::GalleryBalloonScoreNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryBalloonScoreNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000166BE536-00000000166BE722
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryFallScoreNotify>(
        Scene *const this,
        proto::GalleryFallScoreNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryFallScoreNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000166BF3DC-00000000166BF5C8
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryFlowerCatchNotify>(
        Scene *const this,
        proto::GalleryFlowerCatchNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryFlowerCatchNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B440E-00000000146B45FA
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryIslandPartyDownHillInfoNotify>(
        Scene *const this,
        proto::GalleryIslandPartyDownHillInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryIslandPartyDownHillInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000181020C2-00000000181022AE
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryPreStartNotify>(
        Scene *const this,
        proto::GalleryPreStartNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryPreStartNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 0000000018102402-00000000181025EE
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryStartNotify>(
        Scene *const this,
        proto::GalleryStartNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryStartNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000181025F0-00000000181027DC
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::GalleryStopNotify>(
        Scene *const this,
        proto::GalleryStopNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::GalleryStopNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B180E-00000000146B19FA
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::HomeBalloonGalleryScoreNotify>(
        Scene *const this,
        proto::HomeBalloonGalleryScoreNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::HomeBalloonGalleryScoreNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B122E-00000000146B141A
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::HomeBalloonGallerySettleNotify>(
        Scene *const this,
        proto::HomeBalloonGallerySettleNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::HomeBalloonGallerySettleNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B1CFC-00000000146B1EE8
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::HomeRacingGallerySettleNotify>(
        Scene *const this,
        proto::HomeRacingGallerySettleNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::HomeRacingGallerySettleNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B2B2E-00000000146B2D1A
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::HomeSeekFurnitureGalleryScoreNotify>(
        Scene *const this,
        proto::HomeSeekFurnitureGalleryScoreNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::HomeSeekFurnitureGalleryScoreNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B3094-00000000146B3280
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::InstableSprayGalleryInfoNotify>(
        Scene *const this,
        proto::InstableSprayGalleryInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::InstableSprayGalleryInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B45FC-00000000146B47E8
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::IslandPartyRaftInfoNotify>(
        Scene *const this,
        proto::IslandPartyRaftInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::IslandPartyRaftInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 00000000146B47EA-00000000146B49D6
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::IslandPartySailInfoNotify>(
        Scene *const this,
        proto::IslandPartySailInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::IslandPartySailInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 000000001812E87C-000000001812EA68
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::WindFieldGalleryChallengeInfoNotify>(
        Scene *const this,
        proto::WindFieldGalleryChallengeInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::WindFieldGalleryChallengeInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 84: range 000000001812ECF2-000000001812EEDE
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::WindFieldGalleryInfoNotify>(
        Scene *const this,
        proto::WindFieldGalleryInfoNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::WindFieldGalleryInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 102: range 0000000017D88B0A-0000000017D88FB6
int32_t __cdecl Scene::foreachEntity<Gadget>(Scene *const this, std::function<ForeachPolicy(Gadget&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size_type v6; // rax
  const std::weak_ptr<Entity> *v7; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v10; // r14d
  int v11; // r14d
  Gadget *v12; // rdx
  int v13; // r14d
  int32_t result; // eax
  Scene *thisa; // [rsp+18h] [rbp-158h]
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-138h]
  std::vector<std::weak_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-130h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_id; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_ptr; // [rsp+58h] [rbp-118h]
  char v23[272]; // [rsp+60h] [rbp-110h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (Scene *const)224;
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 9 begin:104 64 16 14 entity_wtr:111 96 16 14 entity_ptr:113 128 16 7 ptr:118 160 24 14 entity_vec:105";
  *(_QWORD *)(v3 + 16) = Scene::foreachEntity<Gadget>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_QWORD *)(v3 + 32) = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)this);
  std::vector<std::weak_ptr<Entity>>::vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size(&thisa->entity_map_);
  std::vector<std::weak_ptr<Entity>>::reserve((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160), v6);
  __for_range = &thisa->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&thisa->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&thisa->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    entity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    std::vector<std::weak_ptr<Entity>>::emplace_back<std::shared_ptr<Entity> &>(
      (std::vector<std::weak_ptr<Entity>> *const)(v3 + 160),
      entity_ptr,
      entity_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Entity>> *)(v3 + 160);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::begin((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
    std::weak_ptr<Entity>::weak_ptr((std::weak_ptr<Entity> *const)(v3 + 64), v7);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 96));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL)
      || (v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
          !Entity::isOnScene(v8)) )
    {
      v10 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v3 + 128));
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 128), 0LL) )
      {
        v11 = 0;
      }
      else
      {
        v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( std::function<ForeachPolicy ()(Gadget &)>::operator()(p_func, v12) )
        {
          v2 = 1;
          v11 = 1;
        }
        else
        {
          v11 = 2;
        }
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 128));
      if ( v11 )
      {
        if ( v11 == 2 )
          v10 = 2;
        else
          v10 = 1;
      }
      else
      {
        v10 = 0;
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
    if ( v10 )
    {
      if ( v10 == 2 )
        v13 = 2;
      else
        v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    std::weak_ptr<Entity>::~weak_ptr((std::weak_ptr<Entity> *const)(v3 + 64));
    if ( v13 && v13 != 2 )
      goto LABEL_34;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_34:
  std::vector<std::weak_ptr<Entity>>::~vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160));
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 102: range 0000000017D885C6-0000000017D88A72
int32_t __cdecl Scene::foreachEntity<Monster>(Scene *const this, std::function<ForeachPolicy(Monster&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size_type v6; // rax
  const std::weak_ptr<Entity> *v7; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v10; // r14d
  int v11; // r14d
  Monster *v12; // rdx
  int v13; // r14d
  int32_t result; // eax
  Scene *thisa; // [rsp+18h] [rbp-158h]
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-138h]
  std::vector<std::weak_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-130h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_id; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_ptr; // [rsp+58h] [rbp-118h]
  char v23[272]; // [rsp+60h] [rbp-110h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (Scene *const)224;
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 9 begin:104 64 16 14 entity_wtr:111 96 16 14 entity_ptr:113 128 16 7 ptr:118 160 24 14 entity_vec:105";
  *(_QWORD *)(v3 + 16) = Scene::foreachEntity<Monster>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_QWORD *)(v3 + 32) = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)this);
  std::vector<std::weak_ptr<Entity>>::vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size(&thisa->entity_map_);
  std::vector<std::weak_ptr<Entity>>::reserve((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160), v6);
  __for_range = &thisa->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&thisa->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&thisa->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    entity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    std::vector<std::weak_ptr<Entity>>::emplace_back<std::shared_ptr<Entity> &>(
      (std::vector<std::weak_ptr<Entity>> *const)(v3 + 160),
      entity_ptr,
      entity_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Entity>> *)(v3 + 160);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::begin((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
    std::weak_ptr<Entity>::weak_ptr((std::weak_ptr<Entity> *const)(v3 + 64), v7);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 96));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL)
      || (v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
          !Entity::isOnScene(v8)) )
    {
      v10 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v3 + 128));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 128), 0LL) )
      {
        v11 = 0;
      }
      else
      {
        v12 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( std::function<ForeachPolicy ()(Monster &)>::operator()(p_func, v12) )
        {
          v2 = 1;
          v11 = 1;
        }
        else
        {
          v11 = 2;
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 128));
      if ( v11 )
      {
        if ( v11 == 2 )
          v10 = 2;
        else
          v10 = 1;
      }
      else
      {
        v10 = 0;
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
    if ( v10 )
    {
      if ( v10 == 2 )
        v13 = 2;
      else
        v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    std::weak_ptr<Entity>::~weak_ptr((std::weak_ptr<Entity> *const)(v3 + 64));
    if ( v13 && v13 != 2 )
      goto LABEL_34;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_34:
  std::vector<std::weak_ptr<Entity>>::~vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 160));
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 102: range 00000000146B3BE2-00000000146B3DCE
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::InstableSprayLevelFinishNotify>(
        Scene *const this,
        proto::InstableSprayLevelFinishNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::InstableSprayLevelFinishNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 245: range 0000000014FBF170-0000000014FBF2F5
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::LifeStateChangeNotify>(
        Scene *const this,
        Entity *entity,
        proto::LifeStateChangeNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::LifeStateChangeNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::LifeStateChangeNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 389: range 00000000132375D0-00000000132377E1
int32_t __cdecl Scene::notifyAllPlayer<proto::MassiveEntityStateChangedNotify>(
        Scene *const this,
        proto::MassiveEntityStateChangedNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::MassiveEntityStateChangedNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 394: range 0000000014F8E288-0000000014F8E499
int32_t __cdecl Scene::notifyAllPlayer<proto::ServerGlobalValueChangeNotify>(
        Scene *const this,
        proto::ServerGlobalValueChangeNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::ServerGlobalValueChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 397: range 0000000014A09CB8-0000000014A09EC9
int32_t __cdecl Scene::notifyAllPlayer<proto::LuaSetOptionNotify>(
        Scene *const this,
        proto::LuaSetOptionNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::LuaSetOptionNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 404: range 0000000015A3B2B2-0000000015A3B4C3
int32_t __cdecl Scene::notifyAllPlayer<proto::SyncScenePlayTeamEntityNotify>(
        Scene *const this,
        proto::SyncScenePlayTeamEntityNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::SyncScenePlayTeamEntityNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 532: range 0000000014FA8AB2-0000000014FA8AEC
int32_t __cdecl Scene::notifyViewingPlayers<proto::EntityPropNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityPropNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::EntityPropNotify>(this, entity, proto, 0, include_me);
};

// Line 719: range 00000000146835C6-0000000014683600
int32_t __cdecl Scene::notifyViewingPlayers<proto::PlatformChangeRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::PlatformChangeRouteNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::PlatformChangeRouteNotify>(this, entity, proto, 0, include_me);
};

// Line 916: range 000000001605C156-000000001605C342
int32_t __cdecl Scene::notifyToSpecificPlayer<proto::DungeonReviseLevelNotify>(
        Scene *const this,
        proto::DungeonReviseLevelNotify *proto,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rdx
  int32_t result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-84h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:88";
  *(_QWORD *)(v3 + 16) = Scene::notifyToSpecificPlayer<proto::DungeonReviseLevelNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      value = Player::getUid(v6);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 1000: range 0000000017A77A62-0000000017A77BE7
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::EntityFightPropUpdateNotify>(
        Scene *const this,
        Entity *entity,
        proto::EntityFightPropUpdateNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t updated; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::EntityFightPropUpdateNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  updated = PlayerMgr::sendToPlayerList<proto::EntityFightPropUpdateNotify>(
              &GameThreadLocal->player_mgr,
              (const std::vector<unsigned int> *)(v5 + 32),
              proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = updated;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1016: range 00000000138D9A24-00000000138D9C35
int32_t __cdecl Scene::notifyAllPlayer<proto::AvatarSkillDepotChangeNotify>(
        Scene *const this,
        proto::AvatarSkillDepotChangeNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::AvatarSkillDepotChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 1016: range 0000000014A103B0-0000000014A105C1
int32_t __cdecl Scene::notifyAllPlayer<proto::PerformOperationNotify>(
        Scene *const this,
        proto::PerformOperationNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::PerformOperationNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 1016: range 000000001320530C-0000000013205581
const Scene *__fastcall Scene::findEntityWithDead<Creature>(
        const Scene *const this,
        unsigned __int64 entity_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 entity_id:40 64 16 13 entity_ptr:42";
  *(_QWORD *)(v3 + 16) = Scene::findEntityWithDead<Creature>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)((entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)entity_id + 128LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(
    v3 + 64,
    entity_id,
    *(unsigned int *)(v3 + 48));
  if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.hpp",
      "findEntityWithDead",
      45);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v3 + 64);
    std::dynamic_pointer_cast<Creature,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 1021: range 00000000146832C4-00000000146832FE
int32_t __cdecl Scene::notifyViewingPlayers<proto::PlatformStartRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::PlatformStartRouteNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::PlatformStartRouteNotify>(this, entity, proto, 0, include_me);
};

// Line 1021: range 00000000146834B6-00000000146834F0
int32_t __cdecl Scene::notifyViewingPlayers<proto::PlatformStopRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::PlatformStopRouteNotify *proto,
        bool include_me)
{
  return Scene::notifyViewingPlayersExclude<proto::PlatformStopRouteNotify>(this, entity, proto, 0, include_me);
};

// Line 1310: range 00000000146C6930-00000000146C6AB5
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::PlatformStartRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::PlatformStartRouteNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t started; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::PlatformStartRouteNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  started = PlayerMgr::sendToPlayerList<proto::PlatformStartRouteNotify>(
              &GameThreadLocal->player_mgr,
              (const std::vector<unsigned int> *)(v5 + 32),
              proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = started;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1310: range 00000000146C6C52-00000000146C6DD7
int32_t __cdecl Scene::notifyViewingPlayersExclude<proto::PlatformStopRouteNotify>(
        Scene *const this,
        Entity *entity,
        proto::PlatformStopRouteNotify *proto,
        uint32_t exclude_uid,
        bool include_me)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 10 uid_vec:61";
  *(_QWORD *)(v5 + 16) = Scene::notifyViewingPlayersExclude<proto::PlatformStopRouteNotify>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  Scene::getViewingPlayers((std::vector<unsigned int> *)(v5 + 32), this, entity, exclude_uid, include_me);
  v8 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v8);
  v10 = PlayerMgr::sendToPlayerList<proto::PlatformStopRouteNotify>(
          &GameThreadLocal->player_mgr,
          (const std::vector<unsigned int> *)(v5 + 32),
          proto);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  result = v10;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1383: range 000000001324312A-000000001324333B
int32_t __cdecl Scene::notifyAllPlayer<proto::FishPoolDataNotify>(
        Scene *const this,
        proto::FishPoolDataNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Player> > *p; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:71";
  *(_QWORD *)(v3 + 16) = Scene::notifyAllPlayer<proto::FishPoolDataNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin(&this->player_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(&this->player_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v6)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v8, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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
