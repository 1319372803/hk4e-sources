// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gm/group_lua_test_stub.cpp

// Line 29: range 000000001663B350-000000001663B7AB
int32_t __cdecl GroupLuaTestStub::init(GroupLuaTestStub *const this)
{
  GroupLuaTestStub **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v3; // rax
  GroupLuaTestStub **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v6; // rax
  GroupLuaTestStub **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v9; // rax
  GroupLuaTestStub **v10; // r8
  const std::_Placeholder<1> *v11; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v12; // rax
  GroupLuaTestStub **v13; // r8
  const std::_Placeholder<1> *v14; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v15; // rax
  GroupLuaTestStub **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v18; // rax
  GroupLuaTestStub **v19; // r8
  const std::_Placeholder<1> *v20; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v21; // rax
  GroupLuaTestStub **v22; // r8
  const std::_Placeholder<1> *v23; // r9
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *v24; // rax
  __m128i v26; // [rsp+0h] [rbp-D0h] BYREF
  __m128i v27; // [rsp+10h] [rbp-C0h] BYREF
  __m128i v28; // [rsp+20h] [rbp-B0h] BYREF
  __m128i v29; // [rsp+30h] [rbp-A0h] BYREF
  __m128i v30; // [rsp+40h] [rbp-90h] BYREF
  GroupLuaTestStub *thisa; // [rsp+58h] [rbp-78h]
  std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)>>::key_type __k; // [rsp+64h] [rbp-6Ch] BYREF
  GroupLuaTestStub *v33; // [rsp+68h] [rbp-68h] BYREF
  std::vector<std::shared_ptr<Event>> *(*__f[2])(std::vector<std::shared_ptr<Event>> *__return_ptr __struct_ptr, GroupLuaTestStub *, std::shared_ptr<Group>); // [rsp+70h] [rbp-60h] BYREF
  std::_Bind_helper<false,std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,const std::_Placeholder<1>&>::type v35; // [rsp+80h] [rbp-50h] BYREF

  thisa = this;
  v33 = this;
  __f[0] = (std::vector<std::shared_ptr<Event>> *(*)(std::vector<std::shared_ptr<Event>> *__return_ptr __struct_ptr, GroupLuaTestStub *, std::shared_ptr<Group>))GroupLuaTestStub::buildAnyMonsterDie;
  __f[1] = 0LL;
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  __k = EVENT_ANY_MONSTER_DIE;
  v3 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
         &this->build_group_event_func_map_,
         &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v3,
    &v35);
  v33 = this;
  __f[0] = (std::vector<std::shared_ptr<Event>> *(*)(std::vector<std::shared_ptr<Event>> *__return_ptr __struct_ptr, GroupLuaTestStub *, std::shared_ptr<Group>))GroupLuaTestStub::buildAnyGadgetDie;
  __f[1] = 0LL;
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v4,
    v5);
  __k = EVENT_ANY_GADGET_DIE;
  v6 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
         &this->build_group_event_func_map_,
         &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v6,
    &v35);
  v33 = this;
  v26.m128i_i64[0] = (__int64)GroupLuaTestStub::buildVariableChange;
  v26.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v26);
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v7,
    v8);
  __k = EVENT_VARIABLE_CHANGE;
  v9 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
         &thisa->build_group_event_func_map_,
         &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v9,
    &v35);
  v33 = thisa;
  v27.m128i_i64[0] = (__int64)GroupLuaTestStub::buildEnterRegion;
  v27.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v27);
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v10,
    v11);
  __k = EVENT_ENTER_REGION;
  v12 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
          &thisa->build_group_event_func_map_,
          &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v12,
    &v35);
  v33 = thisa;
  v28.m128i_i64[0] = (__int64)GroupLuaTestStub::buildLeaveRegion;
  v28.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v28);
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v13,
    v14);
  __k = EVENT_LEAVE_REGION;
  v15 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
          &thisa->build_group_event_func_map_,
          &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v15,
    &v35);
  v33 = thisa;
  v29.m128i_i64[0] = (__int64)GroupLuaTestStub::buildGadgetStateChange;
  v29.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v29);
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v16,
    v17);
  __k = EVENT_GADGET_STATE_CHANGE;
  v18 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
          &thisa->build_group_event_func_map_,
          &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v18,
    &v35);
  v33 = thisa;
  v30.m128i_i64[0] = (__int64)GroupLuaTestStub::buildDungeonSettle;
  v30.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v30);
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v19,
    v20);
  __k = EVENT_DUNGEON_SETTLE;
  v21 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
          &thisa->build_group_event_func_map_,
          &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v21,
    &v35);
  v33 = thisa;
  __f[0] = (std::vector<std::shared_ptr<Event>> *(*)(std::vector<std::shared_ptr<Event>> *__return_ptr __struct_ptr, GroupLuaTestStub *, std::shared_ptr<Group>))GroupLuaTestStub::buildSpecificMonsterHpChange;
  __f[1] = 0LL;
  std::bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>),GroupLuaTestStub*,std::_Placeholder<1> const&>(
    &v35,
    __f,
    &v33,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v22,
    v23);
  __k = EVENT_SPECIFIC_MONSTER_HP_CHANGE;
  v24 = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::operator[](
          &thisa->build_group_event_func_map_,
          &__k);
  std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator=<std::_Bind<std::vector<std::shared_ptr<Event>> (GroupLuaTestStub::*)(std::shared_ptr<Group>) ()(GroupLuaTestStub*,std::_Placeholder<1>)>>(
    v24,
    &v35);
  return 0;
};

// Line 44: range 000000001663B7AC-000000001663D01D
__int64 __fastcall GroupLuaTestStub::testGroupLua(
        GroupLuaTestStub *const this,
        uint32_t scene_id,
        uint32_t group_id,
        std::string *test_result)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  Scene *v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __gnu_cxx::__normal_iterator<const data::EventType*,std::vector<data::EventType> >::reference v22; // rax
  _DWORD *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  __int64 v25; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  char v28; // cl
  std::shared_ptr<Event> *v29; // rax
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *p_second; // r14
  common::milog::MiLogStream *v31; // rax
  const std::shared_ptr<Event> *v32; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  uint32_t *p_uid; // rax
  LuaScript *v38; // r14
  const boost::reference_wrapper<ScriptContext> *v39; // r9
  common::milog::MiLogStream *v40; // rax
  LuaScript *v41; // r14
  const boost::reference_wrapper<ScriptContext> *v42; // r9
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  const boost::reference_wrapper<Event> *v48; // [rsp+0h] [rbp-5C0h]
  std::unordered_map<std::string,TriggerScriptConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-598h] BYREF
  std::unordered_map<std::string,TriggerScriptConfig>::const_iterator __for_end; // [rsp+30h] [rbp-590h] BYREF
  std::vector<data::EventType>::const_iterator __for_begin_0; // [rsp+38h] [rbp-588h] BYREF
  std::vector<data::EventType>::const_iterator __for_end_0; // [rsp+40h] [rbp-580h] BYREF
  std::vector<std::shared_ptr<Event>>::iterator __for_begin_1; // [rsp+48h] [rbp-578h] BYREF
  std::vector<std::shared_ptr<Event>>::iterator __for_end_1; // [rsp+50h] [rbp-570h] BYREF
  boost::reference_wrapper<Event> v57; // [rsp+58h] [rbp-568h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false> __y; // [rsp+60h] [rbp-560h] BYREF
  SceneBlockGroupComp *block_group_comp; // [rsp+68h] [rbp-558h]
  const GroupScriptConfig *script_config_ptr; // [rsp+70h] [rbp-550h]
  const std::unordered_map<std::string,TriggerScriptConfig> *__for_range; // [rsp+78h] [rbp-548h]
  const std::pair<const std::string,TriggerScriptConfig> *v62; // [rsp+80h] [rbp-540h]
  std::tuple_element<0,const std::pair<const std::string,TriggerScriptConfig> >::type *trigger_name; // [rsp+88h] [rbp-538h]
  std::tuple_element<1,const std::pair<const std::string,TriggerScriptConfig> >::type *trigger_config; // [rsp+90h] [rbp-530h]
  const TriggerScriptConfig *trigger_script_config_ptr; // [rsp+98h] [rbp-528h]
  const std::vector<data::EventType> *__for_range_0; // [rsp+A0h] [rbp-520h]
  std::vector<std::shared_ptr<Event>> *__for_range_1; // [rsp+A8h] [rbp-518h]
  Event *v68; // [rsp+C0h] [rbp-500h]
  Event *o; // [rsp+C8h] [rbp-4F8h]
  ScriptContext *v70; // [rsp+D0h] [rbp-4F0h]
  Event *v71; // [rsp+D8h] [rbp-4E8h]
  Event *v72; // [rsp+E0h] [rbp-4E0h]
  ScriptContext *v73; // [rsp+E8h] [rbp-4D8h]
  std::vector<std::shared_ptr<Event>> __x; // [rsp+F0h] [rbp-4D0h] BYREF
  common::milog::MiLogStream v75; // [rsp+110h] [rbp-4B0h] BYREF
  char v76[1168]; // [rsp+130h] [rbp-490h] BYREF
  GroupLoadParam v77; // 0:rdx.8

  v4 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1120LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 32 1 8 meet:133 48 4 11 evt_type:99 64 4 7 ret:157 80 4 11 scene_id:43 96 4 11 group_id:43 11"
                        "2 8 8 iter:102 144 8 13 load_param:61 176 16 12 scene_ptr:45 208 16 12 group_ptr:62 240 16 13 sc"
                        "ript_ptr:75 272 16 14 trigger_ptr:92 304 16 11 evt_ptr:121 336 16 19 dummy_event_ptr:106 368 24 "
                        "17 event_ptr_vec:101 432 160 11 context:123 656 392 5 ss:82";
  *(_QWORD *)(v4 + 16) = GroupLuaTestStub::testGroupLua;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = 62194;
  v6[536862729] = 62194;
  v6[536862730] = 62194;
  v6[536862731] = 62194;
  v6[536862732] = -218959360;
  v6[536862733] = 62194;
  v6[536862738] = -219021312;
  v6[536862739] = -218959118;
  v6[536862740] = 62194;
  v6[536862752] = -218103808;
  v6[536862753] = -202116109;
  v6[536862754] = -202116109;
  *(_DWORD *)(v4 + 80) = scene_id;
  *(_DWORD *)(v4 + 96) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v4 + 176), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 176)) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gm/group_lua_test_stub.cpp",
      "testGroupLua",
      48);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v75,
           (const char (*)[42])"[TEST_STUB] scene_ptr is null, scene_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v75);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
    block_group_comp = Scene::getBlockGroupComp(v10);
    SceneBlockGroupComp::unloadGroup(block_group_comp, *(_DWORD *)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)block_group_comp >> 3) + 0x7FFF8000) )
      __asan_report_load8(block_group_comp);
    v11 = (unsigned __int64)(block_group_comp->_vptr_SceneCompBase + 20);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(block_group_comp->_vptr_SceneCompBase + 20);
    if ( (*(unsigned __int8 (__fastcall **)(SceneBlockGroupComp *, _QWORD))v11)(
           block_group_comp,
           *(unsigned int *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gm/group_lua_test_stub.cpp",
        "testGroupLua",
        57);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v75,
              (const char (*)[37])"[TEST_STUB] group is dead, recover: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v75);
      if ( *(_BYTE *)(((unsigned __int64)block_group_comp >> 3) + 0x7FFF8000) )
        __asan_report_load8(block_group_comp);
      v13 = (unsigned __int64)(block_group_comp->_vptr_SceneCompBase + 21);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(block_group_comp->_vptr_SceneCompBase + 21);
      (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD))v13)(block_group_comp, *(unsigned int *)(v4 + 96));
    }
    *(_DWORD *)(v4 + 144) = 1;
    *(_DWORD *)(v4 + 148) = 0;
    v77 = (GroupLoadParam)*(unsigned int *)(v4 + 96);
    SceneBlockGroupComp::loadGroup(
      (SceneBlockGroupComp *const)(v4 + 208),
      (uint32_t)block_group_comp,
      v77,
      *(_QWORD *)(v4 + 144));
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gm/group_lua_test_stub.cpp",
        "testGroupLua",
        65);
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v75,
              (const char (*)[42])"[TEST_STUB] load group failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v75);
      v9 = -1;
    }
    else
    {
      v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
      script_config_ptr = Group::getScriptConfig(v15);
      if ( script_config_ptr )
      {
        std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
        Group::getScript((const Group *const)(v4 + 240));
        if ( std::operator==<LuaScript>((const std::shared_ptr<LuaScript> *)(v4 + 240), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/gm/group_lua_test_stub.cpp",
            "testGroupLua",
            78);
          v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v75,
                  (const char (*)[40])"[TEST_STUB] findScript fails, group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 96));
          common::milog::MiLogStream::~MiLogStream(&v75);
          v9 = -1;
        }
        else
        {
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 656);
          __for_range = &script_config_ptr->trigger_config_map;
          __for_begin._M_cur = std::unordered_map<std::string,TriggerScriptConfig>::begin(&script_config_ptr->trigger_config_map)._M_cur;
          __for_end._M_cur = std::unordered_map<std::string,TriggerScriptConfig>::end(&script_config_ptr->trigger_config_map)._M_cur;
          while ( std::__detail::operator!=<std::pair<std::string const,TriggerScriptConfig>,true>(
                    &__for_begin,
                    &__for_end) )
          {
            v62 = std::__detail::_Node_const_iterator<std::pair<std::string const,TriggerScriptConfig>,false,true>::operator*(&__for_begin);
            trigger_name = std::get<0ul,std::string const,TriggerScriptConfig>(v62);
            trigger_config = (std::tuple_element<1,const std::pair<const std::string,TriggerScriptConfig> >::type *)std::get<1ul,std::string const,TriggerScriptConfig>(v62);
            v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
            trigger_script_config_ptr = Group::findTriggerConfig(v18, trigger_name);
            if ( trigger_script_config_ptr )
            {
              v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
              Group::findTrigger((Group *const)(v4 + 272), (const std::string *)v20);
              if ( std::operator==<Trigger>(0LL, (const std::shared_ptr<Trigger> *)(v4 + 272)) )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/gm/group_lua_test_stub.cpp",
                  "testGroupLua",
                  95);
                v21 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v75,
                        (const char (*)[45])"[TEST_STUB] findTrigger fails, trigger_name:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, trigger_name);
                common::milog::MiLogStream::~MiLogStream(&v75);
              }
              else
              {
                __for_range_0 = &trigger_script_config_ptr->event_vec;
                __for_begin_0._M_current = std::vector<data::EventType>::begin(&trigger_script_config_ptr->event_vec)._M_current;
                __for_end_0._M_current = std::vector<data::EventType>::end(__for_range_0)._M_current;
                while ( __gnu_cxx::operator!=<data::EventType const*,std::vector<data::EventType>>(
                          &__for_begin_0,
                          &__for_end_0) )
                {
                  v22 = __gnu_cxx::__normal_iterator<data::EventType const*,std::vector<data::EventType>>::operator*(&__for_begin_0);
                  v23 = v22;
                  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v22);
                  }
                  *(_DWORD *)(v4 + 48) = *v23;
                  std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v4 + 368));
                  *(std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)>>::iterator *)(v4 + 112) = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::find(&this->build_group_event_func_map_, (const std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)>>::key_type *)(v4 + 48));
                  __y._M_cur = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::end(&this->build_group_event_func_map_)._M_cur;
                  if ( std::__detail::operator==<std::pair<data::EventType const,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>,false>(
                         (const std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false> *)(v4 + 112),
                         &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/gm/group_lua_test_stub.cpp",
                      "testGroupLua",
                      105);
                    v24 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                            &v75,
                            (const char (*)[52])"[TEST_STUB] event type not registered, event_type: ");
                    common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
                      v24,
                      (const data::EventType *)(v4 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v75);
                    v25 = *(unsigned int *)(v4 + 48);
                    EventUtil::createEvent((data::EventType)(v4 + 336));
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    Uid = Player::getUid(this->player_);
                    v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 336));
                    v28 = *(_BYTE *)(((unsigned __int64)&v27->uid >> 3) + 0x7FFF8000);
                    if ( v28 != 0 && (char)((((_BYTE)v27 + 60) & 7) + 3) >= v28 )
                    {
                      LOBYTE(v25) = v28 != 0;
                      __asan_report_store4(&v27->uid, v25, v27);
                    }
                    v27->uid = Uid;
                    v29 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v4 + 336));
                    std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(
                      (std::vector<std::shared_ptr<Event>> *const)(v4 + 368),
                      v29,
                      v29);
                    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 336));
                  }
                  else
                  {
                    p_second = &std::__detail::_Node_iterator<std::pair<data::EventType const,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false,false> *const)(v4 + 112))->second;
                    std::shared_ptr<Group>::shared_ptr(
                      (std::shared_ptr<Group> *const)(v4 + 336),
                      (const std::shared_ptr<Group> *)(v4 + 208));
                    std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator()(
                      &__x,
                      p_second,
                      (std::shared_ptr<Group> *)(v4 + 336));
                    std::vector<std::shared_ptr<Event>>::operator=(
                      (std::vector<std::shared_ptr<Event>> *const)(v4 + 368),
                      &__x);
                    std::vector<std::shared_ptr<Event>>::~vector(&__x);
                    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 336));
                  }
                  if ( std::vector<std::shared_ptr<Event>>::empty((const std::vector<std::shared_ptr<Event>> *const)(v4 + 368)) )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/gm/group_lua_test_stub.cpp",
                      "testGroupLua",
                      117);
                    v31 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                            &v75,
                            (const char (*)[37])"[TEST_STUB] event_ptr_vec is empty: ");
                    common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
                      v31,
                      (const data::EventType *)(v4 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v75);
                  }
                  else
                  {
                    __for_range_1 = (std::vector<std::shared_ptr<Event>> *)(v4 + 368);
                    __for_begin_1._M_current = std::vector<std::shared_ptr<Event>>::begin((std::vector<std::shared_ptr<Event>> *const)(v4 + 368))._M_current;
                    __for_end_1._M_current = std::vector<std::shared_ptr<Event>>::end(__for_range_1)._M_current;
                    while ( __gnu_cxx::operator!=<std::shared_ptr<Event> *,std::vector<std::shared_ptr<Event>>>(
                              &__for_begin_1,
                              &__for_end_1) )
                    {
                      v32 = __gnu_cxx::__normal_iterator<std::shared_ptr<Event> *,std::vector<std::shared_ptr<Event>>>::operator*(&__for_begin_1);
                      std::shared_ptr<Event>::shared_ptr((std::shared_ptr<Event> *const)(v4 + 304), v32);
                      ScriptContext::ScriptContext((ScriptContext *const)(v4 + 432));
                      std::shared_ptr<Scene>::shared_ptr(
                        (std::shared_ptr<Scene> *const)(v4 + 336),
                        (const std::shared_ptr<Scene> *)(v4 + 176));
                      ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v4 + 432), (ScenePtr *)(v4 + 336));
                      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 336));
                      std::weak_ptr<Group>::operator=<Group>(
                        (std::weak_ptr<Group> *const)(v4 + 448),
                        (const std::shared_ptr<Group> *)(v4 + 208));
                      v33 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 304));
                      p_source_entity_id = &v33->source_entity_id;
                      if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                             + 0x7FFF8000) )
                      {
                        __asan_report_load4(p_source_entity_id);
                      }
                      *(_DWORD *)(v4 + 512) = v33->source_entity_id;
                      v35 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 304));
                      if ( *(_BYTE *)(((unsigned __int64)&v35->target_entity_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&v35->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        v35 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v35->target_entity_id);
                      }
                      *(_DWORD *)(v4 + 516) = v35->target_entity_id;
                      v36 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 304));
                      p_uid = &v36->uid;
                      if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3)
                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4(p_uid);
                      }
                      *(_DWORD *)(v4 + 520) = v36->uid;
                      std::weak_ptr<Trigger>::operator=<Trigger>(
                        (std::weak_ptr<Trigger> *const)(v4 + 464),
                        (const std::shared_ptr<Trigger> *)(v4 + 272));
                      if ( (unsigned __int8)std::string::empty(&trigger_script_config_ptr->condition) == 1 )
                        goto LABEL_72;
                      *(_BYTE *)(v4 + 32) = 0;
                      v38 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
                      v68 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 304));
                      o = v68;
                      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false>::__node_type *)boost::addressof<Event>(v68);
                      v57.t_ = (Event *)__y._M_cur;
                      v70 = (ScriptContext *)(v4 + 432);
                      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false>::__node_type *)boost::addressof<ScriptContext>((ScriptContext *)(v4 + 432));
                      if ( LuaScript::executeFuncNoCatchException<bool,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<Event> const>(
                             v38,
                             &trigger_script_config_ptr->condition,
                             (bool *)(v4 + 32),
                             (const boost::reference_wrapper<ScriptContext> *)&__y,
                             &v57,
                             v39,
                             v48) )
                      {
                        common::milog::MiLogStream::create(
                          &v75,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/gm/group_lua_test_stub.cpp",
                          "testGroupLua",
                          138);
                        v40 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                &v75,
                                (const char (*)[59])"[TEST_STUB] condition executeFuncNoCatchException failed: ");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, trigger_name);
                        common::milog::MiLogStream::~MiLogStream(&v75);
                      }
                      else
                      {
LABEL_72:
                        if ( (unsigned __int8)std::string::empty(&trigger_script_config_ptr->action) != 1 )
                        {
                          v41 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
                          v71 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 304));
                          v72 = v71;
                          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false>::__node_type *)boost::addressof<Event>(v71);
                          v57.t_ = (Event *)__y._M_cur;
                          v73 = (ScriptContext *)(v4 + 432);
                          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false>::__node_type *)boost::addressof<ScriptContext>((ScriptContext *)(v4 + 432));
                          if ( LuaScript::executeFuncNoCatchException<int,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<Event> const>(
                                 v41,
                                 &trigger_script_config_ptr->action,
                                 (int *)(v4 + 64),
                                 (const boost::reference_wrapper<ScriptContext> *)&__y,
                                 &v57,
                                 v42,
                                 v48) )
                          {
                            common::milog::MiLogStream::create(
                              &v75,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/gm/group_lua_test_stub.cpp",
                              "testGroupLua",
                              160);
                            v43 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                                    &v75,
                                    (const char (*)[56])"[TEST_STUB] action executeFuncNoCatchException failed: ");
                            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                              v43,
                              &trigger_script_config_ptr->action);
                            common::milog::MiLogStream::~MiLogStream(&v75);
                          }
                          else if ( *(_DWORD *)(v4 + 64) )
                          {
                            common::milog::MiLogStream::create(
                              &v75,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/gm/group_lua_test_stub.cpp",
                              "testGroupLua",
                              164);
                            v44 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                                    &v75,
                                    (const char (*)[20])"[TEST_STUB] ret is:");
                            v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v44, (const int *)(v4 + 64));
                            v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    v45,
                                    (const char (*)[16])", trigger_name:");
                            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, trigger_name);
                            common::milog::MiLogStream::~MiLogStream(&v75);
                          }
                        }
                      }
                      ScriptContext::~ScriptContext((ScriptContext *const)(v4 + 432));
                      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 304));
                      __gnu_cxx::__normal_iterator<std::shared_ptr<Event> *,std::vector<std::shared_ptr<Event>>>::operator++(&__for_begin_1);
                    }
                  }
                  std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v4 + 368));
                  __gnu_cxx::__normal_iterator<data::EventType const*,std::vector<data::EventType>>::operator++(&__for_begin_0);
                }
              }
              std::shared_ptr<Trigger>::~shared_ptr((std::shared_ptr<Trigger> *const)(v4 + 272));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/gm/group_lua_test_stub.cpp",
                "testGroupLua",
                88);
              v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v75,
                      (const char (*)[51])"[TEST_STUB] findTriggerConfig fails, trigger_name:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, trigger_name);
              common::milog::MiLogStream::~MiLogStream(&v75);
            }
            std::__detail::_Node_const_iterator<std::pair<std::string const,TriggerScriptConfig>,false,true>::operator++(&__for_begin);
          }
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v75, v4 + 656);
          std::string::operator+=(test_result, &v75);
          std::string::~string(&v75);
          v9 = 0;
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 656);
        }
        std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v4 + 240));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gm/group_lua_test_stub.cpp",
          "testGroupLua",
          71);
        v16 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v75,
                (const char (*)[50])"[TEST_STUB] script_config_ptr is null, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v75);
        v9 = -1;
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 208));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 176));
  if ( v76 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8088) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1120LL, v76);
  }
  return v9;
};

// Line 185: range 000000001663D01E-000000001663D50F
__int64 __fastcall GroupLuaTestStub::testSceneGroupLua(
        GroupLuaTestStub *const this,
        uint32_t scene_id,
        std::string *test_result)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r15
  __int64 result; // rax
  int val; // [rsp+24h] [rbp-ECh] BYREF
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-D8h]
  const std::unordered_map<unsigned int,GroupInfoScriptConfig> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,GroupInfoScriptConfig> *v23; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *_; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+80h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 scene_id:184 64 16 9 timer:196";
  *(_QWORD *)(v4 + 16) = GroupLuaTestStub::testSceneGroupLua;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = scene_id;
  std::string::clear(test_result);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(&v7->design_config.lua_config_mgr, *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( scene_script_config_ptr )
  {
    __for_range = &scene_script_config_ptr->group_info_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,GroupInfoScriptConfig>::begin(&scene_script_config_ptr->group_info_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(&scene_script_config_ptr->group_info_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator*(&__for_begin);
      group_id = std::get<0ul,unsigned int const,GroupInfoScriptConfig>(v23);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *)std::get<1ul,unsigned int const,GroupInfoScriptConfig>(v23);
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(group_id);
      }
      if ( (unsigned int)GroupLuaTestStub::testGroupLua(this, *(_DWORD *)(v4 + 48), *group_id, test_result) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gm/group_lua_test_stub.cpp",
          "testSceneGroupLua",
          199);
        v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v26,
               (const char (*)[44])"[TEST_STUB] testGroupLua failed, scene_id: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, group_id);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v3 = -1;
        v12 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/gm/group_lua_test_stub.cpp",
          "testSceneGroupLua",
          202);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v26,
                (const char (*)[36])"[TEST_STUB] test finish, group_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, group_id);
        v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" cost: ");
        val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 64));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v12 = 1;
      }
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 64));
      if ( v12 != 1 )
        goto LABEL_16;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator++(&__for_begin);
    }
    v3 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gm/group_lua_test_stub.cpp",
      "testSceneGroupLua",
      190);
    v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v26,
           (const char (*)[54])"[TEST_STUB] scene script config not found, scene_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v3 = -1;
  }
LABEL_16:
  result = v3;
  if ( v27 == (char *)v4 )
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

// Line 208: range 000000001663D510-000000001663D8DF
void __cdecl GroupLuaTestStub::buildEventParam(
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr,
        const std::unordered_set<data::EventType> *event_type_set,
        std::vector<std::shared_ptr<Event>> *event_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__detail::_Node_const_iterator<data::EventType,true,false>::reference v7; // rax
  _DWORD *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> *p_second; // r14
  std::shared_ptr<Event> *M_current; // r15
  std::shared_ptr<Event> *v12; // r14
  std::unordered_set<data::EventType>::const_iterator __for_begin; // [rsp+38h] [rbp-128h] BYREF
  std::unordered_set<data::EventType>::const_iterator __for_end; // [rsp+40h] [rbp-120h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<Event>*,std::vector<std::shared_ptr<Event>> > __i; // [rsp+48h] [rbp-118h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false> __y; // [rsp+50h] [rbp-110h] BYREF
  const std::unordered_set<data::EventType> *__for_range; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Group> p___args_0; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+90h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 14 event_type:209 64 8 8 iter:211 96 24 17 event_ptr_vec:217";
  *(_QWORD *)(v4 + 16) = GroupLuaTestStub::buildEventParam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  __for_range = event_type_set;
  __for_begin._M_cur = std::unordered_set<data::EventType>::begin(event_type_set)._M_cur;
  __for_end._M_cur = std::unordered_set<data::EventType>::end(event_type_set)._M_cur;
  while ( std::__detail::operator!=<data::EventType,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<data::EventType,true,false>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = *v8;
    *(std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)>>::iterator *)(v4 + 64) = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::find(&this->build_group_event_func_map_, (const std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)>>::key_type *)(v4 + 48));
    __y._M_cur = std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::end(&this->build_group_event_func_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<data::EventType const,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false> *)(v4 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gm/group_lua_test_stub.cpp",
        "buildEventParam",
        214);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v21,
             (const char (*)[52])"[TEST_STUB] event type not registered, event_type: ");
      common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
        v9,
        (const data::EventType *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      p_second = &std::__detail::_Node_iterator<std::pair<data::EventType const,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::EventType,std::function<std::vector<std::shared_ptr<Event>>(std::shared_ptr<Group>)> >,false,false> *const)(v4 + 64))->second;
      std::shared_ptr<Group>::shared_ptr(&p___args_0, p_group_ptr);
      std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>::operator()(
        (std::vector<std::shared_ptr<Event>> *)(v4 + 96),
        p_second,
        &p___args_0);
      std::shared_ptr<Group>::~shared_ptr(&p___args_0);
      M_current = std::vector<std::shared_ptr<Event>>::end((std::vector<std::shared_ptr<Event>> *const)(v4 + 96))._M_current;
      v12 = std::vector<std::shared_ptr<Event>>::begin((std::vector<std::shared_ptr<Event>> *const)(v4 + 96))._M_current;
      __i._M_current = std::vector<std::shared_ptr<Event>>::end(event_vec)._M_current;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Event> const*,std::vector<std::shared_ptr<Event>>>::__normal_iterator<std::shared_ptr<Event>*>(
        (__gnu_cxx::__normal_iterator<const std::shared_ptr<Event>*,std::vector<std::shared_ptr<Event>> > *const)&__y,
        &__i);
      std::vector<std::shared_ptr<Event>>::insert<__gnu_cxx::__normal_iterator<std::shared_ptr<Event>*,std::vector<std::shared_ptr<Event>>>,void>(
        event_vec,
        (std::vector<std::shared_ptr<Event>>::const_iterator)__y._M_cur,
        (__gnu_cxx::__normal_iterator<std::shared_ptr<Event>*,std::vector<std::shared_ptr<Event>> >)v12,
        (__gnu_cxx::__normal_iterator<std::shared_ptr<Event>*,std::vector<std::shared_ptr<Event>> >)M_current);
      std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v4 + 96));
    }
    std::__detail::_Node_const_iterator<data::EventType,true,false>::operator++(&__for_begin);
  }
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 224: range 000000001663DCF8-000000001663DFD1
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildAnyMonsterDie(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // [rsp+10h] [rbp-E0h]
  uint32_t uid; // [rsp+3Ch] [rbp-B4h]
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF
  GroupLuaTestStub::buildAnyMonsterDie::<lambda(Entity&)> v12; // 0:rsi.8,8:edx.4

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 17 event_ptr_vec:229";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildAnyMonsterDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    uid = Player::getUid(this->player_);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    v12.__uid = uid;
    v12.__event_ptr_vec = (std::vector<std::shared_ptr<Event>> *)(v3 + 32);
    std::function<ForeachPolicy ()(Entity &)>::function<GroupLuaTestStub::buildAnyMonsterDie(std::shared_ptr<Group>)::{lambda(Entity &)#1},void,void>(
      &p_func,
      v12);
    Group::foreachEntity(v7, &p_func);
    std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
    std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
  }
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
  return retstr;
};

// Line 231: range 000000001663D8E0-000000001663DCF7
ForeachPolicy __cdecl GroupLuaTestStub::buildAnyMonsterDie(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator()(
        const GroupLuaTestStub::buildAnyMonsterDie::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int (__fastcall **v5)(Entity *); // rax
  __int64 v6; // rsi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rdx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  data::MonsterType MonsterType; // r14d
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rdx
  uint32_t uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // r14
  std::shared_ptr<Event> *v27; // rax
  std::shared_ptr<Event> *v28; // rdx
  ForeachPolicy result; // eax
  char v30[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 monster_ptr:234 64 16 11 evt_ptr:237";
  *(_QWORD *)(v2 + 16) = GroupLuaTestStub::buildAnyMonsterDie(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v5 = (unsigned int (__fastcall **)(Entity *))(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity->_vptr_DescribalBase + 3);
  if ( (*v5)(entity) == 2 )
  {
    toPtr<Monster,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 32), 0LL) )
    {
      v6 = 1LL;
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v7 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v7);
      v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = *(_BYTE *)(((unsigned __int64)&v9->source_entity_id >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)v9 + 4) & 7) + 3) >= v10 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(&v9->source_entity_id, v6, v9);
      }
      v9->source_entity_id = EntityId;
      v11 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigId = Entity::getConfigId((const Entity *const)v11);
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)v13 + 44) & 7) + 3) >= v14 )
      {
        LOBYTE(v6) = v14 != 0;
        __asan_report_store4(&v13->param1, v6, v13);
      }
      v13->param1 = ConfigId;
      v15 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v16 = *(_BYTE *)(((unsigned __int64)(v15 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)(v16 <= 3);
      if ( (_BYTE)v17 )
        v15 = __asan_report_store4(v15 + 48, v6, v17);
      *(_DWORD *)(v15 + 48) = 0;
      v18 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      MonsterType = Monster::getMonsterType(v18);
      v20 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v21 = *(_BYTE *)(((unsigned __int64)(v20 + 56) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v21 != 0;
      v22 = (v21 != 0) & (unsigned __int8)(v21 <= 3);
      if ( (_BYTE)v22 )
        v20 = __asan_report_store4(v20 + 56, v6, v22);
      *(_DWORD *)(v20 + 56) = MonsterType;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__uid);
      }
      uid = __closure->__uid;
      v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v25 = *(_BYTE *)(((unsigned __int64)&v24->uid >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)((((_BYTE)v24 + 60) & 7) + 3) >= v25 )
      {
        LOBYTE(v6) = v25 != 0;
        __asan_report_store4(&v24->uid, v6, v24);
      }
      v24->uid = uid;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      event_ptr_vec = __closure->__event_ptr_vec;
      v27 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 64));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(event_ptr_vec, v27, v28);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v30 == (char *)v2 )
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

// Line 253: range 000000001663E34C-000000001663E625
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildAnyGadgetDie(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // [rsp+10h] [rbp-E0h]
  uint32_t uid; // [rsp+3Ch] [rbp-B4h]
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF
  GroupLuaTestStub::buildAnyGadgetDie::<lambda(Entity&)> v12; // 0:rsi.8,8:edx.4

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 17 event_ptr_vec:258";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildAnyGadgetDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    uid = Player::getUid(this->player_);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    v12.__uid = uid;
    v12.__event_ptr_vec = (std::vector<std::shared_ptr<Event>> *)(v3 + 32);
    std::function<ForeachPolicy ()(Entity &)>::function<GroupLuaTestStub::buildAnyGadgetDie(std::shared_ptr<Group>)::{lambda(Entity &)#1},void,void>(
      &p_func,
      v12);
    Group::foreachEntity(v7, &p_func);
    std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
    std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
  }
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
  return retstr;
};

// Line 260: range 000000001663DFD2-000000001663E34B
ForeachPolicy __cdecl GroupLuaTestStub::buildAnyGadgetDie(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator()(
        const GroupLuaTestStub::buildAnyGadgetDie::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int (__fastcall **v5)(Entity *); // rax
  __int64 v6; // rsi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  uint32_t uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // r14
  std::shared_ptr<Event> *v19; // rax
  std::shared_ptr<Event> *v20; // rdx
  ForeachPolicy result; // eax
  char v22[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:263 64 16 11 evt_ptr:266";
  *(_QWORD *)(v2 + 16) = GroupLuaTestStub::buildAnyGadgetDie(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v5 = (unsigned int (__fastcall **)(Entity *))(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity->_vptr_DescribalBase + 3);
  if ( (*v5)(entity) == 4 )
  {
    toPtr<Gadget,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
    {
      v6 = 2LL;
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v7);
      v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = *(_BYTE *)(((unsigned __int64)&v9->source_entity_id >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)v9 + 4) & 7) + 3) >= v10 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(&v9->source_entity_id, v6, v9);
      }
      v9->source_entity_id = EntityId;
      v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigId = Entity::getConfigId((const Entity *const)v11);
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)v13 + 44) & 7) + 3) >= v14 )
      {
        LOBYTE(v6) = v14 != 0;
        __asan_report_store4(&v13->param1, v6, v13);
      }
      v13->param1 = ConfigId;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__uid);
      }
      uid = __closure->__uid;
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = *(_BYTE *)(((unsigned __int64)&v16->uid >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((((_BYTE)v16 + 60) & 7) + 3) >= v17 )
      {
        LOBYTE(v6) = v17 != 0;
        __asan_report_store4(&v16->uid, v6, v16);
      }
      v16->uid = uid;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      event_ptr_vec = __closure->__event_ptr_vec;
      v19 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 64));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(event_ptr_vec, v19, v20);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v22 == (char *)v2 )
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

// Line 280: range 000000001663E626-000000001663EA89
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildVariableChange(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rsi
  int v8; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  __int64 v11; // rsi
  std::tuple_element<1,const std::pair<const std::string,int> >::type v12; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  std::shared_ptr<Event> *v15; // rax
  std::unordered_map<std::string,int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<std::string,int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_map<std::string,int> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<const std::string,int> *v21; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const std::string,int> >::type *v22; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const std::string,int> >::type *v23; // [rsp+48h] [rbp-B8h]
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 11 evt_ptr:288 64 24 17 event_ptr_vec:285";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildVariableChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 64));
    __for_range = &std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr)->variable_map_;
    __for_begin._M_cur = std::unordered_map<std::string,int>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<std::string,int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,int>,true>(&__for_begin, &__for_end) )
    {
      v21 = std::__detail::_Node_iterator<std::pair<std::string const,int>,false,true>::operator*(&__for_begin);
      v22 = std::get<0ul,std::string const,int>(v21);
      v23 = (std::tuple_element<1,const std::pair<const std::string,int> >::type *)std::get<1ul,std::string const,int>(v21);
      EventUtil::createEvent((data::EventType)(v3 + 32));
      v6 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::string::operator=(&v6->source_name, v22);
      v7 = ((unsigned __int8)v23 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v8 = *v23 + 1;
      v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v10 = *(_BYTE *)(((unsigned __int64)&v9->param1 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)v9 + 44) & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(&v9->param1, v7, v9);
      }
      v9->param1 = v8;
      v11 = ((unsigned __int8)v23 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v12 = *v23;
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v14 = *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)v13 + 44) & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(&v13->param1, v11, v13);
      }
      v13->param1 = v12;
      v15 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v3 + 32));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(
        (std::vector<std::shared_ptr<Event>> *const)(v3 + 64),
        v15,
        v15);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 32));
      std::__detail::_Node_iterator<std::pair<std::string const,int>,false,true>::operator++(&__for_begin);
    }
    std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 64));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 64));
  }
  if ( v24 == (char *)v3 )
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
  return retstr;
};

// Line 298: range 000000001663EF96-000000001663F3B4
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildEnterRegion(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Group *v6; // r14
  uint32_t uid; // [rsp+2Ch] [rbp-F4h]
  GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> p___f; // [rsp+30h] [rbp-F0h] BYREF
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 avatar_ptr:305 64 24 17 event_ptr_vec:303";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildEnterRegion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    uid = Player::getUid(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 32));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
    {
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      retstr->_M_impl._M_start = 0LL;
      retstr->_M_impl._M_finish = 0LL;
      retstr->_M_impl._M_end_of_storage = 0LL;
      std::vector<std::shared_ptr<Event>>::vector(retstr);
    }
    else
    {
      v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      p___f.__event_ptr_vec = (std::vector<std::shared_ptr<Event>> *)(v3 + 64);
      p___f.__uid = uid;
      std::shared_ptr<Avatar>::shared_ptr(&p___f.__avatar_ptr, (const std::shared_ptr<Avatar> *)(v3 + 32));
      std::function<ForeachPolicy ()(Entity &)>::function<GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1},void,void>(
        &p_func,
        &p___f);
      Group::foreachEntity(v6, &p_func);
      std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
      GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::~Entity(&p___f);
      std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 64));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 64));
  }
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
  return retstr;
};

// Line 310: range 000000001663EA8A-000000001663EF74
ForeachPolicy __cdecl GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator()(
        const GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int (__fastcall **v5)(Entity *); // rax
  __int64 v6; // rsi
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // r14d
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rdx
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  char v19; // cl
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // r14d
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  char v30; // cl
  uint32_t uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  char v33; // cl
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // r14
  std::shared_ptr<Event> *v35; // rax
  std::shared_ptr<Event> *v36; // rdx
  ForeachPolicy result; // eax
  char v38[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 region_ptr:313 64 16 11 evt_ptr:316";
  *(_QWORD *)(v2 + 16) = GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v5 = (unsigned int (__fastcall **)(Entity *))(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity->_vptr_DescribalBase + 3);
  if ( (*v5)(entity) == 5 )
  {
    toPtr<Region,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Region>((const std::shared_ptr<Region> *)(v2 + 32), 0LL) )
    {
      v6 = 4LL;
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v7 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId(v7);
      v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = *(_BYTE *)(((unsigned __int64)&v9->source_entity_id >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)v9 + 4) & 7) + 3) >= v10 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(&v9->source_entity_id, v6, v9);
      }
      v9->source_entity_id = EntityId;
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__avatar_ptr);
      v12 = Entity::getEntityId((const Entity *const)v11);
      v13 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = *(_BYTE *)(((unsigned __int64)(v13 + 40) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)(v14 <= 3);
      if ( (_BYTE)v15 )
        v13 = __asan_report_store4(v13 + 40, v6, v15);
      *(_DWORD *)(v13 + 40) = v12;
      v16 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigId = Entity::getConfigId(v16);
      v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v19 = *(_BYTE *)(((unsigned __int64)&v18->param1 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)((((_BYTE)v18 + 44) & 7) + 3) >= v19 )
      {
        LOBYTE(v6) = v19 != 0;
        __asan_report_store4(&v18->param1, v6, v18);
      }
      v18->param1 = ConfigId;
      v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__avatar_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v20);
      v21 = *(_QWORD *)v20->baseclass_0 + 24LL;
      v22 = *(unsigned __int8 *)((v21 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v22 )
        __asan_report_load8(*(_QWORD *)v20->baseclass_0 + 24LL);
      v23 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v21)(v20);
      v24 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v25 = *(_BYTE *)(((unsigned __int64)(v24 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v22) = v25 != 0;
      v26 = (v25 != 0) & (unsigned __int8)(v25 <= 3);
      if ( (_BYTE)v26 )
        v24 = __asan_report_store4(v24 + 48, v22, v26);
      *(_DWORD *)(v24 + 48) = v23;
      v27 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__avatar_ptr);
      v28 = Entity::getConfigId((const Entity *const)v27);
      v29 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v30 = *(_BYTE *)(((unsigned __int64)&v29->param3 >> 3) + 0x7FFF8000);
      if ( v30 != 0 && (char)((((_BYTE)v29 + 52) & 7) + 3) >= v30 )
      {
        LOBYTE(v22) = v30 != 0;
        __asan_report_store4(&v29->param3, v22, v29);
      }
      v29->param3 = v28;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__uid);
      }
      uid = __closure->__uid;
      v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v33 = *(_BYTE *)(((unsigned __int64)&v32->uid >> 3) + 0x7FFF8000);
      if ( v33 != 0 && (char)((((_BYTE)v32 + 60) & 7) + 3) >= v33 )
      {
        LOBYTE(v22) = v33 != 0;
        __asan_report_store4(&v32->uid, v22, v32);
      }
      v32->uid = uid;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      event_ptr_vec = __closure->__event_ptr_vec;
      v35 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 64));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(event_ptr_vec, v35, v36);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v38 == (char *)v2 )
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

// Line 310: range 0000000016655262-0000000016655354
void __cdecl GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::Entity(
        GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *const this,
        GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *a2)
{
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // rdx
  uint32_t uid; // ecx
  char v4; // al
  GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  event_ptr_vec = a2->__event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__event_ptr_vec = event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__uid);
  }
  uid = a2->__uid;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__uid >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->__uid, a2, &this->__uid);
  }
  this->__uid = uid;
  std::shared_ptr<Avatar>::shared_ptr(&this->__avatar_ptr, &v5->__avatar_ptr);
};

// Line 310: range 0000000016655420-0000000016655512
void __cdecl GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::Entity(
        GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *const this,
        const GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *a2)
{
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // rdx
  uint32_t uid; // ecx
  char v4; // al
  const GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  event_ptr_vec = a2->__event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__event_ptr_vec = event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__uid);
  }
  uid = a2->__uid;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__uid >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->__uid, a2, &this->__uid);
  }
  this->__uid = uid;
  std::shared_ptr<Avatar>::shared_ptr(&this->__avatar_ptr, &v5->__avatar_ptr);
};

// Line 310: range 000000001663EF76-000000001663EF94
void __cdecl GroupLuaTestStub::buildEnterRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::~Entity(
        GroupLuaTestStub::buildEnterRegion::<lambda(Entity&)> *const this)
{
  std::shared_ptr<Avatar>::~shared_ptr(&this->__avatar_ptr);
};

// Line 332: range 000000001663F8C2-000000001663FCE0
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildLeaveRegion(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Group *v6; // r14
  uint32_t uid; // [rsp+2Ch] [rbp-F4h]
  GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> p___f; // [rsp+30h] [rbp-F0h] BYREF
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 avatar_ptr:339 64 24 17 event_ptr_vec:337";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildLeaveRegion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    uid = Player::getUid(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 32));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
    {
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      retstr->_M_impl._M_start = 0LL;
      retstr->_M_impl._M_finish = 0LL;
      retstr->_M_impl._M_end_of_storage = 0LL;
      std::vector<std::shared_ptr<Event>>::vector(retstr);
    }
    else
    {
      v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      p___f.__event_ptr_vec = (std::vector<std::shared_ptr<Event>> *)(v3 + 64);
      p___f.__uid = uid;
      std::shared_ptr<Avatar>::shared_ptr(&p___f.__avatar_ptr, (const std::shared_ptr<Avatar> *)(v3 + 32));
      std::function<ForeachPolicy ()(Entity &)>::function<GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1},void,void>(
        &p_func,
        &p___f);
      Group::foreachEntity(v6, &p_func);
      std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
      GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::~Entity(&p___f);
      std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 64));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 64));
  }
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
  return retstr;
};

// Line 344: range 000000001663F3B6-000000001663F8A0
ForeachPolicy __cdecl GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator()(
        const GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int (__fastcall **v5)(Entity *); // rax
  __int64 v6; // rsi
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // r14d
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rdx
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  char v19; // cl
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // r14d
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  char v30; // cl
  uint32_t uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  char v33; // cl
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // r14
  std::shared_ptr<Event> *v35; // rax
  std::shared_ptr<Event> *v36; // rdx
  ForeachPolicy result; // eax
  char v38[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 region_ptr:347 64 16 11 evt_ptr:350";
  *(_QWORD *)(v2 + 16) = GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v5 = (unsigned int (__fastcall **)(Entity *))(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity->_vptr_DescribalBase + 3);
  if ( (*v5)(entity) == 5 )
  {
    toPtr<Region,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Region>((const std::shared_ptr<Region> *)(v2 + 32), 0LL) )
    {
      v6 = 5LL;
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v7 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId(v7);
      v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = *(_BYTE *)(((unsigned __int64)&v9->source_entity_id >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)v9 + 4) & 7) + 3) >= v10 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(&v9->source_entity_id, v6, v9);
      }
      v9->source_entity_id = EntityId;
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__avatar_ptr);
      v12 = Entity::getEntityId((const Entity *const)v11);
      v13 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = *(_BYTE *)(((unsigned __int64)(v13 + 40) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)(v14 <= 3);
      if ( (_BYTE)v15 )
        v13 = __asan_report_store4(v13 + 40, v6, v15);
      *(_DWORD *)(v13 + 40) = v12;
      v16 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigId = Entity::getConfigId(v16);
      v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v19 = *(_BYTE *)(((unsigned __int64)&v18->param1 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)((((_BYTE)v18 + 44) & 7) + 3) >= v19 )
      {
        LOBYTE(v6) = v19 != 0;
        __asan_report_store4(&v18->param1, v6, v18);
      }
      v18->param1 = ConfigId;
      v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__avatar_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v20);
      v21 = *(_QWORD *)v20->baseclass_0 + 24LL;
      v22 = *(unsigned __int8 *)((v21 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v22 )
        __asan_report_load8(*(_QWORD *)v20->baseclass_0 + 24LL);
      v23 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v21)(v20);
      v24 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v25 = *(_BYTE *)(((unsigned __int64)(v24 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v22) = v25 != 0;
      v26 = (v25 != 0) & (unsigned __int8)(v25 <= 3);
      if ( (_BYTE)v26 )
        v24 = __asan_report_store4(v24 + 48, v22, v26);
      *(_DWORD *)(v24 + 48) = v23;
      v27 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__avatar_ptr);
      v28 = Entity::getConfigId((const Entity *const)v27);
      v29 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v30 = *(_BYTE *)(((unsigned __int64)&v29->param3 >> 3) + 0x7FFF8000);
      if ( v30 != 0 && (char)((((_BYTE)v29 + 52) & 7) + 3) >= v30 )
      {
        LOBYTE(v22) = v30 != 0;
        __asan_report_store4(&v29->param3, v22, v29);
      }
      v29->param3 = v28;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__uid);
      }
      uid = __closure->__uid;
      v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v33 = *(_BYTE *)(((unsigned __int64)&v32->uid >> 3) + 0x7FFF8000);
      if ( v33 != 0 && (char)((((_BYTE)v32 + 60) & 7) + 3) >= v33 )
      {
        LOBYTE(v22) = v33 != 0;
        __asan_report_store4(&v32->uid, v22, v32);
      }
      v32->uid = uid;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      event_ptr_vec = __closure->__event_ptr_vec;
      v35 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 64));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(event_ptr_vec, v35, v36);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v38 == (char *)v2 )
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

// Line 344: range 0000000016655604-00000000166556F6
void __cdecl GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::Entity(
        GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *const this,
        GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *a2)
{
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // rdx
  uint32_t uid; // ecx
  char v4; // al
  GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  event_ptr_vec = a2->__event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__event_ptr_vec = event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__uid);
  }
  uid = a2->__uid;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__uid >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->__uid, a2, &this->__uid);
  }
  this->__uid = uid;
  std::shared_ptr<Avatar>::shared_ptr(&this->__avatar_ptr, &v5->__avatar_ptr);
};

// Line 344: range 00000000166557C2-00000000166558B4
void __cdecl GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::Entity(
        GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *const this,
        const GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *a2)
{
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // rdx
  uint32_t uid; // ecx
  char v4; // al
  const GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  event_ptr_vec = a2->__event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__event_ptr_vec = event_ptr_vec;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__uid);
  }
  uid = a2->__uid;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__uid >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->__uid, a2, &this->__uid);
  }
  this->__uid = uid;
  std::shared_ptr<Avatar>::shared_ptr(&this->__avatar_ptr, &v5->__avatar_ptr);
};

// Line 344: range 000000001663F8A2-000000001663F8C0
void __cdecl GroupLuaTestStub::buildLeaveRegion(std::shared_ptr<Group>)::{lambda(Entity &)#1}::~Entity(
        GroupLuaTestStub::buildLeaveRegion::<lambda(Entity&)> *const this)
{
  std::shared_ptr<Avatar>::~shared_ptr(&this->__avatar_ptr);
};

// Line 366: range 00000000166400EA-00000000166403C3
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildGadgetStateChange(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // [rsp+10h] [rbp-E0h]
  uint32_t uid; // [rsp+3Ch] [rbp-B4h]
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF
  GroupLuaTestStub::buildGadgetStateChange::<lambda(Entity&)> v12; // 0:rsi.8,8:edx.4

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 17 event_ptr_vec:371";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildGadgetStateChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    uid = Player::getUid(this->player_);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    v12.__uid = uid;
    v12.__event_ptr_vec = (std::vector<std::shared_ptr<Event>> *)(v3 + 32);
    std::function<ForeachPolicy ()(Entity &)>::function<GroupLuaTestStub::buildGadgetStateChange(std::shared_ptr<Group>)::{lambda(Entity &)#1},void,void>(
      &p_func,
      v12);
    Group::foreachEntity(v7, &p_func);
    std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
    std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
  }
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
  return retstr;
};

// Line 373: range 000000001663FCE2-00000000166400E8
ForeachPolicy __cdecl GroupLuaTestStub::buildGadgetStateChange(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator()(
        const GroupLuaTestStub::buildGadgetStateChange::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int (__fastcall **v5)(Entity *); // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::string *v9; // rsi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t State; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // r14d
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rdx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  char v26; // cl
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // r14
  std::shared_ptr<Event> *v28; // rax
  std::shared_ptr<Event> *v29; // rdx
  ForeachPolicy result; // eax
  std::string v31; // [rsp+10h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:376 64 16 11 evt_ptr:379";
  *(_QWORD *)(v2 + 16) = GroupLuaTestStub::buildGadgetStateChange(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v5 = (unsigned int (__fastcall **)(Entity *))(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity->_vptr_DescribalBase + 3);
  if ( (*v5)(entity) == 4 )
  {
    toPtr<Gadget,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
    {
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigId = Entity::getConfigId((const Entity *const)v6);
      std::to_string(&v31, ConfigId);
      v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9 = &v31;
      std::string::operator=(&v8->source_name, &v31);
      std::string::~string(&v31);
      v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v10);
      v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->source_entity_id >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)((((_BYTE)v12 + 4) & 7) + 3) >= v13 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(&v12->source_entity_id, v9, v12);
      }
      v12->source_entity_id = EntityId;
      v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      State = Gadget::getState(v14);
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = *(_BYTE *)(((unsigned __int64)&v16->param1 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((((_BYTE)v16 + 44) & 7) + 3) >= v17 )
      {
        LOBYTE(v9) = v17 != 0;
        __asan_report_store4(&v16->param1, v9, v16);
      }
      v16->param1 = State;
      v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v19 = Entity::getConfigId((const Entity *const)v18);
      v20 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v21 = *(_BYTE *)(((unsigned __int64)(v20 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v21 != 0;
      v22 = (v21 != 0) & (unsigned __int8)(v21 <= 3);
      if ( (_BYTE)v22 )
        v20 = __asan_report_store4(v20 + 48, v9, v22);
      *(_DWORD *)(v20 + 48) = v19;
      v23 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v24 = Gadget::getState(v23);
      v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v26 = *(_BYTE *)(((unsigned __int64)&v25->param3 >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)((((_BYTE)v25 + 52) & 7) + 3) >= v26 )
      {
        LOBYTE(v9) = v26 != 0;
        __asan_report_store4(&v25->param3, v9, v25);
      }
      v25->param3 = v24;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      event_ptr_vec = __closure->__event_ptr_vec;
      v28 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 64));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(event_ptr_vec, v28, v29);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v32 == (char *)v2 )
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

// Line 395: range 00000000166403C4-000000001664072F
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildDungeonSettle(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  char v8; // cl
  std::shared_ptr<Event> *v9; // rax
  __int64 v10; // rsi
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  std::shared_ptr<Event> *v13; // rax
  char v16[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 16 evt_succ_ptr:401 64 16 16 evt_fail_ptr:404 96 24 17 event_ptr_vec:400";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 96));
    v6 = 8LL;
    EventUtil::createEvent((data::EventType)(v3 + 32));
    v7 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = *(_BYTE *)(((unsigned __int64)&v7->param1 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)((((_BYTE)v7 + 44) & 7) + 3) >= v8 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(&v7->param1, v6, v7);
    }
    v7->param1 = 1;
    v9 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(
      (std::vector<std::shared_ptr<Event>> *const)(v3 + 96),
      v9,
      v9);
    v10 = 8LL;
    EventUtil::createEvent((data::EventType)(v3 + 64));
    v11 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v12 = *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)((((_BYTE)v11 + 44) & 7) + 3) >= v12 )
    {
      LOBYTE(v10) = v12 != 0;
      __asan_report_store4(&v11->param1, v10, v11);
    }
    v11->param1 = 0;
    v13 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v3 + 64));
    std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(
      (std::vector<std::shared_ptr<Event>> *const)(v3 + 96),
      v13,
      v13);
    std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 96));
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 96));
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 411: range 0000000016640BF4-0000000016640ECD
std::vector<std::shared_ptr<Event>> *__cdecl GroupLuaTestStub::buildSpecificMonsterHpChange(
        std::vector<std::shared_ptr<Event>> *retstr,
        GroupLuaTestStub *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // [rsp+10h] [rbp-E0h]
  uint32_t uid; // [rsp+3Ch] [rbp-B4h]
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF
  GroupLuaTestStub::buildSpecificMonsterHpChange::<lambda(Entity&)> v12; // 0:rsi.8,8:edx.4

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 17 event_ptr_vec:416";
  *(_QWORD *)(v3 + 16) = GroupLuaTestStub::buildSpecificMonsterHpChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<std::shared_ptr<Event>>::vector(retstr);
  }
  else
  {
    std::vector<std::shared_ptr<Event>>::vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    uid = Player::getUid(this->player_);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    v12.__uid = uid;
    v12.__event_ptr_vec = (std::vector<std::shared_ptr<Event>> *)(v3 + 32);
    std::function<ForeachPolicy ()(Entity &)>::function<GroupLuaTestStub::buildSpecificMonsterHpChange(std::shared_ptr<Group>)::{lambda(Entity &)#1},void,void>(
      &p_func,
      v12);
    Group::foreachEntity(v7, &p_func);
    std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
    std::vector<std::shared_ptr<Event>>::vector(retstr, (std::vector<std::shared_ptr<Event>> *)(v3 + 32));
    std::vector<std::shared_ptr<Event>>::~vector((std::vector<std::shared_ptr<Event>> *const)(v3 + 32));
  }
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
  return retstr;
};

// Line 418: range 0000000016640730-0000000016640BF3
ForeachPolicy __cdecl GroupLuaTestStub::buildSpecificMonsterHpChange(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator()(
        const GroupLuaTestStub::buildSpecificMonsterHpChange::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int (__fastcall **v5)(Entity *); // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::string *v9; // rsi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rdx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  char v22; // cl
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  data::MonsterType MonsterType; // r14d
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rdx
  uint32_t uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  char v30; // cl
  std::vector<std::shared_ptr<Event>> *event_ptr_vec; // r14
  std::shared_ptr<Event> *v32; // rax
  std::shared_ptr<Event> *v33; // rdx
  ForeachPolicy result; // eax
  std::string v35; // [rsp+10h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 monster_ptr:421 64 16 11 evt_ptr:424";
  *(_QWORD *)(v2 + 16) = GroupLuaTestStub::buildSpecificMonsterHpChange(std::shared_ptr<Group>)::{lambda(Entity &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v5 = (unsigned int (__fastcall **)(Entity *))(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity->_vptr_DescribalBase + 3);
  if ( (*v5)(entity) == 2 )
  {
    toPtr<Monster,Entity>((Entity *)(v2 + 32));
    if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 32), 0LL) )
    {
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigId = Entity::getConfigId((const Entity *const)v6);
      std::to_string(&v35, ConfigId);
      v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9 = &v35;
      std::string::operator=(&v8->source_name, &v35);
      std::string::~string(&v35);
      v10 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v10);
      v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->source_entity_id >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)((((_BYTE)v12 + 4) & 7) + 3) >= v13 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(&v12->source_entity_id, v9, v12);
      }
      v12->source_entity_id = EntityId;
      v14 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v15 = Entity::getConfigId((const Entity *const)v14);
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = *(_BYTE *)(((unsigned __int64)&v16->param1 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((((_BYTE)v16 + 44) & 7) + 3) >= v17 )
      {
        LOBYTE(v9) = v17 != 0;
        __asan_report_store4(&v16->param1, v9, v16);
      }
      v16->param1 = v15;
      v18 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v19 = *(_BYTE *)(((unsigned __int64)(v18 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v19 != 0;
      v20 = (v19 != 0) & (unsigned __int8)(v19 <= 3);
      if ( (_BYTE)v20 )
        v18 = __asan_report_store4(v18 + 48, v9, v20);
      *(_DWORD *)(v18 + 48) = 100;
      v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v22 = *(_BYTE *)(((unsigned __int64)&v21->param3 >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)((((_BYTE)v21 + 52) & 7) + 3) >= v22 )
      {
        LOBYTE(v9) = v22 != 0;
        __asan_report_store4(&v21->param3, v9, v21);
      }
      v21->param3 = 100;
      v23 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      MonsterType = Monster::getMonsterType(v23);
      v25 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v26 = *(_BYTE *)(((unsigned __int64)(v25 + 56) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v26 != 0;
      v27 = (v26 != 0) & (unsigned __int8)(v26 <= 3);
      if ( (_BYTE)v27 )
        v25 = __asan_report_store4(v25 + 56, v9, v27);
      *(_DWORD *)(v25 + 56) = MonsterType;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__uid);
      }
      uid = __closure->__uid;
      v29 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v30 = *(_BYTE *)(((unsigned __int64)&v29->uid >> 3) + 0x7FFF8000);
      if ( v30 != 0 && (char)((((_BYTE)v29 + 60) & 7) + 3) >= v30 )
      {
        LOBYTE(v9) = v30 != 0;
        __asan_report_store4(&v29->uid, v9, v29);
      }
      v29->uid = uid;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      event_ptr_vec = __closure->__event_ptr_vec;
      v32 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 64));
      std::vector<std::shared_ptr<Event>>::emplace_back<std::shared_ptr<Event>>(event_ptr_vec, v32, v33);
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v36 == (char *)v2 )
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
