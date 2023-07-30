// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/group/group.script.hpp

// Line 31: range 0000000014870696-000000001487276D
int32_t __cdecl Group::internalHandleEvent(Group *const this, Event *evt)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::string *v9; // rax
  std::_Rb_tree_const_iterator<std::string >::reference v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int v23; // r14d
  Player *v24; // rax
  PlayerSceneComp *SceneComp; // rax
  Player *v26; // rax
  PlayerSceneComp *v27; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  uint32_t trigger_count; // ecx
  char v42; // al
  ScriptContext *M_cur; // r14
  LuaScript *v44; // rax
  const boost::reference_wrapper<Event> *v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  uint32_t GroupId; // eax
  Player *v50; // r14
  std::string *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  ScriptContext *v58; // r14
  LuaScript *v59; // rax
  const boost::reference_wrapper<Event> *v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r14
  uint32_t v64; // eax
  Player *v65; // r14
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // r14
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // r14
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // r14
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r14
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  ChallengeComp *ChallengeComp; // rax
  std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rax
  uint32_t group_id; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // rax
  uint32_t SceneId; // eax
  uint32_t v99; // ecx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rdx
  common::milog::MiLogStream *v102; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v103; // rax
  unsigned int *v104; // rax
  unsigned int *v105; // r8
  unsigned int *v106; // r9
  Player *v107; // rax
  PlayerEventComp *EventComp; // r14
  const std::string *func_namea; // [rsp+8h] [rbp-5D8h]
  const std::string *func_nameb; // [rsp+8h] [rbp-5D8h]
  SceneExcelConfigMgr *func_name; // [rsp+8h] [rbp-5D8h]
  unsigned int val; // [rsp+20h] [rbp-5C0h] BYREF
  unsigned int SceneOwnerId; // [rsp+24h] [rbp-5BCh] BYREF
  boost::reference_wrapper<Event> v115; // [rsp+28h] [rbp-5B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false> __y; // [rsp+30h] [rbp-5B0h] BYREF
  std::set<std::string> *trigger_set; // [rsp+38h] [rbp-5A8h]
  std::vector<std::string> *__for_range; // [rsp+40h] [rbp-5A0h]
  const std::string *trigger_name; // [rsp+48h] [rbp-598h]
  const TriggerScriptConfig *trigger_script_config_ptr_0; // [rsp+50h] [rbp-590h]
  const TriggerScriptConfig *trigger_script_config_ptr; // [rsp+58h] [rbp-588h]
  Event *v122; // [rsp+60h] [rbp-580h]
  Event *o; // [rsp+68h] [rbp-578h]
  ScriptContext *v124; // [rsp+70h] [rbp-570h]
  Event *v125; // [rsp+78h] [rbp-568h]
  Event *v126; // [rsp+80h] [rbp-560h]
  ScriptContext *v127; // [rsp+88h] [rbp-558h]
  common::milog::MiLogStream v128; // [rsp+90h] [rbp-550h] BYREF
  common::milog::MiLogStream v129; // [rsp+B0h] [rbp-530h] BYREF
  char v130[1296]; // [rsp+D0h] [rbp-510h] BYREF

  v2 = (unsigned __int64)v130;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 1 18 condition_meet:106 48 4 7 ret:130 64 4 14 trigger_id:177 80 8 5 it:32 112 8 5 it:59 1"
                        "44 8 9 it_tmp:62 176 16 12 scene_ptr:38 208 16 13 script_ptr:44 240 16 9 timer:131 272 16 15 tri"
                        "gger_ptr:141 304 16 14 avatar_ptr:180 336 16 14 player_ptr:183 368 16 13 event_ptr:189 400 16 13"
                        " player_ptr:77 432 24 22 matched_trigger_vec:51 496 32 15 trigger_name:61 560 160 10 context:52 "
                        "784 392 6 ss:154";
  *(_QWORD *)(v2 + 16) = Group::internalHandleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = 62194;
  v4[536862730] = 62194;
  v4[536862731] = 62194;
  v4[536862732] = 62194;
  v4[536862733] = 62194;
  v4[536862734] = -218959360;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = -218959118;
  v4[536862744] = 62194;
  v4[536862756] = -218103808;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  *(std::unordered_map<data::EventType,std::set<std::string>>::iterator *)(v2 + 80) = std::unordered_map<data::EventType,std::set<std::string>>::find(
                                                                                        &this->event_map_,
                                                                                        &evt->event_type);
  __y._M_cur = std::unordered_map<data::EventType,std::set<std::string>>::end(&this->event_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<data::EventType const,std::set<std::string>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false> *)(v2 + 80),
         &__y) )
  {
    v5 = 0;
    goto LABEL_108;
  }
  trigger_set = &std::__detail::_Node_iterator<std::pair<data::EventType const,std::set<std::string>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::EventType,std::set<std::string> >,false,false> *const)(v2 + 80))->second;
  if ( std::set<std::string>::empty(trigger_set) )
  {
    v5 = 0;
    goto LABEL_108;
  }
  Group::getScene((const Group *const)(v2 + 176));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 176), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v129,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/group.script.hpp",
      "internalHandleEvent",
      41);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v129,
           (const char (*)[26])"getScene fails, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->group_id_);
    common::milog::MiLogStream::~MiLogStream(&v129);
    v5 = -1;
    goto LABEL_107;
  }
  Group::getScript((const Group *const)(v2 + 208));
  if ( std::operator==<LuaScript>((const std::shared_ptr<LuaScript> *)(v2 + 208), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v129,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/group.script.hpp",
      "internalHandleEvent",
      47);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v129,
           (const char (*)[28])"findScript fails, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->group_id_);
    common::milog::MiLogStream::~MiLogStream(&v129);
    v5 = -1;
    goto LABEL_106;
  }
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 432));
  ScriptContext::ScriptContext((ScriptContext *const)(v2 + 560));
  std::shared_ptr<Scene>::shared_ptr(
    (std::shared_ptr<Scene> *const)(v2 + 400),
    (const std::shared_ptr<Scene> *)(v2 + 176));
  ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v2 + 560), (ScenePtr *)(v2 + 400));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 400));
  toThisPtr<Group>((Group *)(v2 + 368));
  std::weak_ptr<Group>::operator=<Group>(
    (std::weak_ptr<Group> *const)(v2 + 576),
    (const std::shared_ptr<Group> *)(v2 + 368));
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 368));
  if ( *(_BYTE *)(((unsigned __int64)&evt->source_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)evt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&evt->source_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 640) = evt->source_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&evt->target_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&evt->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 644) = evt->target_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&evt->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)evt + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&evt->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 648) = evt->uid;
  v8 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
  v9 = LuaScript::getFilePath[abi:cxx11](v8);
  std::string::operator=(v2 + 656, v9);
  *(std::set<std::string>::iterator *)(v2 + 112) = std::set<std::string>::begin(trigger_set);
  while ( 1 )
  {
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false>::__node_type *)std::set<std::string>::end(trigger_set)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 112),
            (const std::_Rb_tree_const_iterator<std::string >::_Self *)&__y) )
      break;
    v10 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 112));
    std::string::basic_string(v2 + 496, v10);
    *(std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 144) = std::_Rb_tree_const_iterator<std::string>::operator++(
                                                                         (std::_Rb_tree_const_iterator<std::string > *const)(v2 + 112),
                                                                         0);
    trigger_script_config_ptr = Group::findTriggerConfig(this, (const std::string *)(v2 + 496));
    if ( !trigger_script_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v129,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/group/group.script.hpp",
        "internalHandleEvent",
        66);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v129,
              (const char (*)[39])"findTriggerConfig fails, trigger_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v2 + 496));
      common::milog::MiLogStream::~MiLogStream(&v129);
      std::set<std::string>::erase[abi:cxx11](trigger_set, *(std::set<std::string>::const_iterator *)(v2 + 144));
      goto LABEL_72;
    }
    if ( *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->is_enabled_in_mp_mode >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)trigger_script_config_ptr - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->is_enabled_in_mp_mode >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&trigger_script_config_ptr->is_enabled_in_mp_mode);
    }
    if ( trigger_script_config_ptr->is_enabled_in_mp_mode )
      goto LABEL_31;
    v12 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12 + 392LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v13)(v12) )
      v14 = 1;
    else
LABEL_31:
      v14 = 0;
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v129,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/group.script.hpp",
        "internalHandleEvent",
        72);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v129, (const char (*)[9])"trigger:");
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v2 + 496));
      v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])off_254DDFE0);
      v18 = operator<<(v17, this);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v18, (const char (*)[25])off_254DE020);
      common::milog::MiLogStream::~MiLogStream(&v129);
      goto LABEL_72;
    }
    if ( *(char *)(((unsigned __int64)&trigger_script_config_ptr->is_forbid_guest >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&trigger_script_config_ptr->is_forbid_guest);
    if ( !trigger_script_config_ptr->is_forbid_guest )
      goto LABEL_114;
    v19 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&evt->uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)evt + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&evt->uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 400), v19);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 400), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v129,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/group/group.script.hpp",
        "internalHandleEvent",
        80);
      v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v129,
              (const char (*)[26])"findPlayer fail, evt.uid:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &evt->uid);
      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
      common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v21, v22);
      common::milog::MiLogStream::~MiLogStream(&v129);
      v23 = 0;
    }
    else
    {
      v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 400));
      SceneComp = Player::getSceneComp(v24);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp)
        && (v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 400)),
            v27 = Player::getSceneComp(v26),
            !PlayerSceneComp::isInMyHomeWorld(v27)) )
      {
        common::milog::MiLogStream::create(
          &v129,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/group/group.script.hpp",
          "internalHandleEvent",
          85);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                &v129,
                (const char (*)[14])"skip trigger:");
        v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)(v2 + 496));
        v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" group:");
        v32 = operator<<(v31, this);
        v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])" evt.uid:");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &evt->uid);
        v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v34, v35);
        common::milog::MiLogStream::~MiLogStream(&v129);
        v23 = 0;
      }
      else
      {
        v23 = 1;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 400));
    if ( v23 == 1 )
    {
LABEL_114:
      if ( !Group::isTriggerEventMatch(this, (const std::string *)(v2 + 496), evt) )
      {
        common::milog::MiLogStream::create(
          &v129,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/group/group.script.hpp",
          "internalHandleEvent",
          91);
        v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v129, (const char (*)[10])" trigger:");
        v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, (const std::string *)(v2 + 496));
        v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v37,
                (const char (*)[17])" evt not match, ");
        operator<<(v38, this);
        common::milog::MiLogStream::~MiLogStream(&v129);
        goto LABEL_72;
      }
      Group::findTrigger((Group *const)(v2 + 368), (const std::string *)this);
      if ( std::operator==<Trigger>((const std::shared_ptr<Trigger> *)(v2 + 368), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v129,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/group/group.script.hpp",
          "internalHandleEvent",
          97);
        v39 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v129,
                (const char (*)[33])"findTrigger fails, trigger_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v2 + 496));
        common::milog::MiLogStream::~MiLogStream(&v129);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->max_trigger_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->max_trigger_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( !trigger_script_config_ptr->max_trigger_count )
          goto LABEL_62;
        v40 = std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 368));
        if ( *(_BYTE *)(((unsigned __int64)&v40->trigger_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v40 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->trigger_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        trigger_count = v40->trigger_count;
        if ( *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->max_trigger_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->max_trigger_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( trigger_count >= trigger_script_config_ptr->max_trigger_count )
          v42 = 1;
        else
LABEL_62:
          v42 = 0;
        if ( v42 )
          goto LABEL_71;
        std::weak_ptr<Trigger>::operator=<Trigger>(
          (std::weak_ptr<Trigger> *const)(v2 + 592),
          (const std::shared_ptr<Trigger> *)(v2 + 368));
        if ( (unsigned __int8)std::string::empty(&trigger_script_config_ptr->condition) == 1 )
          goto LABEL_70;
        *(_BYTE *)(v2 + 32) = 0;
        v122 = evt;
        o = evt;
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false>::__node_type *)boost::addressof<Event>(evt);
        v115.t_ = (Event *)__y._M_cur;
        v124 = (ScriptContext *)(v2 + 560);
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false>::__node_type *)boost::addressof<ScriptContext>((ScriptContext *)(v2 + 560));
        M_cur = (ScriptContext *)__y._M_cur;
        func_namea = &trigger_script_config_ptr->condition;
        v44 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
        if ( ScriptLib::executeFuncWithErrorNotify<bool,boost::reference_wrapper<Event> const>(
               v44,
               func_namea,
               (bool *)(v2 + 32),
               M_cur,
               &v115,
               v45) )
        {
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 784);
          v46 = std::operator<<<std::char_traits<char>>(v2 + 800, "executeFunc ");
          v47 = std::operator<<<char>(v46, &trigger_script_config_ptr->condition);
          v48 = std::operator<<<std::char_traits<char>>(v47, " failed, group_id:");
          GroupId = Group::getGroupId(this);
          std::ostream::operator<<(v48, GroupId);
          common::milog::MiLogStream::create(
            &v128,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/group/group.script.hpp",
            "internalHandleEvent",
            111);
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v129, v2 + 784);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v128, (const std::string *)&v129);
          std::string::~string(&v129);
          common::milog::MiLogStream::~MiLogStream(&v128);
          Group::getOwnerPlayer((const Group *const)(v2 + 400));
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 400), 0LL) )
          {
            v50 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 400));
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v129, v2 + 784);
            Player::notifyGMServerLog(v50, SERVER_LOG_LUA, LOG_LEVEL_WARNING_0, (const std::string *)&v129);
            std::string::~string(&v129);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 400));
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 784);
          goto LABEL_71;
        }
        if ( *(_BYTE *)(v2 + 32) == 1 )
        {
LABEL_70:
          v51 = std::move<std::string &>((std::string *)(v2 + 496));
          std::vector<std::string>::emplace_back<std::string>((std::vector<std::string> *const)(v2 + 432), v51, v51);
        }
      }
LABEL_71:
      std::shared_ptr<Trigger>::~shared_ptr((std::shared_ptr<Trigger> *const)(v2 + 368));
    }
LABEL_72:
    std::string::~string((void *)(v2 + 496));
  }
  *(_DWORD *)(v2 + 48) = 0;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 240));
  __for_range = (std::vector<std::string> *)(v2 + 432);
  *(std::vector<std::string>::iterator *)(v2 + 112) = std::vector<std::string>::begin((std::vector<std::string> *const)(v2 + 432));
  *(std::vector<std::string>::iterator *)(v2 + 144) = std::vector<std::string>::end(__for_range);
  while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 112),
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 144)) )
  {
    trigger_name = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 112));
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 240));
    trigger_script_config_ptr_0 = Group::findTriggerConfig(this, trigger_name);
    if ( !trigger_script_config_ptr_0 )
    {
      common::milog::MiLogStream::create(
        &v129,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/group.script.hpp",
        "internalHandleEvent",
        138);
      v52 = common::milog::MiLogStream::operator<<<Group,(Group*)0>(&v129, this);
      v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v52, (const char (*)[10])" trigger:");
      v54 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, trigger_name);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v54, (const char (*)[18])" config not found");
      common::milog::MiLogStream::~MiLogStream(&v129);
      goto LABEL_104;
    }
    Group::findTrigger((Group *const)(v2 + 272), (const std::string *)this);
    if ( std::operator==<Trigger>((const std::shared_ptr<Trigger> *)(v2 + 272), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v129,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/group.script.hpp",
        "internalHandleEvent",
        144);
      v55 = common::milog::MiLogStream::operator<<<Group,(Group*)0>(&v129, this);
      v56 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v55, (const char (*)[10])" trigger:");
      v57 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, trigger_name);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v57, (const char (*)[11])" not found");
      common::milog::MiLogStream::~MiLogStream(&v129);
    }
    else
    {
      std::weak_ptr<Trigger>::operator=<Trigger>(
        (std::weak_ptr<Trigger> *const)(v2 + 592),
        (const std::shared_ptr<Trigger> *)(v2 + 272));
      if ( (unsigned __int8)std::string::empty(&trigger_script_config_ptr_0->action) == 1 )
        goto LABEL_86;
      v125 = evt;
      v126 = evt;
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false>::__node_type *)boost::addressof<Event>(evt);
      v115.t_ = (Event *)__y._M_cur;
      v127 = (ScriptContext *)(v2 + 560);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::EventType,std::set<std::string> >,false>::__node_type *)boost::addressof<ScriptContext>((ScriptContext *)(v2 + 560));
      v58 = (ScriptContext *)__y._M_cur;
      func_nameb = &trigger_script_config_ptr_0->action;
      v59 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
      if ( !ScriptLib::executeFuncWithErrorNotify<int,boost::reference_wrapper<Event> const>(
              v59,
              func_nameb,
              (int *)(v2 + 48),
              v58,
              &v115,
              v60) )
      {
        common::milog::MiLogStream::create(
          &v129,
          &common::milog::MiLogDefault::default_log_obj_,
          0xFu,
          "./src/group/group.script.hpp",
          "internalHandleEvent",
          166);
        v66 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v129, (const char (*)[2])"|");
        v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v66,
                (const unsigned int *)(v2 + 648));
        v68 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v67, (const char (*)[2])"|");
        val = ScriptContext::getGroupId((const ScriptContext *const)(v2 + 560));
        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &val);
        v70 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v69, (const char (*)[2])"|");
        SceneOwnerId = ScriptContext::getSceneOwnerId((const ScriptContext *const)(v2 + 560));
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &SceneOwnerId);
        v72 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v71, (const char (*)[2])"|");
        v73 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                v72,
                (const char (*)[48])"[TRIGGER] group trigger is triggered! group_id:");
        v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &this->group_id_);
        v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v74,
                (const char (*)[16])", trigger_name:");
        v76 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v75, trigger_name);
        v77 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v76,
                (const char (*)[17])", trigger_count:");
        v78 = std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 272));
        v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &v78->trigger_count);
        v80 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v79, (const char (*)[7])" cost:");
        *(_DWORD *)(v2 + 64) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 240));
        v81 = common::milog::MiLogStream::operator<<<int,(int *)0>(v80, (const int *)(v2 + 64));
        v82 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v81, (const char (*)[9])"us [uid:");
        v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, &evt->uid);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v83, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream(&v129);
        if ( *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v129,
            &common::milog::MiLogDefault::default_log_obj_,
            0x10u,
            "./src/group/group.script.hpp",
            "internalHandleEvent",
            169);
          v84 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(&v129, (const char (*)[2])"|");
          v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v84,
                  (const unsigned int *)(v2 + 648));
          v86 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v85, (const char (*)[2])"|");
          SceneOwnerId = ScriptContext::getGroupId((const ScriptContext *const)(v2 + 560));
          v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &SceneOwnerId);
          v88 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v87, (const char (*)[2])"|");
          *(_DWORD *)(v2 + 64) = ScriptContext::getSceneOwnerId((const ScriptContext *const)(v2 + 560));
          v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v88,
                  (const unsigned int *)(v2 + 64));
          v90 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v89, (const char (*)[2])"|");
          v91 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v90, (const char (*)[8])off_254DE520);
          v92 = common::milog::MiLogStream::operator<<<int,(int *)0>(v91, (const int *)(v2 + 48));
          v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v92,
                  (const char (*)[16])", trigger_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v93, trigger_name);
          common::milog::MiLogStream::~MiLogStream(&v129);
        }
LABEL_86:
        ChallengeComp = Group::getChallengeComp(this);
        ChallengeComp::onTriggerFired(
          ChallengeComp,
          &trigger_script_config_ptr_0->event_vec,
          &trigger_script_config_ptr_0->tag);
        v95 = std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 272));
        if ( *(_BYTE *)(((unsigned __int64)&v95->trigger_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v95 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v95->trigger_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++v95->trigger_count;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 400));
        func_name = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 400))->design_config.txt_config_mgr.scene_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        group_id = this->group_id_;
        v97 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
        SceneId = Scene::getSceneId(v97);
        *(_DWORD *)(v2 + 64) = SceneExcelConfigMgr::findSceneTriggerId(func_name, SceneId, group_id, trigger_name);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 400));
        if ( *(_DWORD *)(v2 + 64) )
        {
          v99 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
          if ( *(_BYTE *)(((unsigned __int64)&evt->target_entity_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&evt->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          Scene::findEntity<Avatar>((const Scene *const)(v2 + 304), v99);
          if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 304), 0LL) )
          {
            v100 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 304));
            if ( *(_BYTE *)((v100 >> 3) + 0x7FFF8000) )
              v100 = __asan_report_load8();
            v101 = *(_QWORD *)v100 + 152LL;
            if ( *(_BYTE *)((v101 >> 3) + 0x7FFF8000) )
              v100 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v101)(v2 + 336, v100);
            if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 336), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v129,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/group/group.script.hpp",
                "internalHandleEvent",
                186);
              v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       &v129,
                       (const char (*)[16])"getPlayer fails");
              v103 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 304));
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v102, v103);
              common::milog::MiLogStream::~MiLogStream(&v129);
            }
            else
            {
              v104 = (unsigned int *)std::move<std::string const&>(trigger_name);
              common::tools::perf::make_shared<TriggerFireEvent,std::string const,unsigned int &,unsigned int &>(
                (const std::string *)(v2 + 400),
                v104,
                (unsigned int *)(v2 + 64),
                (const std::string *)&this->group_id_,
                v105,
                v106);
              std::shared_ptr<BaseEvent>::shared_ptr<TriggerFireEvent,void>(
                (std::shared_ptr<BaseEvent> *const)(v2 + 368),
                (std::shared_ptr<TriggerFireEvent> *)(v2 + 400));
              std::shared_ptr<TriggerFireEvent>::~shared_ptr((std::shared_ptr<TriggerFireEvent> *const)(v2 + 400));
              v107 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
              EventComp = Player::getEventComp(v107);
              std::shared_ptr<BaseEvent>::shared_ptr(
                (std::shared_ptr<BaseEvent> *const)(v2 + 400),
                (const std::shared_ptr<BaseEvent> *)(v2 + 368));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 400));
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 400));
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 368));
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 336));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 304));
        }
        goto LABEL_103;
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 784);
      v61 = std::operator<<<std::char_traits<char>>(v2 + 800, "executeFunc ");
      v62 = std::operator<<<char>(v61, &trigger_script_config_ptr_0->action);
      v63 = std::operator<<<std::char_traits<char>>(v62, " failed, group_id:");
      v64 = Group::getGroupId(this);
      std::ostream::operator<<(v63, v64);
      common::milog::MiLogStream::create(
        &v128,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/group/group.script.hpp",
        "internalHandleEvent",
        156);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v129, v2 + 784);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v128, (const std::string *)&v129);
      std::string::~string(&v129);
      common::milog::MiLogStream::~MiLogStream(&v128);
      Group::getOwnerPlayer((const Group *const)(v2 + 400));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 400), 0LL) )
      {
        v65 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 400));
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v129, v2 + 784);
        Player::notifyGMServerLog(v65, SERVER_LOG_LUA, LOG_LEVEL_WARNING_0, (const std::string *)&v129);
        std::string::~string(&v129);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 400));
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 784);
    }
LABEL_103:
    std::shared_ptr<Trigger>::~shared_ptr((std::shared_ptr<Trigger> *const)(v2 + 272));
LABEL_104:
    __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 112));
  }
  v5 = 0;
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 240));
  ScriptContext::~ScriptContext((ScriptContext *const)(v2 + 560));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 432));
LABEL_106:
  std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 208));
LABEL_107:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 176));
LABEL_108:
  if ( v130 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v130);
  }
  return v5;
};
