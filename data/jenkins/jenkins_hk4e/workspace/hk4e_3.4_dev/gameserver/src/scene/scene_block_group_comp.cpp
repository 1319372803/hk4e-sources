// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_block_group_comp.cpp

// Line 35: range 00000000159AEAA2-00000000159AEE0E
void __cdecl SceneBlockGroupComp::SceneBlockGroupComp(SceneBlockGroupComp *const this, Scene *scene)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  SceneCompBase::SceneCompBase((SceneCompBase *const)this, scene);
  v2 = (int (**)(...))(&`vtable for'SceneBlockGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneCompBase = v2;
  v3 = ((_BYTE)this + 17) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_need_reload_group_, v3, v4);
  this->is_need_reload_group_ = 0;
  v5 = ((_BYTE)this + 18) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_init_, v5, v6);
  this->is_init_ = 0;
  v7 = ((_BYTE)this + 19) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_scene_group_all_dead_, v7, v8);
  this->is_scene_group_all_dead_ = 0;
  std::map<unsigned int,Vector3>::map(&this->last_reload_pos_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::unordered_map(&this->group_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->dead_group_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_load_version_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::unordered_map(&this->pattern_group_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pattern_group_id_, v7, (_BYTE)this + 40);
  }
  this->pattern_group_id_ = 0;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->quest_pattern_2_group_map_);
  if ( *(_WORD *)(((unsigned __int64)&this->replacement_mgr_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->replacement_mgr_ptr_, v7);
  common::tools::perf::make_shared<GroupsReplacementMgr,SceneBlockGroupComp &>(
    (SceneBlockGroupComp *)&this->replacement_mgr_ptr_,
    this);
  std::unordered_map<unsigned int,int>::unordered_map(&this->loading_group_map_);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_, this, &this->is_started_);
  this->is_started_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->find_group_count_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unregister_cleared_group_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_unload_group_num_, this, (_BYTE)this + 40);
  }
  this->need_unload_group_num_ = 0;
  std::unordered_map<unsigned int,GroupOverrideParam>::unordered_map(&this->group_override_param_map_);
  std::unordered_map<unsigned int,bool>::unordered_map(&this->gm_random_selected_dynamic_group_map_);
};

// Line 43: range 00000000159AEE10-00000000159AF201
void __cdecl SceneBlockGroupComp::SceneBlockGroupComp(
        SceneBlockGroupComp *const this,
        Scene *scene,
        bool is_has_replacement)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  std::shared_ptr<GroupsReplacementMgr> __r; // [rsp+20h] [rbp-20h] BYREF

  SceneCompBase::SceneCompBase((SceneCompBase *const)this, scene);
  v3 = (int (**)(...))(&`vtable for'SceneBlockGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneCompBase = v3;
  v4 = ((_BYTE)this + 17) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_need_reload_group_, v4, v5);
  this->is_need_reload_group_ = 0;
  v6 = ((_BYTE)this + 18) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_init_, v6, v7);
  this->is_init_ = 0;
  v8 = ((_BYTE)this + 19) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_scene_group_all_dead_, v8, v9);
  this->is_scene_group_all_dead_ = 0;
  std::map<unsigned int,Vector3>::map(&this->last_reload_pos_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::unordered_map(&this->group_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->dead_group_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_load_version_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::unordered_map(&this->pattern_group_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pattern_group_id_, v8, (_BYTE)this + 40);
  }
  this->pattern_group_id_ = 0;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->quest_pattern_2_group_map_);
  std::shared_ptr<GroupsReplacementMgr>::shared_ptr(&this->replacement_mgr_ptr_);
  std::unordered_map<unsigned int,int>::unordered_map(&this->loading_group_map_);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_, v8, &this->is_started_);
  this->is_started_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->find_group_count_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unregister_cleared_group_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_unload_group_num_, v8, (_BYTE)this + 40);
  }
  this->need_unload_group_num_ = 0;
  std::unordered_map<unsigned int,GroupOverrideParam>::unordered_map(&this->group_override_param_map_);
  std::unordered_map<unsigned int,bool>::unordered_map(&this->gm_random_selected_dynamic_group_map_);
  if ( is_has_replacement )
  {
    common::tools::perf::make_shared<GroupsReplacementMgr,SceneBlockGroupComp &>((SceneBlockGroupComp *)&__r, this);
    std::shared_ptr<GroupsReplacementMgr>::operator=(&this->replacement_mgr_ptr_, &__r);
    std::shared_ptr<GroupsReplacementMgr>::~shared_ptr(&__r);
  }
};

// Line 54: range 00000000159AF202-00000000159AF4B0
int32_t __cdecl SceneBlockGroupComp::fromBin(SceneBlockGroupComp *const this, const proto::SceneBin *scene_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Scene *Scene; // rax
  int32_t v6; // r14d
  void *p_x; // rsi
  int v8; // eax
  bool is_scene_group_all_dead; // cl
  char v10; // dl
  __int64 v11; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::value_type __x; // [rsp+18h] [rbp-A8h] BYREF
  int idx; // [rsp+1Ch] [rbp-A4h]
  const proto::SceneBlockGroupCompBin *block_group_comp_bin; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 scene_ptr:63";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  if ( Scene::getScriptConfig(Scene) )
  {
    block_group_comp_bin = proto::SceneBin::block_group_bin(scene_bin);
    p_x = &SceneCompBase::getScene((SceneCompBase *const)this)->std::enable_shared_from_this<Scene>;
    std::enable_shared_from_this<Scene>::shared_from_this((std::enable_shared_from_this<Scene> *const)(v2 + 32));
    std::unordered_set<unsigned int>::clear(&this->dead_group_set_);
    for ( idx = 0; ; ++idx )
    {
      v8 = proto::SceneBlockGroupCompBin::dead_group_list_size(block_group_comp_bin);
      if ( idx >= v8 )
        break;
      __x = proto::SceneBlockGroupCompBin::dead_group_list(block_group_comp_bin, idx);
      p_x = &__x;
      std::unordered_set<unsigned int>::insert(&this->dead_group_set_, &__x);
    }
    is_scene_group_all_dead = proto::SceneBlockGroupCompBin::is_scene_group_all_dead(block_group_comp_bin);
    v10 = *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000);
    LOBYTE(p_x) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 19) & 7) >= v10);
    if ( (_BYTE)v11 )
      __asan_report_store1(&this->is_scene_group_all_dead_, p_x, v11);
    this->is_scene_group_all_dead_ = is_scene_group_all_dead;
    v6 = 0;
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "fromBin",
      58);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v17,
      (const char (*)[28])"Scene.getScriptConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  result = v6;
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

// Line 75: range 00000000159AF4B2-00000000159AF5D9
int32_t __cdecl SceneBlockGroupComp::toBin(const SceneBlockGroupComp *const this, proto::SceneBin *scene_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::SceneBlockGroupCompBin *block_group_comp_bin; // [rsp+30h] [rbp-10h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  block_group_comp_bin = proto::SceneBin::mutable_block_group_bin(scene_bin);
  __for_range = &this->dead_group_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->dead_group_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->dead_group_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::SceneBlockGroupCompBin::add_dead_group_list(block_group_comp_bin, *v3);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_scene_group_all_dead_);
  }
  proto::SceneBlockGroupCompBin::set_is_scene_group_all_dead(block_group_comp_bin, this->is_scene_group_all_dead_);
  return 0;
};

// Line 87: range 00000000159AF5DA-00000000159AFE95
int32_t __cdecl SceneBlockGroupComp::start(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<unsigned int>::size_type v4; // rax
  Scene *Scene; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v8; // rax
  Group *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  Scene *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+28h] [rbp-158h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-150h]
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range_1; // [rsp+38h] [rbp-148h]
  const std::pair<unsigned int const,std::shared_ptr<Group> > *v42; // [rsp+40h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *_; // [rsp+48h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr_0; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,std::shared_ptr<Group> > *v45; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v48; // [rsp+70h] [rbp-110h] BYREF
  char v49[240]; // [rsp+90h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 12 owner_uid:96 48 4 11 group_id:97 64 8 7 iter:99 96 16 13 group_ptr:102 128 24 18 start_group_vec:89";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
  v4 = std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_);
  std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v1 + 128), v4);
  __for_range = &this->group_map_;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_);
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 64),
            &__for_end) )
  {
    v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 64));
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(v45);
    group_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Group>>(v45);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 128), group_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 64));
  }
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v1 + 32) = Scene::getOwnerUid(Scene);
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 128);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 128))._M_current;
  __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end_0) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v1 + 48) = *v7;
    *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                        &this->group_map_,
                                                                                        (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v1 + 48));
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 64),
           &__for_end) )
    {
      v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 64));
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v1 + 96), &v8->second);
      if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 96), 0LL) )
      {
        v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        Group::start(v9);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "start",
          109);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v48, (const char (*)[11])"owner_uid:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v1 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" findGroup:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" null");
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "start",
        114);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v48, (const char (*)[11])"owner_uid:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" findGroup:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "start",
    118);
  v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          &v48,
          (const char (*)[50])"[TRIGGER_DEBUG] block_comp want to start groups: ");
  v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, (const std::vector<unsigned int> *)(v1 + 128));
  v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" scene_id:");
  v21 = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v1 + 48) = Scene::getSceneId(v21);
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 48));
  v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" start size:");
  *(_QWORD *)(v1 + 64) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 128));
  v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v23,
          (const unsigned __int64 *)(v1 + 64));
  v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" group_map:");
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_);
  v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v25,
          (const unsigned __int64 *)&__for_end);
  v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" owner_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v48);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_, v1 + 32, &this->is_started_);
  this->is_started_ = 1;
  __for_range_1 = &this->group_map_;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_);
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 64),
            &__for_end) )
  {
    v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 64));
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(v42);
    group_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Group>>(v42);
    if ( std::operator!=<Group>(group_ptr_0, 0LL) )
    {
      v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr_0);
      if ( !Group::isStarted(v28) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_block_group_comp.cpp",
          "start",
          127);
        v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v48, (const char (*)[11])"owner_uid:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v1 + 32));
        v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])"group_id:");
        v33 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr_0);
        *(_DWORD *)(v1 + 48) = Group::getGroupId(v33);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])" not started");
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 64));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
  result = 0;
  if ( v49 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 135: range 00000000159AFE96-00000000159AFFE7
int32_t __cdecl SceneBlockGroupComp::init(SceneBlockGroupComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  Scene *Scene; // rax
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  v1 = ((_BYTE)this + 18) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_init_, v1, v2);
  this->is_init_ = 1;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  if ( Scene::getScriptConfig(Scene) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "init",
      143);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v5, (const char (*)[25])"[TRIGGER_DEBUG] on init ");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "init",
      140);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v5, (const char (*)[22])"getScriptConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
};

// Line 148: range 00000000159AFFE8-00000000159B0531
int32_t __cdecl SceneBlockGroupComp::initLoadGroup(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdx
  common::milog::MiLogStream *v14; // r14
  Scene *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  Scene *v18; // rax
  GroupsReplacementMgr *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  std::map<unsigned int,Vector3>::key_type __k; // [rsp+14h] [rbp-DCh] BYREF
  Scene *scene; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 12 7 pos:157 64 12 7 rot:157 96 16 14 player_ptr:150";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::initLoadGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219020288;
  v3[536862723] = -202178560;
  scene = SceneCompBase::getScene((SceneCompBase *const)this);
  Scene::getOwnPlayer((const Scene *const)(v1 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "initLoadGroup",
      153);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v24, (const char (*)[17])"player not exist");
    val = Scene::getSceneId(scene);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])", uid:");
    __k = Scene::getOwnerUid(scene);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &__k);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = -1;
  }
  else
  {
    Vector3::Vector3((Vector3 *const)(v1 + 32), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v1 + 64), 0.0, 0.0, 0.0);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    Uid = Player::getUid(v8);
    Scene::getPlayerLocation(scene, Uid, (Vector3 *)(v1 + 32), (Vector3 *)(v1 + 64));
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    __k = Player::getUid(v10);
    v11 = (unsigned __int64)std::map<unsigned int,Vector3>::operator[](&this->last_reload_pos_map_, &__k);
    if ( (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v11 + 11) & 7) >= *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) )
    {
      v11 = __asan_report_store_n(v11, 12LL);
    }
    *(_QWORD *)v11 = *(_QWORD *)(v1 + 32);
    *(_DWORD *)(v11 + 8) = *(_DWORD *)(v1 + 40);
    if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
    {
      v12 = ZTWN11ThreadLocal17is_in_work_threadE();
      v13 = (_BYTE *)v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v12);
      if ( *v13 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "initLoadGroup",
          167);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v24,
                (const char (*)[44])"player init load group in work thread, uid:");
        v15 = SceneCompBase::getScene((SceneCompBase *const)this);
        val = Scene::getOwnerUid(v15);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" scene_id:");
        v18 = SceneCompBase::getScene((SceneCompBase *const)this);
        __k = Scene::getSceneId(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &__k);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      v19 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
      v7 = GroupsReplacementMgr::doInsituReload(
             v19,
             LOAD_ONLY,
             "./src/scene/scene_block_group_comp.cpp",
             "initLoadGroup",
             170);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "initLoadGroup",
        173);
      common::milog::MiLogStream::operator()(&v24, "replacement_mgr_ptr_ nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v7 = -1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  result = v7;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 178: range 00000000159B0532-00000000159B0583
void __cdecl SceneBlockGroupComp::prePlayerLogin(SceneBlockGroupComp *const this, bool is_relogin)
{
  GroupsReplacementMgr *v2; // rax

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v2 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    GroupsReplacementMgr::prePlayerLogin(v2, is_relogin);
  }
};

// Line 186: range 00000000159B0584-00000000159B05C7
void __cdecl SceneBlockGroupComp::afterPlayerLogin(SceneBlockGroupComp *const this)
{
  GroupsReplacementMgr *v1; // rax

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v1 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    GroupsReplacementMgr::afterPlayerLogin(v1);
  }
};

// Line 195: range 00000000159B05C8-00000000159B08E7
SceneBlockGroupComp *__fastcall SceneBlockGroupComp::loadGroup(
        SceneBlockGroupComp *const this,
        SceneBlockGroupComp *group_id,
        GroupLoadParam load_param,
        __int64 need_start,
        bool a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rbx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v8; // rax
  uint32_t revise_level; // [rsp+1Ch] [rbp-124h]
  std::less<unsigned int> __comp; // [rsp+32h] [rbp-10Eh] BYREF
  std::allocator<std::pair<unsigned int const,GroupLoadParam> > __a; // [rsp+33h] [rbp-10Dh] BYREF
  int32_t ret; // [rsp+34h] [rbp-10Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+38h] [rbp-108h] BYREF
  std::pair<unsigned int const,GroupLoadParam> v17; // [rsp+44h] [rbp-FCh] BYREF
  char v18[240]; // [rsp+50h] [rbp-F0h] BYREF

  revise_level = load_param.revise_level;
  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 group_id:194 48 8 6 it:202 80 8 14 load_param:194 112 48 16 group_id_map:196";
  *(_QWORD *)(v5 + 16) = SceneBlockGroupComp::loadGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 32) = revise_level;
  *(_QWORD *)(v5 + 80) = need_start;
  std::pair<unsigned int const,GroupLoadParam>::pair<unsigned int &,GroupLoadParam&,true>(
    &v17,
    (unsigned int *)(v5 + 32),
    (GroupLoadParam *)(v5 + 80));
  std::allocator<std::pair<unsigned int const,GroupLoadParam>>::allocator(&__a);
  std::map<unsigned int,GroupLoadParam>::map(
    (std::map<unsigned int,GroupLoadParam> *const)(v5 + 112),
    (std::initializer_list<std::pair<unsigned int const,GroupLoadParam> >)__PAIR128__(1LL, &v17),
    &__comp,
    &__a);
  std::allocator<std::pair<unsigned int const,GroupLoadParam>>::~allocator(&__a);
  ret = SceneBlockGroupComp::loadGroupBatch(group_id, (const std::map<unsigned int,GroupLoadParam> *)(v5 + 112), a5);
  if ( ret
    || (*(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 48) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                            &group_id->group_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 32)),
        __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&group_id->group_map_)._M_cur,
        !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 48),
           &__y)) )
  {
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
  }
  else
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 48));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, &v8->second);
  }
  std::map<unsigned int,GroupLoadParam>::~map((std::map<unsigned int,GroupLoadParam> *const)(v5 + 112));
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 209: range 00000000159B08E8-00000000159B17B8
int32_t __cdecl SceneBlockGroupComp::loadGroupBatch(
        SceneBlockGroupComp *const this,
        const std::map<unsigned int,GroupLoadParam> *group_id_map,
        bool need_start)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // r14
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  uint64_t NowMs; // r14
  __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  GroupLoadContext *v16; // rax
  GroupLoadContext *v17; // rdx
  unsigned __int64 v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::minet::Packet *v21; // r14
  uint32_t OwnerUid; // eax
  unsigned __int64 v23; // rax
  __int64 (__fastcall *v24)(SceneBlockGroupComp *const, std::shared_ptr<common::minet::Packet> *, std::shared_ptr<Player> *); // r14
  common::milog::MiLogStream *v25; // rax
  char v26; // r14
  common::milog::MiLogStream *v27; // r14
  char v29; // [rsp+Bh] [rbp-605h]
  char v30; // [rsp+Bh] [rbp-605h]
  unsigned int val; // [rsp+28h] [rbp-5E8h] BYREF
  int32_t loading_cnt; // [rsp+2Ch] [rbp-5E4h]
  std::map<unsigned int,GroupLoadParam>::const_iterator __for_begin; // [rsp+30h] [rbp-5E0h] BYREF
  std::map<unsigned int,GroupLoadParam>::const_iterator __for_end; // [rsp+38h] [rbp-5D8h] BYREF
  const std::map<unsigned int,GroupLoadParam> *__for_range; // [rsp+40h] [rbp-5D0h]
  const std::pair<unsigned int const,GroupLoadParam> *v37; // [rsp+48h] [rbp-5C8h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLoadParam> >::type *group_id; // [rsp+50h] [rbp-5C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLoadParam> >::type *group_param; // [rsp+58h] [rbp-5B8h]
  std::shared_ptr<common::minet::Packet> v40; // [rsp+60h] [rbp-5B0h] BYREF
  std::shared_ptr<Player> __a; // [rsp+70h] [rbp-5A0h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-590h] BYREF
  char v43[1392]; // [rsp+A0h] [rbp-570h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 ret:266 64 16 15 context_ptr:217 96 16 14 packet_ptr:256 128 16 18 this_scene_ptr:265 1"
                        "60 24 7 req:259 224 992 7 ctx:232";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::loadGroupBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v6 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::isHomeScene(this->scene_) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)&__a);
  v6 = 1;
  if ( std::operator==<Player>(&__a, 0LL) )
    v29 = 1;
  else
LABEL_11:
    v29 = 0;
  if ( v6 )
    std::shared_ptr<Player>::~shared_ptr(&__a);
  if ( v29 )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "loadGroupBatch",
      212);
    v7 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v42,
           (const char (*)[68])"[ASYNC_LOAD] before async load. scene owner is not exist. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v8 = -1;
  }
  else
  {
    common::tools::perf::make_shared<GroupBatchLoadContext>();
    if ( std::operator==<GroupBatchLoadContext>((const std::shared_ptr<GroupBatchLoadContext> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "loadGroupBatch",
        220);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v42,
        (const char (*)[41])"[ASYNC_GROUP_LOAD] create context failed");
      common::milog::MiLogStream::~MiLogStream(&v42);
      v8 = -1;
    }
    else
    {
      NowMs = common::tools::TimeUtils::getNowMs();
      v10 = (__int64)std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_store8(v10 + 24, 0LL);
      *(_QWORD *)(v10 + 24) = NowMs;
      __for_range = group_id_map;
      __for_begin._M_node = std::map<unsigned int,GroupLoadParam>::begin(group_id_map)._M_node;
      __for_end._M_node = std::map<unsigned int,GroupLoadParam>::end(group_id_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GroupLoadParam>>::operator*(&__for_begin);
        group_id = std::get<0ul,unsigned int const,GroupLoadParam>(v37);
        group_param = (std::tuple_element<1,const std::pair<unsigned int const,GroupLoadParam> >::type *)std::get<1ul,unsigned int const,GroupLoadParam>(v37);
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<Group>>,unsigned int>(
               &this->group_map_,
               group_id) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "loadGroupBatch",
            229);
          v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v42,
                  (const char (*)[21])"group_map: group_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, group_id);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" loaded.");
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
        else
        {
          GroupLoadContext::GroupLoadContext((GroupLoadContext *const)(v3 + 224));
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          *(_DWORD *)(v3 + 224) = *group_id;
          if ( *(_BYTE *)(((unsigned __int64)group_param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_param >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(group_param);
          }
          *(_DWORD *)(v3 + 844) = group_param->revise_level;
          if ( *(_BYTE *)(((unsigned __int64)&group_param->revise_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)group_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_param->revise_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&group_param->revise_id);
          }
          *(_DWORD *)(v3 + 1136) = group_param->revise_id;
          if ( SceneBlockGroupComp::buildGroupLoadContext(this, (GroupLoadContext *)(v3 + 224)) )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "loadGroupBatch",
              238);
            v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v42,
                    (const char (*)[21])"group_map: group_id:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, group_id);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v14,
              (const char (*)[22])" build context failed");
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
          else
          {
            v15 = std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v16 = std::move<GroupLoadContext &>((GroupLoadContext *)(v3 + 224));
            std::vector<GroupLoadContext>::emplace_back<GroupLoadContext>(&v15->group_load_context_vec, v16, v17);
            v18 = (unsigned __int64)std::unordered_map<unsigned int,int>::operator[](
                                      &this->loading_group_map_,
                                      group_id);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
              && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            {
              v18 = __asan_report_load4(v18);
            }
            loading_cnt = ++*(_DWORD *)v18;
            if ( loading_cnt > 1 )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_block_group_comp.cpp",
                "loadGroupBatch",
                246);
              if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(group_id);
              }
              common::milog::MiLogStream::operator()(
                &v42,
                "Duplicate Loading Group[%u], cnt[%d]",
                *group_id,
                (unsigned int)loading_cnt);
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_block_group_comp.cpp",
              "loadGroupBatch",
              248);
            v19 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v42,
                    (const char (*)[47])"[ASYNC_GROUP_LOAD] try to async load group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, group_id);
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
          GroupLoadContext::~GroupLoadContext((GroupLoadContext *const)(v3 + 224));
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,GroupLoadParam>>::operator++(&__for_begin);
      }
      v20 = std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( std::vector<GroupLoadContext>::empty(&v20->group_load_context_vec) )
      {
        v8 = 0;
      }
      else
      {
        CoroutineHelper::getContextPacketPtr();
        if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 96), 0LL) )
        {
          proto::SysCreateGroupReq::SysCreateGroupReq((proto::SysCreateGroupReq *const)(v3 + 160));
          common::minet::PacketUtils::createPacket<proto::SysCreateGroupReq>((const proto::SysCreateGroupReq *)&__a);
          std::shared_ptr<common::minet::Packet>::operator=(
            (std::shared_ptr<common::minet::Packet> *const)(v3 + 96),
            (std::shared_ptr<common::minet::Packet> *)&__a);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__a);
          v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          OwnerUid = Scene::getOwnerUid(this->scene_);
          common::minet::Packet::setUserId(v21, OwnerUid);
          proto::SysCreateGroupReq::~SysCreateGroupReq((proto::SysCreateGroupReq *const)(v3 + 160));
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toThisPtr<Scene>((Scene *)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = (unsigned __int64)(this->_vptr_SceneCompBase + 38);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8();
        v24 = *(__int64 (__fastcall **)(SceneBlockGroupComp *const, std::shared_ptr<common::minet::Packet> *, std::shared_ptr<Player> *))v23;
        std::shared_ptr<GroupBatchLoadContext>::shared_ptr(
          (std::shared_ptr<GroupBatchLoadContext> *const)&__a,
          (const std::shared_ptr<GroupBatchLoadContext> *)(v3 + 64));
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v40,
          (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
        *(_DWORD *)(v3 + 48) = v24(this, &v40, &__a);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v40);
        std::shared_ptr<GroupBatchLoadContext>::~shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)&__a);
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "loadGroupBatch",
            269);
          v25 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v42,
                  (const char (*)[56])"[ASYNC_LOAD][ECS] AsyncLoadGroupBatch failed. task ret=");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v8 = *(_DWORD *)(v3 + 48);
        }
        else
        {
          v26 = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( Scene::isHomeScene(this->scene_) )
            goto LABEL_64;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::getOwnPlayer((const Scene *const)&__a);
          v26 = 1;
          if ( std::operator==<Player>(&__a, 0LL) )
            v30 = 1;
          else
LABEL_64:
            v30 = 0;
          if ( v26 )
            std::shared_ptr<Player>::~shared_ptr(&__a);
          if ( v30 )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/scene/scene_block_group_comp.cpp",
              "loadGroupBatch",
              274);
            v27 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                    &v42,
                    (const char (*)[72])"[ASYNC_LOAD][ECS] after async load. scene owner is not exist. scene_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Scene::getSceneId(this->scene_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
            common::milog::MiLogStream::~MiLogStream(&v42);
            v8 = -1;
          }
          else
          {
            std::shared_ptr<GroupBatchLoadContext>::shared_ptr(
              (std::shared_ptr<GroupBatchLoadContext> *const)&__a,
              (const std::shared_ptr<GroupBatchLoadContext> *)(v3 + 64));
            SceneBlockGroupComp::onLoadGroupBatchSucc(this, (std::shared_ptr<GroupBatchLoadContext> *)&__a, need_start);
            std::shared_ptr<GroupBatchLoadContext>::~shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)&__a);
            v8 = 0;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
      }
    }
    std::shared_ptr<GroupBatchLoadContext>::~shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)(v3 + 64));
  }
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v43);
  }
  return v8;
};

// Line 283: range 00000000159B17BA-00000000159B18C1
int32_t __cdecl SceneBlockGroupComp::internalLoadGroupBatch(
        SceneBlockGroupComp *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::shared_ptr<GroupBatchLoadContext> *p_context_ptr)
{
  const std::_Placeholder<2> *v3; // r8
  int32_t v4; // ebx
  std::_Placeholder<1> v6[8]; // [rsp+28h] [rbp-68h] BYREF
  std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>))(std::shared_ptr<common::minet::Packet>,std::any)> __f; // [rsp+30h] [rbp-60h] BYREF
  std::shared_ptr<common::minet::Packet> v8; // [rsp+40h] [rbp-50h] BYREF
  std::any p_context; // [rsp+50h] [rbp-40h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> p_func; // [rsp+60h] [rbp-30h] BYREF

  std::any::any<std::shared_ptr<GroupBatchLoadContext> &,std::shared_ptr<GroupBatchLoadContext>,std::any::_Manager_external<std::shared_ptr<GroupBatchLoadContext>>,true,true>(
    &p_context,
    p_context_ptr);
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v8, p_packet_ptr);
  *(_QWORD *)v6[0].gap0 = SceneBlockGroupComp::asyncLoadGroupBatch;
  std::bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any),std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
    &__f._M_f,
    v6,
    (const std::_Placeholder<2> *)&std::placeholders::_1,
    (const std::_Placeholder<1> *)&std::placeholders::_2,
    v3);
  std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any) ()(std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
    &p_func,
    &__f);
  v4 = CoroutineHelper::asyncTask(&p_func, &v8, &p_context);
  std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&p_func);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v8);
  std::any::~any(&p_context);
  return v4;
};

// Line 290: range 00000000159B18C2-00000000159B1E29
int32_t __cdecl SceneBlockGroupComp::buildGroupLoadContext(SceneBlockGroupComp *const this, GroupLoadContext *ctx)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char *v5; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // al
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v12; // rax
  proto::GroupBin *v13; // rdx
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type v14; // rsi
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  Scene *v17; // rax
  uint32_t SceneId; // ecx
  char v19; // dl
  bool v20; // dl
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupOverrideParam>,false,false>::pointer v21; // rax
  unsigned __int64 v22; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupOverrideParam>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+20h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+28h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-A0h] BYREF
  char v29[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:291 64 8 8 iter:310";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::buildGroupLoadContext;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)ctx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)ctx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(ctx);
  }
  *(_DWORD *)(v2 + 48) = ctx->group_id;
  v5 = (char *)(v2 + 48);
  v6 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->group_load_version_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  v9 = *(_BYTE *)(((unsigned __int64)&ctx->group_load_version >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&ctx->group_load_version, v5, (_BYTE)ctx + 104);
  }
  ctx->group_load_version = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v12 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v12)(scene, *(unsigned int *)(v2 + 48));
  __in.second = v13;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  v14 = (std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type)(((unsigned __int8)ret & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(ret);
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "buildGroupLoadContext",
      298);
    v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v28,
            (const char (*)[30])"findGroupBin failed,group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *group_bin_ptr )
    {
      if ( *(char *)(((unsigned __int64)&ctx->from_bin >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&ctx->from_bin, v14, &ctx->from_bin);
      ctx->from_bin = 1;
      v14 = *group_bin_ptr;
      proto::GroupBin::CopyFrom(&ctx->group_bin, *group_bin_ptr);
    }
    v17 = SceneCompBase::getScene((SceneCompBase *const)this);
    SceneId = Scene::getSceneId(v17);
    v19 = *(_BYTE *)(((unsigned __int64)&ctx->scene_id >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v19 != 0;
    v20 = v19 != 0 && (char)((((_BYTE)ctx + 4) & 7) + 3) >= v19;
    if ( v20 )
      __asan_report_store4(&ctx->scene_id, v14, v20);
    ctx->scene_id = SceneId;
    *(std::unordered_map<unsigned int,GroupOverrideParam>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupOverrideParam>::find(
                                                                                    &this->group_override_param_map_,
                                                                                    (const std::unordered_map<unsigned int,GroupOverrideParam>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,GroupOverrideParam>::end(&this->group_override_param_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,GroupOverrideParam>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupOverrideParam>,false> *)(v2 + 64),
           &__y) )
    {
      v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupOverrideParam>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupOverrideParam>,false,false> *const)(v2 + 64));
      GroupOverrideParam::operator=(&ctx->override_param, &v21->second);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = (unsigned __int64)(this->_vptr_SceneCompBase + 37);
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8();
    result = (*(__int64 (__fastcall **)(SceneBlockGroupComp *const, _QWORD, _QWORD, GroupInitParam *))v22)(
               this,
               *(unsigned int *)(v2 + 48),
               0LL,
               &ctx->init_param);
  }
  if ( v29 == (char *)v2 )
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

// Line 320: range 00000000159B1FF2-00000000159B398B
__int64 __fastcall SceneBlockGroupComp::buildGroupInitParam(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t pattern_id,
        GroupInitParam *init_param)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Uid; // ecx
  char v12; // dl
  bool v13; // dl
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  uint32_t v18; // ecx
  char v19; // dl
  bool v20; // dl
  Scene *v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  uint32_t v25; // edx
  char v26; // al
  Scene *v27; // rdx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  uint32_t v31; // edx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  Player *v36; // rax
  const PlayerCityComp *CityComp; // rdi
  uint32_t *p_city_level; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  Vector3 *p_pos; // rsi
  uint32_t v42; // edx
  char v43; // al
  __int64 v44; // rsi
  bool is_force_clean_sub_entity; // cl
  char v46; // al
  Scene *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  bool v51; // dl
  Player *v52; // rax
  PlayerSceneComp *SceneComp; // r14
  uint32_t v54; // r15d
  uint32_t SceneId; // eax
  Player *v56; // rax
  PlayerSceneComp *v57; // r14
  uint32_t v58; // r15d
  uint32_t v59; // eax
  Player *v60; // rax
  PlayerSceneComp *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  __int64 v65; // rsi
  uint32_t activity_revise_level_grow_id; // ecx
  char v67; // al
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  data::FlowGroupSubType sub_flow_type; // eax
  Player *v72; // rax
  unsigned __int64 v73; // rax
  common::milog::MiLogStream *v74; // r14
  std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > >::pointer v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  const char *Description; // rax
  std::pair<unsigned int const,unsigned int> *v79; // rax
  std::pair<unsigned int const,unsigned int> *v80; // rdx
  common::milog::MiLogStream *v81; // r14
  const char *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > >::pointer v85; // rax
  std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > >::pointer v86; // rax
  std::pair<unsigned int const,unsigned int> *p_in; // rsi
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v88; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v91; // dl
  bool v92; // dl
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // r14
  std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > >::pointer v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v101; // rax
  Player *v102; // rax
  PlayerQuestComp *QuestComp; // rax
  uint32_t WorldQuestFlowGroupInitSuiteIndex; // ecx
  char v105; // dl
  __int64 v106; // rsi
  bool v107; // dl
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v113; // rax
  unsigned __int64 v114; // rax
  uint32_t v115; // ecx
  char v116; // dl
  __int64 v117; // rsi
  bool v118; // dl
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-261h] BYREF
  unsigned int val; // [rsp+30h] [rbp-260h] BYREF
  uint32_t dungeon_id; // [rsp+34h] [rbp-25Ch]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-258h] BYREF
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-250h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-248h]
  PlayerQuestComp *quest_comp; // [rsp+50h] [rbp-240h]
  const std::vector<FlowGroupQuestStateSuites> *quest_vec; // [rsp+58h] [rbp-238h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-230h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *st; // [rsp+68h] [rbp-228h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *suite; // [rsp+70h] [rbp-220h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+78h] [rbp-218h] BYREF
  common::milog::MiLogStream v135; // [rsp+80h] [rbp-210h] BYREF
  common::milog::MiLogStream v136; // [rsp+A0h] [rbp-1F0h] BYREF
  std::map<unsigned int,unsigned int> v137; // [rsp+C0h] [rbp-1D0h] BYREF
  std::map<unsigned int,unsigned int> v138; // [rsp+F0h] [rbp-1A0h] BYREF
  std::unordered_set<std::string> v139; // [rsp+120h] [rbp-170h] BYREF
  char v140[304]; // [rsp+160h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v140;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 12 scene_id:331 64 4 9 state:408 80 4 12 group_id:319 96 8 8 iter:406 128 8 14 suite_iter"
                        ":414 160 16 14 player_ptr:321 192 16 13 scene_wtr:332 224 16 21 dungeon_scene_ptr:373";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::buildGroupInitParam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  *(_DWORD *)(v4 + 80) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v4 + 160));
  v7 = 0LL;
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v136,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "buildGroupInitParam",
      324);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v136,
           (const char (*)[33])"find own player failed,group id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v136);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    Uid = Player::getUid(v10);
    v12 = *(_BYTE *)(((unsigned __int64)&init_param->owner_uid >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v12 != 0;
    v13 = v12 != 0 && (char)((((_BYTE)init_param - 44) & 7) + 3) >= v12;
    if ( v13 )
      __asan_report_store4(&init_param->owner_uid, v7, v13);
    init_param->owner_uid = Uid;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v16 = *p_vptr_DescribalBase + 264LL;
    v17 = *(unsigned __int8 *)((v16 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v17 )
      v16 = __asan_report_load8();
    v18 = (*(__int64 (__fastcall **)(Scene *))v16)(scene);
    v19 = *(_BYTE *)(((unsigned __int64)&init_param->scene_revise_level >> 3) + 0x7FFF8000);
    LOBYTE(v17) = v19 != 0;
    v20 = v19 != 0 && (char)((((_BYTE)init_param - 124) & 7) + 3) >= v19;
    if ( v20 )
      __asan_report_store4(&init_param->scene_revise_level, v17, v20);
    init_param->scene_revise_level = v18;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 48) = Scene::getSceneId(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Scene>((Scene *)(v4 + 224));
    std::weak_ptr<Scene>::weak_ptr<Scene,void>(
      (std::weak_ptr<Scene> *const)(v4 + 192),
      (const std::shared_ptr<Scene> *)(v4 + 224));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 224));
    std::weak_ptr<Scene>::weak_ptr((std::weak_ptr<Scene> *const)(v4 + 224), (const std::weak_ptr<Scene> *)(v4 + 192));
    std::function<unsigned int ()(proto::ProtEntityType)>::operator=<SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}>(
      &init_param->gen_entity_id_func,
      (SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *)(v4 + 224));
    SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::~ProtEntityType((SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const)(v4 + 224));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = this->scene_;
    v22 = &v21->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      v22 = (_QWORD *)__asan_report_load8();
    v23 = *v22 + 400LL;
    v24 = *(unsigned __int8 *)((v23 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v24 )
      v23 = __asan_report_load8();
    v25 = (*(__int64 (__fastcall **)(Scene *))v23)(v21);
    v26 = *(_BYTE *)(((unsigned __int64)&init_param->world_level >> 3) + 0x7FFF8000);
    if ( v26 != 0 && v26 <= 3 )
    {
      LOBYTE(v24) = v26 != 0;
      __asan_report_store4(&init_param->world_level, v24, v25);
    }
    init_param->world_level = v25;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v27 = this->scene_;
    v28 = &v27->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      v28 = (_QWORD *)__asan_report_load8();
    v29 = *v28 + 416LL;
    v30 = *(unsigned __int8 *)((v29 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v30 )
      v29 = __asan_report_load8();
    v31 = (*(__int64 (__fastcall **)(Scene *))v29)(v27);
    v32 = *(_BYTE *)(((unsigned __int64)&init_param->mp_players >> 3) + 0x7FFF8000);
    if ( v32 != 0 && v32 <= 3 )
    {
      LOBYTE(v30) = v32 != 0;
      __asan_report_store4(&init_param->mp_players, v30, v31);
    }
    init_param->mp_players = v31;
    group_script_config_ptr = Group::getGroupScriptConfig(*(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 80), pattern_id);
    if ( group_script_config_ptr )
    {
      std::string::operator=(&init_param->md5, &group_script_config_ptr->script_content.lua_content_md5);
      std::string::operator=(&init_param->group_lua_file_path, &group_script_config_ptr->script_content.file_path);
      v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      CityComp = Player::getCityComp(v36);
      p_city_level = &init_param->city_level;
      if ( *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->area_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_script_config_ptr - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->area_id >> 3)
                                                                                + 0x7FFF8000) )
      {
        CityComp = (const PlayerCityComp *)&group_script_config_ptr->area_id;
        __asan_report_load4(&group_script_config_ptr->area_id);
      }
      PlayerCityComp::tryGetCityLevelByLevel1AreaId(CityComp, group_script_config_ptr->area_id, p_city_level);
      group_info_config_ptr = Group::getGroupInfoScriptConfig(*(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 80), pattern_id);
      if ( group_info_config_ptr )
      {
        v39 = (unsigned __int64)SceneCompBase::getScene((SceneCompBase *const)this);
        if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
          v39 = __asan_report_load8();
        v40 = *(_QWORD *)v39 + 288LL;
        if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
          v39 = __asan_report_load8();
        p_pos = &group_info_config_ptr->pos;
        v42 = (*(__int64 (__fastcall **)(unsigned __int64, Vector3 *))v40)(v39, &group_info_config_ptr->pos);
        v43 = *(_BYTE *)(((unsigned __int64)&init_param->weather >> 3) + 0x7FFF8000);
        if ( v43 != 0 && v43 <= 3 )
        {
          LOBYTE(p_pos) = v43 != 0;
          __asan_report_store4(&init_param->weather, p_pos, v42);
        }
        init_param->weather = v42;
        v44 = ((_BYTE)group_info_config_ptr - 43) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->is_force_clean_sub_entity >> 3) + 0x7FFF8000) != 0
          && (char)v44 >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->is_force_clean_sub_entity >> 3)
                                   + 0x7FFF8000) )
        {
          __asan_report_load1(&group_info_config_ptr->is_force_clean_sub_entity);
        }
        is_force_clean_sub_entity = group_info_config_ptr->is_force_clean_sub_entity;
        v46 = *(_BYTE *)(((unsigned __int64)&init_param->is_force_clean_sub_entity >> 3) + 0x7FFF8000);
        if ( v46 < 0 )
        {
          LOBYTE(v44) = v46 != 0;
          __asan_report_store1(&init_param->is_force_clean_sub_entity, v44, &init_param->is_force_clean_sub_entity);
        }
        init_param->is_force_clean_sub_entity = is_force_clean_sub_entity;
        dungeon_id = 0;
        v47 = SceneCompBase::getScene((SceneCompBase *const)this);
        if ( Scene::getSceneType(v47) == SCENE_DUNGEON )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          toPtr<DungeonScene,Scene>((Scene *)(v4 + 224));
          if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 224), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v136,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "buildGroupInitParam",
              376);
            v49 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v136,
                    (const char (*)[53])"dynamic_pointer_cast<DungeonScene> failed,scene_id: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Scene::getSceneId(this->scene_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &val);
            common::milog::MiLogStream::~MiLogStream(&v136);
          }
          else
          {
            v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
            dungeon_id = DungeonScene::getDungeonId(v50);
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 224));
        }
        v51 = *(_BYTE *)(((unsigned __int64)&init_param->dungeon_id >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)init_param - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&init_param->dungeon_id >> 3)
                                                                      + 0x7FFF8000);
        if ( v51 )
          __asan_report_store4(&init_param->dungeon_id, (((_BYTE)init_param - 108) & 7u) + 3, v51);
        init_param->dungeon_id = dungeon_id;
        v52 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        SceneComp = Player::getSceneComp(v52);
        v54 = *(_DWORD *)(v4 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneId = Scene::getSceneId(this->scene_);
        PlayerSceneComp::getOneOffRecord(&v137, SceneComp, PROT_ENTITY_GADGET, SceneId, dungeon_id, v54);
        std::map<unsigned int,unsigned int>::operator=(&init_param->gadget_one_off_set, &v137);
        std::map<unsigned int,unsigned int>::~map(&v137);
        v56 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v57 = Player::getSceneComp(v56);
        v58 = *(_DWORD *)(v4 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v59 = Scene::getSceneId(this->scene_);
        PlayerSceneComp::getOneOffRecord(&v138, v57, PROT_ENTITY_MONSTER, v59, dungeon_id, v58);
        std::map<unsigned int,unsigned int>::operator=(&init_param->monster_one_off_set, &v138);
        std::map<unsigned int,unsigned int>::~map(&v138);
        v60 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v61 = Player::getSceneComp(v60);
        PlayerSceneComp::getExcludeGadgetDropCategorySet[abi:cxx11](&v139, v61);
        std::unordered_set<std::string>::operator=(&init_param->exclude_gadget_drop_category_set, &v139);
        std::unordered_set<std::string>::~unordered_set(&v139);
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->activity_revise_level_grow_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)group_info_config_ptr - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->activity_revise_level_grow_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&group_info_config_ptr->activity_revise_level_grow_id);
        }
        if ( group_info_config_ptr->activity_revise_level_grow_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&init_param->input_revise_level_growth_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&init_param->input_revise_level_growth_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&init_param->input_revise_level_growth_id);
          }
          if ( init_param->input_revise_level_growth_id )
          {
            common::milog::MiLogStream::create(
              &v136,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "buildGroupInitParam",
              392);
            v62 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v136,
                    (const char (*)[18])" input_revise_id:");
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v62,
                    &init_param->input_revise_level_growth_id);
            v64 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v63,
                    (const char (*)[36])" overwritten by activity_revise_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v64,
              &group_info_config_ptr->activity_revise_level_grow_id);
            common::milog::MiLogStream::~MiLogStream(&v136);
          }
          v65 = (((_BYTE)group_info_config_ptr - 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->activity_revise_level_grow_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)group_info_config_ptr - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->activity_revise_level_grow_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&group_info_config_ptr->activity_revise_level_grow_id);
          }
          activity_revise_level_grow_id = group_info_config_ptr->activity_revise_level_grow_id;
          v67 = *(_BYTE *)(((unsigned __int64)&init_param->input_revise_level_growth_id >> 3) + 0x7FFF8000);
          if ( v67 != 0 && v67 <= 3 )
          {
            LOBYTE(v65) = v67 != 0;
            __asan_report_store4(&init_param->input_revise_level_growth_id, v65, (_BYTE)init_param + 32);
          }
          init_param->input_revise_level_growth_id = activity_revise_level_grow_id;
          common::milog::MiLogStream::create(
            &v136,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_block_group_comp.cpp",
            "buildGroupInitParam",
            395);
          v68 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v136,
                  (const char (*)[17])"input_revise_id:");
          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v68,
                  &init_param->input_revise_level_growth_id);
          v70 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v69, (const char (*)[8])" group:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v136);
        }
        if ( *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->sub_flow_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)group_script_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->sub_flow_type >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&group_script_config_ptr->sub_flow_type);
        }
        sub_flow_type = group_script_config_ptr->sub_flow_type;
        if ( sub_flow_type )
        {
          if ( sub_flow_type == GROUP_SUB_FLOW_TYPE_WORLD_QUEST )
          {
            v102 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            QuestComp = Player::getQuestComp(v102);
            v106 = *(unsigned int *)(v4 + 80);
            WorldQuestFlowGroupInitSuiteIndex = PlayerQuestComp::getWorldQuestFlowGroupInitSuiteIndex(QuestComp, v106);
            v105 = *(_BYTE *)(((unsigned __int64)&init_param->flow_suite_index >> 3) + 0x7FFF8000);
            LOBYTE(v106) = v105 != 0;
            v107 = v105 != 0 && (char)((((_BYTE)init_param + 28) & 7) + 3) >= v105;
            if ( v107 )
              __asan_report_store4(&init_param->flow_suite_index, v106, v107);
            init_param->flow_suite_index = WorldQuestFlowGroupInitSuiteIndex;
            common::milog::MiLogStream::create(
              &v136,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_block_group_comp.cpp",
              "buildGroupInitParam",
              429);
            v108 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                     &v136,
                     (const char (*)[31])"[WQ_FLOW] wq flow match suite:");
            v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v108,
                     &init_param->flow_suite_index);
            v110 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v109,
                     (const char (*)[12])", group_id:");
            v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v110,
                     (const unsigned int *)(v4 + 80));
            v112 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v111, (const char (*)[7])", uid:");
            v113 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            val = Player::getUid(v113);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v112, &val);
            common::milog::MiLogStream::~MiLogStream(&v136);
          }
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&this->is_started_);
          if ( this->is_started_ )
          {
            v72 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            quest_comp = Player::getQuestComp(v72);
            quest_vec = &group_script_config_ptr->quest_state_suite_vec;
            std::vector<FlowGroupQuestStateSuites>::rbegin((const std::vector<FlowGroupQuestStateSuites> *const)(v4 + 96));
            while ( 1 )
            {
              std::vector<FlowGroupQuestStateSuites>::rend((const std::vector<FlowGroupQuestStateSuites> *const)&__in);
              if ( !std::operator!=<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>(
                      (const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *)(v4 + 96),
                      (const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *)&__in) )
                break;
              v73 = (unsigned __int64)std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator->((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96));
              if ( *(_BYTE *)((v73 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v73 >> 3) + 0x7FFF8000) <= 3 )
                v73 = __asan_report_load4(v73);
              *(_DWORD *)(v4 + 64) = PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)v73);
              common::milog::MiLogStream::create(
                &v135,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_block_group_comp.cpp",
                "buildGroupInitParam",
                409);
              v74 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v135, (const char (*)[8])" quest:");
              v75 = std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator->((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96));
              v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, &v75->quest_id);
              v77 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v76, (const char (*)[8])" state:");
              std::allocator<char>::allocator(&__a);
              Description = data::getDescription((data::QuestState)*(_DWORD *)(v4 + 64));
              std::string::basic_string<std::allocator<char>>((std::string *const)&v136, Description, &__a);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v77, (const std::string *)&v136);
              std::string::~string(&v136);
              std::allocator<char>::~allocator(&__a);
              common::milog::MiLogStream::~MiLogStream(&v135);
              __for_range = &std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator->((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96))->state_suite_map;
              __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
              *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::map<unsigned int,unsigned int>::end(__for_range);
              while ( std::operator!=(
                        &__for_begin,
                        (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 128)) )
              {
                v79 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
                v80 = v79;
                if ( ((unsigned __int8)v79 & 7) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v79->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v79 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v79->second + 3) >> 3)
                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load_n(v79, 8LL);
                }
                __in = *v80;
                st = std::get<0ul,unsigned int const,unsigned int>(&__in);
                suite = std::get<1ul,unsigned int const,unsigned int>(&__in);
                common::milog::MiLogStream::create(
                  &v135,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "buildGroupInitParam",
                  412);
                v81 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v135,
                        (const char (*)[11])off_258E5CC0);
                std::allocator<char>::allocator(&__a);
                v82 = data::getDescription((data::QuestState)*(_DWORD *)(v4 + 64));
                std::string::basic_string<std::allocator<char>>((std::string *const)&v136, v82, &__a);
                v83 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v81,
                        (const std::string *)&v136);
                v84 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v83, (const char (*)[8])" suite:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, suite);
                std::string::~string(&v136);
                std::allocator<char>::~allocator(&__a);
                common::milog::MiLogStream::~MiLogStream(&v135);
                std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
              }
              v85 = std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator->((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96));
              val = *(_DWORD *)(v4 + 64);
              *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                                     &v85->state_suite_map,
                                                                                     &val);
              v86 = std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator->((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96));
              __in = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,unsigned int>::end(&v86->state_suite_map)._M_node;
              p_in = &__in;
              if ( std::operator!=(
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 128),
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__in) )
              {
                v88 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 128));
                p_second = &v88->second;
                if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(p_second);
                }
                second = v88->second;
                v91 = *(_BYTE *)(((unsigned __int64)&init_param->flow_suite_index >> 3) + 0x7FFF8000);
                LOBYTE(p_in) = v91 != 0;
                v92 = v91 != 0 && (char)((((_BYTE)init_param + 28) & 7) + 3) >= v91;
                if ( v92 )
                  __asan_report_store4(&init_param->flow_suite_index, p_in, v92);
                init_param->flow_suite_index = second;
                common::milog::MiLogStream::create(
                  &v136,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "buildGroupInitParam",
                  418);
                v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        &v136,
                        (const unsigned int *)(v4 + 80));
                v94 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v93,
                        (const char (*)[19])" flow match quest:");
                v95 = std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator->((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96));
                v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, &v95->quest_id);
                v97 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v96, (const char (*)[8])" state:");
                v98 = common::milog::MiLogStream::operator<<<data::QuestState,(data::QuestState*)0>(
                        v97,
                        (const data::QuestState *)(v4 + 64));
                v99 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v98,
                        (const char (*)[10])"to suite:");
                v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v99,
                         &init_param->flow_suite_index);
                v101 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                operator<<(v100, v101);
                common::milog::MiLogStream::~MiLogStream(&v136);
                break;
              }
              std::reverse_iterator<__gnu_cxx::__normal_iterator<FlowGroupQuestStateSuites const*,std::vector<FlowGroupQuestStateSuites>>>::operator++((std::reverse_iterator<__gnu_cxx::__normal_iterator<const FlowGroupQuestStateSuites*,std::vector<FlowGroupQuestStateSuites> > > *const)(v4 + 96));
            }
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v114 = (unsigned __int64)(this->_vptr_SceneCompBase + 42);
        if ( *(_BYTE *)((v114 >> 3) + 0x7FFF8000) )
          v114 = __asan_report_load8();
        v117 = *(unsigned int *)(v4 + 80);
        v115 = (*(__int64 (__fastcall **)(SceneBlockGroupComp *const, __int64, _QWORD))v114)(this, v117, pattern_id);
        v116 = *(_BYTE *)(((unsigned __int64)&init_param->rely_activity_world_level_limit >> 3) + 0x7FFF8000);
        LOBYTE(v117) = v116 != 0;
        v118 = v116 != 0 && (char)((((_BYTE)init_param + 36) & 7) + 3) >= v116;
        if ( v118 )
          __asan_report_store4(&init_param->rely_activity_world_level_limit, v117, v118);
        init_param->rely_activity_world_level_limit = v115;
        v9 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v136,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "buildGroupInitParam",
          366);
        v48 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v136,
                (const char (*)[37])"findGroupInfoConfig failed,group id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v136);
        v9 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v136,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "buildGroupInitParam",
        351);
      v33 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v136,
              (const char (*)[39])"findGroupScriptConfig fails,scene_id: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 48));
      v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])"group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v136);
      v9 = -1;
    }
    std::weak_ptr<Scene>::~weak_ptr((std::weak_ptr<Scene> *const)(v4 + 192));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
  result = v9;
  if ( v140 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 334: range 00000000159B1E2A-00000000159B1FD4
unsigned int __cdecl SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::operator()(
        const SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const __closure,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:336";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::operator();
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
      "./src/scene/scene_block_group_comp.cpp",
      "operator()",
      339);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v8, (const char (*)[39])off_258E57E0);
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

// Line 334: range 00000000159F2DCC-00000000159F2DF1
void __cdecl SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::ProtEntityType(
        SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const this,
        SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 334: range 0000000015A0706A-0000000015A0708F
void __cdecl SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::ProtEntityType(
        SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const this,
        const SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
};

// Line 334: range 00000000159B1FD6-00000000159B1FF0
void __cdecl SceneBlockGroupComp::buildGroupInitParam(unsigned int,unsigned int,GroupInitParam &)::{lambda(proto::ProtEntityType)#1}::~ProtEntityType(
        SceneBlockGroupComp::buildGroupInitParam::<lambda(proto::ProtEntityType)> *const this)
{
  std::weak_ptr<Scene>::~weak_ptr(&this->__scene_wtr);
};

// Line 440: range 00000000159B398C-00000000159B48A6
GroupPtr __cdecl SceneBlockGroupComp::loadGroupFromContext(GroupLoadContext *ctx)
{
  GroupLoadContext *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GroupPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Group *v10; // rax
  Group *v11; // rax
  Group *v12; // rcx
  Group *v13; // rax
  Group *v14; // rcx
  Group *v15; // rcx
  Group *v16; // rcx
  Group *v17; // rax
  Group *v18; // rcx
  Group *v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  Group *v24; // rcx
  Group *v25; // rcx
  Group *v26; // rcx
  unsigned int v27; // esi
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  Group *v29; // rcx
  Group *v30; // rcx
  unsigned int v31; // edi
  Group *v32; // r14
  GroupInitParam *inited; // rax
  common::milog::MiLogStream *v34; // rax
  GroupLoadContext *ctxa; // [rsp+0h] [rbp-260h]
  uint32_t old_version; // [rsp+14h] [rbp-24Ch]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+18h] [rbp-248h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-240h]
  const GroupReplaceableInfo *replaceable; // [rsp+28h] [rbp-238h]
  common::milog::MiLogStream v41; // [rsp+30h] [rbp-230h] BYREF
  char v42[528]; // [rsp+50h] [rbp-210h] BYREF

  ctxa = v1;
  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 group_id:442 64 4 12 scene_id:443 80 16 13 group_ptr:458 112 296 14 init_param:507";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::loadGroupFromContext;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = v1->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v1->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 64) = v1->scene_id;
  group_info_config_ptr = Group::getGroupInfoScriptConfig(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48), 0);
  if ( group_info_config_ptr )
  {
    group_script_config_ptr = Group::getGroupScriptConfig(*(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48), 0);
    if ( group_script_config_ptr )
    {
      common::tools::perf::make_shared<Group,unsigned int &>((unsigned int *)(v2 + 80), (unsigned int *)(v2 + 48));
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "loadGroupFromContext",
          462);
        v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v41,
               (const char (*)[29])"group_ptr is null, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)ctx, 0LL);
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
        if ( group_info_config_ptr->is_dynamic_load )
        {
          v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          Group::setGroupType(v10, DYNAMIC);
        }
        v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Group::setSceneId(v11, *(_DWORD *)(v2 + 64));
        v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v1->init_param.dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->init_param.dungeon_id >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Group::setDungeonId(v12, v1->init_param.dungeon_id);
        v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Group::setPosition(v13, &group_info_config_ptr->pos);
        v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v1->init_param.client_silence_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v1->init_param.client_silence_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        Group::setClientSilenceVersion(v14, v1->init_param.client_silence_version);
        v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)group_script_config_ptr >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)group_script_config_ptr >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        Group::setIOType(v15, group_script_config_ptr->io_type);
        v16 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->sub_flow_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)group_script_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->sub_flow_type >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Group::setSubFlowType(v16, group_script_config_ptr->sub_flow_type);
        v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Group::setOverrideParam(v17, &v1->override_param);
        v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                      + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        Group::setRelyStartWorldLevelLimitActivityId(
          v18,
          group_info_config_ptr->rely_start_world_level_limit_activity_id);
        if ( *(char *)(((unsigned __int64)&v1->from_bin >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&v1->from_bin);
        if ( v1->from_bin
          && (v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
              Group::fromBin(v19, &v1->group_bin)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "loadGroupFromContext",
            481);
          v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v41,
                  (const char (*)[36])"grop_ptr->fromBin failed, scene id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 64));
          v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" group_id");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)ctx, 0LL);
        }
        else
        {
          replaceable = &group_info_config_ptr->replaceable_info;
          if ( *(char *)(((unsigned __int64)&v1->from_bin >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&v1->from_bin);
          if ( !v1->from_bin )
          {
            v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v1->revise_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v1 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->revise_level >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            Group::setReviseLevel(v24, v1->revise_level);
            v25 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)group_info_config_ptr - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load1(replaceable);
            }
            Group::setIsReplaceable(v25, replaceable->value);
            v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)group_info_config_ptr - 76 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3)
                                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            Group::setReplaceableVersion(v26, group_info_config_ptr->replaceable_info.version + 1);
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/scene/scene_block_group_comp.cpp",
              "loadGroupFromContext",
              493);
            if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)group_info_config_ptr - 76 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3)
                                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v27 = group_info_config_ptr->replaceable_info.version + 1;
            if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)group_info_config_ptr - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load1(replaceable);
            }
            common::milog::MiLogStream::operator()(
              &v41,
              "group_id=%u init is_replaceable to %u @ version[%u]",
              *(unsigned int *)(v2 + 48),
              replaceable->value,
              v27);
            common::milog::MiLogStream::~MiLogStream(&v41);
          }
          else
          {
            v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            old_version = Group::getReplaceableVersion(v28);
            if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.new_bin_only >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)group_info_config_ptr - 76 + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.new_bin_only >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load1(&group_info_config_ptr->replaceable_info.new_bin_only);
            }
            if ( !group_info_config_ptr->replaceable_info.new_bin_only )
            {
              if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)group_info_config_ptr - 76 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3)
                                                                                         + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( old_version <= group_info_config_ptr->replaceable_info.version )
              {
                v29 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)group_info_config_ptr - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(replaceable);
                }
                Group::setIsReplaceable(v29, replaceable->value);
                v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)group_info_config_ptr - 76 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3)
                                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                Group::setReplaceableVersion(v30, group_info_config_ptr->replaceable_info.version + 1);
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "loadGroupFromContext",
                  502);
                if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)group_info_config_ptr - 76 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info.version >> 3)
                                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v31 = group_info_config_ptr->replaceable_info.version + 1;
                if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)group_info_config_ptr - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  v31 = (_DWORD)group_info_config_ptr + 180;
                  __asan_report_load1(replaceable);
                }
                common::milog::MiLogStream::operator()(
                  &v41,
                  "group_id=%u update is_replaceable to %u; version[%u-->%u]",
                  *(unsigned int *)(v2 + 48),
                  replaceable->value,
                  old_version,
                  v31);
                common::milog::MiLogStream::~MiLogStream(&v41);
              }
            }
          }
          GroupInitParam::GroupInitParam((GroupInitParam *const)(v2 + 112), &ctxa->init_param);
          v32 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          inited = std::move<GroupInitParam &>((GroupInitParam *)(v2 + 112));
          if ( Group::init(v32, inited) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "loadGroupFromContext",
              510);
            v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v41,
                    (const char (*)[19])"group init fails: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v41);
            std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)ctx, 0LL);
          }
          else
          {
            std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)ctx, (std::shared_ptr<Group> *)(v2 + 80));
          }
          GroupInitParam::~GroupInitParam((GroupInitParam *const)(v2 + 112));
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "loadGroupFromContext",
        454);
      v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v41,
             (const char (*)[39])"findGroupScriptConfig fails,scene_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])"group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)ctx, 0LL);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "loadGroupFromContext",
      448);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v41,
      (const char (*)[26])"findGroupInfoConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v41);
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)ctx, 0LL);
  }
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)ctx;
  return result;
};

// Line 517: range 00000000159B48A8-00000000159B4F03
int32_t __cdecl SceneBlockGroupComp::emplaceGroupAndEnterScene(
        SceneBlockGroupComp *const this,
        GroupPtr *p_group_ptr,
        bool start)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  std::shared_ptr<Group> *v10; // r8
  common::milog::MiLogStream *v11; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  Group *v15; // r14
  Scene *Scene; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  Scene *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  Group *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v29; // rax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-90h] BYREF
  char v33[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 group_id:523";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::emplaceGroupAndEnterScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<Group>(p_group_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "emplaceGroupAndEnterScene",
      520);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v32, (const char (*)[18])"group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    *(_DWORD *)(v3 + 32) = Group::getGroupId(v7);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<Group>>,unsigned int>(
           &this->group_map_,
           (const unsigned int *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "emplaceGroupAndEnterScene",
        526);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v32,
             (const char (*)[24])"group exists, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = (unsigned __int64)(this->_vptr_SceneCompBase + 20);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      if ( (*(unsigned __int8 (__fastcall **)(SceneBlockGroupComp *const, _QWORD))v9)(this, *(unsigned int *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "emplaceGroupAndEnterScene",
          533);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v32,
                (const char (*)[30])"group dead already, group id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = 0;
      }
      else
      {
        v12 = std::unordered_map<unsigned int,std::shared_ptr<Group>>::emplace<unsigned int &,std::shared_ptr<Group>&>(
                &this->group_map_,
                (unsigned int *)(v3 + 32),
                p_group_ptr,
                (unsigned int *)&this->group_map_,
                v10);
        if ( !v12.second )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "emplaceGroupAndEnterScene",
            541);
          v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v32,
                  (const char (*)[20])"duplicate group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = -1;
        }
        else
        {
          v14 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                    &this->group_load_version_map_,
                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load4();
          ++*(_DWORD *)v14;
          v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
          Scene = SceneCompBase::getScene((SceneCompBase *const)this);
          if ( Group::enterScene(v15, Scene) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "emplaceGroupAndEnterScene",
              549);
            v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v32,
                    (const char (*)[28])"enter scene fail, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v32);
            result = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_block_group_comp.cpp",
              "emplaceGroupAndEnterScene",
              553);
            v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v32,
                    (const char (*)[27])"[SCENE_GROUP_LOAD] scene_:");
            v19 = SceneCompBase::getScene((SceneCompBase *const)this);
            v20 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v18, v19);
            v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v20,
                    (const char (*)[21])"enterScene group_id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 32));
            v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" start:");
            v24 = common::milog::MiLogStream::operator<<(v23, start);
            v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v24,
                    (const char (*)[14])",suite index:");
            v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
            val = Group::getSuiteIndex(v26);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
            v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v27,
                    (const char (*)[12])", version: ");
            v29 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    &this->group_load_version_map_,
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, v29);
            common::milog::MiLogStream::~MiLogStream(&v32);
            result = 0;
          }
        }
      }
    }
  }
  if ( v33 == (char *)v3 )
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

// Line 560: range 00000000159B4F04-00000000159B5361
__int64 __fastcall SceneBlockGroupComp::unloadActivitGroups(SceneBlockGroupComp *const this, uint32_t activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> __y; // [rsp+20h] [rbp-F0h] BYREF
  const SceneScriptConfig *scene_config_ptr; // [rsp+28h] [rbp-E8h]
  const std::vector<unsigned int> *group_id_vec; // [rsp+30h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Group> p_group_ptr; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 group_id:573 48 4 15 activity_id:559 64 8 8 iter:567 96 8 8 iter:575";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::unloadActivitGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_config_ptr = Scene::getScriptConfig(this->scene_);
  if ( scene_config_ptr )
  {
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 &scene_config_ptr->activity_group_vec_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&scene_config_ptr->activity_group_vec_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
           &__y) )
    {
      result = 0LL;
    }
    else
    {
      group_id_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
      __for_range = group_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(group_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = *v6;
        *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                            &this->group_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v2 + 32));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v2 + 96),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)&__y) )
        {
          v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v2 + 96));
          std::shared_ptr<Group>::shared_ptr(&p_group_ptr, &v7->second);
          SceneBlockGroupComp::forceUnloadGroup(this, &p_group_ptr, 1);
          std::shared_ptr<Group>::~shared_ptr(&p_group_ptr);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "unloadActivitGroups",
        581);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v16,
             (const char (*)[18])"forceUnloadGroup:");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, group_id_vec);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "unloadActivitGroups",
      564);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v16, (const char (*)[22])"getScriptConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 586: range 00000000159B5362-00000000159B540D
// local variable allocation has failed, the output may be wrong!
GroupPtr __cdecl SceneBlockGroupComp::loadGroupByGm(SceneBlockGroupComp *const this, uint32_t group_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(SceneBlockGroupComp *const, uint32_t, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  GroupPtr result; // rax
  uint32_t group_ida; // [rsp+Ch] [rbp-14h]

  group_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&group_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  v3 = **(_QWORD **)&group_id + 80LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  v4 = *(void (__fastcall **)(SceneBlockGroupComp *const, uint32_t, _QWORD, _QWORD, _QWORD, _QWORD))v3;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id);
  v4(this, group_id, group_ida, 0LL, 0LL, 0LL);
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 591: range 00000000159B540E-00000000159B557D
int32_t __cdecl SceneBlockGroupComp::unloadGroupByGm(SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::shared_ptr<Group> p_group_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 group_ptr:592";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::unloadGroupByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v2 + 32), (uint32_t)this);
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    std::shared_ptr<Group>::shared_ptr(&p_group_ptr, (const std::shared_ptr<Group> *)(v2 + 32));
    v5 = SceneBlockGroupComp::forceUnloadGroup(this, &p_group_ptr, 1);
    std::shared_ptr<Group>::~shared_ptr(&p_group_ptr);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  result = v5;
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

// Line 601: range 00000000159B55F8-00000000159B5ADC
int32_t __cdecl SceneBlockGroupComp::removeGroupByGm(SceneBlockGroupComp *const this, uint32_t group_id)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Group *v6; // r15
  Group *v7; // rcx
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  Scene *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int v13; // r15d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // r14
  Scene *v17; // rax
  uint32_t SceneId; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t dungeon_id; // [rsp+2Ch] [rbp-D4h]
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 group_ptr:602 64 16 14 player_ptr:616 96 16 21 dungeon_scene_ptr:620";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::removeGroupByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v3 + 32), (uint32_t)this);
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 32)) )
  {
    v2 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::function<ForeachPolicy ()(Entity &)>::function<SceneBlockGroupComp::removeGroupByGm(unsigned int)::{lambda(Entity &)#1},void,void>(
      &p_func,
      (SceneBlockGroupComp::removeGroupByGm::<lambda(Entity&)>)(v3 + 32));
    Group::foreachEntity(v6, &p_func);
    std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    SceneBlockGroupComp::finalRemoveGroup(this, v7, 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v10 = *p_vptr_DescribalBase + 464LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    (*(void (__fastcall **)(Scene *, _QWORD))v10)(scene, group_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnPlayer((const Scene *const)(v3 + 64));
    dungeon_id = 0;
    v11 = SceneCompBase::getScene((SceneCompBase *const)this);
    if ( Scene::getSceneType(v11) != SCENE_DUNGEON )
      goto LABEL_32;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v3 + 96));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "removeGroupByGm",
        623);
      v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[53])"dynamic_pointer_cast<DungeonScene> failed,scene_id: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v2 = 0;
      v13 = 0;
    }
    else
    {
      v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      dungeon_id = DungeonScene::getDungeonId(v14);
      v13 = 1;
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
    if ( v13 == 1 )
    {
LABEL_32:
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        SceneComp = Player::getSceneComp(v15);
        v17 = SceneCompBase::getScene((SceneCompBase *const)this);
        SceneId = Scene::getSceneId(v17);
        PlayerSceneComp::removeProductRecordByGm(SceneComp, SceneId, dungeon_id, group_id);
      }
      v2 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
  result = v2;
  if ( v23 == (char *)v3 )
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

// Line 607: range 00000000159B557E-00000000159B55F6
ForeachPolicy __cdecl SceneBlockGroupComp::removeGroupByGm(unsigned int)::{lambda(Entity &)#1}::operator()(
        const SceneBlockGroupComp::removeGroupByGm::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(entity->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(Entity *, VisionContext *))v2)(entity, &VisionContext::miss_context);
  return 0;
};

// Line 641: range 00000000159B5C42-00000000159B5E93
int32_t __cdecl SceneBlockGroupComp::unloadGroupWhenDisconnect(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::function<ForeachPolicy(Group&)> p_func; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 count:644 64 16 9 timer:643";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::unloadGroupWhenDisconnect;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 64));
  *(_DWORD *)(v1 + 48) = 0;
  std::function<ForeachPolicy ()(Group &)>::function<SceneBlockGroupComp::unloadGroupWhenDisconnect(void)::{lambda(Group &)#1},void,void>(
    &p_func,
    (SceneBlockGroupComp::unloadGroupWhenDisconnect::<lambda(Group&)>)__PAIR128__(v1 + 48, (unsigned __int64)this));
  SceneBlockGroupComp::foreachGroup(this, &p_func);
  std::function<ForeachPolicy ()(Group &)>::~function(&p_func);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "unloadGroupWhenDisconnect",
    655);
  v4 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
         (common::milog::MiLogStream *const)&p_func,
         (const char (*)[60])"[UNLOAD_DISCONNECT]unload group when disconnect. group_num:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" time_cost(us):");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 64));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 64));
  result = 0;
  if ( v10 == (char *)v1 )
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

// Line 645: range 00000000159B5ADE-00000000159B5C41
ForeachPolicy __cdecl SceneBlockGroupComp::unloadGroupWhenDisconnect(void)::{lambda(Group &)#1}::operator()(
        const SceneBlockGroupComp::unloadGroupWhenDisconnect::<lambda(Group&)> *const __closure,
        Group *group)
{
  SceneBlockGroupComp *this; // rbx
  unsigned __int64 count; // rax
  const GroupInfoScriptConfig *config_ptr; // [rsp+18h] [rbp-28h]
  GroupPtr p_group_ptr; // [rsp+20h] [rbp-20h] BYREF

  config_ptr = Group::getInfoScriptConfig(group);
  if ( config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&config_ptr->is_unload_when_disconnect >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config_ptr->is_unload_when_disconnect);
    if ( config_ptr->is_unload_when_disconnect )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this = __closure->__this;
      toThisPtr<Group>((Group *)&p_group_ptr);
      SceneBlockGroupComp::forceUnloadGroup(this, &p_group_ptr, 1);
      std::shared_ptr<Group>::~shared_ptr(&p_group_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__count >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      count = (unsigned __int64)__closure->__count;
      if ( *(_BYTE *)((count >> 3) + 0x7FFF8000) != 0
        && (char)((count & 7) + 3) >= *(_BYTE *)((count >> 3) + 0x7FFF8000) )
      {
        count = __asan_report_load4();
      }
      ++*(_DWORD *)count;
    }
  }
  return 0;
};

// Line 662: range 00000000159B5E94-00000000159B6340
__int64 __fastcall SceneBlockGroupComp::isGroupMonsterAlive(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // eax
  int v10; // r15d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+30h] [rbp-100h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+48h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 group_id:661 64 8 8 iter:664 96 16 13 group_ptr:667";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::isGroupMonsterAlive;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v4 + 64),
          &__y)
    || ((v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v4 + 64)),
         std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v4 + 96), &v7->second),
         !std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 96)))
      ? (v10 = 1)
      : (v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
         LOBYTE(v9) = Group::isEntityDeleted(v8, PROT_ENTITY_MONSTER, config_id),
         v3 = v9 ^ 1,
         v10 = 0),
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 96)),
        v10 == 1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v13 = *p_vptr_DescribalBase + 456LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    *(_DWORD *)(v4 + 96) = (*(__int64 (__fastcall **)(Scene *, _QWORD))v13)(scene, *(unsigned int *)(v4 + 48));
    *(_QWORD *)(v4 + 104) = v14;
    ret = std::get<0ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v4 + 96));
    group_bin_ptr = std::get<1ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "isGroupMonsterAlive",
        677);
      v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v24,
              (const char (*)[31])"findGroupBin failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v3 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( *group_bin_ptr )
      {
        __for_range = proto::GroupBin::del_monster_list(*group_bin_ptr);
        __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
        __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
        while ( __for_begin != __for_end )
        {
          if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *__for_begin == config_id )
          {
            v3 = 0;
            goto LABEL_30;
          }
          ++__for_begin;
        }
      }
      v3 = 1;
    }
  }
LABEL_30:
  result = v3;
  if ( v25 == (char *)v4 )
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

// Line 696: range 00000000159B6342-00000000159B6704
__int64 __fastcall SceneBlockGroupComp::getGroupLastRefreshTime(SceneBlockGroupComp *const this, uint32_t group_id)
{
  google::protobuf::uint32 refresh_time; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int v8; // r15d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-E8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 group_id:695 64 8 8 iter:697 96 16 13 group_ptr:700";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::getGroupLastRefreshTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
          &__y)
    || ((v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64)),
         std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 96), &v6->second),
         !std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 96)))
      ? (v8 = 1)
      : (v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
         refresh_time = Group::getLastRefreshTime(v7),
         v8 = 0),
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96)),
        v8 == 1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v11 = *p_vptr_DescribalBase + 456LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    *(_DWORD *)(v3 + 96) = (*(__int64 (__fastcall **)(Scene *, _QWORD))v11)(scene, *(unsigned int *)(v3 + 48));
    *(_QWORD *)(v3 + 104) = v12;
    ret = std::get<0ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 96));
    group_bin_ptr = std::get<1ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "getGroupLastRefreshTime",
        710);
      v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v18,
              (const char (*)[31])"findGroupBin failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      refresh_time = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( *group_bin_ptr )
        refresh_time = proto::GroupBin::last_refresh_time(*group_bin_ptr);
      else
        refresh_time = 0;
    }
  }
  result = refresh_time;
  if ( v19 == (char *)v3 )
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

// Line 721: range 00000000159B6706-00000000159B6DBA
__int64 __fastcall SceneBlockGroupComp::getGroupMonsterLevel(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  uint32_t v7; // r14d
  uint32_t SceneId; // eax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v12; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Scene *v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  common::milog::MiLogStream *v18; // rax
  uint32_t level; // ebx
  Scene *v20; // rdx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  uint32_t revise_level; // [rsp+1Ch] [rbp-114h]
  uint32_t world_level; // [rsp+20h] [rbp-110h]
  uint32_t base_level; // [rsp+24h] [rbp-10Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-108h] BYREF
  const SceneScriptConfig *scene_config_ptr; // [rsp+30h] [rbp-100h]
  const GroupScriptConfig *group_config_ptr; // [rsp+38h] [rbp-F8h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+40h] [rbp-F0h]
  const MonsterScriptConfig *monster_config_ptr; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 group_id:720 64 8 8 iter:746 96 16 13 group_ptr:749";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::getGroupMonsterLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_config_ptr = Scene::getScriptConfig(this->scene_);
  if ( !scene_config_ptr )
  {
    result = 0LL;
    goto LABEL_53;
  }
  group_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, *(_DWORD *)(v3 + 48));
  if ( !group_config_ptr )
  {
    result = 0LL;
    goto LABEL_53;
  }
  v7 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneId = Scene::getSceneId(this->scene_);
  group_info_config_ptr = Group::getGroupInfoScriptConfig(SceneId, v7, 0);
  if ( !group_info_config_ptr )
  {
    result = 0LL;
    goto LABEL_53;
  }
  monster_config_ptr = GroupScriptConfig::findMonsterConfig(group_config_ptr, config_id);
  if ( !monster_config_ptr )
  {
    result = 0LL;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v11 = *p_vptr_DescribalBase + 400LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  world_level = (*(__int64 (__fastcall **)(Scene *))v11)(scene);
  revise_level = 0;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
         &__y) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 96), &v12->second);
    if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 96)) )
    {
      v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      revise_level = Group::getReviseLevel(v13);
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = this->scene_;
    v15 = &v14->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      v15 = (_QWORD *)__asan_report_load8();
    v16 = *v15 + 456LL;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    *(_DWORD *)(v3 + 96) = (*(__int64 (__fastcall **)(Scene *, _QWORD))v16)(v14, *(unsigned int *)(v3 + 48));
    *(_QWORD *)(v3 + 104) = v17;
    ret = std::get<0ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 96));
    group_bin_ptr = std::get<1ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "getGroupMonsterLevel",
        760);
      v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v34,
              (const char (*)[31])"findGroupBin failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = 0LL;
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *group_bin_ptr )
      revise_level = proto::GroupBin::revise_level(*group_bin_ptr);
  }
  if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level = monster_config_ptr->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v20 = this->scene_;
  v21 = &v20->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    v21 = (_QWORD *)__asan_report_load8();
  v22 = *v21 + 264LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    v22 = __asan_report_load8();
  base_level = level + (*(__int64 (__fastcall **)(Scene *))v22)(v20) + revise_level;
  if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_ignore_world_level_revise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&group_info_config_ptr->is_ignore_world_level_revise);
  if ( group_info_config_ptr->is_ignore_world_level_revise )
    result = base_level;
  else
    result = PlayerWorld::getAdjustedLevel(world_level, base_level);
LABEL_53:
  if ( v35 == (char *)v3 )
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

// Line 779: range 00000000159B6DBC-00000000159B72EF
__int64 __fastcall SceneBlockGroupComp::setGroupDead(SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  const SceneScriptConfig *scene_config_ptr; // [rsp+20h] [rbp-90h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-80h] BYREF
  char v21[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:778";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::setGroupDead;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_config_ptr = Scene::getScriptConfig(this->scene_);
  if ( scene_config_ptr )
  {
    group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, *(_DWORD *)(v2 + 32));
    if ( group_info_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
      if ( group_info_config_ptr->is_dynamic_load )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_block_group_comp.cpp",
          "setGroupDead",
          796);
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v20, (const char (*)[10])"group_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v9,
          (const char (*)[34])" is_dynamic_load, cannot set dead");
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      v10 = std::unordered_set<unsigned int>::insert(
              &this->dead_group_set_,
              (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "setGroupDead",
          801);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v20,
                (const char (*)[29])"group dead already,group id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
          p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
        v14 = *p_vptr_DescribalBase + 464LL;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        (*(void (__fastcall **)(Scene *, _QWORD))v14)(scene, *(unsigned int *)(v2 + 32));
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "setGroupDead",
          805);
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v20, (const char (*)[7])"group:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" set dead");
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "setGroupDead",
        790);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v20,
             (const char (*)[35])"cannot find group config,group id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "setGroupDead",
      783);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v20,
           (const char (*)[37])"cannot find scene_config , scene id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v2 )
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

// Line 810: range 00000000159B72F0-00000000159B7414
_BOOL8 __fastcall SceneBlockGroupComp::isGroupDead(const SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  unsigned __int64 v5; // r12
  _BOOL8 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:809";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupDead;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_scene_group_all_dead_);
  }
  result = this->is_scene_group_all_dead_
        || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->dead_group_set_,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 815: range 00000000159B7416-00000000159B75A1
__int64 __fastcall SceneBlockGroupComp::recoverDeadGroup(SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:814";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::recoverDeadGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->dead_group_set_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "recoverDeadGroup",
      818);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v7,
           (const char (*)[29])"group is not dead, group id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::unordered_set<unsigned int>::erase(
      &this->dead_group_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
    result = 0LL;
  }
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

// Line 826: range 00000000159B75A2-00000000159B7701
void __cdecl SceneBlockGroupComp::setSceneDead(SceneBlockGroupComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  v1 = ((_BYTE)this + 19) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_scene_group_all_dead_, v1, v2);
  this->is_scene_group_all_dead_ = 1;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "setSceneDead",
    828);
  v3 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v8,
         (const char (*)[24])"setSceneDead. scene_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getSceneId(this->scene_);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v4, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OwnerUid = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &OwnerUid);
  common::milog::MiLogStream::~MiLogStream(&v8);
};

// Line 832: range 00000000159B7702-00000000159B7861
void __cdecl SceneBlockGroupComp::recoverDeadScene(SceneBlockGroupComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  v1 = ((_BYTE)this + 19) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_scene_group_all_dead_, v1, v2);
  this->is_scene_group_all_dead_ = 0;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "recoverDeadScene",
    834);
  v3 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v8,
         (const char (*)[28])"recoverDeadScene. scene_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getSceneId(this->scene_);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v4, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OwnerUid = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &OwnerUid);
  common::milog::MiLogStream::~MiLogStream(&v8);
};

// Line 838: range 00000000159B7862-00000000159B78AF
bool __cdecl SceneBlockGroupComp::isSceneDead(const SceneBlockGroupComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_scene_group_all_dead_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_scene_group_all_dead_);
  }
  return this->is_scene_group_all_dead_;
};

// Line 843: range 00000000159B78B0-00000000159B7C14
int32_t __cdecl SceneBlockGroupComp::notifyGroupSuiteToClient(SceneBlockGroupComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Group *v7; // rax
  uint32_t SuiteIndex; // r14d
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *v9; // rsi
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+10h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+18h] [rbp-128h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_group_map; // [rsp+20h] [rbp-120h]
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+28h] [rbp-118h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+40h] [rbp-100h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 notify:844";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::notifyGroupSuiteToClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  proto::GroupSuiteNotify::GroupSuiteNotify((proto::GroupSuiteNotify *const)(v2 + 32));
  proto_group_map = proto::GroupSuiteNotify::mutable_group_map((proto::GroupSuiteNotify *const)(v2 + 32));
  __for_range = &this->group_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
    group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
    if ( std::operator!=<Group>(group_ptr, 0LL) )
    {
      v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
      group_script_config_ptr = Group::getScriptConfig(v5);
      if ( group_script_config_ptr )
      {
        if ( !std::unordered_map<unsigned int,NpcScriptConfig>::empty(&group_script_config_ptr->npc_config_map) )
        {
          v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
          SuiteIndex = Group::getSuiteIndex(v7);
          v9 = group_id;
          v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_group_map, group_id);
          v11 = v10;
          v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
          if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
          {
            LOBYTE(v9) = v12 != 0;
            __asan_report_store4(v10, v9, (_BYTE)v10);
          }
          *v11 = SuiteIndex;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "notifyGroupSuiteToClient",
          853);
        v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v23,
               (const char (*)[33])"getScriptConfig failed,group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, group_id);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::GroupSuiteNotify::~GroupSuiteNotify((proto::GroupSuiteNotify *const)(v2 + 32));
  result = 0;
  if ( v24 == (char *)v2 )
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

// Line 868: range 00000000159B7C16-00000000159B8540
__int64 __fastcall SceneBlockGroupComp::getGroupVariableValue(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        const std::string *name)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  Group *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v15; // rax
  proto::GroupBin *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 v19; // rax
  const google::protobuf::Map<std::string,proto::GroupVariableBin> *v20; // rax
  const google::protobuf::Map<std::string,proto::GroupVariableBin> *v21; // rax
  google::protobuf::Map<std::string,proto::GroupVariableBin>::const_pointer v22; // rax
  __int64 v23; // rax
  __int64 result; // rax
  uint32_t config_id; // [rsp+2Ch] [rbp-1C4h]
  google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::const_iterator __for_end; // [rsp+30h] [rbp-1C0h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+38h] [rbp-1B8h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+40h] [rbp-1B0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+48h] [rbp-1A8h]
  const google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin> *__for_range; // [rsp+50h] [rbp-1A0h]
  const proto::GroupVariableConfigIdBin *v32; // [rsp+58h] [rbp-198h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+60h] [rbp-190h]
  const GroupScriptConfig *group_config_ptr; // [rsp+68h] [rbp-188h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+70h] [rbp-180h] BYREF
  google::protobuf::Map<std::string,proto::GroupVariableBin>::const_iterator b; // [rsp+80h] [rbp-170h] BYREF
  common::milog::MiLogStream v37; // [rsp+A0h] [rbp-150h] BYREF
  char v38[304]; // [rsp+C0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 9 value:875 48 4 12 group_id:867 64 8 8 iter:869 96 8 6 it:897 128 8 24 variable_config_i"
                        "ter:927 160 16 13 group_ptr:872 192 24 10 v_iter:910";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::getGroupVariableValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v4 + 48));
  __for_end.it_ = (void *const *)std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v4 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)&__for_end) )
    goto LABEL_57;
  v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v4 + 64));
  std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v4 + 160), &v7->second);
  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 160)) )
  {
    *(_DWORD *)(v4 + 32) = 0;
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( Group::getVariableValue(v8, name, (int32_t *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "getGroupVariableValue",
        878);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v37, (const char (*)[34])off_258E6E00);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, name);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    v3 = *(_DWORD *)(v4 + 32);
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 160));
  if ( v12 == 1 )
  {
LABEL_57:
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v15 = *p_vptr_DescribalBase + 456LL;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v15)(scene, *(unsigned int *)(v4 + 48));
    __in.second = v16;
    ret = std::get<0ul,int,proto::GroupBin *>(&__in);
    group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "getGroupVariableValue",
        887);
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v37,
              (const char (*)[31])"findGroupBin failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v3 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !*group_bin_ptr )
        goto LABEL_58;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 160));
      v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                  &v18->design_config.lua_config_mgr,
                                  *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
      if ( group_script_config_ptr )
      {
        *(std::unordered_map<std::string,VariableScriptConfig>::const_iterator *)(v4 + 96) = std::unordered_map<std::string,VariableScriptConfig>::find(
                                                                                               &group_script_config_ptr->variable_map,
                                                                                               name);
        __for_end.it_ = (void *const *)std::unordered_map<std::string,VariableScriptConfig>::end(&group_script_config_ptr->variable_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<std::string const,VariableScriptConfig>,true>(
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)(v4 + 96),
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)&__for_end) )
        {
          v19 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,VariableScriptConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)(v19 + 32) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v19 + 32) >> 3) + 0x7FFF8000) <= 3 )
          {
            v19 = __asan_report_load4();
          }
          config_id = *(_DWORD *)(v19 + 32);
          if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __for_range = proto::GroupBin::variable_config_id_bin_list(*group_bin_ptr);
          *(google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::const_iterator *)(v4 + 128) = google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::begin(__for_range);
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::GroupVariableConfigIdBin const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::GroupVariableConfigIdBin> *const)(v4 + 128),
                    &__for_end) )
          {
            v32 = google::protobuf::internal::RepeatedPtrIterator<proto::GroupVariableConfigIdBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GroupVariableConfigIdBin> *const)(v4 + 128));
            if ( config_id == proto::GroupVariableConfigIdBin::config_id(v32) )
            {
              v3 = proto::GroupVariableConfigIdBin::value(v32);
              goto LABEL_52;
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::GroupVariableConfigIdBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GroupVariableConfigIdBin> *const)(v4 + 128));
          }
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = proto::GroupBin::variable_map[abi:cxx11](*group_bin_ptr);
      google::protobuf::Map<std::string,proto::GroupVariableBin>::find(
        (google::protobuf::Map<std::string,proto::GroupVariableBin>::const_iterator *)(v4 + 192),
        v20,
        name);
      if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = proto::GroupBin::variable_map[abi:cxx11](*group_bin_ptr);
      google::protobuf::Map<std::string,proto::GroupVariableBin>::end(&b, v21);
      if ( google::protobuf::operator!=(
             (const google::protobuf::Map<std::string,proto::GroupVariableBin>::const_iterator *)(v4 + 192),
             &b) )
      {
        v22 = google::protobuf::Map<std::string,proto::GroupVariableBin>::const_iterator::operator->((const google::protobuf::Map<std::string,proto::GroupVariableBin>::const_iterator *const)(v4 + 192));
        v3 = proto::GroupVariableBin::value(&v22->second);
      }
      else
      {
LABEL_58:
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene_config_ptr = Scene::getScriptConfig(this->scene_);
        if ( scene_config_ptr )
        {
          group_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, *(_DWORD *)(v4 + 48));
          if ( group_config_ptr )
          {
            *(std::unordered_map<std::string,VariableScriptConfig>::const_iterator *)(v4 + 128) = std::unordered_map<std::string,VariableScriptConfig>::find(
                                                                                                    &group_config_ptr->variable_map,
                                                                                                    name);
            __for_end.it_ = (void *const *)std::unordered_map<std::string,VariableScriptConfig>::end(&group_config_ptr->variable_map)._M_cur;
            if ( std::__detail::operator==<std::pair<std::string const,VariableScriptConfig>,true>(
                   (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)(v4 + 128),
                   (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)&__for_end) )
            {
              v3 = 0;
            }
            else
            {
              v23 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,VariableScriptConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true> *const)(v4 + 128));
              if ( *(_BYTE *)(((unsigned __int64)(v23 + 72) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(v23 + 72) >> 3) + 0x7FFF8000) <= 3 )
              {
                v23 = __asan_report_load4();
              }
              v3 = *(_DWORD *)(v23 + 72);
            }
          }
          else
          {
            v3 = 0;
          }
        }
        else
        {
          v3 = 0;
        }
      }
    }
  }
LABEL_52:
  result = v3;
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 937: range 00000000159B8542-00000000159B87CD
__int64 __fastcall SceneBlockGroupComp::unloadGroup(SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool isActive; // al
  __int64 result; // rax
  std::shared_ptr<Group> p_group_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:936 64 16 13 group_ptr:938";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::unloadGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 64)) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( !Group::canUnload(v6) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "unloadGroup",
        947);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"unloadGroup but group_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             v8,
             (const char (*)[30])" canUnload fails, isActive():");
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      isActive = Group::isActive(v10);
      common::milog::MiLogStream::operator<<(v9, isActive);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = 0;
    }
    else
    {
      std::shared_ptr<Group>::shared_ptr(&p_group_ptr, (const std::shared_ptr<Group> *)(v2 + 64));
      v5 = SceneBlockGroupComp::forceUnloadGroup(this, &p_group_ptr, 1);
      std::shared_ptr<Group>::~shared_ptr(&p_group_ptr);
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 956: range 00000000159B8848-00000000159B910A
int32_t __cdecl SceneBlockGroupComp::forceUnloadGroup(
        SceneBlockGroupComp *const this,
        GroupPtr *p_group_ptr,
        bool is_need_refresh_replacement)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  Group *v7; // rax
  Group *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(SceneBlockGroupComp *const, _QWORD); // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t GroupId; // edx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // edx
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Scene *scene; // r14
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v21; // rax
  unsigned int (__fastcall *v22)(Scene *, unsigned __int64); // r15
  bool v23; // r14
  common::milog::MiLogStream *v24; // r14
  Scene *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  Group *v29; // rax
  Group *v30; // rax
  ChallengeComp *ChallengeComp; // rax
  Group *v32; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t v36; // eax
  Player *v37; // rax
  Group *v38; // rcx
  common::milog::MiLogStream *v39; // rbx
  Scene *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rbx
  Group *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  bool isStarted; // al
  unsigned int v52; // [rsp+30h] [rbp-100h] BYREF
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  const GroupScriptConfig *group_script_config_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v55; // [rsp+40h] [rbp-F0h] BYREF
  char v56[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 14 player_ptr:992 80 40 10 notify:990";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::forceUnloadGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    result = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    Group::fireWillUnloadEvent(v7);
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    Group::stopHandleEvent(v8);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_SceneCompBase + 20);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(unsigned __int8 (__fastcall **)(SceneBlockGroupComp *const, _QWORD))v9;
    v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    GroupId = Group::getGroupId(v11);
    if ( v10(this, GroupId) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "forceUnloadGroup",
        967);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v55,
              (const char (*)[42])"group already dead when unload, group id:");
      v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      val = Group::getGroupId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v55);
    }
    else
    {
      v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      v16 = Group::getGroupId(v15);
      if ( SceneBlockGroupComp::isGroupDelayUnregister(this, v16) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "forceUnloadGroup",
          972);
        v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v55,
                (const char (*)[51])"group is unregister cleared when unload, group id:");
        v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
        val = Group::getGroupId(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
          p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
        v21 = *p_vptr_DescribalBase + 448LL;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        v22 = *(unsigned int (__fastcall **)(Scene *, unsigned __int64))v21;
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 48), p_group_ptr);
        v23 = v22(scene, v3 + 48) != 0;
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 48));
        if ( v23 )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "forceUnloadGroup",
            976);
          v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v55,
                  (const char (*)[51])"[SCENE_GROUP_UNLOAD] saveGroupToBin failed, scene:");
          v25 = SceneCompBase::getScene((SceneCompBase *const)this);
          v26 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v24, v25);
          v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])", group_id");
          v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
          val = Group::getGroupId(v28);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
          common::milog::MiLogStream::~MiLogStream(&v55);
        }
      }
    }
    v29 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    Group::setIsUnloading(v29, 1);
    v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    ChallengeComp = Group::getChallengeComp(v30);
    ChallengeComp::finishUnfinishedChallenges(
      ChallengeComp,
      UNLOAD,
      0,
      PlayerLogBodyChallengeFinish_FinishType_EXIT_SIGHT);
    v32 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    std::function<ForeachPolicy ()(Entity &)>::function<SceneBlockGroupComp::forceUnloadGroup(std::shared_ptr<Group>,bool)::{lambda(Entity &)#1},void,void>(
      (std::function<ForeachPolicy(Entity&)> *const)&v55,
      (SceneBlockGroupComp::forceUnloadGroup::<lambda(Entity&)>)2);
    Group::foreachEntity(v32, (std::function<ForeachPolicy(Entity&)> *)&v55);
    std::function<ForeachPolicy ()(Entity &)>::~function((std::function<ForeachPolicy(Entity&)> *const)&v55);
    v33 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    group_script_config_ptr = Group::getScriptConfig(v33);
    if ( group_script_config_ptr
      && !std::unordered_map<unsigned int,NpcScriptConfig>::empty(&group_script_config_ptr->npc_config_map) )
    {
      proto::GroupUnloadNotify::GroupUnloadNotify((proto::GroupUnloadNotify *const)(v3 + 80));
      v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      v36 = Group::getGroupId(v35);
      proto::GroupUnloadNotify::add_group_list((proto::GroupUnloadNotify *const)(v3 + 80), v36);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getOwnPlayer((const Scene *const)(v3 + 48));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 48), 0LL) )
      {
        v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        Player::sendProto(v37, (const google::protobuf::Message *)(v3 + 80));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 48));
      proto::GroupUnloadNotify::~GroupUnloadNotify((proto::GroupUnloadNotify *const)(v3 + 80));
    }
    v38 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    SceneBlockGroupComp::finalRemoveGroup(this, v38, is_need_refresh_replacement);
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "forceUnloadGroup",
      1000);
    v39 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v55,
            (const char (*)[28])"[SCENE_GROUP_UNLOAD] scene:");
    v40 = SceneCompBase::getScene((SceneCompBase *const)this);
    v41 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v39, v40);
    v42 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v41, (const char (*)[17])"unload group_id:");
    v43 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    v52 = Group::getGroupId(v43);
    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &v52);
    v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v44, (const char (*)[14])",suite index:");
    v46 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    val = Group::getSuiteIndex(v46);
    v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
    v48 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v47, (const char (*)[11])" started: ");
    v49 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    isStarted = Group::isStarted(v49);
    common::milog::MiLogStream::operator<<(v48, isStarted);
    common::milog::MiLogStream::~MiLogStream(&v55);
    result = 0;
  }
  if ( v56 == (char *)v3 )
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
  return result;
};

// Line 981: range 00000000159B87CE-00000000159B8846
ForeachPolicy __cdecl SceneBlockGroupComp::forceUnloadGroup(std::shared_ptr<Group>,bool)::{lambda(Entity &)#1}::operator()(
        const SceneBlockGroupComp::forceUnloadGroup::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(entity->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(Entity *, VisionContext *))v2)(entity, &VisionContext::miss_context);
  return 0;
};

// Line 1005: range 00000000159B910C-00000000159B979A
void __cdecl SceneBlockGroupComp::forceUnloadGroupBatch(
        SceneBlockGroupComp *const this,
        const std::unordered_set<unsigned int> *group_set,
        bool no_warning,
        bool clear_bin,
        bool is_need_refresh_replacement)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v13; // rax
  GroupsReplacementMgr *v15; // rax
  bool has_unregister_cleared_group; // [rsp+2Fh] [rbp-191h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+40h] [rbp-180h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+48h] [rbp-178h]
  std::shared_ptr<Group> p_group_ptr; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v27; // [rsp+A0h] [rbp-120h] BYREF
  common::milog::MiLogStream v28; // [rsp+C0h] [rbp-100h] BYREF
  char v29[224]; // [rsp+E0h] [rbp-E0h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 13 group_id:1008 64 8 9 iter:1014 96 56 22 real_replaced_set:1006";
  *(_QWORD *)(v5 + 16) = SceneBlockGroupComp::forceUnloadGroupBatch;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v5 + 96));
  has_unregister_cleared_group = 0;
  __for_range = group_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(group_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(group_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v5 + 48) = *v8;
    if ( std::unordered_map<unsigned int,int>::erase(
           &this->loading_group_map_,
           (const std::unordered_map<unsigned int,int>::key_type *)(v5 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "forceUnloadGroupBatch",
        1012);
      common::milog::MiLogStream::operator()(&v25, "remove Loading Group[%u]", *(unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                        &this->group_map_,
                                                                                        (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 64),
           &__y) )
    {
      if ( !no_warning )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "forceUnloadGroupBatch",
          1019);
        common::milog::MiLogStream::operator()(&v26, "group_id=%u not loaded.", *(unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
    }
    else
    {
      if ( SceneBlockGroupComp::isGroupDelayUnregister(this, *(_DWORD *)(v5 + 48)) )
        has_unregister_cleared_group = 1;
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 64));
      std::shared_ptr<Group>::shared_ptr(&p_group_ptr, &v9->second);
      SceneBlockGroupComp::forceUnloadGroup(this, &p_group_ptr, 0);
      std::shared_ptr<Group>::~shared_ptr(&p_group_ptr);
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v5 + 96),
        (const std::unordered_set<unsigned int>::value_type *)(v5 + 48));
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->find_group_count_map_,
             (const unsigned int *)(v5 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "forceUnloadGroupBatch",
          1032);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v27,
                (const char (*)[29])" force unload finding group:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "forceUnloadGroupBatch",
        1034);
      common::milog::MiLogStream::operator()(&v28, "force unload group_id=%u done.", *(unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    if ( clear_bin )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
        p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
      v13 = *p_vptr_DescribalBase + 464LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      (*(void (__fastcall **)(Scene *, _QWORD))v13)(scene, *(unsigned int *)(v5 + 48));
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( is_need_refresh_replacement
    && has_unregister_cleared_group
    && std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v15 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    GroupsReplacementMgr::refreshGroupsReplacement(v15);
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v5 + 96));
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1050: range 00000000159B979C-00000000159B9CC9
void __cdecl SceneBlockGroupComp::unloadAllGroups(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // r14
  unsigned int val; // [rsp+18h] [rbp-148h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-144h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+30h] [rbp-130h]
  std::unordered_map<unsigned int,int> *__for_range_0; // [rsp+38h] [rbp-128h]
  std::pair<unsigned int const,int> *v14; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *group_id_0; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *count; // [rsp+50h] [rbp-110h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+58h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+60h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+68h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+90h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 10 timer:1056 64 56 21 unload_group_set:1058";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::unloadAllGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Scene::isHomeScene(this->scene_) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "unloadAllGroups",
      1053);
    v4 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v20,
           (const char (*)[53])"[GROUP] unloadAllGroups in not home scene. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OwnerUid = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 32));
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
    __for_range = &this->group_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
      group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
      group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v1 + 64), group_id);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = &this->loading_group_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::unordered_map<unsigned int,int>::begin(&this->loading_group_map_)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::unordered_map<unsigned int,int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,int>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,int>,false> *)&__for_end) )
    {
      v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false> *const)&__for_begin);
      group_id_0 = std::get<0ul,unsigned int const,int>(v14);
      count = std::get<1ul,unsigned int const,int>(v14);
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v1 + 64), group_id_0);
      std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false> *const)&__for_begin);
    }
    SceneBlockGroupComp::forceUnloadGroupBatch(this, (const std::unordered_set<unsigned int> *)(v1 + 64), 1, 1, 0);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "unloadAllGroups",
      1068);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v20,
           (const char (*)[21])"[GROUP] unload cost:");
    OwnerUid = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 32));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)&OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
  }
  if ( v21 == (char *)v1 )
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
};

// Line 1073: range 00000000159B9CCA-00000000159BA68F
bool __cdecl SceneBlockGroupComp::isGroupValid(
        const SceneBlockGroupComp *const this,
        const GroupInfoScriptConfig *group_info_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  bool v8; // r14
  unsigned __int64 v9; // rax
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > >::pointer v19; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > >::pointer v20; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t *v22; // rdx
  Player *v23; // rax
  PlayerActivityComp *ActivityComp; // rax
  bool result; // al
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  uint32_t game_time_hour; // [rsp+20h] [rbp-110h]
  uint32_t cond_id; // [rsp+24h] [rbp-10Ch]
  ActivityGroupType active_type; // [rsp+28h] [rbp-108h]
  uint32_t activity_id; // [rsp+2Ch] [rbp-104h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const std::unordered_set<unsigned int> *activity_id_set; // [rsp+40h] [rbp-F0h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v35; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 group_id:1074 48 4 17 weather_type:1112 64 8 9 iter:1137 96 16 15 player_ptr:1075";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)group_info_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)group_info_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = group_info_config->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "isGroupValid",
      1078);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v36, (const char (*)[17])"player not exist");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 48) = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v8 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_SceneCompBase + 20);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(const SceneBlockGroupComp *const, _QWORD))v9)(
           this,
           *(unsigned int *)(v2 + 32)) )
    {
      v8 = 0;
    }
    else if ( !SceneBlockGroupComp::isGroupLoadStrategyValid(this, group_info_config) )
    {
      v8 = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&group_info_config->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&group_info_config->is_dynamic_load);
      if ( group_info_config->is_dynamic_load )
      {
        if ( std::operator!=<GroupsReplacementMgr>(&this->replacement_mgr_ptr_, 0LL) )
        {
          v10 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
          v8 = GroupsReplacementMgr::isRegisted(v10, *(_DWORD *)(v2 + 32))
            || SceneBlockGroupComp::isGroupDelayUnregister(this, *(_DWORD *)(v2 + 32));
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        BasicComp = Player::getBasicComp(v11);
        game_time_hour = PlayerBasicComp::getGameHour(BasicComp);
        if ( !SceneBlockGroupComp::isGroupAliveTime(this, group_info_config, game_time_hour) )
        {
          v8 = 0;
        }
        else
        {
          if ( std::set<unsigned int>::empty(&group_info_config->weather_set) )
            goto LABEL_73;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          scene = this->scene_;
          p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
          if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
            p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
          v15 = *p_vptr_DescribalBase + 288LL;
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          *(_DWORD *)(v2 + 48) = (*(__int64 (__fastcall **)(Scene *, Vector3 *))v15)(scene, &group_info_config->pos);
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                  &group_info_config->weather_set,
                  (const unsigned int *)(v2 + 48)) )
          {
            v8 = 0;
          }
          else
          {
LABEL_73:
            if ( !SceneBlockGroupComp::isGroupVisionTypeValid(this, group_info_config) )
            {
              v8 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&group_info_config->activity_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&group_info_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( group_info_config->activity_id
                && std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::empty(&group_info_config->cond_mmap) )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "isGroupValid",
                  1129);
                v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v36,
                        (const char (*)[55])"group not define activity cond,will not load,group id:");
                v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v16,
                        (const unsigned int *)(v2 + 32));
                v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v17,
                        (const char (*)[13])"activity id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  &group_info_config->activity_id);
                common::milog::MiLogStream::~MiLogStream(&v36);
                v8 = 0;
              }
              else if ( !std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::empty(&group_info_config->cond_mmap) )
              {
                *(std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::const_iterator *)(v2 + 64) = std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::begin(&group_info_config->cond_mmap);
                while ( 1 )
                {
                  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::end(&group_info_config->cond_mmap)._M_node;
                  if ( !std::operator!=(
                          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > >::_Self *)(v2 + 64),
                          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > >::_Self *)&__for_end) )
                    break;
                  v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > > *const)(v2 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->second >> 3)
                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  cond_id = v19->second.first;
                  v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > > *const)(v2 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)&v20->second.second >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)v20 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->second.second >> 3)
                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  active_type = v20->second.second;
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v35);
                  v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
                  activity_id_set = NewActivityExcelConfigMgr::getActivitySetByCondId(
                                      &v21->design_config.txt_config_mgr.new_activity_config_mgr,
                                      cond_id);
                  std::shared_ptr<Config>::~shared_ptr(&v35);
                  __for_range = activity_id_set;
                  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(activity_id_set)._M_cur;
                  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
                  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
                  {
                    v22 = (uint32_t *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
                    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    activity_id = *v22;
                    v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                    ActivityComp = Player::getActivityComp(v23);
                    if ( PlayerActivityComp::isActivityCondMeet(ActivityComp, activity_id, cond_id) )
                    {
                      v8 = active_type == ActivityGroup_ACTIVE;
                      goto LABEL_68;
                    }
                    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
                  }
                  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,ActivityGroupType> > > *const)(v2 + 64));
                }
                if ( *(_BYTE *)(((unsigned __int64)&group_info_config->activity_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&group_info_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                v8 = group_info_config->activity_id == 0;
              }
              else
              {
                v8 = 1;
              }
            }
          }
        }
      }
    }
  }
LABEL_68:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  result = v8;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1162: range 00000000159BA690-00000000159BA8BA
__int64 __fastcall SceneBlockGroupComp::isGroupValid(const SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // r14d
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:1161";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupValid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  v5 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneId = Scene::getSceneId(this->scene_);
  group_info_config_ptr = Group::getGroupInfoScriptConfig(SceneId, v5, 0);
  if ( group_info_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_SceneCompBase + 39);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    result = (*(__int64 (__fastcall **)(const SceneBlockGroupComp *const, const GroupInfoScriptConfig *))v9)(
               this,
               group_info_config_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "isGroupValid",
      1166);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v11,
           (const char (*)[38])"findGroupInfoConfig fails, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
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

// Line 1174: range 00000000159BA8BC-00000000159BA9EB
bool __cdecl SceneBlockGroupComp::isGroupAliveTime(
        const SceneBlockGroupComp *const this,
        const GroupInfoScriptConfig *group_info_config,
        uint32_t hour)
{
  std::vector<GroupLifeConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<GroupLifeConfig>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::vector<GroupLifeConfig> *__for_range; // [rsp+30h] [rbp-10h]
  const GroupLifeConfig *life_config; // [rsp+38h] [rbp-8h]

  if ( std::vector<GroupLifeConfig>::empty(&group_info_config->life_cycle_vec) )
    return 1;
  __for_range = &group_info_config->life_cycle_vec;
  __for_begin._M_current = std::vector<GroupLifeConfig>::begin(&group_info_config->life_cycle_vec)._M_current;
  __for_end._M_current = std::vector<GroupLifeConfig>::end(&group_info_config->life_cycle_vec)._M_current;
  while ( __gnu_cxx::operator!=<GroupLifeConfig const*,std::vector<GroupLifeConfig>>(&__for_begin, &__for_end) )
  {
    life_config = __gnu_cxx::__normal_iterator<GroupLifeConfig const*,std::vector<GroupLifeConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)life_config >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)life_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)life_config >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( hour >= life_config->from_hour )
    {
      if ( *(_BYTE *)(((unsigned __int64)&life_config->to_hour >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)life_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&life_config->to_hour >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( hour < life_config->to_hour )
        return 1;
    }
    __gnu_cxx::__normal_iterator<GroupLifeConfig const*,std::vector<GroupLifeConfig>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1190: range 00000000159BA9EC-00000000159BACB2
bool __cdecl SceneBlockGroupComp::isGroupVisionTypeValid(
        const SceneBlockGroupComp *const this,
        const GroupInfoScriptConfig *group_info_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  bool *p_is_forbid_special_vision_type_control_group_load; // rax
  char v7; // al
  bool isGroupVisionTypeValidInScene; // r14
  common::milog::MiLogStream *v9; // rdx
  const Scene *Scene; // rcx
  bool result; // al
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 config_ptr:1192";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupVisionTypeValid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  if ( !std::operator!=<Config>((const std::shared_ptr<Config> *)(v2 + 32), 0LL) )
    goto LABEL_9;
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  p_is_forbid_special_vision_type_control_group_load = &v5->is_forbid_special_vision_type_control_group_load;
  if ( *(_BYTE *)(((unsigned __int64)p_is_forbid_special_vision_type_control_group_load >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_forbid_special_vision_type_control_group_load & 7) >= *(_BYTE *)(((unsigned __int64)p_is_forbid_special_vision_type_control_group_load >> 3)
                                                                                             + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_forbid_special_vision_type_control_group_load);
  }
  if ( v5->is_forbid_special_vision_type_control_group_load )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  if ( v7 )
  {
    isGroupVisionTypeValidInScene = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_info_config->is_load_by_vision_type >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)group_info_config + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config->is_load_by_vision_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load1(&group_info_config->is_load_by_vision_type);
    }
    if ( !group_info_config->is_load_by_vision_type )
    {
      isGroupVisionTypeValidInScene = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "isGroupVisionTypeValid",
        1201);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"group id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &group_info_config->group_id);
      common::milog::MiLogStream::~MiLogStream(&v12);
      Scene = SceneCompBase::getScene((const SceneCompBase *const)this);
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config->vision_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config->vision_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      isGroupVisionTypeValidInScene = Scene::isGroupVisionTypeValidInScene(Scene, group_info_config->vision_type);
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = isGroupVisionTypeValidInScene;
  if ( v13 == (char *)v2 )
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

// Line 1206: range 00000000159BACB4-00000000159BBBF4
void __cdecl SceneBlockGroupComp::unloadInvalidGroups(
        SceneBlockGroupComp *const this,
        const std::unordered_set<unsigned int> *active_group_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *Scene; // rax
  Scene *v6; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Group *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  Group *v16; // rax
  const GroupInitParam *InitParam; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // dl
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v24; // rdx
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  bool is_silent_update; // [rsp+1Bh] [rbp-1E5h]
  int last_time_us; // [rsp+1Ch] [rbp-1E4h]
  uint32_t max_unload_time_us; // [rsp+20h] [rbp-1E0h]
  uint32_t begin_time_us; // [rsp+24h] [rbp-1DCh]
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+28h] [rbp-1D8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+30h] [rbp-1D0h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-1C8h]
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+40h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1B8h]
  const GroupInfoScriptConfig *group_info_config_ptr_0; // [rsp+50h] [rbp-1B0h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+58h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+60h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+68h] [rbp-198h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+70h] [rbp-190h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+78h] [rbp-188h]
  const std::string *md5; // [rsp+80h] [rbp-180h]
  const std::string *script_md5; // [rsp+88h] [rbp-178h]
  common::milog::MiLogStream v59; // [rsp+90h] [rbp-170h] BYREF
  char v60[336]; // [rsp+B0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 14 owner_uid:1214 48 4 13 group_id:1275 64 16 10 timer:1265 96 16 15 config_ptr:1269 128 "
                        "24 21 unload_group_vec:1215 192 56 28 silent_update_group_set:1216";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::unloadInvalidGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  scene_script_config_ptr = Scene::getScriptConfig(Scene);
  if ( !scene_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "unloadInvalidGroups",
      1210);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v59, (const char (*)[22])"getScriptConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v59);
    goto LABEL_68;
  }
  v6 = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v2 + 32) = Scene::getOwnerUid(v6);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 192));
  __for_range = &this->group_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
    group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
    if ( !std::operator==<Group>(0LL, group_ptr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_script_config_ptr, *group_id);
      if ( group_info_config_ptr )
      {
        v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
        group_script_config_ptr = Group::getScriptConfig(v7);
        if ( group_script_config_ptr )
        {
          is_silent_update = 0;
          v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
          md5 = &Group::getInitParam(v11)->md5;
          script_md5 = &group_script_config_ptr->script_content.lua_content_md5;
          if ( std::operator!=<char>(md5, &group_script_config_ptr->script_content.lua_content_md5) )
          {
            is_silent_update = 1;
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_block_group_comp.cpp",
              "unloadInvalidGroups",
              1243);
            v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v59, (const char (*)[7])"group ");
            v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
            *(_DWORD *)(v2 + 48) = Group::getGroupId(v13);
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 48));
            v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v14,
                    (const char (*)[24])" md5 changed, filepath[");
            v16 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
            InitParam = Group::getInitParam(v16);
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v15,
                    &InitParam->group_lua_file_path);
            v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ==> ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v19,
              &group_script_config_ptr->script_content.file_path);
            common::milog::MiLogStream::~MiLogStream(&v59);
          }
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                  active_group_set,
                  group_id) )
          {
            if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
                   &this->find_group_count_map_,
                   group_id) )
            {
              common::milog::MiLogStream::create(
                &v59,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_block_group_comp.cpp",
                "unloadInvalidGroups",
                1254);
              v20 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v59,
                      (const char (*)[36])off_258E7960);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, group_id);
              common::milog::MiLogStream::~MiLogStream(&v59);
            }
            else
            {
              std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), group_id);
              if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->is_force_silent_reload >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)group_info_config_ptr - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->is_force_silent_reload >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&group_info_config_ptr->is_force_silent_reload);
              }
              if ( !group_info_config_ptr->is_force_silent_reload && is_silent_update )
                std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 192), group_id);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "unloadInvalidGroups",
            1233);
          v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v59,
                 (const char (*)[27])"getScriptConfig for group ");
          v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
          *(_DWORD *)(v2 + 48) = Group::getGroupId(v9);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v8,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" failed.");
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
  }
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  last_time_us = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 64));
  begin_time_us = last_time_us;
  max_unload_time_us = 1000;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v21 = 0LL;
  if ( std::operator!=<Config>((const std::shared_ptr<Config> *)(v2 + 96), 0LL) )
  {
    v22 = (__int64)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v23 = *(_BYTE *)(((unsigned __int64)(v22 + 2360) >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v23 != 0;
    if ( v23 != 0 && v23 <= 3 )
      v22 = __asan_report_load4();
    max_unload_time_us = *(_DWORD *)(v22 + 2360);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_unload_group_num_, v21, (_BYTE)this + 40);
  }
  this->need_unload_group_num_ = 0;
  __for_range_0 = (std::vector<unsigned int> *)(v2 + 128);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v24 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v24;
    if ( max_unload_time_us >= last_time_us - begin_time_us )
      goto LABEL_53;
    group_info_config_ptr_0 = SceneScriptConfig::findGroupInfoConfig(scene_script_config_ptr, *(_DWORD *)(v2 + 48));
    if ( !group_info_config_ptr_0 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_0->is_force_unload_nodelay >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)group_info_config_ptr_0 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_0->is_force_unload_nodelay >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load1(&group_info_config_ptr_0->is_force_unload_nodelay);
    }
    if ( group_info_config_ptr_0->is_force_unload_nodelay )
    {
LABEL_52:
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "unloadInvalidGroups",
        1293);
      common::milog::MiLogStream::operator()(&v59, "[FORCE_UNLOAD_NODELAY] group=%u", *(unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v59);
LABEL_53:
      SceneBlockGroupComp::unloadGroup(this, *(_DWORD *)(v2 + 48));
      last_time_us = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 64));
      goto LABEL_54;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = (unsigned __int64)(this->_vptr_SceneCompBase + 39);
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8();
    if ( !(*(unsigned __int8 (__fastcall **)(SceneBlockGroupComp *const, const GroupInfoScriptConfig *))v25)(
            this,
            group_info_config_ptr_0)
      || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           (std::unordered_set<unsigned int> *)(v2 + 192),
           (const unsigned int *)(v2 + 48)) )
    {
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ++this->need_unload_group_num_;
LABEL_54:
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->need_unload_group_num_ <= 0x12C )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->need_unload_group_num_ <= 0x32 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->need_unload_group_num_ )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "unloadInvalidGroups",
          1310);
        v37 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v59,
                (const char (*)[23])"unload_group_vec size:");
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128));
        v38 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v37,
                (const unsigned __int64 *)&__for_end);
        v39 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v38,
                (const char (*)[26])" need_unload_group_num_ :");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &this->need_unload_group_num_);
        v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v59);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "unloadInvalidGroups",
        1306);
      v32 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v59,
              (const char (*)[23])"unload_group_vec size:");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128));
      v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v32,
              (const unsigned __int64 *)&__for_end);
      v34 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v33,
              (const char (*)[26])" need_unload_group_num_ :");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &this->need_unload_group_num_);
      v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v59);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "unloadInvalidGroups",
      1302);
    v27 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v59,
            (const char (*)[23])"unload_group_vec size:");
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128));
    v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v27,
            (const unsigned __int64 *)&__for_end);
    v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v28,
            (const char (*)[26])" need_unload_group_num_ :");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->need_unload_group_num_);
    v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v59);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 192));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
LABEL_68:
  if ( v60 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1315: range 00000000159BBBF6-00000000159BBCD1
int32_t __cdecl SceneBlockGroupComp::reloadGroups(SceneBlockGroupComp *const this)
{
  GroupsReplacementMgr *v1; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v1 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    GroupsReplacementMgr::doInsituReload(
      v1,
      LOAD_AND_START,
      "./src/scene/scene_block_group_comp.cpp",
      "reloadGroups",
      1319);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "reloadGroups",
      1323);
    common::milog::MiLogStream::operator()(&v3, "replacement_mgr_ptr_ NULL ptr.");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
};

// Line 1329: range 00000000159BBCD2-00000000159BBE6B
void __fastcall SceneBlockGroupComp::onGameHourChange(SceneBlockGroupComp *const this, uint32_t hour)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  Scene *Scene; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 hour:1328";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::onGameHourChange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = hour;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "onGameHourChange",
    1330);
  v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v10, (const char (*)[18])"onGameHourChange ");
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  val = Scene::getSceneId(Scene);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" hour: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1334: range 00000000159BBE6C-00000000159BC291
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall SceneBlockGroupComp::onPlayerEyePosChange(
        SceneBlockGroupComp *const this,
        uint32_t uid,
        Vector3 new_pos)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Scene *Scene; // rax
  common::milog::MiLogStream *v7; // rbx
  Scene *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3> >::pointer v10; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+28h] [rbp-D8h]
  Vector2 last_pos; // [rsp+30h] [rbp-D0h] BYREF
  Vector2 new_posa; // [rsp+38h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+60h] [rbp-A0h] BYREF
  Vector2 v20; // 0:xmm0_8.8
  Vector2 v21; // 0:xmm1_8.8

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1333 64 8 9 iter:1355 96 12 12 new_pos:1333";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::onPlayerEyePosChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202177536;
  *(_DWORD *)(v3 + 48) = uid;
  *(Vector3 *)(v3 + 96) = new_pos;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  scene_script_config_ptr = Scene::getScriptConfig(Scene);
  if ( scene_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_init_);
    }
    if ( !this->is_init_ )
    {
      result = 0LL;
    }
    else
    {
      *(std::map<unsigned int,Vector3>::iterator *)(v3 + 64) = std::map<unsigned int,Vector3>::find(
                                                                 &this->last_reload_pos_map_,
                                                                 (const std::map<unsigned int,Vector3>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,Vector3>::end(&this->last_reload_pos_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3> >::_Self *)(v3 + 64),
             &__y)
        || (Vector2::Vector2(&new_posa, (const Vector3 *)(v3 + 96)),
            v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3> > *const)(v3 + 64)),
            Vector2::Vector2(&last_pos, &v10->second),
            v21 = new_posa,
            v20 = last_pos,
            SceneScriptConfig::isCoordinateChanged(scene_script_config_ptr, v20, v21))
        || SceneBlockGroupComp::getIsNeedReloadGroup(this) )
      {
        v12 = (unsigned __int64)std::map<unsigned int,Vector3>::operator[](
                                  &this->last_reload_pos_map_,
                                  (const std::map<unsigned int,Vector3>::key_type *)(v3 + 48));
        if ( (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v12 + 11) & 7) >= *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) )
        {
          v12 = __asan_report_store_n(v12, 12LL);
        }
        *(_QWORD *)v12 = *(_QWORD *)(v3 + 96);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(v3 + 104);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = (unsigned __int64)(this->_vptr_SceneCompBase + 36);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        result = (*(__int64 (__fastcall **)(SceneBlockGroupComp *const))v13)(this);
      }
      else
      {
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "onPlayerEyePosChange",
      1338);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v18,
           (const char (*)[32])" get scene script config failed");
    v8 = SceneCompBase::getScene((SceneCompBase *const)this);
    common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v7, v8);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v3 )
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

// Line 1367: range 00000000159BC292-00000000159BC803
int32_t __cdecl SceneBlockGroupComp::asyncLoadGroupBatch(common::minet::PacketPtr *p_packet_ptr, std::any *p_context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::size_t v5; // r14
  const std::type_info *v6; // rax
  const char *v7; // rbx
  const std::type_info *v8; // rax
  const char *v9; // rax
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  std::vector<GroupLoadContext>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<GroupLoadContext>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<GroupLoadContext> *__for_range; // [rsp+30h] [rbp-D0h]
  GroupLoadContext *ctx; // [rsp+38h] [rbp-C8h]
  std::any __any; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 16 context_ptr:1368 64 16 14 group_ptr:1376";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::asyncLoadGroupBatch;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  v5 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<GroupBatchLoadContext>);
  v6 = std::any::type(p_context);
  if ( v5 == std::type_info::hash_code(v6) )
  {
    std::shared_ptr<GroupBatchLoadContext>::shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)(v2 + 32), 0LL);
    std::any_cast<std::shared_ptr<GroupBatchLoadContext>>(&__any);
    std::shared_ptr<GroupBatchLoadContext>::operator=(
      (std::shared_ptr<GroupBatchLoadContext> *const)(v2 + 32),
      (std::shared_ptr<GroupBatchLoadContext> *)&__any);
    std::shared_ptr<GroupBatchLoadContext>::~shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)&__any);
    if ( std::operator==<GroupBatchLoadContext>((const std::shared_ptr<GroupBatchLoadContext> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "asyncLoadGroupBatch",
        1371);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v18, (const char (*)[20])"context_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v10 = -1;
    }
    else
    {
      __for_range = (std::vector<GroupLoadContext> *)std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __for_begin._M_current = std::vector<GroupLoadContext>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<GroupLoadContext>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<GroupLoadContext *,std::vector<GroupLoadContext>>(&__for_begin, &__for_end) )
      {
        ctx = __gnu_cxx::__normal_iterator<GroupLoadContext *,std::vector<GroupLoadContext>>::operator*(&__for_begin);
        SceneBlockGroupComp::loadGroupFromContext((GroupLoadContext *)(v2 + 64));
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "asyncLoadGroupBatch",
            1379);
          v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v18,
                  (const char (*)[39])"loadGroupFromContext failed, group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &ctx->group_id);
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
        else
        {
          std::shared_ptr<Group>::operator=(&ctx->group_ptr, (const std::shared_ptr<Group> *)(v2 + 64));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
        __gnu_cxx::__normal_iterator<GroupLoadContext *,std::vector<GroupLoadContext>>::operator++(&__for_begin);
      }
      v10 = 0;
    }
    std::shared_ptr<GroupBatchLoadContext>::~shared_ptr((std::shared_ptr<GroupBatchLoadContext> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "asyncLoadGroupBatch",
      1368);
    v7 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<GroupBatchLoadContext>);
    v8 = std::any::type(p_context);
    v9 = std::type_info::name(v8);
    common::milog::MiLogStream::operator()(&v18, off_258E7D20, v9, v7);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = -1;
  }
  result = v10;
  if ( v19 == (char *)v2 )
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

// Line 1388: range 00000000159BC878-00000000159BDA4C
int32_t __cdecl SceneBlockGroupComp::onLoadGroupBatchSucc(
        SceneBlockGroupComp *const this,
        std::shared_ptr<GroupBatchLoadContext> *p_context_ptr,
        bool start)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r15
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  unsigned __int64 v26; // rax
  _BYTE *v27; // rdx
  common::milog::MiLogStream *v29; // r14
  Scene *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  Group *v36; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  Group *v39; // rax
  uint32_t SuiteIndex; // r14d
  char *v41; // rsi
  unsigned int *v42; // rax
  uint32_t *v43; // rdx
  char v44; // cl
  const std::shared_ptr<Group> *v45; // rax
  Group *v46; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v47; // rdx
  Scene *v48; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-280h] BYREF
  uint32_t num; // [rsp+24h] [rbp-27Ch]
  int32_t loading_cnt; // [rsp+28h] [rbp-278h]
  int32_t ret; // [rsp+2Ch] [rbp-274h]
  std::vector<GroupLoadContext>::iterator __for_begin; // [rsp+30h] [rbp-270h] BYREF
  std::vector<GroupLoadContext>::iterator __for_end; // [rsp+38h] [rbp-268h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_group_map; // [rsp+40h] [rbp-260h]
  std::vector<GroupLoadContext> *__for_range; // [rsp+48h] [rbp-258h]
  std::vector<std::shared_ptr<Group>> *__for_range_0; // [rsp+50h] [rbp-250h]
  std::set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-248h]
  GroupLoadContext *ctx; // [rsp+60h] [rbp-240h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+68h] [rbp-238h]
  common::milog::MiLogStream v63; // [rsp+70h] [rbp-230h] BYREF
  char v64[528]; // [rsp+90h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 16 world_level:1401 64 4 13 group_id:1434 80 4 17 load_version:1435 96 4 13 group_id:149"
                        "2 112 16 15 player_ptr:1394 144 16 14 group_ptr:1410 176 16 14 group_ptr:1480 208 24 21 loaded_g"
                        "roup_vec:1407 272 48 25 zero_loading_cnt_set:1406 352 96 11 notify:1403";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::onLoadGroupBatchSucc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862730] = -218959118;
  v5[536862734] = -202116109;
  if ( std::operator==<GroupBatchLoadContext>(p_context_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "onLoadGroupBatchSucc",
      1391);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v63, (const char (*)[20])"context_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v63);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnPlayer((const Scene *const)(v3 + 112));
    if ( !Scene::isHomeScene(this->scene_) && std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "onLoadGroupBatchSucc",
        1397);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v63,
        (const char (*)[24])"find own player failed!");
      common::milog::MiLogStream::~MiLogStream(&v63);
      v6 = -1;
    }
    else
    {
      num = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
        p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
      v10 = *p_vptr_DescribalBase + 400LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(Scene *))v10)(scene);
      proto::GroupSuiteNotify::GroupSuiteNotify((proto::GroupSuiteNotify *const)(v3 + 352));
      proto_group_map = proto::GroupSuiteNotify::mutable_group_map((proto::GroupSuiteNotify *const)(v3 + 352));
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 272));
      std::vector<std::shared_ptr<Group>>::vector((std::vector<std::shared_ptr<Group>> *const)(v3 + 208));
      __for_range = (std::vector<GroupLoadContext> *)std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupBatchLoadContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_context_ptr);
      __for_begin._M_current = std::vector<GroupLoadContext>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<GroupLoadContext>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<GroupLoadContext *,std::vector<GroupLoadContext>>(&__for_begin, &__for_end) )
      {
        ctx = __gnu_cxx::__normal_iterator<GroupLoadContext *,std::vector<GroupLoadContext>>::operator*(&__for_begin);
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 144), &ctx->group_ptr);
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,int>,unsigned int>(
                &this->loading_group_map_,
                &ctx->group_id) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_block_group_comp.cpp",
            "onLoadGroupBatchSucc",
            1415);
          if ( *(_BYTE *)(((unsigned __int64)ctx >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)ctx >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          common::milog::MiLogStream::operator()(
            &v63,
            "Group[%u] was replaced before async loading is done.",
            ctx->group_id);
          common::milog::MiLogStream::~MiLogStream(&v63);
        }
        else
        {
          v11 = (unsigned __int64)std::unordered_map<unsigned int,int>::operator[](
                                    &this->loading_group_map_,
                                    &ctx->group_id);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load4();
          loading_cnt = --*(_DWORD *)v11;
          if ( loading_cnt <= 0 )
          {
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 272), &ctx->group_id);
            if ( loading_cnt < 0 )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_block_group_comp.cpp",
                "onLoadGroupBatchSucc",
                1425);
              if ( *(_BYTE *)(((unsigned __int64)ctx >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)ctx >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              common::milog::MiLogStream::operator()(
                &v63,
                "Group[%u] loading cnt[%d] is netagive.",
                ctx->group_id,
                (unsigned int)loading_cnt);
              common::milog::MiLogStream::~MiLogStream(&v63);
            }
          }
          if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 144)) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "onLoadGroupBatchSucc",
              1431);
            v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v63,
                    (const char (*)[39])"loadGroupFromContext failed, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &ctx->group_id);
            common::milog::MiLogStream::~MiLogStream(&v63);
          }
          else
          {
            v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            *(_DWORD *)(v3 + 64) = Group::getGroupId(v13);
            if ( *(_BYTE *)(((unsigned __int64)&ctx->group_load_version >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&ctx->group_load_version >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 80) = ctx->group_load_version;
            v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            *(_DWORD *)(v3 + 96) = Group::getGroupId(v14);
            v15 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    &this->group_load_version_map_,
                    (std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *v15 <= *(_DWORD *)(v3 + 80) )
            {
              std::shared_ptr<Group>::shared_ptr(
                (std::shared_ptr<Group> *const)(v3 + 176),
                (const std::shared_ptr<Group> *)(v3 + 144));
              ret = SceneBlockGroupComp::emplaceGroupAndEnterScene(this, (GroupPtr *)(v3 + 176), start);
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 176));
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "onLoadGroupBatchSucc",
                  1447);
                v24 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v63,
                        (const char (*)[44])"emplaceGroupAndEnterScene failed, group_id:");
                v25 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                *(_DWORD *)(v3 + 96) = Group::getGroupId(v25);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::~MiLogStream(&v63);
              }
              else
              {
                ++num;
                std::vector<std::shared_ptr<Group>>::push_back(
                  (std::vector<std::shared_ptr<Group>> *const)(v3 + 208),
                  (const std::vector<std::shared_ptr<Group>>::value_type *)(v3 + 144));
                v26 = ZTWN11ThreadLocal17is_in_work_threadE();
                v27 = (_BYTE *)v26;
                if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0 && (char)(v26 & 7) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                  __asan_report_load1(v26);
                if ( *v27 && !start )
                {
                  common::milog::MiLogStream::create(
                    &v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_block_group_comp.cpp",
                    "onLoadGroupBatchSucc",
                    1455);
                  v29 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                          &v63,
                          (const char (*)[55])"is in work thread but not start for load Group !, uid:");
                  v30 = SceneCompBase::getScene((SceneCompBase *const)this);
                  *(_DWORD *)(v3 + 96) = Scene::getOwnerUid(v30);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v3 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v63);
                }
                if ( *(_BYTE *)(((unsigned __int64)&ctx->init_param.world_level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&ctx->init_param.world_level >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( ctx->init_param.world_level != *(_DWORD *)(v3 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_block_group_comp.cpp",
                    "onLoadGroupBatchSucc",
                    1462);
                  v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          &v63,
                          (const char (*)[10])"group_id:");
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v3 + 64));
                  v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                          v32,
                          (const char (*)[19])" init world_level:");
                  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v33,
                          &ctx->init_param.world_level);
                  v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v34,
                          (const char (*)[14])" world_level:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v63);
                  v36 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                  Group::refreshMonsterLevel(v36, *(_DWORD *)(v3 + 48));
                }
                v37 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                group_script_config_ptr = Group::getScriptConfig(v37);
                if ( group_script_config_ptr )
                {
                  if ( !std::unordered_map<unsigned int,NpcScriptConfig>::empty(&group_script_config_ptr->npc_config_map) )
                  {
                    v39 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                    SuiteIndex = Group::getSuiteIndex(v39);
                    v41 = (char *)(v3 + 64);
                    v42 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                            proto_group_map,
                            (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 64));
                    v43 = v42;
                    v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
                    if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
                    {
                      LOBYTE(v41) = v44 != 0;
                      __asan_report_store4(v42, v41, (_BYTE)v42);
                    }
                    *v43 = SuiteIndex;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_block_group_comp.cpp",
                    "onLoadGroupBatchSucc",
                    1470);
                  v38 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          &v63,
                          (const char (*)[33])"getScriptConfig failed,group_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v63);
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_block_group_comp.cpp",
                "onLoadGroupBatchSucc",
                1438);
              v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v63,
                      (const char (*)[44])"async load group callback faile, group_id: ");
              v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              val = Group::getGroupId(v17);
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      v18,
                      (const char (*)[26])" , load_version too old: ");
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      (const unsigned int *)(v3 + 80));
              v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])"now: ");
              v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              *(_DWORD *)(v3 + 96) = Group::getGroupId(v22);
              v23 = std::unordered_map<unsigned int,unsigned int>::operator[](
                      &this->group_load_version_map_,
                      (std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 96));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v23);
              common::milog::MiLogStream::~MiLogStream(&v63);
            }
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 144));
        __gnu_cxx::__normal_iterator<GroupLoadContext *,std::vector<GroupLoadContext>>::operator++(&__for_begin);
      }
      __for_range_0 = (std::vector<std::shared_ptr<Group>> *)(v3 + 208);
      __for_begin._M_current = (GroupLoadContext *)std::vector<std::shared_ptr<Group>>::begin((std::vector<std::shared_ptr<Group>> *const)(v3 + 208))._M_current;
      __for_end._M_current = (GroupLoadContext *)std::vector<std::shared_ptr<Group>>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>(
                (const __gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *)&__for_end) )
      {
        v45 = __gnu_cxx::__normal_iterator<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *const)&__for_begin);
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 176), v45);
        if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 176)) && start )
        {
          v46 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          Group::start(v46);
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 176));
        __gnu_cxx::__normal_iterator<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Group>*,std::vector<std::shared_ptr<Group>> > *const)&__for_begin);
      }
      __for_range_1 = (std::set<unsigned int> *)(v3 + 272);
      __for_begin._M_current = (GroupLoadContext *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 272))._M_node;
      __for_end._M_current = (GroupLoadContext *)std::set<unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
      {
        v47 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 96) = *v47;
        std::unordered_map<unsigned int,int>::erase(
          &this->loading_group_map_,
          (const std::unordered_map<unsigned int,int>::key_type *)(v3 + 96));
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      }
      if ( google::protobuf::Map<unsigned int,unsigned int>::empty(proto_group_map) )
      {
        v6 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v48 = this->scene_;
        std::function<ForeachPolicy ()(Player &)>::function<SceneBlockGroupComp::onLoadGroupBatchSucc(std::shared_ptr<GroupBatchLoadContext>,bool)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v63,
          (SceneBlockGroupComp::onLoadGroupBatchSucc::<lambda(Player&)>)(v3 + 352));
        Scene::foreachPlayer(v48, (std::function<ForeachPolicy(Player&)> *)&v63);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v63);
        v6 = 0;
      }
      std::vector<std::shared_ptr<Group>>::~vector((std::vector<std::shared_ptr<Group>> *const)(v3 + 208));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 272));
      proto::GroupSuiteNotify::~GroupSuiteNotify((proto::GroupSuiteNotify *const)(v3 + 352));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 112));
  }
  result = v6;
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1502: range 00000000159BC804-00000000159BC877
ForeachPolicy __cdecl SceneBlockGroupComp::onLoadGroupBatchSucc(std::shared_ptr<GroupBatchLoadContext>,bool)::{lambda(Player &)#1}::operator()(
        const SceneBlockGroupComp::onLoadGroupBatchSucc::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerSceneComp *SceneComp; // rax
  EnterSceneState state; // [rsp+1Ch] [rbp-4h]

  SceneComp = Player::getSceneComp(player);
  state = PlayerSceneComp::getEnterSceneState(SceneComp);
  if ( state == ENTER_SCENE_POST || state == ENTER_SCENE_DONE )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, __closure->__notify);
  }
  return 0;
};

// Line 1516: range 00000000159BDA4E-00000000159BE663
SceneBlockGroupComp *__fastcall SceneBlockGroupComp::findGroup(
        SceneBlockGroupComp *const this,
        __int64 group_id,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v9; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool *p_is_forbid_find_unregister_group; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v23; // rax
  uint32_t group_ida; // [rsp+10h] [rbp-1A0h]
  common::milog::MiLogStream *group_idb; // [rsp+10h] [rbp-1A0h]
  bool group_idc; // [rsp+10h] [rbp-1A0h]
  GroupsReplacementMgr *group_idd; // [rsp+10h] [rbp-1A0h]
  int v29; // [rsp+2Ch] [rbp-184h]
  std::allocator<unsigned int> __a; // [rsp+4Fh] [rbp-161h] BYREF
  unsigned int val; // [rsp+50h] [rbp-160h] BYREF
  uint32_t owner_uid; // [rsp+54h] [rbp-15Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+58h] [rbp-158h] BYREF
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+60h] [rbp-150h]
  uint32_t *ref_count; // [rsp+68h] [rbp-148h]
  std::shared_ptr<Config> v36; // [rsp+70h] [rbp-140h] BYREF
  std::vector<unsigned int> group_vec; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v38; // [rsp+A0h] [rbp-110h] BYREF
  char v39[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v29 = (int)file;
  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 13 group_id:1515 48 8 7 it:1518 80 8 7 it:1576 112 48 20 batch_group_map:1557";
  *(_QWORD *)(v5 + 16) = SceneBlockGroupComp::findGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 32) = v29;
  Scene = SceneCompBase::getScene((SceneCompBase *const)group_id);
  owner_uid = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 48) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      (std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72),
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 32));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 48),
         &__y) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 48));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, &v9->second);
  }
  else
  {
    group_ida = *(_DWORD *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(group_id + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneId = Scene::getSceneId(*(const Scene *const *)(group_id + 8));
    group_info_config_ptr = Group::getGroupInfoScriptConfig(SceneId, group_ida, 0);
    if ( group_info_config_ptr )
    {
      if ( !SceneBlockGroupComp::isGroupLoadStrategyValid(
              (const SceneBlockGroupComp *const)group_id,
              group_info_config_ptr) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "findGroup",
          1533);
        v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v38,
                (const char (*)[41])"isGroupLoadStrategyValid fail, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v38);
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)(group_id + 19) >> 3) + 0x7FFF8000) != 0
          && ((group_id + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(group_id + 19) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(group_id + 19);
        }
        if ( *(_BYTE *)(group_id + 19) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_block_group_comp.cpp",
            "findGroup",
            1539);
          v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v38,
                  (const char (*)[17])"findGroup group=");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v14,
            (const char (*)[34])"failed. is_scene_group_all_dead_.");
          common::milog::MiLogStream::~MiLogStream(&v38);
          std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
        }
        else if ( std::operator!=<GroupsReplacementMgr>(
                    0LL,
                    (const std::shared_ptr<GroupsReplacementMgr> *)(group_id + 360)) )
        {
          if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
          if ( !group_info_config_ptr->is_dynamic_load )
            goto LABEL_30;
          v15 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(group_id + 360));
          if ( GroupsReplacementMgr::isRegisted(v15, *(_DWORD *)(v5 + 32)) )
            goto LABEL_30;
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_block_group_comp.cpp",
            "findGroup",
            1548);
          v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v38, (const char (*)[35])byte_258E84C0);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v5 + 32));
          group_idb = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" @scene:");
          if ( *(_BYTE *)(((unsigned __int64)(group_id + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Scene::getSceneId(*(const Scene *const *)(group_id + 8));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(group_idb, &val);
          common::milog::MiLogStream::~MiLogStream(&v38);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v36);
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
          p_is_forbid_find_unregister_group = &v19->is_forbid_find_unregister_group;
          if ( *(_BYTE *)(((unsigned __int64)p_is_forbid_find_unregister_group >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_forbid_find_unregister_group & 7) >= *(_BYTE *)(((unsigned __int64)p_is_forbid_find_unregister_group >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_forbid_find_unregister_group);
          }
          group_idc = v19->is_forbid_find_unregister_group;
          std::shared_ptr<Config>::~shared_ptr(&v36);
          if ( group_idc )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_block_group_comp.cpp",
              "findGroup",
              1552);
            v21 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    &v38,
                    (const char (*)[63])"return nullptr because is_forbid_find_unregister_group, group:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 32));
            common::milog::MiLogStream::~MiLogStream(&v38);
            std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
          }
          else
          {
LABEL_30:
            std::map<unsigned int,GroupLoadParam>::map((std::map<unsigned int,GroupLoadParam> *const)(v5 + 112));
            group_idd = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(group_id + 360));
            val = *(_DWORD *)(v5 + 32);
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(
              &group_vec,
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
              &__a);
            GroupsReplacementMgr::fillNotReplacedGroupLoadParamBatch(
              group_idd,
              &group_vec,
              (std::map<unsigned int,GroupLoadParam> *)(v5 + 112));
            std::vector<unsigned int>::~vector(&group_vec);
            std::allocator<unsigned int>::~allocator(&__a);
            if ( std::map<unsigned int,GroupLoadParam>::empty((const std::map<unsigned int,GroupLoadParam> *const)(v5 + 112)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/scene_block_group_comp.cpp",
                "findGroup",
                1562);
              common::milog::MiLogStream::operator()(
                &v38,
                "findGroup group=%u failed. Replaced.",
                *(unsigned int *)(v5 + 32));
              common::milog::MiLogStream::~MiLogStream(&v38);
              std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
            }
            else
            {
              v22 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                        (std::unordered_map<unsigned int,unsigned int> *const)(group_id + 440),
                                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 32));
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0
                && (char)((v22 & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              {
                v22 = __asan_report_load4();
              }
              ++*(_DWORD *)v22;
              SceneBlockGroupComp::loadGroupBatch(
                (SceneBlockGroupComp *const)group_id,
                (const std::map<unsigned int,GroupLoadParam> *)(v5 + 112),
                1);
              ref_count = std::unordered_map<unsigned int,unsigned int>::operator[](
                            (std::unordered_map<unsigned int,unsigned int> *const)(group_id + 440),
                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 32));
              if ( *(_BYTE *)(((unsigned __int64)ref_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ref_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ref_count >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( !--*ref_count )
                std::unordered_map<unsigned int,unsigned int>::erase(
                  (std::unordered_map<unsigned int,unsigned int> *const)(group_id + 440),
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 32));
              *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 80) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                                  (std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72),
                                                                                                  (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 32));
              __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72))._M_cur;
              if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 80),
                     &__y) )
              {
                v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 80));
                std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, &v23->second);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "findGroup",
                  1582);
                common::milog::MiLogStream::operator()(&v38, "findGroup group=%u failed.", *(unsigned int *)(v5 + 32));
                common::milog::MiLogStream::~MiLogStream(&v38);
                std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
              }
            }
            std::map<unsigned int,GroupLoadParam>::~map((std::map<unsigned int,GroupLoadParam> *const)(v5 + 112));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "findGroup",
            1586);
          common::milog::MiLogStream::operator()(&v38, "replacement_mgr_ptr_ nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v38);
          std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "findGroup",
        1528);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v38,
              (const char (*)[27])"findGroupInfoConfig fails:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v38);
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
    }
  }
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 1592: range 00000000159BE664-00000000159BE9B5
int32_t __cdecl SceneBlockGroupComp::foreachGroup(
        SceneBlockGroupComp *const this,
        std::function<ForeachPolicy(Group&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::size_type v6; // rax
  int v7; // r14d
  Group *v8; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<Group>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<Group> *group_wtr; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+58h] [rbp-B8h]
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 group_ptr:1602 64 24 14 group_vec:1594";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::foreachGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Group>>::vector((std::vector<std::weak_ptr<Group>> *const)(v3 + 64));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_);
  std::vector<std::weak_ptr<Group>>::reserve((std::vector<std::weak_ptr<Group>> *const)(v3 + 64), v6);
  __for_range = &this->group_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
    group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
    std::vector<std::weak_ptr<Group>>::emplace_back<std::shared_ptr<Group> &>(
      (std::vector<std::weak_ptr<Group>> *const)(v3 + 64),
      group_ptr,
      group_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Group>> *)(v3 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<std::weak_ptr<Group>>::begin((std::vector<std::weak_ptr<Group>> *const)(v3 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::vector<std::weak_ptr<Group>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Group> *,std::vector<std::weak_ptr<Group>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Group>*,std::vector<std::weak_ptr<Group>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Group>*,std::vector<std::weak_ptr<Group>> > *)&__for_end) )
  {
    group_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Group> *,std::vector<std::weak_ptr<Group>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Group>*,std::vector<std::weak_ptr<Group>> > *const)&__for_begin);
    std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v3 + 32));
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(Group &)>::operator()(p_func, v8) )
      {
        v2 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
    if ( v7 && v7 != 2 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Group> *,std::vector<std::weak_ptr<Group>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Group>*,std::vector<std::weak_ptr<Group>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_18:
  std::vector<std::weak_ptr<Group>>::~vector((std::vector<std::weak_ptr<Group>> *const)(v3 + 64));
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 1616: range 00000000159BE9B6-00000000159BEAA7
GroupPtr __cdecl SceneBlockGroupComp::getOneActiveGroupForGm(SceneBlockGroupComp *const this)
{
  __int64 v1; // rsi
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  GroupPtr result; // rax
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<Group>> *)(v1 + 72);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v1 + 72))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v1 + 72))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
    group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
    if ( !std::operator==<Group>(group_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
      if ( Group::isActive(v2) )
      {
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, group_ptr);
        goto LABEL_8;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
LABEL_8:
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1633: range 00000000159BEAA8-00000000159BEE05
void __cdecl SceneBlockGroupComp::replaceAmberWindWithNewGadgetId(
        SceneBlockGroupComp *const this,
        uint32_t city_id,
        uint32_t old_gadget_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator v6; // rax
  std::insert_iterator<std::unordered_map<unsigned int,std::shared_ptr<Group>> > v7; // rax
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *container; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *M_cur; // r15
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator v10; // rax
  std::insert_iterator<std::unordered_map<unsigned int,std::shared_ptr<Group>> > v11; // rdx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // al
  Group *v14; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *__last; // [rsp+8h] [rbp-118h]
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const WorldAreaExcelConfigMgr *world_area_config_mgr; // [rsp+30h] [rbp-F0h]
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+38h] [rbp-E8h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+50h] [rbp-D0h]
  const GroupScriptConfig *group_config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-C0h] BYREF
  char v26[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 19 copy_group_map:1635";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::replaceAmberWindWithNewGadgetId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.world_area_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v25);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::unordered_map((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v3 + 32));
  v6._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v3 + 32))._M_cur;
  v7 = std::inserter<std::unordered_map<unsigned int,std::shared_ptr<Group>>,std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>>(
         (std::unordered_map<unsigned int,std::shared_ptr<Group>> *)(v3 + 32),
         v6);
  container = v7.container;
  M_cur = v7.iter._M_cur;
  __last = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  v10._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
  v11.container = container;
  v11.iter._M_cur = M_cur;
  std::copy<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>,std::insert_iterator<std::unordered_map<unsigned int,std::shared_ptr<Group>>>>(
    v10,
    (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>)__last,
    v11);
  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<Group>> *)(v3 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v3 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v3 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
    group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
    v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
    group_config_ptr = Group::getScriptConfig(v12);
    if ( !group_config_ptr )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)&group_config_ptr->area_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)group_config_ptr - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_config_ptr->area_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( city_id == WorldAreaExcelConfigMgr::findAreaCityId(world_area_config_mgr, group_config_ptr->area_id) )
      v13 = 0;
    else
LABEL_10:
      v13 = 1;
    if ( !v13 )
    {
      v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
      Group::replaceAmberWindWithNewGadgetId(v14, old_gadget_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::~unordered_map((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v3 + 32));
  if ( v26 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1651: range 00000000159BEE06-00000000159BF40E
void __cdecl SceneBlockGroupComp::broadcastGroupLuaEvent(SceneBlockGroupComp *const this, EventPtr *p_event_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator v11; // rax
  std::insert_iterator<std::unordered_map<unsigned int,std::shared_ptr<Group>> > v12; // rax
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *container; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *M_cur; // r15
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator v15; // rax
  std::insert_iterator<std::unordered_map<unsigned int,std::shared_ptr<Group>> > v16; // rdx
  Group *v17; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *__last; // [rsp+8h] [rbp-148h]
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const std::set<data::EventType> *valid_dungeon_broadcast_evt_set; // [rsp+38h] [rbp-118h]
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+40h] [rbp-110h]
  const std::pair<unsigned int const,std::shared_ptr<Group> > *v24; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 dungeon_scene_ptr:1662 64 56 19 copy_group_map:1672";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::broadcastGroupLuaEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !std::operator==<Event>(0LL, p_event_ptr) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 32));
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    valid_dungeon_broadcast_evt_set = LuaConfigMgr::getValidDungeonBroadcastEventSet(&v5->design_config.lua_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_event_ptr);
    if ( !common::tools::MiscUtils::isContains<std::set<data::EventType> const,data::EventType>(
            valid_dungeon_broadcast_evt_set,
            &v6->event_type) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "broadcastGroupLuaEvent",
        1659);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v27,
             (const char (*)[41])"broadcastGroupLuaEvent invalid evt_type:");
      v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_event_ptr);
      common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(v7, &v8->event_type);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_block_group_comp.cpp",
        "broadcastGroupLuaEvent",
        1665);
      v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v27,
             (const char (*)[55])"broadcastGroupLuaEvent in not dungeon scene,scene_id: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      if ( std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_) > 0x32 )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "broadcastGroupLuaEvent",
          1670);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v27,
                (const char (*)[51])"broadcastGroupLuaEvent too many groups, scene_id: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getSceneId(this->scene_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      std::unordered_map<unsigned int,std::shared_ptr<Group>>::unordered_map((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v2 + 64));
      v11._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v2 + 64))._M_cur;
      v12 = std::inserter<std::unordered_map<unsigned int,std::shared_ptr<Group>>,std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>>(
              (std::unordered_map<unsigned int,std::shared_ptr<Group>> *)(v2 + 64),
              v11);
      container = v12.container;
      M_cur = v12.iter._M_cur;
      __last = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
      v15._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
      v16.container = container;
      v16.iter._M_cur = M_cur;
      std::copy<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>,std::insert_iterator<std::unordered_map<unsigned int,std::shared_ptr<Group>>>>(
        v15,
        (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>)__last,
        v16);
      __for_range = (std::unordered_map<unsigned int,std::shared_ptr<Group>> *)(v2 + 64);
      __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v2 + 64))._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
                &__for_begin,
                &__for_end) )
      {
        v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
        group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(v24);
        group_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Group> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Group>>(v24);
        if ( !std::operator==<Group>(group_ptr, 0LL) )
        {
          v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_ptr);
          Group::handleEvent(v17, p_event_ptr);
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
      }
      std::unordered_map<unsigned int,std::shared_ptr<Group>>::~unordered_map((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(v2 + 64));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1686: range 00000000159BF410-00000000159C006A
__int64 __fastcall SceneBlockGroupComp::createPatternGroup(
        SceneBlockGroupComp *const this,
        uint32_t pattern_id,
        const Vector3 *position,
        uint32_t revise_level,
        uint32_t parent_quest_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  char v11; // r14
  bool v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Group *v18; // r14
  Scene *Scene; // rax
  uint32_t SceneId; // eax
  Group *v21; // rax
  Group *v22; // rax
  Group *v23; // rax
  Group *v24; // rax
  Group *v25; // rax
  Group *v26; // rax
  Group *v27; // rcx
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  Group *v31; // rax
  Group *v32; // r14
  GroupInitParam *inited; // rax
  std::shared_ptr<Group> *v34; // r8
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>,bool> v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // r14d
  std::unordered_map<unsigned int,unsigned int> *v40; // rax
  char *v41; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v42; // rax
  _DWORD *v43; // rdx
  char v44; // cl
  Group *v45; // r14
  Scene *v46; // rax
  common::milog::MiLogStream *v47; // rax
  Group *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  __int64 result; // rax
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+38h] [rbp-238h]
  common::milog::MiLogStream v61; // [rsp+40h] [rbp-230h] BYREF
  char v62[528]; // [rsp+60h] [rbp-210h] BYREF

  v5 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(480LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 13 group_id:1698 48 4 15 pattern_id:1685 64 4 20 parent_quest_id:1685 80 16 14 group_ptr:"
                        "1699 112 296 15 init_param:1713";
  *(_QWORD *)(v5 + 16) = SceneBlockGroupComp::createPatternGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862732] = -218103808;
  v7[536862733] = -202116109;
  v7[536862734] = -202116109;
  *(_DWORD *)(v5 + 48) = pattern_id;
  *(_DWORD *)(v5 + 64) = parent_quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 80));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
  group_info_config_ptr = LuaConfigMgr::findPatternGroupInfoConfig(
                            &v8->design_config.lua_config_mgr,
                            *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 80));
  if ( group_info_config_ptr )
  {
    v11 = 0;
    v12 = 0;
    if ( *(_DWORD *)(v5 + 64) )
    {
      SceneBlockGroupComp::findPatternGroupByParentQuest(
        (SceneBlockGroupComp *const)(v5 + 80),
        (uint32_t)this,
        *(_DWORD *)(v5 + 64));
      v11 = 1;
      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v5 + 80)) )
        v12 = 1;
    }
    if ( v11 )
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 80));
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "createPatternGroup",
        1695);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v61,
              (const char (*)[18])"parent_quest_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" pattern_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" has group!");
      common::milog::MiLogStream::~MiLogStream(&v61);
      v10 = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 32) = SceneBlockGroupComp::genPatternGroupId(this);
      common::tools::perf::make_shared<Group,unsigned int &>((unsigned int *)(v5 + 80), (unsigned int *)(v5 + 32));
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v5 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "createPatternGroup",
          1702);
        v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v61,
                (const char (*)[31])"group_ptr is null, pattern_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v61);
        v10 = 0;
      }
      else
      {
        v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Scene = SceneCompBase::getScene((SceneCompBase *const)this);
        SceneId = Scene::getSceneId(Scene);
        Group::setSceneId(v18, SceneId);
        v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Group::setGroupType(v21, PATTERN);
        v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Group::setPatternId(v22, *(_DWORD *)(v5 + 48));
        v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Group::setParentQuestId(v23, *(_DWORD *)(v5 + 64));
        v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Group::setPosition(v24, &group_info_config_ptr->pos);
        v25 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Group::setPositionRevise(v25, position);
        v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        Group::setReviseLevel(v26, revise_level);
        v27 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                      + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        Group::setRelyStartWorldLevelLimitActivityId(
          v27,
          group_info_config_ptr->rely_start_world_level_limit_activity_id);
        GroupInitParam::GroupInitParam((GroupInitParam *const)(v5 + 112));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v28 = (unsigned __int64)(this->_vptr_SceneCompBase + 37);
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          v28 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(SceneBlockGroupComp *const, _QWORD, _QWORD, unsigned __int64))v28)(
               this,
               *(unsigned int *)(v5 + 32),
               *(unsigned int *)(v5 + 48),
               v5 + 112) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "createPatternGroup",
            1716);
          v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v61, (const char (*)[7])"group ");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v30,
            (const char (*)[21])" buildGroupInitParam");
          common::milog::MiLogStream::~MiLogStream(&v61);
          v10 = 0;
        }
        else
        {
          v31 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
          Group::setDungeonId(v31, *(_DWORD *)(v5 + 260));
          v32 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
          inited = std::move<GroupInitParam &>((GroupInitParam *)(v5 + 112));
          if ( Group::init(v32, inited) )
          {
            common::milog::MiLogStream::create(
              &v61,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "createPatternGroup",
              1722);
            v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v61, (const char (*)[7])"group ");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])" init fails");
            common::milog::MiLogStream::~MiLogStream(&v61);
            v10 = 0;
          }
          else
          {
            v37 = std::unordered_map<unsigned int,std::shared_ptr<Group>>::emplace<unsigned int &,std::shared_ptr<Group>&>(
                    &this->pattern_group_map_,
                    (unsigned int *)(v5 + 32),
                    (std::shared_ptr<Group> *)(v5 + 80),
                    (unsigned int *)&this->pattern_group_map_,
                    v34);
            if ( !v37.second )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_block_group_comp.cpp",
                "createPatternGroup",
                1727);
              v38 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v61,
                      (const char (*)[26])"duplicate pattern group: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v5 + 48));
              common::milog::MiLogStream::~MiLogStream(&v61);
              v10 = 0;
            }
            else
            {
              if ( *(_DWORD *)(v5 + 64) )
              {
                v39 = *(_DWORD *)(v5 + 32);
                v40 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                        &this->quest_pattern_2_group_map_,
                        (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
                v41 = (char *)(v5 + 48);
                v42 = std::unordered_map<unsigned int,unsigned int>::operator[](
                        v40,
                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 48));
                v43 = v42;
                v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
                if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
                {
                  LOBYTE(v41) = v44 != 0;
                  __asan_report_store4(v42, v41, (_BYTE)v42);
                }
                *v43 = v39;
              }
              v45 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
              v46 = SceneCompBase::getScene((SceneCompBase *const)this);
              if ( Group::enterScene(v45, v46) )
              {
                common::milog::MiLogStream::create(
                  &v61,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_block_group_comp.cpp",
                  "createPatternGroup",
                  1736);
                v47 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        &v61,
                        (const char (*)[30])"enter scene fail, pattern_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  (const unsigned int *)(v5 + 48));
                common::milog::MiLogStream::~MiLogStream(&v61);
                v10 = 0;
              }
              else
              {
                v48 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
                if ( Group::start(v48) )
                {
                  common::milog::MiLogStream::create(
                    &v61,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_block_group_comp.cpp",
                    "createPatternGroup",
                    1742);
                  v49 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          &v61,
                          (const char (*)[24])"start fail, pattern_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v49,
                    (const unsigned int *)(v5 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v61);
                  v10 = 0;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v61,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_block_group_comp.cpp",
                    "createPatternGroup",
                    1746);
                  v50 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          &v61,
                          (const char (*)[30])"loadPatternGroup pattern_id: ");
                  v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v50,
                          (const unsigned int *)(v5 + 48));
                  v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v51,
                          (const char (*)[12])" group_id: ");
                  v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v52,
                          (const unsigned int *)(v5 + 32));
                  v54 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v53, (const char (*)[7])" pos: ");
                  v55 = operator<<(v54, position);
                  common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v55, (const char (*)[6])" succ");
                  common::milog::MiLogStream::~MiLogStream(&v61);
                  v10 = *(_DWORD *)(v5 + 32);
                }
              }
            }
          }
        }
        GroupInitParam::~GroupInitParam((GroupInitParam *const)(v5 + 112));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 80));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "createPatternGroup",
      1690);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v61,
           (const char (*)[50])"findRandTaskGroupInfoConfig fails, rand_task_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v61);
    v10 = 0;
  }
  result = v10;
  if ( v62 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1751: range 00000000159C00E6-00000000159C04DA
void __fastcall SceneBlockGroupComp::removePatternGroup(SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Group *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1750 64 8 9 iter:1752 96 16 14 group_ptr:1758";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::removePatternGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->pattern_group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->pattern_group_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "removePatternGroup",
      1755);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v14,
           (const char (*)[25])"pattern_group_map_.find ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v2 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v2 + 96), &v7->second);
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "removePatternGroup",
        1761);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v14,
             (const char (*)[25])"pattern_group_map_.find ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])off_258E8DA0);
    }
    else
    {
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::function<ForeachPolicy ()(Entity &)>::function<SceneBlockGroupComp::removePatternGroup(unsigned int)::{lambda(Entity &)#1},void,void>(
        (std::function<ForeachPolicy(Entity&)> *const)&v14,
        0);
      Group::foreachEntity(v10, (std::function<ForeachPolicy(Entity&)> *)&v14);
      std::function<ForeachPolicy ()(Entity &)>::~function((std::function<ForeachPolicy(Entity&)> *const)&v14);
      std::unordered_map<unsigned int,std::shared_ptr<Group>>::erase(
        &this->pattern_group_map_,
        (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v2 + 48));
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "removePatternGroup",
        1770);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v14,
              (const char (*)[20])"removePatternGroup ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" succ");
    }
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1764: range 00000000159C006C-00000000159C00E4
ForeachPolicy __cdecl SceneBlockGroupComp::removePatternGroup(unsigned int)::{lambda(Entity &)#1}::operator()(
        const SceneBlockGroupComp::removePatternGroup::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(entity->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(Entity *, VisionContext *))v2)(entity, &VisionContext::miss_context);
  return 0;
};

// Line 1774: range 00000000159C04DC-00000000159C0669
SceneBlockGroupComp *__fastcall SceneBlockGroupComp::findPatternGroup(
        SceneBlockGroupComp *const this,
        __int64 group_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 group_id:1773 64 8 9 iter:1775";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::findPatternGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      (std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 240),
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 240))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
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

// Line 1784: range 00000000159C066A-00000000159C08FD
SceneBlockGroupComp *__fastcall SceneBlockGroupComp::findPatternGroupByParentQuest(
        SceneBlockGroupComp *const this,
        __int64 parent_quest_id,
        uint32_t pattern_id,
        int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *p_y; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  char v9; // cl
  int second; // edx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> __y; // [rsp+20h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,unsigned int> *group_map; // [rsp+28h] [rbp-A8h]
  char v17[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 20 parent_quest_id:1783 48 4 15 pattern_id:1783 64 8 9 iter:1785 96 8 15 group_iter:1791";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::findPatternGroupByParentQuest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 32) = pattern_id;
  *(_DWORD *)(v4 + 48) = a4;
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find((std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *const)(parent_quest_id + 304), (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v4 + 32));
  __y._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end((std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *const)(parent_quest_id + 304))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v4 + 64),
         &__y)
    || (group_map = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v4 + 64))->second,
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  group_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48)),
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(group_map)._M_cur,
        p_y = &__y,
        std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__y)) )
  {
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
  }
  else
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 96));
    v9 = *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000);
    LOBYTE(p_y) = v9 != 0;
    if ( v9 != 0 && (char)((((_BYTE)v8 + 4) & 7) + 3) >= v9 )
      __asan_report_load4();
    second = v8->second;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, p_y);
    SceneBlockGroupComp::findPatternGroup(this, parent_quest_id, second);
  }
  if ( v17 == (char *)v4 )
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
  return this;
};

// Line 1800: range 00000000159C08FE-00000000159C0B4E
uint32_t __cdecl SceneBlockGroupComp::genPatternGroupId(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 idx:1801";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::genPatternGroupId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  for ( *(_DWORD *)(v1 + 32) = 0; *(_DWORD *)(v1 + 32) <= 0x270Fu; ++*(_DWORD *)(v1 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( ++this->pattern_group_id_ > 0x270F )
      this->pattern_group_id_ = 1;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<Group>>,unsigned int>(
            &this->pattern_group_map_,
            &this->pattern_group_id_) )
      break;
  }
  if ( *(_DWORD *)(v1 + 32) > 0x64u )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "genPatternGroupId",
      1816);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v6,
           (const char (*)[28])"It should not happen, idx: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pattern_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  result = this->pattern_group_id_;
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

// Line 1823: range 00000000159C0B50-00000000159C1206
int32_t __cdecl SceneBlockGroupComp::saveAllGroup(SceneBlockGroupComp *const this, bool is_force)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int8 (__fastcall *v6)(SceneBlockGroupComp *const, _QWORD); // rcx
  common::milog::MiLogStream *v7; // rax
  Scene *scene; // r14
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  unsigned int (__fastcall *v11)(Scene *, std::shared_ptr<Group> *); // r15
  bool v12; // r14
  common::milog::MiLogStream *v13; // r14
  Scene *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  Scene *v24; // rax
  int32_t result; // eax
  int val; // [rsp+28h] [rbp-138h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-134h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Group>> *__for_range; // [rsp+40h] [rbp-120h]
  std::pair<unsigned int const,std::shared_ptr<Group> > *__in; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_id; // [rsp+50h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Group> > >::type *group_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Group> v34; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 10 timer:1824 80 48 19 save_group_set:1825";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::saveAllGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 48));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
  __for_range = &this->group_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::begin(&this->group_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<Group>>(__in);
    group_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Group>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(this->_vptr_SceneCompBase + 20);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(unsigned __int8 (__fastcall **)(SceneBlockGroupComp *const, _QWORD))v5;
    if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !v6(this, *group_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !SceneBlockGroupComp::isGroupDelayUnregister(this, *group_id) )
      {
        if ( std::operator==<Group>(group_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "saveAllGroup",
            1839);
          v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 &v35,
                 (const char (*)[28])"group ptr is null,group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, group_id);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          scene = this->scene_;
          p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
          if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
            p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
          v10 = *p_vptr_DescribalBase + 448LL;
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8();
          v11 = *(unsigned int (__fastcall **)(Scene *, std::shared_ptr<Group> *))v10;
          std::shared_ptr<Group>::shared_ptr(&v34, group_ptr);
          v12 = v11(scene, &v34) != 0;
          std::shared_ptr<Group>::~shared_ptr(&v34);
          if ( v12 )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_block_group_comp.cpp",
              "saveAllGroup",
              1844);
            v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v35,
                    (const char (*)[30])"saveGroupToBin failed, scene:");
            v14 = SceneCompBase::getScene((SceneCompBase *const)this);
            v15 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v13, v14);
            v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])", group_id");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, group_id);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
          else
          {
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 80), group_id);
          }
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "saveAllGroup",
    1849);
  v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v35,
          (const char (*)[24])"saveAllGroup time_cost:");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 48));
  v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &val);
  v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])",save_count:");
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 80));
  v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v19,
          (const unsigned __int64 *)&__for_end);
  v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])", group_set:");
  v22 = common::milog::MiLogStream::operator<<<unsigned int>(v21, (const std::set<unsigned int> *)(v2 + 80));
  v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
  v24 = SceneCompBase::getScene((SceneCompBase *const)this);
  OwnerUid = Scene::getOwnerUid(v24);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &OwnerUid);
  common::milog::MiLogStream::~MiLogStream(&v35);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 48));
  result = 0;
  if ( v36 == (char *)v2 )
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

// Line 1854: range 00000000159C1208-00000000159C1225
int32_t __cdecl SceneBlockGroupComp::getActiveGroupCount(SceneBlockGroupComp *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_);
};

// Line 1859: range 00000000159C1226-00000000159C12F5
bool __fastcall SceneBlockGroupComp::isGroupActive(const SceneBlockGroupComp *const this, uint32_t group_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:1858";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupActive;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  result = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<Group>> const,unsigned int>(
             &this->group_map_,
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

// Line 1864: range 00000000159C12F6-00000000159C147E
SceneBlockGroupComp *__fastcall SceneBlockGroupComp::getActiveGroup(
        SceneBlockGroupComp *const this,
        __int64 group_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 group_id:1863 64 8 9 iter:1865";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::getActiveGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      (std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72),
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end((std::unordered_map<unsigned int,std::shared_ptr<Group>> *const)(group_id + 72))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
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

// Line 1874: range 00000000159C1480-00000000159C15D1
bool __cdecl SceneBlockGroupComp::isGroupLoadStrategyValid(
        const SceneBlockGroupComp *const this,
        const GroupInfoScriptConfig *group_info_config)
{
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v4; // rax
  char is_mp; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v4 = *p_vptr_DescribalBase + 392LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  is_mp = (*(__int64 (__fastcall **)(Scene *))v4)(scene);
  if ( is_mp )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_info_config->load_strategy >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)group_info_config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config->load_strategy >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( group_info_config->load_strategy == GROUP_LOAD_SINGLE )
      return 0;
  }
  if ( is_mp == 1 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&group_info_config->load_strategy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)group_info_config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config->load_strategy >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return group_info_config->load_strategy != GROUP_LOAD_MULTI;
};

// Line 1886: range 00000000159C15D2-00000000159C17E8
void __cdecl SceneBlockGroupComp::checkDuplicateLoad(
        const SceneBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:1888";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::checkDuplicateLoad;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = group_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(group_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(group_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    if ( std::unordered_map<unsigned int,std::shared_ptr<Group>>::count(
           &this->group_map_,
           (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "checkDuplicateLoad",
        1892);
      common::milog::MiLogStream::operator()(&v9, "group=%u is already loaded.", *(unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1899: range 00000000159C17EA-00000000159C1964
int32_t __cdecl SceneBlockGroupComp::registerGroups(
        SceneBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec,
        uint32_t revise_level,
        uint32_t revise_id)
{
  common::milog::MiLogStream *v4; // rbx
  Scene *Scene; // rax
  GroupsReplacementMgr *v6; // rdi
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "registerGroups",
    1900);
  v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v11, (const char (*)[20])"registerGroups uid:");
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  val = Scene::getOwnerUid(Scene);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    SceneBlockGroupComp::checkDuplicateLoad(this, group_vec);
    v6 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    return GroupsReplacementMgr::registerGroups(v6, group_vec, revise_level, revise_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "registerGroups",
      1908);
    common::milog::MiLogStream::operator()(&v11, "replacement mgr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
};

// Line 1914: range 00000000159C1966-00000000159C1A3A
int32_t __cdecl SceneBlockGroupComp::unregisterGroups(
        SceneBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec,
        bool is_force_unload)
{
  GroupsReplacementMgr *v3; // rcx
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v3 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    return GroupsReplacementMgr::unregisterGroups(v3, group_vec, is_force_unload);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "unregisterGroups",
      1920);
    common::milog::MiLogStream::operator()(&v6, "replacement mgr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 1925: range 00000000159C1A3C-00000000159C1B04
bool __cdecl SceneBlockGroupComp::isGroupRegisted(const SceneBlockGroupComp *const this, uint32_t group_id)
{
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v2 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    return GroupsReplacementMgr::isRegisted(v2, group_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "isGroupRegisted",
      1930);
    common::milog::MiLogStream::operator()(&v4, "replacement mgr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 1935: range 00000000159C1B06-00000000159C1BD1
bool __cdecl SceneBlockGroupComp::canRegisterGroups(
        const SceneBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec)
{
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v2 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    return GroupsReplacementMgr::canRegisterGroups(v2, group_vec);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "canRegisterGroups",
      1941);
    common::milog::MiLogStream::operator()(&v4, "replacement mgr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 1946: range 00000000159C1BD2-00000000159C1C9D
bool __cdecl SceneBlockGroupComp::hasMutalReplaceGroups(
        const SceneBlockGroupComp *const this,
        const std::vector<unsigned int> *group_vec)
{
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v2 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    return GroupsReplacementMgr::hasMutualReplace(v2, group_vec);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "hasMutalReplaceGroups",
      1952);
    common::milog::MiLogStream::operator()(&v4, "replacement mgr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 1;
  }
};

// Line 1957: range 00000000159C1C9E-00000000159C1D5B
uint32_t __cdecl SceneBlockGroupComp::getDynamicGroupNum(const SceneBlockGroupComp *const this)
{
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v1 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    return GroupsReplacementMgr::getDynamicGroupNum(v1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "getDynamicGroupNum",
      1962);
    common::milog::MiLogStream::operator()(&v3, "replacement mgr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 1;
  }
};

// Line 1968: range 00000000159C1D5C-00000000159C23C8
_BOOL8 __fastcall SceneBlockGroupComp::isGroupReplaceable(const SceneBlockGroupComp *const this, uint32_t group_id)
{
  _BOOL4 value; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v6; // rax
  Group *v7; // rax
  _BOOL4 v8; // eax
  int v9; // r15d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  uint32_t v14; // ebx
  uint32_t v15; // eax
  uint32_t version; // ebx
  char v17; // al
  _BOOL4 v18; // eax
  uint32_t v19; // r14d
  uint32_t SceneId; // eax
  uint32_t v21; // eax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+20h] [rbp-100h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+28h] [rbp-F8h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+30h] [rbp-F0h]
  const GroupInfoScriptConfig *group_info_config_ptr_0; // [rsp+38h] [rbp-E8h]
  const GroupReplaceableInfo *replaceable_info; // [rsp+40h] [rbp-E0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 group_id:1967 64 8 9 iter:1969 96 16 14 group_ptr:1972";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::isGroupReplaceable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                            &this->group_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
          &__y)
    || ((v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64)),
         std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 96), &v6->second),
         !std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 96)))
      ? (v9 = 1)
      : (v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
         LOBYTE(v8) = Group::getIsReplaceable(v7),
         value = v8,
         v9 = 0),
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96)),
        v9 == 1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v12 = *p_vptr_DescribalBase + 456LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    *(_DWORD *)(v3 + 96) = (*(__int64 (__fastcall **)(Scene *, _QWORD))v12)(scene, *(unsigned int *)(v3 + 48));
    *(_QWORD *)(v3 + 104) = v13;
    ret = std::get<0ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 96));
    group_bin_ptr = std::get<1ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *ret )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*group_bin_ptr )
    {
LABEL_41:
      v19 = *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneId = Scene::getSceneId(this->scene_);
      group_info_config_ptr = Group::getGroupInfoScriptConfig(SceneId, v19, 0);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)group_info_config_ptr - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&group_info_config_ptr->replaceable_info);
        }
        value = group_info_config_ptr->replaceable_info.value;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "isGroupReplaceable",
          1998);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v21 = Scene::getSceneId(this->scene_);
        common::milog::MiLogStream::operator()(
          &v29,
          "group info config not found for group_id=%u @ scene_id=%u",
          *(unsigned int *)(v3 + 48),
          v21);
        common::milog::MiLogStream::~MiLogStream(&v29);
        value = 0;
      }
    }
    else
    {
      v14 = *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = Scene::getSceneId(this->scene_);
      group_info_config_ptr_0 = Group::getGroupInfoScriptConfig(v15, v14, 0);
      if ( !group_info_config_ptr_0 )
        goto LABEL_55;
      replaceable_info = &group_info_config_ptr_0->replaceable_info;
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_0->replaceable_info.new_bin_only >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)group_info_config_ptr_0 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_0->replaceable_info.new_bin_only >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load1(&group_info_config_ptr_0->replaceable_info.new_bin_only);
      }
      if ( replaceable_info->new_bin_only )
        goto LABEL_33;
      if ( *(_BYTE *)(((unsigned __int64)&replaceable_info->version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)replaceable_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&replaceable_info->version >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      version = replaceable_info->version;
      if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( version >= proto::GroupBin::replaceable_version(*group_bin_ptr) )
        v17 = 1;
      else
LABEL_33:
        v17 = 0;
      if ( v17 )
      {
        if ( *(_BYTE *)(((unsigned __int64)replaceable_info >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)replaceable_info & 7) >= *(_BYTE *)(((unsigned __int64)replaceable_info >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(replaceable_info);
        }
        value = replaceable_info->value;
      }
      else
      {
LABEL_55:
        if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        LOBYTE(v18) = proto::GroupBin::is_replaceable(*group_bin_ptr);
        value = v18;
      }
    }
  }
  result = value;
  if ( v30 == (char *)v3 )
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

// Line 2005: range 00000000159C23CA-00000000159C286D
std::unordered_set<unsigned int> *__cdecl SceneBlockGroupComp::getLoadGroupsWithinSight(
        std::unordered_set<unsigned int> *retstr,
        SceneBlockGroupComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *Scene; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  std::unordered_set<unsigned int>::size_type v7; // r14
  unsigned int v8; // eax
  std::map<unsigned int,Vector3>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,Vector3>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-118h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+30h] [rbp-110h]
  std::map<unsigned int,Vector3> *__for_range; // [rsp+38h] [rbp-108h]
  const std::pair<unsigned int const,Vector3> *v15; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,Vector3> >::type *uid; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,Vector3> >::type *pos; // [rsp+50h] [rbp-F0h]
  const std::vector<unsigned int> *group_id_vec; // [rsp+58h] [rbp-E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-E0h]
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+68h] [rbp-D8h] BYREF
  std::vector<unsigned int> v21; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+90h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+B0h] [rbp-90h] BYREF
  Vector2 M_current; // 0:xmm0_8.8

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 group_id:2020 64 16 10 timer:2006";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::getLoadGroupsWithinSight;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 64));
  std::unordered_set<unsigned int>::unordered_set(retstr);
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  scene_script_config_ptr = Scene::getScriptConfig(Scene);
  if ( scene_script_config_ptr )
  {
    __for_range = &this->last_reload_pos_map_;
    __for_begin._M_node = std::map<unsigned int,Vector3>::begin(&this->last_reload_pos_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,Vector3>::end(&this->last_reload_pos_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,Vector3>(v15);
      pos = (std::tuple_element<1,const std::pair<unsigned int const,Vector3> >::type *)std::get<1ul,unsigned int const,Vector3>(v15);
      Vector2::Vector2((Vector2 *const)&__for_end_0, pos);
      M_current = (Vector2)__for_end_0._M_current;
      SceneScriptConfig::getLoadGroupIdVecFromPos(&v21, scene_script_config_ptr, M_current);
      group_id_vec = &v21;
      __for_range_0 = &v21;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&v21)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v6;
        if ( (unsigned __int8)SceneBlockGroupComp::isGroupValid(this, *(_DWORD *)(v2 + 48)) == 1 )
          std::unordered_set<unsigned int>::insert(
            retstr,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      std::vector<unsigned int>::~vector(&v21);
      std::_Rb_tree_iterator<std::pair<unsigned int const,Vector3>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "getLoadGroupsWithinSight",
      2030);
    v7 = std::unordered_set<unsigned int>::size(retstr);
    v8 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 64));
    common::milog::MiLogStream::operator()(&v22, "[PERF] cost time[%d], group num[%zu].", v8, v7);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "getLoadGroupsWithinSight",
      2013);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v22, (const char (*)[22])"getScriptConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  if ( v23 == (char *)v2 )
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
  return retstr;
};

// Line 2036: range 00000000159C286E-00000000159C3087
std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *__fastcall SceneBlockGroupComp::getGroupTriggerCount(
        const SceneBlockGroupComp *const this,
        uint32_t group_id,
        const std::string *name)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r14d
  _BOOL4 v10; // r14d
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  const google::protobuf::Map<std::string,proto::GroupTriggerBin> *v15; // rax
  const google::protobuf::Map<std::string,proto::GroupTriggerBin> *v16; // rax
  google::protobuf::Map<std::string,proto::GroupTriggerBin>::const_pointer v17; // rax
  __int64 v18; // rax
  unsigned int __t; // [rsp+2Ch] [rbp-1A4h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-1A0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *group_bin_ptr; // [rsp+38h] [rbp-198h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+40h] [rbp-190h]
  const GroupScriptConfig *group_config_ptr; // [rsp+48h] [rbp-188h]
  std::optional<unsigned int> M_cur; // [rsp+50h] [rbp-180h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+58h] [rbp-178h] BYREF
  google::protobuf::Map<std::string,proto::GroupTriggerBin>::const_iterator b; // [rsp+60h] [rbp-170h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-150h] BYREF
  char v29[304]; // [rsp+A0h] [rbp-130h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *result; // 0:rax.5

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 group_id:2035 64 8 9 iter:2037 96 8 25 variable_config_iter:2073 128 16 14 group_ptr:2"
                        "040 160 16 16 trigger_ptr:2043 192 24 11 t_iter:2054";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::getGroupTriggerCount;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                            &this->group_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
          &__y) )
    goto LABEL_44;
  v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
  std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v3 + 128), &v6->second);
  v10 = 1;
  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 128)) )
  {
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    Group::findTrigger((Group *const)(v3 + 160), (const std::string *)v7);
    if ( std::operator!=<Trigger>((const std::shared_ptr<Trigger> *)(v3 + 160), 0LL) )
    {
      v8 = std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      std::optional<unsigned int>::optional<unsigned int &,true>(&M_cur, &v8->trigger_count);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)M_cur;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    std::shared_ptr<Trigger>::~shared_ptr((std::shared_ptr<Trigger> *const)(v3 + 160));
    if ( v9 != 1 )
      v10 = 0;
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 128));
  if ( v10 )
  {
LABEL_44:
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v13 = *p_vptr_DescribalBase + 456LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    *(_DWORD *)(v3 + 160) = (*(__int64 (__fastcall **)(Scene *, _QWORD))v13)(scene, *(unsigned int *)(v3 + 48));
    *(_QWORD *)(v3 + 168) = v14;
    ret = std::get<0ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 160));
    group_bin_ptr = std::get<1ul,int,proto::GroupBin *>((std::pair<int,proto::GroupBin*> *)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *ret )
      goto LABEL_45;
    if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*group_bin_ptr )
      goto LABEL_45;
    v15 = proto::GroupBin::trigger_map[abi:cxx11](*group_bin_ptr);
    google::protobuf::Map<std::string,proto::GroupTriggerBin>::find(
      (google::protobuf::Map<std::string,proto::GroupTriggerBin>::const_iterator *)(v3 + 192),
      v15,
      name);
    if ( *(_BYTE *)(((unsigned __int64)group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = proto::GroupBin::trigger_map[abi:cxx11](*group_bin_ptr);
    google::protobuf::Map<std::string,proto::GroupTriggerBin>::end(&b, v16);
    if ( google::protobuf::operator!=(
           (const google::protobuf::Map<std::string,proto::GroupTriggerBin>::const_iterator *)(v3 + 192),
           &b) )
    {
      v17 = google::protobuf::Map<std::string,proto::GroupTriggerBin>::const_iterator::operator->((const google::protobuf::Map<std::string,proto::GroupTriggerBin>::const_iterator *const)(v3 + 192));
      __t = proto::GroupTriggerBin::trigger_count(&v17->second);
      std::optional<unsigned int>::optional<unsigned int,true>(&M_cur, &__t);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)M_cur;
    }
    else
    {
LABEL_45:
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene_config_ptr = Scene::getScriptConfig(this->scene_);
      if ( scene_config_ptr )
      {
        group_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, *(_DWORD *)(v3 + 48));
        if ( group_config_ptr )
        {
          *(std::unordered_map<std::string,TriggerScriptConfig>::const_iterator *)(v3 + 96) = std::unordered_map<std::string,TriggerScriptConfig>::find(
                                                                                                &group_config_ptr->trigger_config_map,
                                                                                                name);
          M_cur = (std::optional<unsigned int>)std::unordered_map<std::string,TriggerScriptConfig>::end(&group_config_ptr->trigger_config_map)._M_cur;
          if ( std::__detail::operator==<std::pair<std::string const,TriggerScriptConfig>,true>(
                 (const std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true> *)(v3 + 96),
                 (const std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true> *)&M_cur) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_block_group_comp.cpp",
              "getGroupTriggerCount",
              2076);
            v18 = std::string::c_str(name);
            common::milog::MiLogStream::operator()(&v28, stru_258E9740.gap0, *(unsigned int *)(v3 + 48), v18);
            common::milog::MiLogStream::~MiLogStream(&v28);
            std::optional<unsigned int>::optional(&M_cur, (std::nullopt_t)&stru_258E9740);
          }
          else
          {
            __t = 0;
            std::optional<unsigned int>::optional<int,true>(&M_cur, (int *)&__t);
          }
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)M_cur;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "getGroupTriggerCount",
            2070);
          common::milog::MiLogStream::operator()(&v28, stru_258E9700.gap0, *(unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v28);
          std::optional<unsigned int>::optional(&M_cur, (std::nullopt_t)&stru_258E9700);
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)M_cur;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "getGroupTriggerCount",
          2064);
        common::milog::MiLogStream::operator()(&v28, stru_258E96C0.gap0);
        common::milog::MiLogStream::~MiLogStream(&v28);
        std::optional<unsigned int>::optional(&M_cur, (std::nullopt_t)&stru_258E96C0);
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false>::__node_type *)M_cur;
      }
    }
  }
  result = __y._M_cur;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2084: range 00000000159C3088-00000000159C3E13
void __cdecl SceneBlockGroupComp::procForceSilentUpdate(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::shared_ptr<Group> **v5; // rax
  std::shared_ptr<Group> **v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Group *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  Group *v17; // rax
  const GroupInitParam *InitParam; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const std::shared_ptr<Group> *v21; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  int v24; // r14d
  GameserverService *v25; // rax
  __int64 GameThreadLocal; // rax
  GameserverService *v27; // rax
  __int64 v28; // rax
  GameserverService *v29; // rax
  __int64 v30; // rax
  int v32; // r14d
  int v33; // r14d
  GameserverService *v34; // rax
  __int64 v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  GameserverService *v44; // rax
  __int64 v45; // rax
  GroupsReplacementMgr *v46; // rax
  GameserverService *v47; // rax
  __int64 v48; // rax
  int v49; // r14d
  GameserverService *v50; // rax
  __int64 v51; // rax
  _BOOL4 load_option; // [rsp+1Ch] [rbp-234h]
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-228h] BYREF
  std::vector<std::shared_ptr<Group>>::iterator __for_begin_0; // [rsp+30h] [rbp-220h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *force_silent_update_group_map; // [rsp+38h] [rbp-218h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-210h]
  std::vector<std::shared_ptr<Group>> *__for_range_0; // [rsp+48h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+50h] [rbp-200h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+58h] [rbp-1F8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+60h] [rbp-1F0h]
  const std::string *md5; // [rsp+68h] [rbp-1E8h]
  const std::string *script_md5; // [rsp+70h] [rbp-1E0h]
  std::vector<std::shared_ptr<Group>>::iterator __for_end_0; // [rsp+78h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v65; // [rsp+80h] [rbp-1D0h] BYREF
  char v66[432]; // [rsp+A0h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 22 total_unload_time:2147 64 8 9 iter:2089 96 16 10 timer:2122 128 16 14 group_ptr:2127 1"
                        "60 16 14 group_ptr:2095 192 24 34 force_silent_update_group_vec:2085 256 24 21 delay_unload_vec:"
                        "2125 320 24 15 unload_vec:2126";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::procForceSilentUpdate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -234881024;
  v3[536862729] = -218959118;
  v3[536862730] = -218103808;
  v3[536862731] = -202116109;
  std::vector<std::shared_ptr<Group>>::vector((std::vector<std::shared_ptr<Group>> *const)(v1 + 192));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 160));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
  force_silent_update_group_map = LuaConfigMgr::getForceSilentUpdateGroupMap(&v4->design_config.lua_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 160));
  __for_range = force_silent_update_group_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(force_silent_update_group_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(force_silent_update_group_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v5 = (std::shared_ptr<Group> **)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    __for_end_0._M_current = *v6;
    group_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
    _ = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
    *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                        &this->group_map_,
                                                                                        group_id);
    __for_begin_0._M_current = (std::shared_ptr<Group> *)std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v1 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)&__for_begin_0) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v1 + 64));
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v1 + 160), &v7->second);
      if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 160)) )
      {
        v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        group_script_config_ptr = Group::getScriptConfig(v8);
        if ( group_script_config_ptr )
        {
          v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          md5 = &Group::getInitParam(v12)->md5;
          script_md5 = &group_script_config_ptr->script_content.lua_content_md5;
          if ( std::operator!=<char>(md5, &group_script_config_ptr->script_content.lua_content_md5) )
          {
            std::vector<std::shared_ptr<Group>>::push_back(
              (std::vector<std::shared_ptr<Group>> *const)(v1 + 192),
              (const std::vector<std::shared_ptr<Group>>::value_type *)(v1 + 160));
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_block_group_comp.cpp",
              "procForceSilentUpdate",
              2113);
            v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v65, (const char (*)[7])"group ");
            v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            *(_DWORD *)(v1 + 48) = Group::getGroupId(v14);
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v1 + 48));
            v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v15,
                    (const char (*)[24])" md5 changed, filepath[");
            v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            InitParam = Group::getInitParam(v17);
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v16,
                    &InitParam->group_lua_file_path);
            v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" ==> ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v20,
              &group_script_config_ptr->script_content.file_path);
            common::milog::MiLogStream::~MiLogStream(&v65);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "procForceSilentUpdate",
            2104);
          v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v65,
                 (const char (*)[27])"getScriptConfig for group ");
          v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          *(_DWORD *)(v1 + 48) = Group::getGroupId(v10);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" failed.");
          common::milog::MiLogStream::~MiLogStream(&v65);
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 160));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( !std::vector<std::shared_ptr<Group>>::empty((const std::vector<std::shared_ptr<Group>> *const)(v1 + 192)) )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 96));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 256));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 320));
    __for_range_0 = (std::vector<std::shared_ptr<Group>> *)(v1 + 192);
    __for_begin_0._M_current = std::vector<std::shared_ptr<Group>>::begin((std::vector<std::shared_ptr<Group>> *const)(v1 + 192))._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<Group>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v21 = __gnu_cxx::__normal_iterator<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>::operator*(&__for_begin_0);
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v1 + 128), v21);
      v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      *(_DWORD *)(v1 + 48) = Group::getGroupId(v22);
      v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( Group::hasTimer(v23) )
      {
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v1 + 256),
          (const std::vector<unsigned int>::value_type *)(v1 + 48));
        v24 = 0;
      }
      else
      {
        v25 = ServiceBox::findService<GameserverService>();
        GameThreadLocal = (__int64)GameserverService::getGameThreadLocal(v25);
        if ( *(_BYTE *)(((unsigned __int64)(GameThreadLocal + 1640) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(GameThreadLocal + 1640) >> 3) + 0x7FFF8000) <= 3 )
        {
          GameThreadLocal = __asan_report_load4();
        }
        if ( *(_DWORD *)(GameThreadLocal + 1640) )
        {
          std::shared_ptr<Group>::shared_ptr(
            (std::shared_ptr<Group> *const)(v1 + 160),
            (const std::shared_ptr<Group> *)(v1 + 128));
          SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)(v1 + 160), 1);
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 160));
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v1 + 320),
            (const std::vector<unsigned int>::value_type *)(v1 + 48));
          v27 = ServiceBox::findService<GameserverService>();
          v28 = (__int64)GameserverService::getGameThreadLocal(v27);
          if ( *(_BYTE *)(((unsigned __int64)(v28 + 1640) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v28 + 1640) >> 3) + 0x7FFF8000) <= 3 )
          {
            v28 = __asan_report_load4();
          }
          --*(_DWORD *)(v28 + 1640);
          v24 = 2;
        }
        else
        {
          v24 = 1;
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 128));
      if ( v24 )
      {
        if ( v24 != 2 )
          break;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Group> *,std::vector<std::shared_ptr<Group>>>::operator++(&__for_begin_0);
    }
    *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96));
    v29 = ServiceBox::findService<GameserverService>();
    v30 = (__int64)GameserverService::getGameThreadLocal(v29);
    if ( *(_BYTE *)(((unsigned __int64)(v30 + 1648) >> 3) + 0x7FFF8000) )
      v30 = __asan_report_load8();
    *(_QWORD *)(v30 + 1648) += *(unsigned int *)(v1 + 48);
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 256))
      || !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 320)) )
    {
      v32 = std::vector<std::shared_ptr<Group>>::size((const std::vector<std::shared_ptr<Group>> *const)(v1 + 192));
      v33 = v32 - std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 320));
      v34 = ServiceBox::findService<GameserverService>();
      v35 = (__int64)GameserverService::getGameThreadLocal(v34);
      if ( *(_BYTE *)(((unsigned __int64)(v35 + 1672) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v35 + 1672) >> 3) + 0x7FFF8000) <= 3 )
      {
        v35 = __asan_report_load4();
      }
      *(_DWORD *)(v35 + 1672) += v33;
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/scene/scene_block_group_comp.cpp",
        "procForceSilentUpdate",
        2158);
      v36 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v65,
              (const char (*)[22])"delay unload groups [");
      v37 = common::milog::MiLogStream::operator<<<unsigned int>(v36, (const std::vector<unsigned int> *)(v1 + 256));
      v38 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v37, (const char (*)[4])"], ");
      v39 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v38,
              (const char (*)[23])" real unload groups: [");
      v40 = common::milog::MiLogStream::operator<<<unsigned int>(v39, (const std::vector<unsigned int> *)(v1 + 320));
      v41 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v40, (const char (*)[2])"]");
      v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v41, (const char (*)[12])" cost time ");
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v43, (const char (*)[5])off_258E99C0);
      common::milog::MiLogStream::~MiLogStream(&v65);
      v44 = ServiceBox::findService<GameserverService>();
      v45 = (__int64)GameserverService::getGameThreadLocal(v44);
      if ( *(_BYTE *)(((unsigned __int64)(v45 + 1656) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v45 + 1656) >> 3) + 0x7FFF8000) <= 3 )
      {
        v45 = __asan_report_load4();
      }
      if ( *(_DWORD *)(v45 + 1656) && std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
      {
        common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 96));
        if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_started_);
        load_option = this->is_started_;
        v46 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
        GroupsReplacementMgr::doInsituReload(
          v46,
          (LoadOption)load_option,
          "./src/scene/scene_block_group_comp.cpp",
          "procForceSilentUpdate",
          2171);
        v47 = ServiceBox::findService<GameserverService>();
        v48 = (__int64)GameserverService::getGameThreadLocal(v47);
        if ( *(_BYTE *)(((unsigned __int64)(v48 + 1656) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v48 + 1656) >> 3) + 0x7FFF8000) <= 3 )
        {
          v48 = __asan_report_load4();
        }
        --*(_DWORD *)(v48 + 1656);
        v49 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96));
        v50 = ServiceBox::findService<GameserverService>();
        v51 = (__int64)GameserverService::getGameThreadLocal(v50);
        if ( *(_BYTE *)(((unsigned __int64)(v51 + 1664) >> 3) + 0x7FFF8000) )
          v51 = __asan_report_load8();
        *(_QWORD *)(v51 + 1664) += v49;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 320));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 256));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  }
  std::vector<std::shared_ptr<Group>>::~vector((std::vector<std::shared_ptr<Group>> *const)(v1 + 192));
  if ( v66 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
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
  }
};

// Line 2178: range 00000000159C3E14-00000000159C4484
void __fastcall SceneBlockGroupComp::removeFromGadgetMap(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  Scene *v8; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  proto::GroupBin *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Scene *v18; // rdx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+20h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+28h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-A0h] BYREF
  char v30[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 uid:2179 48 4 13 group_id:2177 64 8 9 iter:2180";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::removeFromGadgetMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v3 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "removeFromGadgetMap",
      2183);
    common::milog::MiLogStream::operator()(
      &v29,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v3 + 48),
      *(unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v7->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = this->scene_;
  p_vptr_DescribalBase = &v8->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v10 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v10)(v8, *(unsigned int *)(v3 + 48));
  __in.second = v11;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "removeFromGadgetMap",
      2190);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v29,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      if ( BlockDataMgr::removeFromGadgetMap(*mutable_group_bin_ptr, config_id) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "removeFromGadgetMap",
          2198);
        v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v29,
                (const char (*)[48])"group bin removeFromGadgetMap failed, group_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = this->scene_;
        v19 = &v18->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          v19 = (_QWORD *)__asan_report_load8();
        v20 = *v19 + 472LL;
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v20)(v18, *(unsigned int *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "removeFromGadgetMap",
            2203);
          v21 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v29,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
      }
    }
  }
  if ( v30 == (char *)v3 )
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

// Line 2209: range 00000000159C4486-00000000159C4AF6
void __fastcall SceneBlockGroupComp::removeFromMonsterMap(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  Scene *v8; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  proto::GroupBin *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Scene *v18; // rdx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+20h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+28h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-A0h] BYREF
  char v30[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 uid:2210 48 4 13 group_id:2208 64 8 9 iter:2211";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::removeFromMonsterMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v3 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "removeFromMonsterMap",
      2214);
    common::milog::MiLogStream::operator()(
      &v29,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v3 + 48),
      *(unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v7->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = this->scene_;
  p_vptr_DescribalBase = &v8->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v10 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v10)(v8, *(unsigned int *)(v3 + 48));
  __in.second = v11;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "removeFromMonsterMap",
      2221);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v29,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      if ( BlockDataMgr::removeFromMonsterMap(*mutable_group_bin_ptr, config_id) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "removeFromMonsterMap",
          2229);
        v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v29,
                (const char (*)[49])"group bin removeFromMonsterMap failed, group_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = this->scene_;
        v19 = &v18->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          v19 = (_QWORD *)__asan_report_load8();
        v20 = *v19 + 472LL;
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v20)(v18, *(unsigned int *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "removeFromMonsterMap",
            2234);
          v21 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v29,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
      }
    }
  }
  if ( v30 == (char *)v3 )
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

// Line 2240: range 00000000159C4AF8-00000000159C5177
void __fastcall SceneBlockGroupComp::procDelGadgetList(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        bool is_add)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v8; // rax
  Scene *v9; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v11; // rax
  proto::GroupBin *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Scene *v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+38h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-A0h] BYREF
  char v32[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 8 uid:2241 48 4 13 group_id:2239 64 8 9 iter:2242";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::procDelGadgetList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v4 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "procDelGadgetList",
      2245);
    common::milog::MiLogStream::operator()(
      &v31,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v4 + 48),
      *(unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v4 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v8->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = this->scene_;
  p_vptr_DescribalBase = &v9->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v11 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v11)(v9, *(unsigned int *)(v4 + 48));
  __in.second = v12;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "procDelGadgetList",
      2252);
    v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v31,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      if ( BlockDataMgr::procDelGadgetList(*mutable_group_bin_ptr, config_id, is_add) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "procDelGadgetList",
          2260);
        v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v31,
                (const char (*)[46])"group bin procDelGadgetList failed, group_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = this->scene_;
        v20 = &v19->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          v20 = (_QWORD *)__asan_report_load8();
        v21 = *v20 + 472LL;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v21)(v19, *(unsigned int *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "procDelGadgetList",
            2265);
          v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v31,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v4 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
      }
    }
  }
  if ( v32 == (char *)v4 )
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
};

// Line 2271: range 00000000159C5178-00000000159C57F7
void __fastcall SceneBlockGroupComp::procDelMonsterList(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        bool is_add)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v8; // rax
  Scene *v9; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v11; // rax
  proto::GroupBin *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Scene *v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+38h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-A0h] BYREF
  char v32[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 8 uid:2272 48 4 13 group_id:2270 64 8 9 iter:2273";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::procDelMonsterList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v4 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "procDelMonsterList",
      2276);
    common::milog::MiLogStream::operator()(
      &v31,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v4 + 48),
      *(unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v4 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v8->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = this->scene_;
  p_vptr_DescribalBase = &v9->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v11 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v11)(v9, *(unsigned int *)(v4 + 48));
  __in.second = v12;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "procDelMonsterList",
      2283);
    v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v31,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      if ( BlockDataMgr::procDelMonsterList(*mutable_group_bin_ptr, config_id, is_add) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "procDelMonsterList",
          2291);
        v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v31,
                (const char (*)[47])"group bin procDelMonsterList failed, group_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = this->scene_;
        v20 = &v19->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          v20 = (_QWORD *)__asan_report_load8();
        v21 = *v20 + 472LL;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v21)(v19, *(unsigned int *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "procDelMonsterList",
            2296);
          v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v31,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v4 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
      }
    }
  }
  if ( v32 == (char *)v4 )
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
};

// Line 2302: range 00000000159C57F8-00000000159C5F57
void __fastcall SceneBlockGroupComp::setGadgetState(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t state,
        char is_create)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v9; // rax
  Scene *v10; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v12; // rax
  proto::GroupBin *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  char v20; // di
  uint32_t v21; // esi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  Scene *v25; // rdx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+38h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-A0h] BYREF
  char v40[128]; // [rsp+70h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 8 uid:2303 48 4 13 group_id:2301 64 8 9 iter:2304";
  *(_QWORD *)(v5 + 16) = SceneBlockGroupComp::setGadgetState;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v5 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "setGadgetState",
      2307);
    common::milog::MiLogStream::operator()(
      &v39,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v5 + 48),
      *(unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v9->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = this->scene_;
  p_vptr_DescribalBase = &v10->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v12 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v12)(v10, *(unsigned int *)(v5 + 48));
  __in.second = v13;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "setGadgetState",
      2314);
    v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v39,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      v20 = is_create;
      v21 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      {
        v20 = (char)mutable_group_bin_ptr;
        __asan_report_load8();
      }
      if ( BlockDataMgr::setGadgetState(*mutable_group_bin_ptr, v21, config_id, state, v20) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "setGadgetState",
          2326);
        v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v39,
                (const char (*)[43])"group bin setGadgetState failed, group_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v5 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = this->scene_;
        v26 = &v25->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          v26 = (_QWORD *)__asan_report_load8();
        v27 = *v26 + 472LL;
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v27 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v27)(v25, *(unsigned int *)(v5 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "setGadgetState",
            2331);
          v28 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v39,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v5 + 48));
          v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "setGadgetState",
        2320);
      v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v39,
              (const char (*)[32])"findGroupBin nullptr, group_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
  }
  if ( v40 == (char *)v5 )
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
};

// Line 2336: range 00000000159C5F58-00000000159C66C0
void __fastcall SceneBlockGroupComp::procTrigger(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        const std::string *trigger_name,
        uint32_t trigger_count,
        bool is_del)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v9; // rax
  Scene *v10; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v12; // rax
  proto::GroupBin *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  bool v20; // r8
  uint32_t v21; // edx
  uint32_t v22; // esi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  Scene *v26; // rdx
  _QWORD *v27; // rax
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+38h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-A0h] BYREF
  char v40[128]; // [rsp+70h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 8 uid:2337 48 4 13 group_id:2335 64 8 9 iter:2338";
  *(_QWORD *)(v5 + 16) = SceneBlockGroupComp::procTrigger;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v5 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v5 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "procTrigger",
      2341);
    common::milog::MiLogStream::operator()(
      &v39,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v5 + 48),
      *(unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v5 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v9->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = this->scene_;
  p_vptr_DescribalBase = &v10->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v12 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v12)(v10, *(unsigned int *)(v5 + 48));
  __in.second = v13;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "procTrigger",
      2348);
    v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v39,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      v20 = is_del;
      v21 = *(_DWORD *)(v5 + 32);
      v22 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( BlockDataMgr::procTrigger(*mutable_group_bin_ptr, v22, v21, trigger_name, trigger_count, v20) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "procTrigger",
          2358);
        v23 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v39,
                (const char (*)[40])"group bin procTrigger failed, group_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v5 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v26 = this->scene_;
        v27 = &v26->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          v27 = (_QWORD *)__asan_report_load8();
        v28 = *v27 + 472LL;
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          v28 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v28)(v26, *(unsigned int *)(v5 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "procTrigger",
            2363);
          v29 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v39,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v5 + 48));
          v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "procTrigger",
        2353);
      v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v39,
              (const char (*)[32])"findGroupBin nullptr, group_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
  }
  if ( v40 == (char *)v5 )
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
};

// Line 2368: range 00000000159C66C2-00000000159C6E10
void __fastcall SceneBlockGroupComp::procVariable(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        const std::string *var_name,
        int32_t var_value)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v8; // rax
  Scene *v9; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v11; // rax
  proto::GroupBin *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // esi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Scene *v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+38h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-A0h] BYREF
  char v36[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 8 uid:2369 48 4 13 group_id:2367 64 8 9 iter:2370";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::procVariable;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v4 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "procVariable",
      2373);
    common::milog::MiLogStream::operator()(
      &v35,
      "group_id %u alive. force unload first. uid:%u",
      *(unsigned int *)(v4 + 48),
      *(unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v35);
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v4 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v8->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = this->scene_;
  p_vptr_DescribalBase = &v9->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v11 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v11)(v9, *(unsigned int *)(v4 + 48));
  __in.second = v12;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "procVariable",
      2380);
    v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v35,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      v19 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( BlockDataMgr::procVariable(*mutable_group_bin_ptr, v19, var_name, var_value) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "procVariable",
          2391);
        v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v35,
                (const char (*)[41])"group bin procVariable failed, group_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v4 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = this->scene_;
        v24 = &v23->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          v24 = (_QWORD *)__asan_report_load8();
        v25 = *v24 + 472LL;
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v25)(v23, *(unsigned int *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "procVariable",
            2396);
          v26 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v35,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v4 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "procVariable",
        2385);
      v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v35,
              (const char (*)[32])"findGroupBin nullptr, group_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
  }
  if ( v36 == (char *)v4 )
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
};

// Line 2401: range 00000000159C6E12-00000000159C7551
void __fastcall SceneBlockGroupComp::setTargetSuite(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t target_suite)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Scene *Scene; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false>::pointer v7; // rax
  Scene *v8; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  proto::GroupBin *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  Scene *v22; // rdx
  _QWORD *v23; // rax
  unsigned __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+20h] [rbp-C0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+28h] [rbp-B8h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-A0h] BYREF
  char v34[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 uid:2402 48 4 13 group_id:2400 64 8 9 iter:2403";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::setTargetSuite;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v3 + 32) = Scene::getOwnerUid(Scene);
  *(std::unordered_map<unsigned int,std::shared_ptr<Group>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::find(
                                                                                      &this->group_map_,
                                                                                      (const std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Group>>::end(&this->group_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Group>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Group> >,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "setTargetSuite",
      2406);
    common::milog::MiLogStream::operator()(&v33, "group_id %u alive. force unload first.", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Group> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__in, &v7->second);
    SceneBlockGroupComp::forceUnloadGroup(this, (GroupPtr *)&__in, 1);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__in);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = this->scene_;
  p_vptr_DescribalBase = &v8->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v10 = *p_vptr_DescribalBase + 456LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  __in.first = (*(__int64 (__fastcall **)(Scene *, _QWORD))v10)(v8, *(unsigned int *)(v3 + 48));
  __in.second = v11;
  ret = std::get<0ul,int,proto::GroupBin *>(&__in);
  mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "setTargetSuite",
      2413);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v33,
            (const char (*)[31])"findGroupBin failed, group_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *mutable_group_bin_ptr )
    {
      v18 = *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( BlockDataMgr::setTargetSuite(*mutable_group_bin_ptr, v18, target_suite) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "setTargetSuite",
          2424);
        v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v33,
                (const char (*)[43])"group bin setTargetSuite failed, group_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v22 = this->scene_;
        v23 = &v22->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          v23 = (_QWORD *)__asan_report_load8();
        v24 = *v23 + 472LL;
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Scene *, _QWORD))v24)(v22, *(unsigned int *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "setTargetSuite",
            2429);
          v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v33,
                  (const char (*)[42])" save failed. group bin not found. group:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 48));
          v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "setTargetSuite",
        2418);
      v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v33,
              (const char (*)[32])"findGroupBin nullptr, group_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
  if ( v34 == (char *)v3 )
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

// Line 2434: range 00000000159C7552-00000000159C763C
void __cdecl SceneBlockGroupComp::finalRemoveGroup(
        SceneBlockGroupComp *const this,
        Group *group,
        bool is_need_refresh_replacement)
{
  uint32_t GroupId; // edx
  unsigned __int64 v4; // rax
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::key_type __x[5]; // [rsp+2Ch] [rbp-14h] BYREF

  Group::onBeforeRemove(group);
  Group::setIsUnloaded(group, 1);
  GroupId = Group::getGroupId(group);
  if ( SceneBlockGroupComp::isGroupDelayUnregister(this, GroupId) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(this->_vptr_SceneCompBase + 34);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(SceneBlockGroupComp *const, Group *, _QWORD, bool))v4)(
      this,
      group,
      0LL,
      is_need_refresh_replacement);
  }
  __x[0] = Group::getGroupId(group);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::erase(&this->group_map_, __x);
};

// Line 2445: range 00000000159C763E-00000000159C7A53
void __cdecl SceneBlockGroupComp::setGroupUnregisterCleared(
        SceneBlockGroupComp *const this,
        Group *group,
        bool is_unregister_cleared,
        bool is_need_refresh_replacement)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  GroupsReplacementMgr *v16; // rax
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 group_id:2446";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::setGroupUnregisterCleared;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = Group::getGroupId(group);
  if ( !SceneBlockGroupComp::isDynamicGroup(this, *(_DWORD *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "setGroupUnregisterCleared",
      2449);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v20, (const char (*)[8])" group:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])off_258EA2C0);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else if ( is_unregister_cleared != SceneBlockGroupComp::isGroupDelayUnregister(this, *(_DWORD *)(v4 + 32)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    v10 = !LuaConfigMgr::isGroupJoinReplacement(&v9->design_config.lua_config_mgr, *(_DWORD *)(v4 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( v10 )
      is_need_refresh_replacement = 0;
    if ( is_unregister_cleared )
    {
      std::unordered_set<unsigned int>::insert(
        &this->unregister_cleared_group_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v4 + 32));
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "setGroupUnregisterCleared",
        2464);
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v20, (const char (*)[8])" group:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v12,
        (const char (*)[25])" set unregister cleared.");
    }
    else
    {
      std::unordered_set<unsigned int>::erase(
        &this->unregister_cleared_group_set_,
        (const std::unordered_set<unsigned int>::key_type *)(v4 + 32));
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "setGroupUnregisterCleared",
        2469);
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v20, (const char (*)[8])" group:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v14,
        (const char (*)[29])" set not unregister cleared.");
    }
    common::milog::MiLogStream::~MiLogStream(&v20);
    if ( is_need_refresh_replacement && std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
    {
      v16 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
      GroupsReplacementMgr::refreshGroupsReplacement(v16);
    }
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2479: range 00000000159C7A54-00000000159C7B25
bool __fastcall SceneBlockGroupComp::isGroupDelayUnregister(const SceneBlockGroupComp *const this, uint32_t group_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:2478";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupDelayUnregister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->unregister_cleared_group_set_,
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

// Line 2484: range 00000000159C7B26-00000000159C7E01
_BOOL8 __fastcall SceneBlockGroupComp::isDynamicGroup(const SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const Scene *Scene; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const Scene *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  const Scene *v13; // rax
  _BOOL8 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  unsigned int OwnerUid; // [rsp+20h] [rbp-A0h] BYREF
  uint32_t scene_id; // [rsp+24h] [rbp-9Ch]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:2483";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isDynamicGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  scene_id = LuaConfigMgr::getSceneIdByGroupId(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  Scene = SceneCompBase::getScene((const SceneCompBase *const)this);
  if ( scene_id == Scene::getSceneId(Scene) )
  {
    group_info_config_ptr = Group::getGroupInfoScriptConfig(scene_id, *(_DWORD *)(v2 + 32), 0);
    if ( group_info_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
      result = group_info_config_ptr->is_dynamic_load;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_block_group_comp.cpp",
      "isDynamicGroup",
      2488);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v20, (const char (*)[7])"group:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" NOT on scene:");
    v10 = SceneCompBase::getScene((const SceneCompBase *const)this);
    val = Scene::getSceneId(v10);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    v13 = SceneCompBase::getScene((const SceneCompBase *const)this);
    OwnerUid = Scene::getOwnerUid(v13);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0LL;
  }
  if ( v21 == (char *)v2 )
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

// Line 2500: range 00000000159C7E02-00000000159C7E4F
void __cdecl SceneBlockGroupComp::onModifyReplaceable(SceneBlockGroupComp *const this, uint32_t group_id)
{
  GroupsReplacementMgr *v2; // rax

  if ( std::operator!=<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    v2 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    GroupsReplacementMgr::onModifyReplaceable(v2, group_id);
  }
};

// Line 2508: range 00000000159C7E50-00000000159C7ED8
void __cdecl SceneBlockGroupComp::onLeaveScene(SceneBlockGroupComp *const this, Player *player)
{
  uint32_t Uid; // edx
  unsigned __int64 v3; // rax

  Uid = Player::getUid(player);
  SceneBlockGroupComp::erasePlayerReloadPos(this, Uid);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_SceneCompBase + 36);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  (*(void (__fastcall **)(SceneBlockGroupComp *const))v3)(this);
};

// Line 2515: range 00000000159C7EDA-00000000159C7FE5
bool __fastcall SceneBlockGroupComp::isGroupReplaced(const SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const std::unordered_set<unsigned int> *AllReplacedGroups; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:2514";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::isGroupReplaced;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( std::operator==<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_) )
  {
    result = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
    AllReplacedGroups = GroupsReplacementMgr::getAllReplacedGroups(v6);
    result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
               AllReplacedGroups,
               (const unsigned int *)(v2 + 32));
  }
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

// Line 2524: range 00000000159C7FE6-00000000159C8480
void __cdecl SceneBlockGroupComp::tryUnloadResidualInvalidGroups(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  bool v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(SceneBlockGroupComp *const, const std::unordered_set<unsigned int> *); // r14
  std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const std::unordered_set<unsigned int> *LastReloadActiveGroups; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t unload_invalid_groups_threshold; // [rsp+14h] [rbp-BCh]
  unsigned __int64 val; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 33 need_unload_group_num_before:2549 48 4 21 group_num_before:2550 64 16 15 config_ptr:2526";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::tryUnloadResidualInvalidGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  unload_invalid_groups_threshold = 250;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  if ( std::operator!=<Config>((const std::shared_ptr<Config> *)(v1 + 64), 0LL) )
  {
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v4->unload_invalid_groups_threshold >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->unload_invalid_groups_threshold >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    unload_invalid_groups_threshold = v4->unload_invalid_groups_threshold;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->need_unload_group_num_ )
  {
    v5 = std::map<unsigned int,Vector3>::size(&this->last_reload_pos_map_)
      && std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_) < unload_invalid_groups_threshold;
    if ( !v5
      && !std::operator==<GroupsReplacementMgr>(0LL, &this->replacement_mgr_ptr_)
      && !std::unordered_map<unsigned int,unsigned int>::size(&this->find_group_count_map_) )
    {
      v6 = *(unsigned __int8 *)(((unsigned __int64)&this->need_unload_group_num_ >> 3) + 0x7FFF8000);
      if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
        __asan_report_load4();
      *(_DWORD *)(v1 + 32) = this->need_unload_group_num_;
      *(_DWORD *)(v1 + 48) = std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(this->_vptr_SceneCompBase + 41);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(void (__fastcall **)(SceneBlockGroupComp *const, const std::unordered_set<unsigned int> *))v7;
      v9 = std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GroupsReplacementMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->replacement_mgr_ptr_);
      LastReloadActiveGroups = GroupsReplacementMgr::getLastReloadActiveGroups(v9);
      v8(this, LastReloadActiveGroups);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_block_group_comp.cpp",
        "tryUnloadResidualInvalidGroups",
        2552);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v21,
              (const char (*)[38])"[GROUP] timer unload invalid groups. ");
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])"group_num from ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])off_258EA5A0);
      val = std::unordered_map<unsigned int,std::shared_ptr<Group>>::size(&this->group_map_);
      v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v15,
              (const char (*)[22])"need_unload_num from ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])off_258EA5A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->need_unload_group_num_);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( v22 == (char *)v1 )
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
};

// Line 2559: range 00000000159C8482-00000000159C85EB
bool __cdecl SceneBlockGroupComp::isGroupOverrideParamValid(
        const SceneBlockGroupComp *const this,
        const GroupOverrideParam *group_override_param)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  const Vector3 *v5; // rax
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::unordered_map<unsigned int,GroupEntityOverrideParam> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<unsigned int const,GroupEntityOverrideParam> *v10; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupEntityOverrideParam> >::type *config_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupEntityOverrideParam> >::type *group_entity_override_param; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &group_override_param->entity_override_param_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupEntityOverrideParam>::begin(&group_override_param->entity_override_param_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupEntityOverrideParam>::end(&group_override_param->entity_override_param_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupEntityOverrideParam>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupEntityOverrideParam>,false,false>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,GroupEntityOverrideParam>(v10);
    group_entity_override_param = (std::tuple_element<1,const std::pair<unsigned int const,GroupEntityOverrideParam> >::type *)std::get<1ul,unsigned int const,GroupEntityOverrideParam>(v10);
    if ( !SceneBlockGroupComp::isGroupEntityOverrideParamValid(this, group_entity_override_param) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "isGroupOverrideParamValid",
        2564);
      v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v13,
             (const char (*)[43])"[GROUP] override param invalid. config_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, config_id);
      v4 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v3, (const char (*)[7])", pos:");
      v5 = std::optional<Vector3>::value(&group_entity_override_param->pos_opt);
      operator<<(v4, v5);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupEntityOverrideParam>,false,false>::operator++(&__for_begin);
  }
  return 1;
};

// Line 2573: range 00000000159C85EC-00000000159C866A
bool __cdecl SceneBlockGroupComp::isGroupEntityOverrideParamValid(
        const SceneBlockGroupComp *const this,
        const GroupEntityOverrideParam *group_entity_override_param)
{
  Scene *scene; // rbx
  const Vector3 *v3; // rax

  if ( !std::optional<Vector3>::has_value(&group_entity_override_param->pos_opt) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  v3 = std::optional<Vector3>::value(&group_entity_override_param->pos_opt);
  return Scene::isPosValid(scene, v3);
};

// Line 2586: range 00000000159C866C-00000000159C89CA
__int64 __fastcall SceneBlockGroupComp::overrideGroupParam(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        const GroupOverrideParam *group_override_param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  GroupOverrideParam *v10; // rax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 group_id:2585";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::overrideGroupParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Scene::isHomeScene(this->scene_) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "overrideGroupParam",
      2590);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v13,
           (const char (*)[52])"[GROUP] override param in not home scene. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Scene::getSceneId(this->scene_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
    goto LABEL_15;
  }
  if ( !SceneBlockGroupComp::isGroupOverrideParamValid(this, group_override_param) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "overrideGroupParam",
      2595);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v13,
           (const char (*)[42])"[GROUP] override param invalid. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  v10 = std::unordered_map<unsigned int,GroupOverrideParam>::operator[](
          &this->group_override_param_map_,
          (const std::unordered_map<unsigned int,GroupOverrideParam>::key_type *)(v3 + 32));
  GroupOverrideParam::operator=(v10, group_override_param);
  result = 0LL;
LABEL_15:
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

// Line 2603: range 00000000159C89CC-00000000159C9702
__int64 __fastcall SceneBlockGroupComp::overrideGroupParam(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        const Transform *virtual_center_transform,
        const std::unordered_map<unsigned int,Transform> *entity_transform_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupEntityOverrideParam>,false,false>::pointer v15; // r14
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::mapped_type *v16; // rax
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::mapped_type *v17; // rcx
  __int64 v18; // rdx
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-258h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-250h] BYREF
  std::unordered_map<unsigned int,Transform>::const_iterator __for_end; // [rsp+38h] [rbp-248h] BYREF
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-240h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-238h]
  std::unordered_map<unsigned int,GroupEntityOverrideParam> *entity_override_param_map; // [rsp+50h] [rbp-230h]
  const std::unordered_map<unsigned int,Transform> *__for_range; // [rsp+58h] [rbp-228h]
  const std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range_0; // [rsp+60h] [rbp-220h]
  const std::unordered_map<unsigned int,NpcScriptConfig> *__for_range_1; // [rsp+68h] [rbp-218h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_2; // [rsp+70h] [rbp-210h]
  const std::unordered_map<unsigned int,RegionScriptConfig> *__for_range_3; // [rsp+78h] [rbp-208h]
  const std::pair<unsigned int const,RegionScriptConfig> *v33; // [rsp+80h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,RegionScriptConfig> >::type *config_id_3; // [rsp+88h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,RegionScriptConfig> >::type *region_script_config; // [rsp+90h] [rbp-1F0h]
  GroupEntityOverrideParam *entity_override_param_3; // [rsp+98h] [rbp-1E8h]
  const std::pair<unsigned int const,GadgetScriptConfig> *v37; // [rsp+A0h] [rbp-1E0h]
  std::tuple_element<0,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id_2; // [rsp+A8h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_script_config; // [rsp+B0h] [rbp-1D0h]
  GroupEntityOverrideParam *entity_override_param_2; // [rsp+B8h] [rbp-1C8h]
  const std::pair<unsigned int const,NpcScriptConfig> *v41; // [rsp+C0h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,NpcScriptConfig> >::type *config_id_1; // [rsp+C8h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,NpcScriptConfig> >::type *npc_script_config; // [rsp+D0h] [rbp-1B0h]
  GroupEntityOverrideParam *entity_override_param_1; // [rsp+D8h] [rbp-1A8h]
  const std::pair<unsigned int const,MonsterScriptConfig> *v45; // [rsp+E0h] [rbp-1A0h]
  std::tuple_element<0,const std::pair<unsigned int const,MonsterScriptConfig> >::type *config_id_0; // [rsp+E8h] [rbp-198h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_script_config; // [rsp+F0h] [rbp-190h]
  GroupEntityOverrideParam *entity_override_param_0; // [rsp+F8h] [rbp-188h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_4; // [rsp+100h] [rbp-180h]
  const std::pair<unsigned int const,unsigned int> *v50; // [rsp+108h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *config_id_4; // [rsp+110h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *follow_config_id; // [rsp+118h] [rbp-168h]
  const std::pair<unsigned int const,Transform> *v53; // [rsp+120h] [rbp-160h]
  std::tuple_element<0,const std::pair<unsigned int const,Transform> >::type *config_id; // [rsp+128h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,Transform> >::type *transform; // [rsp+130h] [rbp-150h]
  GroupEntityOverrideParam *entity_override_param; // [rsp+138h] [rbp-148h]
  Vector3 __u; // [rsp+140h] [rbp-140h] BYREF
  Vector3 v58; // [rsp+14Ch] [rbp-134h] BYREF
  Vector3 v59; // [rsp+158h] [rbp-128h] BYREF
  Vector3 left; // [rsp+164h] [rbp-11Ch] BYREF
  common::milog::MiLogStream v61; // [rsp+170h] [rbp-110h] BYREF
  char v62[240]; // [rsp+190h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 13 scene_id:2604 48 4 13 group_id:2602 64 8 9 iter:2669 96 56 25 group_override_param:2617";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::overrideGroupParam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 32) = Scene::getSceneId(this->scene_);
  group_script_config_ptr = Group::getGroupScriptConfig(*(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), 0);
  if ( group_script_config_ptr )
  {
    group_info_config_ptr = Group::getGroupInfoScriptConfig(*(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), 0);
    if ( group_info_config_ptr )
    {
      GroupOverrideParam::GroupOverrideParam((GroupOverrideParam *const)(v4 + 96));
      entity_override_param_map = (std::unordered_map<unsigned int,GroupEntityOverrideParam> *)(v4 + 96);
      __for_range = entity_transform_map;
      *(std::unordered_map<unsigned int,Transform>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,Transform>::begin(entity_transform_map);
      __for_end._M_cur = std::unordered_map<unsigned int,Transform>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,Transform>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Transform>,false> *)(v4 + 64),
                &__for_end) )
      {
        v53 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,Transform>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,Transform>,false,false> *const)(v4 + 64));
        config_id = std::get<0ul,unsigned int const,Transform>(v53);
        transform = (std::tuple_element<1,const std::pair<unsigned int const,Transform> >::type *)std::get<1ul,unsigned int const,Transform>(v53);
        entity_override_param = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
                                  entity_override_param_map,
                                  config_id);
        std::optional<Vector3>::operator=<Vector3 const&>(&entity_override_param->pos_opt, &transform->position);
        std::optional<Vector3>::operator=<Vector3 const&>(&entity_override_param->rot_opt, &transform->rotation);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,Transform>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,Transform>,false,false> *const)(v4 + 64));
      }
      if ( !Vector3::isZero(&virtual_center_transform->position) )
      {
        __for_range_0 = &group_script_config_ptr->monster_config_map;
        *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(&group_script_config_ptr->monster_config_map);
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Transform>,false>::__node_type *)std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v4 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)&__for_end) )
        {
          v45 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v4 + 64));
          config_id_0 = std::get<0ul,unsigned int const,MonsterScriptConfig>(v45);
          monster_script_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v45);
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupEntityOverrideParam>,unsigned int>(
                  entity_override_param_map,
                  config_id_0) )
          {
            entity_override_param_0 = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
                                        entity_override_param_map,
                                        config_id_0);
            left = operator-(&monster_script_config->pos, &group_info_config_ptr->pos);
            __u = operator+(&left, &virtual_center_transform->position);
            std::optional<Vector3>::operator=<Vector3>(&entity_override_param_0->pos_opt, &__u);
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v4 + 64));
        }
        __for_range_1 = &group_script_config_ptr->npc_config_map;
        *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,NpcScriptConfig>::begin(&group_script_config_ptr->npc_config_map);
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Transform>,false>::__node_type *)std::unordered_map<unsigned int,NpcScriptConfig>::end(__for_range_1)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,NpcScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v4 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)&__for_end) )
        {
          v41 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v4 + 64));
          config_id_1 = std::get<0ul,unsigned int const,NpcScriptConfig>(v41);
          npc_script_config = (std::tuple_element<1,const std::pair<unsigned int const,NpcScriptConfig> >::type *)std::get<1ul,unsigned int const,NpcScriptConfig>(v41);
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupEntityOverrideParam>,unsigned int>(
                  entity_override_param_map,
                  config_id_1) )
          {
            entity_override_param_1 = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
                                        entity_override_param_map,
                                        config_id_1);
            left = operator-(&npc_script_config->pos, &group_info_config_ptr->pos);
            v58 = operator+(&left, &virtual_center_transform->position);
            std::optional<Vector3>::operator=<Vector3>(&entity_override_param_1->pos_opt, &v58);
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v4 + 64));
        }
        __for_range_2 = &group_script_config_ptr->gadget_config_map;
        *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map);
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Transform>,false>::__node_type *)std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_2)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v4 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)&__for_end) )
        {
          v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v4 + 64));
          config_id_2 = std::get<0ul,unsigned int const,GadgetScriptConfig>(v37);
          gadget_script_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v37);
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupEntityOverrideParam>,unsigned int>(
                  entity_override_param_map,
                  config_id_2) )
          {
            entity_override_param_2 = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
                                        entity_override_param_map,
                                        config_id_2);
            left = operator-(&gadget_script_config->pos, &group_info_config_ptr->pos);
            v59 = operator+(&left, &virtual_center_transform->position);
            std::optional<Vector3>::operator=<Vector3>(&entity_override_param_2->pos_opt, &v59);
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v4 + 64));
        }
        __for_range_3 = &group_script_config_ptr->region_config_map;
        *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,RegionScriptConfig>::begin(&group_script_config_ptr->region_config_map);
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Transform>,false>::__node_type *)std::unordered_map<unsigned int,RegionScriptConfig>::end(__for_range_3)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,RegionScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v4 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)&__for_end) )
        {
          v33 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v4 + 64));
          config_id_3 = std::get<0ul,unsigned int const,RegionScriptConfig>(v33);
          region_script_config = (std::tuple_element<1,const std::pair<unsigned int const,RegionScriptConfig> >::type *)std::get<1ul,unsigned int const,RegionScriptConfig>(v33);
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupEntityOverrideParam>,unsigned int>(
                  entity_override_param_map,
                  config_id_3) )
          {
            entity_override_param_3 = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
                                        entity_override_param_map,
                                        config_id_3);
            v59 = operator-(&region_script_config->pos, &group_info_config_ptr->pos);
            left = operator+(&v59, &virtual_center_transform->position);
            std::optional<Vector3>::operator=<Vector3>(&entity_override_param_3->pos_opt, &left);
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v4 + 64));
        }
      }
      __for_range_4 = &group_script_config_ptr->pos_follow_config_id_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&group_script_config_ptr->pos_follow_config_id_map)._M_cur;
      __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_4)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end_0) )
      {
        v50 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
        config_id_4 = std::get<0ul,unsigned int const,unsigned int>(v50);
        follow_config_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v50);
        *(std::unordered_map<unsigned int,GroupEntityOverrideParam>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,GroupEntityOverrideParam>::find(
                                                                                              entity_override_param_map,
                                                                                              follow_config_id);
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Transform>,false>::__node_type *)std::unordered_map<unsigned int,GroupEntityOverrideParam>::end(entity_override_param_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,GroupEntityOverrideParam>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupEntityOverrideParam>,false> *)(v4 + 64),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupEntityOverrideParam>,false> *)&__for_end) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_block_group_comp.cpp",
            "overrideGroupParam",
            2672);
          v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v61,
                  (const char (*)[19])"follow_config_id: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, follow_config_id);
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v13, (const char (*)[29])off_258EA8E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
        else
        {
          v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupEntityOverrideParam>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupEntityOverrideParam>,false,false> *const)(v4 + 64));
          v16 = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
                  entity_override_param_map,
                  config_id_4);
          v17 = v16;
          if ( ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&v16->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v16 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(&v16->pos_opt._M_payload._M_engaged
                                                                                 + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            __asan_report_store_n(v16, 16LL);
          }
          if ( (((unsigned __int8)v15 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&v15->second.pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v15 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->second.pos_opt._M_payload._M_engaged
                                                                                 + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            __asan_report_load_n(&v15->second, 16LL);
          }
          v18 = *(_QWORD *)&v15->second.pos_opt._M_payload._M_payload._M_value.z;
          *(_QWORD *)v17->pos_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)v15->second.pos_opt._M_payload._M_payload._M_empty.gap0;
          *(_QWORD *)&v17->pos_opt._M_payload._M_payload._M_value.z = v18;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
      }
      v10 = SceneBlockGroupComp::overrideGroupParam(this, *(_DWORD *)(v4 + 48), (const GroupOverrideParam *)(v4 + 96));
      GroupOverrideParam::~GroupOverrideParam((GroupOverrideParam *const)(v4 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "overrideGroupParam",
        2614);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v61,
              (const char (*)[38])"findGroupInfoConfig fails, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v61);
      v10 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "overrideGroupParam",
      2608);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v61,
           (const char (*)[39])"findGroupScriptConfig fails,scene_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v61);
    v10 = -1;
  }
  result = v10;
  if ( v62 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 2681: range 00000000159C9704-00000000159C9724
void __cdecl SceneBlockGroupComp::clearAllOverrideGroupParam(SceneBlockGroupComp *const this)
{
  std::unordered_map<unsigned int,GroupOverrideParam>::clear(&this->group_override_param_map_);
};

// Line 2686: range 00000000159C9726-00000000159C998D
__int64 __fastcall SceneBlockGroupComp::setGroupEntityParamByGm(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        const GroupEntityOverrideParam *group_entity_override_param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  std::unordered_map<unsigned int,GroupOverrideParam>::mapped_type *v8; // rax
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::mapped_type *v9; // rax
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::mapped_type *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdi
  char v15[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 group_id:2685 64 4 14 config_id:2685";
  *(_QWORD *)(v4 + 16) = SceneBlockGroupComp::setGroupEntityParamByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = config_id;
  if ( !SceneBlockGroupComp::isGroupEntityOverrideParamValid(this, group_entity_override_param) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::unordered_map<unsigned int,GroupOverrideParam>::operator[](
           &this->group_override_param_map_,
           (const std::unordered_map<unsigned int,GroupOverrideParam>::key_type *)(v4 + 48));
    v9 = std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator[](
           &v8->entity_override_param_map,
           (const std::unordered_map<unsigned int,GroupEntityOverrideParam>::key_type *)(v4 + 64));
    v10 = v9;
    if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v9->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v9 + 31) & 7) >= *(_BYTE *)(((unsigned __int64)(&v9->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
    {
      __asan_report_store_n(v9, 32LL);
    }
    if ( ((unsigned __int8)group_entity_override_param & 7) >= *(_BYTE *)(((unsigned __int64)group_entity_override_param >> 3)
                                                                        + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)group_entity_override_param >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&group_entity_override_param->rot_opt._M_payload._M_engaged + 3) >> 3)
                  + 0x7FFF8000) != 0
      && (((unsigned __int8)group_entity_override_param + 31) & 7) >= *(_BYTE *)(((unsigned __int64)(&group_entity_override_param->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load_n(group_entity_override_param, 32LL);
    }
    v11 = *(_QWORD *)&group_entity_override_param->pos_opt._M_payload._M_payload._M_value.z;
    *(_QWORD *)v10->pos_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)group_entity_override_param->pos_opt._M_payload._M_payload._M_empty.gap0;
    *(_QWORD *)&v10->pos_opt._M_payload._M_payload._M_value.z = v11;
    v12 = *(_QWORD *)&group_entity_override_param->rot_opt._M_payload._M_payload._M_value.z;
    *(_QWORD *)v10->rot_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)group_entity_override_param->rot_opt._M_payload._M_payload._M_empty.gap0;
    *(_QWORD *)&v10->rot_opt._M_payload._M_payload._M_value.z = v12;
    result = 0LL;
  }
  if ( v15 == (char *)v4 )
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

// Line 2696: range 00000000159C998E-00000000159C9B0A
__int64 __fastcall SceneBlockGroupComp::removeGroupEntityParamByGm(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupOverrideParam>,false,false>::pointer v7; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupOverrideParam>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 group_id:2695 48 4 14 config_id:2695 64 8 9 iter:2697";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::removeGroupEntityParamByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = group_id;
  *(_DWORD *)(v3 + 48) = config_id;
  *(std::unordered_map<unsigned int,GroupOverrideParam>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,GroupOverrideParam>::find(
                                                                                  &this->group_override_param_map_,
                                                                                  (const std::unordered_map<unsigned int,GroupOverrideParam>::key_type *)(v3 + 32));
  __y._M_cur = std::unordered_map<unsigned int,GroupOverrideParam>::end(&this->group_override_param_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,GroupOverrideParam>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupOverrideParam>,false> *)(v3 + 64),
          &__y) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupOverrideParam>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupOverrideParam>,false,false> *const)(v3 + 64));
    std::unordered_map<unsigned int,GroupEntityOverrideParam>::erase(
      &v7->second.entity_override_param_map,
      (const std::unordered_map<unsigned int,GroupEntityOverrideParam>::key_type *)(v3 + 48));
  }
  result = 0LL;
  if ( v10 == (char *)v3 )
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

// Line 2707: range 00000000159C9B0C-00000000159C9C68
int32_t __cdecl SceneBlockGroupComp::setGroupVirtualCenterByGm(
        SceneBlockGroupComp *const this,
        uint32_t group_id,
        const Transform *virtual_center_transform)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 25 entity_transform_map:2708";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::setGroupVirtualCenterByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::unordered_map<unsigned int,Transform>::unordered_map((std::unordered_map<unsigned int,Transform> *const)(v3 + 32));
  SceneBlockGroupComp::overrideGroupParam(
    this,
    group_id,
    virtual_center_transform,
    (const std::unordered_map<unsigned int,Transform> *)(v3 + 32));
  std::unordered_map<unsigned int,Transform>::~unordered_map((std::unordered_map<unsigned int,Transform> *const)(v3 + 32));
  result = 0;
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 2714: range 00000000159C9C6A-00000000159C9D40
__int64 __fastcall SceneBlockGroupComp::resetGroupOverrideParamByGm(SceneBlockGroupComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:2713";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::resetGroupOverrideParamByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  std::unordered_map<unsigned int,GroupOverrideParam>::erase(
    &this->group_override_param_map_,
    (const std::unordered_map<unsigned int,GroupOverrideParam>::key_type *)(v2 + 32));
  result = 0LL;
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

// Line 2720: range 00000000159C9D42-00000000159CA260
__int64 __fastcall SceneBlockGroupComp::calculateRelyActivityWorldLevelLimit(
        const SceneBlockGroupComp *const this,
        uint32_t group_id,
        uint32_t pattern_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  PlayerActivityComp *ActivityComp; // rax
  Player *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  __int64 result; // rax
  uint32_t scene_id; // [rsp+14h] [rbp-DCh]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 22 world_level_limit:2721 48 4 21 rely_activity_id:2737 64 4 13 group_id:2719 80 4 15 pat"
                        "tern_id:2719 96 16 15 player_ptr:2722";
  *(_QWORD *)(v3 + 16) = SceneBlockGroupComp::calculateRelyActivityWorldLevelLimit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 64) = group_id;
  *(_DWORD *)(v3 + 80) = pattern_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  *(_DWORD *)(v3 + 32) = SceneExcelConfigMgr::getMaxWorldLevel(&v6->design_config.txt_config_mgr.scene_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v3 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "calculateRelyActivityWorldLevelLimit",
      2725);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v29,
           (const char (*)[34])"find own player failed, group id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" pattern_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v10 = *(_DWORD *)(v3 + 32);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_id = Scene::getSceneId(this->scene_);
    group_info_config_ptr = Group::getGroupInfoScriptConfig(scene_id, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80));
    if ( group_info_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = group_info_config_ptr->rely_start_world_level_limit_activity_id;
      if ( *(_DWORD *)(v3 + 48) )
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        ActivityComp = Player::getActivityComp(v14);
        if ( !PlayerActivityComp::getStartWorldLevelLimitByActivityId(
                ActivityComp,
                *(_DWORD *)(v3 + 48),
                (uint32_t *)(v3 + 32)) )
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          BasicComp = Player::getBasicComp(v16);
          *(_DWORD *)(v3 + 32) = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_block_group_comp.cpp",
            "calculateRelyActivityWorldLevelLimit",
            2743);
          v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v29, (const char (*)[7])"group:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 64));
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v19,
                  (const char (*)[16])" rely activity:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v3 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v21,
                  (const char (*)[47])" not started. using current world level limit:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 32));
          v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          operator<<(v23, v24);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
      }
      v10 = *(_DWORD *)(v3 + 32);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "calculateRelyActivityWorldLevelLimit",
        2733);
      v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v29,
              (const char (*)[46])"group info script config not found for group:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" pattern_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v10 = *(_DWORD *)(v3 + 32);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = v10;
  if ( v30 == (char *)v3 )
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

// Line 2750: range 00000000159CA262-00000000159CABEA
int32_t __cdecl SceneBlockGroupComp::randomSelectAndRegisterGroupsByGm(
        SceneBlockGroupComp *const this,
        uint32_t group_count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  LuaConfigMgr *p_lua_config_mgr; // r14
  Scene *Scene; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v9; // r14
  Scene *v10; // rax
  bool *v11; // r8
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *v12; // rax
  unsigned __int64 v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rdx
  char *v15; // rsi
  std::unordered_map<unsigned int,bool>::mapped_type *v16; // rax
  _BYTE *v17; // rdx
  char v18; // cl
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  int32_t result; // eax
  bool v25; // [rsp+17h] [rbp-189h] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-188h] BYREF
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+30h] [rbp-170h]
  const std::unordered_map<unsigned int,GroupInfoScriptConfig> *__for_range; // [rsp+38h] [rbp-168h]
  const std::pair<unsigned int const,GroupInfoScriptConfig> *v31; // [rsp+40h] [rbp-160h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_id; // [rsp+48h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_info_config; // [rsp+50h] [rbp-150h]
  std::unordered_map<unsigned int,bool> *__for_range_0; // [rsp+58h] [rbp-148h]
  const std::pair<unsigned int const,bool> *v35; // [rsp+60h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *group_id_0; // [rsp+68h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_reg_by_gm; // [rsp+70h] [rbp-130h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-128h]
  std::shared_ptr<Config> v39; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v40; // [rsp+90h] [rbp-110h] BYREF
  char v41[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:2796 64 24 23 selected_group_vec:2756 128 24 24 candidate_group_vec:2756";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::randomSelectAndRegisterGroupsByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( !group_count )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "randomSelectAndRegisterGroupsByGm",
      2753);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v40,
      (const char (*)[31])"group_count cannot less than 0");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v5 = -1;
    goto LABEL_41;
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  if ( !std::unordered_map<unsigned int,bool>::empty(&this->gm_random_selected_dynamic_group_map_) )
    goto LABEL_16;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.lua_config_mgr;
  Scene = SceneCompBase::getScene((SceneCompBase *const)this);
  SceneId = Scene::getSceneId(Scene);
  scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, SceneId);
  std::shared_ptr<Config>::~shared_ptr(&v39);
  if ( scene_script_config_ptr )
  {
    __for_range = &scene_script_config_ptr->group_info_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,GroupInfoScriptConfig>::begin(&scene_script_config_ptr->group_info_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(&scene_script_config_ptr->group_info_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator*(&__for_begin);
      group_id = std::get<0ul,unsigned int const,GroupInfoScriptConfig>(v31);
      group_info_config = (std::tuple_element<1,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *)std::get<1ul,unsigned int const,GroupInfoScriptConfig>(v31);
      if ( *(char *)(((unsigned __int64)&group_info_config->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&group_info_config->is_dynamic_load);
      if ( group_info_config->is_dynamic_load )
      {
        v25 = 0;
        std::unordered_map<unsigned int,bool>::emplace<unsigned int const&,bool>(
          &this->gm_random_selected_dynamic_group_map_,
          group_id,
          &v25,
          (const unsigned int *)&this->gm_random_selected_dynamic_group_map_,
          v11);
        std::vector<unsigned int>::emplace_back<unsigned int const&>(
          (std::vector<unsigned int> *const)(v2 + 128),
          group_id,
          group_id);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator++(&__for_begin);
    }
LABEL_16:
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      __for_range_0 = &this->gm_random_selected_dynamic_group_map_;
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false>::__node_type *)std::unordered_map<unsigned int,bool>::begin(&this->gm_random_selected_dynamic_group_map_)._M_cur;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false>::__node_type *)std::unordered_map<unsigned int,bool>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)&__for_end) )
      {
        v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false> *const)&__for_begin);
        group_id_0 = std::get<0ul,unsigned int const,bool>(v35);
        v12 = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v35);
        is_reg_by_gm = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v12);
        }
        if ( !*is_reg_by_gm )
          std::vector<unsigned int>::emplace_back<unsigned int const&>(
            (std::vector<unsigned int> *const)(v2 + 128),
            group_id_0,
            group_id_0);
        std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false> *const)&__for_begin);
      }
    }
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 128),
      (std::vector<unsigned int> *)(v2 + 64),
      group_count);
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_block_group_comp.cpp",
        "randomSelectAndRegisterGroupsByGm",
        2788);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v40,
        (const char (*)[23])"randomSelect empty vec");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (unsigned __int64)(this->_vptr_SceneCompBase + 12);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(SceneBlockGroupComp *const, unsigned __int64, _QWORD, _QWORD))v13)(
             this,
             v2 + 64,
             0LL,
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_block_group_comp.cpp",
          "randomSelectAndRegisterGroupsByGm",
          2793);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v40,
          (const char (*)[22])"registerGroups failed");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v5 = -1;
      }
      else
      {
        __for_range_1 = (std::vector<unsigned int> *)(v2 + 64);
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v14;
          v15 = (char *)(v2 + 48);
          v16 = std::unordered_map<unsigned int,bool>::operator[](
                  &this->gm_random_selected_dynamic_group_map_,
                  (const std::unordered_map<unsigned int,bool>::key_type *)(v2 + 48));
          v17 = v16;
          v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
          if ( v18 != 0 && ((unsigned __int8)v16 & 7) >= v18 )
          {
            LOBYTE(v15) = v18 != 0;
            __asan_report_store1(v16, v15, v16);
          }
          *v17 = 1;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_block_group_comp.cpp",
          "randomSelectAndRegisterGroupsByGm",
          2800);
        v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v40,
                (const char (*)[37])"size of total dynamic groups by gm: ");
        val = std::unordered_map<unsigned int,bool>::size(&this->gm_random_selected_dynamic_group_map_);
        v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, &val);
        v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v20,
                (const char (*)[40])", size of prev candidate groups by gm: ");
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128));
        v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v21,
                (const unsigned __int64 *)&__for_begin);
        v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v22,
                (const char (*)[37])", size of selected group this time: ");
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 64));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v23,
          (const unsigned __int64 *)&__for_end);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v5 = 0;
      }
    }
    goto LABEL_40;
  }
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_block_group_comp.cpp",
    "randomSelectAndRegisterGroupsByGm",
    2763);
  v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v40,
         (const char (*)[33])"cannot find config of scene_id: ");
  v10 = SceneCompBase::getScene((SceneCompBase *const)this);
  *(_DWORD *)(v2 + 48) = Scene::getSceneId(v10);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v40);
  v5 = -1;
LABEL_40:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
LABEL_41:
  result = v5;
  if ( v41 == (char *)v2 )
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
  return result;
};

// Line 2807: range 00000000159CABEC-00000000159CB106
int32_t __cdecl SceneBlockGroupComp::unregisterAllRandomSelectedGroupsByGm(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *v4; // rax
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  char *v8; // rsi
  std::unordered_map<unsigned int,bool>::mapped_type *v9; // rax
  _BYTE *v10; // rdx
  char v11; // cl
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  std::unordered_map<unsigned int,bool>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,bool>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,bool> *__for_range; // [rsp+28h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,bool> *v20; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *group_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_reg_by_gm; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 group_id:2822 64 24 25 registered_group_vec:2808";
  *(_QWORD *)(v1 + 16) = SceneBlockGroupComp::unregisterAllRandomSelectedGroupsByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
  __for_range = &this->gm_random_selected_dynamic_group_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,bool>::begin(&this->gm_random_selected_dynamic_group_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,bool>::end(&this->gm_random_selected_dynamic_group_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,bool>(v20);
    v4 = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v20);
    is_reg_by_gm = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v4);
    }
    if ( *is_reg_by_gm )
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        (std::vector<unsigned int> *const)(v1 + 64),
        group_id,
        group_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_SceneCompBase + 13);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(SceneBlockGroupComp *const, unsigned __int64, _QWORD))v5)(this, v1 + 64, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_block_group_comp.cpp",
      "unregisterAllRandomSelectedGroupsByGm",
      2818);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v23, (const char (*)[24])"unregisterGroups failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = -1;
  }
  else
  {
    __for_range_0 = (std::vector<unsigned int> *)(v1 + 64);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v7;
      v8 = (char *)(v1 + 48);
      v9 = std::unordered_map<unsigned int,bool>::operator[](
             &this->gm_random_selected_dynamic_group_map_,
             (const std::unordered_map<unsigned int,bool>::key_type *)(v1 + 48));
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && ((unsigned __int8)v9 & 7) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store1(v9, v8, v9);
      }
      *v10 = 0;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_block_group_comp.cpp",
      "unregisterAllRandomSelectedGroupsByGm",
      2827);
    v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v23,
            (const char (*)[29])"size of total groups by gm: ");
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::unordered_map<unsigned int,bool>::size(&this->gm_random_selected_dynamic_group_map_);
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v12,
            (const unsigned __int64 *)&__for_begin);
    v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            v13,
            (const char (*)[36])", size of registered groups by gm: ");
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = v6;
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
