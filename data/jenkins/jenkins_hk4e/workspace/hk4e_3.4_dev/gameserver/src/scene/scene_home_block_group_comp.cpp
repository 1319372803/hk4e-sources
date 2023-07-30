// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_home_block_group_comp.cpp

// Line 31: range 0000000015CD20BE-0000000015CD213F
int32_t __cdecl SceneHomeBlockGroupComp::initLoadGroup(SceneHomeBlockGroupComp *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "initLoadGroup",
    32);
  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
    &v2,
    (const char (*)[42])"[HOME_GROUP] initLoadGroup in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 37: range 0000000015CD2140-0000000015CD21C1
void __cdecl SceneHomeBlockGroupComp::prePlayerLogin(SceneHomeBlockGroupComp *const this, bool is_relogin)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "prePlayerLogin",
    38);
  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
    &v2,
    (const char (*)[43])"[HOME_GROUP] prePlayerLogin in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 42: range 0000000015CD21C2-0000000015CD223E
void __cdecl SceneHomeBlockGroupComp::afterPlayerLogin(SceneHomeBlockGroupComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "afterPlayerLogin",
    43);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    &v1,
    (const char (*)[45])"[HOME_GROUP] afterPlayerLogin in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 47: range 0000000015CD2408-0000000015CD2A6E
__int64 __fastcall SceneHomeBlockGroupComp::buildGroupInitParam(
        SceneHomeBlockGroupComp *const this,
        __int64 group_id,
        uint32_t pattern_id,
        GroupInitParam *init_param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t OwnerUid; // ecx
  char v8; // dl
  bool v9; // dl
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  uint32_t v14; // ecx
  char v15; // dl
  bool v16; // dl
  Scene *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  uint32_t v21; // edx
  char v22; // al
  Scene *v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  uint32_t v27; // edx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned int v32; // r14d
  __int64 result; // rax
  const GroupScriptConfig *group_script_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-B0h] BYREF
  char v39[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 11 scene_id:52 48 4 11 group_id:46 64 16 12 scene_wtr:53";
  *(_QWORD *)(v4 + 16) = SceneHomeBlockGroupComp::buildGroupInitParam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OwnerUid = Scene::getOwnerUid(this->scene_);
  v8 = *(_BYTE *)(((unsigned __int64)&init_param->owner_uid >> 3) + 0x7FFF8000);
  LOBYTE(group_id) = v8 != 0;
  v9 = v8 != 0 && (char)((((_BYTE)init_param - 44) & 7) + 3) >= v8;
  if ( v9 )
    __asan_report_store4(&init_param->owner_uid, group_id, v9);
  init_param->owner_uid = OwnerUid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v12 = *p_vptr_DescribalBase + 264LL;
  v13 = *(unsigned __int8 *)((v12 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v13 )
    v12 = __asan_report_load8();
  v14 = (*(__int64 (__fastcall **)(Scene *))v12)(scene);
  v15 = *(_BYTE *)(((unsigned __int64)&init_param->scene_revise_level >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  v16 = v15 != 0 && (char)((((_BYTE)init_param - 124) & 7) + 3) >= v15;
  if ( v16 )
    __asan_report_store4(&init_param->scene_revise_level, v13, v16);
  init_param->scene_revise_level = v14;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 32) = Scene::getSceneId(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Scene>((Scene *)&__r);
  std::weak_ptr<Scene>::weak_ptr<Scene,void>((std::weak_ptr<Scene> *const)(v4 + 64), &__r);
  std::shared_ptr<Scene>::~shared_ptr(&__r);
  std::weak_ptr<Scene>::weak_ptr((std::weak_ptr<Scene> *const)&__r, (const std::weak_ptr<Scene> *)(v4 + 64));
  std::function<unsigned int ()(proto::ProtEntityType)>::operator=<SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}>(
    &init_param->gen_entity_id_func,
    (SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *)&__r);
  SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::~ProtEntityType((SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v17 = this->scene_;
  v18 = &v17->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    v18 = (_QWORD *)__asan_report_load8();
  v19 = *v18 + 400LL;
  v20 = *(unsigned __int8 *)((v19 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v20 )
    v19 = __asan_report_load8();
  v21 = (*(__int64 (__fastcall **)(Scene *))v19)(v17);
  v22 = *(_BYTE *)(((unsigned __int64)&init_param->world_level >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&init_param->world_level, v20, v21);
  }
  init_param->world_level = v21;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v23 = this->scene_;
  v24 = &v23->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    v24 = (_QWORD *)__asan_report_load8();
  v25 = *v24 + 416LL;
  v26 = *(unsigned __int8 *)((v25 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v26 )
    v25 = __asan_report_load8();
  v27 = (*(__int64 (__fastcall **)(Scene *))v25)(v23);
  v28 = *(_BYTE *)(((unsigned __int64)&init_param->mp_players >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&init_param->mp_players, v26, v27);
  }
  init_param->mp_players = v27;
  group_script_config_ptr = Group::getGroupScriptConfig(*(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), pattern_id);
  if ( group_script_config_ptr )
  {
    std::string::operator=(&init_param->md5, &group_script_config_ptr->script_content.lua_content_md5);
    std::string::operator=(&init_param->group_lua_file_path, &group_script_config_ptr->script_content.file_path);
    v32 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_block_group_comp.cpp",
      "buildGroupInitParam",
      72);
    v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v38,
            (const char (*)[39])"findGroupScriptConfig fails,scene_id: ");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 32));
    v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])"group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v32 = -1;
  }
  std::weak_ptr<Scene>::~weak_ptr((std::weak_ptr<Scene> *const)(v4 + 64));
  result = v32;
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 55: range 0000000015CD2240-0000000015CD23EA
unsigned int __cdecl SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::operator()(
        const SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const __closure,
        proto::ProtEntityType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // r14d
  Scene *v6; // rax
  unsigned int result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 scene_ptr:57";
  *(_QWORD *)(v2 + 16) = SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_block_group_comp.cpp",
      "operator()",
      60);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v8, (const char (*)[39])off_259D20C0);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = Scene::genNewEntityId(v6, type);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v5;
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

// Line 55: range 0000000015D011A0-0000000015D011C5
void __cdecl SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::ProtEntityType(
        SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const this,
        SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 55: range 0000000015D1FCEC-0000000015D1FD11
void __cdecl SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::ProtEntityType(
        SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const this,
        const SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 55: range 0000000015CD23EC-0000000015CD2406
void __cdecl SceneHomeBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::~ProtEntityType(
        SceneHomeBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const this)
{
  std::weak_ptr<Scene>::~weak_ptr(&this->__scene_wtr);
};

// Line 81: range 0000000015CD2A70-0000000015CD2AF4
int32_t __cdecl SceneHomeBlockGroupComp::setGroupDead(SceneHomeBlockGroupComp *const this, uint32_t group_id)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "setGroupDead",
    82);
  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
    &v3,
    (const char (*)[41])"[HOME_GROUP] setGroupDead in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 87: range 0000000015CD2AF6-0000000015CD2B07
bool __cdecl SceneHomeBlockGroupComp::isGroupDead(const SceneHomeBlockGroupComp *const this, uint32_t group_id)
{
  return 0;
};

// Line 92: range 0000000015CD2B08-0000000015CD2B8C
int32_t __cdecl SceneHomeBlockGroupComp::recoverDeadGroup(SceneHomeBlockGroupComp *const this, uint32_t group_id)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "recoverDeadGroup",
    93);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    &v3,
    (const char (*)[45])"[HOME_GROUP] recoverDeadGroup in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 98: range 0000000015CD2B8E-0000000015CD2C0A
void __cdecl SceneHomeBlockGroupComp::setSceneDead(SceneHomeBlockGroupComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "setSceneDead",
    99);
  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
    &v1,
    (const char (*)[41])"[HOME_GROUP] setSceneDead in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 103: range 0000000015CD2C0C-0000000015CD2C88
void __cdecl SceneHomeBlockGroupComp::recoverDeadScene(SceneHomeBlockGroupComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "recoverDeadScene",
    104);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    &v1,
    (const char (*)[45])"[HOME_GROUP] recoverDeadScene in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 108: range 0000000015CD2C8A-0000000015CD2C98
bool __cdecl SceneHomeBlockGroupComp::isSceneDead(const SceneHomeBlockGroupComp *const this)
{
  return 0;
};

// Line 113: range 0000000015CD2C9A-0000000015CD2CAC
bool __cdecl SceneHomeBlockGroupComp::isGroupValid(
        const SceneHomeBlockGroupComp *const this,
        const GroupInfoScriptConfig *group_info_config)
{
  return 1;
};

// Line 119: range 0000000015CD2CAE-0000000015CD2D2E
void __cdecl SceneHomeBlockGroupComp::unloadInvalidGroups(
        SceneHomeBlockGroupComp *const this,
        const std::unordered_set<unsigned int> *active_group_set)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "unloadInvalidGroups",
    121);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v2,
    (const char (*)[48])"[HOME_GROUP] unloadInvalidGroups in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 125: range 0000000015CD2D30-0000000015CD343A
int32_t __cdecl SceneHomeBlockGroupComp::reloadGroups(SceneHomeBlockGroupComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *Scene; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  Home *v8; // rax
  HomeSceneComp *SceneComp; // r14
  uint32_t SceneId; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-188h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-180h]
  GroupLoadParam *param; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-170h] BYREF
  char v23[336]; // [rsp+50h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 13 owner_uid:126 48 4 12 group_id:145 64 16 16 own_home_ptr:128 96 16 9 timer:137 128 48 "
                        "21 active_groups_set:139 208 48 19 batch_group_map:144";
  *(_QWORD *)(v1 + 16) = SceneHomeBlockGroupComp::reloadGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862728] = -202116109;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v1 + 32) = Scene::getOwnerUid(Scene);
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "reloadGroups",
    127);
  v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v22,
         (const char (*)[32])"[HOME_GROUP] reloadGroups. uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v22);
  SceneCompBase::getScene((SceneCompBase *const)this);
  Scene::getOwnHome((const Scene *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_block_group_comp.cpp",
      "reloadGroups",
      131);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v22,
           (const char (*)[30])"own_home_ptr is nullptr.uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = -1;
  }
  else
  {
    SceneBlockGroupComp::unloadAllGroups(this);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 96));
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    SceneComp = Home::getSceneComp(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneId = Scene::getSceneId(this->scene_);
    HomeSceneComp::getHomeGroupSet((std::set<unsigned int> *)(v1 + 128), SceneComp, SceneId);
    if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v1 + 128)) )
    {
      v7 = 0;
    }
    else
    {
      std::map<unsigned int,GroupLoadParam>::map((std::map<unsigned int,GroupLoadParam> *const)(v1 + 208));
      __for_range = (std::set<unsigned int> *)(v1 + 128);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 128))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 128))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) = *v11;
        param = std::map<unsigned int,GroupLoadParam>::operator[](
                  (std::map<unsigned int,GroupLoadParam> *const)(v1 + 208),
                  (const std::map<unsigned int,GroupLoadParam>::key_type *)(v1 + 48));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( std::map<unsigned int,GroupLoadParam>::size((const std::map<unsigned int,GroupLoadParam> *const)(v1 + 208)) > 0x14 )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_home_block_group_comp.cpp",
          "reloadGroups",
          151);
        v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v22,
                (const char (*)[31])"[HOME_GROUP] load group count:");
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::map<unsigned int,GroupLoadParam>::size((const std::map<unsigned int,GroupLoadParam> *const)(v1 + 208));
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v12,
                (const unsigned __int64 *)&__for_end);
        v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])". uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      if ( SceneBlockGroupComp::loadGroupBatch(this, (const std::map<unsigned int,GroupLoadParam> *)(v1 + 208), 1) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_home_block_group_comp.cpp",
          "reloadGroups",
          155);
        v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v22,
                (const char (*)[30])"async batch load failed.uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_home_block_group_comp.cpp",
          "reloadGroups",
          158);
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v22,
                (const char (*)[24])"[HOME_GROUP] load cost:");
        *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = 0;
      }
      std::map<unsigned int,GroupLoadParam>::~map((std::map<unsigned int,GroupLoadParam> *const)(v1 + 208));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 128));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = v7;
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 163: range 0000000015CD343C-0000000015CD36D6
int32_t __cdecl SceneHomeBlockGroupComp::internalLoadGroupBatch(
        SceneHomeBlockGroupComp *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::shared_ptr<GroupBatchLoadContext> *p_context_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  bool *p_is_home_group_load_forbid_async_load; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  char is_forbid_async_load; // [rsp+2Fh] [rbp-91h]
  std::shared_ptr<common::minet::Packet> v12; // [rsp+30h] [rbp-90h] BYREF
  std::any p_context; // [rsp+40h] [rbp-80h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 config_ptr:166";
  *(_QWORD *)(v3 + 16) = SceneHomeBlockGroupComp::internalLoadGroupBatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  is_forbid_async_load = 1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  if ( std::operator!=<Config>((const std::shared_ptr<Config> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_is_home_group_load_forbid_async_load = &v6->is_home_group_load_forbid_async_load;
    if ( *(_BYTE *)(((unsigned __int64)p_is_home_group_load_forbid_async_load >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_home_group_load_forbid_async_load & 7) >= *(_BYTE *)(((unsigned __int64)p_is_home_group_load_forbid_async_load >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_home_group_load_forbid_async_load);
    }
    is_forbid_async_load = v6->is_home_group_load_forbid_async_load;
  }
  if ( is_forbid_async_load )
  {
    std::any::any<std::shared_ptr<GroupBatchLoadContext> &,std::shared_ptr<GroupBatchLoadContext>,std::any::_Manager_external<std::shared_ptr<GroupBatchLoadContext>>,true,true>(
      &p_context,
      p_context_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, p_packet_ptr);
    v8 = SceneBlockGroupComp::asyncLoadGroupBatch(&v12, &p_context);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
    std::any::~any(&p_context);
  }
  else
  {
    std::shared_ptr<GroupBatchLoadContext>::shared_ptr(
      (std::shared_ptr<GroupBatchLoadContext> *const)&p_context,
      p_context_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, p_packet_ptr);
    v8 = SceneBlockGroupComp::internalLoadGroupBatch(this, &v12, (std::shared_ptr<GroupBatchLoadContext> *)&p_context);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
    std::shared_ptr<GroupBatchLoadContext>::~shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)&p_context);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  result = v8;
  if ( v14 == (char *)v3 )
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

// Line 180: range 0000000015CD36D8-0000000015CD36FA
int32_t __cdecl SceneHomeBlockGroupComp::onPlayerEyePosChange(
        SceneHomeBlockGroupComp *const this,
        uint32_t uid,
        Vector3 new_pos)
{
  return 0;
};

// Line 186: range 0000000015CD36FC-0000000015CD3911
SceneHomeBlockGroupComp *__fastcall SceneHomeBlockGroupComp::findGroup(
        SceneHomeBlockGroupComp *const this,
        __int64 group_id,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v8; // rax
  int v10; // [rsp+1Ch] [rbp-C4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+38h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v10 = (int)file;
  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 group_id:185 64 8 6 it:187";
  *(_QWORD *)(v5 + 16) = SceneHomeBlockGroupComp::findGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 48) = v10;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      (std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72),
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 64),
         &__y) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, &v8->second);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_block_group_comp.cpp",
      "findGroup",
      192);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v12,
      (const char (*)[38])"[HOME_GROUP] findGroup in home scene.");
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
  }
  if ( v13 == (char *)v5 )
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
  return this;
};

// Line 198: range 0000000015CD3912-0000000015CD399D
int32_t __cdecl SceneHomeBlockGroupComp::registerGroups(
        SceneHomeBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec,
        uint32_t revise_level,
        uint32_t revise_id)
{
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "registerGroups",
    199);
  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
    &v5,
    (const char (*)[43])"[HOME_GROUP] registerGroups in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 205: range 0000000015CD399E-0000000015CD3A28
int32_t __cdecl SceneHomeBlockGroupComp::unregisterGroups(
        SceneHomeBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec,
        bool is_force_unload)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "unregisterGroups",
    206);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    &v4,
    (const char (*)[45])"[HOME_GROUP] unregisterGroups in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 211: range 0000000015CD3A2A-0000000015CD3A3B
bool __cdecl SceneHomeBlockGroupComp::isGroupRegisted(const SceneHomeBlockGroupComp *const this, uint32_t group_id)
{
  return 0;
};

// Line 216: range 0000000015CD3A3C-0000000015CD3A4E
bool __cdecl SceneHomeBlockGroupComp::canRegisterGroups(
        const SceneHomeBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec)
{
  return 0;
};

// Line 221: range 0000000015CD3A50-0000000015CD3A62
bool __cdecl SceneHomeBlockGroupComp::hasMutalReplaceGroups(
        const SceneHomeBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec)
{
  return 0;
};

// Line 226: range 0000000015CD3A64-0000000015CD3A72
uint32_t __cdecl SceneHomeBlockGroupComp::getDynamicGroupNum(const SceneHomeBlockGroupComp *const this)
{
  return 0;
};

// Line 231: range 0000000015CD3A74-0000000015CD3BA3
std::unordered_set<unsigned int> *__cdecl SceneHomeBlockGroupComp::getLoadGroupsWithinSight(
        std::unordered_set<unsigned int> *retstr,
        SceneHomeBlockGroupComp *const this)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "getLoadGroupsWithinSight",
    232);
  common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
    &v3,
    (const char (*)[53])"[HOME_GROUP] getLoadGroupsWithinSight in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v3);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 56LL);
  }
  retstr->_M_h._M_buckets = 0LL;
  retstr->_M_h._M_bucket_count = 0LL;
  retstr->_M_h._M_before_begin._M_nxt = 0LL;
  retstr->_M_h._M_element_count = 0LL;
  *(_QWORD *)&retstr->_M_h._M_rehash_policy._M_max_load_factor = 0LL;
  retstr->_M_h._M_rehash_policy._M_next_resize = 0LL;
  retstr->_M_h._M_single_bucket = 0LL;
  std::unordered_set<unsigned int>::unordered_set(retstr);
  return retstr;
};

// Line 238: range 0000000015CD3BA4-0000000015CD4B5C
void __cdecl SceneHomeBlockGroupComp::procForceSilentUpdate(SceneHomeBlockGroupComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rax
  unsigned int **v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Group *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const std::shared_ptr<Group> *v16; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GameserverService *v18; // rax
  __int64 GameThreadLocal; // rax
  GameserverService *v20; // rax
  __int64 v21; // rax
  char v22; // al
  int v23; // r14d
  GameserverService *v24; // rax
  __int64 v25; // rax
  GameserverService *v26; // rax
  __int64 v27; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v28; // rdx
  common::milog::MiLogStream *v29; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v30; // rax
  common::milog::MiLogStream *v31; // rax
  GameserverService *v32; // rax
  __int64 v33; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v34; // rdx
  GameserverService *v35; // rax
  __int64 v36; // rax
  int v37; // r14d
  int v38; // r14d
  GameserverService *v39; // rax
  __int64 v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  unsigned int total_unload_time; // [rsp+18h] [rbp-268h]
  unsigned int total_reload_time; // [rsp+1Ch] [rbp-264h]
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-260h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-258h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *force_silent_update_group_map; // [rsp+30h] [rbp-250h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-248h]
  std::vector<std::shared_ptr<Group>> *__for_range_0; // [rsp+40h] [rbp-240h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-238h]
  std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-230h]
  GroupLoadParam *param; // [rsp+58h] [rbp-228h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+60h] [rbp-220h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+68h] [rbp-218h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+70h] [rbp-210h]
  const std::string *md5; // [rsp+78h] [rbp-208h]
  const std::string *script_md5; // [rsp+80h] [rbp-200h]
  std::vector<unsigned int>::iterator __for_end; // [rsp+88h] [rbp-1F8h] BYREF
  common::milog::MiLogStream v62; // [rsp+90h] [rbp-1F0h] BYREF
  char v63[464]; // [rsp+B0h] [rbp-1D0h] BYREF

  v1 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 32 4 19 total_cost_time:331 48 8 8 iter:243 80 8 8 iter:301 112 16 9 timer:297 144 16 13 group"
                        "_ptr:307 176 16 13 group_ptr:249 208 24 33 force_silent_update_group_vec:239 272 24 20 reload_gr"
                        "oup_vec:277 336 48 19 batch_group_map:319";
  *(_QWORD *)(v1 + 16) = SceneHomeBlockGroupComp::procForceSilentUpdate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862726] = 62194;
  v3[536862727] = -218959360;
  v3[536862728] = 62194;
  v3[536862729] = -218959360;
  v3[536862730] = 62194;
  v3[536862732] = -202116109;
  std::vector<std::shared_ptr<Group>>::vector((std::vector<std::shared_ptr<Group>> *const)(v1 + 208));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 176));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
  force_silent_update_group_map = LuaConfigMgr::getForceSilentUpdateGroupMap(&v4->design_config.lua_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 176));
  __for_range = force_silent_update_group_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(force_silent_update_group_map)._M_cur;
  __for_begin_0._M_current = (unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(force_silent_update_group_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
  {
    v5 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v6 = (unsigned int **)v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    __for_end._M_current = *v6;
    group_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
    _ = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
    *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 48) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                        &this->group_map_,
                                                                                        group_id);
    *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 80) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_);
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 80)) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 48));
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v1 + 176), &v7->second);
      if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 176)) )
      {
        v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
        group_script_config_ptr = Group::getScriptConfig(v8);
        if ( group_script_config_ptr )
        {
          v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
          md5 = &Group::getInitParam(v12)->md5;
          script_md5 = &group_script_config_ptr->script_content.lua_content_md5;
          if ( std::operator!=<char>(md5, &group_script_config_ptr->script_content.lua_content_md5) )
          {
            std::vector<std::shared_ptr<Group>>::push_back(
              (std::vector<std::shared_ptr<Group>> *const)(v1 + 208),
              (const std::vector<std::shared_ptr<Group>>::value_type *)(v1 + 176));
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_home_block_group_comp.cpp",
              "procForceSilentUpdate",
              267);
            v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v62, (const char (*)[7])"group ");
            v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
            *(_DWORD *)(v1 + 32) = Group::getGroupId(v14);
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v1 + 32));
            common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" md5 changed");
            common::milog::MiLogStream::~MiLogStream(&v62);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_home_block_group_comp.cpp",
            "procForceSilentUpdate",
            258);
          v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v62,
                 (const char (*)[27])"getScriptConfig for group ");
          v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
          *(_DWORD *)(v1 + 32) = Group::getGroupId(v10);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" failed.");
          common::milog::MiLogStream::~MiLogStream(&v62);
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 176));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( !std::vector<std::shared_ptr<Group>>::empty((const std::vector<std::shared_ptr<Group>> *const)(v1 + 208)) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 272));
    __for_range_0 = (std::vector<std::shared_ptr<Group>> *)(v1 + 208);
    *(std::vector<std::shared_ptr<Group>>::iterator *)(v1 + 80) = std::vector<std::shared_ptr<Group>>::begin((std::vector<std::shared_ptr<Group>> *const)(v1 + 208));
    __for_end._M_current = (unsigned int *)std::vector<std::shared_ptr<Group>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *)(v1 + 80),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *)&__for_end) )
    {
      v16 = __gnu_cxx::__normal_iterator<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *const)(v1 + 80));
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v1 + 176), v16);
      v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
      *(_DWORD *)(v1 + 32) = Group::getGroupId(v17);
      v18 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (__int64)GameserverService::getGameThreadLocal(v18);
      if ( *(_BYTE *)(((unsigned __int64)(GameThreadLocal + 1640) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(GameThreadLocal + 1640) >> 3) + 0x7FFF8000) <= 3 )
      {
        GameThreadLocal = __asan_report_load4();
      }
      if ( !*(_DWORD *)(GameThreadLocal + 1640) )
        goto LABEL_25;
      v20 = ServiceBox::findService<GameserverService>();
      v21 = (__int64)GameserverService::getGameThreadLocal(v20);
      if ( *(_BYTE *)(((unsigned __int64)(v21 + 1656) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v21 + 1656) >> 3) + 0x7FFF8000) <= 3 )
      {
        v21 = __asan_report_load4();
      }
      if ( *(_DWORD *)(v21 + 1656) )
        v22 = 0;
      else
LABEL_25:
        v22 = 1;
      if ( v22 )
      {
        v23 = 0;
      }
      else
      {
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v1 + 272),
          (const std::vector<unsigned int>::value_type *)(v1 + 32));
        v24 = ServiceBox::findService<GameserverService>();
        v25 = (__int64)GameserverService::getGameThreadLocal(v24);
        if ( *(_BYTE *)(((unsigned __int64)(v25 + 1640) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v25 + 1640) >> 3) + 0x7FFF8000) <= 3 )
        {
          v25 = __asan_report_load4();
        }
        --*(_DWORD *)(v25 + 1640);
        v26 = ServiceBox::findService<GameserverService>();
        v27 = (__int64)GameserverService::getGameThreadLocal(v26);
        if ( *(_BYTE *)(((unsigned __int64)(v27 + 1656) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v27 + 1656) >> 3) + 0x7FFF8000) <= 3 )
        {
          v27 = __asan_report_load4();
        }
        --*(_DWORD *)(v27 + 1656);
        v23 = 1;
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 176));
      if ( v23 != 1 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *const)(v1 + 80));
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 272)) )
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 112));
      common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 112));
      __for_range_1 = (std::vector<unsigned int> *)(v1 + 272);
      __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 272))._M_current;
      *(std::vector<unsigned int>::iterator *)(v1 + 48) = std::vector<unsigned int>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                &__for_begin_0,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 48)) )
      {
        v28 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v28;
        *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 80) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                            &this->group_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v1 + 32));
        __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 80),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)&__for_end) )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_home_block_group_comp.cpp",
            "procForceSilentUpdate",
            304);
          v29 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v62,
                  (const char (*)[45])"[HOME_GROUP] group_id is not in group_map_. ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v62);
        }
        else
        {
          v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 80));
          std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v1 + 144), &v30->second);
          if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 144)) )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_home_block_group_comp.cpp",
              "procForceSilentUpdate",
              310);
            v31 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v62,
                    (const char (*)[36])"[HOME_GROUP] group_ptr is nullptr. ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v1 + 32));
            common::milog::MiLogStream::~MiLogStream(&v62);
          }
          else
          {
            std::shared_ptr<Group>::shared_ptr(
              (std::shared_ptr<Group> *const)(v1 + 176),
              (const std::shared_ptr<Group> *)(v1 + 144));
            SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)(v1 + 176), 0);
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 176));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 144));
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      total_unload_time = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 112));
      v32 = ServiceBox::findService<GameserverService>();
      v33 = (__int64)GameserverService::getGameThreadLocal(v32);
      if ( *(_BYTE *)(((unsigned __int64)(v33 + 1648) >> 3) + 0x7FFF8000) )
        v33 = __asan_report_load8();
      *(_QWORD *)(v33 + 1648) += total_unload_time;
      common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 112));
      std::map<unsigned int,GroupLoadParam>::map((std::map<unsigned int,GroupLoadParam> *const)(v1 + 336));
      __for_range_2 = (std::vector<unsigned int> *)(v1 + 272);
      *(std::vector<unsigned int>::iterator *)(v1 + 80) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 272));
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 80),
                &__for_end) )
      {
        v34 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v34;
        param = std::map<unsigned int,GroupLoadParam>::operator[](
                  (std::map<unsigned int,GroupLoadParam> *const)(v1 + 336),
                  (const std::map<unsigned int,GroupLoadParam>::key_type *)(v1 + 32));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 80));
      }
      SceneBlockGroupComp::loadGroupBatch(this, (const std::map<unsigned int,GroupLoadParam> *)(v1 + 336), 1);
      total_reload_time = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 112));
      v35 = ServiceBox::findService<GameserverService>();
      v36 = (__int64)GameserverService::getGameThreadLocal(v35);
      if ( *(_BYTE *)(((unsigned __int64)(v36 + 1664) >> 3) + 0x7FFF8000) )
        v36 = __asan_report_load8();
      *(_QWORD *)(v36 + 1664) += total_reload_time;
      v37 = std::vector<std::shared_ptr<Group>>::size((const std::vector<std::shared_ptr<Group>> *const)(v1 + 208));
      v38 = v37 - std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 272));
      v39 = ServiceBox::findService<GameserverService>();
      v40 = (__int64)GameserverService::getGameThreadLocal(v39);
      if ( *(_BYTE *)(((unsigned __int64)(v40 + 1672) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v40 + 1672) >> 3) + 0x7FFF8000) <= 3 )
      {
        v40 = __asan_report_load4();
      }
      *(_DWORD *)(v40 + 1672) += v38;
      *(_DWORD *)(v1 + 32) = total_unload_time + total_reload_time;
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/scene/scene_home_block_group_comp.cpp",
        "procForceSilentUpdate",
        332);
      v41 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v62,
              (const char (*)[35])"[HOME_GROUP] real reload groups: [");
      v42 = common::milog::MiLogStream::operator<<<unsigned int>(v41, (const std::vector<unsigned int> *)(v1 + 272));
      v43 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v42, (const char (*)[2])"]");
      v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v43, (const char (*)[12])" cost time ");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v45, (const char (*)[5])off_259D2E40);
      common::milog::MiLogStream::~MiLogStream(&v62);
      std::map<unsigned int,GroupLoadParam>::~map((std::map<unsigned int,GroupLoadParam> *const)(v1 + 336));
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 112));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 272));
  }
  std::vector<std::shared_ptr<Group>>::~vector((std::vector<std::shared_ptr<Group>> *const)(v1 + 208));
  if ( v63 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 336: range 0000000015CD4B5E-0000000015CD4BE0
void __cdecl SceneHomeBlockGroupComp::removeFromGadgetMap(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "removeFromGadgetMap",
    337);
  common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
    &v3,
    (const char (*)[53])"[HOME_GROUP] MUIP removeFromGadgetMap in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 341: range 0000000015CD4BE2-0000000015CD4C64
void __cdecl SceneHomeBlockGroupComp::removeFromMonsterMap(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "removeFromMonsterMap",
    342);
  common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
    &v3,
    (const char (*)[54])"[HOME_GROUP] MUIP removeFromMonsterMap in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 346: range 0000000015CD4C66-0000000015CD4CED
void __cdecl SceneHomeBlockGroupComp::procDelGadgetList(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        bool is_add)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "procDelGadgetList",
    347);
  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
    &v4,
    (const char (*)[51])"[HOME_GROUP] MUIP procDelGadgetList in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 351: range 0000000015CD4CEE-0000000015CD4D75
void __cdecl SceneHomeBlockGroupComp::procDelMonsterList(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        bool is_add)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "procDelMonsterList",
    352);
  common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
    &v4,
    (const char (*)[52])"[HOME_GROUP] MUIP procDelMonsterList in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 356: range 0000000015CD4D76-0000000015CD4E01
void __cdecl SceneHomeBlockGroupComp::setGadgetState(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t state,
        bool is_create)
{
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "setGadgetState",
    357);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v5,
    (const char (*)[48])"[HOME_GROUP] MUIP setGadgetState in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 361: range 0000000015CD4E02-0000000015CD4E8E
void __cdecl SceneHomeBlockGroupComp::procTrigger(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        const std::string *trigger_name,
        uint32_t trigger_count,
        bool is_del)
{
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "procTrigger",
    362);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    &v5,
    (const char (*)[45])"[HOME_GROUP] MUIP procTrigger in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 366: range 0000000015CD4E90-0000000015CD4F16
void __cdecl SceneHomeBlockGroupComp::procVariable(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        const std::string *var_name,
        int32_t var_value)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "procVariable",
    367);
  common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
    &v4,
    (const char (*)[46])"[HOME_GROUP] MUIP procVariable in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 371: range 0000000015CD4F18-0000000015CD4F9A
void __cdecl SceneHomeBlockGroupComp::setTargetSuite(
        SceneHomeBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t target_suite)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "setTargetSuite",
    372);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v3,
    (const char (*)[48])"[HOME_GROUP] MUIP setTargetSuite in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 376: range 0000000015CD4F9C-0000000015CD5024
void __cdecl SceneHomeBlockGroupComp::setGroupUnregisterCleared(
        SceneHomeBlockGroupComp *const this,
        Group *group,
        bool is_unregister_cleared,
        bool is_need_refresh_replacement)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "setGroupUnregisterCleared",
    377);
  common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
    &v4,
    (const char (*)[54])"[HOME_GROUP] setGroupUnregisterCleared in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 381: range 0000000015CD5026-0000000015CD50A5
void __cdecl SceneHomeBlockGroupComp::onModifyReplaceable(SceneHomeBlockGroupComp *const this, uint32_t group_id)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_block_group_comp.cpp",
    "onModifyReplaceable",
    382);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v2,
    (const char (*)[48])"[HOME_GROUP] onModifyReplaceable in home scene.");
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 386: range 0000000015CD50A6-0000000015CD51AC
// local variable allocation has failed, the output may be wrong!
GroupPtr __cdecl SceneHomeBlockGroupComp::loadGroupByGm(SceneHomeBlockGroupComp *const this, uint32_t group_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  GroupPtr result; // rax
  uint32_t group_ida; // [rsp+Ch] [rbp-74h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF
  GroupLoadParam v10; // 0:rdx.8

  group_ida = v2;
  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 param:387";
  *(_QWORD *)(v3 + 16) = SceneHomeBlockGroupComp::loadGroupByGm;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store16(this, *(_QWORD *)&group_id);
  v10 = (GroupLoadParam)group_ida;
  SceneBlockGroupComp::loadGroup(this, *(SceneBlockGroupComp **)&group_id, v10, *(_QWORD *)(v5 - 32), 1);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
